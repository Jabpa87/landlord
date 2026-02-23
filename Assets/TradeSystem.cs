using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

/// <summary>
/// Handles property and money trading between players.
/// </summary>
public class TradeSystem : MonoBehaviour
{
    [Header("References")]
    [Tooltip("Reference to TurnManager for accessing players")]
    public TurnManager turnManager;
    
    [Tooltip("Reference to UIDocumentManager for UI access")]
    public UIDocumentManager uiManager;

[Header("UGUI Trade Panel")]
public bool useUGUITradePanel = true;
public TradePanelUGUI tradePanelUGUI;
public TradePanelUITKController tradePanelUITK;
    
    [Header("Trade Settings")]
    [Tooltip("Minimum trade amount (to prevent accidental trades)")]
    public int minTradeAmount = 1000;
    
    // Current trade state
private Player initiatingPlayer;
private Player targetPlayer;
    private List<Property> player1OfferingProperties = new List<Property>();
    private List<Property> player2OfferingProperties = new List<Property>();
    private List<PerkCardInstance> player1OfferingCards = new List<PerkCardInstance>();
    private List<PerkCardInstance> player2OfferingCards = new List<PerkCardInstance>();
    private int player1OfferingMoney = 0;
    private int player2OfferingMoney = 0;
    private bool tradeInProgress = false;
    private List<Player> availableTradeTargets = new List<Player>();
private bool _tradeViewBoardMode = false;

public Player InitiatingPlayer => initiatingPlayer;
public Player TargetPlayer => targetPlayer;
public List<Property> Player1OfferingProperties => player1OfferingProperties;
public List<Property> Player2OfferingProperties => player2OfferingProperties;
public List<PerkCardInstance> Player1OfferingCards => player1OfferingCards;
public List<PerkCardInstance> Player2OfferingCards => player2OfferingCards;

public bool HasAnyOffer()
{
    return player1OfferingMoney > 0 || player2OfferingMoney > 0 ||
           player1OfferingProperties.Count > 0 || player2OfferingProperties.Count > 0 ||
           player1OfferingCards.Count > 0 || player2OfferingCards.Count > 0;
}

    private class PendingTrade
    {
        public Player initiator;
        public Player target;
        public List<Property> initiatorProps = new List<Property>();
        public List<Property> targetProps = new List<Property>();
        public List<PerkCardInstance> initiatorCards = new List<PerkCardInstance>();
        public List<PerkCardInstance> targetCards = new List<PerkCardInstance>();
        public int initiatorMoney = 0;
        public int targetMoney = 0;
        public int turnsRemaining = 1;
    }

    private readonly List<PendingTrade> pendingTrades = new List<PendingTrade>();

    /// <summary>True while a trade session is active. Used to prevent starting auction during trade.</summary>
    public bool IsTradeInProgress() => tradeInProgress;
    
    // UI Elements (accessed through UIDocumentManager)
    // No need to store references - use uiManager properties
    
    void Start()
    {
        if (turnManager == null)
            turnManager = FindFirstObjectByType<TurnManager>();
        
        if (uiManager == null)
            uiManager = FindFirstObjectByType<UIDocumentManager>();

        if (useUGUITradePanel && tradePanelUGUI == null)
            tradePanelUGUI = FindFirstObjectByType<TradePanelUGUI>();
        
        if (!useUGUITradePanel && tradePanelUITK == null)
            tradePanelUITK = FindFirstObjectByType<TradePanelUITKController>();
        
        if (tradePanelUITK != null && uiManager != null)
            tradePanelUITK.Bind(uiManager, this);
        
        InitializeTradeUI();
    }
    
    void InitializeTradeUI()
    {
        // Connect button events if UI is ready
        if (uiManager != null && uiManager.TradeConfirmButton != null)
        {
            uiManager.TradeConfirmButton.clicked -= ConfirmTrade;
            uiManager.TradeConfirmButton.clicked += ConfirmTrade;
        }
        
        if (uiManager != null && uiManager.TradeCancelButton != null)
        {
            uiManager.TradeCancelButton.clicked -= CancelTrade;
            uiManager.TradeCancelButton.clicked += CancelTrade;
        }
        
        if (uiManager != null && uiManager.TradeAcceptButton != null)
        {
            uiManager.TradeAcceptButton.clicked -= AcceptTrade;
            uiManager.TradeAcceptButton.clicked += AcceptTrade;
        }
        
        if (uiManager != null && uiManager.TradeRejectButton != null)
        {
            uiManager.TradeRejectButton.clicked -= RejectTrade;
            uiManager.TradeRejectButton.clicked += RejectTrade;
        }
        
        // Trade buttons
        if (uiManager != null && uiManager.TradeOfferButton != null)
        {
            uiManager.TradeOfferButton.clicked -= ConfirmTrade;
            uiManager.TradeOfferButton.clicked += ConfirmTrade;
        }
        
        if (uiManager != null && uiManager.TradeShowBoardButton != null)
        {
            uiManager.TradeShowBoardButton.clicked -= ResetTradeOffers;
            uiManager.TradeShowBoardButton.clicked += ResetTradeOffers;
        }
        
        // Target player selection is done via TradeTargetButtons (name buttons) in PopulateTradeTargets()

        // Money fields are handled by TradePanelUITKController for UITK panel.
    }
    
    /// <summary>
    /// Start a trade between two players.
    /// </summary>
    public void StartTrade(Player initiator, Player target)
    {
        if (tradeInProgress)
        {
            Debug.LogWarning("TradeSystem: Trade already in progress!");
            return;
        }
        if (turnManager != null && turnManager.auctionSystem != null && turnManager.auctionSystem.IsAuctionInProgress())
        {
            Debug.LogWarning("TradeSystem: Cannot start trade while an auction is in progress.");
            return;
        }
        if (initiator == null)
        {
            Debug.LogWarning("TradeSystem: Cannot start trade - invalid initiator!");
            return;
        }
        
        initiatingPlayer = initiator;
        targetPlayer = target;
        player1OfferingProperties.Clear();
        player2OfferingProperties.Clear();
        player1OfferingCards.Clear();
        player2OfferingCards.Clear();
        player1OfferingMoney = 0;
        player2OfferingMoney = 0;
        tradeInProgress = true;
        if (turnManager != null)
            turnManager.TransitionState(GameStateMachine.State.InTrade);
        
        Debug.Log($"=== TRADE STARTED ===");
        Debug.Log($"Initiator: {initiator.playerName}");
        if (target != null)
        {
            Debug.Log($"Target: {target.playerName}");
        }
        
        // Show trade UI
        ShowTradeUI();
        PopulateTradeTargets();
    }

    /// <summary>
    /// Start a trade with player selection in the UI.
    /// </summary>
    public void StartTrade(Player initiator)
    {
        StartTrade(initiator, null);
    }

    /// <summary>
    /// AI initiates a trade with the human. AI builds an offer; human sees panel with Accept/Reject only.
    /// </summary>
    public void StartTradeByAI(Player aiInitiator, Player humanTarget)
    {
        if (tradeInProgress) return;
        if (turnManager != null && turnManager.auctionSystem != null && turnManager.auctionSystem.IsAuctionInProgress())
            return; // Do not open trade panel while auction is active
        if (aiInitiator == null || !aiInitiator.isAI || humanTarget == null || humanTarget.isAI)
        {
            Debug.LogWarning("TradeSystem: StartTradeByAI requires AI initiator and human target.");
            return;
        }
        initiatingPlayer = aiInitiator;
        targetPlayer = humanTarget;
        player1OfferingProperties.Clear();
        player2OfferingProperties.Clear();
        player1OfferingCards.Clear();
        player2OfferingCards.Clear();
        player1OfferingMoney = 0;
        player2OfferingMoney = 0;
        List<Property> aiTradeable = GetTradeablePropertiesPublic(aiInitiator);
        if (aiTradeable.Count == 0) return;
        Property prop = aiTradeable[Random.Range(0, aiTradeable.Count)];
        player1OfferingProperties.Add(prop);
        player2OfferingMoney = Mathf.Max(minTradeAmount, prop.price * 80 / 100);
        tradeInProgress = true;
        if (turnManager != null)
            turnManager.TransitionState(GameStateMachine.State.InTrade);
        ShowTradeUI();
        ShowTradeForAcceptance();
    }

    /// <summary>
    /// Populate trade target row with one button per available player (by name). If only one target, auto-select.
    /// </summary>
    void PopulateTradeTargets()
    {
        availableTradeTargets.Clear();
        if (turnManager == null || turnManager.players == null) return;

        foreach (Player p in turnManager.players)
        {
            if (p != null && p != initiatingPlayer && !p.IsEliminated)
            {
                availableTradeTargets.Add(p);
            }
        }

        var buttonsContainer = uiManager != null ? uiManager.TradeTargetButtons : null;
        if (buttonsContainer == null)
        {
            if (useUGUITradePanel)
            {
                if (targetPlayer == null && availableTradeTargets.Count > 0)
                    targetPlayer = availableTradeTargets[0];
                UpdateTradeUI();
            }
            return;
        }

        buttonsContainer.Clear();

        if (useUGUITradePanel && targetPlayer == null && availableTradeTargets.Count > 0)
            targetPlayer = availableTradeTargets[0];

        // If only one target, auto-select and show single button
        if (availableTradeTargets.Count == 1)
        {
            targetPlayer = availableTradeTargets[0];
            var btn = new Button(() => {}) { text = targetPlayer.playerName };
            btn.AddToClassList("monopoly-btn");
            btn.AddToClassList("trade-target-btn");
            btn.AddToClassList("selected");
            buttonsContainer.Add(btn);
            UpdateTradeUI();
            return;
        }

        foreach (Player p in availableTradeTargets)
        {
            var btn = new Button(() => SelectTradeTarget(p.playerName)) { text = p.playerName };
            btn.AddToClassList("monopoly-btn");
            btn.AddToClassList("trade-target-btn");
            if (targetPlayer == p)
                btn.AddToClassList("selected");
            buttonsContainer.Add(btn);
        }

        if (targetPlayer != null && !availableTradeTargets.Contains(targetPlayer))
            targetPlayer = null;
        UpdateTradeUI();
    }

    /// <summary>
    /// Selects the trade target based on dropdown choice.
    /// </summary>
    void SelectTradeTarget(string playerName)
    {
        if (string.IsNullOrEmpty(playerName) || playerName == "Select Player")
        {
            targetPlayer = null;
            UpdateTradeUI();
            return;
        }

        foreach (Player p in availableTradeTargets)
        {
            if (p != null && p.playerName == playerName)
            {
                targetPlayer = p;
                break;
            }
        }

        UpdateTradeUI();
    }
    
    /// <summary>
    /// Add a property to the trade offer from the initiating player.
    /// </summary>
    public void AddPropertyToOffer(Property property, bool fromInitiator)
    {
        if (!tradeInProgress) return;
        if (property == null) return;
        
        Player owner = property.owner;
        if (owner == null) return;
        
        // Check if property belongs to the correct player
        if (fromInitiator && owner != initiatingPlayer)
        {
            Debug.LogWarning($"TradeSystem: {initiatingPlayer.playerName} doesn't own {property.propertyName}!");
            return;
        }
        
        if (!fromInitiator && owner != targetPlayer)
        {
            Debug.LogWarning($"TradeSystem: {targetPlayer.playerName} doesn't own {property.propertyName}!");
            return;
        }
        
        // Check if property is mortgaged (only Market Queen can trade mortgaged properties)
        if (property.isMortgaged && !owner.HasCharacterEffect(CharacterEffectKeys.MarketTradeMortgagedAllowed))
        {
            Debug.LogWarning($"TradeSystem: Cannot trade mortgaged property {property.propertyName}!");
            return;
        }
        
        // Check if property has buildings (can't trade properties with houses/hotels)
        if (property.houses > 0 || property.hasHotel)
        {
            Debug.LogWarning($"TradeSystem: Cannot trade property {property.propertyName} with buildings! Sell buildings first.");
            return;
        }
        
        if (fromInitiator)
        {
            if (!player1OfferingProperties.Contains(property))
            {
                player1OfferingProperties.Add(property);
                Debug.Log($"Trade: {initiatingPlayer.playerName} offering {property.propertyName}");
            }
        }
        else
        {
            if (!player2OfferingProperties.Contains(property))
            {
                player2OfferingProperties.Add(property);
                Debug.Log($"Trade: {targetPlayer.playerName} offering {property.propertyName}");
            }
        }
        
        UpdateTradeUI();
    }
    
    /// <summary>
    /// Remove a property from the trade offer.
    /// </summary>
    public void RemovePropertyFromOffer(Property property, bool fromInitiator)
    {
        if (!tradeInProgress) return;
        
        if (fromInitiator)
        {
            player1OfferingProperties.Remove(property);
        }
        else
        {
            player2OfferingProperties.Remove(property);
        }
        
        UpdateTradeUI();
    }
    
    /// <summary>
    /// Set the money amount being offered.
    /// </summary>
    public void SetMoneyOffer(int amount, bool fromInitiator)
    {
        if (!tradeInProgress) return;
        
        Player offeringPlayer = fromInitiator ? initiatingPlayer : targetPlayer;
        
        if (amount < 0)
        {
            Debug.LogWarning("TradeSystem: Cannot offer negative money!");
            return;
        }
        
        if (amount > offeringPlayer.Money)
        {
            Debug.LogWarning($"TradeSystem: {offeringPlayer.playerName} doesn't have ₦{amount:N0}!");
            return;
        }
        
        if (fromInitiator)
        {
            player1OfferingMoney = amount;
        }
        else
        {
            player2OfferingMoney = amount;
        }
        
        Debug.Log($"Trade: {offeringPlayer.playerName} offering ₦{amount:N0}");
        UpdateTradeUI();
    }
    
    /// <summary>
    /// Confirm the trade (initiating player confirms their offer).
    /// </summary>
    public void ConfirmTrade()
    {
        if (!tradeInProgress) return;
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        
        // Validate trade
        if (player1OfferingProperties.Count == 0 && player2OfferingProperties.Count == 0 && 
            player1OfferingMoney == 0 && player2OfferingMoney == 0 &&
            player1OfferingCards.Count == 0 && player2OfferingCards.Count == 0)
        {
            Debug.LogWarning("TradeSystem: Cannot confirm empty trade!");
        if (uiManager != null && uiManager.TradeStatusText != null)
            uiManager.TradeStatusText.text = "Trade must include at least one item!";
            return;
        }
        
        // Check if players can afford their offers
        if (player1OfferingMoney > initiatingPlayer.Money)
        {
            Debug.LogWarning($"TradeSystem: {initiatingPlayer.playerName} cannot afford ₦{player1OfferingMoney:N0}!");
            return;
        }
        
        if (player2OfferingMoney > targetPlayer.Money)
        {
            Debug.LogWarning($"TradeSystem: {targetPlayer.playerName} cannot afford ₦{player2OfferingMoney:N0}!");
            return;
        }
        
        Debug.Log($"Trade confirmed by {initiatingPlayer.playerName}. Waiting for {targetPlayer.playerName} to accept...");
        
        if (targetPlayer != null && targetPlayer.isAI)
        {
            StartCoroutine(ResolveAITradeResponseCoroutine());
            return;
        }
        ShowTradeForAcceptance();
    }
    
    /// <summary>
    /// AI (target) evaluates the offer and returns true to accept, false to reject.
    /// </summary>
    bool ResolveAITradeResponse()
    {
        if (targetPlayer == null || !targetPlayer.isAI) return false;
        int valueReceiving = player1OfferingMoney;
        foreach (Property prop in player1OfferingProperties)
            valueReceiving += prop != null ? prop.price : 0;
        int valueGiving = player2OfferingMoney;
        foreach (Property prop in player2OfferingProperties)
            valueGiving += prop != null ? prop.price : 0;
        return valueReceiving >= valueGiving * 85 / 100;
    }
    
    IEnumerator ResolveAITradeResponseCoroutine()
    {
        yield return new WaitForSeconds(1f);
        if (!tradeInProgress || targetPlayer == null) { EndTrade(); yield break; }
        bool accept = ResolveAITradeResponse();
        if (uiManager != null)
            uiManager.ShowResultNotification(accept ? $"{targetPlayer.playerName} accepted the trade." : $"{targetPlayer.playerName} rejected the trade.", 1.2f);
        if (uiManager != null && uiManager.TradeStatusText != null)
            uiManager.TradeStatusText.text = accept ? $"{targetPlayer.playerName} accepted the trade." : $"{targetPlayer.playerName} rejected the trade.";
        yield return new WaitForSeconds(1.5f);
        if (accept)
            ExecuteTrade();
        EndTrade();
    }
    
    /// <summary>
    /// Accept the trade (target player accepts).
    /// </summary>
    public void AcceptTrade()
    {
        if (!tradeInProgress) return;
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        
        Debug.Log($"=== TRADE ACCEPTED ===");
        Debug.Log($"{initiatingPlayer.playerName} receives:");
        if (player2OfferingProperties.Count > 0)
        {
            foreach (Property prop in player2OfferingProperties)
            {
                Debug.Log($"  - {prop.propertyName}");
            }
        }
        if (player2OfferingCards.Count > 0)
        {
            foreach (var card in player2OfferingCards)
            {
                Debug.Log($"  - {card.name}");
            }
        }
        if (player2OfferingMoney > 0)
        {
            Debug.Log($"  - ₦{player2OfferingMoney:N0}");
        }
        
        Debug.Log($"{targetPlayer.playerName} receives:");
        if (player1OfferingProperties.Count > 0)
        {
            foreach (Property prop in player1OfferingProperties)
            {
                Debug.Log($"  - {prop.propertyName}");
            }
        }
        if (player1OfferingCards.Count > 0)
        {
            foreach (var card in player1OfferingCards)
            {
                Debug.Log($"  - {card.name}");
            }
        }
        if (player1OfferingMoney > 0)
        {
            Debug.Log($"  - ₦{player1OfferingMoney:N0}");
        }
        
        if (ShouldDelayTrade())
        {
            QueuePendingTrade();
        }
        else
        {
            // Execute the trade
            ExecuteTrade();
        }
        
        // Clean up
        EndTrade();
    }
    
    /// <summary>
    /// Reject the trade.
    /// </summary>
    public void RejectTrade()
    {
        if (!tradeInProgress) return;
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        
        Debug.Log($"Trade rejected by {targetPlayer.playerName}");
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayTradeFailed();
        EndTrade();
    }
    
    /// <summary>
    /// Cancel the trade (initiating player cancels).
    /// </summary>
    public void CancelTrade()
    {
        if (!tradeInProgress) return;
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        
        Debug.Log($"Trade cancelled by {initiatingPlayer.playerName}");
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayTradeFailed();
        EndTrade();
    }
    
    /// <summary>
    /// Execute the trade - transfer properties and money.
    /// </summary>
    void ExecuteTrade()
    {
        ExecuteTradeInternal(
            initiatingPlayer,
            targetPlayer,
            player1OfferingProperties,
            player2OfferingProperties,
            player1OfferingCards,
            player2OfferingCards,
            player1OfferingMoney,
            player2OfferingMoney
        );
    }
    
    /// <summary>
    /// Updates ownership tags for properties involved in the trade.
    /// </summary>
    void UpdateOwnershipTagsForTrade()
    {
        UpdateOwnershipTagsForTrade(player1OfferingProperties, player2OfferingProperties);
    }

    void UpdateOwnershipTagsForTrade(List<Property> p1Props, List<Property> p2Props)
    {
        foreach (Property prop in p1Props)
        {
            UpdatePropertyTag(prop);
        }
        foreach (Property prop in p2Props)
        {
            UpdatePropertyTag(prop);
        }
    }
    
    /// <summary>
    /// Updates the ownership tag for a specific property.
    /// </summary>
    void UpdatePropertyTag(Property prop)
    {
        if (prop == null) return;
        
        // Find the tile that has this property
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.property == prop)
            {
                PropertyOwnershipTag tag = tile.GetComponent<PropertyOwnershipTag>();
                if (tag != null)
                {
                    tag.UpdateOwnershipDisplay();
                }
                break;
            }
        }
    }
    
    /// <summary>
    /// End the trade and clean up.
    /// </summary>
    void EndTrade()
    {
        tradeInProgress = false;
        initiatingPlayer = null;
        targetPlayer = null;
        player1OfferingProperties.Clear();
        player2OfferingProperties.Clear();
        player1OfferingCards.Clear();
        player2OfferingCards.Clear();
        player1OfferingMoney = 0;
        player2OfferingMoney = 0;
        
        HideTradeUI();
        if (turnManager != null)
            turnManager.TransitionState(GameStateMachine.State.ResolvingTile);
    }
    
    void ShowTradeUI()
    {
        if (useUGUITradePanel && tradePanelUGUI != null)
        {
            tradePanelUGUI.Bind(this);
            tradePanelUGUI.Show();
            UpdateTradeUI();
            return;
        }
        if (uiManager == null) return;
        
        _tradeViewBoardMode = false;
        if (uiManager.TradePanel != null)
            uiManager.TradePanel.style.opacity = 1f;
        if (uiManager.TradeShowBoardButton != null)
            uiManager.TradeShowBoardButton.text = "VIEW BOARD";
        
        uiManager.ShowTradePanel();
        UpdateTradeUI();
        
        // Show offer buttons, hide accept/reject buttons initially
        if (uiManager.TradeOfferButton != null)
            uiManager.TradeOfferButton.style.display = DisplayStyle.Flex;
        
        if (uiManager.TradeShowBoardButton != null)
            uiManager.TradeShowBoardButton.style.display = DisplayStyle.Flex;
        
        if (uiManager.TradeCancelButton != null)
            uiManager.TradeCancelButton.style.display = DisplayStyle.Flex;
        
        if (uiManager.TradeResponseButtons != null)
            uiManager.TradeResponseButtons.style.display = DisplayStyle.None;
    }
    
    void HideTradeUI()
    {
        if (useUGUITradePanel && tradePanelUGUI != null)
        {
            tradePanelUGUI.Hide();
            return;
        }
        if (uiManager == null) return;
        uiManager.HideTradePanel();
    }
    
    void UpdateTradeUI()
    {
        if (!tradeInProgress) return;

        if (useUGUITradePanel && tradePanelUGUI != null)
        {
            bool hasTargetUGUI = targetPlayer != null;
            bool hasOfferUGUI = player1OfferingMoney > 0 || player1OfferingProperties.Count > 0 || player1OfferingCards.Count > 0;
            tradePanelUGUI.Refresh(initiatingPlayer, targetPlayer, hasTargetUGUI, hasOfferUGUI, player1OfferingMoney, player2OfferingMoney);
            return;
        }

        if (uiManager == null) return;

        if (tradePanelUITK != null)
        {
            tradePanelUITK.Refresh();
            return;
        }

        // Sync selected state on trade target name buttons
        if (uiManager.TradeTargetButtons != null)
        {
            foreach (var child in uiManager.TradeTargetButtons.Children())
            {
                if (child is Button btn)
                {
                    if (targetPlayer != null && btn.text == targetPlayer.playerName)
                        btn.AddToClassList("selected");
                    else
                        btn.RemoveFromClassList("selected");
                }
            }
        }
        
        // Update header: "[Player Name] OFFERS"
        if (uiManager.TradeTitleText != null && initiatingPlayer != null)
        {
            uiManager.TradeTitleText.text = $"{initiatingPlayer.playerName} OFFERS";
        }

        bool hasTarget = targetPlayer != null;
        bool hasOffer = player1OfferingMoney > 0 || player1OfferingProperties.Count > 0 || player1OfferingCards.Count > 0;

        // UITK panel handles paged lists + money fields.

        // Status text
        if (uiManager.TradeStatusText != null)
        {
            if (!hasTarget)
            {
                uiManager.TradeStatusText.text = "Select a player to trade with.";
                uiManager.TradeStatusText.style.display = DisplayStyle.Flex;
            }
            else if (!hasOffer)
            {
                uiManager.TradeStatusText.text = "You must offer something in exchange.";
                uiManager.TradeStatusText.style.display = DisplayStyle.Flex;
            }
            else
            {
                uiManager.TradeStatusText.text = $"{initiatingPlayer.playerName} is offering a trade to {targetPlayer.playerName}";
                uiManager.TradeStatusText.style.display = DisplayStyle.Flex;
            }
        }

        // Buttons: Offer only when target selected and initiator offers at least one asset
        if (uiManager.TradeOfferButton != null)
            uiManager.TradeOfferButton.SetEnabled(hasTarget && hasOffer);

        // UITK panel handles paged lists + cards.
    }
    
    
    /// <summary>
    /// Gets header color for property based on tier or group.
    /// </summary>
    Color GetPropertyHeaderColor(Property prop)
    {
        if (prop == null) return new Color(0.5f, 0.5f, 0.8f);

        string groupId = NormalizeGroupId(prop.groupId);
        switch (groupId)
        {
            case "G1":
            case "BROWN":
                return new Color32(112, 69, 44, 255);
            case "G2":
            case "LIGHTBLUE":
                return new Color32(149, 207, 226, 255);
            case "G3":
            case "PINK":
                return new Color32(218, 135, 196, 255);
            case "G4":
            case "ORANGE":
                return new Color32(244, 146, 64, 255);
            case "G5":
            case "RED":
                return new Color32(215, 62, 51, 255);
            case "G6":
            case "YELLOW":
                return new Color32(245, 214, 74, 255);
            case "G7":
            case "GREEN":
                return new Color32(74, 157, 95, 255);
            case "G8":
            case "BLUE":
            case "DARKBLUE":
                return new Color32(60, 90, 186, 255);
        }

        // Fallback to tier label when groupId is unknown
        if (!string.IsNullOrEmpty(prop.tierLabel))
        {
            switch (prop.tierLabel.ToLower())
            {
                case "satellite":
                    return new Color32(215, 62, 51, 255); // Red
                case "mid":
                    return new Color32(245, 214, 74, 255); // Yellow
                case "prime":
                    return new Color32(74, 157, 95, 255); // Green
                default:
                    return new Color32(60, 90, 186, 255); // Blue
            }
        }

        return new Color(0.5f, 0.5f, 0.8f);
    }

    static string NormalizeGroupId(string groupId)
    {
        if (string.IsNullOrWhiteSpace(groupId)) return "";
        return groupId.Trim().ToUpperInvariant().Replace(" ", "").Replace("_", "").Replace("-", "");
    }
    
    /// <summary>
    /// Gets property count for a player.
    /// </summary>
    int GetPlayerPropertyCount(Player player)
    {
        if (player == null) return 0;
        
        int count = 0;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == player)
            {
                count++;
            }
        }
        return count;
    }
    
    /// <summary>
    /// Calculates total trade value.
    /// </summary>
    int CalculateTradeValue()
    {
        int total = player1OfferingMoney;
        foreach (Property prop in player1OfferingProperties)
        {
            total += prop.price;
        }
        return total;
    }
    
    /// <summary>
    /// Handles Send Cash button click.
    /// </summary>
    void OnSendCashClicked()
    {
        // TODO: Open input dialog for cash amount
        // For now, increment by 10,000
        int newAmount = player1OfferingMoney + 10000;
        if (newAmount <= initiatingPlayer.Money)
        {
            SetMoneyOffer(newAmount, true);
        }
    }
    
    /// <summary>
    /// Handles Ask Cash button click.
    /// </summary>
    void OnAskCashClicked()
    {
        // TODO: Open input dialog for cash amount
        // For now, increment by 10,000
        int newAmount = player2OfferingMoney + 10000;
        if (newAmount <= targetPlayer.Money)
        {
            SetMoneyOffer(newAmount, false);
        }
    }
    
    /// <summary>
    /// Handles Show Board button click.
    /// </summary>
    void OnShowBoardClicked()
    {
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        _tradeViewBoardMode = !_tradeViewBoardMode;

        if (useUGUITradePanel && tradePanelUGUI != null)
        {
            tradePanelUGUI.ToggleBoardView(_tradeViewBoardMode);
            return;
        }

        if (uiManager == null) return;
        if (uiManager.TradePanel != null)
            uiManager.TradePanel.style.opacity = _tradeViewBoardMode ? 0.7f : 1f;
        if (uiManager.TradeShowBoardButton != null)
            uiManager.TradeShowBoardButton.text = _tradeViewBoardMode ? "BACK TO TRADE" : "VIEW BOARD";
    }

    public void OnShowBoardClickedPublic()
    {
        OnShowBoardClicked();
    }

    public void CycleTradeTargetPublic()
    {
        CycleTradeTarget();
    }

    void CycleTradeTarget()
    {
        if (availableTradeTargets == null || availableTradeTargets.Count == 0) return;
        if (targetPlayer == null)
        {
            targetPlayer = availableTradeTargets[0];
        }
        else
        {
            int idx = availableTradeTargets.IndexOf(targetPlayer);
            idx = (idx + 1) % availableTradeTargets.Count;
            targetPlayer = availableTradeTargets[idx];
        }
        UpdateTradeUI();
    }
    
    void UpdatePropertyList(ScrollView list, List<Property> offeringProperties, Player player, bool isInitiator)
    {
        if (list == null || player == null) return;
        
        // Clear existing items
        list.Clear();
        
        // Get all properties owned by this player
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        List<Property> availableProperties = new List<Property>();
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == player &&
                (!tile.property.isMortgaged || player.HasCharacterEffect(CharacterEffectKeys.MarketTradeMortgagedAllowed)) &&
                tile.property.houses == 0 &&
                !tile.property.hasHotel)
            {
                availableProperties.Add(tile.property);
            }
        }
        
        // Create buttons for each property
        foreach (Property prop in availableProperties)
        {
            Button propButton = new Button();
            bool isOffered = offeringProperties.Contains(prop);
            string checkMark = isOffered ? " ✓" : "";
            propButton.text = $"{prop.propertyName}{checkMark}\n₦{prop.price:N0}";
            propButton.style.backgroundColor = isOffered ? new Color(0.3f, 0.7f, 0.3f) : new Color(0.95f, 0.95f, 0.95f);
            propButton.style.color = Color.black;
            propButton.style.unityFontStyleAndWeight = FontStyle.Bold;
            propButton.style.paddingTop = 6;
            propButton.style.paddingBottom = 6;
            propButton.style.paddingLeft = 8;
            propButton.style.paddingRight = 8;
            propButton.style.marginBottom = 6;
            propButton.style.borderTopWidth = 1;
            propButton.style.borderBottomWidth = 1;
            propButton.style.borderLeftWidth = 1;
            propButton.style.borderRightWidth = 1;
            Color borderColor = new Color(0.2f, 0.2f, 0.2f, 1f);
            propButton.style.borderTopColor = borderColor;
            propButton.style.borderBottomColor = borderColor;
            propButton.style.borderLeftColor = borderColor;
            propButton.style.borderRightColor = borderColor;
            
            propButton.clicked += () =>
            {
                if (isOffered)
                {
                    RemovePropertyFromOffer(prop, isInitiator);
                }
                else
                {
                    AddPropertyToOffer(prop, isInitiator);
                }
                UpdateTradeUI();
            };
            
            list.Add(propButton);
        }
    }

    void UpdateCardList(ScrollView list, List<PerkCardInstance> offeringCards, Player player, bool isInitiator)
    {
        if (list == null || player == null) return;
        list.Clear();

        if (player.perkCards == null || player.perkCards.Count == 0)
            return;

        foreach (var card in player.perkCards)
        {
            if (card == null) continue;
            bool isOffered = offeringCards.Contains(card);
            string checkMark = isOffered ? " ✓" : "";
            Button cardButton = new Button();
            string usesText = card.maxUses > 1 ? $" ({card.usesRemaining}/{card.maxUses})" : "";
            cardButton.text = $"{card.name}{usesText}{checkMark}\n{card.description}";
            cardButton.style.backgroundColor = isOffered ? new Color(0.2f, 0.6f, 0.7f) : new Color(0.95f, 0.95f, 0.95f);
            cardButton.style.color = Color.black;
            cardButton.style.unityFontStyleAndWeight = FontStyle.Bold;
            cardButton.style.paddingTop = 6;
            cardButton.style.paddingBottom = 6;
            cardButton.style.paddingLeft = 8;
            cardButton.style.paddingRight = 8;
            cardButton.style.marginBottom = 6;
            cardButton.style.borderTopWidth = 1;
            cardButton.style.borderBottomWidth = 1;
            cardButton.style.borderLeftWidth = 1;
            cardButton.style.borderRightWidth = 1;
            Color borderColor = new Color(0.2f, 0.2f, 0.2f, 1f);
            cardButton.style.borderTopColor = borderColor;
            cardButton.style.borderBottomColor = borderColor;
            cardButton.style.borderLeftColor = borderColor;
            cardButton.style.borderRightColor = borderColor;

            cardButton.clicked += () =>
            {
                if (isOffered)
                {
                    offeringCards.Remove(card);
                }
                else
                {
                    offeringCards.Add(card);
                }
                UpdateTradeUI();
            };

            list.Add(cardButton);
        }
    }
    
    void ShowTradeForAcceptance()
    {
        if (useUGUITradePanel && tradePanelUGUI != null)
        {
            tradePanelUGUI.ShowForAcceptance(targetPlayer);
            return;
        }
        if (uiManager == null) return;
        
        if (uiManager.TradeOfferButton != null)
            uiManager.TradeOfferButton.style.display = DisplayStyle.None;
        
        if (uiManager.TradeShowBoardButton != null)
            uiManager.TradeShowBoardButton.style.display = DisplayStyle.None;
        
        if (uiManager.TradeCancelButton != null)
            uiManager.TradeCancelButton.style.display = DisplayStyle.None;
        
        if (uiManager.TradeResponseButtons != null)
            uiManager.TradeResponseButtons.style.display = DisplayStyle.Flex;
        
        if (uiManager.TradeAcceptButton != null)
            uiManager.TradeAcceptButton.style.display = DisplayStyle.Flex;
        
        if (uiManager.TradeRejectButton != null)
            uiManager.TradeRejectButton.style.display = DisplayStyle.Flex;
        
        // Update status
        if (uiManager.TradeStatusText != null)
        {
            uiManager.TradeStatusText.text = $"{targetPlayer.playerName}, do you accept this trade?";
            uiManager.TradeStatusText.style.display = DisplayStyle.Flex;
        }
        
        UpdateTradeUI();
    }
    
    public bool IsPropertyOffered(Property prop, bool isInitiator)
    {
        if (prop == null) return false;
        return isInitiator ? player1OfferingProperties.Contains(prop) : player2OfferingProperties.Contains(prop);
    }

    public void TogglePropertyOffer(Property prop, bool isInitiator)
    {
        if (prop == null) return;
        if (isInitiator)
        {
            if (player1OfferingProperties.Contains(prop)) RemovePropertyFromOffer(prop, true);
            else AddPropertyToOffer(prop, true);
        }
        else
        {
            if (player2OfferingProperties.Contains(prop)) RemovePropertyFromOffer(prop, false);
            else AddPropertyToOffer(prop, false);
        }
        UpdateTradeUI();
    }

    public void ToggleCardOffer(PerkCardInstance card, bool isInitiator)
    {
        if (card == null) return;
        if (isInitiator)
        {
            if (player1OfferingCards.Contains(card)) player1OfferingCards.Remove(card);
            else player1OfferingCards.Add(card);
        }
        else
        {
            if (player2OfferingCards.Contains(card)) player2OfferingCards.Remove(card);
            else player2OfferingCards.Add(card);
        }
        UpdateTradeUI();
    }

    public void ResetTradeOffers()
    {
        player1OfferingProperties.Clear();
        player2OfferingProperties.Clear();
        player1OfferingCards.Clear();
        player2OfferingCards.Clear();
        player1OfferingMoney = 0;
        player2OfferingMoney = 0;
        UpdateTradeUI();
    }

    public List<Property> GetTradeablePropertiesPublic(Player player)
    {
        var results = new List<Property>();
        if (player == null) return results;

        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property &&
                tile.property != null &&
                tile.property.owner == player &&
                (!tile.property.isMortgaged || player.HasCharacterEffect(CharacterEffectKeys.MarketTradeMortgagedAllowed)) &&
                tile.property.houses == 0 &&
                !tile.property.hasHotel)
            {
                results.Add(tile.property);
            }
        }
        return results;
    }

    public Color GetPropertyGroupColorPublic(Property prop)
    {
        return GetPropertyHeaderColor(prop);
    }

    public void SetMoneyOfferPublic(int amount, bool isInitiator)
    {
        SetMoneyOffer(amount, isInitiator);
    }

    public int GetOfferMoney(bool isInitiator)
    {
        return isInitiator ? player1OfferingMoney : player2OfferingMoney;
    }

    public TileInfo FindTileForProperty(Property prop)
    {
        if (prop == null) return null;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo t in allTiles)
        {
            if (t != null && t.property == prop) return t;
        }
        return null;
    }

    public void ProcessPendingTrades()
    {
        if (pendingTrades.Count == 0) return;

        for (int i = pendingTrades.Count - 1; i >= 0; i--)
        {
            PendingTrade trade = pendingTrades[i];
            if (trade == null)
            {
                pendingTrades.RemoveAt(i);
                continue;
            }

            trade.turnsRemaining--;
            if (trade.turnsRemaining > 0)
                continue;

            if (trade.initiator == null || trade.target == null || trade.initiator.IsEliminated || trade.target.IsEliminated)
            {
                pendingTrades.RemoveAt(i);
                continue;
            }

            ExecuteTradeInternal(
                trade.initiator,
                trade.target,
                trade.initiatorProps,
                trade.targetProps,
                trade.initiatorCards,
                trade.targetCards,
                trade.initiatorMoney,
                trade.targetMoney
            );

            pendingTrades.RemoveAt(i);
        }
    }

    void ExecuteTradeInternal(
        Player initiator,
        Player target,
        List<Property> initiatorProps,
        List<Property> targetProps,
        List<PerkCardInstance> initiatorCards,
        List<PerkCardInstance> targetCards,
        int initiatorMoney,
        int targetMoney)
    {
        if (initiator == null || target == null) return;

        foreach (Property prop in initiatorProps)
        {
            prop.owner = target;
            Debug.Log($"  → {prop.propertyName} transferred from {initiator.playerName} to {target.playerName}");
        }
        
        foreach (Property prop in targetProps)
        {
            prop.owner = initiator;
            Debug.Log($"  → {prop.propertyName} transferred from {target.playerName} to {initiator.playerName}");
        }

        foreach (var card in initiatorCards)
        {
            initiator.perkCards.Remove(card);
            target.perkCards.Add(card);
            Debug.Log($"  → Card '{card.name}' transferred from {initiator.playerName} to {target.playerName}");
        }

        foreach (var card in targetCards)
        {
            target.perkCards.Remove(card);
            initiator.perkCards.Add(card);
            Debug.Log($"  → Card '{card.name}' transferred from {target.playerName} to {initiator.playerName}");
        }
        
        if (initiatorMoney > 0)
        {
            if (initiator.TrySpend(initiatorMoney))
            {
                target.AddMoney(initiatorMoney);
                Debug.Log($"  → ₦{initiatorMoney:N0} transferred from {initiator.playerName} to {target.playerName}");
            }
        }
        
        if (targetMoney > 0)
        {
            if (target.TrySpend(targetMoney))
            {
                initiator.AddMoney(targetMoney);
                Debug.Log($"  → ₦{targetMoney:N0} transferred from {target.playerName} to {initiator.playerName}");
            }
        }

        if (initiator.HasCharacterEffect(CharacterEffectKeys.MarketTradeBonus))
            initiator.AddMoney(100000);
        if (target.HasCharacterEffect(CharacterEffectKeys.MarketTradeBonus))
            target.AddMoney(100000);
        
        if (turnManager != null)
        {
            turnManager.UpdateAllPlayersUI();
        }
        
        UpdateOwnershipTagsForTrade(initiatorProps, targetProps);
        
        if (NarrativeManager.Instance != null)
        {
            NarrativeManager.Instance.OnTradeCompleted(initiator, target);
        }
        
        if (GameSoundManager.Instance != null)
        {
            GameSoundManager.Instance.NotifyActivity();
            GameSoundManager.Instance.PlayTradeSuccess();
        }
    }

    bool ShouldDelayTrade()
    {
        return (initiatingPlayer != null && initiatingPlayer.HasFaultEffect(CharacterEffectKeys.CivilTradeDelay)) ||
               (targetPlayer != null && targetPlayer.HasFaultEffect(CharacterEffectKeys.CivilTradeDelay));
    }

    void QueuePendingTrade()
    {
        PendingTrade trade = new PendingTrade
        {
            initiator = initiatingPlayer,
            target = targetPlayer,
            initiatorMoney = player1OfferingMoney,
            targetMoney = player2OfferingMoney,
            turnsRemaining = 1
        };

        trade.initiatorProps.AddRange(player1OfferingProperties);
        trade.targetProps.AddRange(player2OfferingProperties);
        trade.initiatorCards.AddRange(player1OfferingCards);
        trade.targetCards.AddRange(player2OfferingCards);

        pendingTrades.Add(trade);
        Debug.Log("Paperwork Delay: Trade queued and will finalize next turn.");

        if (NarrativeManager.Instance != null && initiatingPlayer != null && targetPlayer != null)
        {
            string msg = $"Paperwork delay: {initiatingPlayer.playerName} ↔ {targetPlayer.playerName} trade queued. Finalizes next turn.";
            NarrativeManager.Instance.AddSystemMessage("📄 Paperwork Delay", msg, "📄");
        }
    }
}
