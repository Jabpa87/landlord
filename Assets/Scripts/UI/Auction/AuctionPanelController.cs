using System;
using System.Collections.Generic;
using UnityEngine;

namespace Landlord.UI.Auction
{
    public sealed class AuctionPanelController : MonoBehaviour
    {
        [SerializeField] AuctionPanelView view;
        [SerializeField] UnityEngine.Object auctionServiceProvider;
        [SerializeField] int historyBufferMax = 30;
        [SerializeField] int historyVisibleCount = 10;

        readonly Queue<BidHistoryItemVM> _historyBuffer = new Queue<BidHistoryItemVM>(30);
        IAuctionService _service;
        AuctionSessionConfig _config;

        public event Action<AuctionResult> OnAuctionCompleted;
        public AuctionState CurrentState => _service != null ? _service.CurrentState : null;

        void Awake()
        {
            EnsureViewLinked();
            WireViewEvents();
        }

        void OnDestroy()
        {
            UnwireViewEvents();
            UnwireService();
        }

        void Update()
        {
            _service?.Tick(Time.unscaledDeltaTime);
        }

        public void SetView(AuctionPanelView newView)
        {
            UnwireViewEvents();
            view = newView;
            WireViewEvents();
        }

        public void OpenAuction(AuctionSessionConfig config)
        {
            _config = config;
            if (_config == null) return;

            EnsureViewLinked();
            if (view == null)
            {
                Debug.LogError("[AuctionPanelController] View is not assigned.", this);
                return;
            }

            EnsureViewLayoutReady();

            _service = new AuctionService();
            WireService();
            _historyBuffer.Clear();

            view.Show(new AuctionViewModel
            {
                propertyName = _config.propertyName,
                tileInfo = _config.tileInfo,
                propertyColor = _config.propertyGroupColor,
                propertyIcon = _config.propertyIcon,
                startBid = _config.startBid
            });

            _service.StartSession(_config);
        }

        public void CloseAuction()
        {
            view?.Hide();
            _historyBuffer.Clear();
            UnwireService();
            _service = null;
            _config = null;
        }

        public bool TrySubmitBid(string playerId, int amount, out string reason)
        {
            if (_service == null)
            {
                reason = "No auction session";
                return false;
            }
            return _service.TrySubmitBid(playerId, amount, out reason);
        }

        public bool TrySubmitPass(string playerId, out string reason)
        {
            if (_service == null)
            {
                reason = "No auction session";
                return false;
            }
            return _service.TrySubmitPass(playerId, out reason);
        }

        void WireViewEvents()
        {
            if (view == null) return;
            view.OnBidIncrement -= OnBidIncrement;
            view.OnBidCustomRequested -= OnBidCustomRequested;
            view.OnPass -= OnPass;
            view.OnClose -= OnClose;
            view.OnBidIncrement += OnBidIncrement;
            view.OnBidCustomRequested += OnBidCustomRequested;
            view.OnPass += OnPass;
            view.OnClose += OnClose;
        }

        void UnwireViewEvents()
        {
            if (view == null) return;
            view.OnBidIncrement -= OnBidIncrement;
            view.OnBidCustomRequested -= OnBidCustomRequested;
            view.OnPass -= OnPass;
            view.OnClose -= OnClose;
        }

        void WireService()
        {
            if (_service == null) return;
            _service.OnStateChanged += OnStateChanged;
            _service.OnBidEvent += OnBidEvent;
            _service.OnAuctionEnded += OnAuctionEnded;
        }

        void UnwireService()
        {
            if (_service == null) return;
            _service.OnStateChanged -= OnStateChanged;
            _service.OnBidEvent -= OnBidEvent;
            _service.OnAuctionEnded -= OnAuctionEnded;
        }

        void OnStateChanged(AuctionState state)
        {
            if (view == null || state == null) return;

            view.SetTimer(state.elapsedSeconds);
            view.UpdateCurrentBid(new CurrentBidVM
            {
                currentBid = state.currentBid,
                minNextBid = state.MinNextBid,
                leadingPlayerName = string.IsNullOrEmpty(state.leadingPlayerName) ? "None" : state.leadingPlayerName,
                leadingPlayerColor = state.leadingPlayerColor
            });

            var statuses = new List<PlayerStatusVM>(state.participants.Count);
            for (int i = 0; i < state.participants.Count; i++)
            {
                AuctionParticipantState p = state.participants[i];
                statuses.Add(new PlayerStatusVM
                {
                    playerId = p.playerId,
                    playerName = p.playerName,
                    playerColor = p.playerColor,
                    avatar = p.avatar,
                    wallet = p.wallet,
                    lastBid = p.lastBid,
                    status = ResolveStatus(p, state.currentTurnPlayerId)
                });
            }
            view.SetPlayerStatuses(statuses);

            AuctionParticipantState currentTurn = FindParticipant(state, state.currentTurnPlayerId);
            bool isLocalTurn;
            if (!string.IsNullOrEmpty(_config != null ? _config.localPlayerId : string.Empty))
                isLocalTurn = currentTurn != null && currentTurn.playerId == _config.localPlayerId;
            else
                isLocalTurn = currentTurn != null && !currentTurn.isAI;

            bool canBid = state.phase == AuctionPhase.Bidding &&
                          currentTurn != null &&
                          isLocalTurn &&
                          !currentTurn.hasPassed &&
                          !currentTurn.isOut;
            int activeWallet = canBid ? currentTurn.wallet : 0;
            view.SetControlsInteractable(canBid, activeWallet, state.MinNextBid);
        }

        void OnBidEvent(BidEvent evt)
        {
            if (view == null || evt == null) return;
            int amount = evt.amount;
            if (amount <= 0 && CurrentState != null)
                amount = CurrentState.currentBid;
            var vm = new BidHistoryItemVM
            {
                playerName = evt.playerName,
                playerColor = evt.playerColor,
                actionText = evt.type == BidEventType.Bid ? "BID" : evt.type == BidEventType.Pass ? "PASS" : "OUT",
                amount = amount,
                timestampSeconds = evt.timestampSeconds
            };
            _historyBuffer.Enqueue(vm);
            int max = _config != null ? Mathf.Max(1, _config.historyBufferMax) : Mathf.Max(1, historyBufferMax);
            while (_historyBuffer.Count > max)
            {
                _historyBuffer.Dequeue();
            }
            view.AddHistoryItem(vm);
        }

        void OnAuctionEnded(AuctionResult result)
        {
            if (view != null)
            {
                view.ShowAuctionResult(new AuctionResultVM
                {
                    winnerName = result != null && result.hasWinner ? result.winnerName : "No Winner",
                    winnerColor = result != null ? result.winnerColor : Color.white,
                    finalPrice = result != null ? result.finalPrice : 0
                });
            }
            OnAuctionCompleted?.Invoke(result);
        }

        void OnBidIncrement(int increment)
        {
            AuctionState state = CurrentState;
            if (state == null || state.phase != AuctionPhase.Bidding) return;
            AuctionParticipantState currentTurn = FindParticipant(state, state.currentTurnPlayerId);
            if (currentTurn == null || currentTurn.isAI || currentTurn.hasPassed || currentTurn.isOut)
            {
                Debug.LogWarning($"[AuctionPanelController] Bid ignored. turn={(currentTurn != null ? currentTurn.playerName : "null")} isAI={(currentTurn != null && currentTurn.isAI)} passed={(currentTurn != null && currentTurn.hasPassed)} out={(currentTurn != null && currentTurn.isOut)}");
                return;
            }

            int target = state.currentBid + Mathf.Max(0, increment);
            if (target < state.MinNextBid) target = state.MinNextBid;
            if (target > currentTurn.wallet) target = currentTurn.wallet;
            if (!TrySubmitBid(currentTurn.playerId, target, out string reason))
            {
                Debug.LogWarning($"[AuctionPanelController] Bid submit failed. player={currentTurn.playerName} target={target} reason={reason}");
            }
        }

        void OnBidCustomRequested()
        {
            AuctionState state = CurrentState;
            if (view == null || state == null) return;
            AuctionParticipantState currentTurn = FindParticipant(state, state.currentTurnPlayerId);
            if (currentTurn == null || currentTurn.isAI || currentTurn.hasPassed || currentTurn.isOut) return;

            int min = state.MinNextBid;
            int max = currentTurn.wallet;
            view.ShowCustomBidModal(min, max, value =>
            {
                TrySubmitBid(currentTurn.playerId, value, out _);
            }, null);
        }

        void OnPass()
        {
            AuctionState state = CurrentState;
            if (state == null || state.phase != AuctionPhase.Bidding) return;
            AuctionParticipantState currentTurn = FindParticipant(state, state.currentTurnPlayerId);
            if (currentTurn == null || currentTurn.isAI || currentTurn.hasPassed || currentTurn.isOut) return;
            if (!TrySubmitPass(currentTurn.playerId, out string reason))
            {
                Debug.LogWarning($"[AuctionPanelController] Pass submit failed. player={currentTurn.playerName} reason={reason}");
            }
        }

        void OnClose()
        {
            view?.Hide();
        }

        static AuctionParticipantState FindParticipant(AuctionState state, string playerId)
        {
            if (state == null || string.IsNullOrEmpty(playerId)) return null;
            for (int i = 0; i < state.participants.Count; i++)
            {
                if (state.participants[i].playerId == playerId) return state.participants[i];
            }
            return null;
        }

        static string ResolveStatus(AuctionParticipantState p, string turnPlayerId)
        {
            if (p == null) return "OUT";
            if (!string.IsNullOrEmpty(turnPlayerId) && p.playerId == turnPlayerId && !p.hasPassed && !p.isOut) return "TURN";
            if (p.isLeading) return "LEADING";
            if (p.isOut) return "OUT";
            if (p.hasPassed) return "PASSED";
            return "BIDDING";
        }

        void EnsureViewLinked()
        {
            if (view == null) view = GetComponent<AuctionPanelView>();
            if (view == null) view = FindAnyObjectByType<AuctionPanelView>();
            if (view != null) SetView(view);
        }

        void EnsureViewLayoutReady()
        {
            if (view == null) return;
            if (view.HasUsableVisualRoot()) return;

            AuctionPanelMockupBuilder builder = view.GetComponent<AuctionPanelMockupBuilder>();
            if (builder == null) builder = view.gameObject.AddComponent<AuctionPanelMockupBuilder>();
            builder.BuildMockupLayout();
            Debug.Log("[AuctionPanelController] Auto-built auction mockup layout before OpenAuction.");
        }
    }
}
