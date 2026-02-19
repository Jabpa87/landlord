using UnityEngine;
using UnityEngine.UIElements; // For UI Toolkit
using System.Collections; // For coroutines
using System.Collections.Generic; // For List<>

public class Player : MonoBehaviour
{
    public Transform[] boardPoints;
    public int currentIndex = 0;
    
    // --- Player Identity ---
    [Header("Player Identity")]
    [Tooltip("Player's display name")]
    public string playerName = "Player";
    
    [Tooltip("Player's color (for UI and visual distinction)")]
    public Color playerColor = Color.white;
    
    [Tooltip("Player index in TurnManager's players list")]
    public int playerIndex = 0;
    
    [Tooltip("Token/avatar sprite index (for visual representation)")]
    public int tokenSpriteIndex = 0;

    [Tooltip("Character index selected in the main menu (matches CharacterDatabase index).")]
    public int characterIndex = 0;

    [Tooltip("If true, this player is controlled by AI")]
    public bool isAI = false;

    [Header("Perk Cards")]
    [Tooltip("Perk cards owned by this player (tradable).")]
    public List<PerkCardInstance> perkCards = new List<PerkCardInstance>();

    [Header("Character Effects")]
    public string characterName = "";
    [Tooltip("Resolved, data-driven effect profile for this character (auto-filled from CharacterDatabase).")]
    public CharacterEffectProfile characterEffects;
    [Tooltip("Player-selected timing mode for triggerable perks.")]
    public PerkTimingPreference perkTimingPreference = PerkTimingPreference.Auto;
    [Tooltip("Runtime status snapshot for character behavior UI.")]
    public CharacterRuntimeState runtimeState = new CharacterRuntimeState();
    public int turnsTaken = 0;
    public bool creditTrustUsed = false;
    public bool legalShieldUsed = false;
    public bool bidPenaltyUsed = false;
    public int mortgagesThisTurn = 0;
    
    // Player elimination state
    public bool IsEliminated { get; private set; } = false;
    
    // Player wallet - starting money in Naira
    [Header("Wallet")]
    [SerializeField] private int wallet = 2000000; // ₦2,000,000 standard starting money
    
    // Public method to reset wallet (for testing/debugging)
    [ContextMenu("Reset Wallet to ₦2,000,000")]
    public void ResetWallet()
    {
        wallet = 2000000;
        Debug.Log($"Wallet reset to ₦{wallet:N0}");
    }
    
    // Public property to access wallet
    public int Money 
    { 
        get { return wallet; } 
        set { wallet = value; } // Allow setting for game initialization
    }
    
    // Calculate total net worth (money + property value)
    public int GetNetWorth()
    {
        int total = wallet;
        
        // Add property values
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == this)
            {
                total += tile.property.price; // Base property value
                
                // Add building values (houses and hotels)
                if (tile.property.hasHotel)
                {
                    total += tile.property.hotelCost;
                }
                else
                {
                    total += tile.property.houses * tile.property.houseCost;
                }
            }
        }
        
        return total;
    }
    
    // Count properties owned by this player
    public int GetPropertyCount()
    {
        int count = 0;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == this)
            {
                count++;
            }
        }
        return count;
    }
    
    // UI Toolkit References (leave None on prefab; they are auto-assigned from the scene at runtime)
    [Header("UI Toolkit")]
    [Tooltip("UI Document Manager. Leave None on prefab — auto-assigned from scene at runtime.")]
    public UIDocumentManager uiManager;
    
    [Header("Card System")]
    [Tooltip("Card System (Chance/Community Chest). Leave None on prefab — auto-assigned from scene at runtime.")]
    public CardSystem cardSystem;
    [Tooltip("Turn Manager. Leave None on prefab — auto-assigned from scene at runtime.")]
    public TurnManager turnManager;
    
    private TileInfo currentTile; // For buy/skip actions
    private TileInfo buildTile; // For build actions (separate to avoid conflicts)
    
    // Turn Manager will wait on this when a UI decision is required (Buy/Skip/Build).
    public bool IsAwaitingChoice { get; internal set; } = false;
    
    // --- Jail System ---
    [Header("Jail System")]
    [Tooltip("Cost to pay to get out of jail immediately")]
    public int jailBailCost = 50000; // ₦50,000
    
    // Jail state
    public bool IsInJail { get; private set; } = false;
    public int TurnsInJail { get; private set; } = 0;
    public bool HasGetOutOfJailFreeCard { get; private set; } = false;
    
    // Last dice roll values (for checking doubles)
    private int lastDice1 = 0;
    private int lastDice2 = 0;
    private Coroutine activeTokenRoutine;
    private SpriteRenderer cachedTokenRenderer;
    [Header("Active Turn Highlight")]
    [Tooltip("Optional: prefab to show under token on your turn. Assign from Project (Assets), not Scene.")]
    [SerializeField] private GameObject activeTurnHighlightPrefab;
    [SerializeField] private float highlightRotateSpeed = 90f;
    private Transform activeTurnHighlight;
    private Coroutine activeHighlightRoutine;

    void Start()
    {
        // Resolve scene references if not set (prefab can't reference scene objects; they are found at runtime)
        if (uiManager == null)
        {
            uiManager = FindFirstObjectByType<UIDocumentManager>();
            if (uiManager != null) Debug.Log($"[Player] {playerName}: Auto-assigned Ui Manager from scene.");
        }
        if (cardSystem == null)
        {
            cardSystem = FindFirstObjectByType<CardSystem>();
            if (cardSystem != null) Debug.Log($"[Player] {playerName}: Auto-assigned Card System from scene.");
        }
        if (turnManager == null)
        {
            turnManager = FindFirstObjectByType<TurnManager>();
            if (turnManager != null) Debug.Log($"[Player] {playerName}: Auto-assigned Turn Manager from scene.");
        }

        // Backward compatibility: resolve data-driven effects from characterName if profile is not assigned yet.
        if (characterEffects == null && !string.IsNullOrEmpty(characterName))
        {
            characterEffects = CharacterEffectCatalog.BuildProfile(new Character { characterName = characterName });
        }

        EnsureBoardPoints();
        // Ensure we start at first point (safe: boardPoints may be set by TurnManager after creation)
        if (boardPoints != null && boardPoints.Length > 0 && currentIndex >= 0 && currentIndex < boardPoints.Length && boardPoints[currentIndex] != null)
        {
            transform.position = boardPoints[currentIndex].position;
        }
        
        // Note: Starting money is set from GameSettings via MainMenuManager
        // This default value is only used if player is created outside of game initialization
        
        Debug.Log($"=== Player Started ===");
        Debug.Log($"Starting Wallet: ₦{wallet:N0}");
        Debug.Log($"Starting Position: Tile {currentIndex}");
        
        // Apply visual settings (color to SpriteRenderer)
        ApplyVisualSettings();
        
        // Hide property panel at start (handled by UIDocumentManager)
        if (uiManager != null)
        {
            uiManager.HidePropertyPanel();
            uiManager.HideCardPanel();
            
            // Disable build button initially (will be enabled when on buildable property)
            if (uiManager.BuildButton != null)
                uiManager.BuildButton.Enabled = false;
            
            // NOTE: BuyButton and SkipButton are now handled by TurnManager
            // to ensure the current player's method is always called, not the last player to initialize
            // This prevents multiplayer issues where buttons call the wrong player's method
        }
    }

    void Update()
    {
        // Turn-based control is handled by TurnManager (Roll button + End Turn).
        // Keeping Update empty avoids accidental "Space to roll" during UI choices.
    }
    
    /// <summary>
    /// Applies player color to SpriteRenderer for visual distinction on the board.
    /// Also applies token sprite if PlayerVisualManager is available.
    /// Call this after setting playerColor to update the visual representation.
    /// </summary>
    public void ApplyVisualSettings()
    {
        // Try to use PlayerVisualManager if available
        PlayerVisualManager visualManager = PlayerVisualManager.Instance;
        if (visualManager != null)
        {
            visualManager.ApplyTokenToPlayer(this, tokenSpriteIndex);
            return;
        }
        
        // Fallback: Ensure SpriteRenderer is visible (no color tinting - tokens show natural colors)
        SpriteRenderer sr = GetComponent<SpriteRenderer>();
        if (sr == null)
            sr = GetComponentInChildren<SpriteRenderer>();
        if (sr != null)
        {
            sr.enabled = true;
            if (sr.sprite == null)
                sr.sprite = PlayerVisualManager.GetOrCreateFallbackTokenSprite();
            sr.color = Color.white;
            sr.sortingOrder = 200;
        }
    }

    public void AddPerkCard(PerkCardInstance card)
    {
        if (card == null) return;
        if (perkCards == null) perkCards = new List<PerkCardInstance>();
        perkCards.Add(card);
        Debug.Log($"[PerkCard] {playerName} received card: {card.name}");
    }

    public bool IsCharacter(string name)
    {
        return !string.IsNullOrEmpty(characterName) && string.Equals(characterName, name);
    }

    public void ApplyCharacterData(Character character)
    {
        if (character == null) return;
        characterName = character.characterName;
        characterEffects = CharacterEffectCatalog.BuildProfile(character);
    }

    public bool HasPerkEffect(string effectKey)
    {
        return characterEffects != null && characterEffects.HasPerk(effectKey);
    }

    public bool HasFaultEffect(string effectKey)
    {
        return characterEffects != null && characterEffects.HasFault(effectKey);
    }

    public bool HasCharacterEffect(string effectKey)
    {
        return characterEffects != null && characterEffects.HasEffect(effectKey);
    }

    public string GetPerkEffectsSummary()
    {
        if (characterEffects == null || characterEffects.PerkKeys == null || characterEffects.PerkKeys.Count == 0)
            return "";
        List<string> names = new List<string>();
        foreach (string key in characterEffects.PerkKeys)
            names.Add(CharacterEffectCatalog.GetEffectDisplayName(key));
        return string.Join(", ", names);
    }

    public string GetFaultEffectsSummary()
    {
        if (characterEffects == null || characterEffects.FaultKeys == null || characterEffects.FaultKeys.Count == 0)
            return "";
        List<string> names = new List<string>();
        foreach (string key in characterEffects.FaultKeys)
            names.Add(CharacterEffectCatalog.GetEffectDisplayName(key));
        return string.Join(", ", names);
    }

    public void RecomputeCharacterRuntimeState(int purchasedPropertyCount, int totalPropertyCount)
    {
        if (runtimeState == null)
            runtimeState = new CharacterRuntimeState();

        runtimeState.boardPurchasedRatio = totalPropertyCount <= 0
            ? 0f
            : Mathf.Clamp01((float)purchasedPropertyCount / totalPropertyCount);
        runtimeState.gamePhase = runtimeState.boardPurchasedRatio < 0.5f
            ? "Early"
            : (runtimeState.boardPurchasedRatio < 1f ? "Mid" : "Late");

        runtimeState.turnsUntilPension = -1;
        if (HasCharacterEffect(CharacterEffectKeys.PensionBonus))
        {
            int remainder = turnsTaken % 5;
            runtimeState.turnsUntilPension = remainder == 0 ? 5 : (5 - remainder);
        }

        runtimeState.turnsUntilHotelUnlock = -1;
        if (HasFaultEffect(CharacterEffectKeys.SlowGrowth))
        {
            runtimeState.turnsUntilHotelUnlock = Mathf.Max(0, 20 - turnsTaken);
        }

        runtimeState.legalShieldState = HasCharacterEffect(CharacterEffectKeys.CivilLegalShield)
            ? (legalShieldUsed ? EffectUsageState.Used : EffectUsageState.Unused)
            : EffectUsageState.Active;

        runtimeState.creditTrustState = HasCharacterEffect(CharacterEffectKeys.CreditTrustOneTime)
            ? (creditTrustUsed ? EffectUsageState.Used : EffectUsageState.Unused)
            : EffectUsageState.Active;

        runtimeState.bidPenaltyState = HasFaultEffect(CharacterEffectKeys.BidPenaltyOnFailedAuction)
            ? (bidPenaltyUsed ? EffectUsageState.Used : EffectUsageState.Unused)
            : EffectUsageState.Active;
    }

    public List<CharacterBehaviorStatusItem> BuildBehaviorStatusItems()
    {
        List<CharacterBehaviorStatusItem> items = new List<CharacterBehaviorStatusItem>();
        if (characterEffects == null) return items;

        if (characterEffects.PerkKeys != null)
        {
            foreach (string key in characterEffects.PerkKeys)
                items.Add(BuildBehaviorItem(key, true));
        }

        if (characterEffects.FaultKeys != null)
        {
            foreach (string key in characterEffects.FaultKeys)
                items.Add(BuildBehaviorItem(key, false));
        }
        return items;
    }

    CharacterBehaviorStatusItem BuildBehaviorItem(string effectKey, bool isPerk)
    {
        CharacterBehaviorStatusItem item = new CharacterBehaviorStatusItem();
        item.effectKey = effectKey;
        item.title = CharacterEffectCatalog.GetEffectDisplayName(effectKey);
        item.description = effectKey;
        item.isPerk = isPerk;
        item.iconHint = isPerk ? "UP" : "DOWN";
        item.state = "Active";
        item.counter = "";

        switch (effectKey)
        {
            case CharacterEffectKeys.PensionBonus:
                item.counter = runtimeState != null && runtimeState.turnsUntilPension >= 0
                    ? $"{runtimeState.turnsUntilPension} turns to payout"
                    : "Pending";
                item.state = "Active";
                break;
            case CharacterEffectKeys.CivilLegalShield:
                item.state = legalShieldUsed ? "Used" : "Unused";
                item.counter = legalShieldUsed ? "Once-per-game spent" : "Ready";
                break;
            case CharacterEffectKeys.CreditTrustOneTime:
                item.state = creditTrustUsed ? "Used" : "Unused";
                item.counter = creditTrustUsed ? "Once-per-game spent" : "Ready";
                break;
            case CharacterEffectKeys.BidPenaltyOnFailedAuction:
                item.state = bidPenaltyUsed ? "Used" : "Unused";
                item.counter = bidPenaltyUsed ? "Penalty consumed" : "Pending";
                break;
            case CharacterEffectKeys.SlowGrowth:
                if (runtimeState != null && runtimeState.turnsUntilHotelUnlock > 0)
                {
                    item.state = "Locked";
                    item.counter = $"{runtimeState.turnsUntilHotelUnlock} turns to unlock";
                }
                else
                {
                    item.state = "Unlocked";
                    item.counter = "Hotel build unlocked";
                }
                break;
            case CharacterEffectKeys.LimitedLeverage:
                item.state = mortgagesThisTurn >= 1 ? "Locked" : "Active";
                item.counter = $"{Mathf.Clamp(1 - mortgagesThisTurn, 0, 1)} mortgage slot this turn";
                break;
            default:
                item.counter = runtimeState != null ? $"{runtimeState.gamePhase} phase" : "";
                break;
        }

        return item;
    }

    public bool HasPerkCard(PerkCardType type)
    {
        if (perkCards == null) return false;
        foreach (var card in perkCards)
        {
            if (card != null && card.type == type && card.CanUse)
                return true;
        }
        return false;
    }

    public PerkCardInstance GetPerkCard(PerkCardType type)
    {
        if (perkCards == null) return null;
        foreach (var card in perkCards)
        {
            if (card != null && card.type == type && card.CanUse)
                return card;
        }
        return null;
    }

    public void ConsumePerkCard(PerkCardInstance card)
    {
        if (card == null) return;
        card.ConsumeUse();
        if (card.usesRemaining <= 0)
        {
            Debug.Log($"[PerkCard] {playerName} used up card: {card.name}");
        }
    }

    UIDocumentManager GetActiveUIManager()
    {
        if (uiManager != null) return uiManager;
        if (turnManager != null && turnManager.uiManager != null) return turnManager.uiManager;
        return null;
    }

    void ShowPerkChoice(string title, string description, string okText, string altText, System.Action onOk, System.Action onAlt)
    {
        UIDocumentManager activeUIManager = GetActiveUIManager();
        if (activeUIManager == null)
        {
            onOk?.Invoke();
            return;
        }

        if (activeUIManager.CardOkButton != null)
        {
            activeUIManager.CardOkButton.clicked -= OnCardOkClicked;
        }

        IsAwaitingChoice = true;
        activeUIManager.ShowChoiceCard(title, description, okText, altText,
            () =>
            {
                activeUIManager.HideCardPanel();
                IsAwaitingChoice = false;
                onOk?.Invoke();
            },
            () =>
            {
                activeUIManager.HideCardPanel();
                IsAwaitingChoice = false;
                onAlt?.Invoke();
            });
    }

    public void SetActiveTurn(bool isActive)
    {
        SpriteRenderer sr = GetTokenRenderer();
        if (sr == null) return;

        if (isActive)
        {
            sr.color = Color.white;
            ShowActiveHighlight();
        }
        else
        {
            if (activeTokenRoutine != null)
            {
                StopCoroutine(activeTokenRoutine);
                activeTokenRoutine = null;
            }
            sr.color = Color.white;
            HideActiveHighlight();
        }
    }

    private System.Collections.IEnumerator ActiveTokenPulse(SpriteRenderer sr)
    {
        while (true)
        {
            float t = (Mathf.Sin(Time.time * 2.2f) + 1f) * 0.5f;
            float alpha = Mathf.Lerp(0.45f, 1f, t);
            sr.color = new Color(1f, 1f, 1f, alpha);
            yield return null;
        }
    }

    void ShowActiveHighlight()
    {
        if (activeTurnHighlight == null)
        {
            if (activeTurnHighlightPrefab == null)
                return;

            GameObject instance = Instantiate(activeTurnHighlightPrefab, transform);
            instance.name = "ActiveTurnHighlight";
            instance.transform.localPosition = Vector3.zero;
            instance.transform.localRotation = Quaternion.identity;
            instance.transform.localScale = Vector3.one;
            activeTurnHighlight = instance.transform;

            SpriteRenderer ringRenderer = instance.GetComponent<SpriteRenderer>();
            SpriteRenderer tokenRenderer = GetTokenRenderer();
            if (ringRenderer != null && tokenRenderer != null)
            {
                ringRenderer.sortingLayerID = tokenRenderer.sortingLayerID;
                ringRenderer.sortingOrder = tokenRenderer.sortingOrder - 1;
            }
        }

        if (activeTurnHighlight != null)
        {
            activeTurnHighlight.gameObject.SetActive(true);
            if (activeHighlightRoutine == null)
                activeHighlightRoutine = StartCoroutine(RotateActiveHighlight());
        }
    }

    void HideActiveHighlight()
    {
        if (activeHighlightRoutine != null)
        {
            StopCoroutine(activeHighlightRoutine);
            activeHighlightRoutine = null;
        }

        if (activeTurnHighlight != null)
            activeTurnHighlight.gameObject.SetActive(false);
    }

    private System.Collections.IEnumerator RotateActiveHighlight()
    {
        while (true)
        {
            if (activeTurnHighlight != null)
                activeTurnHighlight.Rotate(0f, 0f, highlightRotateSpeed * Time.deltaTime);
            yield return null;
        }
    }

    private SpriteRenderer GetTokenRenderer()
    {
        if (cachedTokenRenderer != null) return cachedTokenRenderer;
        cachedTokenRenderer = GetComponent<SpriteRenderer>();
        if (cachedTokenRenderer == null)
            cachedTokenRenderer = GetComponentInChildren<SpriteRenderer>();
        return cachedTokenRenderer;
    }

    // Store the last dice roll for utility rent calculation
    private int lastDiceRoll = 0;
    
    // Double dice tracking
    public int consecutiveDoubles = 0;
    public int ConsecutiveDoubles => consecutiveDoubles;
    
    // Find jail tile index on the board
    int FindJailTileIndex()
    {
        if (boardPoints == null || boardPoints.Length == 0) return -1;
        
        for (int i = 0; i < boardPoints.Length; i++)
        {
            TileInfo tile = boardPoints[i].GetComponent<TileInfo>();
            if (tile != null && tile.tileType == TileType.Jail)
            {
                return i;
            }
        }
        return -1;
    }

    // TurnManager calls this to move the player and apply "pass GO" salary.
    // - Triggers tile action only on final destination.
    // - Pays salary when passing GO (wrap-around from last index to 0).
    public IEnumerator MoveSteps(int steps, int goSalary, int dice1 = 0, int dice2 = 0, bool isDoubles = false)
    {
        EnsureBoardPoints();
        Debug.Log($"[DEBUG] MoveSteps called: player={playerName}, steps={steps}, boardPoints={(boardPoints != null ? boardPoints.Length.ToString() : "null")}");
        
        if (boardPoints == null || boardPoints.Length == 0)
        {
            Debug.LogError("MoveSteps: boardPoints not assigned or empty.");
            yield break;
        }
        
        // If player is in jail, they can't move normally (should use HandleJailTurn instead)
        if (IsInJail)
        {
            Debug.LogWarning("MoveSteps called while player is in jail! This shouldn't happen.");
            yield break;
        }

        // Store dice roll values for utility rent calculation and doubles tracking
        lastDice1 = dice1 > 0 ? dice1 : (steps > 0 ? Random.Range(1, 7) : 0);
        lastDice2 = dice2 > 0 ? dice2 : (steps > 0 ? Random.Range(1, 7) : 0);
        lastDiceRoll = steps;

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.NotifyActivity();

        // Move step-by-step (no intermediate tile actions).
        for (int i = 0; i < steps; i++)
        {
            // If the next step wraps around, we "pass GO".
            if (currentIndex == boardPoints.Length - 1)
            {
                int salary = GetGoSalary(goSalary);
                AddMoney(salary, "Salary");
                Debug.Log($"Passed GO! Collected ₦{salary:N0}");
                
                // Notify narrative manager
                if (NarrativeManager.Instance != null)
                {
                    NarrativeManager.Instance.OnPlayerPassedGO(this, salary);
                }

                yield return HandleGoBonusPerk(goSalary);
            }

    currentIndex++;
    if (currentIndex >= boardPoints.Length)
        currentIndex = 0;

    transform.position = boardPoints[currentIndex].position;

            if (GameSoundManager.Instance != null)
                GameSoundManager.Instance.PlayStep();

            // Small delay so movement is visible.
            yield return new WaitForSeconds(0.15f);
        }

        // Trigger final tile action only.
        TileInfo finalTile = boardPoints[currentIndex].GetComponent<TileInfo>();
        if (finalTile != null)
        {
            Debug.Log($"Landed on tile {currentIndex}: {finalTile.tileType}");
            TriggerTileAction(finalTile);
        }
        else
        {
            Debug.LogWarning($"Tile at index {currentIndex} has no TileInfo component!");
        }
    }

    IEnumerator HandleGoBonusPerk(int goSalary)
    {
        PerkCardInstance card = GetPerkCard(PerkCardType.GoBonus);
        if (card == null || !card.CanUse) yield break;

        int bonusAmount = Mathf.RoundToInt(goSalary * card.percentValue);

        if (isAI)
        {
            AddMoney(bonusAmount);
            ConsumePerkCard(card);
            GameLogger.Log($"PERK_GO_BONUS | player={playerName} amount={bonusAmount} uses_left={card.usesRemaining}");
            yield break;
        }

        bool decided = false;
        bool use = false;
        ShowPerkChoice(
            "GO Bonus",
            $"Activate GO Bonus for +₦{bonusAmount:N0}?\nUses left: {card.usesRemaining}",
            "SKIP",
            "USE CARD",
            () => { decided = true; use = false; },
            () => { decided = true; use = true; }
        );

        while (!decided)
            yield return null;

        if (use)
        {
            AddMoney(bonusAmount);
            ConsumePerkCard(card);
            GameLogger.Log($"PERK_GO_BONUS | player={playerName} amount={bonusAmount} uses_left={card.usesRemaining}");
        }
    }

    int GetGoSalary(int baseSalary)
    {
        int salary = baseSalary;
        if (HasCharacterEffect(CharacterEffectKeys.GoBonusCard))
            salary = baseSalary + 100000;

        if (HasFaultEffect(CharacterEffectKeys.LifestyleDrainOnGo))
        {
            int drain = 100000;
            if (TrySpend(drain))
                Debug.Log($"Lifestyle Drain: -₦{drain:N0}");
        }

        return salary;
    }

    // --- Wallet System ---
    // Add money to the player's wallet. Optional reason is shown in the money-change toast (e.g. "Salary", "Rent received").
    public void AddMoney(int amount, string reason = null)
    {
        if (amount <= 0) return;
        wallet += amount;
        Debug.Log($"[Wallet] Added ₦{amount:N0}. New Balance: ₦{wallet:N0}");
        GameLogger.Log($"MONEY_ADD | player={playerName} amount={amount} balance={wallet}");
        ShowMoneyChangeToastIfCurrentPlayer(amount, true, reason);
    }

    // Attempt to spend money from wallet; returns true if successful. Optional reason is shown in the money-change toast (e.g. "Rent", "Property").
    public bool TrySpend(int amount, string reason = null)
    {
        if (amount <= 0) return true;
        if (wallet >= amount)
        {
            wallet -= amount;
            Debug.Log($"[Wallet] Spent ₦{amount:N0}. New Balance: ₦{wallet:N0}");
            GameLogger.Log($"MONEY_SPEND | player={playerName} amount={amount} balance={wallet}");
            ShowMoneyChangeToastIfCurrentPlayer(amount, false, reason);
            return true;
        }
        Debug.Log($"[Wallet] Cannot afford ₦{amount:N0}. Current Balance: ₦{wallet:N0}");
        GameLogger.Log($"MONEY_FAIL | player={playerName} amount={amount} balance={wallet}");
        return false;
    }

    /// <summary>Show the money-change toast under this player's info panel (per-player notification).</summary>
    void ShowMoneyChangeToastIfCurrentPlayer(int amount, bool isIncome, string reason)
    {
        if (amount <= 0) return;
        UIDocumentManager ui = uiManager != null ? uiManager : (turnManager != null ? turnManager.uiManager : null);
        if (ui != null)
            ui.ShowMoneyChange(playerIndex, amount, isIncome, reason);
    }
    
    // Check if player is bankrupt (can't pay debt even with all assets)
    public bool IsBankrupt(int debtAmount)
    {
        return GetNetWorth() < debtAmount;
    }
    
    // Eliminate player (bankruptcy)
    // Transfers all properties to creditor (player or null for bank)
    public void Eliminate(Player creditor = null)
    {
        if (IsEliminated) return;
        
        IsEliminated = true;
        Debug.Log($"=== {playerName} IS BANKRUPT! ===");
        
        // Transfer all properties to creditor (or bank if creditor is null)
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int propertiesTransferred = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == this)
            {
                tile.property.owner = creditor;
                propertiesTransferred++;
                
                if (creditor != null)
                {
                    Debug.Log($"  → {tile.property.propertyName} transferred to {creditor.playerName}");
                }
                else
                {
                    Debug.Log($"  → {tile.property.propertyName} returned to bank");
                }
            }
        }
        
        Debug.Log($"  Total properties transferred: {propertiesTransferred}");
        Debug.Log($"  Final wallet: ₦{wallet:N0}");
        
        // Notify narrative manager
        if (NarrativeManager.Instance != null)
        {
            NarrativeManager.Instance.OnPlayerBankrupt(this, creditor);
        }
        
        // Disable player GameObject (hide from view)
        gameObject.SetActive(false);
    }

    // Check if player can afford an amount without spending
    public bool CanAfford(int amount)
    {
        bool canAfford = wallet >= amount;
        if (!canAfford)
        {
            Debug.Log($"[CanAfford] Need ₦{amount:N0}, but only have ₦{wallet:N0}. Short by: ₦{(amount - wallet):N0}");
        }
        return canAfford;
    }
    
    // Get current wallet balance
    public int GetBalance()
    {
        return wallet;
    }
    void TriggerTileAction(TileInfo tile)
{
        if (tile == null)
        {
            Debug.LogWarning("TriggerTileAction called with null tile!");
            return;
        }
        
        Debug.Log($"Triggering action for tile type: {tile.tileType}");
        
    switch (tile.tileType)
    {
        case TileType.Go:
                // Salary is now paid when PASSING GO in MoveSteps().
                Debug.Log("Landed on GO!");
            break;

        case TileType.Property:
                Debug.Log("Landed on Property tile!");
                HandlePropertyTile(tile);
            break;

        case TileType.Chance:
                HandleChanceEvent();
                break;

            case TileType.CommunityChest:
                HandleCommunityChestEvent();
            break;

        case TileType.Jail:
                // Just visiting jail (not in jail yet)
                if (!IsInJail)
                {
                    Debug.Log("Just visiting jail.");
                }
                // If already in jail, this means we're still in jail
                break;

        case TileType.FreeParking:
            HandleFreeParking();
            break;

        case TileType.Tax:
                HandleTaxTile();
            break;

        case TileType.GoToJail:
                HandleGoToJail();
                break;
        }
    }
    
    // --- Property System ---
    bool IsPurchasablePropertyDataValid(Property prop)
    {
        return prop != null &&
               !string.IsNullOrWhiteSpace(prop.propertyName) &&
               prop.price > 0;
    }

    bool ValidatePurchasablePropertyData(Property prop, TileInfo tile, string context)
    {
        if (IsPurchasablePropertyDataValid(prop))
            return true;

        string tileName = tile != null ? tile.gameObject.name : "null";
        string propName = prop != null ? prop.propertyName : "null";
        int propPrice = prop != null ? prop.price : -1;
        Debug.LogWarning($"[{context}] Invalid property data on tile '{tileName}'. name='{propName}', price={propPrice}. " +
                         "This tile will be treated as non-purchasable. Re-run PropertyAssigner.");
        return false;
    }

    void HandlePropertyTile(TileInfo tile)
    {
        if (tile == null)
        {
            Debug.LogError("HandlePropertyTile called with null tile!");
            return;
        }
        
        if (tile.property == null)
        {
            Debug.LogWarning($"Property tile '{tile.gameObject.name}' has no property data assigned. Make sure to assign property data using PropertyAssigner.");
            return;
        }
        
        Debug.Log($"Handling property: {tile.property.propertyName}");
        
        currentTile = tile; // Store for button callbacks
        Property prop = tile.property;
        if (!ValidatePurchasablePropertyData(prop, tile, "HandlePropertyTile"))
        {
            currentTile = null;
            IsAwaitingChoice = false;
            return;
        }
        
        // For utilities, store the dice roll for rent calculation
        if (prop.propertyType == PropertyType.Utility)
        {
            prop.lastDiceRoll = lastDiceRoll;
        }
        
        // If property is unowned, show buy option ONLY for human (AI choice is handled by ResolveAIChoice)
        if (prop.owner == null)
        {
            if (!isAI)
            {
                // Get UI manager - use player's uiManager, or fall back to TurnManager's uiManager
                UIDocumentManager activeUIManager = uiManager;
                if (activeUIManager == null && turnManager != null)
                {
                    activeUIManager = turnManager.uiManager;
                    Debug.Log($"Player {playerName}: Using TurnManager's uiManager (player's uiManager was null)");
                }
                
                // Show property panel ONLY for human on unowned property
                if (activeUIManager != null)
                {
                    activeUIManager.ShowPropertyPanel();
                    IsAwaitingChoice = true;
                    if (turnManager != null)
                        turnManager.TransitionState(GameStateMachine.State.AwaitingHumanDecision);
                    TurnDebugState.LogTurnAction("DecisionShown", $"type=BuyOrSkip player={playerName} tile={tile.gameObject.name}", setPhase: "AwaitDecision", setInputEnabled: "Buy,Skip");
                }
                else
                {
                    Debug.LogError($"Player {playerName}: Cannot show property panel - no UIDocumentManager available!");
                }
                
                string propertyTypeLabel = GetPropertyTypeLabel(prop.propertyType);
                if (activeUIManager != null && activeUIManager.PropertyText != null)
                {
                    activeUIManager.PropertyText.text = $"Buy {prop.propertyName} ({propertyTypeLabel}) for ₦{prop.price:N0}?";
                }
                
                if (activeUIManager != null && activeUIManager.BuyButton != null)
                {
                    bool canAfford = CanAfford(prop.price);
                    activeUIManager.BuyButton.SetEnabled(canAfford);
                    activeUIManager.BuyButton.text = "BUY PROPERTY";
                    Debug.Log($"Player {playerName}: Buy button set to interactable: {canAfford} (Can afford ₦{prop.price:N0}? {canAfford})");
                }
                else
                {
                    Debug.LogError($"Player {playerName}: Buy button is NULL in HandlePropertyTile!");
                }
                
                if (activeUIManager != null && activeUIManager.SkipButton != null)
                {
                    activeUIManager.SkipButton.SetEnabled(true);
                    Debug.Log($"Player {playerName}: Skip button enabled - player can skip property purchase");
                }
            }
            // AI: do not show panel or set IsAwaitingChoice; ResolveAIChoice will call BuyProperty/SkipAction
        }
        // If property is owned by someone else, pay rent automatically (NO UI PANEL)
        else if (prop.owner != this)
        {
            // Calculate rent (for utilities, this uses the stored dice roll)
            int rent = prop.CurrentRent;
            if (!string.IsNullOrEmpty(prop.tierLabel) &&
                prop.tierLabel.ToLower() == "satellite" &&
                prop.owner != null &&
                prop.owner.HasCharacterEffect(CharacterEffectKeys.TechRentDiscountOnSatellite))
            {
                rent = Mathf.RoundToInt(rent * 0.9f);
            }
            PerkCardInstance skipCard = GetPerkCard(PerkCardType.SkipRent);
            PerkCardInstance shieldCard = GetPerkCard(PerkCardType.RentShield);
            bool legalShieldAvailable = HasCharacterEffect(CharacterEffectKeys.CivilLegalShield) && !legalShieldUsed;

            if (!isAI && (skipCard != null || shieldCard != null || legalShieldAvailable))
            {
                string ownerName = !string.IsNullOrEmpty(prop.owner.playerName) ? prop.owner.playerName : prop.owner.name;
                if (skipCard != null)
                {
                    ShowPerkChoice(
                        "Skip Rent",
                        $"Rent due: ₦{rent:N0} to {ownerName} for {prop.propertyName}.\nUse Skip Rent card?",
                        "PAY RENT",
                        "USE CARD",
                        () => PayRent(prop, rent),
                        () =>
                        {
                            ConsumePerkCard(skipCard);
                            GameLogger.Log($"PERK_SKIP_RENT | player={playerName} property={prop.propertyName} uses_left={skipCard.usesRemaining}");
                            Debug.Log(skipCard.sideJoke);
                        }
                    );
                }
                else if (shieldCard != null)
                {
                    int reduced = Mathf.Max(0, rent - Mathf.RoundToInt(rent * shieldCard.percentValue));
                    ShowPerkChoice(
                        "Rent Shield",
                        $"Rent due: ₦{rent:N0} to {ownerName} for {prop.propertyName}.\nUse Rent Shield to pay ₦{reduced:N0}?",
                        "PAY FULL",
                        "USE CARD",
                        () => PayRent(prop, rent),
                        () =>
                        {
                            ConsumePerkCard(shieldCard);
                            PayRent(prop, reduced);
                            GameLogger.Log($"PERK_RENT_SHIELD | player={playerName} reduced={rent - reduced} uses_left={shieldCard.usesRemaining}");
                            Debug.Log(shieldCard.sideJoke);
                        }
                    );
                }
                else if (legalShieldAvailable)
                {
                    int reduced = Mathf.Max(0, rent - Mathf.RoundToInt(rent * 0.25f));
                    ShowPerkChoice(
                        "Legal Shield",
                        $"Rent due: ₦{rent:N0} to {ownerName} for {prop.propertyName}.\nUse Legal Shield to pay ₦{reduced:N0}?",
                        "PAY FULL",
                        "USE SHIELD",
                        () => PayRent(prop, rent),
                        () =>
                        {
                            legalShieldUsed = true;
                            PayRent(prop, reduced);
                            GameLogger.Log($"PERK_LEGAL_SHIELD | player={playerName} reduced={rent - reduced}");
                        }
                    );
                }
            }
            else
            {
                if (isAI && skipCard != null)
                {
                    if (rent >= 100000)
                    {
                        ConsumePerkCard(skipCard);
                        GameLogger.Log($"PERK_SKIP_RENT | player={playerName} property={prop.propertyName} uses_left={skipCard.usesRemaining}");
                        Debug.Log(skipCard.sideJoke);
                    }
                    else
                    {
                        PayRent(prop, rent);
                    }
                }
                else if (isAI && shieldCard != null)
                {
                    int reduced = Mathf.Max(0, rent - Mathf.RoundToInt(rent * shieldCard.percentValue));
                    if (rent >= 100000)
                    {
                        ConsumePerkCard(shieldCard);
                        PayRent(prop, reduced);
                        GameLogger.Log($"PERK_RENT_SHIELD | player={playerName} reduced={rent - reduced} uses_left={shieldCard.usesRemaining}");
                        Debug.Log(shieldCard.sideJoke);
                    }
                    else
                    {
                        PayRent(prop, rent);
                    }
                }
                else if (legalShieldAvailable)
                {
                    int reduced = Mathf.Max(0, rent - Mathf.RoundToInt(rent * 0.25f));
                    legalShieldUsed = true;
                    PayRent(prop, reduced);
                    GameLogger.Log($"PERK_LEGAL_SHIELD | player={playerName} reduced={rent - reduced}");
                }
                else
                {
                    PayRent(prop, rent);
                }
            }
            
            // Clear currentTile since we're not showing UI
            currentTile = null;
        }
        // If property is owned by this player, check if can build (only for Regular properties)
        else
        {
            // DO NOT show property panel - just check for building
            // DO NOT set IsAwaitingChoice - landing on own property doesn't require choice
            
            Debug.Log($"Landed on your own property: {prop.propertyName}.");
            
            // Only enable build button for Regular properties that can have houses/hotels
            if (prop.propertyType == PropertyType.Regular && OwnsFullGroup(prop.groupId))
            {
                buildTile = tile; // Store for build button
            }
            else
            {
                buildTile = null;
                string reason = prop.propertyType != PropertyType.Regular 
                    ? $"{GetPropertyTypeLabel(prop.propertyType)} properties cannot be developed." 
                    : $"No action needed (don't own full group {prop.groupId}).";
                Debug.Log($"  {reason}");
            }
            
            // Update action buttons
            UpdateActionButtons();
            
            // Clear currentTile since we're not showing UI
            currentTile = null;
        }
    }

    void PayRent(Property prop, int rent)
    {
        if (prop == null || prop.owner == null) return;
        if (TrySpend(rent, "Rent"))
        {
            prop.owner.AddMoney(rent, "Rent received");
            string ownerName = !string.IsNullOrEmpty(prop.owner.playerName) ? prop.owner.playerName : prop.owner.name;
            Debug.Log($"✓ Paid rent of ₦{rent:N0} to {ownerName} for {prop.propertyName}.");
            
            if (NarrativeManager.Instance != null)
            {
                NarrativeManager.Instance.OnRentPaid(this, prop.owner, rent);
            }
            
            UIDocumentManager activeUIManager = GetActiveUIManager();
            if (activeUIManager != null)
            {
                activeUIManager.ShowRentPaymentNotification(this, prop.owner, prop, rent);
                if (isAI)
                    StartCoroutine(AutoDismissRentPanelAfterDelay(activeUIManager, 1.5f));
            }
        }
        else
        {
            Debug.LogWarning($"Cannot afford rent of ₦{rent:N0} for {prop.propertyName}!");
            if (turnManager != null)
            {
                turnManager.HandlePlayerBankruptcy(this, prop.owner, rent);
            }
        }
    }

    System.Collections.IEnumerator AutoDismissRentPanelAfterDelay(UIDocumentManager ui, float delay)
    {
        yield return new WaitForSeconds(delay);
        if (ui != null)
            ui.HideRentPaymentPanel();
    }
    
    // Helper method to get property type label
    string GetPropertyTypeLabel(PropertyType type)
    {
        switch (type)
        {
            case PropertyType.Utility: return "Utility";
            case PropertyType.Transportation: return "Transportation";
            default: return "Property";
        }
    }
    
    // Count utilities owned by a specific player
    int CountUtilitiesOwned(Player player)
    {
        if (player == null) return 0;
        
        int count = 0;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.propertyType == PropertyType.Utility &&
                tile.property.owner == player)
            {
                count++;
            }
        }
        return count;
    }
    
    // Count transportation properties owned by a specific player
    int CountTransportationOwned(Player player)
    {
        if (player == null) return 0;
        
        int count = 0;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.propertyType == PropertyType.Transportation &&
                tile.property.owner == player)
            {
                count++;
            }
        }
        return count;
    }
    
    // --- UI Button Handlers ---
    public void BuyProperty()
    {
        Debug.Log($"Player {playerName}: === BuyProperty() called ===");
        
        // IMPORTANT: Only allow purchase if this is the current player's turn
        // Use playerIndex comparison instead of reference equality (more reliable)
        if (turnManager != null)
        {
            Player currentPlayer = turnManager.GetCurrentPlayer();
            if (currentPlayer == null || currentPlayer.playerIndex != this.playerIndex)
            {
                Debug.LogWarning($"Player {playerName} (index {playerIndex}): BuyProperty called but it's not your turn! Current player: {(currentPlayer != null ? $"{currentPlayer.playerName} (index {currentPlayer.playerIndex})" : "null")}");
                return;
            }
        }
        
        // Get UI manager - use player's uiManager, or fall back to TurnManager's uiManager
        UIDocumentManager activeUIManager = uiManager;
        if (activeUIManager == null && turnManager != null)
        {
            activeUIManager = turnManager.uiManager;
            Debug.Log($"Player {playerName}: Using TurnManager's uiManager for BuyProperty");
        }
        
        // Get current tile from player's position (more reliable than stored currentTile)
        TileInfo tile = GetCurrentTile();
        if (tile == null)
        {
            // Fallback to stored currentTile if GetCurrentTile() fails
            tile = currentTile;
        }
        
        // Check if we have a valid tile and property
        if (tile == null)
        {
            Debug.LogWarning($"Player {playerName}: BuyProperty: Cannot get current tile! Player position: {currentIndex}");
            return;
        }
        
        if (tile.property == null)
        {
            Debug.LogWarning($"Player {playerName}: BuyProperty: Tile at position {currentIndex} has no property!");
            return;
        }
        
        if (tile.property.owner != null)
        {
            Debug.LogWarning($"Player {playerName}: BuyProperty: Property {tile.property.propertyName} is already owned by {tile.property.owner.name}!");
            return;
        }
        
        Property prop = tile.property;
        if (!ValidatePurchasablePropertyData(prop, tile, "BuyProperty"))
        {
            if (activeUIManager != null)
                activeUIManager.HidePropertyPanel();
            IsAwaitingChoice = false;
            currentTile = null;
            return;
        }
        Debug.Log($"Player {playerName}: Attempting to buy: {prop.propertyName} for ₦{prop.price:N0}");
        Debug.Log($"Player {playerName}: Current wallet: ₦{wallet:N0}");
        
        // Check if player can afford it
        if (CanAfford(prop.price))
        {
            // Spend the money
            if (TrySpend(prop.price, "Property"))
            {
                // Record the purchase - set owner to this player
                prop.owner = this;
                Debug.Log($"Player {playerName}: ✓ SUCCESS: Bought {prop.propertyName} for ₦{prop.price:N0}!");
                Debug.Log($"Player {playerName}: ✓ Property owner set to: {prop.owner.name}");
                Debug.Log($"Player {playerName}: ✓ Remaining wallet: ₦{wallet:N0}");
                GameLogger.Log($"BUY_PROPERTY | player={playerName} property={prop.propertyName} price={prop.price} balance={wallet}");
                
                // Notify narrative manager
                if (NarrativeManager.Instance != null)
                {
                    NarrativeManager.Instance.OnPropertyBought(this, prop);
                }
                
                if (GameSoundManager.Instance != null)
                {
                    GameSoundManager.Instance.PlayBuyProperty();
                    GameSoundManager.Instance.NotifyActivity();
                    if (OwnsFullGroup(prop.groupId))
                        GameSoundManager.Instance.PlayMonopoly();
                }
                
                // Update ownership tag if present
                PropertyOwnershipTag ownershipTag = tile.GetComponent<PropertyOwnershipTag>();
                if (ownershipTag != null)
                {
                    ownershipTag.UpdateOwnershipDisplay();
                }
                
                // Update UI text
                if (activeUIManager != null && activeUIManager.PropertyText != null)
                {
                    activeUIManager.PropertyText.text = $"✓ Bought {prop.propertyName}!\nMoney left: ₦{wallet:N0}";
                }
                if (activeUIManager != null)
                {
                    activeUIManager.HidePropertyPanel();
                    if (turnManager != null)
                        turnManager.ShowResultMessage($"{playerName} purchased {prop.propertyName}.\nBalance: ₦{wallet:N0}", isAI ? 1.1f : 1.8f);
                    else
                        activeUIManager.ShowResultNotification($"{playerName} purchased {prop.propertyName}.\nBalance: ₦{wallet:N0}", isAI ? 1.1f : 1.8f);
                }
                
                // Update currentTile to match the tile we just bought (for consistency)
                currentTile = tile;
                IsAwaitingChoice = false;
            }
            else
            {
                Debug.LogError($"Player {playerName}: TrySpend returned false even though CanAfford returned true!");
                if (activeUIManager != null && activeUIManager.PropertyText != null)
                {
                    activeUIManager.PropertyText.text = $"Error: Could not complete purchase.";
                }
            }
        }
        else
        {
            Debug.Log($"Player {playerName}: Cannot afford {prop.propertyName} (₦{prop.price:N0}). Wallet: ₦{wallet:N0}");
            if (activeUIManager != null && activeUIManager.PropertyText != null)
            {
                activeUIManager.PropertyText.text = $"Cannot afford {prop.propertyName} (₦{prop.price:N0}).\nWallet: ₦{wallet:N0}";
            }
            // Don't hide panel if can't afford - let player see the message
        }
    }
    
    // Coroutine to hide panel after showing success message
    private System.Collections.IEnumerator HidePanelAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        
        // Hide the entire panel
        if (uiManager != null)
        {
            uiManager.HidePropertyPanel();
            Debug.Log("Property panel hidden after purchase.");
        }
        
        currentTile = null;
        IsAwaitingChoice = false;
    }
    
    public void SkipAction()
    {
        Debug.Log($"Player {playerName}: SkipAction called - skipping property purchase");
        GameLogger.Log($"SKIP_PROPERTY | player={playerName}");
        
        // IMPORTANT: Only allow skip if this is the current player's turn
        // Use playerIndex comparison instead of reference equality (more reliable)
        if (turnManager != null)
        {
            Player currentPlayer = turnManager.GetCurrentPlayer();
            if (currentPlayer == null || currentPlayer.playerIndex != this.playerIndex)
            {
                Debug.LogWarning($"Player {playerName} (index {playerIndex}): SkipAction called but it's not your turn! Current player: {(currentPlayer != null ? $"{currentPlayer.playerName} (index {currentPlayer.playerIndex})" : "null")}");
                return;
            }
        }
        
        // Get UI manager - use player's uiManager, or fall back to TurnManager's uiManager
        UIDocumentManager activeUIManager = uiManager;
        if (activeUIManager == null && turnManager != null)
        {
            activeUIManager = turnManager.uiManager;
        }
        
        if (activeUIManager != null)
        {
            activeUIManager.HidePropertyPanel();
        }
        
        // Get the property that was declined
        TileInfo tile = GetCurrentTile();
        bool startedAuction = false;
        if (tile != null && tile.property != null && tile.property.owner == null)
        {
            if (ValidatePurchasablePropertyData(tile.property, tile, "SkipAction"))
            {
                if (turnManager != null)
                    turnManager.ShowResultMessage($"{playerName} declined {tile.property.propertyName}.", isAI ? 1.0f : 1.5f);
                else if (activeUIManager != null)
                    activeUIManager.ShowResultNotification($"{playerName} declined {tile.property.propertyName}.", isAI ? 1.0f : 1.5f);
                AuctionSystem auctionSystem = FindFirstObjectByType<AuctionSystem>();
                if (auctionSystem != null)
                {
                    Debug.Log($"Player {playerName} declined to buy {tile.property.propertyName} - starting auction");
                    auctionSystem.StartAuction(tile.property, tile, this);
                    startedAuction = true;
                }
                else
                {
                    Debug.LogWarning("AuctionSystem not found! Property will remain unsold.");
                }
            }
            else
            {
                Debug.LogWarning($"Player {playerName}: Skipped invalid property tile without starting auction.");
            }
        }
        
        currentTile = null;
        IsAwaitingChoice = false;
        TurnDebugState.LogTurnAction("DecisionResolved", $"type=BuyOrSkip choice=Skip player={playerName}", setPhase: "ResolveTile", setInputEnabled: "None");
        
        // Only enable End Turn if we did NOT start an auction (auction keeps it disabled until it ends)
        if (!startedAuction && turnManager != null && turnManager.uiManager != null && turnManager.uiManager.EndTurnButton != null && !turnManager.uiManager.IsPropertyManagerPanelOpen)
        {
            turnManager.uiManager.EndTurnButton.Enabled = true;
            TurnDebugState.InputEnabled = "EndTurn";
        }
        
        Debug.Log($"Player {playerName}: SkipAction complete - IsAwaitingChoice: {IsAwaitingChoice}, startedAuction: {startedAuction}");
    }
    
    // --- Building System (Houses/Hotels) ---
    
    // Check if this player owns all properties in a group
    bool OwnsFullGroup(string groupId)
    {
        if (string.IsNullOrEmpty(groupId)) return false;
        
        // Find all tiles with this groupId
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        List<Property> groupProperties = new List<Property>();
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.groupId == groupId)
            {
                groupProperties.Add(tile.property);
            }
        }
        
        if (groupProperties.Count == 0) return false;
        
        // Check if this player owns ALL properties in the group
        foreach (Property prop in groupProperties)
        {
            if (prop.owner != this)
            {
                Debug.Log($"Don't own full group {groupId}: {prop.propertyName} is owned by {(prop.owner != null ? prop.owner.name : "nobody")}");
                return false;
            }
        }
        
        Debug.Log($"✓ Own full group {groupId} ({groupProperties.Count} properties)");
        return true;
    }
    
    // Check if can build evenly (Monopoly rule: difference between highest and lowest houses in group must be ≤ 1)
    bool CanBuildEvenly(Property targetProp)
    {
        if (targetProp == null || string.IsNullOrEmpty(targetProp.groupId)) return false;
        
        // Find all properties in the same group
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        List<Property> groupProperties = new List<Property>();
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.groupId == targetProp.groupId &&
                tile.property.owner == this)
            {
                groupProperties.Add(tile.property);
            }
        }
        
        if (groupProperties.Count == 0) return false;
        
        // Get current house counts (hotel = 5 for comparison)
        List<int> houseCounts = new List<int>();
        foreach (Property prop in groupProperties)
        {
            int count = prop.hasHotel ? 5 : prop.houses;
            houseCounts.Add(count);
        }
        
        // Find min and max
        int minHouses = Mathf.Min(houseCounts.ToArray());
        int maxHouses = Mathf.Max(houseCounts.ToArray());
        
        // Get target property's current count
        int targetCount = targetProp.hasHotel ? 5 : targetProp.houses;
        
        // Can build if: target is at min, or target is at max but min is only 1 less
        if (targetCount == minHouses)
        {
            // Can always build on the property with fewest houses
            return true;
        }
        else if (targetCount == maxHouses && (maxHouses - minHouses) <= 1)
        {
            // Can build if difference is ≤ 1 (even building rule)
            return true;
        }
        
        Debug.Log($"Cannot build evenly: target has {targetCount} houses, group range is {minHouses}-{maxHouses}");
        return false;
    }
    
    // Update build button state (called when landing on buildable property)
    // This method is now replaced by UpdateBuildButton() which is part of UpdateActionButtons()
    void ShowBuildUI(TileInfo tile)
    {
        // This method is kept for backward compatibility but now just calls UpdateBuildButton
        buildTile = tile;
        UpdateBuildButton();
    }
    
    // Check if can build a house on this property
    bool CanBuildHouse(Property prop)
    {
        if (prop == null) return false;
        if (prop.propertyType != PropertyType.Regular) return false; // Only regular properties can have houses
        if (prop.hasHotel) return false; // Can't build more houses if hotel exists
        if (prop.houses >= 4) return false; // Max 4 houses
        if (!OwnsFullGroup(prop.groupId)) return false; // Must own full group
        if (!CanBuildEvenly(prop)) return false; // Must follow even building rule
        return true;
    }
    
    // Check if can build hotel (requires 4 houses, no hotel yet)
    bool CanBuildHotel(Property prop)
    {
        if (prop == null) return false;
        if (prop.propertyType != PropertyType.Regular) return false; // Only regular properties can have hotels
        if (prop.isMortgaged) return false; // Can't build on mortgaged properties
        if (prop.hasHotel) return false; // Already has hotel
        if (HasFaultEffect(CharacterEffectKeys.SlowGrowth) && turnsTaken < 20) return false; // Slow Growth
        if (prop.houses < 4) return false; // Need 4 houses first
        if (!OwnsFullGroup(prop.groupId)) return false; // Must own full group (monopoly)
        
        // Check building supply
        BuildingSupplyManager supplyManager = BuildingSupplyManager.Instance;
        if (supplyManager != null && !supplyManager.CanBuildHotel())
        {
            return false; // Supply exhausted
        }
        
        return true;
    }

    int GetCharacterAdjustedBuildCost(Property prop, bool isHotel)
    {
        if (prop == null) return 0;

        int baseCost = isHotel ? prop.hotelCost : prop.houseCost;
        string tier = prop.tierLabel != null ? prop.tierLabel.ToLower() : "";
        float multiplier = 1f;

        if (!isHotel && HasCharacterEffect(CharacterEffectKeys.SatelliteBuildDiscount) && tier == "satellite")
            multiplier *= 0.8f;

        if (HasCharacterEffect(CharacterEffectKeys.PrimeBuildDiscount) && tier == "prime")
            multiplier *= 0.9f;

        return Mathf.RoundToInt(baseCost * multiplier);
    }
    
    // Build house (or hotel if 4 houses already)
    public void BuildHouse()
    {
        // Use current tile (player's current position)
        TileInfo tile = GetCurrentTile();
        if (tile == null || tile.property == null)
        {
            Debug.LogWarning("BuildHouse: No property at current location!");
            return;
        }
        
        Property prop = tile.property;
        
        if (prop.owner != this)
        {
            Debug.LogWarning("BuildHouse: You don't own this property!");
            return;
        }
        
        // Can't build on mortgaged properties
        if (prop.isMortgaged)
        {
            Debug.LogWarning("BuildHouse: Cannot build on mortgaged properties!");
            return;
        }
        
        // Check if can build hotel (4 houses already)
        if (CanBuildHotel(prop))
        {
            BuildHotel(prop, tile);
            return;
        }
        
        // Otherwise build house
        if (!CanBuildHouse(prop))
        {
            Debug.LogWarning($"Cannot build house on {prop.propertyName}!");
            return;
        }

        PerkCardInstance buildCard = GetPerkCard(PerkCardType.BuildDiscount);
        int normalCost = GetCharacterAdjustedBuildCost(prop, false);
        int discountedCost = buildCard != null ? Mathf.RoundToInt(normalCost * (1f - buildCard.percentValue)) : normalCost;

        if (buildCard != null && !isAI)
        {
            ShowPerkChoice(
                "Build Discount",
                $"Build house for ₦{discountedCost:N0} instead of ₦{normalCost:N0}?",
                "PAY FULL",
                "USE CARD",
                () => TryBuildHouseWithCost(prop, tile, normalCost),
                () =>
                {
                    ConsumePerkCard(buildCard);
                    GameLogger.Log($"PERK_BUILD_DISCOUNT | player={playerName} uses_left={buildCard.usesRemaining}");
                    Debug.Log(buildCard.sideJoke);
                    TryBuildHouseWithCost(prop, tile, discountedCost);
                }
            );
            return;
        }

        if (buildCard != null && isAI && normalCost >= 100000)
        {
            ConsumePerkCard(buildCard);
            GameLogger.Log($"PERK_BUILD_DISCOUNT | player={playerName} uses_left={buildCard.usesRemaining}");
            Debug.Log(buildCard.sideJoke);
            TryBuildHouseWithCost(prop, tile, discountedCost);
            return;
        }

        TryBuildHouseWithCost(prop, tile, normalCost);
    }

    /// <summary>Build house or hotel on a specific property (e.g. from Property Manager panel). Finds tile from property.</summary>
    public void BuildHouse(Property prop)
    {
        if (prop == null) return;
        if (prop.owner != this) { Debug.LogWarning("BuildHouse(prop): You don't own this property!"); return; }
        TileInfo tile = GetTileForProperty(prop);
        if (tile == null) { Debug.LogWarning("BuildHouse(prop): No tile found for property!"); return; }
        if (prop.isMortgaged) { Debug.LogWarning("BuildHouse(prop): Cannot build on mortgaged property!"); return; }
        if (CanBuildHotel(prop)) { BuildHotel(prop, tile); return; }
        if (!CanBuildHouse(prop)) { Debug.LogWarning($"BuildHouse(prop): Cannot build on {prop.propertyName}!"); return; }
        PerkCardInstance buildCard = GetPerkCard(PerkCardType.BuildDiscount);
        int normalCost = GetCharacterAdjustedBuildCost(prop, false);
        int discountedCost = buildCard != null ? Mathf.RoundToInt(normalCost * (1f - buildCard.percentValue)) : normalCost;
        if (buildCard != null && !isAI)
        {
            ShowPerkChoice("Build Discount", $"Build house for ₦{discountedCost:N0} instead of ₦{normalCost:N0}?", "PAY FULL", "USE CARD",
                () => TryBuildHouseWithCost(prop, tile, normalCost),
                () => { ConsumePerkCard(buildCard); GameLogger.Log($"PERK_BUILD_DISCOUNT | player={playerName}"); TryBuildHouseWithCost(prop, tile, discountedCost); });
            return;
        }
        if (buildCard != null && isAI && normalCost >= 100000) { ConsumePerkCard(buildCard); TryBuildHouseWithCost(prop, tile, discountedCost); return; }
        TryBuildHouseWithCost(prop, tile, normalCost);
    }

    // Build hotel (automatically called when 4 houses exist)
    void BuildHotel(Property prop, TileInfo tile)
    {
        if (prop == null || tile == null) return;
        
        if (!CanBuildHotel(prop))
        {
            Debug.LogWarning($"Cannot build hotel on {prop.propertyName}!");
            return;
        }

        PerkCardInstance buildCard = GetPerkCard(PerkCardType.BuildDiscount);
        int normalCost = GetCharacterAdjustedBuildCost(prop, true);
        int discountedCost = buildCard != null ? Mathf.RoundToInt(normalCost * (1f - buildCard.percentValue)) : normalCost;

        if (buildCard != null && !isAI)
        {
            ShowPerkChoice(
                "Build Discount",
                $"Build hotel for ₦{discountedCost:N0} instead of ₦{normalCost:N0}?",
                "PAY FULL",
                "USE CARD",
                () => TryBuildHotelWithCost(prop, tile, normalCost),
                () =>
                {
                    ConsumePerkCard(buildCard);
                    GameLogger.Log($"PERK_BUILD_DISCOUNT | player={playerName} uses_left={buildCard.usesRemaining}");
                    Debug.Log(buildCard.sideJoke);
                    TryBuildHotelWithCost(prop, tile, discountedCost);
                }
            );
            return;
        }

        if (buildCard != null && isAI && normalCost >= 150000)
        {
            ConsumePerkCard(buildCard);
            GameLogger.Log($"PERK_BUILD_DISCOUNT | player={playerName} uses_left={buildCard.usesRemaining}");
            Debug.Log(buildCard.sideJoke);
            TryBuildHotelWithCost(prop, tile, discountedCost);
            return;
        }

        TryBuildHotelWithCost(prop, tile, normalCost);
    }

    bool TryBuildHouseWithCost(Property prop, TileInfo tile, int cost)
    {
        if (!CanAfford(cost))
        {
            Debug.LogWarning($"Cannot afford house (₦{cost:N0})!");
            return false;
        }

        if (!CanBuildEvenly(prop))
        {
            Debug.LogWarning($"Cannot build evenly on {prop.propertyName}!");
            return false;
        }

        BuildingSupplyManager supplyManager = BuildingSupplyManager.Instance;
        if (supplyManager != null && !supplyManager.CanBuildHouse())
        {
            Debug.LogWarning("Cannot build house - supply exhausted!");
            if (uiManager != null && uiManager.PropertyText != null)
            {
                uiManager.PropertyText.text = "Cannot build - house supply exhausted!";
            }
            return false;
        }

        if (TrySpend(cost))
        {
            if (supplyManager != null)
            {
                if (!supplyManager.BuildHouse())
                {
                    AddMoney(cost);
                    return false;
                }
            }

            prop.houses++;
            Debug.Log($"✓ Built house {prop.houses}/4 on {prop.propertyName} for ₦{cost:N0}!");
            Debug.Log($"  New rent: ₦{prop.CurrentRent:N0}");

            if (NarrativeManager.Instance != null)
            {
                NarrativeManager.Instance.OnHouseBuilt(this, prop, false);
            }

            if (GameSoundManager.Instance != null)
            {
                GameSoundManager.Instance.PlayBuyHouse();
                GameSoundManager.Instance.NotifyActivity();
            }

            BuildingVisualsManager.UpdateTileVisuals(tile);
            UpdateActionButtons();
            return true;
        }
        return false;
    }

    bool TryBuildHotelWithCost(Property prop, TileInfo tile, int cost)
    {
        if (!CanAfford(cost))
        {
            Debug.LogWarning($"Cannot afford hotel (₦{cost:N0})!");
            return false;
        }

        BuildingSupplyManager supplyManager = BuildingSupplyManager.Instance;
        if (supplyManager != null && !supplyManager.CanBuildHotel())
        {
            Debug.LogWarning("Cannot build hotel - supply exhausted!");
            if (uiManager != null && uiManager.PropertyText != null)
            {
                uiManager.PropertyText.text = "Cannot build - hotel supply exhausted!";
            }
            return false;
        }

        if (TrySpend(cost))
        {
            if (supplyManager != null)
            {
                if (!supplyManager.BuildHotel())
                {
                    AddMoney(cost);
                    return false;
                }
            }

            prop.houses = 0;
            prop.hasHotel = true;
            Debug.Log($"✓ Built HOTEL on {prop.propertyName} for ₦{cost:N0}!");
            Debug.Log($"  New rent: ₦{prop.CurrentRent:N0}");

            if (NarrativeManager.Instance != null)
            {
                NarrativeManager.Instance.OnHouseBuilt(this, prop, true);
            }

            if (GameSoundManager.Instance != null)
            {
                GameSoundManager.Instance.PlayBuyHouse();
                GameSoundManager.Instance.NotifyActivity();
            }

            BuildingVisualsManager.UpdateTileVisuals(tile);
            UpdateActionButtons();
            return true;
        }
        return false;
    }
    
    // Hide build UI (disable build button)
    public void HideBuildUI()
    {
        if (uiManager != null && uiManager.BuildButton != null)
        {
            uiManager.BuildButton.Enabled = false;
            uiManager.BuildButton.Text = "BUILD"; // Reset to default text
        }
        
        buildTile = null; // Clear build tile, not currentTile
        IsAwaitingChoice = false; // Allow turn to end
    }
    
    // Update all action buttons based on current game state
    public void UpdateActionButtons()
    {
        if (uiManager == null) return;
        
        UpdateBuildButton();
        UpdateSellButton();
        UpdateMortgageButton();
        UpdateRedeemButton();
    }
    
    // Update BUILD button state
    void UpdateBuildButton()
    {
        if (uiManager.BuildButton == null) return;
        
        // Get current tile (where player is standing)
        TileInfo currentTileInfo = GetCurrentTile();
        
        if (currentTileInfo == null || currentTileInfo.property == null)
        {
            uiManager.BuildButton.Enabled = false;
            uiManager.BuildButton.Text = "BUILD";
            return;
        }
        
        Property prop = currentTileInfo.property;
        
        // Can only build on own properties
        if (prop.owner != this)
        {
            uiManager.BuildButton.Enabled = false;
            uiManager.BuildButton.Text = "BUILD";
            return;
        }
        
        // Can't build on mortgaged properties
        if (prop.isMortgaged)
        {
            uiManager.BuildButton.Enabled = false;
            uiManager.BuildButton.Text = "MORTGAGED";
            return;
        }
        
        // Can only build on Regular properties
        if (prop.propertyType != PropertyType.Regular)
        {
            uiManager.BuildButton.Enabled = false;
            uiManager.BuildButton.Text = "CAN'T BUILD";
            return;
        }
        
        // Must own full group (monopoly)
        if (!OwnsFullGroup(prop.groupId))
        {
            uiManager.BuildButton.Enabled = false;
            uiManager.BuildButton.Text = "NO MONOPOLY";
            return;
        }
        
        // Check if can build house or hotel
        bool canBuildHouse = CanBuildHouse(prop);
        bool canBuildHotel = CanBuildHotel(prop);
        
        if (canBuildHotel)
        {
            int cost = GetCharacterAdjustedBuildCost(prop, true);
            uiManager.BuildButton.Text = $"BUILD HOTEL\n₦{cost:N0}";
            uiManager.BuildButton.SetEnabled(CanAfford(cost));
        }
        else if (canBuildHouse)
        {
            int nextHouseCount = prop.houses + 1;
            int cost = GetCharacterAdjustedBuildCost(prop, false);
            uiManager.BuildButton.Text = $"BUILD HOUSE {nextHouseCount}/4\n₦{cost:N0}";
            uiManager.BuildButton.Enabled = CanAfford(cost) && CanBuildEvenly(prop);
        }
        else
        {
            uiManager.BuildButton.Enabled = false;
            if (prop.hasHotel)
                uiManager.BuildButton.Text = "HOTEL BUILT";
            else
                uiManager.BuildButton.Text = "CAN'T BUILD";
        }
        
        // Store current tile for reference (not used in building logic, but kept for compatibility)
        buildTile = currentTileInfo;
    }
    
    // Update SELL button state
    void UpdateSellButton()
    {
        if (uiManager.SellButton == null) return;
        
        // Check if player has any properties with houses/hotels to sell
        bool hasBuildingsToSell = HasBuildingsToSell();
        
        if (hasBuildingsToSell)
        {
            uiManager.SellButton.Enabled = true;
            uiManager.SellButton.Text = "SELL";
        }
        else
        {
            uiManager.SellButton.Enabled = false;
            uiManager.SellButton.Text = "SELL";
        }
    }
    
    // Update MORTGAGE button state
    void UpdateMortgageButton()
    {
        if (uiManager.MortgageButton == null) return;
        
        // Use selected tile from tile details (if any)
        TileInfo currentTileInfo = uiManager != null ? uiManager.CurrentTileDetails : null;
        
        if (currentTileInfo == null || currentTileInfo.property == null)
        {
            uiManager.MortgageButton.SetEnabled(false);
            uiManager.MortgageButton.Text = "SELECT TILE";
            return;
        }
        
        Property prop = currentTileInfo.property;
        
        // Can only mortgage own properties
        if (prop.owner != this)
        {
            uiManager.MortgageButton.SetEnabled(false);
            uiManager.MortgageButton.Text = "MORTGAGE";
            return;
        }
        
        // Can't mortgage if already mortgaged
        if (prop.isMortgaged)
        {
            uiManager.MortgageButton.SetEnabled(false);
            uiManager.MortgageButton.Text = "MORTGAGED";
            return;
        }
        
        // Can't mortgage if has buildings (must sell buildings first)
        if (prop.houses > 0 || prop.hasHotel)
        {
            uiManager.MortgageButton.SetEnabled(false);
            uiManager.MortgageButton.Text = "SELL BUILDINGS";
            return;
        }
        
        // Can mortgage
        int mortgageValue = prop.price / 2;
        uiManager.MortgageButton.SetEnabled(true);
        uiManager.MortgageButton.Text = $"MORTGAGE\n₦{mortgageValue:N0}";
    }
    
    // Update REDEEM button state
    void UpdateRedeemButton()
    {
        if (uiManager.RedeemButton == null) return;
        
        // Use selected tile from tile details (if any)
        TileInfo currentTileInfo = uiManager != null ? uiManager.CurrentTileDetails : null;
        
        if (currentTileInfo == null || currentTileInfo.property == null)
        {
            uiManager.RedeemButton.SetEnabled(false);
            uiManager.RedeemButton.Text = "SELECT TILE";
            return;
        }
        
        Property prop = currentTileInfo.property;
        
        // Can only redeem own properties
        if (prop.owner != this)
        {
            uiManager.RedeemButton.SetEnabled(false);
            uiManager.RedeemButton.Text = "REDEEM";
            return;
        }
        
        // Can only redeem if mortgaged
        if (!prop.isMortgaged)
        {
            uiManager.RedeemButton.SetEnabled(false);
            uiManager.RedeemButton.Text = "REDEEM";
            return;
        }
        
        // Check if can afford redemption cost (50% + 10% = 60% of property value)
        int redemptionCost = (int)(prop.price * 0.6f);
        bool canAfford = CanAfford(redemptionCost);
        
        uiManager.RedeemButton.SetEnabled(canAfford);
        uiManager.RedeemButton.Text = canAfford ? $"REDEEM\n₦{redemptionCost:N0}" : "CAN'T AFFORD";
    }
    
    /// <summary>Ensure boardPoints is set from TurnManager if still null (e.g. when players are created at runtime).</summary>
    void EnsureBoardPoints()
    {
        if (boardPoints != null && boardPoints.Length > 0) return;
        if (turnManager == null) return;
        Transform[] path = turnManager.boardPath != null && turnManager.boardPath.Length > 0
            ? turnManager.boardPath
            : turnManager.BuildBoardPathFromScenePublic();
        if (path != null && path.Length > 0)
            boardPoints = path;
    }
    
    // Get the tile the player is currently on
    TileInfo GetCurrentTile()
    {
        EnsureBoardPoints();
        if (boardPoints == null || currentIndex < 0 || currentIndex >= boardPoints.Length)
            return null;
        Transform point = boardPoints[currentIndex];
        if (point == null)
            return null;
        return point.GetComponent<TileInfo>();
    }

    public TileInfo GetCurrentTileInfo()
    {
        return GetCurrentTile();
    }

    /// <summary>Returns all tiles that have a property owned by this player. Used by Property Manager panel.</summary>
    public List<TileInfo> GetOwnedPropertyTiles()
    {
        var list = new List<TileInfo>();
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        if (allTiles == null) return list;
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && tile.property != null && tile.property.owner == this)
                list.Add(tile);
        }
        return list;
    }

    /// <summary>Find the TileInfo that holds the given property (for building visuals and panel).</summary>
    public static TileInfo GetTileForProperty(Property prop)
    {
        if (prop == null) return null;
        TileInfo[] allTiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo t in allTiles)
        {
            if (t.property == prop) return t;
        }
        return null;
    }

    // Check if player has any properties with buildings to sell
    bool HasBuildingsToSell()
    {
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == this &&
                tile.property.propertyType == PropertyType.Regular &&
                !tile.property.isMortgaged)
            {
                if (tile.property.houses > 0 || tile.property.hasHotel)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    // --- Property Actions (Mortgage, Redeem, Sell) ---
    
    /// <summary>
    /// Mortgage the property the player is currently on.
    /// </summary>
    public void MortgageProperty()
    {
        TileInfo tile = GetCurrentTile();
        if (tile == null || tile.property == null)
        {
            Debug.LogWarning("MortgageProperty: No property at current location!");
            return;
        }
        
        MortgageProperty(tile.property);
    }

    /// <summary>
    /// Mortgage a specific property (not tied to current tile).
    /// </summary>
    public bool MortgageProperty(Property prop)
    {
        if (prop == null)
        {
            Debug.LogWarning("MortgageProperty: Property is null!");
            return false;
        }
        
        // Validation
        if (prop.owner != this)
        {
            Debug.LogWarning("MortgageProperty: You don't own this property!");
            return false;
        }
        
        if (prop.isMortgaged)
        {
            Debug.LogWarning("MortgageProperty: Property is already mortgaged!");
            return false;
        }
        
        if (prop.houses > 0 || prop.hasHotel)
        {
            Debug.LogWarning("MortgageProperty: Must sell all buildings before mortgaging!");
            return false;
        }

        if (HasFaultEffect(CharacterEffectKeys.LimitedLeverage) && mortgagesThisTurn >= 1)
        {
            Debug.LogWarning("Limited Leverage: Can only mortgage one property per turn.");
            return false;
        }

        PerkCardInstance mortgageCard = GetPerkCard(PerkCardType.MortgageBoost);
        int baseValue = prop.price / 2;
        int boostedValue = mortgageCard != null ? baseValue + Mathf.RoundToInt(baseValue * mortgageCard.percentValue) : baseValue;

        if (mortgageCard != null && !isAI)
        {
            ShowPerkChoice(
                "Mortgage Boost",
                $"Mortgage for ₦{boostedValue:N0} instead of ₦{baseValue:N0}?",
                "MORTGAGE",
                "USE CARD",
                () => ApplyMortgage(prop, baseValue),
                () =>
                {
                    ConsumePerkCard(mortgageCard);
                    GameLogger.Log($"PERK_MORTGAGE_BOOST | player={playerName} uses_left={mortgageCard.usesRemaining}");
                    Debug.Log(mortgageCard.sideJoke);
                    ApplyMortgage(prop, boostedValue);
                }
            );
            return false;
        }

        if (mortgageCard != null && isAI && baseValue >= 100000)
        {
            ConsumePerkCard(mortgageCard);
            GameLogger.Log($"PERK_MORTGAGE_BOOST | player={playerName} uses_left={mortgageCard.usesRemaining}");
            Debug.Log(mortgageCard.sideJoke);
            return ApplyMortgage(prop, boostedValue);
        }

        return ApplyMortgage(prop, baseValue);
    }

    bool ApplyMortgage(Property prop, int value)
    {
        AddMoney(value);
        mortgagesThisTurn++;
        prop.isMortgaged = true;
        Debug.Log($"✓ Mortgaged {prop.propertyName} for ₦{value:N0}");
        UpdateActionButtons();
        return true;
    }
    
    /// <summary>
    /// Redeem (unmortgage) the property the player is currently on.
    /// </summary>
    public void RedeemProperty()
    {
        TileInfo tile = GetCurrentTile();
        if (tile == null || tile.property == null)
        {
            Debug.LogWarning("RedeemProperty: No property at current location!");
            return;
        }
        
        RedeemProperty(tile.property);
    }

    /// <summary>
    /// Redeem a specific property (not tied to current tile).
    /// </summary>
    public bool RedeemProperty(Property prop)
    {
        if (prop == null)
        {
            Debug.LogWarning("RedeemProperty: Property is null!");
            return false;
        }
        
        // Validation
        if (prop.owner != this)
        {
            Debug.LogWarning("RedeemProperty: You don't own this property!");
            return false;
        }
        
        if (!prop.isMortgaged)
        {
            Debug.LogWarning("RedeemProperty: Property is not mortgaged!");
            return false;
        }
        
        float redemptionRate = 0.6f;
        if (HasFaultEffect(CharacterEffectKeys.CreditTrustOneTime))
            redemptionRate += 0.1f;

        if (HasCharacterEffect(CharacterEffectKeys.CreditTrustOneTime) && !creditTrustUsed)
            redemptionRate = 0.5f;

        int redemptionCost = Mathf.RoundToInt(prop.price * redemptionRate);
        
        if (!CanAfford(redemptionCost))
        {
            Debug.LogWarning($"RedeemProperty: Cannot afford redemption cost of ₦{redemptionCost:N0}!");
            return false;
        }
        
        // Redeem the property
        if (TrySpend(redemptionCost))
        {
            prop.isMortgaged = false;
            if (HasCharacterEffect(CharacterEffectKeys.CreditTrustOneTime) && !creditTrustUsed && Mathf.Abs(redemptionRate - 0.5f) < 0.001f)
            {
                creditTrustUsed = true;
            }
            Debug.Log($"✓ Redeemed {prop.propertyName} for ₦{redemptionCost:N0}");
        }
        
        // Update buttons
        UpdateActionButtons();
        return true;
    }
    
    /// <summary>
    /// Show sell UI (for selling houses/hotels).
    /// TODO: Create property selection UI for selling.
    /// </summary>
    public void ShowSellUI()
    {
        // For now, sell from current property if it has buildings
        TileInfo tile = GetCurrentTile();
        if (tile == null || tile.property == null)
        {
            Debug.LogWarning("ShowSellUI: No property at current location!");
            return;
        }
        
        Property prop = tile.property;
        
        // Validation
        if (prop.owner != this)
        {
            Debug.LogWarning("ShowSellUI: You don't own this property!");
            return;
        }
        
        if (prop.propertyType != PropertyType.Regular)
        {
            Debug.LogWarning("ShowSellUI: Can only sell buildings on Regular properties!");
            return;
        }
        
        if (prop.isMortgaged)
        {
            Debug.LogWarning("ShowSellUI: Can't sell buildings on mortgaged properties!");
            return;
        }
        
        // Sell hotel first if exists
        if (prop.hasHotel)
        {
            SellHotel(prop, tile);
        }
        // Otherwise sell house if exists
        else if (prop.houses > 0)
        {
            SellHouse(prop, tile);
        }
        else
        {
            Debug.LogWarning("ShowSellUI: No buildings to sell on this property!");
        }
        
        // Update buttons
        UpdateActionButtons();
    }

    /// <summary>Show sell flow for a specific property (e.g. from Property Manager panel).</summary>
    public void ShowSellUI(Property prop)
    {
        if (prop == null) return;
        if (prop.owner != this) { Debug.LogWarning("ShowSellUI(prop): You don't own this property!"); return; }
        if (prop.propertyType != PropertyType.Regular) { Debug.LogWarning("ShowSellUI(prop): Can only sell buildings on Regular properties!"); return; }
        if (prop.isMortgaged) { Debug.LogWarning("ShowSellUI(prop): Can't sell buildings on mortgaged properties!"); return; }
        TileInfo tile = GetTileForProperty(prop);
        if (tile == null) { Debug.LogWarning("ShowSellUI(prop): No tile found for property!"); return; }
        if (prop.hasHotel) SellHotel(prop, tile);
        else if (prop.houses > 0) SellHouse(prop, tile);
        else { Debug.LogWarning("ShowSellUI(prop): No buildings to sell on this property!"); return; }
        UpdateActionButtons();
    }

    /// <summary>
    /// Sell a house from a property (returns 50% of cost).
    /// </summary>
    void SellHouse(Property prop, TileInfo tile)
    {
        if (prop == null || prop.houses == 0) return;
        
        // Check if selling would violate even building rule
        if (!CanSellEvenly(prop))
        {
            Debug.LogWarning("SellHouse: Cannot sell - would violate even building rule!");
            return;
        }
        
        // Sell house (normally 50% of cost; Hustler gets 60%)
        float sellPercent = HasCharacterEffect(CharacterEffectKeys.SatelliteBuildDiscount) ? 0.6f : 0.5f;
        int sellValue = Mathf.RoundToInt(prop.houseCost * sellPercent);
        prop.houses--;
        AddMoney(sellValue);
        
        // Return house to supply
        BuildingSupplyManager supplyManager = BuildingSupplyManager.Instance;
        if (supplyManager != null)
        {
            supplyManager.SellHouse();
        }
        
        Debug.Log($"✓ Sold house on {prop.propertyName} for ₦{sellValue:N0} (50% of cost)");
        
        // Update building visuals
        BuildingVisualsManager.UpdateTileVisuals(tile);
        
        // Refresh buttons
        UpdateActionButtons();
    }
    
    /// <summary>
    /// Sell a hotel from a property (returns 50% of cost, get 4 houses back).
    /// </summary>
    void SellHotel(Property prop, TileInfo tile)
    {
        if (prop == null || !prop.hasHotel) return;
        
        // Sell hotel (get 50% of cost back, houses return to bank)
        int sellValue = prop.hotelCost / 2;
        prop.hasHotel = false;
        prop.houses = 4; // Houses return to bank
        
        // Return hotel and houses to supply
        BuildingSupplyManager supplyManager = BuildingSupplyManager.Instance;
        if (supplyManager != null)
        {
            supplyManager.SellHotel();
        }
        
        AddMoney(sellValue);
        
        Debug.Log($"✓ Sold hotel on {prop.propertyName} for ₦{sellValue:N0} (50% of cost). 4 houses returned to bank.");
        
        // Update building visuals
        BuildingVisualsManager.UpdateTileVisuals(tile);
        
        // Refresh buttons
        UpdateActionButtons();
        
        // Update building visuals
        BuildingVisualsManager.UpdateTileVisuals(tile);
    }
    
    /// <summary>
    /// Check if can sell building without violating even building rule.
    /// </summary>
    bool CanSellEvenly(Property targetProp)
    {
        if (targetProp == null || string.IsNullOrEmpty(targetProp.groupId)) return false;
        
        // Find all properties in the same group
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        List<Property> groupProperties = new List<Property>();
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.groupId == targetProp.groupId &&
                tile.property.owner == this)
            {
                groupProperties.Add(tile.property);
            }
        }
        
        if (groupProperties.Count == 0) return false;
        
        // Get current house counts (hotel = 5 for comparison)
        List<int> houseCounts = new List<int>();
        foreach (Property prop in groupProperties)
        {
            int count = prop.hasHotel ? 5 : prop.houses;
            houseCounts.Add(count);
        }
        
        // Find min and max
        int minHouses = Mathf.Min(houseCounts.ToArray());
        int maxHouses = Mathf.Max(houseCounts.ToArray());
        
        // Get target property's current count
        int targetCount = targetProp.hasHotel ? 5 : targetProp.houses;
        
        // Can sell if: target is at max, or difference would still be ≤ 1 after selling
        if (targetCount == maxHouses)
        {
            // Can sell from property with most houses
            return true;
        }
        else if (targetCount == minHouses && (maxHouses - minHouses) <= 1)
        {
            // Can sell if difference is ≤ 1 (even building rule)
            return true;
        }
        
        Debug.Log($"Cannot sell evenly: target has {targetCount} houses, group range is {minHouses}-{maxHouses}");
        return false;
    }
    
    // --- Chance / Community Chest Card System ---
    
    void HandleChanceEvent()
    {
        Debug.Log($"[GameMechanics] Landed on Chance - player={playerName}");
        if (cardSystem == null)
        {
            Debug.LogError("[GameMechanics] FAIL: Chance card not shown - CardSystem not assigned to Player! Using fallback.");
            int gain = Random.Range(50000, 201000);
            AddMoney(gain);
            Debug.Log($"You won a beauty contest! Collect ₦{gain:N0}.");
            return;
        }
        
        Card card = cardSystem.DrawCard(CardDeckType.Chance);
        Debug.Log($"=== CHANCE CARD: {card.title} ===");
        Debug.Log($"Description: {card.description}");
        
        StartCoroutine(HandleCard(card, CardDeckType.Chance));
    }
    
    void HandleCommunityChestEvent()
    {
        Debug.Log($"[GameMechanics] Landed on Community Chest - player={playerName}");
        if (cardSystem == null)
        {
            Debug.LogError("[GameMechanics] FAIL: Community Chest card not shown - CardSystem not assigned to Player! Using fallback.");
            AddMoney(200000);
            Debug.Log("Bank error in your favor. Collect ₦200,000.");
            return;
        }
        
        Card card = cardSystem.DrawCard(CardDeckType.CommunityChest);
        Debug.Log($"=== COMMUNITY CHEST CARD: {card.title} ===");
        Debug.Log($"Description: {card.description}");
        
        StartCoroutine(HandleCard(card, CardDeckType.CommunityChest));
    }
    
    IEnumerator HandleCard(Card card, CardDeckType deckType)
    {
        if (isAI)
        {
            // AI never opens interactive card popups.
            if (turnManager != null)
                turnManager.ShowResultMessage($"{playerName} drew: {card.title}", 1.2f);
            else if (uiManager != null)
                uiManager.ShowResultNotification($"{playerName} drew: {card.title}", 1.2f);
            IsAwaitingChoice = false;
            yield return new WaitForSeconds(0.8f);
        }
        else
        {
            // Human path: show card UI and wait for Continue.
            ShowCardUI(card, deckType);
            IsAwaitingChoice = true;
            // Wait for human player to click OK button
            while (IsAwaitingChoice)
            {
                yield return null;
            }
        }
        
        // Apply card effect after player confirms (or after AI auto-close)
        yield return StartCoroutine(ApplyCardEffect(card, deckType));
        Debug.Log($"[Card Visuals] Card effect applied: \"{card.title}\" (player={playerName}).");
    }
    
    IEnumerator AutoCloseCardForAI(float delaySeconds)
    {
        yield return new WaitForSeconds(delaySeconds);
        OnCardOkClicked();
    }
    
    void ShowCardUI(Card card, CardDeckType deckType)
    {
        if (uiManager == null)
        {
            Debug.LogError("[GameMechanics] FAIL: Chance/Community Chest card not shown - uiManager is null on Player. Landed player=" + playerName);
            return;
        }
        if (isAI) return;
        uiManager.ShowCard(card, deckType, OnCardOkClicked);
        IsAwaitingChoice = true;
        TurnDebugState.LogTurnAction("DecisionShown", $"type=CardContinue player={playerName} card={card.title}", setPhase: "AwaitAck", setInputEnabled: "OK");
    }
    
    void OnCardOkClicked()
    {
        TurnDebugState.LogTurnAction("DecisionResolved", $"type=CardContinue player={playerName}", setPhase: "ResolveTile", setInputEnabled: "None");
        if (uiManager != null)
        {
            uiManager.HideCardPanel();
        }
        IsAwaitingChoice = false;
    }
    
    IEnumerator ApplyCardEffect(Card card, CardDeckType deckType)
    {
        switch (card.type)
        {
            case CardType.Money:
                ApplyMoneyCard(card, deckType);
                break;
                
            case CardType.Movement:
                yield return StartCoroutine(ApplyMovementCard(card));
                break;
                
            case CardType.PropertyRepair:
                ApplyPropertyRepairCard(card);
                break;
                
            case CardType.Special:
                ApplySpecialCard(card, deckType);
            break;
        }
    }
    
    void ApplyMoneyCard(Card card, CardDeckType deckType)
    {
        int amount = card.moneyAmount;

        if (deckType == CardDeckType.CommunityChest && HasFaultEffect(CharacterEffectKeys.NoSafetyNet) && turnsTaken < 10 && amount > 0)
        {
            Debug.Log("No Safety Net: Community Chest rewards blocked until Turn 10.");
            GameLogger.Log($"PERK_NO_SAFETY_NET | player={playerName} turn={turnsTaken} blocked_amount={amount}");
            return;
        }
        
        // Special handling for "pay all players" or "collect from all players"
        if (card.title.Contains("each player") || card.title.Contains("Pay each player"))
        {
            // Get all other players
            Player[] allPlayers = FindObjectsByType<Player>(FindObjectsSortMode.None);
            int otherPlayersCount = 0;
            
            foreach (Player p in allPlayers)
            {
                if (p != this && p != null)
                {
                    otherPlayersCount++;
                    if (amount > 0)
                    {
                        // Collect from each player
                        if (p.TrySpend(Mathf.Abs(amount)))
                        {
                            AddMoney(Mathf.Abs(amount));
                        }
                    }
                    else
                    {
                        // Pay each player
                        if (TrySpend(Mathf.Abs(amount)))
                        {
                            p.AddMoney(Mathf.Abs(amount));
                        }
                    }
                }
            }
            
            if (amount > 0)
                Debug.Log($"Collected ₦{Mathf.Abs(amount):N0} from {otherPlayersCount} player(s).");
            else
                Debug.Log($"Paid ₦{Mathf.Abs(amount):N0} to {otherPlayersCount} player(s).");
        }
        else
        {
            // Normal money card
            if (amount > 0)
            {
                AddMoney(amount);
                Debug.Log($"Received ₦{amount:N0}.");
            }
            else
            {
                TrySpend(Mathf.Abs(amount));
                Debug.Log($"Paid ₦{Mathf.Abs(amount):N0}.");
            }
        }
    }
    
    IEnumerator ApplyMovementCard(Card card)
    {
        if (card.isGoToJail)
        {
            HandleGoToJail();
            yield break;
        }
        
        // Find target tile
        int targetIndex = -1;
        
        if (card.targetTile == TileType.Go)
        {
            // Find GO tile
            targetIndex = FindTileIndexByType(TileType.Go);
        }
        else if (!string.IsNullOrEmpty(card.targetPropertyName))
        {
            // Find property by name
            targetIndex = FindPropertyTileIndex(card.targetPropertyName);
        }
        else if (card.targetTile == TileType.Property && card.title.Contains("Nearest Utility"))
        {
            // Find nearest utility
            targetIndex = FindNearestUtilityTile();
        }
        else if (card.targetTile == TileType.Property && card.title.Contains("Nearest Transportation"))
        {
            // Find nearest transportation
            targetIndex = FindNearestTransportationTile();
        }
        else if (card.moveSpaces != 0)
        {
            // Move X spaces forward/backward
            targetIndex = (currentIndex + card.moveSpaces + boardPoints.Length) % boardPoints.Length;
        }
        
        if (targetIndex == -1)
        {
            if (card.title.Contains("Nearest Utility"))
                Debug.LogWarning($"Advance to Nearest Utility: No Utility tile found on board. Run 'Assign Abuja Places to Properties' and ensure tiles named 'Utility' exist.");
            else if (card.title.Contains("Nearest Transportation"))
                Debug.LogWarning($"Advance to Nearest Transportation: No Transportation tile found. Run 'Assign Abuja Places to Properties' and ensure tiles named 'Transport' exist.");
            else
                Debug.LogWarning($"Could not find target for movement card: {card.title}");
            yield break;
        }

        // Movement contract:
        // - "Go to"/"Advance to" moves FORWARD along board tiles.
        // - Only explicit "Go Back"/negative spaces moves BACKWARD.
        // - GO salary is awarded only when moving forward and card allows pass-GO payout.
        bool moveBackward = card.moveSpaces < 0 || card.title.Contains("Go Back");
        bool allowPassGoSalary = !moveBackward && CardAllowsPassGoSalary(card);
        yield return MoveToTile(targetIndex, moveBackward, allowPassGoSalary);
        
        // Trigger tile action at destination
        TileInfo targetTile = boardPoints[targetIndex].GetComponent<TileInfo>();
        if (targetTile != null)
        {
            // Special handling for utility/transportation cards
            if (card.title.Contains("Nearest Utility") || card.title.Contains("Nearest Transportation"))
            {
                HandleUtilityTransportationCard(targetTile, card);
            }
            else
            {
                TriggerTileAction(targetTile);
            }
        }
    }
    
    void ApplyPropertyRepairCard(Card card)
    {
        int totalCost = 0;
        int housesCount = 0;
        int hotelsCount = 0;
        
        // Count all houses and hotels owned by this player
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.owner == this &&
                tile.property.propertyType == PropertyType.Regular)
            {
                if (tile.property.hasHotel)
                {
                    hotelsCount++;
                    totalCost += card.hotelCost;
                }
                else
                {
                    housesCount += tile.property.houses;
                    totalCost += tile.property.houses * card.houseCost;
                }
            }
        }
        
        Debug.Log($"Property repair: {housesCount} houses × ₦{card.houseCost:N0} + {hotelsCount} hotels × ₦{card.hotelCost:N0} = ₦{totalCost:N0}");
        
        if (totalCost > 0)
        {
            TrySpend(totalCost);
        }
        else
        {
            Debug.Log("No properties to repair!");
        }
    }
    
    void ApplySpecialCard(Card card, CardDeckType deckType)
    {
        if (card.isGetOutOfJailFree)
        {
            GiveGetOutOfJailFreeCard();
            Debug.Log("You received a 'Get out of Jail Free' card! Keep it until needed.");
        }
        else if (card.isGoToJail)
        {
            HandleGoToJail();
        }
    }
    
    // Helper methods for finding tiles
    int FindTileIndexByType(TileType tileType)
    {
        if (boardPoints == null) return -1;
        
        for (int i = 0; i < boardPoints.Length; i++)
        {
            TileInfo tile = boardPoints[i].GetComponent<TileInfo>();
            if (tile != null && tile.tileType == tileType)
            {
                return i;
            }
        }
        return -1;
    }
    
    int FindPropertyTileIndex(string propertyName)
    {
        if (boardPoints == null) return -1;
        
        for (int i = 0; i < boardPoints.Length; i++)
        {
            TileInfo tile = boardPoints[i].GetComponent<TileInfo>();
            if (tile != null && 
                tile.tileType == TileType.Property && 
                tile.property != null &&
                tile.property.propertyName == propertyName)
            {
                return i;
            }
        }
        return -1;
    }
    
    int FindNearestUtilityTile()
    {
        if (boardPoints == null) return -1;
        
        int nearestIndex = -1;
        int minDistance = int.MaxValue;
        
        for (int i = 0; i < boardPoints.Length; i++)
        {
            TileInfo tile = boardPoints[i].GetComponent<TileInfo>();
            if (tile == null || tile.tileType != TileType.Property) continue;
            
            bool isUtility = (tile.property != null && tile.property.propertyType == PropertyType.Utility)
                || (tile.gameObject.name != null && tile.gameObject.name.IndexOf("utility", System.StringComparison.OrdinalIgnoreCase) >= 0);
            
            if (isUtility)
            {
                int distance = (i - currentIndex + boardPoints.Length) % boardPoints.Length;
                if (distance == 0) continue; // Skip current tile — advance to *next* utility
                if (distance < minDistance)
                {
                    minDistance = distance;
                    nearestIndex = i;
                }
            }
        }
        
        return nearestIndex;
    }
    
    int FindNearestTransportationTile()
    {
        if (boardPoints == null) return -1;
        
        int nearestIndex = -1;
        int minDistance = int.MaxValue;
        
        for (int i = 0; i < boardPoints.Length; i++)
        {
            TileInfo tile = boardPoints[i].GetComponent<TileInfo>();
            if (tile == null || tile.tileType != TileType.Property) continue;
            
            bool isTransport = (tile.property != null && tile.property.propertyType == PropertyType.Transportation)
                || (tile.gameObject.name != null && tile.gameObject.name.IndexOf("transport", System.StringComparison.OrdinalIgnoreCase) >= 0);
            
            if (isTransport)
            {
                int distance = (i - currentIndex + boardPoints.Length) % boardPoints.Length;
                if (distance == 0) continue; // Skip current tile — advance to *next* transport
                if (distance < minDistance)
                {
                    minDistance = distance;
                    nearestIndex = i;
                }
            }
        }
        
        return nearestIndex;
    }
    
    bool CardAllowsPassGoSalary(Card card)
    {
        if (card == null || card.isGoToJail) return false;
        if (card.targetTile == TileType.Go) return true;

        string title = (card.title ?? string.Empty).ToLowerInvariant();
        string description = (card.description ?? string.Empty).ToLowerInvariant();

        if (title.Contains("go back")) return false;
        if (description.Contains("do not pass go")) return false;
        if (description.Contains("do not collect")) return false;
        if (description.Contains("if you pass go")) return true;
        if (description.Contains("collect") && description.Contains("go")) return true;
        return false;
    }

    IEnumerator MoveToTile(int targetIndex, bool moveBackward = false, bool allowPassGoSalary = true)
    {
        if (boardPoints == null || targetIndex < 0 || targetIndex >= boardPoints.Length)
        {
            Debug.LogError("Invalid target index for MoveToTile!");
            yield break;
        }

        int L = boardPoints.Length;
        int steps = moveBackward
            ? (currentIndex - targetIndex + L) % L
            : (targetIndex - currentIndex + L) % L;

        for (int i = 0; i < steps; i++)
        {
            if (moveBackward)
            {
                currentIndex = (currentIndex - 1 + L) % L;
            }
            else
            {
                if (allowPassGoSalary && currentIndex == boardPoints.Length - 1)
                {
                    int goSalary = turnManager != null ? turnManager.goSalary : 200000;
                    AddMoney(goSalary);
                    Debug.Log($"Passed GO! Collected ₦{goSalary:N0}");
                    yield return HandleGoBonusPerk(goSalary);
                }
                currentIndex = (currentIndex + 1) % L;
            }
            transform.position = boardPoints[currentIndex].position;
            if (GameSoundManager.Instance != null)
                GameSoundManager.Instance.PlayStep();
            yield return new WaitForSeconds(0.15f);
        }

        Debug.Log($"Arrived at tile {targetIndex}");
    }
    
    void HandleUtilityTransportationCard(TileInfo tile, Card card)
    {
        if (tile == null || tile.property == null) return;
        
        Property prop = tile.property;
        
        if (card.title.Contains("Nearest Utility"))
        {
            // If unowned, player can buy it
            if (prop.owner == null)
            {
                HandlePropertyTile(tile);
            }
            else if (prop.owner != this)
            {
                // Pay 100× dice roll (rebalanced for utility rent system)
                int rent = lastDiceRoll * 100;
                if (TrySpend(rent))
                {
                    prop.owner.AddMoney(rent);
                    Debug.Log($"Paid ₦{rent:N0} (10× dice roll {lastDiceRoll}) to {prop.owner.name} for {prop.propertyName}.");
                    
                    // Show rent payment notification
                    UIDocumentManager activeUIManager = uiManager;
                    if (activeUIManager == null && turnManager != null)
                    {
                        activeUIManager = turnManager.uiManager;
                    }
                    if (activeUIManager != null)
                    {
                        activeUIManager.ShowRentPaymentNotification(this, prop.owner, prop, rent);
                        if (isAI)
                            StartCoroutine(AutoDismissRentPanelAfterDelay(activeUIManager, 1.5f));
                    }
                }
                else
                {
                    Debug.LogWarning($"Cannot afford rent of ₦{rent:N0}!");
                    // Handle bankruptcy
                    if (turnManager != null)
                    {
                        turnManager.HandlePlayerBankruptcy(this, prop.owner, rent);
                    }
                }
            }
        }
        else if (card.title.Contains("Nearest Transportation"))
        {
            // If unowned, player can buy it
            if (prop.owner == null)
            {
                HandlePropertyTile(tile);
            }
            else if (prop.owner != this)
            {
                // Pay 2× normal rent
                int normalRent = prop.CurrentRent;
                int rent = normalRent * 2;
                if (TrySpend(rent))
                {
                    prop.owner.AddMoney(rent);
                    Debug.Log($"Paid ₦{rent:N0} (2× normal rent) to {prop.owner.name} for {prop.propertyName}.");
                    
                    // Show rent payment notification
                    UIDocumentManager activeUIManager = uiManager;
                    if (activeUIManager == null && turnManager != null)
                    {
                        activeUIManager = turnManager.uiManager;
                    }
                    if (activeUIManager != null)
                    {
                        activeUIManager.ShowRentPaymentNotification(this, prop.owner, prop, rent);
                    }
                }
                else
                {
                    Debug.LogWarning($"Cannot afford rent of ₦{rent:N0}!");
                    // Handle bankruptcy
                    if (turnManager != null)
                    {
                        turnManager.HandlePlayerBankruptcy(this, prop.owner, rent);
                    }
                }
            }
        }
    }
    
    /// <summary>
    /// Handles Free Parking tile - awards money pool if available.
    /// </summary>
    void HandleFreeParking()
    {
        if (turnManager != null && turnManager.freeParkingPool > 0)
        {
            int amount = turnManager.freeParkingPool;
            AddMoney(amount);
            turnManager.freeParkingPool = 0; // Reset pool after awarding
            Debug.Log($"🎉 Free Parking! Collected ₦{amount:N0} from the money pool!");
            
            // Show notification
            UIDocumentManager activeUIManager = uiManager;
            if (activeUIManager == null && turnManager != null)
            {
                activeUIManager = turnManager.uiManager;
            }
            if (activeUIManager != null && activeUIManager.PropertyText != null)
            {
                activeUIManager.PropertyText.text = $"🎉 Free Parking!\nCollected ₦{amount:N0}!";
                if (activeUIManager.PropertyPanel != null && activeUIManager.propertyPanelDocument != null)
                {
                    activeUIManager.propertyPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
                    StartCoroutine(HidePanelAfterDelay(2f));
                }
            }
        }
        else
        {
            Debug.Log("Free Parking! (No money in pool)");
        }
    }
    
    /// <summary>
    /// Handles Tax tile - pays tax and adds to Free Parking pool.
    /// </summary>
    void HandleTaxTile()
    {
        int taxAmount = 100000;
        float multiplier = 1f;
        if (HasFaultEffect(CharacterEffectKeys.TaxPenaltyMaitama))
            multiplier *= 2f;
        if (HasFaultEffect(CharacterEffectKeys.TaxPenaltyMarketQueen))
            multiplier *= 1.15f;

        taxAmount = Mathf.RoundToInt(taxAmount * multiplier);
        Debug.Log($"Tax! Pay ₦{taxAmount:N0}.");
        
        if (TrySpend(taxAmount, "Tax"))
        {
            // Add to Free Parking pool
            if (turnManager != null)
            {
                turnManager.freeParkingPool += taxAmount;
                Debug.Log($"Tax added to Free Parking pool. Pool now: ₦{turnManager.freeParkingPool:N0}");
            }
        }
        else
        {
            Debug.LogWarning($"Cannot afford tax of ₦{taxAmount:N0}!");
            // Handle bankruptcy if can't pay tax
            if (turnManager != null)
            {
                turnManager.HandlePlayerBankruptcy(this, null, taxAmount);
            }
        }
    }
    
    // --- Jail System ---
    
    /// <summary>
    /// Handles "Go to Jail" tile - moves player to jail immediately.
    /// </summary>
    public void HandleGoToJail()
    {
        Debug.Log("=== GO TO JAIL ===");
        GameLogger.Log($"GO_TO_JAIL | player={playerName}");
        consecutiveDoubles = 0; // Reset doubles when going to jail
        
        int jailIndex = FindJailTileIndex();
        if (jailIndex == -1)
        {
            Debug.LogError("Could not find jail tile on board!");
            return;
        }

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayPolice();

        UIDocumentManager activeUIManager = uiManager != null ? uiManager : (turnManager != null ? turnManager.uiManager : null);
        if (activeUIManager != null)
            activeUIManager.ShowJailSirenLight(2.2f);

        // Move player to jail along board tiles (no diagonal jump, no GO salary).
        if (boardPoints != null && jailIndex < boardPoints.Length)
        {
            StopCoroutine("MoveToJailAlongBoard");
            StartCoroutine(MoveToJailAlongBoard(jailIndex));
        }
        else
        {
            currentIndex = jailIndex;
            if (boardPoints != null && jailIndex < boardPoints.Length)
                transform.position = boardPoints[jailIndex].position;
        }
        
        // Set jail state
        IsInJail = true;
        TurnsInJail = 0;
        
        Debug.Log($"{name} has been sent to jail! (Tile {jailIndex})");
        
        // Notify narrative manager
        if (NarrativeManager.Instance != null)
        {
            NarrativeManager.Instance.OnPlayerJailed(this);
        }
    }

    private IEnumerator MoveToJailAlongBoard(int jailIndex)
    {
        if (boardPoints == null || boardPoints.Length == 0 || jailIndex < 0 || jailIndex >= boardPoints.Length)
            yield break;

        int L = boardPoints.Length;
        int stepsBackward = (currentIndex - jailIndex + L) % L;
        for (int i = 0; i < stepsBackward; i++)
        {
            currentIndex = (currentIndex - 1 + L) % L;
            transform.position = boardPoints[currentIndex].position;
            if (GameSoundManager.Instance != null)
                GameSoundManager.Instance.PlayStep();
            yield return new WaitForSeconds(0.12f);
        }
        currentIndex = jailIndex;
        transform.position = boardPoints[jailIndex].position;
    }
    
    /// <summary>
    /// Called by TurnManager when player is in jail and rolls dice.
    /// Returns true if player gets out of jail (rolled doubles or paid).
    /// </summary>
    public bool HandleJailTurn(int dice1, int dice2)
    {
        if (!IsInJail) return false;
        
        lastDice1 = dice1;
        lastDice2 = dice2;
        lastDiceRoll = dice1 + dice2;
        
        TurnsInJail++;
        bool isDoubles = (dice1 == dice2);
        
        Debug.Log($"[Jail] Turn {TurnsInJail}/3 - Rolled {dice1} + {dice2} = {lastDiceRoll} (Doubles: {isDoubles})");
        
        // Check if rolled doubles
        if (isDoubles)
        {
            GetOutOfJail("Rolled doubles!");
            return true;
        }
        
        // Check if 3 turns passed
        if (TurnsInJail >= 3)
        {
            Debug.Log("[Jail] 3 turns in jail - must pay bail!");
            // Force player to pay (will be handled by UI)
            return false; // Still in jail, needs to pay
        }
        
        // Still in jail, waiting for player action (pay or use card)
        return false;
    }
    
    /// <summary>
    /// Player pays bail to get out of jail immediately.
    /// </summary>
    public bool PayJailBail()
    {
        if (!IsInJail) return false;
        
        if (TrySpend(jailBailCost, "Bail"))
        {
            GetOutOfJail($"Paid ₦{jailBailCost:N0} bail");
            return true;
        }
        else
        {
            Debug.LogWarning($"Cannot afford bail of ₦{jailBailCost:N0}!");
            return false;
        }
    }

    public bool PayJailBailAmount(int amount)
    {
        if (!IsInJail) return false;
        if (TrySpend(amount, "Bail"))
        {
            GetOutOfJail($"Paid ₦{amount:N0} bail");
            return true;
        }
        Debug.LogWarning($"Cannot afford bail of ₦{amount:N0}!");
        return false;
    }
    
    /// <summary>
    /// Player uses "Get out of Jail Free" card.
    /// </summary>
    public bool UseGetOutOfJailFreeCard(CardDeckType deckType = CardDeckType.Chance)
    {
        if (!IsInJail) return false;
        
        if (!HasGetOutOfJailFreeCard)
        {
            Debug.LogWarning("Player does not have a 'Get out of Jail Free' card!");
            return false;
        }
        
        HasGetOutOfJailFreeCard = false;
        
        // Return card to deck
        if (cardSystem != null)
        {
            cardSystem.ReturnGetOutOfJailCard(deckType);
        }
        
        GetOutOfJail("Used 'Get out of Jail Free' card");
        return true;
    }
    
    /// <summary>
    /// Gets player out of jail. Movement will be handled by TurnManager.
    /// </summary>
    void GetOutOfJail(string reason)
    {
        IsInJail = false;
        TurnsInJail = 0;
        
        Debug.Log($"✓ {name} got out of jail! ({reason})");
    }
    
    /// <summary>
    /// Moves player after getting out of jail. Uses MoveSteps with goSalary.
    /// </summary>
    public IEnumerator MoveStepsAfterJail(int steps, int goSalary, int dice1, int dice2)
    {
        // Use the normal MoveSteps method with dice values
        bool isDoubles = (dice1 == dice2);
        yield return MoveSteps(steps, goSalary, dice1, dice2, isDoubles);
    }
    
    /// <summary>
    /// Give player a "Get out of Jail Free" card (from Chance/Community Chest).
    /// </summary>
    public void GiveGetOutOfJailFreeCard()
    {
        HasGetOutOfJailFreeCard = true;
        Debug.Log($"{name} received a 'Get out of Jail Free' card!");
    }
    
    /// <summary>
    /// Check if player rolled doubles (for jail escape).
    /// </summary>
    public bool RolledDoubles()
    {
        return lastDice1 > 0 && lastDice2 > 0 && lastDice1 == lastDice2;
    }
    
    /// <summary>
    /// Get the last dice roll values.
    /// </summary>
    public void GetLastDiceRoll(out int dice1, out int dice2)
    {
        dice1 = lastDice1;
        dice2 = lastDice2;
    }
}
