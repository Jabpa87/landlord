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
    
    // UI Elements (accessed through UIDocumentManager)
    // No need to store references - use uiManager properties
    
    void Start()
    {
        if (turnManager == null)
            turnManager = FindFirstObjectByType<TurnManager>();
        
        if (uiManager == null)
            uiManager = FindFirstObjectByType<UIDocumentManager>();
        
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
            uiManager.TradeShowBoardButton.clicked -= OnShowBoardClicked;
            uiManager.TradeShowBoardButton.clicked += OnShowBoardClicked;
        }
        
        // Target player selection
        if (uiManager != null && uiManager.TradeTargetDropdown != null)
        {
            uiManager.TradeTargetDropdown.RegisterValueChangedCallback(evt =>
            {
                SelectTradeTarget(evt.newValue);
            });
        }
        
        // Money fields (offer/expect)
        if (uiManager != null && uiManager.Player1MoneyField != null)
        {
            uiManager.Player1MoneyField.RegisterValueChangedCallback(evt => 
            {
                if (tradeInProgress && initiatingPlayer != null)
                    SetMoneyOffer(evt.newValue, true);
            });
        }
        
        if (uiManager != null && uiManager.Player2MoneyField != null)
        {
            uiManager.Player2MoneyField.RegisterValueChangedCallback(evt => 
            {
                if (tradeInProgress && targetPlayer != null)
                    SetMoneyOffer(evt.newValue, false);
            });
        }
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
        List<Property> aiTradeable = GetTradeableProperties(aiInitiator);
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
    /// Populate dropdown with available trade targets.
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

        if (uiManager != null && uiManager.TradeTargetDropdown != null)
        {
            List<string> options = new List<string>();
            options.Add("Select Player");
            foreach (Player p in availableTradeTargets)
            {
                options.Add(p.playerName);
            }
            uiManager.TradeTargetDropdown.choices = options;
            uiManager.TradeTargetDropdown.value = targetPlayer != null ? targetPlayer.playerName : "Select Player";
        }
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
        
        Debug.Log($"Trade rejected by {targetPlayer.playerName}");
        EndTrade();
    }
    
    /// <summary>
    /// Cancel the trade (initiating player cancels).
    /// </summary>
    public void CancelTrade()
    {
        if (!tradeInProgress) return;
        
        Debug.Log($"Trade cancelled by {initiatingPlayer.playerName}");
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
        if (uiManager == null) return;
        
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
        if (uiManager == null) return;
        uiManager.HideTradePanel();
    }
    
    void UpdateTradeUI()
    {
        if (uiManager == null || !tradeInProgress) return;
        
        // Update header: "[Player Name] OFFERS"
        if (uiManager.TradeTitleText != null && initiatingPlayer != null)
        {
            uiManager.TradeTitleText.text = $"{initiatingPlayer.playerName} OFFERS";
        }

        bool hasTarget = targetPlayer != null;

        // Update property lists (only when target is selected)
        if (hasTarget)
        {
            UpdatePropertyList(uiManager.Player1PropertiesList, player1OfferingProperties, initiatingPlayer, true);
            UpdatePropertyList(uiManager.Player2PropertiesList, player2OfferingProperties, targetPlayer, false);
        }
        else
        {
            if (uiManager.Player1PropertiesList != null) uiManager.Player1PropertiesList.Clear();
            if (uiManager.Player2PropertiesList != null) uiManager.Player2PropertiesList.Clear();
        }

        // Update money fields
        if (uiManager.Player1MoneyField != null)
        {
            uiManager.Player1MoneyField.value = player1OfferingMoney;
            uiManager.Player1MoneyField.SetEnabled(hasTarget);
        }

        if (uiManager.Player2MoneyField != null)
        {
            uiManager.Player2MoneyField.value = player2OfferingMoney;
            uiManager.Player2MoneyField.SetEnabled(hasTarget);
        }

        // Status text
        if (uiManager.TradeStatusText != null)
        {
            if (!hasTarget)
            {
                uiManager.TradeStatusText.text = "Select a player to trade with.";
                uiManager.TradeStatusText.style.display = DisplayStyle.Flex;
            }
            else
            {
                uiManager.TradeStatusText.text = $"{initiatingPlayer.playerName} is offering a trade to {targetPlayer.playerName}";
                uiManager.TradeStatusText.style.display = DisplayStyle.Flex;
            }
        }

        // Buttons
        if (uiManager.TradeOfferButton != null)
            uiManager.TradeOfferButton.SetEnabled(hasTarget);

        // Update card lists
        if (hasTarget)
        {
            UpdateCardList(uiManager.Player1CardsList, player1OfferingCards, initiatingPlayer, true);
            UpdateCardList(uiManager.Player2CardsList, player2OfferingCards, targetPlayer, false);
        }
        else
        {
            if (uiManager.Player1CardsList != null) uiManager.Player1CardsList.Clear();
            if (uiManager.Player2CardsList != null) uiManager.Player2CardsList.Clear();
        }
    }
    
    
    /// <summary>
    /// Gets header color for property based on tier or group.
    /// </summary>
    Color GetPropertyHeaderColor(Property prop)
    {
        // Color based on tier label
        if (!string.IsNullOrEmpty(prop.tierLabel))
        {
            switch (prop.tierLabel.ToLower())
            {
                case "satellite":
                    return new Color(0.8f, 0.2f, 0.2f); // Red
                case "mid":
                    return new Color(1f, 0.84f, 0f); // Yellow/Gold
                case "prime":
                    return new Color(0.2f, 0.6f, 0.2f); // Green
                default:
                    return new Color(0.3f, 0.3f, 0.8f); // Blue
            }
        }
        
        // Default colors based on group
        return new Color(0.5f, 0.5f, 0.8f); // Light blue
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
        // Hide trade panel temporarily to show board
        if (uiManager != null)
        {
            uiManager.HideTradePanel();
            // Could add a coroutine to show it again after a delay, or add a "Back to Trade" button
        }
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
    
    /// <summary>
    /// Get all properties owned by a player that can be traded.
    /// </summary>
    List<Property> GetTradeableProperties(Player player)
    {
        List<Property> properties = new List<Property>();
        
        if (player == null) return properties;
        
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
                properties.Add(tile.property);
            }
        }
        
        return properties;
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
            GameSoundManager.Instance.NotifyActivity();
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
