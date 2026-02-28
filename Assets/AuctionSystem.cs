using UnityEngine;
using UnityEngine.UIElements;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// Handles property auctions when a player declines to buy a property.
/// All players can bid, highest bidder wins.
/// </summary>
public class AuctionSystem : MonoBehaviour
{
    [Header("References")]
    public TurnManager turnManager;
    public UIDocumentManager uiManager;
    
    [Header("Auction UI Document")]
    [Tooltip("Auction panel document (shown during auctions). Leave null to use MainHUD.")]
    
    [Header("UGUI Auction Panel")]
    public bool useUGUIAuctionPanel = true;
    [Tooltip("Enable new UGUI auction module under Assets/Scripts/UI/Auction.")]
    public bool useNewUGUIAuctionModule = true;
    [Tooltip("New UGUI auction panel controller (Landlord.UI.Auction). Assign via inspector.")]
    public Landlord.UI.Auction.AuctionPanelController auctionPanelUGUIV2;
    [Tooltip("Optional: assign AuctionPanelUGUI GameObject here if controller field is hard to assign.")]
    public GameObject auctionPanelUGUIV2Root;
    public UIDocument auctionPanelDocument;
    
    [Header("Styling")]
    [Tooltip("Optional glossy header sprite for the auction panel")]
    public Sprite auctionHeaderGlossSprite;
    
    [Header("Auction Settings")]
    [Tooltip("Minimum bid amount (default: 10% of property value)")]
    public int minBidPercentage = 10;
    
    [Tooltip("Bid increment amount")]
    public int bidIncrement = 10000; // ₦10,000
    
    [Tooltip("Auction timeout in seconds (if no bids)")]
    public float auctionTimeout = 30f;
    [Tooltip("If true, auction is strictly turn-based and never auto-ends on timer.")]
    public bool disableAuctionTimeoutForTurnBased = true;
    
    [Tooltip("Max auction duration in seconds (force end if exceeded)")]
    public float auctionMaxDuration = 60f;
    
    [Tooltip("Delay before AI places bid or pass (seconds)")]
    public float aiBidDelay = 0.8f;
    [Tooltip("Minimum think time before AI responds in UGUI v2 auction (seconds).")]
    public float aiV2ThinkMin = 1.0f;
    [Tooltip("Maximum think time before AI responds in UGUI v2 auction (seconds).")]
    public float aiV2ThinkMax = 2.0f;
    
    [Header("AI Bidding Strategy")]
    [Tooltip("How willing AI is to bid (0 = conservative, 1 = aggressive).")]
    [Range(0f, 1f)]
    public float aiRiskTolerance = 0.55f;
    [Tooltip("Fraction of net worth AI tries to keep as cash reserve (0.1 = 10%).")]
    [Range(0.05f, 0.4f)]
    public float aiReserveFraction = 0.2f;
    [Tooltip("Max bid as multiple of property price when not completing monopoly (e.g. 1.4 = 140%).")]
    [Range(1f, 2f)]
    public float aiMaxBidOverPrice = 1.4f;
    [Tooltip("Max bid as multiple of property price when completing a monopoly (e.g. 2 = 200%).")]
    [Range(1.2f, 2.5f)]
    public float aiMonopolyMaxBidOverPrice = 2f;
    [Tooltip("Enable detailed AI auction logs to Console + gameplay.log.")]
    public bool enableAIAuctionDebugLogs = true;
    
    // Current auction state
    private float auctionStartTime;
    private Player lastAIAuctionPlayer;
    private Property currentAuctionProperty;
    private TileInfo currentAuctionTile;
    private Player auctionInitiator;
    private Dictionary<Player, int> playerBids = new Dictionary<Player, int>();
    private Player highestBidder;
    private int highestBid = 0;
    private int currentBid = 0;
    private bool auctionInProgress = false;
    private Coroutine auctionTimeoutCoroutine;
    private Coroutine aiAuctionCoroutine;
    private Coroutine aiAuctionCoroutineV2;
    private MonoBehaviour aiAuctionCoroutineV2Host;
    private bool usingNewUGUIAuctionSession = false;
    
    // Auction turn system (independent from main game turns)
    private int auctionCurrentPlayerIndex = 0;
    private List<Player> auctionActivePlayers = new List<Player>();

    /// <summary>True while an auction is active (bidding in progress). Used by TurnManager to avoid advancing turn during auction.</summary>
    public bool IsAuctionInProgress() => auctionInProgress;

    // UI Elements (will be set from UIDocumentManager or separate document)
    private VisualElement auctionPanel;
    private Label auctionPropertyText; // Legacy: kept for backward compatibility
    private Label auctionTitleText;
    private Label auctionPropertyNameText; // New: dedicated property name label
    private Label auctionCurrentBidText;
    private Label auctionHighestBidderText;
    private IntegerField bidInputField;
    private Button bidButton;
    private Button passButton;
    private Label auctionStatusText;
    
    void Start()
    {
        if (turnManager == null)
        {
            turnManager = FindAnyObjectByType<TurnManager>();
        }
        
        if (uiManager == null)
        {
            uiManager = FindAnyObjectByType<UIDocumentManager>();
        }

        if (auctionPanelUGUIV2 == null && auctionPanelUGUIV2Root != null)
        {
            auctionPanelUGUIV2 = auctionPanelUGUIV2Root.GetComponent<Landlord.UI.Auction.AuctionPanelController>();
            if (auctionPanelUGUIV2 == null)
            {
                Debug.LogError("AuctionSystem: auctionPanelUGUIV2Root is assigned but has no AuctionPanelController component.");
            }
        }
        if (auctionPanelUGUIV2 == null)
        {
            EnsureUGUIV2ControllerAuto();
        }
        
        RegisterUGUIV2Callbacks();
        
        InitializeAuctionUI();
    }

    void EnsureUGUIV2ControllerAuto()
    {
        if (auctionPanelUGUIV2 == null)
        {
            auctionPanelUGUIV2 = FindAnyObjectByType<Landlord.UI.Auction.AuctionPanelController>();
            if (auctionPanelUGUIV2 != null)
            {
                var foundView = FindAnyObjectByType<Landlord.UI.Auction.AuctionPanelView>();
                if (foundView != null) auctionPanelUGUIV2.SetView(foundView);
                auctionPanelUGUIV2Root = auctionPanelUGUIV2.gameObject;
                RegisterUGUIV2Callbacks();
                Debug.Log("AuctionSystem: Found existing AuctionPanelController in scene.");
                return;
            }
        }

        GameObject host = auctionPanelUGUIV2Root;
        if (host == null)
        {
            host = GameObject.Find("AuctionPanelUGUI");
        }

        if (host == null)
        {
            Canvas targetCanvas = FindAnyObjectByType<Canvas>();
            host = new GameObject("AuctionPanelUGUI", typeof(RectTransform), typeof(CanvasGroup), typeof(Landlord.UI.Auction.AuctionPanelView), typeof(Landlord.UI.Auction.AuctionPanelController), typeof(Landlord.UI.Auction.AuctionPanelMockupBuilder));
            if (targetCanvas != null)
            {
                host.transform.SetParent(targetCanvas.transform, false);
                RectTransform rt = host.GetComponent<RectTransform>();
                rt.anchorMin = Vector2.zero;
                rt.anchorMax = Vector2.one;
                rt.offsetMin = Vector2.zero;
                rt.offsetMax = Vector2.zero;
            }
            else
            {
                host.AddComponent<Canvas>().renderMode = RenderMode.ScreenSpaceOverlay;
                host.AddComponent<UnityEngine.UI.GraphicRaycaster>();
            }
            var builder = host.GetComponent<Landlord.UI.Auction.AuctionPanelMockupBuilder>();
            if (builder != null) builder.BuildMockupLayout();
        }

        var view = host.GetComponent<Landlord.UI.Auction.AuctionPanelView>();
        if (view == null) view = host.AddComponent<Landlord.UI.Auction.AuctionPanelView>();
        var controller = host.GetComponent<Landlord.UI.Auction.AuctionPanelController>();
        if (controller == null) controller = host.AddComponent<Landlord.UI.Auction.AuctionPanelController>();
        controller.SetView(view);

        auctionPanelUGUIV2Root = host;
        auctionPanelUGUIV2 = controller;
        RegisterUGUIV2Callbacks();
        Debug.Log("AuctionSystem: Auto-resolved AuctionPanelUGUI v2 controller.");
    }

    void RegisterUGUIV2Callbacks()
    {
        if (auctionPanelUGUIV2 == null) return;
        auctionPanelUGUIV2.OnAuctionCompleted -= OnAuctionCompletedFromUGUIV2;
        auctionPanelUGUIV2.OnAuctionCompleted += OnAuctionCompletedFromUGUIV2;
    }

    void EnsureLegacyAuctionUIHiddenForUGUIV2()
    {
        if (auctionPanelDocument != null && auctionPanelDocument.rootVisualElement != null)
        {
            auctionPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
            auctionPanelDocument.rootVisualElement.pickingMode = PickingMode.Ignore;
        }
        if (auctionPanel != null)
        {
            auctionPanel.style.display = DisplayStyle.None;
            auctionPanel.pickingMode = PickingMode.Ignore;
        }
    }

    void OnDestroy()
    {
        if (auctionPanelUGUIV2 != null)
        {
            auctionPanelUGUIV2.OnAuctionCompleted -= OnAuctionCompletedFromUGUIV2;
        }
    }
    
    void InitializeAuctionUI()
    {
        VisualElement root = null;
        
        // Try to use separate auction document first (like other panels)
        if (auctionPanelDocument != null)
        {
            if (auctionPanelDocument.rootVisualElement != null)
            {
                root = auctionPanelDocument.rootVisualElement;
                Debug.Log("AuctionSystem: Using separate AuctionPanelDocument");
            }
            else
            {
                Debug.LogWarning("AuctionSystem: auctionPanelDocument assigned but rootVisualElement is null! Document may not be loaded yet.");
            }
        }
        // Fallback to MainHUD if no separate document
        else if (uiManager != null && uiManager.mainHUDDocument != null)
        {
            if (uiManager.mainHUDDocument.rootVisualElement != null)
            {
                root = uiManager.mainHUDDocument.rootVisualElement;
                Debug.Log("AuctionSystem: Using MainHUD document (fallback)");
            }
            else
            {
                Debug.LogWarning("AuctionSystem: MainHUD document assigned but rootVisualElement is null!");
            }
        }
        
        if (root == null)
        {
            Debug.LogWarning("AuctionSystem: No UI document found! Assign AuctionPanelDocument or ensure MainHUD is available.");
            Debug.LogWarning($"AuctionSystem: auctionPanelDocument = {(auctionPanelDocument != null ? "Assigned" : "NULL")}");
            Debug.LogWarning($"AuctionSystem: uiManager = {(uiManager != null ? "Assigned" : "NULL")}");
            if (uiManager != null)
                Debug.LogWarning($"AuctionSystem: mainHUDDocument = {(uiManager.mainHUDDocument != null ? "Assigned" : "NULL")}");
            return;
        }
        
        // Find auction panel
        auctionPanel = root.Q<VisualElement>("AuctionPanel");
        if (auctionPanel == null)
        {
            Debug.LogError("AuctionSystem: AuctionPanel not found in UI. Check your UXML file has an element named 'AuctionPanel'.");
            Debug.LogError($"AuctionSystem: Searched in root: {root.name}");
            return;
        }
        
        Debug.Log("AuctionSystem: AuctionPanel found successfully!");
        
        // Find all UI elements
        auctionPropertyText = root.Q<Label>("AuctionPropertyText"); // Legacy support
        auctionTitleText = root.Q<Label>("AuctionTitleText");
        auctionPropertyNameText = root.Q<Label>("AuctionPropertyNameText");
        auctionCurrentBidText = root.Q<Label>("AuctionCurrentBidText");
        auctionHighestBidderText = root.Q<Label>("AuctionHighestBidderText");
        bidInputField = root.Q<IntegerField>("BidInputField");
        bidButton = root.Q<Button>("BidButton");
        passButton = root.Q<Button>("PassButton");
        auctionStatusText = root.Q<Label>("AuctionStatusText");

        // Apply glossy header if available
        ApplyHeaderGloss(root, "AuctionHeader");
        
        // Log which elements were found
        Debug.Log($"AuctionSystem: UI Elements found - PropertyNameText: {(auctionPropertyNameText != null ? "Yes" : "No")}, " +
                  $"PropertyText (legacy): {(auctionPropertyText != null ? "Yes" : "No")}, " +
                  $"CurrentBidText: {(auctionCurrentBidText != null ? "Yes" : "No")}, " +
                  $"BidButton: {(bidButton != null ? "Yes" : "No")}, " +
                  $"PassButton: {(passButton != null ? "Yes" : "No")}");
        
        // Connect button events (remove old listeners first to avoid duplicates)
        if (bidButton != null)
        {
            bidButton.clicked -= OnBidButtonClicked; // Remove if already connected
            bidButton.clicked += OnBidButtonClicked;
        }
        else
        {
            Debug.LogWarning("AuctionSystem: BidButton not found!");
        }
        
        if (passButton != null)
        {
            passButton.clicked -= OnPassButtonClicked; // Remove if already connected
            passButton.clicked += OnPassButtonClicked;
        }
        else
        {
            Debug.LogWarning("AuctionSystem: PassButton not found!");
        }
        
        // Hide panel initially
        if (auctionPanelDocument != null)
        {
            // Hide entire document root (like other panels)
            root.style.display = DisplayStyle.None;
            Debug.Log("AuctionSystem: Hiding auction document root initially");
        }
        else
        {
            // Hide just the panel element (if in MainHUD)
            if (auctionPanel != null)
            {
                auctionPanel.style.display = DisplayStyle.None;
                Debug.Log("AuctionSystem: Hiding auction panel in MainHUD initially");
            }
        }
    }

    Sprite GetHeaderGlossSprite()
    {
        if (auctionHeaderGlossSprite != null) return auctionHeaderGlossSprite;
        if (uiManager != null && uiManager.uiHeaderGlossSprite != null) return uiManager.uiHeaderGlossSprite;
        if (uiManager != null && uiManager.tileDetailsHeaderGlossSprite != null) return uiManager.tileDetailsHeaderGlossSprite;
        return null;
    }

    void ApplyHeaderGloss(VisualElement root, string headerName)
    {
        if (root == null || string.IsNullOrEmpty(headerName)) return;
        Sprite gloss = GetHeaderGlossSprite();
        if (gloss == null) return;

        VisualElement header = root.Q<VisualElement>(headerName);
        if (header != null)
        {
            header.style.backgroundImage = new StyleBackground(gloss);
        }
    }
    
    /// <summary>
    /// Start an auction for a property when a player declines to buy it.
    /// </summary>


public void StartAuction(Property property, TileInfo tile, Player initiator)
    {
        if (useUGUIAuctionPanel && useNewUGUIAuctionModule && auctionPanelUGUIV2 == null)
        {
            EnsureUGUIV2ControllerAuto();
        }

        usingNewUGUIAuctionSession = false;
        if (auctionInProgress)
        {
            Debug.LogWarning("AuctionSystem: Cannot start new auction - one is already in progress!");
            return;
        }
        if (turnManager != null && turnManager.tradeSystem != null && turnManager.tradeSystem.IsTradeInProgress())
        {
            Debug.LogWarning("AuctionSystem: Cannot start auction while a trade is in progress!");
            return;
        }
        if (property == null || tile == null)
        {
            Debug.LogWarning("AuctionSystem: Cannot start auction - property or tile is null!");
            return;
        }
        
        if (property.owner != null)
        {
            Debug.LogWarning("AuctionSystem: Cannot auction property that is already owned!");
            return;
        }

        if (useUGUIAuctionPanel && useNewUGUIAuctionModule && auctionPanelUGUIV2 != null)
        {
            EnsureLegacyAuctionUIHiddenForUGUIV2();
            currentAuctionProperty = property;
            currentAuctionTile = tile;
            auctionInitiator = initiator;
            playerBids.Clear();
            highestBidder = null;
            highestBid = 0;
            auctionCurrentPlayerIndex = 0;
            usingNewUGUIAuctionSession = true;

            auctionActivePlayers.Clear();
            if (turnManager != null && turnManager.players != null)
            {
                foreach (Player p in turnManager.players)
                {
                    if (p != null && !p.IsEliminated)
                    {
                        auctionActivePlayers.Add(p);
                    }
                }
            }

            int v2MinBidPercent = minBidPercentage;
            if (auctionInitiator != null && auctionInitiator.HasCharacterEffect(CharacterEffectKeys.FreshGradMinBidIncrease))
            {
                v2MinBidPercent = Mathf.Max(v2MinBidPercent, 15);
            }
            int v2MinBid = Mathf.Max(property.price * v2MinBidPercent / 100, 10000);
            currentBid = v2MinBid;

            auctionInProgress = true;
            if (turnManager != null)
                turnManager.TransitionState(GameStateMachine.State.InAuction);
            auctionStartTime = Time.time;
            lastAIAuctionPlayer = null;

            NotifyAllPlayersAuctionStarted();
            OpenUGUIV2AuctionSession(property, tile, initiator, v2MinBid);

            if (aiAuctionCoroutineV2 != null && aiAuctionCoroutineV2Host != null)
            {
                aiAuctionCoroutineV2Host.StopCoroutine(aiAuctionCoroutineV2);
                aiAuctionCoroutineV2 = null;
                aiAuctionCoroutineV2Host = null;
            }

            MonoBehaviour v2Host = ResolveActiveCoroutineHost();
            if (v2Host != null)
            {
                aiAuctionCoroutineV2Host = v2Host;
                aiAuctionCoroutineV2 = v2Host.StartCoroutine(DriveUGUIV2AIBids());
            }
            else
            {
                Debug.LogError("AuctionSystem: Could not start v2 AI auction coroutine - no active host MonoBehaviour.");
            }
            return;
        }
        if (useUGUIAuctionPanel && useNewUGUIAuctionModule)
        {
            Debug.LogError("AuctionSystem: New UGUI auction module is enabled but no AuctionPanelController (v2) is assigned. Auction start aborted to avoid legacy UI fallback.");
            return;
        }
        
        // Re-initialize UI so we always have fresh refs and button handlers (document may load after Start)
        InitializeAuctionUI();
        
        if (auctionPanel == null || bidButton == null || passButton == null)
        {
            Debug.LogWarning("AuctionSystem: UI elements missing after init. Bid/Pass may not work.");
        }
        
        if (auctionPanel == null)
        {
            Debug.LogError("AuctionSystem: Cannot start auction - AuctionPanel not found! Make sure AuctionPanelDocument is assigned or AuctionPanel exists in MainHUD.");
            return;
        }
        
        currentAuctionProperty = property;
        currentAuctionTile = tile;
        auctionInitiator = initiator;
        playerBids.Clear();
        highestBidder = null;
        highestBid = 0;
        auctionCurrentPlayerIndex = 0;
        
        // Build list of active players for auction (all non-eliminated players)
        auctionActivePlayers.Clear();
        if (turnManager != null && turnManager.players != null)
        {
            foreach (Player p in turnManager.players)
            {
                if (p != null && !p.IsEliminated)
                {
                    auctionActivePlayers.Add(p);
                }
            }
        }
        
        // Human goes first: set auction current player to first human so they can bid or pass before AI
        auctionCurrentPlayerIndex = 0;
        for (int i = 0; i < auctionActivePlayers.Count; i++)
        {
            if (auctionActivePlayers[i] != null && !auctionActivePlayers[i].isAI)
            {
                auctionCurrentPlayerIndex = i;
                Debug.Log($"[Auction] Human first: {auctionActivePlayers[i].playerName} (index {i})");
                break;
            }
        }
        
        // Calculate minimum bid (10% of property value, or minimum of ₦10,000)
        int minBidPercent = minBidPercentage;
        if (auctionInitiator != null && auctionInitiator.HasCharacterEffect(CharacterEffectKeys.FreshGradMinBidIncrease))
        {
            minBidPercent = Mathf.Max(minBidPercent, 15);
        }
        int minBid = Mathf.Max(property.price * minBidPercent / 100, 10000);
        currentBid = minBid;
        
        auctionInProgress = true;
        if (turnManager != null)
            turnManager.TransitionState(GameStateMachine.State.InAuction);
        auctionStartTime = Time.time;
        lastAIAuctionPlayer = null;
        
        Debug.Log($"=== AUCTION STARTED ===");
        Debug.Log($"Property: {property.propertyName}");
        Debug.Log($"Starting Bid: ₦{minBid:N0}");
        Debug.Log($"Active Players: {auctionActivePlayers.Count}");
        Debug.Log($"AuctionPanelDocument: {(auctionPanelDocument != null ? "Assigned" : "NULL - using MainHUD")}");
        Debug.Log($"AuctionPanel found: {(auctionPanel != null ? "Yes" : "No")}");
        
        // Update UI
        UpdateAuctionUI();
        ShowAuctionPanel();
        
        // Verify panel is shown
        if (auctionPanelDocument != null)
        {
            if (auctionPanelDocument.rootVisualElement.style.display == DisplayStyle.None)
            {
                Debug.LogWarning("AuctionSystem: Panel still hidden after ShowAuctionPanel()! Forcing display...");
                auctionPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
            }
        }
        else if (auctionPanel != null)
        {
            if (auctionPanel.style.display == DisplayStyle.None)
            {
                Debug.LogWarning("AuctionSystem: Panel still hidden after ShowAuctionPanel()! Forcing display...");
                auctionPanel.style.display = DisplayStyle.Flex;
            }
        }
        
        // Start timeout coroutine
        if (auctionTimeoutCoroutine != null)
            StopCoroutine(auctionTimeoutCoroutine);
        auctionTimeoutCoroutine = StartCoroutine(AuctionTimeoutCoroutine());
        
        // Notify all players
        NotifyAllPlayersAuctionStarted();
        
        // If current player is AI, auto-bid or pass after delay
        TryStartAIAuctionTurn();
    }
    
    // --- AI strategic bidding helpers ---
    
    static int GetGroupSize(Property prop)
    {
        if (prop == null || string.IsNullOrEmpty(prop.groupId)) return 1;
        TileInfo[] tiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int count = 0;
        foreach (TileInfo t in tiles)
        {
            if (t.tileType == TileType.Property && t.property != null && t.property.groupId == prop.groupId)
                count++;
        }
        return count > 0 ? count : 1;
    }
    
    static int GetOwnedCountInGroup(Player player, string groupId)
    {
        if (player == null || string.IsNullOrEmpty(groupId)) return 0;
        TileInfo[] tiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int count = 0;
        foreach (TileInfo t in tiles)
        {
            if (t.tileType == TileType.Property && t.property != null && t.property.groupId == groupId && t.property.owner == player)
                count++;
        }
        return count;
    }
    
    /// <summary>Returns 0-1: 1 = would complete monopoly, 0.5 = one away, etc.</summary>
    float GetMonopolyScore(Player ai, Property prop)
    {
        if (ai == null || prop == null || string.IsNullOrEmpty(prop.groupId)) return 0f;
        int groupSize = GetGroupSize(prop);
        int owned = GetOwnedCountInGroup(ai, prop.groupId);
        if (owned >= groupSize) return 0f; // already have monopoly
        int need = groupSize - owned; // 1 = one more completes monopoly
        return need == 1 ? 1f : (need == 2 ? 0.5f : 0.2f);
    }
    
    /// <summary>0 = early (few props bought), 1 = late (most bought).</summary>
    float GetGameStage()
    {
        if (turnManager == null || turnManager.players == null) return 0.5f;
        TileInfo[] tiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int totalProps = 0;
        foreach (TileInfo t in tiles)
        {
            if (t.tileType == TileType.Property && t.property != null) totalProps++;
        }
        if (totalProps <= 0) return 0.5f;
        int owned = 0;
        foreach (Player p in turnManager.players)
        {
            if (p != null && !p.IsEliminated) owned += p.GetPropertyCount();
        }
        return Mathf.Clamp01((float)owned / totalProps);
    }
    
    int GetRichestOpponentMoney(Player exclude)
    {
        if (turnManager == null || turnManager.players == null) return 0;
        int max = 0;
        foreach (Player p in turnManager.players)
        {
            if (p != null && !p.IsEliminated && p != exclude)
                max = Mathf.Max(max, p.Money);
        }
        return max;
    }
    
    /// <summary>Strategic score 0-1 for whether AI should bid. Uses property value, monopoly potential, cash reserve, opponents, game stage.</summary>
    float GetAIBidScore(Player ai, int nextBid)
    {
        if (ai == null || currentAuctionProperty == null) return 0f;
        AICharacterProfileData profile = AICharacterBehaviorProfiles.Resolve(ai);
        AIProfilePhase phase = AICharacterBehaviorProfiles.GetPhase(profile, ai.turnsTaken);
        float auction01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.auction) : 0.5f;
        float risk01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.risk) : 0.5f;
        float liquidity01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.liquidity) : 0.5f;
        float monopoly01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.monopoly) : 0.5f;
        
        int price = currentAuctionProperty.price;
        float monopolyScore = GetMonopolyScore(ai, currentAuctionProperty);
        bool wouldCompleteMonopoly = monopolyScore >= 0.99f;
        float maxOverPrice = wouldCompleteMonopoly ? aiMonopolyMaxBidOverPrice : aiMaxBidOverPrice;
        maxOverPrice += Mathf.Lerp(-0.15f, 0.28f, auction01);
        if (wouldCompleteMonopoly)
            maxOverPrice += Mathf.Lerp(0f, 0.35f, monopoly01);
        maxOverPrice = Mathf.Clamp(maxOverPrice, 1f, 2.8f);
        if (nextBid > price * maxOverPrice)
            return 0f;
        
        // Value: prefer not to overpay (1 at price, lower above)
        float valueDivisor = Mathf.Max(price * (maxOverPrice - 1f), 1f);
        float valueScore = nextBid <= price ? 1f : Mathf.Clamp01(1f - (float)(nextBid - price) / valueDivisor);
        
        // Cash reserve: penalize if bid would leave us with less than reserve
        float reserveFraction = aiReserveFraction * Mathf.Lerp(0.75f, 1.35f, liquidity01);
        int reserve = Mathf.Max(50000, (int)(ai.GetNetWorth() * reserveFraction));
        int cashAfter = ai.Money - nextBid;
        float cashScore = cashAfter >= reserve ? 1f : Mathf.Clamp01((float)cashAfter / reserve);
        
        // Phase behavior: early acquisition, mid consolidation, late survival bias.
        float phaseBonus = 0f;
        float phaseRiskMultiplier = 1f;
        switch (phase)
        {
            case AIProfilePhase.Early:
                phaseBonus = 0.12f;
                phaseRiskMultiplier = 1.08f;
                break;
            case AIProfilePhase.Mid:
                phaseBonus = 0.04f;
                phaseRiskMultiplier = 1f;
                break;
            case AIProfilePhase.Late:
                phaseBonus = -0.04f;
                phaseRiskMultiplier = Mathf.Lerp(0.9f, 1.02f, risk01);
                break;
        }
        
        // Opponent pressure: if highest bidder has less cash, we can push; if they have more, we're more cautious
        int opponentCash = highestBidder != null ? highestBidder.Money : GetRichestOpponentMoney(ai);
        float opponentFactor = 1f;
        if (highestBidder != null && highestBidder != ai)
        {
            if (ai.Money > highestBidder.Money + nextBid)
                opponentFactor = 1.1f; // we can outbid comfortably
            else if (ai.Money < highestBidder.Money)
                opponentFactor = 0.85f; // they're richer, be cautious
        }
        
        // Weighted combination: monopoly and value matter most
        float groupBias = AICharacterBehaviorProfiles.GetGroupBiasWeight(profile, currentAuctionProperty);
        float profileRiskBlend = Mathf.Lerp(0.65f, 1.3f, (risk01 + auction01) * 0.5f);
        float score = (valueScore * 0.24f + monopolyScore * Mathf.Lerp(0.35f, 0.55f, monopoly01) + cashScore * 0.22f + phaseBonus) * opponentFactor;
        score *= Mathf.Clamp(groupBias, 0.65f, 1.65f);
        score *= profileRiskBlend;
        score *= phaseRiskMultiplier;
        return Mathf.Clamp01(score * (0.65f + 0.35f * aiRiskTolerance));
    }
    
    /// <summary>
    /// If the current auction player is AI, start a coroutine to bid or pass automatically.
    /// Same-player guard: if same AI is current again (bug), force pass and advance.
    /// </summary>
    void TryStartAIAuctionTurn()
    {
        if (!auctionInProgress || aiAuctionCoroutine != null) return;
        Player current = GetAuctionCurrentPlayer();
        if (current == null || !current.isAI) return;
        if (current == lastAIAuctionPlayer)
        {
            Debug.LogWarning("[Auction] Same AI still current - forcing pass and advance.");
            if (!playerBids.ContainsKey(current) || playerBids[current] != -1)
            {
                playerBids[current] = -1;
                if (auctionStatusText != null) auctionStatusText.text = $"{current.playerName} passed (forced)";
            }
            AdvanceAuctionTurn();
            CheckAuctionCompletion();
            lastAIAuctionPlayer = null;
            if (auctionInProgress)
                TryStartAIAuctionTurn();
            return;
        }
        aiAuctionCoroutine = StartCoroutine(ResolveAIAuctionTurn());
    }
    
    IEnumerator ResolveAIAuctionTurn()
    {
        Player ai = GetAuctionCurrentPlayer();
        if (ai == null || !ai.isAI || !auctionInProgress)
        {
            aiAuctionCoroutine = null;
            yield break;
        }
        lastAIAuctionPlayer = ai;
        
        float delay = (turnManager != null && turnManager.aiDecisionDelay > 0f) ? turnManager.aiDecisionDelay : aiBidDelay;
        yield return new WaitForSeconds(delay);
        
        if (!auctionInProgress || ai == null)
        {
            aiAuctionCoroutine = null;
            yield break;
        }
        if (GetAuctionCurrentPlayer() != ai)
        {
            Debug.LogWarning("[Auction] ResolveAIAuctionTurn aborted - auction current player changed.");
            lastAIAuctionPlayer = null;
            aiAuctionCoroutine = null;
            if (auctionInProgress)
                TryStartAIAuctionTurn();
            yield break;
        }
        
        int nextBid = currentBid + bidIncrement;
        if (highestBidder == null && ai.HasPerkCard(PerkCardType.AuctionEdge))
            nextBid = currentBid;
        
        bool canAfford = ai.CanAfford(nextBid);
        bool mustBid = ai.HasCharacterEffect(CharacterEffectKeys.AuctionEdge) && canAfford && nextBid <= currentAuctionProperty.price;
        float bidScore = GetAIBidScore(ai, nextBid);
        AICharacterProfileData profile = AICharacterBehaviorProfiles.Resolve(ai);
        AIProfilePhase phase = AICharacterBehaviorProfiles.GetPhase(profile, ai.turnsTaken);
        float risk01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.risk) : 0.5f;
        float auction01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.auction) : 0.5f;
        float monopoly01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.monopoly) : 0.5f;
        // Threshold with slight randomness so AI isn't perfectly predictable
        float threshold = Mathf.Lerp(0.58f, 0.28f, (risk01 + auction01) * 0.5f);
        threshold += Mathf.Lerp(0.08f, -0.06f, monopoly01);
        if (phase == AIProfilePhase.Early) threshold -= 0.04f;
        else if (phase == AIProfilePhase.Late) threshold += 0.05f;
        threshold -= aiRiskTolerance * 0.08f;
        threshold += Random.value * 0.14f;
        bool willBid = canAfford && (mustBid || (bidScore >= threshold));
        LogAIAuctionDecision($"AI_AUCTION_DECISION | player={ai.playerName} property={(currentAuctionProperty != null ? currentAuctionProperty.propertyName : "null")} nextBid={nextBid} canAfford={canAfford} mustBid={mustBid} score={bidScore:0.00} threshold={threshold:0.00} decision={(willBid ? "BID" : "PASS")} phase={phase}");
        
        if (willBid)
        {
            PlaceBid(ai, nextBid);
            if (NarrativeManager.Instance != null && currentAuctionProperty != null && nextBid >= Mathf.RoundToInt(currentAuctionProperty.price * 1.2f))
                NarrativeManager.Instance.AddSystemMessage("AI Auction", $"{ai.playerName} made an aggressive bid of ₦{nextBid:N0} for {currentAuctionProperty.propertyName}.");
            AdvanceAuctionTurn();
            CheckAuctionCompletion();
        }
        else
        {
            if (playerBids.ContainsKey(ai) && playerBids[ai] == -1) { aiAuctionCoroutine = null; yield break; }
            playerBids[ai] = -1;
            if (auctionStatusText != null) auctionStatusText.text = $"{ai.playerName} passed";
            if (NarrativeManager.Instance != null)
                NarrativeManager.Instance.AddSystemMessage("AI Auction", $"{ai.playerName} passed on {currentAuctionProperty.propertyName}.");
            AdvanceAuctionTurn();
            UpdateAuctionUI();
            CheckAuctionCompletion();
        }
        
        lastAIAuctionPlayer = null;
        aiAuctionCoroutine = null;
        if (auctionInProgress)
            TryStartAIAuctionTurn();
    }

    void LogAIAuctionDecision(string message)
    {
        if (!enableAIAuctionDebugLogs) return;
        Debug.Log($"[AI][Auction] {message}");
        GameLogger.Log(message);
    }
    
    void UpdateAuctionUI()
    {
        if (auctionPanel == null || currentAuctionProperty == null) return;
        
        // Update property name
        // Use new dedicated property name label if available, otherwise fall back to legacy combined label
        if (auctionPropertyNameText != null)
        {
            auctionPropertyNameText.text = currentAuctionProperty.propertyName;
        }
        else if (auctionPropertyText != null)
        {
            // Legacy: combined "Auction: [Property Name]" format
            auctionPropertyText.text = $"Auction: {currentAuctionProperty.propertyName}";
        }
        
        // Update current bid
        if (auctionCurrentBidText != null)
        {
            auctionCurrentBidText.text = $"Current Bid: ₦{currentBid:N0}";
        }
        
        // Update highest bidder
        if (auctionHighestBidderText != null)
        {
            if (highestBidder != null)
            {
                auctionHighestBidderText.text = $"Highest Bidder: {highestBidder.playerName} (₦{highestBid:N0})";
            }
            else
            {
                auctionHighestBidderText.text = "No bids yet";
            }
        }
        
        // Update bid input field
        if (bidInputField != null)
        {
            int defaultBid = currentBid + bidIncrement;
            Player currentAuctionPlayer = GetAuctionCurrentPlayer();
            if (highestBidder == null && currentAuctionPlayer != null && currentAuctionPlayer.HasPerkCard(PerkCardType.AuctionEdge))
            {
                defaultBid = currentBid;
            }
            bidInputField.value = defaultBid;
        }
        
        // Update bid button state - enable for auction's current player
        if (bidButton != null)
        {
            Player currentAuctionPlayer = GetAuctionCurrentPlayer();
            
            if (currentAuctionPlayer != null)
            {
                int nextBid = currentBid + bidIncrement;
                if (highestBidder == null && currentAuctionPlayer.HasPerkCard(PerkCardType.AuctionEdge))
                {
                    nextBid = currentBid;
                }
                bool canAfford = currentAuctionPlayer.CanAfford(nextBid);
                bidButton.SetEnabled(canAfford && !currentAuctionPlayer.IsEliminated);
                
                if (!canAfford && auctionStatusText != null && string.IsNullOrEmpty(auctionStatusText.text))
                {
                    auctionStatusText.text = $"{currentAuctionPlayer.playerName} cannot afford ₦{nextBid:N0}";
                }
            }
            else
            {
                bidButton.SetEnabled(false);
                if (auctionStatusText != null && string.IsNullOrEmpty(auctionStatusText.text))
                {
                    auctionStatusText.text = "No active players";
                }
            }
        }
        
        // Update pass button state - enable for auction's current player
        if (passButton != null)
        {
            Player currentAuctionPlayer = GetAuctionCurrentPlayer();
            bool canPass = currentAuctionPlayer != null && !currentAuctionPlayer.IsEliminated;
            if (currentAuctionPlayer != null && currentAuctionPlayer.HasCharacterEffect(CharacterEffectKeys.AuctionEdge))
            {
                int requiredBid = GetRequiredAuctionBid(currentAuctionPlayer);
                if (currentAuctionPlayer.CanAfford(requiredBid))
                    canPass = false;
            }
            passButton.SetEnabled(canPass);
        }
        
        // Update status to show whose turn it is in auction
        if (auctionStatusText != null && turnManager != null)
        {
            Player currentAuctionPlayer = GetAuctionCurrentPlayer();
            if (currentAuctionPlayer != null)
            {
                // Only update if status text is empty or showing default message
                if (string.IsNullOrEmpty(auctionStatusText.text) || 
                    auctionStatusText.text.Contains("can bid") || 
                    auctionStatusText.text.Contains("cannot afford"))
                {
                    auctionStatusText.text = $"{currentAuctionPlayer.playerName}'s turn to bid or pass";
                }
            }
        }
    }
    
    void ShowAuctionPanel()
    {
        Debug.Log("AuctionSystem: ShowAuctionPanel() called");
        
        if (auctionPanelDocument != null)
        {
            // Put auction panel on top so it receives clicks (above Main HUD)
            if (auctionPanelDocument.panelSettings != null)
                auctionPanelDocument.panelSettings.sortingOrder = 500;
            // Show entire document root (like other panels)
            if (auctionPanelDocument.rootVisualElement != null)
            {
                // Source of truth is UXML/USS. Runtime code intentionally avoids popup layout edits.
                auctionPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
                Debug.Log("AuctionSystem: Showing auction document root");
            }
            else
            {
                Debug.LogWarning("AuctionSystem: auctionPanelDocument.rootVisualElement is null!");
            }
        }
        else if (auctionPanel != null)
        {
            // Show just the panel element (if in MainHUD)
            auctionPanel.style.display = DisplayStyle.Flex;
            Debug.Log("AuctionSystem: Showing auction panel in MainHUD");
        }
        else
        {
            Debug.LogError("AuctionSystem: Cannot show panel - both auctionPanelDocument and auctionPanel are null!");
        }
    }
    
    void HideAuctionPanel()
    {
        if (auctionPanelDocument != null)
        {
            if (auctionPanelDocument.panelSettings != null)
                auctionPanelDocument.panelSettings.sortingOrder = 0;
            // Hide entire document root (like other panels)
            if (auctionPanelDocument.rootVisualElement != null)
                auctionPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
        }
        else if (auctionPanel != null)
        {
            // Hide just the panel element (if in MainHUD)
            auctionPanel.style.display = DisplayStyle.None;
        }
    }
    
    void OnBidButtonClicked()
    {
        if (!auctionInProgress || turnManager == null) return;
        
        // In auction, find which player should bid
        // Try to use the auction's current player first, then fall back to main game's current player
        Player biddingPlayer = GetAuctionCurrentPlayer();
        
        if (biddingPlayer == null)
        {
            Debug.LogWarning("AuctionSystem: No active player available to bid!");
            if (auctionStatusText != null)
                auctionStatusText.text = "No active players can bid";
            return;
        }
        
        // Check if player has already passed
        if (playerBids.ContainsKey(biddingPlayer) && playerBids[biddingPlayer] == -1)
        {
            if (auctionStatusText != null)
                auctionStatusText.text = $"{biddingPlayer.playerName} has already passed! Cannot bid again.";
            Debug.LogWarning($"{biddingPlayer.playerName} tried to bid after passing!");
            return;
        }
        
        int bidAmount = currentBid + bidIncrement;
        
        if (bidInputField != null)
        {
            bidAmount = bidInputField.value;
        }
        
        // Validate bid
        if (bidAmount <= currentBid)
        {
            bool canUseEdge = highestBidder == null && biddingPlayer.HasPerkCard(PerkCardType.AuctionEdge);
            if (!canUseEdge || bidAmount < currentBid)
            {
                if (auctionStatusText != null)
                    auctionStatusText.text = $"Bid must be higher than ₦{currentBid:N0}!";
                return;
            }
        }
        
        if (!biddingPlayer.CanAfford(bidAmount))
        {
            if (auctionStatusText != null)
                auctionStatusText.text = $"{biddingPlayer.playerName} cannot afford bid of ₦{bidAmount:N0}!";
            return;
        }
        
        // Place bid
        if (highestBidder == null && bidAmount == currentBid && biddingPlayer.HasPerkCard(PerkCardType.AuctionEdge))
        {
            PerkCardInstance card = biddingPlayer.GetPerkCard(PerkCardType.AuctionEdge);
            biddingPlayer.ConsumePerkCard(card);
            GameLogger.Log($"PERK_AUCTION_EDGE | player={biddingPlayer.playerName} uses_left={card.usesRemaining}");
            Debug.Log(card.sideJoke);
        }
        PlaceBid(biddingPlayer, bidAmount);
        
        // Move to next player in auction rotation
        AdvanceAuctionTurn();
        
        // Check if auction should end (only one active bidder remaining)
        CheckAuctionCompletion();
        
        // If next player is AI, auto-bid or pass
        TryStartAIAuctionTurn();
    }
    
    void OnPassButtonClicked()
    {
        if (!auctionInProgress || turnManager == null) return;
        
        // Get the auction's current player
        Player passingPlayer = GetAuctionCurrentPlayer();
        
        if (passingPlayer == null)
        {
            Debug.LogWarning("AuctionSystem: No active player available to pass!");
            return;
        }
        
        PassBid(passingPlayer);
    }

    public void PassBid(Player passingPlayer)
    {
        if (!auctionInProgress || turnManager == null) return;

        if (passingPlayer != null && passingPlayer.HasCharacterEffect(CharacterEffectKeys.AuctionEdge))
        {
            int requiredBid = GetRequiredAuctionBid(passingPlayer);
            if (passingPlayer.CanAfford(requiredBid))
            {
                if (auctionStatusText != null)
                    auctionStatusText.text = $"{passingPlayer.playerName} cannot pass the auction while they can afford to bid.";
                return;
            }
        }

        // Check if player already passed
        if (playerBids.ContainsKey(passingPlayer) && playerBids[passingPlayer] == -1)
        {
            Debug.LogWarning($"{passingPlayer.playerName} already passed!");
            return;
        }
        
        // Mark player as passed
        playerBids[passingPlayer] = -1; // -1 means passed
        
        Debug.Log($"{passingPlayer.playerName} passed on the auction");
        
        if (auctionStatusText != null)
            auctionStatusText.text = $"{passingPlayer.playerName} passed";
        
        // Move to next player in auction rotation
        AdvanceAuctionTurn();
        
        // Update UI to disable bid button for this player
        UpdateAuctionUI();
        
        // Check if auction should end (only one active bidder remaining)
        CheckAuctionCompletion();
        
        // If next player is AI, auto-bid or pass
        TryStartAIAuctionTurn();
    }
    
    /// <summary>
    /// Get the current player in the auction (independent from main game turn).
    /// Returns the first active player who hasn't passed, or null if all passed.
    /// </summary>
    Player GetAuctionCurrentPlayer()
    {
        if (auctionActivePlayers.Count == 0) return null;
        
        // Start from auction's current player index
        int startIndex = auctionCurrentPlayerIndex;
        int attempts = 0;
        
        while (attempts < auctionActivePlayers.Count)
        {
            Player player = auctionActivePlayers[auctionCurrentPlayerIndex];
            
            if (player != null && !player.IsEliminated)
            {
                // Check if this player has passed
                bool hasPassed = playerBids.ContainsKey(player) && playerBids[player] == -1;
                if (!hasPassed)
                {
                    return player; // Found active player
                }
            }
            
            // Move to next player
            auctionCurrentPlayerIndex = (auctionCurrentPlayerIndex + 1) % auctionActivePlayers.Count;
            attempts++;
            
            // Prevent infinite loop
            if (auctionCurrentPlayerIndex == startIndex && attempts > 0)
                break;
        }
        
        return null; // No active players
    }
    
    /// <summary>
    /// Advance to next active player in auction rotation.
    /// </summary>
    void AdvanceAuctionTurn()
    {
        if (auctionActivePlayers.Count == 0) return;
        
        int startIndex = auctionCurrentPlayerIndex;
        int attempts = 0;
        
        // Find next active player who hasn't passed
        while (attempts < auctionActivePlayers.Count)
        {
            auctionCurrentPlayerIndex = (auctionCurrentPlayerIndex + 1) % auctionActivePlayers.Count;
            Player nextPlayer = auctionActivePlayers[auctionCurrentPlayerIndex];
            
            if (nextPlayer != null && !nextPlayer.IsEliminated)
            {
                // Check if this player has passed
                bool hasPassed = playerBids.ContainsKey(nextPlayer) && playerBids[nextPlayer] == -1;
                if (!hasPassed)
                {
                    // Found active player
                    Debug.Log($"Auction turn advanced: {nextPlayer.playerName} can now bid/pass");
                    UpdateAuctionUI();
                    return;
                }
            }
            
            attempts++;
            
            // Prevent infinite loop
            if (auctionCurrentPlayerIndex == startIndex && attempts > 0)
                break;
        }
        
        // All players have passed or no active players
        Debug.Log("Auction: No more active players to advance to");
    }
    
    void PlaceBid(Player player, int amount)
    {
        if (player == null || amount <= currentBid) return;
        
        // Check if player has passed (shouldn't happen due to validation, but double-check)
        if (playerBids.ContainsKey(player) && playerBids[player] == -1)
        {
            Debug.LogWarning($"{player.playerName} tried to bid after passing!");
            return;
        }
        
        // Update highest bid
        currentBid = amount;
        highestBid = amount;
        highestBidder = player;
        playerBids[player] = amount; // Overwrite any previous bid or pass status
        
        Debug.Log($"{player.playerName} bid ₦{amount:N0}");
        
        if (auctionStatusText != null)
            auctionStatusText.text = $"{player.playerName} bid ₦{amount:N0}";
        
        // Reset timeout
        if (auctionTimeoutCoroutine != null)
            StopCoroutine(auctionTimeoutCoroutine);
        auctionTimeoutCoroutine = StartCoroutine(AuctionTimeoutCoroutine());
        
        // Update UI
        UpdateAuctionUI();
        
        // Notify other players
        NotifyBidPlaced(player, amount);
    }
    
    void CheckAuctionCompletion()
    {
        if (turnManager == null || !auctionInProgress) return;
        
        // Count active players (not eliminated) and their status
        int activePlayers = 0;
        int passedPlayers = 0;
        int activeBidders = 0; // Players who haven't passed
        
        foreach (Player player in turnManager.players)
        {
            if (player == null || player.IsEliminated) continue;
            
            activePlayers++;
            
            if (playerBids.ContainsKey(player))
            {
                if (playerBids[player] == -1)
                {
                    // Player has passed
                    passedPlayers++;
                }
                else
                {
                    // Player has bid (and hasn't passed)
                    activeBidders++;
                }
            }
            else
            {
                // Player hasn't bid or passed yet - they're still active
                activeBidders++;
            }
        }
        
        Debug.Log($"Auction Status - Active: {activePlayers}, Passed: {passedPlayers}, Active Bidders: {activeBidders}, Highest Bidder: {(highestBidder != null ? highestBidder.playerName : "None")}");
        
        // If only one active bidder remains (all others passed), end auction immediately
        if (activeBidders == 1 && highestBidder != null)
        {
            Debug.Log("Only one active bidder remaining - ending auction");
            EndAuction();
            return;
        }
        
        // If all players have passed
        if (passedPlayers >= activePlayers)
        {
            if (highestBidder != null)
            {
                // At least one player bid before all passed - end with winner
                Debug.Log("All players passed after bidding - ending auction with highest bidder");
                EndAuction();
            }
            else
            {
                // No one bid - property goes unsold
                Debug.Log("All players passed without bidding - property goes unsold");
                EndAuctionNoWinner();
            }
            return;
        }
    }
    
    IEnumerator AuctionTimeoutCoroutine()
    {
        float start = Time.time;
        while (auctionInProgress && (Time.time - start) < auctionTimeout)
        {
            if ((Time.time - auctionStartTime) >= auctionMaxDuration)
            {
                Debug.Log("Auction exceeded max duration - forcing end.");
                EndAuction();
                yield break;
            }
            yield return new WaitForSeconds(1f);
        }
        if (auctionInProgress)
        {
            Debug.Log("Auction timed out");
            EndAuction();
        }
    }
    
    void EndAuction()
    {
        bool wasUsingNewUGUIAuctionSession = usingNewUGUIAuctionSession;
        if (!auctionInProgress || currentAuctionProperty == null) return;
        Property wonProperty = currentAuctionProperty;
        TileInfo wonTile = currentAuctionTile;
        Player winner = highestBidder;
        int finalBid = highestBid;
        
        if (winner != null && finalBid > 0)
        {
            // Winner pays the bid amount
            if (winner.TrySpend(finalBid))
            {
                wonProperty.owner = winner;
                if (turnManager != null)
                    turnManager.RegisterPropertyAcquired(winner, wonProperty.propertyName, "Auction");
                Debug.Log($"=== AUCTION ENDED ===");
                Debug.Log($"Winner: {winner.playerName}");
                Debug.Log($"Property: {wonProperty.propertyName}");
                Debug.Log($"Final Bid: ₦{finalBid:N0}");
                
                // Update ownership tag if present
                if (wonTile != null)
                {
                    PropertyOwnershipTag ownershipTag = wonTile.GetComponent<PropertyOwnershipTag>();
                    if (ownershipTag != null)
                    {
                        ownershipTag.UpdateOwnershipDisplay();
                    }
                }
                
                if (auctionStatusText != null)
                    auctionStatusText.text = $"Winner: {winner.playerName} (₦{finalBid:N0})";

                // Winner notification card: use the same tile-details purchase panel style as normal buy.
                if (uiManager != null && wonTile != null)
                    uiManager.ShowBoughtPropertyPanel(winner, wonTile, finalBid, winner.isAI ? 1.1f : 1.8f);

                // Auction completion SFX (purchase/cash vibe).
                if (GameSoundManager.Instance != null)
                {
                    GameSoundManager.Instance.PlayBuyProperty();
                    GameSoundManager.Instance.PlayMoneyIn();
                    GameSoundManager.Instance.NotifyActivity();
                }

                // Small feed event on auction completion.
                if (NarrativeManager.Instance != null)
                    NarrativeManager.Instance.AddSystemMessage("Auction Update", $"{winner.playerName} won {wonProperty.propertyName} at auction for ₦{finalBid:N0}.");
            }
            else
            {
                Debug.LogError($"Auction winner {winner.playerName} cannot afford their bid!");
                // Property goes unsold
                EndAuctionNoWinner();
                return;
            }
        }
        else
        {
            EndAuctionNoWinner();
            return;
        }
        
        ApplyBidPenaltyForLosers();

        // Debug: log turn state when auction ends (helps diagnose stuck turn after auction)
        if (turnManager != null)
        {
            Player mainCurrent = turnManager.GetCurrentPlayer();
            Debug.Log($"[Auction] Auction ended (winner). TurnManager current player: {(mainCurrent != null ? mainCurrent.playerName : "null")} (index {(mainCurrent != null ? mainCurrent.playerIndex : -1)}). Auction initiator was: {(auctionInitiator != null ? auctionInitiator.playerName : "null")}");
        }

        // Clean up
        auctionInProgress = false;
        currentAuctionProperty = null;
        currentAuctionTile = null;
        auctionInitiator = null;
        lastAIAuctionPlayer = null;
        usingNewUGUIAuctionSession = false;
        playerBids.Clear();
        highestBidder = null;
        highestBid = 0;
        currentBid = 0;
        
        if (auctionTimeoutCoroutine != null)
        {
            StopCoroutine(auctionTimeoutCoroutine);
            auctionTimeoutCoroutine = null;
        }
        if (aiAuctionCoroutine != null)
        {
            StopCoroutine(aiAuctionCoroutine);
            aiAuctionCoroutine = null;
        }
        if (aiAuctionCoroutineV2 != null)
        {
            if (aiAuctionCoroutineV2Host != null)
                aiAuctionCoroutineV2Host.StopCoroutine(aiAuctionCoroutineV2);
            aiAuctionCoroutineV2 = null;
            aiAuctionCoroutineV2Host = null;
        }
        
        if (turnManager != null)
            turnManager.OnAuctionEnded();

        if (wasUsingNewUGUIAuctionSession && auctionPanelUGUIV2 != null)
        {
            auctionPanelUGUIV2.CloseAuction();
            return;
        }
        
        if (isActiveAndEnabled)
            StartCoroutine(HidePanelAfterDelay(2f));
        else
            HideAuctionPanel();
    }
    
    void EndAuctionNoWinner()
    {
        bool wasUsingNewUGUIAuctionSession = usingNewUGUIAuctionSession;
        Debug.Log($"=== AUCTION ENDED - NO WINNER ===");
        Debug.Log($"Property {currentAuctionProperty.propertyName} goes unsold");
        
        if (auctionStatusText != null)
            auctionStatusText.text = "No winner - Property goes unsold";
        
        ApplyBidPenaltyForLosers();

        // Debug: log turn state when auction ends (helps diagnose stuck turn after auction)
        if (turnManager != null)
        {
            Player mainCurrent = turnManager.GetCurrentPlayer();
            Debug.Log($"[Auction] Auction ended (no winner). TurnManager current player: {(mainCurrent != null ? mainCurrent.playerName : "null")} (index {(mainCurrent != null ? mainCurrent.playerIndex : -1)}). Auction initiator was: {(auctionInitiator != null ? auctionInitiator.playerName : "null")}");
        }

        // Clean up
        auctionInProgress = false;
        currentAuctionProperty = null;
        currentAuctionTile = null;
        auctionInitiator = null;
        lastAIAuctionPlayer = null;
        usingNewUGUIAuctionSession = false;
        playerBids.Clear();
        highestBidder = null;
        highestBid = 0;
        currentBid = 0;
        
        if (auctionTimeoutCoroutine != null)
        {
            StopCoroutine(auctionTimeoutCoroutine);
            auctionTimeoutCoroutine = null;
        }
        if (aiAuctionCoroutine != null)
        {
            StopCoroutine(aiAuctionCoroutine);
            aiAuctionCoroutine = null;
        }
        if (aiAuctionCoroutineV2 != null)
        {
            if (aiAuctionCoroutineV2Host != null)
                aiAuctionCoroutineV2Host.StopCoroutine(aiAuctionCoroutineV2);
            aiAuctionCoroutineV2 = null;
            aiAuctionCoroutineV2Host = null;
        }
        
        if (turnManager != null)
            turnManager.OnAuctionEnded();

        if (wasUsingNewUGUIAuctionSession && auctionPanelUGUIV2 != null)
        {
            auctionPanelUGUIV2.CloseAuction();
            return;
        }
        
        if (isActiveAndEnabled)
            StartCoroutine(HidePanelAfterDelay(2f));
        else
            HideAuctionPanel();
    }
    
    IEnumerator HidePanelAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        HideAuctionPanel();
    }
    
    void NotifyAllPlayersAuctionStarted()
    {
        if (turnManager == null) return;
        
        foreach (Player player in turnManager.players)
        {
            if (player != null && !player.IsEliminated)
            {
                Debug.Log($"[Auction] {player.playerName}: Auction started for {currentAuctionProperty.propertyName}");
            }
        }
    }
    
    void NotifyBidPlaced(Player bidder, int amount)
    {
        if (turnManager == null) return;
        
        foreach (Player player in turnManager.players)
        {
            if (player != null && !player.IsEliminated && player != bidder)
            {
                Debug.Log($"[Auction] {player.playerName}: {bidder.playerName} bid ₦{amount:N0}");
            }
        }
    }

    int GetRequiredAuctionBid(Player player)
    {
        if (player == null) return currentBid + bidIncrement;
        if (highestBidder == null && player.HasPerkCard(PerkCardType.AuctionEdge))
            return currentBid;
        return currentBid + bidIncrement;
    }

    
    public void ResolveAuctionResult(Player winner, int amount)
    {
        if (!auctionInProgress) return;
        highestBidder = winner;
        highestBid = amount;
        currentBid = amount;
        EndAuction();
    }

    public void ResolveAuctionNoWinner()
    {
        if (!auctionInProgress) return;
        EndAuctionNoWinner();
    }

    void OpenUGUIV2AuctionSession(Property property, TileInfo tile, Player initiator, int minBid)
    {
        if (auctionPanelUGUIV2 == null) return;
        if (!auctionPanelUGUIV2.gameObject.activeInHierarchy)
            auctionPanelUGUIV2.gameObject.SetActive(true);

        string resolvedLocalPlayerId = string.Empty;
        for (int i = 0; i < auctionActivePlayers.Count; i++)
        {
            Player candidate = auctionActivePlayers[i];
            if (candidate != null && !candidate.isAI)
            {
                resolvedLocalPlayerId = candidate.playerIndex.ToString();
                break;
            }
        }
        if (string.IsNullOrEmpty(resolvedLocalPlayerId) && initiator != null)
            resolvedLocalPlayerId = initiator.playerIndex.ToString();

        var cfg = new Landlord.UI.Auction.AuctionSessionConfig
        {
            auctionId = $"auc_{Time.frameCount}",
            propertyId = $"{tile.name}_{property.propertyName}",
            propertyName = property.propertyName,
            tileInfo = tile,
            propertyPrice = property.price,
            propertyGroupColor = Color.white,
            propertyIcon = null,
            startBid = minBid,
            minIncrement = Mathf.Max(1, bidIncrement),
            historyBufferMax = 30,
            auctionTimeoutSeconds = disableAuctionTimeoutForTurnBased ? 0f : Mathf.Max(0f, auctionTimeout),
            localPlayerId = resolvedLocalPlayerId,
            // In 1v1 (Human vs AI), if one side places a valid bid and the other passes,
            // that bidder should win. Requiring two distinct bidders causes false "no winner" results.
            requireAtLeastTwoDistinctBiddersForWinner = false
        };

        // Put local human first so AI-started auctions don't auto-pass before human can act.
        if (!string.IsNullOrEmpty(resolvedLocalPlayerId))
        {
            Player local = FindAuctionPlayerById(resolvedLocalPlayerId);
            if (local != null)
            {
                cfg.bidders.Add(new Landlord.UI.Auction.AuctionBidderConfig
                {
                    playerId = local.playerIndex.ToString(),
                    playerName = local.playerName,
                    playerColor = local.playerColor,
                    wallet = local.Money,
                    isAI = local.isAI,
                    avatar = null
                });
            }
        }

        for (int i = 0; i < auctionActivePlayers.Count; i++)
        {
            Player p = auctionActivePlayers[i];
            if (p == null) continue;
            if (!string.IsNullOrEmpty(resolvedLocalPlayerId) && p.playerIndex.ToString() == resolvedLocalPlayerId) continue;

            cfg.bidders.Add(new Landlord.UI.Auction.AuctionBidderConfig
            {
                playerId = p.playerIndex.ToString(),
                playerName = p.playerName,
                playerColor = p.playerColor,
                wallet = p.Money,
                isAI = p.isAI,
                avatar = null
            });
        }

        auctionPanelUGUIV2.OpenAuction(cfg);
    }

    IEnumerator DriveUGUIV2AIBids()
    {
        while (auctionInProgress && usingNewUGUIAuctionSession && auctionPanelUGUIV2 != null)
        {
            Landlord.UI.Auction.AuctionState state = auctionPanelUGUIV2.CurrentState;
            if (state == null || state.phase != Landlord.UI.Auction.AuctionPhase.Bidding)
                yield break;

            int minNextBid = state.MinNextBid;
            bool actedThisTick = false;
            if (!string.IsNullOrEmpty(state.currentTurnPlayerId))
            {
                Landlord.UI.Auction.AuctionParticipantState p = null;
                for (int i = 0; i < state.participants.Count; i++)
                {
                    if (state.participants[i] != null && state.participants[i].playerId == state.currentTurnPlayerId)
                    {
                        p = state.participants[i];
                        break;
                    }
                }

                if (p != null && p.isAI && !p.isOut && !p.hasPassed)
                {
                    float thinkMin = Mathf.Max(0f, aiV2ThinkMin);
                    float thinkMax = Mathf.Max(thinkMin, aiV2ThinkMax);
                    float thinkDelay = Random.Range(thinkMin, thinkMax);
                    if (thinkDelay > 0f)
                        yield return new WaitForSeconds(thinkDelay);

                    state = auctionPanelUGUIV2 != null ? auctionPanelUGUIV2.CurrentState : null;
                    if (state == null || state.phase != Landlord.UI.Auction.AuctionPhase.Bidding)
                        yield break;
                    if (state.currentTurnPlayerId != p.playerId)
                        continue;
                    minNextBid = state.MinNextBid;
                    int latestWallet = p.wallet;
                    for (int j = 0; j < state.participants.Count; j++)
                    {
                        var sPart = state.participants[j];
                        if (sPart != null && sPart.playerId == p.playerId)
                        {
                            latestWallet = sPart.wallet;
                            break;
                        }
                    }

                    Player aiPlayer = FindAuctionPlayerById(p.playerId);
                    bool canAfford = latestWallet >= minNextBid;
                    if (!canAfford)
                    {
                        auctionPanelUGUIV2.TrySubmitPass(p.playerId, out _);
                        actedThisTick = true;
                    }
                    else
                    {
                        float bidScore;
                        float threshold;
                        bool willBid = ShouldAIBidV2(aiPlayer, minNextBid, out bidScore, out threshold);

                        if (willBid)
                        {
                            int bid = minNextBid;
                            auctionPanelUGUIV2.TrySubmitBid(p.playerId, bid, out _);
                            LogAIAuctionDecision($"V2_DECISION | player={p.playerName} nextBid={bid} canAfford={canAfford} score={bidScore:0.00} threshold={threshold:0.00} decision=BID");
                            actedThisTick = true;
                        }
                        else
                        {
                            auctionPanelUGUIV2.TrySubmitPass(p.playerId, out _);
                            LogAIAuctionDecision($"V2_DECISION | player={p.playerName} nextBid={minNextBid} canAfford={canAfford} score={bidScore:0.00} threshold={threshold:0.00} decision=PASS");
                            actedThisTick = true;
                        }
                    }
                }
            }

            float delay = (turnManager != null && turnManager.aiDecisionDelay > 0f) ? turnManager.aiDecisionDelay : aiBidDelay;
            if (!actedThisTick)
                delay = Mathf.Min(delay, 0.35f);
            yield return new WaitForSeconds(delay);
        }
    }

    bool ShouldAIBidV2(Player aiPlayer, int nextBid, out float bidScore, out float threshold)
    {
        bidScore = 0f;
        threshold = 0.62f;

        if (aiPlayer == null)
        {
            threshold = 0.72f;
            return false;
        }

        bidScore = GetAIBidScore(aiPlayer, nextBid);
        AICharacterProfileData profile = AICharacterBehaviorProfiles.Resolve(aiPlayer);
        AIProfilePhase phase = AICharacterBehaviorProfiles.GetPhase(profile, aiPlayer.turnsTaken);
        float risk01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.risk) : 0.5f;
        float auction01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.auction) : 0.5f;
        float monopoly01 = profile != null ? AICharacterBehaviorProfiles.Stat01(profile.monopoly) : 0.5f;

        threshold = Mathf.Lerp(0.58f, 0.28f, (risk01 + auction01) * 0.5f);
        threshold += Mathf.Lerp(0.08f, -0.06f, monopoly01);
        if (phase == AIProfilePhase.Early) threshold -= 0.04f;
        else if (phase == AIProfilePhase.Late) threshold += 0.05f;
        threshold -= aiRiskTolerance * 0.08f;
        threshold += Random.value * 0.14f;

        return bidScore >= threshold;
    }

    void OnAuctionCompletedFromUGUIV2(Landlord.UI.Auction.AuctionResult result)
    {
        Debug.Log($"AuctionSystem: OnAuctionCompletedFromUGUIV2 called. hasWinner={(result != null && result.hasWinner)} winner={(result != null ? result.winnerName : "null")} price={(result != null ? result.finalPrice : 0)} inProgress={auctionInProgress}");
        if (!usingNewUGUIAuctionSession) return;
        if (!auctionInProgress) return;

        if (result != null && result.hasWinner)
        {
            Player winner = FindAuctionPlayerById(result.winnerPlayerId);
            if (winner == null)
                winner = FindAuctionPlayerByName(result.winnerName);

            if (winner != null)
            {
                ResolveAuctionResult(winner, result.finalPrice);
                return;
            }
        }

        ResolveAuctionNoWinner();
    }

    Player FindAuctionPlayerById(string playerId)
    {
        if (string.IsNullOrEmpty(playerId) || auctionActivePlayers == null) return null;
        for (int i = 0; i < auctionActivePlayers.Count; i++)
        {
            Player p = auctionActivePlayers[i];
            if (p != null && p.playerIndex.ToString() == playerId)
                return p;
        }
        return null;
    }

    Player FindAuctionPlayerByName(string playerName)
    {
        if (string.IsNullOrEmpty(playerName) || auctionActivePlayers == null) return null;
        for (int i = 0; i < auctionActivePlayers.Count; i++)
        {
            Player p = auctionActivePlayers[i];
            if (p != null && p.playerName == playerName)
                return p;
        }
        return null;
    }

    MonoBehaviour ResolveActiveCoroutineHost()
    {
        if (isActiveAndEnabled) return this;
        if (turnManager != null && turnManager.isActiveAndEnabled) return turnManager;
        return null;
    }

void ApplyBidPenaltyForLosers()
    {
        if (turnManager == null) return;

        foreach (var kvp in playerBids)
        {
            Player bidder = kvp.Key;
            int bid = kvp.Value;
            if (bidder == null || bidder == highestBidder) continue;
            if (bid <= 0) continue;
            if (!bidder.HasFaultEffect(CharacterEffectKeys.BidPenaltyOnFailedAuction) || bidder.bidPenaltyUsed) continue;

            int penalty = 50000;
            bidder.bidPenaltyUsed = true;
            Debug.Log($"Bid Penalty: {bidder.playerName} loses ₦{penalty:N0} for a failed auction bid.");

            if (!bidder.TrySpend(penalty))
            {
                turnManager.HandlePlayerBankruptcy(bidder, null, penalty);
            }
        }
    }
}
