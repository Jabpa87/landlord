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
    
    [Tooltip("Max auction duration in seconds (force end if exceeded)")]
    public float auctionMaxDuration = 60f;
    
    [Tooltip("Delay before AI places bid or pass (seconds)")]
    public float aiBidDelay = 0.8f;
    
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
        
        InitializeAuctionUI();
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
    public void StartAuction(Property property, TileInfo tile)
    {
        StartAuction(property, tile, null);
    }

    public void StartAuction(Property property, TileInfo tile, Player initiator)
    {
        if (auctionInProgress)
        {
            Debug.LogWarning("AuctionSystem: Cannot start new auction - one is already in progress!");
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
        if (auctionInitiator != null && auctionInitiator.IsCharacter("Fresh Grad"))
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
        bool mustBid = ai.IsCharacter("Market Queen") && canAfford && nextBid <= currentAuctionProperty.price;
        bool willBid = canAfford && (mustBid || (nextBid <= currentAuctionProperty.price * 120 / 100 && Random.value > 0.4f));
        
        if (willBid)
        {
            PlaceBid(ai, nextBid);
            if (uiManager != null)
                uiManager.ShowResultNotification($"{ai.playerName} bid ₦{nextBid:N0} in auction.", 1.0f);
            AdvanceAuctionTurn();
            CheckAuctionCompletion();
        }
        else
        {
            if (playerBids.ContainsKey(ai) && playerBids[ai] == -1) { aiAuctionCoroutine = null; yield break; }
            playerBids[ai] = -1;
            if (auctionStatusText != null) auctionStatusText.text = $"{ai.playerName} passed";
            if (uiManager != null)
                uiManager.ShowResultNotification($"{ai.playerName} passed the auction.", 1.0f);
            AdvanceAuctionTurn();
            UpdateAuctionUI();
            CheckAuctionCompletion();
        }
        
        lastAIAuctionPlayer = null;
        aiAuctionCoroutine = null;
        if (auctionInProgress)
            TryStartAIAuctionTurn();
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
            if (currentAuctionPlayer != null && currentAuctionPlayer.IsCharacter("Market Queen"))
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

        if (passingPlayer != null && passingPlayer.IsCharacter("Market Queen"))
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
        if (!auctionInProgress || currentAuctionProperty == null) return;
        
        if (highestBidder != null && highestBid > 0)
        {
            // Winner pays the bid amount
            if (highestBidder.TrySpend(highestBid))
            {
                currentAuctionProperty.owner = highestBidder;
                Debug.Log($"=== AUCTION ENDED ===");
                Debug.Log($"Winner: {highestBidder.playerName}");
                Debug.Log($"Property: {currentAuctionProperty.propertyName}");
                Debug.Log($"Final Bid: ₦{highestBid:N0}");
                
                // Update ownership tag if present
                if (currentAuctionTile != null)
                {
                    PropertyOwnershipTag ownershipTag = currentAuctionTile.GetComponent<PropertyOwnershipTag>();
                    if (ownershipTag != null)
                    {
                        ownershipTag.UpdateOwnershipDisplay();
                    }
                }
                
                if (auctionStatusText != null)
                    auctionStatusText.text = $"Winner: {highestBidder.playerName} (₦{highestBid:N0})";
            }
            else
            {
                Debug.LogError($"Auction winner {highestBidder.playerName} cannot afford their bid!");
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
        
        if (turnManager != null)
            turnManager.OnAuctionEnded();
        
        StartCoroutine(HidePanelAfterDelay(2f));
    }
    
    void EndAuctionNoWinner()
    {
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
        
        if (turnManager != null)
            turnManager.OnAuctionEnded();
        
        StartCoroutine(HidePanelAfterDelay(2f));
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

    void ApplyBidPenaltyForLosers()
    {
        if (turnManager == null) return;

        foreach (var kvp in playerBids)
        {
            Player bidder = kvp.Key;
            int bid = kvp.Value;
            if (bidder == null || bidder == highestBidder) continue;
            if (bid <= 0) continue;
            if (!bidder.IsCharacter("Tech Protégé") || bidder.bidPenaltyUsed) continue;

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
