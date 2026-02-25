using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UIElements;
using Random = UnityEngine.Random;

public class TurnManager : MonoBehaviour
{
    [Header("Core Controllers")]
    [Tooltip("Single execution entrypoint for gameplay requests from UI/board.")]
    public GameController gameController;
    [Tooltip("Single source of truth for game state + turn ownership.")]
    public GameStateMachine stateMachine;
    [Tooltip("Centralized input permissions (human vs AI, buttons/board/popup interaction).")]
    public InputGate inputGate;

    [Header("Players")]
    public List<Player> players = new List<Player>();

    [Header("Character Database")]
    public CharacterDatabase characterDB;

    [Header("Perk Card Tuning")]
    [Tooltip("Percent of GO salary added by GO Bonus card (e.g. 0.5 = +50%).")]
    public float perkGoBonusPercent = 0.5f;
    [Tooltip("Number of uses for GO Bonus card.")]
    public int perkGoBonusUses = 3;
    [Tooltip("Extra mortgage value percent for Mortgage Boost card (e.g. 0.2 = +20%).")]
    public float perkMortgageBoostPercent = 0.2f;
    [Tooltip("Rent reduction percent for Rent Shield card (e.g. 0.5 = 50%).")]
    public float perkRentShieldPercent = 0.5f;
    [Tooltip("Build discount percent for Build Discount card (e.g. 0.2 = 20%).")]
    public float perkBuildDiscountPercent = 0.2f;
    [Tooltip("Bail cost when using Bail Discount card.")]
    public int perkBailDiscountAmount = 25000;

    [Header("Economy")]
    [Tooltip("Salary paid when a player PASSES GO (wraps from last tile to index 0).")]
    public int goSalary = 200000; // ₦200,000 per turn (passing GO)
    
    [Header("Free Parking")]
    [Tooltip("Money pool collected from taxes and fees, awarded to player landing on Free Parking")]
    public int freeParkingPool = 0;

    [Header("UI Toolkit")]
    [Tooltip("Reference to UI Document Manager that handles all UI Toolkit elements")]
    public UIDocumentManager uiManager;
    [Tooltip("Optional: runs perk card reveal animation at game start. If set, StartTurn() runs after the sequence.")]
    public PerkRevealController perkRevealController;
    
    [Header("Auction System")]
    [Tooltip("Reference to AuctionSystem component (handles property auctions)")]
    public AuctionSystem auctionSystem;
    
    [Header("Trade System")]
    [Tooltip("Reference to TradeSystem component (handles player trading)")]
    public TradeSystem tradeSystem;
    
    [Header("Building Supply")]
    [Tooltip("Reference to BuildingSupplyManager (tracks house/hotel supply)")]
    public BuildingSupplyManager buildingSupplyManager;
    
    [Header("Dice Animation")]
    [Tooltip("DiceRoller component for animated dice rolling. Leave null to use instant rolls.")]
    public DiceRoller diceRoller;

    [Header("AI")]
    [Tooltip("Delay before AI rolls dice.")]
    public float aiRollDelay = 0.6f;
    [Tooltip("Delay before AI makes a UI choice (buy/skip/jail).")]
    public float aiDecisionDelay = 0.6f;
    [Tooltip("Max seconds to allow an AI turn before forcing end turn.")]
    public float aiMaxTurnDuration = 20f;
    [Header("AI Strategy")]
    [Tooltip("Minimum cash AI tries to keep after purchases/builds.")]
    public int aiCashReserve = 200000;
    [Tooltip("Minimum cash AI keeps when a buy completes a monopoly.")]
    public int aiCashReserveForMonopoly = 100000;
    [Tooltip("Minimum score required to buy a property (higher = more selective).")]
    public float aiBuyScoreThreshold = 22f;
    [Tooltip("Minimum rent-to-cost ROI (delta rent / build cost) to build on a monopoly.")]
    public float aiBuildMinROI = 0.12f;
    [Tooltip("Max builds per AI turn.")]
    public int aiMaxBuildsPerTurn = 1;
    [Tooltip("If dice animation callback is not received within this time, use a fallback roll so the turn doesn't hang.")]
    public float diceCallbackTimeoutSeconds = 15f;

    [Header("Board Path")]
    [Tooltip("Optional: assign in Inspector. If empty, built at runtime from TileInfo objects in scene. Right-click this component → Auto-fill Board Path from Scene.")]
    public Transform[] boardPath;

    private int currentPlayerIndex = 0;
    private bool turnInProgress = false;
    private bool debugMoveInProgress = false;
    private bool aiTurnInProgress = false;
    private Coroutine aiTurnRoutine;
    private Coroutine aiWatchdogRoutine;
    private float aiTurnStartTime;
    private bool aiAwaitingBonusRoll = false;
    private Player pendingDebtPlayer;
    private Player pendingDebtCreditor;
    private int pendingDebtAmount;
    private bool _diceRollProcessedForTurn = false;
    private int _activeDiceRollToken = 0;
    private Coroutine _diceFallbackRoutine;
    private bool _hasShownPreGameCharacterSetup;

    public int CurrentPlayerIndex => currentPlayerIndex;

    public void SetCurrentPlayerIndex(int index)
    {
        if (players == null || players.Count == 0) { currentPlayerIndex = 0; return; }
        currentPlayerIndex = Mathf.Clamp(index, 0, players.Count - 1);
    }

    public void ResumeAfterLoad()
    {
        turnInProgress = false;
        aiTurnInProgress = false;
        aiAwaitingBonusRoll = false;
        _diceRollProcessedForTurn = false;
        StartTurn();
    }

    void Start()
    {
        if (gameController == null) gameController = FindFirstObjectByType<GameController>();
        if (stateMachine == null) stateMachine = FindFirstObjectByType<GameStateMachine>();
        if (inputGate == null) inputGate = FindFirstObjectByType<InputGate>();

        // Always connect UI buttons
        ConnectUIButtons();

        // If players list is empty, try to auto-find players in the scene
        if (players == null || players.Count == 0)
        {
            Player[] foundPlayers = FindObjectsByType<Player>(FindObjectsSortMode.None);
            if (foundPlayers.Length > 0)
            {
                players = new List<Player>(foundPlayers);
                Debug.Log($"TurnManager: Auto-found {players.Count} players in scene.");
            }
        }

        if (players != null && players.Count > 0)
        {
            InitializePlayers();
        }
        else
        {
            Debug.LogWarning("TurnManager: No players assigned or found. Roll will not work until players are configured.");
        }
    }

    void Update()
    {
        // Debug: move player with random steps (bypasses dice UI) - uses new Input System
        if (Keyboard.current != null && Keyboard.current.spaceKey.wasPressedThisFrame)
        {
            TryDebugMove();
        }
    }

    void TryDebugMove()
    {
        if (turnInProgress || debugMoveInProgress) return;

        Player p = GetCurrentPlayer();
        if (p == null) return;

        int steps = Random.Range(1, 7) + Random.Range(1, 7);
        debugMoveInProgress = true;
        turnInProgress = true;

        StartCoroutine(DebugMoveAndWait(p, steps));
    }

    IEnumerator DebugMoveAndWait(Player p, int steps)
    {
        Debug.Log($"[DebugMove] Moving {p.playerName} by {steps} steps (spacebar).");
        yield return p.MoveSteps(steps, goSalary);

        // Wait for any choice UI to resolve
        while (p.IsAwaitingChoice)
            yield return null;

        debugMoveInProgress = false;
        // Keep turnInProgress true so EndTurn() will run when user clicks End Turn (fixes freeze after debug move)

        if (uiManager != null && uiManager.EndTurnButton != null && !uiManager.IsPropertyManagerPanelOpen)
        {
            uiManager.EndTurnButton.Enabled = true;
            TurnDebugState.InputEnabled = "EndTurn";
        }

        UpdateHUD(steps, 0, 0, p);
    }
    
    void ConnectUIButtons()
    {
        // Connect UI Toolkit buttons (even if players not ready yet)
        if (uiManager != null)
        {
            if (uiManager.RollButton != null)
            {
                uiManager.RollButton.Clicked -= RollDice;
                uiManager.RollButton.Clicked -= OnRollButtonClicked;
                uiManager.RollButton.Clicked += OnRollButtonClicked;
            }
            
            if (uiManager.EndTurnButton != null)
            {
                uiManager.EndTurnButton.Clicked -= EndTurn;
                uiManager.EndTurnButton.Clicked -= OnEndTurnButtonClicked;
                uiManager.EndTurnButton.Clicked += OnEndTurnButtonClicked;
            }
            
            // Jail UI buttons
            if (uiManager.PayBailButton != null)
            {
                uiManager.PayBailButton.clicked -= PayBail;
                uiManager.PayBailButton.clicked -= OnPayBailButtonClicked;
                uiManager.PayBailButton.clicked += OnPayBailButtonClicked;
            }
            
            if (uiManager.UseCardButton != null)
            {
                uiManager.UseCardButton.clicked -= UseJailCard;
                uiManager.UseCardButton.clicked -= OnUseJailCardButtonClicked;
                uiManager.UseCardButton.clicked += OnUseJailCardButtonClicked;
            }
            
            if (uiManager.WaitButton != null)
            {
                uiManager.WaitButton.clicked -= WaitInJail;
                uiManager.WaitButton.clicked -= OnWaitInJailButtonClicked;
                uiManager.WaitButton.clicked += OnWaitInJailButtonClicked;
            }

            if (uiManager.TryGetJailPanelUGUI(out JailPanelUGUI jailPanelUGUI))
            {
                jailPanelUGUI.PayBailClicked -= OnPayBailButtonClicked;
                jailPanelUGUI.PayBailClicked += OnPayBailButtonClicked;
                jailPanelUGUI.UseCardClicked -= OnUseJailCardButtonClicked;
                jailPanelUGUI.UseCardClicked += OnUseJailCardButtonClicked;
                jailPanelUGUI.WaitClicked -= OnWaitInJailButtonClicked;
                jailPanelUGUI.WaitClicked += OnWaitInJailButtonClicked;
            }
            
            // Property panel buttons (BUY, SKIP) - handled by TurnManager to ensure current player is called
            if (uiManager.BuyButton != null)
            {
                uiManager.BuyButton.clicked -= OnBuyButtonClicked; // Remove if already connected
                uiManager.BuyButton.clicked += OnBuyButtonClicked;
            }
            
            if (uiManager.SkipButton != null)
            {
                uiManager.SkipButton.clicked -= OnSkipButtonClicked; // Remove if already connected
                uiManager.SkipButton.clicked += OnSkipButtonClicked;
            }

            if (uiManager.TryGetPropertyPanelUGUI(out BuyPropertyPanelUGUI propertyPanelUGUI))
            {
                propertyPanelUGUI.BuyClicked -= OnBuyButtonClicked;
                propertyPanelUGUI.BuyClicked += OnBuyButtonClicked;
                propertyPanelUGUI.AuctionClicked -= OnAuctionButtonClicked;
                propertyPanelUGUI.AuctionClicked += OnAuctionButtonClicked;
                propertyPanelUGUI.SkipClicked -= OnSkipButtonClicked;
                propertyPanelUGUI.SkipClicked += OnSkipButtonClicked;
            }
            
            // Manage Properties (opens panel)
            if (uiManager.ManagePropertiesButton != null)
            {
                uiManager.ManagePropertiesButton.Clicked -= OnManagePropertiesClicked;
                uiManager.ManagePropertiesButton.Clicked += OnManagePropertiesClicked;
            }

            // Trade button
            if (uiManager.TradeButton != null)
            {
                uiManager.TradeButton.Clicked -= OnTradeButtonClicked; // Remove if already connected
                uiManager.TradeButton.Clicked += OnTradeButtonClicked;
            }

            // Menu button -> in-game Settings panel (text size Small/Medium/Large)
            if (uiManager.MenuButton != null)
            {
                uiManager.MenuButton.Clicked -= OnMenuButtonClicked;
                uiManager.MenuButton.Clicked += OnMenuButtonClicked;
            }
        }
        else
        {
            Debug.LogWarning("TurnManager: UIDocumentManager not assigned! UI will not work.");
        }
    }

    // Initialize players (can be called by MainMenuManager after configuration)
    public void InitializePlayers()
    {
        if (players == null || players.Count == 0)
        {
            Debug.LogError("TurnManager: Cannot initialize - no players assigned!");
            return;
        }
        
        // Build or use board path so players can move (fixes "Move step not assigned or empty" on mobile)
        if (boardPath == null || boardPath.Length == 0)
        {
            boardPath = BuildBoardPathFromScene();
            if (boardPath != null && boardPath.Length > 0)
                Debug.Log($"TurnManager: Built board path from scene ({boardPath.Length} tiles).");
        }

        // Initialize player indices and names
        for (int i = 0; i < players.Count; i++)
        {
            if (players[i] != null)
            {
                players[i].playerIndex = i;
                // Set default name if not set
                if (string.IsNullOrEmpty(players[i].playerName))
                {
                    players[i].playerName = $"Player {i + 1}";
                }

                // Assign board path so movement works (Player prefab often has null boardPoints)
                if (boardPath != null && boardPath.Length > 0 &&
                    (players[i].boardPoints == null || players[i].boardPoints.Length == 0))
                {
                    players[i].boardPoints = boardPath;
                    Debug.Log($"TurnManager: Assigned board path ({boardPath.Length} tiles) to {players[i].playerName}.");
                }
                
                // Ensure all players have uiManager assigned (use TurnManager's if not set)
                if (players[i].uiManager == null && uiManager != null)
                {
                    players[i].uiManager = uiManager;
                    Debug.Log($"Player {i + 1} ({players[i].playerName}): Assigned TurnManager's uiManager");
                }
                
                // Ensure all players have turnManager reference
                if (players[i].turnManager == null)
                {
                    players[i].turnManager = this;
                }

                // Assign perk card from character database (one per player at start)
                if (characterDB != null && players[i].characterIndex >= 0 && players[i].characterIndex < characterDB.CharacterCount)
                {
                    Character c = characterDB.GetCharacter(players[i].characterIndex);
                    if (c != null)
                    {
                        players[i].characterName = c.characterName;
                        players[i].ApplyCharacterData(c);
                        players[i].turnsTaken = 0;
                        players[i].creditTrustUsed = false;
                        players[i].legalShieldUsed = false;
                        players[i].bidPenaltyUsed = false;
                        players[i].mortgagesThisTurn = 0;
                        var tuning = new PerkCardTuning
                        {
                            goBonusPercent = perkGoBonusPercent,
                            goBonusUses = perkGoBonusUses,
                            mortgageBoostPercent = perkMortgageBoostPercent,
                            rentShieldPercent = perkRentShieldPercent,
                            buildDiscountPercent = perkBuildDiscountPercent,
                            bailDiscountAmount = perkBailDiscountAmount
                        };
                        var perkCard = PerkCardCatalog.CreateForCharacter(c, tuning);
                        if (perkCard != null)
                        {
                            players[i].AddPerkCard(perkCard);
                        }
                    }
                }

                if (players[i].HasCharacterEffect(CharacterEffectKeys.BailDiscount))
                {
                    players[i].jailBailCost = perkBailDiscountAmount;
                }
                
                // Apply visual settings (color to SpriteRenderer)
                players[i].ApplyVisualSettings();
                
                // Token scale: reduce by 40% so tokens fit within tiles
                players[i].transform.localScale = new Vector3(0.05038466f, 0.05038466f, 0.23020074f);
            }
        }

        // Initialize systems
        if (auctionSystem == null)
        {
            auctionSystem = FindFirstObjectByType<AuctionSystem>();
        }
        
        if (tradeSystem == null)
        {
            tradeSystem = FindFirstObjectByType<TradeSystem>();
            if (tradeSystem != null)
            {
                tradeSystem.turnManager = this;
                tradeSystem.uiManager = uiManager;
            }
        }
        
        if (buildingSupplyManager == null)
        {
            buildingSupplyManager = FindFirstObjectByType<BuildingSupplyManager>();
        }
        
        // Connect UI buttons (if not already connected)
        ConnectUIButtons();
        
        // Initialize player UI
        UpdateAllPlayersUI();

        // Re-apply token sprites after one frame so PlayerVisualManager has loaded (fixes wrong/invisible tokens)
        StartCoroutine(ReapplyPlayerVisualsDelayed());

        AssignStartingAssets();

        if (perkRevealController == null)
            perkRevealController = FindFirstObjectByType<PerkRevealController>();
        if (perkRevealController != null)
            perkRevealController.RunPerkRevealSequence(players, ShowPreGameSetupThenStartTurn);
        else
            ShowPreGameSetupThenStartTurn();
    }

    System.Collections.IEnumerator ReapplyPlayerVisualsDelayed()
    {
        yield return null;
        if (players == null) yield break;
        foreach (var p in players)
        {
            if (p != null)
                p.ApplyVisualSettings();
        }
    }

    void AssignStartingAssets()
    {
        if (players == null || players.Count == 0) return;

        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        List<TileInfo> utilities = new List<TileInfo>();
        List<TileInfo> satellites = new List<TileInfo>();

        foreach (var tile in allTiles)
        {
            if (tile == null || tile.property == null) continue;
            if (tile.property.owner != null) continue;

            if (tile.property.propertyType == PropertyType.Utility)
                utilities.Add(tile);

            if (!string.IsNullOrEmpty(tile.property.tierLabel) &&
                tile.property.tierLabel.ToLower() == "satellite")
            {
                satellites.Add(tile);
            }
        }

        foreach (var p in players)
        {
            if (p == null) continue;
            if (p.HasCharacterEffect(CharacterEffectKeys.StarterUtility) && utilities.Count > 0)
            {
                int idx = Random.Range(0, utilities.Count);
                AssignPropertyToPlayer(utilities[idx], p);
                utilities.RemoveAt(idx);
            }
        }

        foreach (var p in players)
        {
            if (p == null) continue;
            if (p.HasCharacterEffect(CharacterEffectKeys.StarterSatellites) && satellites.Count > 0)
            {
                int count = Mathf.Min(2, satellites.Count);
                for (int i = 0; i < count; i++)
                {
                    int idx = Random.Range(0, satellites.Count);
                    AssignPropertyToPlayer(satellites[idx], p);
                    satellites.RemoveAt(idx);
                }
            }
        }

        UpdateAllPlayersUI();
    }

    void AssignPropertyToPlayer(TileInfo tile, Player player)
    {
        if (tile == null || tile.property == null || player == null) return;
        tile.property.owner = player;
        PropertyOwnershipTag tag = tile.GetComponent<PropertyOwnershipTag>();
        if (tag != null)
            tag.UpdateOwnershipDisplay();
        Debug.Log($"[Starting Asset] {player.playerName} receives {tile.property.propertyName}");
    }

    /// <summary>
    /// Builds and returns the board path from TileInfo objects in the scene. Used when boardPath is not assigned.
    /// Call from Player.EnsureBoardPoints() when players are created at runtime.
    /// </summary>
    public Transform[] BuildBoardPathFromScenePublic()
    {
        boardPath = BuildBoardPathFromScene();
        return boardPath;
    }
    
    /// <summary>
    /// Editor: Right-click TurnManager component → "Auto-fill Board Path from Scene" to populate Board Path from all TileInfo objects in the scene.
    /// </summary>
    [ContextMenu("Auto-fill Board Path from Scene")]
    void EditorAutoFillBoardPath()
    {
        Transform[] path = BuildBoardPathFromScene();
        if (path != null && path.Length > 0)
        {
            boardPath = path;
#if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(this);
#endif
            Debug.Log($"TurnManager: Auto-filled Board Path with {path.Length} tiles. Save the scene to keep the change.");
        }
        else
        {
            Debug.LogWarning("TurnManager: No TileInfo objects found in scene. Add tiles with TileInfo and names like Tile_1, Tile_2.");
        }
    }
    
    /// <summary>
    /// Builds the board path from TileInfo objects in the scene. Used when boardPath is not assigned
    /// (e.g. players created from main menu prefab with null boardPoints). Fixes "Move step not assigned or empty" on mobile.
    /// </summary>
    private Transform[] BuildBoardPathFromScene()
    {
        TileInfo[] tiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        if (tiles == null || tiles.Length == 0) return null;

        // One tile per board index (0–39) so GO is not duplicated; standard board has 40 tiles.
        var ordered = tiles
            .Select(t => new { tile = t, idx = ExtractTileIndex(t.gameObject.name) })
            .GroupBy(x => x.idx)
            .OrderBy(g => g.Key)
            .Select(g => g.First().tile.transform)
            .ToArray();
        return ordered;
    }

    private static int ExtractTileIndex(string goName)
    {
        var m = Regex.Match(goName ?? "", @"Tile[_\s]*(\d+)", RegexOptions.IgnoreCase);
        if (m.Success && int.TryParse(m.Groups[1].Value, out int n)) return n;
        m = Regex.Match(goName ?? "", @"(\d+)");
        if (m.Success && int.TryParse(m.Groups[1].Value, out int k)) return k;
        return 999;
    }

    void StartTurn()
    {
        turnInProgress = false;
        RecomputeAllCharacterRuntimeStates();

        Player current = GetCurrentPlayer();
        TurnDebugState.LogTurnAction(
            "StartTurn",
            $"player={current?.playerName}, index={currentPlayerIndex}, isAI={current?.isAI}",
            setPhase: "AwaitRoll",
            setActivePlayer: current != null ? current.playerName : "null",
            setInputEnabled: (current != null && !current.isAI) ? "Roll" : "None",
            setAIEnabled: current != null && current.isAI);
        Debug.Log($"[Turn] StartTurn: current player={(current != null ? current.playerName : "null")} (index {(current != null ? current.playerIndex : -1)}) ai={current != null && current.isAI}");
        if (current != null)
            SetTurnOwner(current.isAI ? GameStateMachine.TurnOwner.AI : GameStateMachine.TurnOwner.Human);

        // Update button states using UI Toolkit (single source of truth)
        Player p = GetCurrentPlayer();
        if (uiManager != null)
            RefreshHUDButtonsForCurrentPhase();

        UpdateHUD(0, 0, 0, null); // No dice rolled yet

        if (p != null && p.isAI)
        {
            TransitionState(GameStateMachine.State.AIProcessing);
            GameLogger.Log($"AI_START | player={p.playerName} idx={p.playerIndex}");
            StartAITurn(p);
        }
        else
        {
            TransitionState(GameStateMachine.State.AwaitingRoll);
        }

        if (p != null)
        {
            p.turnsTaken++;
            p.mortgagesThisTurn = 0;
            if (p.HasCharacterEffect(CharacterEffectKeys.PensionBonus) && p.turnsTaken % 5 == 0)
            {
                p.AddMoney(100000);
                GameLogger.Log($"PERK_PENSION | player={p.playerName} amount=100000");
            }
        }
        RecomputeAllCharacterRuntimeStates();

        if (tradeSystem != null)
        {
            tradeSystem.ProcessPendingTrades();
        }
    }

    void ShowPreGameSetupThenStartTurn()
    {
        if (_hasShownPreGameCharacterSetup)
        {
            StartTurn();
            return;
        }

        _hasShownPreGameCharacterSetup = true;
        RecomputeAllCharacterRuntimeStates();

        if (uiManager != null)
        {
            uiManager.ShowCharacterSetupPanel(players, StartTurn);
            return;
        }

        StartTurn();
    }

    public void RecomputeAllCharacterRuntimeStates()
    {
        int totalProperties = 0;
        int purchasedProperties = 0;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile == null || tile.property == null) continue;
            totalProperties++;
            if (tile.property.owner != null) purchasedProperties++;
        }

        if (players == null) return;
        foreach (Player player in players)
        {
            if (player == null) continue;
            player.RecomputeCharacterRuntimeState(purchasedProperties, totalProperties);
        }
    }

    public void RollDice()
    {
        if (TileClickManager.WasTileClickThisFrame())
        {
            Debug.Log("TurnManager: RollDice ignored due to tile click this frame.");
            return;
        }
        if (turnInProgress) return;

        Player p = GetCurrentPlayer();
        if (p == null)
        {
            return;
        }

        // Human can never roll for the AI. If it's AI's turn and AI hasn't started, log an error (AI may be stuck).
        if (p.isAI && !aiTurnInProgress)
        {
            Debug.LogError($"[GameMechanics] AI should be taking its turn but did not. Current player: {p.playerName} (index {p.playerIndex}). Roll ignored - human cannot roll for AI.");
            return;
        }
        if (p.isAI && aiAwaitingBonusRoll)
        {
            aiAwaitingBonusRoll = false;
            aiTurnStartTime = Time.time;
        }

        // If player is still resolving a UI choice, block rolling.
        if (p.IsAwaitingChoice)
        {
            Debug.Log("TurnManager: Player is awaiting a choice (Buy/Skip).");
            return;
        }

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.NotifyActivity();

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayDiceRoll();

        turnInProgress = true;
        if (p.isAI)
        {
            SetTurnOwner(GameStateMachine.TurnOwner.AI);
            TransitionState(GameStateMachine.State.AIProcessing);
        }
        else
        {
            SetTurnOwner(GameStateMachine.TurnOwner.Human);
            TransitionState(GameStateMachine.State.Moving);
        }
        if (uiManager != null && uiManager.RollButton != null)
            uiManager.RollButton.Enabled = false;

        TurnDebugState.LogTurnAction("RollStarted", $"player={p.playerName} isAI={p.isAI}", setPhase: "Rolling", setInputEnabled: "None");

        // Use dice animation if available, otherwise use instant roll
        int rollToken = ++_activeDiceRollToken;
        if (_diceFallbackRoutine != null)
        {
            StopCoroutine(_diceFallbackRoutine);
            _diceFallbackRoutine = null;
        }

        if (diceRoller != null)
        {
            _diceRollProcessedForTurn = false;
            _diceFallbackRoutine = StartCoroutine(DiceRollTimeoutFallback(p, rollToken));
            diceRoller.RollDice((dice1, dice2) => {
                GameLogger.Log($"DICE_ROLL | player={p.playerName} ai={p.isAI} d1={dice1} d2={dice2}");
                OnDiceRollComplete(p, dice1, dice2, rollToken);
            });
        }
        else
        {
            // Instant roll (no animation)
            int dice1 = Random.Range(1, 7);
            int dice2 = Random.Range(1, 7);
            GameLogger.Log($"DICE_ROLL | player={p.playerName} ai={p.isAI} d1={dice1} d2={dice2}");
            OnDiceRollComplete(p, dice1, dice2, rollToken);
        }
    }

    IEnumerator DiceRollTimeoutFallback(Player p, int rollToken)
    {
        yield return new WaitForSeconds(diceCallbackTimeoutSeconds);
        if (rollToken != _activeDiceRollToken) yield break;
        if (_diceRollProcessedForTurn) yield break;
        Debug.LogWarning("[GameMechanics] Dice roll callback not received in time - using fallback roll.");
        OnDiceRollComplete(p, Random.Range(1, 7), Random.Range(1, 7), rollToken);
    }

    
    /// <summary>
    /// Called when dice roll is complete (either from animation or instant roll).
    /// </summary>
    void OnDiceRollComplete(Player p, int dice1, int dice2, int rollToken)
    {
        if (rollToken != _activeDiceRollToken)
        {
            Debug.LogWarning($"[GameMechanics] Ignoring stale dice callback token={rollToken}, active={_activeDiceRollToken}.");
            return;
        }

        if (GetCurrentPlayer() != p)
        {
            Debug.LogWarning($"[GameMechanics] Ignoring dice callback for non-current player {p?.playerName}.");
            return;
        }

        if (_diceRollProcessedForTurn) return;
        _diceRollProcessedForTurn = true;
        if (_diceFallbackRoutine != null)
        {
            StopCoroutine(_diceFallbackRoutine);
            _diceFallbackRoutine = null;
        }

        int total = dice1 + dice2;
        bool isDoubles = (dice1 == dice2);
        if (isDoubles && GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayDoubles();
        
        // Handle doubles tracking
        if (isDoubles && !p.IsInJail)
        {
            p.consecutiveDoubles++;
            Debug.Log($"Doubles rolled! Consecutive doubles: {p.consecutiveDoubles}");
            
            // Go to jail on 3 consecutive doubles
            if (p.consecutiveDoubles >= 3)
            {
                Debug.Log("3 consecutive doubles! Going to jail!");
                p.consecutiveDoubles = 0; // Reset
                p.HandleGoToJail();
                UpdateHUD(total, dice1, dice2, p);
                
                // Allow player to end turn after being sent to jail
                if (uiManager != null)
                {
                    if (uiManager.EndTurnButton != null && !uiManager.IsPropertyManagerPanelOpen)
                    {
                        uiManager.EndTurnButton.Enabled = true;
                        TurnDebugState.InputEnabled = "EndTurn";
                    }
                    if (uiManager.RollButton != null)
                        uiManager.RollButton.Enabled = false;
                }
                if (p.isAI)
                {
                    aiAwaitingBonusRoll = false;
                    // Ensure EndTurn runs for AI after jail-on-doubles.
                    turnInProgress = true;
                    EndTurn();
                }
                return;
            }
        }
        else if (!p.IsInJail)
        {
            // Reset doubles counter if not doubles
            p.consecutiveDoubles = 0;
        }
        
        UpdateHUD(total, dice1, dice2, p);

        string rollCompletePhase = p.IsInJail ? "JailTurn" : "Moving";
        TurnDebugState.LogTurnAction("RollComplete", $"player={p.playerName} d1={dice1} d2={dice2} isDoubles={isDoubles}", setPhase: rollCompletePhase, setActiveToken: p.playerName);
        
        // Check if player is in jail
        if (p.IsInJail)
        {
            StartCoroutine(DoJailTurn(p, dice1, dice2));
        }
        else
        {
            StartCoroutine(DoMoveAndWait(p, dice1, dice2, isDoubles));
        }
    }

    IEnumerator DoMoveAndWait(Player p, int dice1, int dice2, bool isDoubles)
    {
        int total = dice1 + dice2;
        TurnDebugState.LogTurnAction("MoveStarted", $"player={p.playerName} steps={total}", setPhase: "Moving", setActiveToken: p.playerName);
        GameLogger.Log($"MOVE_START | player={p.playerName} ai={p.isAI} steps={total}");
        yield return p.MoveSteps(total, goSalary, dice1, dice2, isDoubles);
        TurnDebugState.LogTurnAction("MoveEnded", $"player={p.playerName}", setPhase: "ResolveTile", setActiveToken: "—");
        TransitionState(p.isAI ? GameStateMachine.State.AIProcessing : GameStateMachine.State.ResolvingTile);

        if (p.isAI)
        {
            yield return ResolveAIChoice(p);
            // Wait for auction to finish if AI declined to buy and started one (avoid overlap with trade)
            while (auctionSystem != null && auctionSystem.IsAuctionInProgress())
                yield return null;
            TryAIBuild(p);
            TransitionState(GameStateMachine.State.ResolvingTile);
        }
        else
        {
            TransitionState(GameStateMachine.State.AwaitingHumanDecision);
            // Wait until any property UI choice is completed (Buy/Skip/Build).
            // Guard against stuck UI: only force-exit if panel is no longer visible for a long time.
            float timeout = 60f;
            float elapsed = 0f;
            while (p.IsAwaitingChoice)
            {
                yield return null;
                elapsed += Time.deltaTime;
                if (elapsed >= timeout)
                {
                    if (!IsPropertyDecisionPanelVisible())
                    {
                        Debug.LogWarning("DoMoveAndWait: Timeout reached and property panel not visible. Forcing IsAwaitingChoice=false.");
                        p.IsAwaitingChoice = false;
                        break;
                    }
                    // Panel still visible, reset timer and keep waiting.
                    elapsed = 0f;
                }
            }
            TransitionState(GameStateMachine.State.ResolvingTile);
        }

        // If rolled doubles and not in jail, player can roll again
        if (isDoubles && !p.IsInJail && p.ConsecutiveDoubles < 3)
        {
            Debug.Log("Doubles! Roll again!");
            turnInProgress = false; // Allow another roll
            TransitionState(GameStateMachine.State.AwaitingRoll);
            TurnDebugState.InputEnabled = "Roll";
            
            // Re-enable roll button
            if (uiManager != null && uiManager.RollButton != null)
            {
                uiManager.RollButton.Enabled = true;
            }
            if (uiManager != null)
                uiManager.SetRollButtonVisible(true);

            // Re-enable dice UI (primary input)
            if (diceRoller != null)
            {
                diceRoller.SetActiveTurn(true);
                diceRoller.ForceDiceVisible();
            }
            
            if (uiManager != null && uiManager.EndTurnButton != null)
            {
                uiManager.EndTurnButton.Enabled = false;
            }
            if (uiManager != null)
                RefreshHUDButtonsForCurrentPhase();
            if (p.isAI)
            {
                aiAwaitingBonusRoll = true;
                StartCoroutine(AIRollAgainAfterDoubles(p));
                yield break;
            }
            // Human: don't end turn - player can roll again
            yield break;
        }
        
        // Normal turn end
        if (p.isAI)
        {
            TryAITradeOffer(p);
            yield return new WaitForSeconds(aiDecisionDelay);
            GameLogger.Log($"AI_ENDTURN | player={p.playerName}");
            EndTurn();
        }
        else
        {
            if (uiManager != null && uiManager.EndTurnButton != null)
            {
                bool auctionActive = (auctionSystem != null && auctionSystem.IsAuctionInProgress());
                uiManager.EndTurnButton.Enabled = !auctionActive && !uiManager.IsPropertyManagerPanelOpen;
                if (!auctionActive)
                {
                    TurnDebugState.InputEnabled = "EndTurn";
                    Debug.Log("End Turn button enabled after move/choice");
                }
                else
                    Debug.Log("[Turn] End Turn kept disabled while auction is in progress.");
            }
            UpdateHUD(total, dice1, dice2);
        }
    }
    
    IEnumerator DoJailTurn(Player p, int dice1, int dice2)
    {
        GameLogger.Log($"JAIL_TURN | player={p.playerName} ai={p.isAI} dice={dice1 + dice2}");
        // Handle jail turn
        bool gotOut = p.HandleJailTurn(dice1, dice2);
        
        if (gotOut)
        {
            // Player rolled doubles - they're out and moving
            yield return p.MoveSteps(dice1 + dice2, goSalary);
            
            // Wait for any UI choices
            if (p.isAI)
            {
                if (p.IsAwaitingChoice)
                    yield return ResolveAIChoice(p);
                yield return new WaitForSeconds(aiDecisionDelay);
                GameLogger.Log($"AI_ENDTURN | player={p.playerName} reason=jail_doubles");
                EndTurn();
                yield break;
            }
            else
            {
                while (p.IsAwaitingChoice)
                    yield return null;
                
                if (uiManager != null && uiManager.EndTurnButton != null)
                {
                    uiManager.EndTurnButton.Enabled = true;
                    TurnDebugState.InputEnabled = "EndTurn";
                }
                HideJailUI();
            }
        }
        else
        {
            if (p.isAI)
            {
                TransitionState(GameStateMachine.State.AIProcessing);
                yield return ResolveAIJailChoice(p);
                
                if (!p.IsInJail)
                {
                    yield return p.MoveStepsAfterJail(dice1 + dice2, goSalary, dice1, dice2);
                    if (p.IsAwaitingChoice)
                        yield return ResolveAIChoice(p);
                }
                
                yield return new WaitForSeconds(aiDecisionDelay);
                GameLogger.Log($"AI_ENDTURN | player={p.playerName} reason=jail_choice");
                EndTurn();
                yield break;
            }
            else
            {
                // Player is still in jail - show jail UI
                TransitionState(GameStateMachine.State.AwaitingHumanDecision);
                ShowJailUI(p);
                
                // Wait for player to choose action (pay, use card, or wait)
                while (p.IsInJail && p.IsAwaitingChoice)
                    yield return null;
                
                // If player got out (paid or used card), move them
                if (!p.IsInJail)
                {
                    yield return p.MoveStepsAfterJail(dice1 + dice2, goSalary, dice1, dice2);
                    
                    // Wait for any UI choices
                    while (p.IsAwaitingChoice)
                        yield return null;
                }
                
                if (uiManager != null && uiManager.EndTurnButton != null && !uiManager.IsPropertyManagerPanelOpen)
                    uiManager.EndTurnButton.Enabled = true;
                HideJailUI();
                TransitionState(GameStateMachine.State.ResolvingTile);
            }
        }
        
        UpdateHUD(dice1 + dice2, dice1, dice2, p);
    }

    public void EndTurn()
    {
        if (_diceFallbackRoutine != null)
        {
            StopCoroutine(_diceFallbackRoutine);
            _diceFallbackRoutine = null;
        }
        _diceRollProcessedForTurn = true;

        TransitionState(GameStateMachine.State.EndTurnTransition);

        Player p = GetCurrentPlayer();
        TurnDebugState.LogTurnAction("EndTurnTriggered", $"player={p?.playerName} turnInProgress={turnInProgress} isAwaitingChoice={p?.IsAwaitingChoice}", setPhase: "EndTurn");
        if (!turnInProgress)
        {
            // Safety recovery for rare desync after UI decisions.
            bool recoverableHumanEnd =
                p != null &&
                !p.isAI &&
                !p.IsAwaitingChoice &&
                stateMachine != null &&
                (stateMachine.CurrentState == GameStateMachine.State.ResolvingTile ||
                 stateMachine.CurrentState == GameStateMachine.State.ShowingResult);

            if (!recoverableHumanEnd)
                return;

            turnInProgress = true;
            Debug.LogWarning("[Turn] Recovered EndTurn from desynced turnInProgress flag.");
        }

        if (p != null && p.IsAwaitingChoice) return;
        if (p != null && p.isAI && !aiTurnInProgress) return;

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.NotifyActivity();

        // Hide build UI when ending turn
        if (p != null)
        {
            p.HideBuildUI();
        }

        // Move to next active (non-eliminated) player
        MoveToNextPlayer();

        Player next = GetCurrentPlayer();
        Debug.Log($"[Turn] EndTurn: next current player={(next != null ? next.playerName : "null")} (index {(next != null ? next.playerIndex : -1)})");
        
        // Check for win condition
        CheckWinCondition();
        
        // Notify narrative manager of turn end
        if (NarrativeManager.Instance != null)
        {
            NarrativeManager.Instance.OnTurnEnded();
        }
        
        aiTurnInProgress = false;
        if (aiWatchdogRoutine != null)
        {
            StopCoroutine(aiWatchdogRoutine);
            aiWatchdogRoutine = null;
        }
        StartTurn();
        TurnDebugState.LogTurnAction("EndTurnComplete", $"nextPlayer={GetCurrentPlayer()?.playerName}", setPhase: "AwaitRoll", setActivePlayer: GetCurrentPlayer()?.playerName ?? "null");
        LocalSaveManager.Save(this);
    }
    
    // Move to next active (non-eliminated) player
    void MoveToNextPlayer()
    {
        int attempts = 0;
        do
        {
            currentPlayerIndex = (currentPlayerIndex + 1) % players.Count;
            attempts++;
            
            // Safety check to prevent infinite loop
            if (attempts > players.Count)
            {
                Debug.LogError("TurnManager: All players eliminated! Cannot continue.");
                break;
            }
        }
        while (GetCurrentPlayer() != null && GetCurrentPlayer().IsEliminated);

        Player next = GetCurrentPlayer();
        TurnDebugState.LogTurnAction(
            "CurrentPlayerChanged",
            $"currentPlayerIndex={currentPlayerIndex}, player={next?.playerName ?? "null"}, eliminated={next?.IsEliminated}",
            setPhase: "AwaitRoll",
            setActivePlayer: next != null ? next.playerName : "null");
    }

    /// <summary>Call when an auction ends so the current player can press End Turn and continue.</summary>
    public void OnAuctionEnded()
    {
        SetTurnOwner(GameStateMachine.TurnOwner.Human);
        TransitionState(GameStateMachine.State.ResolvingTile);
        if (uiManager != null && uiManager.EndTurnButton != null && !uiManager.IsPropertyManagerPanelOpen)
        {
            uiManager.EndTurnButton.Enabled = true;
            TurnDebugState.InputEnabled = "EndTurn";
            Debug.Log("[Turn] End Turn enabled after auction ended.");
        }
        Player p = GetCurrentPlayer();
        if (p != null)
            UpdateHUD(0, 0, 0, p);
    }

    public Player GetCurrentPlayer()
    {
        if (players == null || players.Count == 0) return null;
        if (currentPlayerIndex < 0 || currentPlayerIndex >= players.Count) return null;
        
        Player p = players[currentPlayerIndex];
        
        // Skip eliminated players
        if (p != null && p.IsEliminated)
        {
            return null;
        }
        
        return p;
    }

    /// <summary>True when the human can open the Property Manager panel (current player is human, not awaiting choice, no auction).</summary>
    public bool CanOpenPropertyManager()
    {
        Player p = GetCurrentPlayer();
        if (p == null || p.isAI) return false;
        if (p.IsAwaitingChoice) return false;
        if (auctionSystem != null && auctionSystem.IsAuctionInProgress()) return false;
        return true;
    }

    /// <summary>True when a property action (build/sell/mortgage/redeem) can be performed from the panel. Same gates as CanOpenPropertyManager.</summary>
    public bool CanPerformPropertyAction()
    {
        return CanOpenPropertyManager();
    }

    public void RequestBuild(Property prop)
    {
        if (!CanPerformPropertyAction() || prop == null) return;
        Player p = GetCurrentPlayer();
        if (p != null) p.BuildHouse(prop);
    }

    public void RequestSell(Property prop)
    {
        if (!CanPerformPropertyAction() || prop == null) return;
        Player p = GetCurrentPlayer();
        if (p != null) p.ShowSellUI(prop);
    }

    public void RequestMortgage(Property prop)
    {
        if (!CanPerformPropertyAction() || prop == null) return;
        Player p = GetCurrentPlayer();
        if (p != null) p.MortgageProperty(prop);
    }

    public void RequestRedeem(Property prop)
    {
        if (!CanPerformPropertyAction() || prop == null) return;
        Player p = GetCurrentPlayer();
        if (p != null) p.RedeemProperty(prop);
    }

    // Get list of active (non-eliminated) players
    List<Player> GetActivePlayers()
    {
        List<Player> activePlayers = new List<Player>();
        foreach (Player p in players)
        {
            if (p != null && !p.IsEliminated)
            {
                activePlayers.Add(p);
            }
        }
        return activePlayers;
    }
    
    // Handle player bankruptcy
    public void HandlePlayerBankruptcy(Player bankruptPlayer, Player creditor, int debtAmount)
    {
        if (bankruptPlayer == null || bankruptPlayer.IsEliminated) return;
        
        Debug.Log($"=== BANKRUPTCY: {bankruptPlayer.playerName} cannot pay ₦{debtAmount:N0} ===");
        
        // Show bankruptcy notification
        if (uiManager != null)
        {
            uiManager.ShowBankruptcyNotification(bankruptPlayer, creditor, debtAmount);
        }
        
        // Check if player is truly bankrupt (can't pay even with all assets)
        if (bankruptPlayer.IsBankrupt(debtAmount))
        {
            // Player is bankrupt - eliminate them
            bankruptPlayer.Eliminate(creditor);
            
            // Update UI to reflect player elimination
            UpdateAllPlayersUI();
            
            // If it was the current player's turn, move to next player
            if (GetCurrentPlayer() == bankruptPlayer)
            {
                MoveToNextPlayer();
            }
            
            // Check for win condition
            CheckWinCondition();
        }
        else
        {
            // Player has assets: allow recovery path (mortgage/sell) before elimination.
            Debug.LogWarning($"{bankruptPlayer.playerName} has assets worth ₦{bankruptPlayer.GetNetWorth():N0} but can't pay immediately.");
            pendingDebtPlayer = bankruptPlayer;
            pendingDebtCreditor = creditor;
            pendingDebtAmount = debtAmount;
            bankruptPlayer.IsAwaitingChoice = true;

            if (bankruptPlayer.isAI)
            {
                AutoLiquidateForDebt(bankruptPlayer, debtAmount);
                if (TryResolvePendingDebt())
                {
                    return;
                }
                // If still not resolved, eliminate
                bankruptPlayer.Eliminate(creditor);
                UpdateAllPlayersUI();
                if (GetCurrentPlayer() == bankruptPlayer) MoveToNextPlayer();
                CheckWinCondition();
                return;
            }

            if (uiManager != null)
            {
                uiManager.ShowChoiceCard(
                    "Low Cash",
                    $"You owe ₦{debtAmount:N0}. You still have assets. Do you want to declare bankruptcy or manage assets (sell/mortgage) to pay?",
                    "DECLARE BANKRUPT",
                    "MANAGE ASSETS",
                    () =>
                    {
                        uiManager.HideCardPanel();
                        bankruptPlayer.IsAwaitingChoice = false;
                        bankruptPlayer.Eliminate(creditor);
                        UpdateAllPlayersUI();
                        if (GetCurrentPlayer() == bankruptPlayer) MoveToNextPlayer();
                        CheckWinCondition();
                    },
                    () =>
                    {
                        uiManager.HideCardPanel();
                        uiManager.OpenPropertyManagerPanel(null);
                    }
                );
            }
        }
    }

    public bool TryResolvePendingDebt()
    {
        if (pendingDebtPlayer == null || pendingDebtPlayer.IsEliminated) return false;
        if (pendingDebtAmount <= 0) return false;

        if (pendingDebtPlayer.Money >= pendingDebtAmount)
        {
            if (pendingDebtPlayer.TrySpend(pendingDebtAmount, "Debt payment"))
            {
                if (pendingDebtCreditor != null)
                {
                    pendingDebtCreditor.AddMoney(pendingDebtAmount, "Debt received");
                }
                else
                {
                    // Treat as tax/fee to bank (goes to Free Parking pool)
                    freeParkingPool += pendingDebtAmount;
                }

                pendingDebtPlayer.IsAwaitingChoice = false;
                pendingDebtPlayer = null;
                pendingDebtCreditor = null;
                pendingDebtAmount = 0;
                if (uiManager != null)
                {
                    uiManager.HideBankruptcyPanel();
                    uiManager.HideCardPanel();
                }
                UpdateAllPlayersUI();
                return true;
            }
        }

        // Still cannot pay; prompt again for humans
        if (uiManager != null && pendingDebtPlayer != null && !pendingDebtPlayer.isAI)
        {
            uiManager.ShowChoiceCard(
                "Still Owing",
                $"You still owe ₦{pendingDebtAmount:N0}. Declare bankruptcy or manage assets?",
                "DECLARE BANKRUPT",
                "MANAGE ASSETS",
                () =>
                {
                    uiManager.HideCardPanel();
                    pendingDebtPlayer.IsAwaitingChoice = false;
                    pendingDebtPlayer.Eliminate(pendingDebtCreditor);
                    UpdateAllPlayersUI();
                    if (GetCurrentPlayer() == pendingDebtPlayer) MoveToNextPlayer();
                    CheckWinCondition();
                },
                () =>
                {
                    uiManager.HideCardPanel();
                    uiManager.OpenPropertyManagerPanel(null);
                }
            );
        }

        return false;
    }

    void AutoLiquidateForDebt(Player p, int debtAmount)
    {
        if (p == null) return;
        var owned = GetAllOwnedProperties(p);
        if (owned.Count == 0) return;

        // Sell buildings first
        bool sold = true;
        int safety = 0;
        while (p.Money < debtAmount && sold && safety < 50)
        {
            sold = false;
            foreach (Property prop in owned)
            {
                if (prop == null || prop.owner != p) continue;
                if (prop.propertyType != PropertyType.Regular) continue;
                if (prop.hasHotel || prop.houses > 0)
                {
                    p.ShowSellUI(prop);
                    sold = true;
                    if (p.Money >= debtAmount) break;
                }
            }
            safety++;
        }

        // Mortgage properties
        foreach (Property prop in owned)
        {
            if (p.Money >= debtAmount) break;
            if (prop == null || prop.owner != p) continue;
            if (prop.isMortgaged) continue;
            p.MortgageProperty(prop);
        }
    }
    
    // Check if game is over (only 1 player remaining)
    void CheckWinCondition()
    {
        List<Player> activePlayers = GetActivePlayers();
        
        if (activePlayers.Count == 1)
        {
            // Game Over! We have a winner!
            Player winner = activePlayers[0];
            ShowGameOver(winner);
        }
        else if (activePlayers.Count == 0)
        {
            // All players eliminated (shouldn't happen, but handle it)
            Debug.LogError("All players eliminated! Game cannot continue.");
        }
    }
    
    // Show game over screen
    void ShowGameOver(Player winner)
    {
        Debug.Log($"=== GAME OVER ===");
        Debug.Log($"🏆 WINNER: {winner.playerName} 🏆");
        Debug.Log($"Final Money: ₦{winner.Money:N0}");
        Debug.Log($"Properties Owned: {winner.GetPropertyCount()}");
        Debug.Log($"Net Worth: ₦{winner.GetNetWorth():N0}");
        
        // Show game over UI
        if (uiManager != null)
        {
            uiManager.ShowGameOverPanel(winner);
        }
        
        // Disable game controls
        if (uiManager != null)
        {
            if (uiManager.RollButton != null)
                uiManager.RollButton.SetEnabled(false);
            if (uiManager.EndTurnButton != null)
                uiManager.EndTurnButton.Enabled = false;
        }
    }
    
    // Update all players' info in UI
    public void UpdateAllPlayersUI()
    {
        if (uiManager == null) return;
        
        Player current = GetCurrentPlayer();
        int currentIndex = -1;
        if (current != null && players != null)
            currentIndex = players.IndexOf(current);

        // Update each player slot in UI
        int maxSlots = 4;
        int playerCount = players != null ? players.Count : 0;
        for (int i = 0; i < playerCount && i < maxSlots; i++)
        {
            Player p = players[i];
            if (p != null)
            {
                uiManager.UpdatePlayerInfo(i, p);
                p.SetActiveTurn(i == currentIndex);
            }
        }

        // Hide unused slots (e.g., when 2 players selected)
        for (int i = playerCount; i < maxSlots; i++)
        {
            uiManager.HidePlayerSlot(i);
        }

        uiManager.SetActivePlayerIndicator(currentIndex);

        if (diceRoller != null)
        {
            bool canRoll = CanHumanRoll(current);
            diceRoller.SetActiveTurn(canRoll);
        }
    }

    private bool CanHumanRoll(Player p)
    {
        if (p == null) return false;
        if (p.isAI) return false;
        if (turnInProgress) return false;
        if (p.IsAwaitingChoice) return false;
        if (auctionSystem != null && auctionSystem.IsAuctionInProgress()) return false;
        return true;
    }

    void UpdateHUD(int dice, int dice1 = 0, int dice2 = 0, Player p = null)
    {
        if (p == null)
            p = GetCurrentPlayer();

        // Update current player text
        if (uiManager != null && uiManager.CurrentPlayerText != null)
        {
            string status = "";
            if (p != null && p.IsInJail)
                status = $" (In Jail - Turn {p.TurnsInJail}/3)";
            string playerName = (p != null && !string.IsNullOrEmpty(p.playerName)) ? p.playerName : (p != null ? p.name : "None");
            uiManager.CurrentPlayerText.Text = $"Current Player: {playerName}{status}";
        }
        
        // Update all players UI
        UpdateAllPlayersUI();
        
        // Update action buttons state for current player
        if (p != null)
        {
            p.UpdateActionButtons();
        }

        // Update dice text
        if (uiManager != null && uiManager.DiceText != null)
        {
            if (dice1 > 0 && dice2 > 0)
            {
                bool isDoubles = (dice1 == dice2);
                string doublesText = isDoubles ? " (Doubles!)" : "";
                uiManager.DiceText.Text = $"Dice: {dice1} + {dice2} = {dice}{doublesText}";
                
                // Update doubles indicator
                if (p != null && uiManager.DoublesIndicatorText != null)
                {
                    if (p.ConsecutiveDoubles > 0)
                    {
                        uiManager.DoublesIndicatorText.Text = $"Consecutive Doubles: {p.ConsecutiveDoubles}/3";
                        uiManager.DoublesIndicatorText.SetVisible(true);
                    }
                    else
                    {
                        uiManager.DoublesIndicatorText.SetVisible(false);
                    }
                }
            }
            else if (dice > 0)
            {
                // Fallback for single die (shouldn't happen in normal play)
                uiManager.DiceText.Text = $"Dice: {dice}";
            }
            else
            {
                uiManager.DiceText.Text = "Dice: Roll to move";
            }
        }

        // Update wallet text
        if (uiManager != null && uiManager.WalletText != null && p != null)
            uiManager.WalletText.Text = $"Wallet: ₦{p.Money:N0}";
        
        // Update building supply display
        if (buildingSupplyManager != null && uiManager != null && uiManager.BuildingSupplyText != null)
        {
            uiManager.BuildingSupplyText.Text = buildingSupplyManager.GetSupplyStatus();
        }
    }
    
    // --- Jail UI ---
    
    void ShowJailUI(Player p)
    {
        if (p == null || p.isAI) return;
        TransitionState(GameStateMachine.State.AwaitingHumanDecision);
        string status = $"In Jail - Turn {p.TurnsInJail}/3\n";
        if (p.TurnsInJail >= 3)
            status += "Must pay bail!";
        else
            status += "Roll doubles to get out, or pay ₦50,000";

        if (uiManager != null && uiManager.TryGetJailPanelUGUI(out JailPanelUGUI jailPanelUGUI))
        {
            jailPanelUGUI.Show(
                p,
                status,
                p.CanAfford(p.jailBailCost),
                p.HasGetOutOfJailFreeCard,
                p.TurnsInJail < 3);
        }
        else if (uiManager != null)
        {
            uiManager.ShowJailPanel();

            if (uiManager.JailStatusText != null)
                uiManager.JailStatusText.text = status;

            // Enable/disable buttons
            if (uiManager.PayBailButton != null)
                uiManager.PayBailButton.SetEnabled(p.CanAfford(p.jailBailCost));

            if (uiManager.UseCardButton != null)
                uiManager.UseCardButton.SetEnabled(p.HasGetOutOfJailFreeCard);

            if (uiManager.WaitButton != null)
                uiManager.WaitButton.SetEnabled(p.TurnsInJail < 3); // Can only wait if not forced to pay
        }
        
        p.IsAwaitingChoice = true;
        TurnDebugState.LogTurnAction("DecisionShown", $"type=JailChoice player={p.playerName}", setPhase: "JailChoice", setInputEnabled: "PayBail,UseCard,Wait");
    }
    
    void HideJailUI()
    {
        if (uiManager != null)
            uiManager.HideJailPanel();
    }
    
    public void PayBail()
    {
        Player p = GetCurrentPlayer();
        if (p == null) return;

        PerkCardInstance bailCard = p.GetPerkCard(PerkCardType.BailDiscount);
        if (bailCard != null && !p.isAI && uiManager != null)
        {
            int discounted = bailCard.fixedValue > 0 ? bailCard.fixedValue : p.jailBailCost;
            p.IsAwaitingChoice = true;
            uiManager.ShowChoiceCard(
                "Bail Discount",
                $"Pay bail for ₦{discounted:N0} instead of ₦{p.jailBailCost:N0}?",
                "PAY FULL",
                "USE CARD",
                () =>
                {
                    uiManager.HideCardPanel();
                    if (p.PayJailBail())
                    {
                        p.IsAwaitingChoice = false;
                        TurnDebugState.LogTurnAction("DecisionResolved", "type=JailChoice choice=PayBail player=" + p.playerName, setPhase: "Moving", setInputEnabled: "None");
                        HideJailUI();
                    }
                },
                () =>
                {
                    uiManager.HideCardPanel();
                    p.ConsumePerkCard(bailCard);
                    GameLogger.Log($"PERK_BAIL_DISCOUNT | player={p.playerName} uses_left={bailCard.usesRemaining}");
                    Debug.Log(bailCard.sideJoke);
                    if (p.PayJailBailAmount(discounted))
                    {
                        p.IsAwaitingChoice = false;
                        TurnDebugState.LogTurnAction("DecisionResolved", "type=JailChoice choice=PayBail player=" + p.playerName, setPhase: "Moving", setInputEnabled: "None");
                        HideJailUI();
                    }
                }
            );
            return;
        }

        if (bailCard != null && p.isAI)
        {
            int discounted = bailCard.fixedValue > 0 ? bailCard.fixedValue : p.jailBailCost;
            p.ConsumePerkCard(bailCard);
            GameLogger.Log($"PERK_BAIL_DISCOUNT | player={p.playerName} uses_left={bailCard.usesRemaining}");
            Debug.Log(bailCard.sideJoke);
            if (p.PayJailBailAmount(discounted))
            {
                p.IsAwaitingChoice = false;
                TurnDebugState.LogTurnAction("DecisionResolved", "type=JailChoice choice=PayBail player=" + p.playerName, setPhase: "Moving", setInputEnabled: "None");
                HideJailUI();
            }
            return;
        }

        if (p.PayJailBail())
        {
            p.IsAwaitingChoice = false;
            HideJailUI();
        }
    }
    
    public void UseJailCard()
    {
        Player p = GetCurrentPlayer();
        if (p != null)
        {
            // Determine which deck the card came from (default to Chance)
            // In a full implementation, you'd track which deck gave the card
            CardDeckType deckType = CardDeckType.Chance;
            
            if (p.UseGetOutOfJailFreeCard(deckType))
            {
                p.IsAwaitingChoice = false;
                HideJailUI();
            }
        }
    }
    
    public void WaitInJail()
    {
        Player p = GetCurrentPlayer();
        if (p != null && p.IsInJail && p.TurnsInJail < 3)
        {
            p.IsAwaitingChoice = false;
            TurnDebugState.LogTurnAction("DecisionResolved", "type=JailChoice choice=Wait player=" + p.playerName, setPhase: "EndTurn", setInputEnabled: "None");
            HideJailUI();
            // End turn - player stays in jail
        }
    }
    
    // --- Action Button Handlers ---
    
    void OnBuyButtonClicked()
    {
        if (gameController != null)
        {
            gameController.RequestBuyProperty();
            return;
        }
        Player p = GetCurrentPlayer();
        if (p == null || p.isAI) return;
        // If player waited too long and IsAwaitingChoice was cleared, still allow if panel is visible.
        if (!p.IsAwaitingChoice && !IsPropertyDecisionPanelVisible())
            return;
        p.BuyProperty();
    }
    
    void OnSkipButtonClicked()
    {
        if (gameController != null)
        {
            gameController.RequestSkipProperty();
            return;
        }
        Player p = GetCurrentPlayer();
        if (p == null || p.isAI) return;
        if (!p.IsAwaitingChoice && !IsPropertyDecisionPanelVisible())
            return;
        p.SkipAction();
    }

    void OnAuctionButtonClicked()
    {
        // For now auction follows the same gameplay path as decline-to-buy.
        // SkipAction closes panel and starts auction when appropriate.
        OnSkipButtonClicked();
    }

    bool IsPropertyDecisionPanelVisible()
    {
        if (uiManager == null) return false;
        if (uiManager.TryGetPropertyPanelUGUI(out BuyPropertyPanelUGUI ugui))
        {
            if (ugui == null) return false;
            GameObject root = ugui.panelRoot != null ? ugui.panelRoot : ugui.gameObject;
            return root != null && root.activeInHierarchy;
        }
        if (uiManager.propertyPanelDocument != null && uiManager.propertyPanelDocument.rootVisualElement != null)
        {
            return uiManager.propertyPanelDocument.rootVisualElement.style.display == DisplayStyle.Flex;
        }
        return false;
    }

    void OnManagePropertiesClicked()
    {
        if (uiManager != null)
            uiManager.OpenPropertyManagerPanel(null);
    }

    void UpdateManageButton()
    {
        if (uiManager != null && uiManager.ManagePropertiesButton != null)
            uiManager.ManagePropertiesButton.Enabled = GetCurrentPlayer() != null && !GetCurrentPlayer().isAI;
    }

    /// <summary>Re-apply HUD button state from current game phase. Call from StartTurn and when exiting Manage panel so buttons are never left disabled.</summary>
    public void RefreshHUDButtonsForCurrentPhase()
    {
        if (uiManager == null) return;
        if (uiManager.IsPropertyManagerPanelOpen) return;
        Player p = GetCurrentPlayer();
        if (p == null) return;
        bool auctionActive = auctionSystem != null && auctionSystem.IsAuctionInProgress();
        if (p.isAI)
        {
            if (uiManager.RollButton != null) uiManager.RollButton.Enabled = false;
            if (uiManager.EndTurnButton != null) uiManager.EndTurnButton.Enabled = false;
            if (uiManager.TradeButton != null) uiManager.TradeButton.Enabled = false;
            if (uiManager.ManagePropertiesButton != null) uiManager.ManagePropertiesButton.Enabled = false;
            return;
        }
        if (uiManager.ManagePropertiesButton != null) { uiManager.ManagePropertiesButton.Enabled = true; Debug.Log("HUD: Manage enabled by RefreshForPhase"); }
        if (uiManager.TradeButton != null) { uiManager.TradeButton.Enabled = true; Debug.Log("HUD: Trade enabled by RefreshForPhase"); }
        if (p.IsAwaitingChoice || auctionActive)
        {
            if (uiManager.RollButton != null) uiManager.RollButton.Enabled = false;
            if (uiManager.EndTurnButton != null) uiManager.EndTurnButton.Enabled = false;
        }
        else
        {
            bool rollOn = !turnInProgress;
            bool endOn = turnInProgress;
            if (uiManager.RollButton != null) { uiManager.RollButton.Enabled = rollOn; if (rollOn) Debug.Log("HUD: Roll enabled by RefreshForPhase"); }
            if (uiManager.EndTurnButton != null) { uiManager.EndTurnButton.Enabled = endOn; if (endOn) Debug.Log("HUD: EndTurn enabled by RefreshForPhase"); }
            if (rollOn) uiManager.SetRollButtonVisible(true);
        }
    }

    void OnBuildButtonClicked()
    {
        Player p = GetCurrentPlayer();
        if (p != null)
        {
            if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayBuildHouse();
            p.BuildHouse();
            // Update buttons after building
            p.UpdateActionButtons();
        }
    }
    
    void OnSellButtonClicked()
    {
        Player p = GetCurrentPlayer();
        if (p != null)
        {
            if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlaySellHouse();
            p.ShowSellUI();
            // Update buttons after selling
            p.UpdateActionButtons();
        }
    }
    
    void OnMortgageButtonClicked()
    {
        Player p = GetCurrentPlayer();
        if (p != null)
        {
            TileInfo selectedTile = uiManager != null ? uiManager.CurrentTileDetails : null;
            if (selectedTile != null && selectedTile.property != null)
            {
                p.MortgageProperty(selectedTile.property);
            }
            else
            {
                Debug.LogWarning("TurnManager: Select a tile in the Tile Details panel to mortgage.");
            }
            // Update buttons after mortgaging
            p.UpdateActionButtons();
        }
    }
    
    void OnRedeemButtonClicked()
    {
        Player p = GetCurrentPlayer();
        if (p != null)
        {
            if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayRedeem();
            TileInfo selectedTile = uiManager != null ? uiManager.CurrentTileDetails : null;
            if (selectedTile != null && selectedTile.property != null)
            {
                p.RedeemProperty(selectedTile.property);
            }
            else
            {
                Debug.LogWarning("TurnManager: Select a tile in the Tile Details panel to redeem.");
            }
            // Update buttons after redeeming
            p.UpdateActionButtons();
        }
    }
    
    void TryAITradeOffer(Player aiPlayer)
    {
        if (tradeSystem == null || aiPlayer == null || !aiPlayer.isAI) return;
        if (auctionSystem != null && auctionSystem.IsAuctionInProgress())
            return; // Never open trade while auction UI is active
        if (players == null || players.Count == 0) return;
        Player human = null;
        foreach (Player pl in players)
        {
            if (pl != null && !pl.IsEliminated && !pl.isAI) { human = pl; break; }
        }
        if (human == null) return;
        if (Random.value < 0.2f)
            tradeSystem.StartTradeByAI(aiPlayer, human);
    }

    void OnTradeButtonClicked()
    {
        Player currentPlayer = GetCurrentPlayer();
        if (currentPlayer == null)
        {
            Debug.LogWarning("TurnManager: OnTradeButtonClicked - No current player!");
            return;
        }
        if (currentPlayer.isAI)
        {
            Debug.LogWarning("TurnManager: Trade button should not be enabled for AI. Ignoring.");
            return;
        }
        if (tradeSystem == null)
        {
            Debug.LogWarning("TurnManager: TradeSystem not assigned! Cannot start trade.");
            return;
        }
        tradeSystem.StartTrade(currentPlayer);
    }

    void StartAITurn(Player p)
    {
        CloseInteractivePopupsForAI();
        aiTurnInProgress = true;
        TurnDebugState.AIEnabled = true;
        aiTurnStartTime = Time.time;
        if (aiTurnRoutine != null)
            StopCoroutine(aiTurnRoutine);
        aiTurnRoutine = StartCoroutine(AITurnRoutine(p));
        if (aiWatchdogRoutine != null)
            StopCoroutine(aiWatchdogRoutine);
        aiWatchdogRoutine = StartCoroutine(AITurnWatchdog(p));
    }

    IEnumerator AITurnRoutine(Player p)
    {
        yield return new WaitForSeconds(aiRollDelay);
        if (p == null || p.IsEliminated) yield break;
        if (GetCurrentPlayer() != p) yield break;
        if (aiAwaitingBonusRoll) yield break;
        RollDice();
    }

    IEnumerator AIRollAgainAfterDoubles(Player p)
    {
        yield return new WaitForSeconds(aiDecisionDelay);
        if (p == null || p.IsEliminated) yield break;
        if (GetCurrentPlayer() != p) yield break;
        if (!p.isAI) yield break;
        RollDice();
    }

    IEnumerator AITurnWatchdog(Player p)
    {
        while (aiTurnInProgress && p != null && GetCurrentPlayer() == p)
        {
            if (Time.time - aiTurnStartTime > aiMaxTurnDuration)
            {
                Debug.LogWarning($"[GameMechanics] AI STUCK: player={p.playerName} idx={p.playerIndex} exceeded {aiMaxTurnDuration}s - forcing end turn.");
                GameLogger.Log($"AI_TIMEOUT | player={p.playerName} idx={p.playerIndex} forcing_end_turn");
                p.IsAwaitingChoice = false;
                if (uiManager != null)
                {
                    if (uiManager.RollButton != null)
                        uiManager.RollButton.Enabled = false;
                    if (uiManager.EndTurnButton != null)
                        uiManager.EndTurnButton.Enabled = false;
                }
                // Ensure EndTurn() doesn't early-return (e.g. turnInProgress may be false after doubles)
                turnInProgress = true;
                EndTurn();
                yield break;
            }
            yield return null;
        }
    }

    IEnumerator ResolveAIChoice(Player p)
    {
        if (p == null) yield break;

        yield return new WaitForSeconds(aiDecisionDelay);
        if (GetCurrentPlayer() != p)
        {
            Debug.LogWarning($"[GameMechanics] ResolveAIChoice aborted - current player changed (expected {p.playerName}).");
            yield break;
        }
        TileInfo tile = p.GetCurrentTileInfo();
        if (tile != null && tile.property != null && tile.property.owner == null)
        {
            if (string.IsNullOrWhiteSpace(tile.property.propertyName) || tile.property.price <= 0)
            {
                Debug.LogWarning($"[AI] {p.playerName} landed on invalid property data at tile '{tile.gameObject.name}'. " +
                                 $"name='{tile.property.propertyName}', price={tile.property.price}. Skipping purchase flow.");
                GameLogger.Log($"AI_SKIP_INVALID_PROPERTY | player={p.playerName} tile={tile.gameObject.name}");
                p.IsAwaitingChoice = false;
            }
            else
            {
                if (p.CanAfford(tile.property.price) && ShouldAIBuyProperty(p, tile.property))
                {
                    GameLogger.Log($"AI_BUY | player={p.playerName} property={tile.property.propertyName}");
                    p.BuyProperty();
                }
                else
                {
                    GameLogger.Log($"AI_SKIP | player={p.playerName} property={tile.property.propertyName}");
                    p.SkipAction();
                }
            }
        }

        float timeout = 5f;
        while (p.IsAwaitingChoice && timeout > 0f)
        {
            yield return null;
            timeout -= Time.deltaTime;
        }
        if (p.IsAwaitingChoice)
            p.IsAwaitingChoice = false;
    }

    bool ShouldAIBuyProperty(Player p, Property prop)
    {
        if (p == null || prop == null) return false;
        int price = Mathf.Max(0, prop.price);
        if (price <= 0) return false;

        string groupId = GetGroupIdForProperty(prop);
        List<Property> group = GetGroupProperties(groupId);
        int groupSize = group.Count;
        int ownedByAI = CountOwnedInGroup(p, group);
        int ownedByOthers = CountOwnedByOthersInGroup(p, group);
        bool wouldComplete = groupSize > 0 && (ownedByAI + 1) >= groupSize;

        int reserve = wouldComplete ? aiCashReserveForMonopoly : aiCashReserve;
        int moneyAfter = p.Money - price;
        if (moneyAfter < reserve)
        {
            if (!wouldComplete) return false;
            if (moneyAfter < aiCashReserveForMonopoly) return false;
        }

        float score = EvaluatePropertyScore(p, prop, group, ownedByAI, ownedByOthers, wouldComplete);
        return score >= aiBuyScoreThreshold || wouldComplete;
    }

    float EvaluatePropertyScore(Player p, Property prop, List<Property> group, int ownedByAI, int ownedByOthers, bool wouldComplete)
    {
        float score = 0f;

        // Base ROI: base rent vs price
        float baseRent = (prop.rentByLevel != null && prop.rentByLevel.Length > 0) ? prop.rentByLevel[0] : 0f;
        float roi = (prop.price > 0) ? (baseRent / prop.price) * 100f : 0f;
        score += roi * 3.0f;

        // Type bias
        switch (prop.propertyType)
        {
            case PropertyType.Regular: score += 8f; break;
            case PropertyType.Transportation:
                score += 6f;
                if (ownedByAI > 0) score += 8f;
                break;
            case PropertyType.Utility:
                score += 4f;
                if (ownedByAI > 0) score += 6f;
                break;
        }

        // Group completion / blocking
        if (ownedByAI > 0) score += 10f + ownedByAI * 3f;
        if (ownedByOthers > 0) score += 8f + ownedByOthers * 2f;
        if (wouldComplete) score += 35f;

        bool blocksOpponentMonopoly = WouldBlockOpponentMonopoly(p, group);
        if (blocksOpponentMonopoly) score += 18f;

        // Tier bonus (location proxy)
        string tier = string.IsNullOrEmpty(prop.tierLabel) ? "" : prop.tierLabel.ToLowerInvariant();
        if (tier.Contains("prime")) score += 10f;
        else if (tier.Contains("mid")) score += 6f;
        else if (tier.Contains("satellite")) score += 2f;

        return score;
    }

    bool WouldBlockOpponentMonopoly(Player aiPlayer, List<Property> group)
    {
        if (aiPlayer == null || group == null || group.Count == 0) return false;
        foreach (Player pl in players)
        {
            if (pl == null || pl == aiPlayer || pl.IsEliminated) continue;
            int owned = 0;
            foreach (Property gp in group)
            {
                if (gp != null && gp.owner == pl) owned++;
            }
            if (owned >= group.Count - 1) return true;
        }
        return false;
    }

    void TryAIBuild(Player p)
    {
        if (p == null || !p.isAI || p.IsEliminated) return;
        if (p.Money <= aiCashReserve) return;
        if (buildingSupplyManager == null)
            buildingSupplyManager = FindFirstObjectByType<BuildingSupplyManager>();

        List<Property> owned = GetAllOwnedProperties(p);
        if (owned.Count == 0) return;

        int builds = 0;
        while (builds < aiMaxBuildsPerTurn)
        {
            Property best = null;
            float bestScore = 0f;
            int bestCost = 0;
            bool bestIsHotel = false;

            foreach (Property prop in owned)
            {
                if (prop == null || prop.propertyType != PropertyType.Regular) continue;
                if (prop.isMortgaged) continue;

                string groupId = GetGroupIdForProperty(prop);
                List<Property> group = GetGroupProperties(groupId);
                if (!OwnsFullGroup(p, group)) continue;

                bool canBuildHotel = (prop.houses >= 4 && !prop.hasHotel && (buildingSupplyManager == null || buildingSupplyManager.CanBuildHotel()));
                bool canBuildHouse = (!prop.hasHotel && prop.houses < 4 && (buildingSupplyManager == null || buildingSupplyManager.CanBuildHouse()));
                if (!canBuildHotel && !canBuildHouse) continue;
                if (!CanBuildEvenlyAI(prop, group)) continue;

                bool buildHotel = canBuildHotel;
                int cost = buildHotel ? prop.hotelCost : prop.houseCost;
                if (cost <= 0) continue;
                if (p.Money - cost < aiCashReserve) continue;

                int currentLevel = prop.hasHotel ? 5 : prop.houses;
                int nextLevel = buildHotel ? 5 : Mathf.Clamp(prop.houses + 1, 0, 4);
                int[] rent = prop.rentByLevel;
                if (rent == null || rent.Length < 6) continue;
                int curRent = rent[Mathf.Clamp(currentLevel, 0, 5)];
                int nextRent = rent[Mathf.Clamp(nextLevel, 0, 5)];
                float delta = Mathf.Max(0, nextRent - curRent);
                float roi = (cost > 0) ? (delta / cost) : 0f;
                float score = roi;

                if (score > bestScore && roi >= aiBuildMinROI)
                {
                    best = prop;
                    bestScore = score;
                    bestCost = cost;
                    bestIsHotel = buildHotel;
                }
            }

            if (best == null) break;

            p.BuildHouse(best);
            GameLogger.Log($"AI_BUILD | player={p.playerName} property={best.propertyName} type={(bestIsHotel ? "HOTEL" : "HOUSE")} cost={bestCost}");
            builds++;
        }
    }

    string GetGroupIdForProperty(Property prop)
    {
        if (prop == null) return "";
        if (!string.IsNullOrEmpty(prop.groupId)) return prop.groupId;
        if (prop.propertyType == PropertyType.Utility) return "UTILITY";
        if (prop.propertyType == PropertyType.Transportation) return "TRANSPORTATION";
        return "";
    }

    List<Property> GetGroupProperties(string groupId)
    {
        List<Property> list = new List<Property>();
        if (string.IsNullOrEmpty(groupId)) return list;
        TileInfo[] tiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in tiles)
        {
            if (tile == null || tile.property == null) continue;
            if (string.Equals(GetGroupIdForProperty(tile.property), groupId, StringComparison.OrdinalIgnoreCase))
                list.Add(tile.property);
        }
        return list;
    }

    List<Property> GetAllOwnedProperties(Player p)
    {
        List<Property> list = new List<Property>();
        if (p == null) return list;
        TileInfo[] tiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in tiles)
        {
            if (tile == null || tile.property == null) continue;
            if (tile.property.owner == p)
                list.Add(tile.property);
        }
        return list;
    }

    int CountOwnedInGroup(Player p, List<Property> group)
    {
        if (p == null || group == null) return 0;
        int count = 0;
        foreach (Property prop in group)
        {
            if (prop != null && prop.owner == p) count++;
        }
        return count;
    }

    int CountOwnedByOthersInGroup(Player p, List<Property> group)
    {
        if (p == null || group == null) return 0;
        int count = 0;
        foreach (Property prop in group)
        {
            if (prop != null && prop.owner != null && prop.owner != p) count++;
        }
        return count;
    }

    bool OwnsFullGroup(Player p, List<Property> group)
    {
        if (p == null || group == null || group.Count == 0) return false;
        foreach (Property prop in group)
        {
            if (prop == null || prop.owner != p) return false;
        }
        return true;
    }

    bool CanBuildEvenlyAI(Property targetProp, List<Property> group)
    {
        if (targetProp == null || group == null || group.Count == 0) return false;
        int minHouses = int.MaxValue;
        int maxHouses = int.MinValue;
        foreach (Property prop in group)
        {
            if (prop == null) continue;
            int count = prop.hasHotel ? 5 : prop.houses;
            if (count < minHouses) minHouses = count;
            if (count > maxHouses) maxHouses = count;
        }
        int targetCount = targetProp.hasHotel ? 5 : targetProp.houses;
        if (targetCount == minHouses) return true;
        if (targetCount == maxHouses && (maxHouses - minHouses) <= 1) return true;
        return false;
    }

    IEnumerator ResolveAIJailChoice(Player p)
    {
        if (p == null || !p.IsInJail) yield break;

        yield return new WaitForSeconds(aiDecisionDelay);
        if (GetCurrentPlayer() != p)
        {
            Debug.LogWarning($"[GameMechanics] ResolveAIJailChoice aborted - current player changed (expected {p.playerName}).");
            yield break;
        }

        if (p.HasGetOutOfJailFreeCard)
        {
            GameLogger.Log($"AI_JAIL_USE_CARD | player={p.playerName}");
            p.UseGetOutOfJailFreeCard(CardDeckType.Chance);
            ShowResultNotification($"{p.playerName} used a Get Out of Jail card.", 1.2f);
            yield break;
        }

        bool canPay = p.CanAfford(p.jailBailCost);
        if (canPay && (p.TurnsInJail >= 2 || Random.value > 0.7f))
        {
            GameLogger.Log($"AI_JAIL_PAY_BAIL | player={p.playerName}");
            p.PayJailBail();
            ShowResultNotification($"{p.playerName} paid bail.", 1.2f);
            yield break;
        }

        GameLogger.Log($"AI_JAIL_WAIT | player={p.playerName}");
        p.IsAwaitingChoice = false;
        ShowResultNotification($"{p.playerName} stays in jail this turn.", 1.2f);
    }

    void OnRollButtonClicked()
    {
        if (gameController != null) gameController.RequestRollDice();
        else RollDice();
    }

    void OnEndTurnButtonClicked()
    {
        if (gameController != null) gameController.RequestEndTurn();
        else EndTurn();
    }

    void OnMenuButtonClicked()
    {
        if (gameController != null) gameController.RequestMenu();
        LocalSaveManager.Save(this);
        UnityEngine.SceneManagement.SceneManager.LoadScene("StartPage", UnityEngine.SceneManagement.LoadSceneMode.Single);
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus) LocalSaveManager.Save(this);
    }

    void OnApplicationQuit()
    {
        LocalSaveManager.Save(this);
    }

    void OnPayBailButtonClicked()
    {
        if (gameController != null) gameController.RequestJailPayBail();
        else PayBail();
    }

    void OnUseJailCardButtonClicked()
    {
        if (gameController != null) gameController.RequestJailUseCard();
        else UseJailCard();
    }

    void OnWaitInJailButtonClicked()
    {
        if (gameController != null) gameController.RequestJailWait();
        else WaitInJail();
    }

    public void TransitionState(GameStateMachine.State state)
    {
        if (stateMachine != null) stateMachine.TransitionTo(state);
    }

    public void SetTurnOwner(GameStateMachine.TurnOwner owner)
    {
        if (stateMachine != null) stateMachine.SetTurnOwner(owner);
    }

    void ShowResultNotification(string message, float durationSeconds = 1.2f)
    {
        TransitionState(GameStateMachine.State.ShowingResult);
        if (uiManager != null)
            uiManager.ShowResultNotification(message, durationSeconds);
        StartCoroutine(ReturnFromResultStateAfterDelay(durationSeconds));
    }

    public void ShowResultMessage(string message, float durationSeconds = 1.2f)
    {
        ShowResultNotification(message, durationSeconds);
    }

    IEnumerator ReturnFromResultStateAfterDelay(float seconds)
    {
        yield return new WaitForSeconds(Mathf.Max(0.1f, seconds));
        Player current = GetCurrentPlayer();
        if (current == null) yield break;
        TransitionState(current.isAI ? GameStateMachine.State.AIProcessing : GameStateMachine.State.ResolvingTile);
    }

    void CloseInteractivePopupsForAI()
    {
        if (uiManager == null) return;
        uiManager.HidePropertyPanel();
        uiManager.HideJailPanel();
        uiManager.HideTradePanel();
        uiManager.HideCardPanel();
    }
}
