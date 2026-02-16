using UnityEngine;
using UnityEngine.UIElements;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;

/// <summary>
/// Manages all UI Toolkit documents and provides easy access to UI elements.
/// This script should be attached to a GameObject with UIDocument components.
/// </summary>
public class UIDocumentManager : MonoBehaviour
{
    [Header("UI Documents")]
    [Tooltip("Main HUD document (UI Toolkit). Leave empty when using Hybrid uGUI HUD.")]
    public UIDocument mainHUDDocument;

    [Header("Hybrid: uGUI Main HUD")]
    [Tooltip("When set, Main HUD uses uGUI (old Canvas). To use the new UI Toolkit Gameplay HUD, leave this EMPTY and assign Main HUD Document to a UIDocument with GameplayHUD.uxml.")]
    public MainHUDController mainHUDController;
    
    [Tooltip("Property panel document (shown when landing on property)")]
    public UIDocument propertyPanelDocument;
    
    [Tooltip("Jail panel document (shown when in jail)")]
    public UIDocument jailPanelDocument;
    
    [Tooltip("Card panel document (shown when drawing cards)")]
    public UIDocument cardPanelDocument;

    [Tooltip("Optional. For money-change toast (income/expense). When using Hybrid HUD, assign a UIDocument here so the toast can display.")]
    public UIDocument moneyToastOverlayDocument;

    [Header("Card panel - icon catalog")]
    [Tooltip("Assign CardIconCatalog asset (create via Assets > Create > Card Icon Catalog). Used for dynamic card panel icons.")]
    public CardIconCatalog cardIconCatalog;

    [Header("Scene References")]
    [Tooltip("TurnManager reference (auto-found if not assigned)")]
    public TurnManager turnManager;

    [Header("Global UI Scale")]
    [Tooltip("If enabled, all UI Toolkit documents get a minimum readable typography pass.")]
    public bool enableGlobalUIScaling = true;
    [Tooltip("Legacy master multiplier. Keep near 1.0; use role multipliers below.")]
    public float globalFontMultiplier = 1.0f;
    [Tooltip("Minimum body font size in px.")]
    public int minBodyFontSize = 15;
    [Tooltip("Minimum subtitle/status font size in px.")]
    public int minSubtitleFontSize = 16;
    [Tooltip("Minimum title/header font size in px.")]
    public int minTitleFontSize = 20;
    [Tooltip("Minimum money/value font size in px.")]
    public int minMoneyFontSize = 17;
    [Tooltip("Role multipliers to keep typography balanced by function.")]
    public float titleFontMultiplier = 1.08f;
    public float subtitleFontMultiplier = 1.03f;
    public float bodyFontMultiplier = 1.0f;
    public float moneyFontMultiplier = 1.08f;
    public float buttonFontMultiplier = 1.02f;
    [Tooltip("Hard caps prevent oversized text from breaking layouts.")]
    public int maxTitleFontSize = 30;
    public int maxSubtitleFontSize = 24;
    public int maxBodyFontSize = 22;
    public int maxMoneyFontSize = 24;
    public int maxButtonFontSize = 22;
    [Tooltip("Minimum button height in px for touch readability.")]
    public int minButtonHeight = 50;
    
    // Main HUD Elements (HUDButton/HUDLabel work with both UI Toolkit and uGUI Hybrid)
    public HUDButton RollButton { get; private set; }
    public HUDButton EndTurnButton { get; private set; }
    public HUDLabel CurrentPlayerText { get; private set; }
    public HUDLabel DiceText { get; private set; }
    public HUDLabel WalletText { get; private set; }
    public HUDLabel BuildingSupplyText { get; private set; }
    public HUDLabel DoublesIndicatorText { get; private set; }
    
    // Main HUD Action Buttons (Build/Sell/Mortgage/Redeem removed; use Manage panel)
    public HUDButton BuildButton { get; private set; }
    public HUDButton MenuButton { get; private set; }
    public HUDButton SellButton { get; private set; }
    public HUDButton MortgageButton { get; private set; }
    public HUDButton RedeemButton { get; private set; }
    public HUDButton ManagePropertiesButton { get; private set; }
    public HUDButton TradeButton { get; private set; }
    
    // Property Panel Elements
    public VisualElement PropertyPanel { get; private set; }
    public Label PropertyText { get; private set; }
    public Button BuyButton { get; private set; }
    public Button SkipButton { get; private set; }
    
    // Jail Panel Elements
    public VisualElement JailPanel { get; private set; }
    public Label JailStatusText { get; private set; }
    public Button PayBailButton { get; private set; }
    public Button UseCardButton { get; private set; }
    public Button WaitButton { get; private set; }
    
    // Card Panel Elements
    public VisualElement CardPanel { get; private set; }
    public VisualElement CardIcon { get; private set; }
    public Label CardTitleText { get; private set; }
    public Label CardTopicText { get; private set; }
    public Label CardDescriptionText { get; private set; }
    public Button CardOkButton { get; private set; }
    public Button CardAltButton { get; private set; }
    private System.Action cardOkHandler;
    private System.Action cardAltHandler;
    private Coroutine resultNotificationRoutine;
    private VisualElement jailSirenLightBar;
    private Coroutine jailSirenRoutine;
    
    // Player Info Elements (for displaying all players)
    public VisualElement Player1Info { get; private set; }
    public VisualElement Player1Avatar { get; private set; }
    public Label Player1Name { get; private set; }
    public Label Player1CharacterName { get; private set; }
    public Label Player1Money { get; private set; }
    
    public VisualElement Player2Info { get; private set; }
    public VisualElement Player2Avatar { get; private set; }
    public Label Player2Name { get; private set; }
    public Label Player2CharacterName { get; private set; }
    public Label Player2Money { get; private set; }
    
    public VisualElement Player3Info { get; private set; }
    public VisualElement Player3Avatar { get; private set; }
    public Label Player3Name { get; private set; }
    public Label Player3CharacterName { get; private set; }
    public Label Player3Money { get; private set; }
    
    public VisualElement Player4Info { get; private set; }
    public VisualElement Player4Avatar { get; private set; }
    public Label Player4Name { get; private set; }
    public Label Player4CharacterName { get; private set; }
    public Label Player4Money { get; private set; }

    private int activePlayerIndex = -1;
    private bool activePulseOn = false;
    private bool activePulseScheduled = false;
    private int _lastScreenWidth;
    private int _lastScreenHeight;
    private readonly Dictionary<VisualElement, float> _baseFontByElement = new Dictionary<VisualElement, float>();
    
    // Game Over Panel Elements
    public UIDocument gameOverPanelDocument;
    public VisualElement GameOverPanel { get; private set; }
    public Label WinnerNameText { get; private set; }
    public Label WinnerStatsText { get; private set; }
    public Button GameOverOkButton { get; private set; }
    
    // Trade Panel Elements
    [Tooltip("Trade panel document (shown when trading)")]
    public UIDocument tradePanelDocument;
    public VisualElement TradePanel { get; private set; }
    public Label TradeTitleText { get; private set; }
    public Label TradeStatusText { get; private set; }
    public DropdownField TradeTargetDropdown { get; private set; }
    public Button TradeOfferButton { get; private set; }
    public Button TradeShowBoardButton { get; private set; }
    public Button TradeCancelButton { get; private set; }
    public Button TradeAcceptButton { get; private set; }
    public Button TradeRejectButton { get; private set; }
    public VisualElement TradeResponseButtons { get; private set; }
    public ScrollView Player1PropertiesList { get; private set; }
    public ScrollView Player2PropertiesList { get; private set; }
    public ScrollView Player1CardsList { get; private set; }
    public ScrollView Player2CardsList { get; private set; }
    public IntegerField Player1MoneyField { get; private set; }
    public IntegerField Player2MoneyField { get; private set; }
    
    // Legacy property for backward compatibility
    public Button TradeConfirmButton { get; private set; }
    
    // Bankruptcy Panel Elements
    [Tooltip("Bankruptcy panel document (shown when player goes bankrupt)")]
    public UIDocument bankruptcyPanelDocument;
    public VisualElement BankruptcyPanel { get; private set; }
    public Label BankruptcyTitleText { get; private set; }
    public Label BankruptcyMessageText { get; private set; }
    public Label BankruptcyDetailsText { get; private set; }
    public Button BankruptcyOkButton { get; private set; }
    
    // Rent Payment Panel Elements
    [Tooltip("Rent payment panel document (shown when player pays rent)")]
    public UIDocument rentPaymentPanelDocument;
    public VisualElement RentPaymentPanel { get; private set; }
    public Label RentPaymentTitleText { get; private set; }
    public Label RentPaymentMessageText { get; private set; }
    public Label RentPaymentDetailsText { get; private set; }
    public Button RentPaymentOkButton { get; private set; }
    
    // Tile Details Panel Elements
    [Tooltip("Tile details panel document (shown when clicking on tiles)")]
    public UIDocument tileDetailsPanelDocument;
    [Header("Shared Panel Styling")]
    [Tooltip("Optional glossy header sprite used for all panel headers")]
    public Sprite uiHeaderGlossSprite;
    [Tooltip("Legacy glossy header sprite (fallback for Tile Details)")]
    public Sprite tileDetailsHeaderGlossSprite;
    [Tooltip("Icon sprite for house (used in Tile Details panel)")]
    public Sprite tileDetailsHouseIcon;
    [Tooltip("Icon sprite for hotel (used in Tile Details panel)")]
    public Sprite tileDetailsHotelIcon;

    public VisualElement TileDetailsPanel { get; private set; }
    public Label TileDetailsTitleText { get; private set; }
    public Label TileDetailsNameText { get; private set; }
    public Label TileDetailsTypeText { get; private set; }
    public Label TileDetailsPriceText { get; private set; }
    public Label TileDetailsOwnerText { get; private set; }
    public Label TileDetailsRentText { get; private set; }
    public Label TileDetailsBuildingsText { get; private set; }
    public Label TileDetailsMortgageText { get; private set; }
    public Label TileDetailsGroupText { get; private set; }
    public ScrollView TileDetailsRentTable { get; private set; }
    public VisualElement TileDetailsColorSwatch { get; private set; }
    public VisualElement TileDetailsHeader { get; private set; }
    public VisualElement TileDetailsBuildingsIcons { get; private set; }
    public Button TileDetailsMortgageButton { get; private set; }
    public Button TileDetailsRedeemButton { get; private set; }
    public Button TileDetailsCloseButton { get; private set; }
    public TileInfo CurrentTileDetails { get; private set; }

    [Header("Property Manager Panel")]
    [Tooltip("Property Manager panel document (Manage Properties - build/sell/mortgage/redeem). Assign PropertyManagerPanel.uxml.")]
    public UIDocument propertyManagerPanelDocument;
    public bool IsPropertyManagerPanelOpen { get; private set; }
    private TileInfo _propertyManagerFocusTile;
    enum PropertyManagerFilter
    {
        All,
        Buildable,
        Mortgaged,
        Monopoly
    }
    private PropertyManagerFilter _propertyManagerFilter = PropertyManagerFilter.All;

    // Money change toast per player (shown under each player's info panel)
    private const int MaxPlayers = 4;
    private VisualElement[] _moneyToastRoots = new VisualElement[MaxPlayers];
    private Label[] _moneyToastLabels = new Label[MaxPlayers];
    private Label[] _moneyToastReasonLabels = new Label[MaxPlayers];
    private Coroutine[] _moneyToastRoutines = new Coroutine[MaxPlayers];
    private VisualElement[] _perkCardRoots = new VisualElement[MaxPlayers];
    private VisualElement[] _perkCardIcons = new VisualElement[MaxPlayers];
    private Label[] _perkCardNames = new Label[MaxPlayers];
    private Label[] _perkCardUses = new Label[MaxPlayers];
    private Coroutine[] _perkCardWiggles = new Coroutine[MaxPlayers];
    
    // Player Statistics Panel Elements
    [Tooltip("Player statistics panel document (shown when viewing player stats)")]
    public UIDocument playerStatisticsPanelDocument;
    public VisualElement PlayerStatisticsPanel { get; private set; }
    public VisualElement StatisticsCharacterImage { get; private set; }
    public Label StatisticsTitleText { get; private set; }
    public Label StatisticsPlayerNameText { get; private set; }
    public Label StatisticsCharacterNameText { get; private set; }
    public Label StatisticsMoneyText { get; private set; }
    public Label StatisticsPropertiesText { get; private set; }
    public Label StatisticsNetWorthText { get; private set; }
    public Label StatisticsDetailsText { get; private set; }
    public Label CharacterBackstoryText { get; private set; }
    public Label CharacterPerksText { get; private set; }
    public Label CharacterCastsText { get; private set; }
    public VisualElement CharacterPerksContainer { get; private set; }
    public VisualElement CharacterFaultsContainer { get; private set; }
    public Button StatisticsCloseButton { get; private set; }
    private int _lastStatisticsAnchorPlayerIndex = -1;

    [Header("Pre-game Character Setup")]
    [Tooltip("Character setup panel document shown before first turn.")]
    public UIDocument characterSetupPanelDocument;
    public VisualElement CharacterSetupPanel { get; private set; }
    public ScrollView CharacterSetupList { get; private set; }
    public Button CharacterSetupOkButton { get; private set; }
    private Action _characterSetupOkHandler;
    
    void Awake()
    {
        // Activate Main HUD GameObject as early as possible (Awake runs before Start)
        if (mainHUDDocument != null)
        {
            // Ensure all parent GameObjects are active
            Transform parent = mainHUDDocument.transform.parent;
            while (parent != null)
            {
                if (!parent.gameObject.activeSelf)
                {
                    parent.gameObject.SetActive(true);
                }
                parent = parent.parent;
            }
            
            if (!mainHUDDocument.gameObject.activeSelf)
            {
                Debug.LogWarning($"UIDocumentManager: Main HUD GameObject is inactive in Awake! Activating immediately...");
                mainHUDDocument.gameObject.SetActive(true);
            }
            if (!mainHUDDocument.enabled)
            {
                Debug.LogWarning($"UIDocumentManager: Main HUD UIDocument is disabled in Awake! Enabling immediately...");
                mainHUDDocument.enabled = true;
            }
        }
    }
    
    void Start()
    {
        // #region agent log
        try {
            File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.Start:1\",\"message\":\"Start called\",\"data\":{{\"mainHUDDocument\":{(mainHUDDocument != null ? $"\"{mainHUDDocument.gameObject.name}\"" : "null")},\"active\":{(mainHUDDocument != null ? mainHUDDocument.gameObject.activeInHierarchy.ToString().ToLower() : "null")}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H1,H3\"}}\n");
        } catch {}
        // #endregion
        
        // CRITICAL: Activate Main HUD GameObject FIRST, before anything else (double-check in Start)
        if (mainHUDDocument != null)
        {
            // Ensure all parent GameObjects are active first
            Transform parent = mainHUDDocument.transform.parent;
            while (parent != null)
            {
                if (!parent.gameObject.activeSelf)
                {
                    Debug.LogWarning($"UIDocumentManager: Parent GameObject '{parent.name}' is inactive at Start! Activating...");
                    parent.gameObject.SetActive(true);
                }
                parent = parent.parent;
            }
            
            if (!mainHUDDocument.gameObject.activeSelf)
            {
                Debug.LogWarning($"UIDocumentManager: Main HUD GameObject is inactive at Start! Activating immediately...");
                mainHUDDocument.gameObject.SetActive(true);
            }
            if (!mainHUDDocument.gameObject.activeInHierarchy)
            {
                Debug.LogError($"UIDocumentManager: Main HUD GameObject is not active in hierarchy at Start! A parent must be inactive.");
            }
            if (!mainHUDDocument.enabled)
            {
                Debug.LogWarning($"UIDocumentManager: Main HUD UIDocument is disabled at Start! Enabling immediately...");
                mainHUDDocument.enabled = true;
            }
        }
        
        if (turnManager == null)
        {
            turnManager = FindFirstObjectByType<TurnManager>();
        }

        InitializeMainHUD();
        InitializeMoneyToast();
        InitializePropertyPanel();
        InitializeJailPanel();
        InitializeCardPanel();
        InitializeGameOverPanel();
        InitializeTradePanel();
        InitializeBankruptcyPanel();
        InitializeRentPaymentPanel();
        InitializeTileDetailsPanel();
        InitializePropertyManagerPanel();
        InitializePlayerStatisticsPanel();
        InitializeCharacterSetupPanel();
        
        // Deactivate duplicate HUD documents - DISABLED per user request
        // DeactivateDuplicateHUDs();
        
        // Wait a frame for layout to calculate, then verify HUD is visible
        StartCoroutine(VerifyHUDVisibleAfterFrame());
        StartCoroutine(ApplyGlobalUIScalingAfterLayout());
        
        // #region agent log
        try {
            var root = mainHUDDocument != null ? mainHUDDocument.rootVisualElement : null;
            File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.Start:end\",\"message\":\"After initialization\",\"data\":{{\"mainHUDDoc\":{(mainHUDDocument != null ? $"\"{mainHUDDocument.gameObject.name}\"" : "null")},\"active\":{(mainHUDDocument != null ? mainHUDDocument.gameObject.activeInHierarchy.ToString().ToLower() : "null")},\"enabled\":{(mainHUDDocument != null ? mainHUDDocument.enabled.ToString().ToLower() : "null")},\"root\":{(root != null ? "\"exists\"" : "null")},\"rootDisplay\":{(root != null ? $"\"{root.style.display.value}\"" : "null")}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H1,H2,H3,H6\"}}\n");
        } catch {}
        // #endregion
    }
    
    void Update()
    {
        // Continuously ensure Main HUD GameObject stays active (but only check every 10 frames to avoid performance issues)
        if (Time.frameCount % 10 == 0)
        {
            EnsureMainHUDActive();
        }

        if (enableGlobalUIScaling && Time.frameCount % 30 == 0)
        {
            if (Screen.width != _lastScreenWidth || Screen.height != _lastScreenHeight)
            {
                _lastScreenWidth = Screen.width;
                _lastScreenHeight = Screen.height;
                ApplyGlobalUIScalingToAllDocuments();
            }
        }
    }
    
    /// <summary>
    /// Public method to force activate the Main HUD. Can be called from Inspector or other scripts.
    /// </summary>
    [ContextMenu("Force Activate Main HUD")]
    public void EnsureMainHUDActive()
    {
        // Hybrid: when using uGUI HUD, ensure that GameObject is active
        if (mainHUDController != null)
        {
            if (!mainHUDController.gameObject.activeInHierarchy)
            {
                mainHUDController.gameObject.SetActive(true);
            }
            return;
        }

        // If mainHUDDocument is null or inactive, try to find it
        if (mainHUDDocument == null || !mainHUDDocument.gameObject.activeInHierarchy)
        {
            Debug.LogWarning("UIDocumentManager: Main HUD Document is null or inactive! Searching for it...");
            
            var allDocs = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
            foreach (var doc in allDocs)
            {
                if (doc.visualTreeAsset != null && 
                    (doc.visualTreeAsset.name.Contains("MainHUD") || doc.visualTreeAsset.name.Contains("MainGameUi")))
                {
                    if (doc.gameObject.name.Contains("Main HUD") || doc.gameObject.name.Contains("MainHUD"))
                    {
                        mainHUDDocument = doc;
                        Debug.Log($"UIDocumentManager: Found Main HUD Document: {doc.gameObject.name}");
                        break;
                    }
                }
            }
        }
        
        if (mainHUDDocument != null)
        {
            // Ensure all parent GameObjects are active
            Transform parent = mainHUDDocument.transform.parent;
            while (parent != null)
            {
                if (!parent.gameObject.activeSelf)
                {
                    Debug.LogWarning($"UIDocumentManager: Parent GameObject '{parent.name}' is inactive! Activating...");
                    parent.gameObject.SetActive(true);
                }
                parent = parent.parent;
            }
            
            if (!mainHUDDocument.gameObject.activeSelf)
            {
                Debug.LogWarning($"UIDocumentManager: Main HUD GameObject '{mainHUDDocument.gameObject.name}' is inactive! Activating...");
                mainHUDDocument.gameObject.SetActive(true);
            }
            if (!mainHUDDocument.gameObject.activeInHierarchy)
            {
                Debug.LogError($"UIDocumentManager: Main HUD GameObject '{mainHUDDocument.gameObject.name}' is not active in hierarchy! This means a parent is inactive.");
            }
            if (!mainHUDDocument.enabled)
            {
                Debug.LogWarning($"UIDocumentManager: Main HUD UIDocument '{mainHUDDocument.gameObject.name}' is disabled! Enabling...");
                mainHUDDocument.enabled = true;
            }
            
            // Also ensure root is visible
            if (mainHUDDocument.rootVisualElement != null)
            {
                var root = mainHUDDocument.rootVisualElement;
                if (root.style.display.value == DisplayStyle.None)
                {
                    root.style.display = DisplayStyle.Flex;
                }
                root.style.visibility = Visibility.Visible;
            }
        }
        else
        {
            Debug.LogError("UIDocumentManager: Could not find Main HUD Document! Please assign it in the Inspector.");
        }
    }

    IEnumerator ApplyGlobalUIScalingAfterLayout()
    {
        yield return null;
        yield return null;
        _lastScreenWidth = Screen.width;
        _lastScreenHeight = Screen.height;
        ApplyGlobalUIScalingToAllDocuments();
    }

    public void ApplyGlobalUIScalingToAllDocuments()
    {
        if (!enableGlobalUIScaling) return;

        HashSet<UIDocument> documents = new HashSet<UIDocument>();
        AddIfValid(documents, mainHUDDocument);
        AddIfValid(documents, propertyPanelDocument);
        AddIfValid(documents, jailPanelDocument);
        AddIfValid(documents, cardPanelDocument);
        AddIfValid(documents, tradePanelDocument);
        AddIfValid(documents, gameOverPanelDocument);
        AddIfValid(documents, bankruptcyPanelDocument);
        AddIfValid(documents, rentPaymentPanelDocument);
        AddIfValid(documents, tileDetailsPanelDocument);
        AddIfValid(documents, propertyManagerPanelDocument);
        AddIfValid(documents, playerStatisticsPanelDocument);
        AddIfValid(documents, characterSetupPanelDocument);
        AddIfValid(documents, moneyToastOverlayDocument);

        UIDocument[] sceneDocs = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
        foreach (UIDocument doc in sceneDocs)
            AddIfValid(documents, doc);

        foreach (UIDocument doc in documents)
        {
            if (doc == null || doc.rootVisualElement == null) continue;
            NormalizeTypography(doc.rootVisualElement);
        }
    }

    void AddIfValid(HashSet<UIDocument> set, UIDocument doc)
    {
        if (set == null || doc == null) return;
        set.Add(doc);
    }

    void NormalizeTypography(VisualElement root)
    {
        if (root == null) return;
        Stack<VisualElement> stack = new Stack<VisualElement>();
        stack.Push(root);

        while (stack.Count > 0)
        {
            VisualElement element = stack.Pop();
            ApplyElementTypography(element);

            foreach (VisualElement child in element.Children())
                stack.Push(child);
        }
    }

    void ApplyElementTypography(VisualElement element)
    {
        if (element == null) return;

        string id = (element.name ?? "").ToLowerInvariant();
        string classes = string.Join(" ", element.GetClasses()).ToLowerInvariant();

        bool compactHud = classes.Contains("hud-perk-card-name") ||
                          classes.Contains("hud-perk-card-uses") ||
                          classes.Contains("gameplay-hud-player-title") ||
                          classes.Contains("gameplay-hud-status-label");
        bool cardHeader = id.Contains("cardtitletext") || id.Contains("auctiontitletext") || id.Contains("jailstatustext");

        bool titleLike = id.Contains("title") || id.Contains("header") || classes.Contains("title") || classes.Contains("header");
        bool subtitleLike = id.Contains("subtitle") || classes.Contains("subtitle") || id.Contains("status") || classes.Contains("status");
        bool moneyLike = id.Contains("money") || id.Contains("wallet") || id.Contains("cash") || id.Contains("rent") ||
                         id.Contains("price") || id.Contains("bid") || id.Contains("worth") || classes.Contains("money");
        bool buttonLike = element is Button;

        float baseSize;
        if (!_baseFontByElement.TryGetValue(element, out baseSize))
        {
            baseSize = element.resolvedStyle.fontSize;
            if (baseSize <= 0f || float.IsNaN(baseSize))
                baseSize = minBodyFontSize;
            _baseFontByElement[element] = baseSize;
        }

        float target = baseSize * globalFontMultiplier;
        int minSize = minBodyFontSize;
        int maxSize = maxBodyFontSize;
        float roleMultiplier = bodyFontMultiplier;

        if (titleLike)
        {
            minSize = minTitleFontSize;
            maxSize = maxTitleFontSize;
            roleMultiplier = titleFontMultiplier;
        }
        else if (moneyLike)
        {
            minSize = minMoneyFontSize;
            maxSize = maxMoneyFontSize;
            roleMultiplier = moneyFontMultiplier;
        }
        else if (subtitleLike)
        {
            minSize = minSubtitleFontSize;
            maxSize = maxSubtitleFontSize;
            roleMultiplier = subtitleFontMultiplier;
        }
        else if (buttonLike)
        {
            minSize = minBodyFontSize;
            maxSize = maxButtonFontSize;
            roleMultiplier = buttonFontMultiplier;
        }

        if (compactHud)
        {
            // Keep compact HUD lanes tidy even when global scaling is enabled.
            minSize = Mathf.Min(minSize, 12);
            maxSize = Mathf.Min(maxSize, 14);
            roleMultiplier = 1f;
        }
        else if (cardHeader)
        {
            minSize = Mathf.Min(minSize, 17);
            maxSize = Mathf.Min(maxSize, 20);
        }

        target = Mathf.Clamp(target * roleMultiplier, minSize, maxSize);

        if (element is Label label)
        {
            label.style.fontSize = new StyleLength(new Length(target, LengthUnit.Pixel));
            if (moneyLike)
                label.style.unityFontStyleAndWeight = FontStyle.Bold;
        }
        else if (element is Button button)
        {
            button.style.fontSize = new StyleLength(new Length(target, LengthUnit.Pixel));
            button.style.minHeight = new StyleLength(new Length(minButtonHeight, LengthUnit.Pixel));
        }
        else if (element is TextField || element is IntegerField || element is DropdownField)
        {
            element.style.fontSize = new StyleLength(new Length(target, LengthUnit.Pixel));
        }
    }
    
    IEnumerator VerifyHUDVisibleAfterFrame()
    {
        yield return null; // Wait one frame for layout to calculate

        if (mainHUDController != null)
        {
            if (!mainHUDController.gameObject.activeInHierarchy)
                mainHUDController.gameObject.SetActive(true);
            yield break;
        }
        
        if (mainHUDDocument != null)
        {
            // CRITICAL: Check and ensure GameObject is still active after frame
            if (!mainHUDDocument.gameObject.activeInHierarchy)
            {
                Debug.LogError($"UIDocumentManager: Main HUD GameObject became INACTIVE after frame! Reactivating...");
                mainHUDDocument.gameObject.SetActive(true);
            }
            if (!mainHUDDocument.enabled)
            {
                Debug.LogError($"UIDocumentManager: Main HUD UIDocument became DISABLED after frame! Re-enabling...");
                mainHUDDocument.enabled = true;
            }
            
            if (mainHUDDocument.rootVisualElement != null)
            {
                var root = mainHUDDocument.rootVisualElement;
                var mainHUD = root.Q<VisualElement>("MainHUD");
                
                // Check if element is in hierarchy and has parent
                bool inHierarchy = root.hierarchy.parent != null;
                var parent = root.hierarchy.parent;
                
                // #region agent log
                try {
                    File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                        $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.VerifyHUDVisibleAfterFrame\",\"message\":\"After one frame\",\"data\":{{\"active\":{mainHUDDocument.gameObject.activeInHierarchy.ToString().ToLower()},\"enabled\":{mainHUDDocument.enabled.ToString().ToLower()},\"inHierarchy\":{inHierarchy.ToString().ToLower()},\"hasParent\":{(parent != null ? "true" : "false")},\"rootWidth\":{root.resolvedStyle.width},\"rootHeight\":{root.resolvedStyle.height},\"rootDisplay\":\"{root.style.display.value}\",\"rootPosition\":\"{root.style.position.value}\"}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H3,H4\"}}\n");
                } catch {}
                // #endregion
                
                // If still NaN, try forcing explicit pixel dimensions as last resort
                if (float.IsNaN(root.resolvedStyle.width) || float.IsNaN(root.resolvedStyle.height))
                {
                    int screenW = Screen.width > 0 ? Screen.width : 1920;
                    int screenH = Screen.height > 0 ? Screen.height : 1080;
                    root.style.width = screenW;
                    root.style.height = screenH;
                    
                    // #region agent log
                    try {
                        File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                            $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.VerifyHUDVisibleAfterFrame\",\"message\":\"Forced explicit pixel size\",\"data\":{{\"width\":{screenW},\"height\":{screenH}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H4\"}}\n");
                    } catch {}
                    // #endregion
                }
                
                // Force visibility one more time after layout calculation
                root.style.display = DisplayStyle.Flex;
                root.style.visibility = Visibility.Visible;
                if (mainHUD != null)
                {
                    mainHUD.style.display = DisplayStyle.Flex;
                    mainHUD.style.visibility = Visibility.Visible;
                }
                
                root.MarkDirtyRepaint();
            }
        }
    }
    
    void DeactivateDuplicateHUDs()
    {
        // DISABLED - No longer disabling duplicate HUDs per user request
        // All UIDocuments will remain active and enabled
        return;
    }
    
    void InitializeMainHUD()
    {
        // Hybrid: use uGUI Main HUD when mainHUDController is assigned
        if (mainHUDController != null)
        {
            var bridge = mainHUDController.GetBridge();
            RollButton = bridge.RollButton;
            EndTurnButton = bridge.EndTurnButton;
            BuildButton = bridge.BuildButton;
            SellButton = bridge.SellButton;
            TradeButton = bridge.TradeButton;
            MenuButton = bridge.MenuButton;
            MortgageButton = bridge.MortgageButton;
            RedeemButton = bridge.RedeemButton;
            CurrentPlayerText = bridge.CurrentPlayerText;
            DiceText = bridge.DiceText;
            WalletText = bridge.WalletText;
            BuildingSupplyText = bridge.BuildingSupplyText;
            DoublesIndicatorText = bridge.DoublesIndicatorText;
            mainHUDController.BindFeedSoundToggle();
            mainHUDController.onPlayerProfileClicked.RemoveListener(OnPlayerProfileClicked);
            mainHUDController.onPlayerProfileClicked.AddListener(OnPlayerProfileClicked);
            return;
        }

        // #region agent log
        try {
            File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:entry\",\"message\":\"InitializeMainHUD called\",\"data\":{{\"mainHUDDoc\":{(mainHUDDocument != null ? $"\"{mainHUDDocument.gameObject.name}\"" : "null")},\"visualTreeAsset\":{(mainHUDDocument != null && mainHUDDocument.visualTreeAsset != null ? $"\"{mainHUDDocument.visualTreeAsset.name}\"" : "null")},\"active\":{(mainHUDDocument != null ? mainHUDDocument.gameObject.activeInHierarchy.ToString().ToLower() : "null")}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H5,H3\"}}\n");
        } catch {}
        // #endregion
        
        if (mainHUDDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Main HUD Document not assigned (and no mainHUDController).");
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:null\",\"message\":\"mainHUDDocument is null\",\"data\":{{}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H5\"}}\n");
            } catch {}
            // #endregion
            return;
        }
        
        // CRITICAL: Ensure all parent GameObjects are active first
        Transform parent = mainHUDDocument.transform.parent;
        while (parent != null)
        {
            if (!parent.gameObject.activeSelf)
            {
                Debug.LogError($"UIDocumentManager: Parent GameObject '{parent.name}' is inactive in InitializeMainHUD! Activating...");
                parent.gameObject.SetActive(true);
            }
            parent = parent.parent;
        }
        
        // CRITICAL: Ensure GameObject is active BEFORE trying to access rootVisualElement
        if (!mainHUDDocument.gameObject.activeSelf)
        {
            Debug.LogError($"UIDocumentManager: Main HUD GameObject '{mainHUDDocument.gameObject.name}' is INACTIVE in InitializeMainHUD! Activating now...");
            mainHUDDocument.gameObject.SetActive(true);
        }
        if (!mainHUDDocument.gameObject.activeInHierarchy)
        {
            Debug.LogError($"UIDocumentManager: Main HUD GameObject '{mainHUDDocument.gameObject.name}' is not active in hierarchy! A parent must be inactive.");
        }
        if (!mainHUDDocument.enabled)
        {
            Debug.LogError($"UIDocumentManager: Main HUD UIDocument '{mainHUDDocument.gameObject.name}' is DISABLED in InitializeMainHUD! Enabling now...");
            mainHUDDocument.enabled = true;
        }
        
        // Verify visual tree asset is assigned
        if (mainHUDDocument.visualTreeAsset == null)
        {
            Debug.LogError($"UIDocumentManager: Main HUD UIDocument '{mainHUDDocument.gameObject.name}' has no visualTreeAsset assigned!");
        }
        
        var root = mainHUDDocument.rootVisualElement;
        
        // #region agent log
        try {
            File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:root\",\"message\":\"Root element check\",\"data\":{{\"root\":{(root != null ? "\"exists\"" : "null")},\"display\":{(root != null ? $"\"{root.style.display.value}\"" : "null")},\"width\":{(root != null ? root.resolvedStyle.width.ToString() : "null")},\"height\":{(root != null ? root.resolvedStyle.height.ToString() : "null")},\"active\":{mainHUDDocument.gameObject.activeInHierarchy.ToString().ToLower()},\"enabled\":{mainHUDDocument.enabled.ToString().ToLower()}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H1,H2,H3,H4,H6\"}}\n");
        } catch {}
        // #endregion
        
        if (root == null)
        {
            Debug.LogError("UIDocumentManager: Main HUD rootVisualElement is null! UIDocument may not be initialized yet.");
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:rootNull\",\"message\":\"Root is null\",\"data\":{{\"active\":{mainHUDDocument.gameObject.activeInHierarchy.ToString().ToLower()},\"enabled\":{mainHUDDocument.enabled.ToString().ToLower()}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H6\"}}\n");
            } catch {}
            // #endregion
            return;
        }
        
        // Immediately ensure root is visible
        root.style.display = DisplayStyle.Flex;
        root.style.visibility = Visibility.Visible;
        
        // #region agent log
        try {
            File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:afterSetDisplay\",\"message\":\"After setting display\",\"data\":{{\"display\":\"{root.style.display.value}\",\"visibility\":\"{root.style.visibility.value}\",\"width\":{root.resolvedStyle.width},\"height\":{root.resolvedStyle.height}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H1,H4\"}}\n");
        } catch {}
        // #endregion
        
        // Also ensure the MainHUD child element is visible
        var mainHUDElement = root.Q<VisualElement>("MainHUD");
        if (mainHUDElement != null)
        {
            mainHUDElement.style.display = DisplayStyle.Flex;
            mainHUDElement.style.visibility = Visibility.Visible;
            
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:mainHUDElement\",\"message\":\"MainHUD element found and set visible\",\"data\":{{\"display\":\"{mainHUDElement.style.display.value}\",\"visibility\":\"{mainHUDElement.style.visibility.value}\"}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H8\"}}\n");
            } catch {}
            // #endregion
        }
        else
        {
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:mainHUDElement\",\"message\":\"MainHUD element NOT found\",\"data\":{{}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H8\"}}\n");
            } catch {}
            // #endregion
        }
        
        RollButton = HUDButton.FromUIToolkit(root.Q<Button>("RollButton"));
        EndTurnButton = HUDButton.FromUIToolkit(root.Q<Button>("EndTurnButton"));
        CurrentPlayerText = HUDLabel.FromUIToolkit(root.Q<Label>("CurrentPlayerText"));
        DiceText = HUDLabel.FromUIToolkit(root.Q<Label>("DiceText"));
        WalletText = HUDLabel.FromUIToolkit(root.Q<Label>("WalletText"));
        
        // Main HUD only exposes high-level actions. Property actions live in Manage Properties panel.
        BuildButton = null;
        SellButton = null;
        MortgageButton = null;
        RedeemButton = null;
        ManagePropertiesButton = HUDButton.FromUIToolkit(root.Q<Button>("ManagePropertiesButton"));
        MenuButton = HUDButton.FromUIToolkit(root.Q<Button>("MenuButton"));
        TradeButton = HUDButton.FromUIToolkit(root.Q<Button>("TradeButton"));
        BuildingSupplyText = HUDLabel.FromUIToolkit(root.Q<Label>("BuildingSupplyText"));
        DoublesIndicatorText = HUDLabel.FromUIToolkit(root.Q<Label>("DoublesIndicatorText"));
        
        // Feed sound toggle (next to Live Feed)
        var feedSoundToggle = root.Q<Toggle>("FeedSoundToggle");
        if (feedSoundToggle != null)
        {
            var soundMgr = FindFirstObjectByType<GameSoundManager>();
            if (soundMgr != null)
            {
                feedSoundToggle.value = soundMgr.FeedSoundEnabled;
                feedSoundToggle.RegisterValueChangedCallback(evt =>
                {
                    soundMgr.FeedSoundEnabled = evt.newValue;
                });
            }
        }
        
        // Player info elements
        Player1Info = root.Q<VisualElement>("Player1Info");
        Player1Avatar = root.Q<VisualElement>("Player1Avatar");
        Player1Name = root.Q<Label>("Player1Name");
        Player1CharacterName = root.Q<Label>("Player1CharacterName");
        Player1Money = root.Q<Label>("Player1Money");
        
        Player2Info = root.Q<VisualElement>("Player2Info");
        Player2Avatar = root.Q<VisualElement>("Player2Avatar");
        Player2Name = root.Q<Label>("Player2Name");
        Player2CharacterName = root.Q<Label>("Player2CharacterName");
        Player2Money = root.Q<Label>("Player2Money");
        
        Player3Info = root.Q<VisualElement>("Player3Info");
        Player3Avatar = root.Q<VisualElement>("Player3Avatar");
        Player3Name = root.Q<Label>("Player3Name");
        Player3CharacterName = root.Q<Label>("Player3CharacterName");
        Player3Money = root.Q<Label>("Player3Money");
        
        Player4Info = root.Q<VisualElement>("Player4Info");
        Player4Avatar = root.Q<VisualElement>("Player4Avatar");
        Player4Name = root.Q<Label>("Player4Name");
        Player4CharacterName = root.Q<Label>("Player4CharacterName");
        Player4Money = root.Q<Label>("Player4Money");
        
        // Click on player info row opens profile (stats + character)
        if (Player1Info != null) Player1Info.RegisterCallback<ClickEvent>(evt => OnPlayerProfileClicked(0));
        if (Player2Info != null) Player2Info.RegisterCallback<ClickEvent>(evt => OnPlayerProfileClicked(1));
        if (Player3Info != null) Player3Info.RegisterCallback<ClickEvent>(evt => OnPlayerProfileClicked(2));
        if (Player4Info != null) Player4Info.RegisterCallback<ClickEvent>(evt => OnPlayerProfileClicked(3));
        
        // CRITICAL for mobile: SafeAreaSpacer is full-screen. USS "pointer-events: none" is NOT supported
        // by Unity UI Toolkit, so it was blocking all touches on the HUD. Set pickingMode to Ignore in code.
        var safeAreaSpacer = root.Q<VisualElement>("SafeAreaSpacer");
        if (safeAreaSpacer == null && mainHUDElement != null)
            safeAreaSpacer = mainHUDElement.Q<VisualElement>("SafeAreaSpacer");
        if (safeAreaSpacer != null)
            safeAreaSpacer.pickingMode = PickingMode.Ignore;
        
        // Ensure interactive elements can receive pointer/touch events (UI Toolkit only; uGUI handled by Canvas)
        var rollUitk = root.Q<UnityEngine.UIElements.Button>("RollButton");
        if (rollUitk != null) rollUitk.pickingMode = PickingMode.Position;
        var buildUitk = root.Q<UnityEngine.UIElements.Button>("BuildButton");
        if (buildUitk != null) buildUitk.pickingMode = PickingMode.Position;
        var menuUitk = root.Q<UnityEngine.UIElements.Button>("MenuButton");
        if (menuUitk != null) menuUitk.pickingMode = PickingMode.Position;
        var sellUitk = root.Q<UnityEngine.UIElements.Button>("SellButton");
        if (sellUitk != null) sellUitk.pickingMode = PickingMode.Position;
        var mortgageUitk = root.Q<UnityEngine.UIElements.Button>("MortgageButton");
        if (mortgageUitk != null) mortgageUitk.pickingMode = PickingMode.Position;
        var redeemUitk = root.Q<UnityEngine.UIElements.Button>("RedeemButton");
        if (redeemUitk != null) redeemUitk.pickingMode = PickingMode.Position;
        var tradeUitk = root.Q<UnityEngine.UIElements.Button>("TradeButton");
        if (tradeUitk != null) tradeUitk.pickingMode = PickingMode.Position;
        var endTurnUitk = root.Q<UnityEngine.UIElements.Button>("EndTurnButton");
        if (endTurnUitk != null) endTurnUitk.pickingMode = PickingMode.Position;
        
        // Verify all elements were found
        if (RollButton == null) Debug.LogWarning("RollButton not found in MainHUD!");
        if (EndTurnButton == null) Debug.LogWarning("EndTurnButton not found in MainHUD!");
        if (CurrentPlayerText == null) Debug.LogWarning("CurrentPlayerText not found in MainHUD!");
        if (DiceText == null) Debug.LogWarning("DiceText not found in MainHUD!");
        if (WalletText == null) Debug.LogWarning("WalletText not found in MainHUD!");
        if (ManagePropertiesButton == null) Debug.LogWarning("ManagePropertiesButton not found in MainHUD!");

        if (mainHUDDocument.panelSettings != null)
        {
            var ps = mainHUDDocument.panelSettings;
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:panelSettings\",\"message\":\"PanelSettings check\",\"data\":{{\"sortingOrder\":{ps.sortingOrder},\"scaleMode\":\"{ps.scaleMode},\"referenceResolution\":\"{ps.referenceResolution.x}x{ps.referenceResolution.y}\"}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H7\"}}\n");
            } catch {}
            // #endregion
            
            // Force ScaleWithScreenSize and set reference resolution to actual screen size
            ps.scaleMode = PanelScaleMode.ScaleWithScreenSize;
            int refWidth = Screen.width > 0 ? Screen.width : 1920;
            int refHeight = Screen.height > 0 ? Screen.height : 1080;
            ps.referenceResolution = new Vector2Int(refWidth, refHeight);
            ps.match = 0.5f;
            
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:panelSettingsSet\",\"message\":\"PanelSettings configured\",\"data\":{{\"scaleMode\":\"{ps.scaleMode}\",\"referenceResolution\":\"{ps.referenceResolution.x}x{ps.referenceResolution.y}\",\"screenSize\":\"{Screen.width}x{Screen.height}\",\"sortingOrder\":{ps.sortingOrder}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H7\"}}\n");
            } catch {}
            // #endregion
            
            // Ensure sort order is high enough to be visible
            if (ps.sortingOrder < 100)
            {
                ps.sortingOrder = 100;
                Debug.Log($"UIDocumentManager: Set Main HUD PanelSettings sorting order to {ps.sortingOrder}");
            }
        }
        else
        {
            Debug.LogWarning("UIDocumentManager: Main HUD PanelSettings is null! This may cause visibility issues.");
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:panelSettings\",\"message\":\"PanelSettings is null\",\"data\":{{}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H7\"}}\n");
            } catch {}
            // #endregion
        }

        // Fix root element sizing - With absolute positioning and all edges set to 0,
        // the element should automatically fill the screen without explicit width/height
        root.style.position = Position.Absolute;
        root.style.left = 0;
        root.style.top = 0;
        root.style.right = 0;
        root.style.bottom = 0;
        
        // Don't set explicit width/height - let absolute positioning handle it
        // This avoids NaN issues when the layout hasn't calculated yet
        
        // #region agent log
        try {
            File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:setSize\",\"message\":\"Set absolute positioning\",\"data\":{{\"screenWidth\":{Screen.width},\"screenHeight\":{Screen.height},\"position\":\"absolute\",\"edges\":\"all 0\"}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H4\"}}\n");
        } catch {}
        // #endregion
        
        // Force immediate layout update
        root.MarkDirtyRepaint();
        
        // Schedule a check after layout is calculated
        root.schedule.Execute(() =>
        {
            // #region agent log
            try {
                var mainHUD = root.Q<VisualElement>("MainHUD");
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:afterSizeSet\",\"message\":\"After setting size (scheduled)\",\"data\":{{\"width\":{root.resolvedStyle.width},\"height\":{root.resolvedStyle.height},\"display\":\"{root.style.display.value}\",\"mainHUD\":{(mainHUD != null ? "\"found\"" : "null")},\"mainHUDWidth\":{(mainHUD != null ? mainHUD.resolvedStyle.width.ToString() : "null")},\"mainHUDHeight\":{(mainHUD != null ? mainHUD.resolvedStyle.height.ToString() : "null")}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H4,H8\"}}\n");
            } catch {}
            // #endregion
        });
        
        // Force a layout recalculation after PanelSettings change
        root.schedule.Execute(() =>
        {
            // Ensure visibility is maintained
            root.style.display = DisplayStyle.Flex;
            root.style.visibility = Visibility.Visible;
            
            // Also ensure MainHUD child element is visible
            var mainHUDElement = root.Q<VisualElement>("MainHUD");
            if (mainHUDElement != null)
            {
                mainHUDElement.style.display = DisplayStyle.Flex;
                mainHUDElement.style.visibility = Visibility.Visible;
                // Re-apply SafeAreaSpacer pickingMode (critical for mobile touch)
                var spacer = mainHUDElement.Q<VisualElement>("SafeAreaSpacer");
                if (spacer != null) spacer.pickingMode = PickingMode.Ignore;
            }
            
            // Ensure position is still set correctly
            root.style.position = Position.Absolute;
            root.style.left = 0;
            root.style.top = 0;
            root.style.right = 0;
            root.style.bottom = 0;
            root.MarkDirtyRepaint();
            
            // #region agent log
            try {
                File.AppendAllText(@"c:\Users\DELL\bizgame\Assets\.cursor\debug.log", 
                    $"{{\"id\":\"log_{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()}\",\"timestamp\":{DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()},\"location\":\"UIDocumentManager.InitializeMainHUD:scheduled\",\"message\":\"Scheduled callback executed\",\"data\":{{\"display\":\"{root.style.display.value}\",\"width\":{root.resolvedStyle.width},\"height\":{root.resolvedStyle.height},\"mainHUDElement\":{(mainHUDElement != null ? "\"found\"" : "null")}}},\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"H1,H4,H8\"}}\n");
            } catch {}
            // #endregion
        });
    }

    void InitializeMoneyToast()
    {
        if (mainHUDDocument != null && mainHUDDocument.rootVisualElement != null)
        {
            var root = mainHUDDocument.rootVisualElement;
            string[] laneNames = { "Player1MoneyChangeLane", "Player2MoneyChangeLane", "Player3MoneyChangeLane", "Player4MoneyChangeLane" };
            for (int i = 0; i < MaxPlayers && i < laneNames.Length; i++)
            {
                var lane = root.Q<VisualElement>(laneNames[i]);
                if (lane == null) continue;
                var toastRoot = new VisualElement();
                toastRoot.name = "MoneyChangeToast_" + (i + 1);
                toastRoot.pickingMode = PickingMode.Ignore;
                toastRoot.style.alignItems = Align.Center;
                toastRoot.style.justifyContent = Justify.Center;
                toastRoot.style.paddingTop = 6;
                toastRoot.style.paddingBottom = 6;
                toastRoot.style.paddingLeft = 12;
                toastRoot.style.paddingRight = 12;
                toastRoot.style.backgroundColor = new Color(0.1f, 0.1f, 0.15f, 0.92f);
                toastRoot.style.borderTopWidth = 1;
                toastRoot.style.borderBottomWidth = 1;
                toastRoot.style.borderLeftWidth = 1;
                toastRoot.style.borderRightWidth = 1;
                toastRoot.style.borderTopColor = new Color(0.8f, 0.7f, 0.3f, 1f);
                toastRoot.style.borderBottomColor = new Color(0.8f, 0.7f, 0.3f, 1f);
                toastRoot.style.borderLeftColor = new Color(0.8f, 0.7f, 0.3f, 1f);
                toastRoot.style.borderRightColor = new Color(0.8f, 0.7f, 0.3f, 1f);
                toastRoot.style.display = DisplayStyle.None;
                var label = new Label();
                label.style.fontSize = 24;
                label.style.unityFontStyleAndWeight = FontStyle.Bold;
                toastRoot.Add(label);
                var reasonLabel = new Label();
                reasonLabel.style.fontSize = 14;
                reasonLabel.style.unityTextAlign = TextAnchor.MiddleCenter;
                reasonLabel.style.marginTop = 2;
                toastRoot.Add(reasonLabel);
                lane.Add(toastRoot);
                _moneyToastRoots[i] = toastRoot;
                _moneyToastLabels[i] = label;
                _moneyToastReasonLabels[i] = reasonLabel;
            }
            return;
        }
        if (mainHUDController != null && moneyToastOverlayDocument != null && moneyToastOverlayDocument.rootVisualElement != null)
        {
            var root = moneyToastOverlayDocument.rootVisualElement;
            var toastRoot = new VisualElement();
            toastRoot.name = "MoneyChangeToast";
            toastRoot.pickingMode = PickingMode.Ignore;
            toastRoot.style.position = Position.Absolute;
            toastRoot.style.left = Length.Percent(50);
            toastRoot.style.top = 80;
            toastRoot.style.translate = new Translate(Length.Percent(-50), 0);
            toastRoot.style.alignItems = Align.Center;
            toastRoot.style.justifyContent = Justify.Center;
            toastRoot.style.minWidth = 280;
            toastRoot.style.paddingTop = 12;
            toastRoot.style.paddingBottom = 12;
            toastRoot.style.paddingLeft = 24;
            toastRoot.style.paddingRight = 24;
            toastRoot.style.backgroundColor = new Color(0.1f, 0.1f, 0.15f, 0.92f);
            toastRoot.style.borderTopWidth = 2;
            toastRoot.style.borderBottomWidth = 2;
            toastRoot.style.borderLeftWidth = 2;
            toastRoot.style.borderRightWidth = 2;
            toastRoot.style.borderTopColor = new Color(0.8f, 0.7f, 0.3f, 1f);
            toastRoot.style.borderBottomColor = new Color(0.8f, 0.7f, 0.3f, 1f);
            toastRoot.style.borderLeftColor = new Color(0.8f, 0.7f, 0.3f, 1f);
            toastRoot.style.borderRightColor = new Color(0.8f, 0.7f, 0.3f, 1f);
            toastRoot.style.display = DisplayStyle.None;
            var label = new Label();
            label.style.fontSize = 36;
            label.style.unityFontStyleAndWeight = FontStyle.Bold;
            toastRoot.Add(label);
            var reasonLabel = new Label();
            reasonLabel.style.fontSize = 22;
            reasonLabel.style.unityTextAlign = TextAnchor.MiddleCenter;
            reasonLabel.style.marginTop = 4;
            toastRoot.Add(reasonLabel);
            root.Add(toastRoot);
            _moneyToastRoots[0] = toastRoot;
            _moneyToastLabels[0] = label;
            _moneyToastReasonLabels[0] = reasonLabel;
        }
    }

    /// <summary>Show a brief visual under the given player's info when their money changes (pay or receive).</summary>
    public void ShowMoneyChange(int playerIndex, int amount, bool isIncome, string reason = null)
    {
        if (amount <= 0) return;
        int i = playerIndex >= 0 && playerIndex < MaxPlayers ? playerIndex : 0;
        if (_moneyToastRoots[i] == null || _moneyToastLabels[i] == null) return;

        if (_moneyToastRoutines[i] != null)
            StopCoroutine(_moneyToastRoutines[i]);

        string sign = isIncome ? "+" : "−";
        _moneyToastLabels[i].text = $"{sign}₦{amount:N0}";
        _moneyToastLabels[i].style.color = isIncome ? new Color(0.3f, 0.9f, 0.4f) : new Color(1f, 0.45f, 0.4f);
        if (_moneyToastReasonLabels[i] != null)
        {
            _moneyToastReasonLabels[i].text = !string.IsNullOrEmpty(reason) ? reason : (isIncome ? "Money received" : "Money paid");
            _moneyToastReasonLabels[i].style.display = DisplayStyle.Flex;
        }

        if (GameSoundManager.Instance != null)
        {
            if (isIncome) GameSoundManager.Instance.PlayMoneyIn();
            else GameSoundManager.Instance.PlayMoneyOut();
            GameSoundManager.Instance.NotifyActivity();
        }

        _moneyToastRoutines[i] = StartCoroutine(AnimateMoneyToast(i));
    }

    /// <summary>Backward compatibility: show money change for player 0 (e.g. current player). Prefer ShowMoneyChange(playerIndex, ...).</summary>
    public void ShowMoneyChange(int amount, bool isIncome, string reason = null)
    {
        ShowMoneyChange(0, amount, isIncome, reason);
    }

    IEnumerator AnimateMoneyToast(int playerIndex)
    {
        int i = playerIndex >= 0 && playerIndex < MaxPlayers ? playerIndex : 0;
        VisualElement toastRoot = _moneyToastRoots[i];
        if (toastRoot == null) { _moneyToastRoutines[i] = null; yield break; }
        toastRoot.style.display = DisplayStyle.Flex;
        toastRoot.style.opacity = 0f;

        float durationIn = 0.25f;
        float t = 0f;
        while (t < durationIn)
        {
            t += Time.deltaTime;
            float a = Mathf.Clamp01(t / durationIn);
            toastRoot.style.opacity = a;
            yield return null;
        }
        toastRoot.style.opacity = 1f;

        yield return new WaitForSeconds(1.8f);

        float durationOut = 0.2f;
        t = 0f;
        while (t < durationOut)
        {
            t += Time.deltaTime;
            float a = 1f - Mathf.Clamp01(t / durationOut);
            toastRoot.style.opacity = a;
            yield return null;
        }
        toastRoot.style.display = DisplayStyle.None;
        toastRoot.style.opacity = 1f;
        _moneyToastRoutines[i] = null;
    }
    
    void InitializePropertyPanel()
    {
        if (propertyPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Property Panel Document not assigned!");
            return;
        }
        
        var root = propertyPanelDocument.rootVisualElement;
        PropertyPanel = root.Q<VisualElement>("PropertyPanel");
        PropertyText = root.Q<Label>("PropertyText");
        BuyButton = root.Q<Button>("BuyButton");
        SkipButton = root.Q<Button>("SkipButton");
        
        ApplyHeaderGloss(root, "PropertyHeader");
        
        if (root != null)
        {
            root.style.display = DisplayStyle.None;
            root.pickingMode = PickingMode.Position;
        }
        else
            Debug.LogWarning("PropertyPanel root not found!");
        if (BuyButton != null) BuyButton.pickingMode = PickingMode.Position;
        if (SkipButton != null) SkipButton.pickingMode = PickingMode.Position;
    }
    
    void InitializeJailPanel()
    {
        if (jailPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Jail Panel Document not assigned!");
            return;
        }
        
        var root = jailPanelDocument.rootVisualElement;
        JailPanel = root.Q<VisualElement>("JailPanel");
        JailStatusText = root.Q<Label>("JailStatusText");
        PayBailButton = root.Q<Button>("PayBailButton");
        UseCardButton = root.Q<Button>("UseCardButton");
        WaitButton = root.Q<Button>("WaitButton");
        
        ApplyHeaderGloss(root, "JailHeader");
        
        // Hide entire document root by default
        if (root != null)
            root.style.display = DisplayStyle.None;
        else
            Debug.LogWarning("JailPanel root not found!");
    }
    
    void InitializeCardPanel()
    {
        if (cardPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Card Panel Document not assigned!");
            return;
        }
        
        // Ensure GameObject is active
        if (!cardPanelDocument.gameObject.activeInHierarchy)
        {
            cardPanelDocument.gameObject.SetActive(true);
        }
        if (!cardPanelDocument.enabled)
        {
            cardPanelDocument.enabled = true;
        }
        
        // Ensure card panel renders on top of Main HUD when shown (HUD uses 100)
        if (cardPanelDocument.panelSettings != null && cardPanelDocument.panelSettings.sortingOrder < 150)
        {
            cardPanelDocument.panelSettings.sortingOrder = 150;
        }
        var root = cardPanelDocument.rootVisualElement;
        CardPanel = root.Q<VisualElement>("CardPanel");
        CardIcon = root.Q<VisualElement>("CardIcon");
        CardTitleText = root.Q<Label>("CardTitleText");
        CardTopicText = root.Q<Label>("CardTopicText");
        CardDescriptionText = root.Q<Label>("CardDescriptionText");
        CardOkButton = root.Q<Button>("CardOkButton");
        CardAltButton = root.Q<Button>("CardAltButton");
        
        // Ensure button is visible and enabled
        if (CardOkButton != null)
        {
            CardOkButton.style.display = DisplayStyle.Flex;
            CardOkButton.SetEnabled(true);
        }
        if (CardAltButton != null)
        {
            CardAltButton.style.display = DisplayStyle.None;
            CardAltButton.SetEnabled(true);
        }
        else
        {
            Debug.LogError("UIDocumentManager: CardOkButton not found in CardPanel!");
        }
        
        ApplyHeaderGloss(root, "CardHeader");
        
        if (root != null)
        {
            root.style.display = DisplayStyle.None;
            root.pickingMode = PickingMode.Position;
        }
        else
            Debug.LogWarning("CardPanel root not found!");
        if (CardOkButton != null) CardOkButton.pickingMode = PickingMode.Position;
        if (CardAltButton != null) CardAltButton.pickingMode = PickingMode.Position;
    }
    
    // Helper methods for showing/hiding panels
    // Note: We hide/show the entire document root, not just the panel element
    const float StandardPopupTopPadding = 200f;
    const float TradePopupTopPadding = 200f;

    void ApplyPropertyPanelPositioning(UIDocument doc, VisualElement panel, float topPadding = StandardPopupTopPadding)
    {
        // Source of truth is UXML/USS. Runtime code intentionally avoids popup layout edits.
    }

    void ApplyStandardPopupLayout(UIDocument doc, string panelName)
    {
        // Source of truth is UXML/USS. Runtime code intentionally avoids popup layout edits.
    }

    public void ShowPropertyPanel() 
    { 
        if (propertyPanelDocument != null && propertyPanelDocument.rootVisualElement != null)
        {
            ApplyStandardPopupLayout(propertyPanelDocument, "PropertyPanel");
            propertyPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
            if (propertyPanelDocument.transform != null)
                propertyPanelDocument.transform.SetAsLastSibling();
        }
    }
    
    public void HidePropertyPanel() 
    { 
        if (propertyPanelDocument != null && propertyPanelDocument.rootVisualElement != null)
            propertyPanelDocument.rootVisualElement.style.display = DisplayStyle.None; 
    }
    
    public void ShowJailPanel() 
    { 
        if (jailPanelDocument != null && jailPanelDocument.rootVisualElement != null)
        {
            ApplyStandardPopupLayout(jailPanelDocument, "JailPanel");
            jailPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex; 
        }
    }
    
    public void HideJailPanel() 
    { 
        if (jailPanelDocument != null && jailPanelDocument.rootVisualElement != null)
            jailPanelDocument.rootVisualElement.style.display = DisplayStyle.None; 
    }
    
    public void ShowCardPanel() 
    { 
        if (cardPanelDocument == null)
        {
            Debug.LogError("UIDocumentManager: CardPanelDocument is null! Cannot show card panel.");
            return;
        }
        
        // Ensure GameObject is active
        if (!cardPanelDocument.gameObject.activeInHierarchy)
        {
            cardPanelDocument.gameObject.SetActive(true);
        }
        if (!cardPanelDocument.enabled)
        {
            cardPanelDocument.enabled = true;
        }
        
        if (cardPanelDocument.rootVisualElement != null)
        {
            var root = cardPanelDocument.rootVisualElement;
            ApplyStandardPopupLayout(cardPanelDocument, "CardPanel");
            root.style.display = DisplayStyle.Flex;
            root.style.visibility = Visibility.Visible;
            root.style.opacity = 1f;
            if (cardPanelDocument.panelSettings != null)
                cardPanelDocument.panelSettings.sortingOrder = 200;
            if (cardPanelDocument.transform != null)
                cardPanelDocument.transform.SetAsLastSibling();
            if (CardOkButton != null)
            {
                if (cardOkHandler != null)
                {
                    CardOkButton.clicked -= cardOkHandler;
                    cardOkHandler = null;
                }
                CardOkButton.style.display = DisplayStyle.Flex;
                CardOkButton.SetEnabled(true);
            }
            if (CardAltButton != null)
            {
                if (cardAltHandler != null)
                {
                    CardAltButton.clicked -= cardAltHandler;
                    cardAltHandler = null;
                }
                CardAltButton.style.display = DisplayStyle.None;
                CardAltButton.SetEnabled(true);
            }
        }
        else
        {
            Debug.LogError("UIDocumentManager: CardPanelDocument rootVisualElement is null!");
        }
    }
    
    public void HideCardPanel() 
    { 
        if (cardPanelDocument != null && cardPanelDocument.rootVisualElement != null)
            cardPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
    }

    /// <summary>
    /// Informational-only panel used for AI and human result messages.
    /// This panel is never interactive and auto-closes after delay.
    /// </summary>
    public void ShowResultNotification(string message, float autoCloseSeconds = 1.2f)
    {
        ShowCardPanel();
        SetCardContent(CardPanelMode.Perk, "RESULT", "", message ?? "", null, false);
        if (CardOkButton != null && cardOkHandler != null)
        {
            CardOkButton.clicked -= cardOkHandler;
            cardOkHandler = null;
        }
        if (CardAltButton != null && cardAltHandler != null)
        {
            CardAltButton.clicked -= cardAltHandler;
            cardAltHandler = null;
        }
        if (resultNotificationRoutine != null)
            StopCoroutine(resultNotificationRoutine);
        resultNotificationRoutine = StartCoroutine(AutoHideResultNotification(autoCloseSeconds));
    }

    IEnumerator AutoHideResultNotification(float delay)
    {
        yield return new WaitForSeconds(Mathf.Max(0.1f, delay));
        HideResultNotification();
    }

    public void HideResultNotification()
    {
        if (resultNotificationRoutine != null)
        {
            StopCoroutine(resultNotificationRoutine);
            resultNotificationRoutine = null;
        }
        HideCardPanel();
    }

    void EnsureJailSirenLight()
    {
        if (jailSirenLightBar != null) return;
        if (mainHUDDocument == null || mainHUDDocument.rootVisualElement == null) return;

        var root = mainHUDDocument.rootVisualElement;
        jailSirenLightBar = new VisualElement { name = "JailSirenLightBar" };
        jailSirenLightBar.style.position = Position.Absolute;
        jailSirenLightBar.style.top = 6;
        jailSirenLightBar.style.left = 6;
        jailSirenLightBar.style.right = 6;
        jailSirenLightBar.style.height = 8;
        jailSirenLightBar.style.backgroundColor = new Color(0.95f, 0.15f, 0.15f, 0.35f);
        jailSirenLightBar.style.borderBottomLeftRadius = 4;
        jailSirenLightBar.style.borderBottomRightRadius = 4;
        jailSirenLightBar.style.borderTopLeftRadius = 4;
        jailSirenLightBar.style.borderTopRightRadius = 4;
        jailSirenLightBar.style.display = DisplayStyle.None;
        jailSirenLightBar.pickingMode = PickingMode.Ignore;
        root.Add(jailSirenLightBar);
    }

    public void ShowJailSirenLight(float durationSeconds = 2.2f)
    {
        EnsureJailSirenLight();
        if (jailSirenLightBar == null) return;

        if (jailSirenRoutine != null)
            StopCoroutine(jailSirenRoutine);
        jailSirenRoutine = StartCoroutine(JailSirenLightRoutine(durationSeconds));
    }

    IEnumerator JailSirenLightRoutine(float durationSeconds)
    {
        if (jailSirenLightBar == null) yield break;
        jailSirenLightBar.style.display = DisplayStyle.Flex;

        float elapsed = 0f;
        float pulse = 0f;
        while (elapsed < Mathf.Max(0.2f, durationSeconds))
        {
            elapsed += Time.deltaTime;
            pulse += Time.deltaTime * 8f;
            bool red = Mathf.FloorToInt(pulse) % 2 == 0;
            jailSirenLightBar.style.backgroundColor = red
                ? new Color(0.95f, 0.15f, 0.15f, 0.35f)
                : new Color(0.2f, 0.4f, 1f, 0.35f);
            yield return null;
        }

        jailSirenLightBar.style.display = DisplayStyle.None;
        jailSirenRoutine = null;
    }

    public void ShowChoiceCard(string title, string description, string okText, string altText, System.Action onOk, System.Action onAlt)
    {
        ShowCardPanel();
        if (CardTitleText != null) CardTitleText.text = title ?? "";
        if (CardTopicText != null) CardTopicText.text = "";
        if (CardDescriptionText != null) CardDescriptionText.text = description ?? "";
        ApplyCardTextOverflow();

        if (CardOkButton != null)
        {
            CardOkButton.text = string.IsNullOrEmpty(okText) ? "OK" : okText;
            if (cardOkHandler != null)
                CardOkButton.clicked -= cardOkHandler;
            cardOkHandler = onOk;
            if (cardOkHandler != null)
                CardOkButton.clicked += cardOkHandler;
            CardOkButton.style.display = DisplayStyle.Flex;
            CardOkButton.SetEnabled(true);
        }
        if (CardAltButton != null)
        {
            CardAltButton.text = string.IsNullOrEmpty(altText) ? "USE" : altText;
            if (cardAltHandler != null)
                CardAltButton.clicked -= cardAltHandler;
            cardAltHandler = onAlt;
            if (cardAltHandler != null)
                CardAltButton.clicked += cardAltHandler;
            CardAltButton.style.display = DisplayStyle.Flex;
            CardAltButton.SetEnabled(true);
        }
    }

    public void SetCardIcon(Sprite icon)
    {
        if (CardIcon == null) return;
        if (icon == null)
        {
            CardIcon.style.backgroundImage = StyleKeyword.None;
            return;
        }
        // UI Toolkit needs Texture2D for backgroundImage; Sprite alone can show as missing texture
        Texture2D texture = SpriteToTexture2D(icon);
        if (texture != null)
        {
            CardIcon.style.backgroundImage = new StyleBackground(texture);
            CardIcon.style.backgroundSize = new StyleBackgroundSize(new BackgroundSize(BackgroundSizeType.Contain));
        }
        else
            CardIcon.style.backgroundImage = new StyleBackground(icon);
    }

    /// <summary>Show the card panel in non-interactive mode (no OK/alt buttons). Used for perk reveal animation.</summary>
    public void SetCardPanelInteractive(bool interactive)
    {
        if (CardOkButton != null)
        {
            CardOkButton.style.display = interactive ? DisplayStyle.Flex : DisplayStyle.None;
            CardOkButton.SetEnabled(interactive);
        }
        if (CardAltButton != null)
        {
            CardAltButton.style.display = interactive ? DisplayStyle.Flex : DisplayStyle.None;
            CardAltButton.SetEnabled(interactive);
        }
    }

    /// <param name="typeTitle">Card type in header: "CHANCE", "COMMUNITY CHEST", or "PERK CARD".</param>
    /// <param name="topic">Card topic between image and description (e.g. card title like "Pay for street repairs").</param>
    /// <param name="description">Card description text.</param>
    void SetCardContent(CardPanelMode mode, string typeTitle, string topic, string description, Sprite icon, bool interactive)
    {
        if (CardTitleText != null) CardTitleText.text = typeTitle ?? "";
        if (CardTopicText != null) CardTopicText.text = topic ?? "";
        if (CardDescriptionText != null) CardDescriptionText.text = description ?? "";
        Sprite useIcon = icon;
        if (useIcon == null && cardIconCatalog != null)
            useIcon = cardIconCatalog.GetSprite(mode);
        SetCardIcon(useIcon);
        SetCardPanelInteractive(interactive);
        ApplyCardTextOverflow();
    }

    void ApplyCardTextOverflow()
    {
        if (CardTitleText != null) { CardTitleText.style.whiteSpace = WhiteSpace.Normal; CardTitleText.style.overflow = Overflow.Visible; }
        if (CardTopicText != null) { CardTopicText.style.whiteSpace = WhiteSpace.Normal; CardTopicText.style.overflow = Overflow.Visible; }
        if (CardDescriptionText != null) { CardDescriptionText.style.whiteSpace = WhiteSpace.Normal; CardDescriptionText.style.overflow = Overflow.Visible; }
    }

    /// <summary>Unified API: show card with type title (CHANCE/COMMUNITY CHEST/PERK CARD), topic, description, and optional icon.</summary>
    public void ShowCard(CardPanelMode mode, string typeTitle, string topic, string description, Sprite icon = null, bool interactive = true)
    {
        ShowCardPanel();
        SetCardContent(mode, typeTitle ?? "", topic ?? "", description ?? "", icon, interactive);
        if (interactive && CardOkButton != null)
        {
            if (cardOkHandler != null) CardOkButton.clicked -= cardOkHandler;
            cardOkHandler = () => HideCardPanel();
            CardOkButton.clicked += cardOkHandler;
        }
    }

    /// <summary>Show a perk card in the dynamic panel. Header = "PERK CARD", topic = perk name, description = perk description.</summary>
    public void ShowCard(PerkCardInstance perk, bool interactive = true)
    {
        if (perk == null) return;
        Sprite icon = (cardIconCatalog != null) ? cardIconCatalog.GetSprite(perk.type) : null;
        ShowCard(CardPanelMode.Perk, "PERK CARD", perk.name, perk.description, icon, interactive);
    }

    /// <summary>Show a Chance or Community Chest card. Header = card type (CHANCE/COMMUNITY CHEST), topic = card title, description = card description. Single "Continue" button only (no USE CARD).</summary>
    public void ShowCard(Card card, CardDeckType deckType, System.Action onOkClicked = null)
    {
        if (card == null) return;
        string deckLabel = deckType == CardDeckType.Chance ? "CHANCE" : "COMMUNITY CHEST";
        Debug.Log($"[Card Visuals] Card display requested: \"{card.title}\" ({deckLabel}) — action will be applied when player continues.");
        ShowCardPanel();
        CardPanelMode mode = card.isGetOutOfJailFree ? CardPanelMode.GetOutOfJailFree : (deckType == CardDeckType.Chance ? CardPanelMode.Chance : CardPanelMode.CommunityChest);
        string typeTitle = deckType == CardDeckType.Chance ? "CHANCE" : "COMMUNITY CHEST";
        if (card.isGetOutOfJailFree) typeTitle = deckType == CardDeckType.Chance ? "CHANCE" : "COMMUNITY CHEST";
        Sprite icon = (cardIconCatalog != null) ? cardIconCatalog.GetSprite(mode) : null;
        SetCardContent(mode, typeTitle, card.title, card.description, icon, true);
        if (CardOkButton != null)
        {
            CardOkButton.text = "Continue";
            if (cardOkHandler != null) CardOkButton.clicked -= cardOkHandler;
            cardOkHandler = () =>
            {
                onOkClicked?.Invoke();
                HideCardPanel();
            };
            CardOkButton.clicked += cardOkHandler;
        }
        if (CardAltButton != null)
        {
            CardAltButton.style.display = DisplayStyle.None;
            CardAltButton.SetEnabled(false);
        }
        StartCoroutine(VerifyCardDisplayAfterShow(card.title, deckLabel));
    }

    /// <summary>Verifies that the card panel actually became visible after a show request. Logs a clear message if visuals did not display.</summary>
    IEnumerator VerifyCardDisplayAfterShow(string cardTitle, string deckLabel)
    {
        yield return null;
        yield return null;
        bool visible = IsCardPanelActuallyVisible();
        if (visible)
            Debug.Log($"[Card Visuals] Card display verified: \"{cardTitle}\" ({deckLabel}) — panel is visible.");
        else
            Debug.LogWarning($"[Card Visuals] Card action was logged but VISUALS DID NOT DISPLAY: \"{cardTitle}\" ({deckLabel}). Check: CardPanelDocument assigned on UIDocumentManager, Source Asset = CardPanel.uxml, GameObject and UIDocument enabled, PanelSettings sort order (e.g. 200).");
    }

    /// <summary>Returns true if the card panel document exists and its root is currently visible (display != None, object active).</summary>
    public bool IsCardPanelActuallyVisible()
    {
        if (cardPanelDocument == null) return false;
        if (!cardPanelDocument.gameObject.activeInHierarchy || !cardPanelDocument.enabled) return false;
        var root = cardPanelDocument.rootVisualElement;
        if (root == null) return false;
        return root.style.display != DisplayStyle.None;
    }
    
    void InitializeGameOverPanel()
    {
        if (gameOverPanelDocument == null)
        {
            // Game over panel is optional - don't warn if not assigned
            return;
        }
        
        var root = gameOverPanelDocument.rootVisualElement;
        GameOverPanel = root.Q<VisualElement>("GameOverPanel");
        WinnerNameText = root.Q<Label>("WinnerNameText");
        WinnerStatsText = root.Q<Label>("WinnerStatsText");
        GameOverOkButton = root.Q<Button>("GameOverOkButton");
        
        ApplyHeaderGloss(root, "GameOverHeader");
        
        // Hide entire document root by default
        if (root != null)
            root.style.display = DisplayStyle.None;
    }
    
    public void ShowGameOverPanel(Player winner)
    {
        if (gameOverPanelDocument == null) return;
        
        if (gameOverPanelDocument.rootVisualElement != null)
        {
            ApplyStandardPopupLayout(gameOverPanelDocument, "GameOverPanel");
            gameOverPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
        }
        
        if (WinnerNameText != null && winner != null)
        {
            WinnerNameText.text = $"🏆 {winner.playerName} WINS! 🏆";
        }
        
        if (WinnerStatsText != null && winner != null)
        {
            WinnerStatsText.text = $"Final Money: ₦{winner.Money:N0}\n" +
                                  $"Properties Owned: {winner.GetPropertyCount()}\n" +
                                  $"Net Worth: ₦{winner.GetNetWorth():N0}";
        }
        
        if (GameOverOkButton != null)
        {
            GameOverOkButton.clicked += () => {
                HideGameOverPanel();
                // TODO: Could reload scene or return to main menu
            };
        }
    }
    
    public void HideGameOverPanel()
    {
        if (gameOverPanelDocument != null && gameOverPanelDocument.rootVisualElement != null)
            gameOverPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
    }
    
    void InitializeTradePanel()
    {
        if (tradePanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Trade Panel Document not assigned!");
            return;
        }
        
        var root = tradePanelDocument.rootVisualElement;
        TradePanel = root.Q<VisualElement>("TradePanel");
        TradeTitleText = root.Q<Label>("TradeTitleText");
        TradeStatusText = root.Q<Label>("TradeStatusText");
        TradeTargetDropdown = root.Q<DropdownField>("TradeTargetDropdown");
        TradeOfferButton = root.Q<Button>("TradeOfferButton");
        TradeShowBoardButton = root.Q<Button>("TradeShowBoardButton");
        TradeCancelButton = root.Q<Button>("TradeCancelButton");
        TradeAcceptButton = root.Q<Button>("TradeAcceptButton");
        TradeRejectButton = root.Q<Button>("TradeRejectButton");
        TradeResponseButtons = root.Q<VisualElement>("TradeResponseButtons");
        Player1PropertiesList = root.Q<ScrollView>("Player1PropertiesList");
        Player2PropertiesList = root.Q<ScrollView>("Player2PropertiesList");
        Player1CardsList = root.Q<ScrollView>("Player1CardsList");
        Player2CardsList = root.Q<ScrollView>("Player2CardsList");
        Player1MoneyField = root.Q<IntegerField>("Player1MoneyField");
        Player2MoneyField = root.Q<IntegerField>("Player2MoneyField");

        ApplyHeaderGloss(root, "TradeHeader");

        // Legacy alias
        TradeConfirmButton = TradeOfferButton;
        
        // Hide entire document root by default
        if (root != null)
            root.style.display = DisplayStyle.None;
        else
            Debug.LogWarning("TradePanel root not found!");
    }
    
    void InitializeBankruptcyPanel()
    {
        if (bankruptcyPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Bankruptcy Panel Document not assigned!");
            return;
        }
        
        var root = bankruptcyPanelDocument.rootVisualElement;
        BankruptcyPanel = root.Q<VisualElement>("BankruptcyPanel");
        BankruptcyTitleText = root.Q<Label>("BankruptcyTitleText");
        BankruptcyMessageText = root.Q<Label>("BankruptcyMessageText");
        BankruptcyDetailsText = root.Q<Label>("BankruptcyDetailsText");
        BankruptcyOkButton = root.Q<Button>("BankruptcyOkButton");
        
        ApplyHeaderGloss(root, "BankruptcyHeader");
        
        // Hide entire document root by default
        if (root != null)
            root.style.display = DisplayStyle.None;
        else
            Debug.LogWarning("BankruptcyPanel root not found!");
    }
    
    public void ShowTradePanel()
    {
        if (tradePanelDocument != null && tradePanelDocument.rootVisualElement != null)
        {
            var tradePanel = TradePanel != null ? TradePanel : tradePanelDocument.rootVisualElement.Q<VisualElement>("TradePanel");
            if (tradePanel != null)
                ApplyPropertyPanelPositioning(tradePanelDocument, tradePanel, TradePopupTopPadding);
            tradePanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
        }
    }
    
    public void HideTradePanel()
    {
        if (tradePanelDocument != null && tradePanelDocument.rootVisualElement != null)
            tradePanelDocument.rootVisualElement.style.display = DisplayStyle.None;
    }
    
    /// <summary>
    /// Show bankruptcy notification panel.
    /// </summary>
    public void ShowBankruptcyNotification(Player bankruptPlayer, Player creditor, int debtAmount)
    {
        if (bankruptPlayer == null || bankruptcyPanelDocument == null) return;
        
        if (bankruptcyPanelDocument.rootVisualElement != null)
        {
            ApplyStandardPopupLayout(bankruptcyPanelDocument, "BankruptcyPanel");
            bankruptcyPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
        }
        
        if (BankruptcyMessageText != null)
        {
            BankruptcyMessageText.text = $"⚠️ {bankruptPlayer.playerName} is BANKRUPT!";
        }
        
        if (BankruptcyDetailsText != null)
        {
            string details = $"Cannot pay ₦{debtAmount:N0}";
            if (creditor != null)
            {
                details += $"\n\nProperties transferred to {creditor.playerName}";
            }
            else
            {
                details += "\n\nProperties returned to bank";
            }
            BankruptcyDetailsText.text = details;
        }
        
        if (BankruptcyOkButton != null)
        {
            BankruptcyOkButton.clicked -= HideBankruptcyPanel; // Remove if already connected
            BankruptcyOkButton.clicked += HideBankruptcyPanel;
        }
        
        Debug.Log($"=== BANKRUPTCY NOTIFICATION ===");
        Debug.Log($"{bankruptPlayer.playerName} is bankrupt! Cannot pay ₦{debtAmount:N0}");
    }
    
    public void HideBankruptcyPanel()
    {
        if (bankruptcyPanelDocument != null && bankruptcyPanelDocument.rootVisualElement != null)
            bankruptcyPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
    }
    
    void InitializeRentPaymentPanel()
    {
        if (rentPaymentPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Rent Payment Panel Document not assigned!");
            return;
        }
        
        var root = rentPaymentPanelDocument.rootVisualElement;
        RentPaymentPanel = root.Q<VisualElement>("RentPaymentPanel");
        RentPaymentTitleText = root.Q<Label>("RentPaymentTitleText");
        RentPaymentMessageText = root.Q<Label>("RentPaymentMessageText");
        RentPaymentDetailsText = root.Q<Label>("RentPaymentDetailsText");
        RentPaymentOkButton = root.Q<Button>("RentPaymentOkButton");
        
        ApplyHeaderGloss(root, "RentPaymentHeader");
        
        if (root != null)
        {
            root.style.display = DisplayStyle.None;
            root.pickingMode = PickingMode.Position;
        }
        else
            Debug.LogWarning("RentPaymentPanel root not found!");
        if (RentPaymentOkButton != null) RentPaymentOkButton.pickingMode = PickingMode.Position;
    }
    
    /// <summary>
    /// Show rent payment notification panel.
    /// </summary>
    public void ShowRentPaymentNotification(Player payer, Player owner, Property property, int rentAmount)
    {
        if (payer == null || owner == null || property == null || rentPaymentPanelDocument == null) return;
        
        if (rentPaymentPanelDocument.rootVisualElement != null)
        {
            ApplyStandardPopupLayout(rentPaymentPanelDocument, "RentPaymentPanel");
            rentPaymentPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
            if (rentPaymentPanelDocument.transform != null)
                rentPaymentPanelDocument.transform.SetAsLastSibling();
        }
        
        if (RentPaymentMessageText != null)
        {
            RentPaymentMessageText.text = $"{payer.playerName} paid rent";
        }
        
        if (RentPaymentDetailsText != null)
        {
            string details = $"Property: {property.propertyName}\n";
            details += $"Rent: ₦{rentAmount:N0}\n";
            details += $"Paid to: {owner.playerName}";
            RentPaymentDetailsText.text = details;
        }
        
        if (RentPaymentOkButton != null)
        {
            RentPaymentOkButton.clicked -= HideRentPaymentPanel; // Remove if already connected
            RentPaymentOkButton.clicked += HideRentPaymentPanel;
        }
        
        TurnDebugState.LogTurnAction("DecisionShown", $"type=RentAck payer={payer.playerName} owner={owner.playerName} amount={rentAmount}", setPhase: "AwaitAck", setInputEnabled: "OK");
        Debug.Log($"💰 {payer.playerName} paid ₦{rentAmount:N0} rent to {owner.playerName} for {property.propertyName}");
    }
    
    public void HideRentPaymentPanel()
    {
        TurnDebugState.LogTurnAction("DecisionResolved", "type=RentAck (OK clicked)", setPhase: "ResolveTile", setInputEnabled: "None");
        if (rentPaymentPanelDocument != null && rentPaymentPanelDocument.rootVisualElement != null)
            rentPaymentPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
    }
    
    void InitializeTileDetailsPanel()
    {
        if (tileDetailsPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Tile Details Panel Document not assigned!");
            return;
        }
        
        var root = tileDetailsPanelDocument.rootVisualElement;
        TileDetailsPanel = root.Q<VisualElement>("TileDetailsPanel");
        TileDetailsHeader = root.Q<VisualElement>("TileDetailsHeader");
        TileDetailsTitleText = root.Q<Label>("TileDetailsTitleText");
        TileDetailsNameText = root.Q<Label>("TileDetailsNameText");
        TileDetailsTypeText = root.Q<Label>("TileDetailsTypeText");
        TileDetailsPriceText = root.Q<Label>("TileDetailsPriceText");
        TileDetailsOwnerText = root.Q<Label>("TileDetailsOwnerText");
        TileDetailsRentText = root.Q<Label>("TileDetailsRentText");
        TileDetailsBuildingsText = root.Q<Label>("TileDetailsBuildingsText");
        TileDetailsMortgageText = root.Q<Label>("TileDetailsMortgageText");
        TileDetailsGroupText = root.Q<Label>("TileDetailsGroupText");
        TileDetailsRentTable = root.Q<ScrollView>("TileDetailsRentTable");
        TileDetailsColorSwatch = root.Q<VisualElement>("TileDetailsColorSwatch");
        TileDetailsBuildingsIcons = root.Q<VisualElement>("TileDetailsBuildingsIcons");
        TileDetailsMortgageButton = root.Q<Button>("TileDetailsMortgageButton");
        TileDetailsRedeemButton = root.Q<Button>("TileDetailsRedeemButton");
        TileDetailsCloseButton = root.Q<Button>("TileDetailsCloseButton");
        
        // Connect close button
        if (TileDetailsCloseButton != null)
        {
            TileDetailsCloseButton.clicked -= HideTileDetailsPanel;
            TileDetailsCloseButton.clicked += HideTileDetailsPanel;
        }

        if (TileDetailsMortgageButton != null)
        {
            TileDetailsMortgageButton.clicked -= OnTileDetailsMortgageClicked;
            TileDetailsMortgageButton.clicked += OnTileDetailsMortgageClicked;
        }

        if (TileDetailsRedeemButton != null)
        {
            TileDetailsRedeemButton.clicked -= OnTileDetailsRedeemClicked;
            TileDetailsRedeemButton.clicked += OnTileDetailsRedeemClicked;
        }
        
        ApplyHeaderGloss(root, "TileDetailsHeader");
        
        // Hide entire document root by default
        if (root != null)
            root.style.display = DisplayStyle.None;
        else
            Debug.LogWarning("TileDetailsPanel root not found!");
    }
    
    /// <summary>
    /// Show tile details panel with information about the clicked tile.
    /// </summary>
    public void ShowTileDetails(TileInfo tile)
    {
        Debug.Log($"=== UIDocumentManager.ShowTileDetails called for {tile?.gameObject?.name ?? "NULL"} ===");
        
        if (tile == null)
        {
            Debug.LogError("UIDocumentManager.ShowTileDetails: Tile is null!");
            return;
        }
        
        if (tileDetailsPanelDocument == null)
        {
            Debug.LogError("[GameMechanics] FAIL: Tile details not shown - Tile Details Panel Document is NOT assigned on UIDocumentManager.");
            return;
        }
        
        if (tileDetailsPanelDocument.rootVisualElement == null)
        {
            Debug.LogError("[GameMechanics] FAIL: Tile details not shown - Tile Details Panel rootVisualElement is null (UIDocument may not be initialized).");
            return;
        }
        
        Debug.Log("UIDocumentManager: Setting panel display to Flex...");
        ApplyStandardPopupLayout(tileDetailsPanelDocument, "TileDetailsPanel");
        tileDetailsPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
        Debug.Log("UIDocumentManager: Panel display set to Flex. Panel should be visible now.");

        CurrentTileDetails = tile;
        
        // Update title
        if (TileDetailsTitleText != null)
        {
            TileDetailsTitleText.text = "TILE DETAILS";
        }
        
        // Update name
        if (TileDetailsNameText != null)
        {
            if (tile.property != null)
            {
                TileDetailsNameText.text = tile.property.propertyName;
            }
            else
            {
                TileDetailsNameText.text = tile.tileType.ToString();
            }
        }
        
        // Update type
        if (TileDetailsTypeText != null)
        {
            TileDetailsTypeText.text = tile.tileType.ToString();
            if (tile.property != null)
            {
                TileDetailsTypeText.text += $" • {tile.property.propertyType}";
            }
        }
        
        // Update property-specific details
        if (tile.property != null)
        {
            Property prop = tile.property;
            
            // Price
            if (TileDetailsPriceText != null)
            {
                TileDetailsPriceText.text = $"₦{prop.price:N0}";
            }
            
            // Owner
            if (TileDetailsOwnerText != null)
            {
                if (prop.owner != null)
                {
                    TileDetailsOwnerText.text = prop.owner.playerName;
                }
                else
                {
                    TileDetailsOwnerText.text = "Unowned";
                }
            }
            
            // Current rent
            if (TileDetailsRentText != null)
            {
                int currentRent = prop.CurrentRent;
                TileDetailsRentText.text = $"₦{currentRent:N0}";
            }
            
            // Buildings
            if (TileDetailsBuildingsText != null)
            {
                if (prop.hasHotel)
                {
                    TileDetailsBuildingsText.text = "1 Hotel";
                }
                else if (prop.houses > 0)
                {
                    TileDetailsBuildingsText.text = $"{prop.houses} House{(prop.houses > 1 ? "s" : "")}";
                }
                else
                {
                    TileDetailsBuildingsText.text = "None";
                }
            }
            
            UpdateBuildingIcons(prop);
            
            // Mortgage status
            if (TileDetailsMortgageText != null)
            {
                TileDetailsMortgageText.text = prop.isMortgaged ? "Mortgaged" : "Not Mortgaged";
            }
            
            // Group
            if (TileDetailsGroupText != null)
            {
                string groupInfo = $"Group: {prop.groupId}";
                if (!string.IsNullOrEmpty(prop.tierLabel))
                {
                    groupInfo += $" ({prop.tierLabel})";
                }
                TileDetailsGroupText.text = groupInfo;
            }
            
            if (TileDetailsColorSwatch != null)
            {
                TileDetailsColorSwatch.style.backgroundColor = GetPropertySwatchColor(prop);
            }
            
            // Rent table (for Regular properties)
            if (TileDetailsRentTable != null && prop.propertyType == PropertyType.Regular)
            {
                TileDetailsRentTable.Clear();
                
                if (prop.rentByLevel != null && prop.rentByLevel.Length >= 6)
                {
                    AddRentRow(TileDetailsRentTable, "Rent", $"₦{prop.rentByLevel[0]:N0}");
                    for (int i = 1; i <= 4; i++)
                    {
                        AddRentRow(TileDetailsRentTable, $"With {i} House{(i > 1 ? "s" : "")}", $"₦{prop.rentByLevel[i]:N0}");
                    }
                    AddRentRow(TileDetailsRentTable, "With Hotel", $"₦{prop.rentByLevel[5]:N0}");
                }
            }

            UpdateTileDetailsMortgageButtons(tile);
        }
        else
        {
            // Non-property tile
            if (TileDetailsPriceText != null)
                TileDetailsPriceText.text = "";
            if (TileDetailsOwnerText != null)
                TileDetailsOwnerText.text = "";
            if (TileDetailsRentText != null)
                TileDetailsRentText.text = "";
            if (TileDetailsBuildingsText != null)
                TileDetailsBuildingsText.text = "";
            if (TileDetailsMortgageText != null)
                TileDetailsMortgageText.text = "";
            if (TileDetailsGroupText != null)
                TileDetailsGroupText.text = "";
            if (TileDetailsRentTable != null)
                TileDetailsRentTable.Clear();
            if (TileDetailsColorSwatch != null)
                TileDetailsColorSwatch.style.backgroundColor = new Color(0.2f, 0.2f, 0.2f);

            UpdateTileDetailsMortgageButtons(null);
            UpdateBuildingIcons(null);
        }
    }
    
    public void HideTileDetailsPanel()
    {
        if (tileDetailsPanelDocument != null && tileDetailsPanelDocument.rootVisualElement != null)
            tileDetailsPanelDocument.rootVisualElement.style.display = DisplayStyle.None;

        CurrentTileDetails = null;
        UpdateTileDetailsMortgageButtons(null);
        
        // Remove highlight from currently selected tile
        TileClickHandler selectedTile = FindFirstObjectByType<TileClickHandler>();
        if (selectedTile != null)
        {
            // Find all tile click handlers and hide their highlights
            TileClickHandler[] allHandlers = FindObjectsByType<TileClickHandler>(FindObjectsSortMode.None);
            foreach (TileClickHandler handler in allHandlers)
            {
                handler.HideHighlight();
            }
        }
    }

    void InitializePropertyManagerPanel()
    {
        if (propertyManagerPanelDocument == null || propertyManagerPanelDocument.rootVisualElement == null) return;
        var root = propertyManagerPanelDocument.rootVisualElement;
        root.style.display = DisplayStyle.None;
        var closeBtn = root.Q<Button>("PropertyManagerCloseButton");
        if (closeBtn != null)
        {
            closeBtn.clicked -= HidePropertyManagerPanel;
            closeBtn.clicked += HidePropertyManagerPanel;
        }
        // Scrim click: close when clicking the overlay background (not the inner panel)
        root.RegisterCallback<ClickEvent>(evt => { if (evt.target == root) ExitManageMode(); });
        // Escape key: close when panel is open (root must be focusable; we focus it on open)
        root.RegisterCallback<KeyDownEvent>(evt => { if (evt.keyCode == KeyCode.Escape) ExitManageMode(); });
        root.focusable = true;

        var filterAll = root.Q<Button>("PropertyManagerFilterAll");
        var filterBuildable = root.Q<Button>("PropertyManagerFilterBuildable");
        var filterMortgaged = root.Q<Button>("PropertyManagerFilterMortgaged");
        var filterMonopoly = root.Q<Button>("PropertyManagerFilterMonopoly");

        if (filterAll != null)
        {
            filterAll.clicked -= OnPropertyFilterAllClicked;
            filterAll.clicked += OnPropertyFilterAllClicked;
        }
        if (filterBuildable != null)
        {
            filterBuildable.clicked -= OnPropertyFilterBuildableClicked;
            filterBuildable.clicked += OnPropertyFilterBuildableClicked;
        }
        if (filterMortgaged != null)
        {
            filterMortgaged.clicked -= OnPropertyFilterMortgagedClicked;
            filterMortgaged.clicked += OnPropertyFilterMortgagedClicked;
        }
        if (filterMonopoly != null)
        {
            filterMonopoly.clicked -= OnPropertyFilterMonopolyClicked;
            filterMonopoly.clicked += OnPropertyFilterMonopolyClicked;
        }
    }

    /// <summary>Open the Property Manager panel. Optionally focus the row for the given tile. Disables Roll and End Turn while open.</summary>
    public void OpenPropertyManagerPanel(TileInfo focusTile = null)
    {
        // Resolve the correct document: must have PropertyManagerList (Manage Properties panel), not Buy/Skip panel
        UIDocument doc = propertyManagerPanelDocument;
        if (doc == null || doc.rootVisualElement == null)
        {
            Debug.LogWarning("OpenPropertyManagerPanel: Property Manager Panel Document is not assigned. Assign a UIDocument with PropertyManagerPanel.uxml to the 'Property Manager Panel Document' slot on UIDocumentManager.");
            return;
        }
        var list = doc.rootVisualElement.Q<ScrollView>("PropertyManagerList");
        if (list == null)
        {
            // Wrong document assigned (e.g. PropertyPanel.uxml). Try to find PropertyManagerPanel in the scene.
            doc = null;
            var allDocs = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
            foreach (var d in allDocs)
            {
                if (d == null || d.visualTreeAsset == null || d.rootVisualElement == null) continue;
                if (d.visualTreeAsset.name.IndexOf("PropertyManagerPanel", StringComparison.OrdinalIgnoreCase) < 0) continue;
                if (d.rootVisualElement.Q<ScrollView>("PropertyManagerList") != null)
                {
                    doc = d;
                    propertyManagerPanelDocument = d;
                    InitializePropertyManagerPanel();
                    break;
                }
            }
            if (doc == null)
            {
                Debug.LogWarning("OpenPropertyManagerPanel: Assigned document is not the Manage Properties panel (missing PropertyManagerList). Assign PropertyManagerPanel.uxml to 'Property Manager Panel Document', or add a UIDocument with PropertyManagerPanel.uxml to the scene.");
                return;
            }
        }
        _propertyManagerFocusTile = focusTile;
        _propertyManagerFilter = PropertyManagerFilter.All;
        Debug.Log("ManageMode: Enter Panel");
        ApplyStandardPopupLayout(doc, "PropertyManagerPanel");
        doc.rootVisualElement.style.display = DisplayStyle.Flex;
        doc.rootVisualElement.Focus();
        IsPropertyManagerPanelOpen = true;
        if (RollButton != null) { RollButton.Enabled = false; Debug.Log("HUD: Roll disabled (Manage open)"); }
        if (EndTurnButton != null) { EndTurnButton.Enabled = false; Debug.Log("HUD: EndTurn disabled (Manage open)"); }
        RefreshPropertyManagerPanel();
    }

    /// <summary>Single exit from Manage mode: hide panel, clear highlights, re-enable HUD from current phase. Call from Close, scrim, Escape.</summary>
    public void ExitManageMode()
    {
        Debug.Log("ManageMode: ExitManageMode called");
        if (propertyManagerPanelDocument != null && propertyManagerPanelDocument.rootVisualElement != null)
            propertyManagerPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
        IsPropertyManagerPanelOpen = false;
        _propertyManagerFocusTile = null;
        TileClickHandler[] allHandlers = FindObjectsByType<TileClickHandler>(FindObjectsSortMode.None);
        foreach (TileClickHandler handler in allHandlers)
            handler.HideHighlight();
        if (turnManager != null)
            turnManager.RefreshHUDButtonsForCurrentPhase();
        Debug.Log("ManageMode: ExitManageMode HUD refresh done");
    }

    /// <summary>Close the Property Manager panel. Wired to Close button; delegates to ExitManageMode.</summary>
    public void HidePropertyManagerPanel()
    {
        ExitManageMode();
    }

    /// <summary>Rebuild the property list and focus in the panel. Call after open or after an action (build/sell/mortgage/redeem).</summary>
    public void RefreshPropertyManagerPanel()
    {
        if (propertyManagerPanelDocument == null || !IsPropertyManagerPanelOpen) return;
        if (turnManager == null) return;
        Player p = turnManager.GetCurrentPlayer();
        if (p == null) return;
        var scroll = propertyManagerPanelDocument.rootVisualElement.Q<ScrollView>("PropertyManagerList");
        if (scroll == null) return;
        var container = scroll.contentContainer;
        container.Clear();

        container.style.flexDirection = FlexDirection.Row;
        container.style.flexWrap = Wrap.Wrap;
        container.style.justifyContent = Justify.FlexStart;
        container.style.alignContent = Align.FlexStart;

        UpdatePropertyFilterButtonStates();

        var tiles = p.GetOwnedPropertyTiles();
        int added = 0;
        foreach (TileInfo t in tiles)
        {
            if (t.property == null) continue;
            if (!PassesPropertyFilter(p, t.property)) continue;
            var row = CreatePropertyManagerRow(t);
            if (row != null) { container.Add(row); added++; }
        }
        if (added == 0)
        {
            var emptyLabel = new Label(GetEmptyPropertyFilterMessage());
            emptyLabel.style.whiteSpace = WhiteSpace.Normal;
            emptyLabel.style.paddingTop = 12;
            emptyLabel.style.paddingBottom = 12;
            emptyLabel.AddToClassList("pm-empty-state");
            container.Add(emptyLabel);
        }
    }

    VisualElement CreatePropertyManagerRow(TileInfo tile)
    {
        if (tile?.property == null || turnManager == null) return null;
        Player p = turnManager.GetCurrentPlayer();
        if (p == null) return null;
        Property prop = tile.property;

        var card = new VisualElement();
        card.AddToClassList("pm-card");

        var title = new Label(prop.propertyName);
        title.AddToClassList("pm-card-title");
        card.Add(title);

        var subtitle = new Label(GetPropertySubtitle(prop));
        subtitle.AddToClassList("pm-card-subtitle");
        card.Add(subtitle);

        var actions = new VisualElement();
        actions.AddToClassList("pm-actions");

        bool canBuild = CanBuildFromManager(p, prop);
        bool canSell = CanSellFromManager(prop);
        bool canMortgage = CanMortgageFromManager(prop);
        bool canRedeem = CanRedeemFromManager(p, prop);

        actions.Add(CreatePropertyActionButton("BUILD", GetBuildActionCostText(prop), "pm-action-build", canBuild, () => RequestBuild(prop)));
        actions.Add(CreatePropertyActionButton("SELL", GetSellActionCostText(prop), "pm-action-sell", canSell, () => RequestSell(prop)));
        actions.Add(CreatePropertyActionButton("MORTGAGE", $"₦{(prop.price / 2):N0}", "pm-action-mortgage", canMortgage, () => RequestMortgage(prop)));
        actions.Add(CreatePropertyActionButton("REDEEM", $"₦{Mathf.RoundToInt(prop.price * 0.6f):N0}", "pm-action-redeem", canRedeem, () => RequestRedeem(prop)));

        card.Add(actions);
        return card;
    }

    VisualElement CreatePropertyActionButton(string title, string cost, string variantClass, bool enabled, Action onClick)
    {
        var actionWrap = new VisualElement();
        actionWrap.AddToClassList("pm-action-item");
        if (!string.IsNullOrEmpty(variantClass))
            actionWrap.AddToClassList(variantClass);

        var actionButton = new Button(() => { if (enabled) onClick?.Invoke(); });
        actionButton.AddToClassList("pm-action-button");
        actionButton.SetEnabled(enabled);

        // Placeholder icon area; replace style background-image with sprite later.
        var icon = new VisualElement();
        icon.AddToClassList("pm-action-icon");
        actionButton.Add(icon);

        var titleLabel = new Label(title);
        titleLabel.AddToClassList("pm-action-title");
        actionButton.Add(titleLabel);

        var costLabel = new Label(cost);
        costLabel.AddToClassList("pm-action-cost");
        actionButton.Add(costLabel);

        actionWrap.Add(actionButton);
        return actionWrap;
    }

    bool PassesPropertyFilter(Player p, Property prop)
    {
        if (p == null || prop == null) return false;
        switch (_propertyManagerFilter)
        {
            case PropertyManagerFilter.Buildable:
                return CanBuildFromManager(p, prop);
            case PropertyManagerFilter.Mortgaged:
                return prop.isMortgaged;
            case PropertyManagerFilter.Monopoly:
                return PlayerOwnsFullGroup(p, prop.groupId);
            default:
                return true;
        }
    }

    bool PlayerOwnsFullGroup(Player p, string groupId)
    {
        if (p == null || string.IsNullOrEmpty(groupId)) return false;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        bool foundGroup = false;
        foreach (TileInfo t in allTiles)
        {
            if (t == null || t.tileType != TileType.Property || t.property == null) continue;
            if (!string.Equals(t.property.groupId, groupId, StringComparison.OrdinalIgnoreCase)) continue;
            foundGroup = true;
            if (t.property.owner != p) return false;
        }
        return foundGroup;
    }

    bool CanBuildFromManager(Player p, Property prop)
    {
        if (p == null || prop == null) return false;
        if (prop.owner != p) return false;
        if (prop.propertyType != PropertyType.Regular) return false;
        if (prop.isMortgaged) return false;
        if (prop.hasHotel) return false;
        if (!PlayerOwnsFullGroup(p, prop.groupId)) return false;
        return true;
    }

    bool CanSellFromManager(Property prop)
    {
        if (prop == null) return false;
        return prop.houses > 0 || prop.hasHotel;
    }

    bool CanMortgageFromManager(Property prop)
    {
        if (prop == null) return false;
        if (prop.isMortgaged) return false;
        if (prop.houses > 0 || prop.hasHotel) return false;
        return true;
    }

    bool CanRedeemFromManager(Player p, Property prop)
    {
        if (p == null || prop == null) return false;
        if (!prop.isMortgaged) return false;
        int redeemCost = Mathf.RoundToInt(prop.price * 0.6f);
        return p.CanAfford(redeemCost);
    }

    string GetPropertySubtitle(Property prop)
    {
        if (prop == null) return "";
        string tier = string.IsNullOrEmpty(prop.tierLabel) ? "Property" : prop.tierLabel;
        string state = prop.isMortgaged ? "Mortgaged" : (prop.hasHotel ? "Hotel" : $"Houses: {prop.houses}");
        return $"{tier}  •  {state}";
    }

    string GetBuildActionCostText(Property prop)
    {
        if (prop == null) return "N/A";
        if (prop.hasHotel) return "MAX";
        if (prop.houses >= 4) return $"₦{prop.hotelCost:N0}";
        return $"₦{prop.houseCost:N0}";
    }

    string GetSellActionCostText(Property prop)
    {
        if (prop == null) return "N/A";
        if (prop.hasHotel) return $"₦{Mathf.RoundToInt(prop.hotelCost * 0.5f):N0}";
        if (prop.houses > 0) return $"₦{Mathf.RoundToInt(prop.houseCost * 0.5f):N0}";
        return "N/A";
    }

    string GetEmptyPropertyFilterMessage()
    {
        switch (_propertyManagerFilter)
        {
            case PropertyManagerFilter.Buildable:
                return "No buildable properties yet.";
            case PropertyManagerFilter.Mortgaged:
                return "No mortgaged properties.";
            case PropertyManagerFilter.Monopoly:
                return "No complete color-group monopoly yet.";
            default:
                return "No properties yet — land on and buy properties to manage them here.";
        }
    }

    void UpdatePropertyFilterButtonStates()
    {
        if (propertyManagerPanelDocument == null || propertyManagerPanelDocument.rootVisualElement == null) return;
        var root = propertyManagerPanelDocument.rootVisualElement;
        var allBtn = root.Q<Button>("PropertyManagerFilterAll");
        var buildableBtn = root.Q<Button>("PropertyManagerFilterBuildable");
        var mortgagedBtn = root.Q<Button>("PropertyManagerFilterMortgaged");
        var monopolyBtn = root.Q<Button>("PropertyManagerFilterMonopoly");

        SetFilterButtonSelected(allBtn, _propertyManagerFilter == PropertyManagerFilter.All);
        SetFilterButtonSelected(buildableBtn, _propertyManagerFilter == PropertyManagerFilter.Buildable);
        SetFilterButtonSelected(mortgagedBtn, _propertyManagerFilter == PropertyManagerFilter.Mortgaged);
        SetFilterButtonSelected(monopolyBtn, _propertyManagerFilter == PropertyManagerFilter.Monopoly);
    }

    void SetFilterButtonSelected(Button button, bool selected)
    {
        if (button == null) return;
        button.RemoveFromClassList("pm-filter-selected");
        if (selected) button.AddToClassList("pm-filter-selected");
    }

    void OnPropertyFilterAllClicked()
    {
        _propertyManagerFilter = PropertyManagerFilter.All;
        RefreshPropertyManagerPanel();
    }

    void OnPropertyFilterBuildableClicked()
    {
        _propertyManagerFilter = PropertyManagerFilter.Buildable;
        RefreshPropertyManagerPanel();
    }

    void OnPropertyFilterMortgagedClicked()
    {
        _propertyManagerFilter = PropertyManagerFilter.Mortgaged;
        RefreshPropertyManagerPanel();
    }

    void OnPropertyFilterMonopolyClicked()
    {
        _propertyManagerFilter = PropertyManagerFilter.Monopoly;
        RefreshPropertyManagerPanel();
    }

    void RequestBuild(Property prop) { if (turnManager != null && turnManager.CanPerformPropertyAction()) turnManager.RequestBuild(prop); RefreshPropertyManagerPanel(); }
    void RequestSell(Property prop) { if (turnManager != null && turnManager.CanPerformPropertyAction()) turnManager.RequestSell(prop); RefreshPropertyManagerPanel(); }
    void RequestMortgage(Property prop) { if (turnManager != null && turnManager.CanPerformPropertyAction()) turnManager.RequestMortgage(prop); RefreshPropertyManagerPanel(); }
    void RequestRedeem(Property prop) { if (turnManager != null && turnManager.CanPerformPropertyAction()) turnManager.RequestRedeem(prop); RefreshPropertyManagerPanel(); }

    void UpdateTileDetailsMortgageButtons(TileInfo tile)
    {
        if (TileDetailsMortgageButton == null && TileDetailsRedeemButton == null) return;

        Player currentPlayer = turnManager != null ? turnManager.GetCurrentPlayer() : null;
        Property prop = tile != null ? tile.property : null;

        if (prop == null || currentPlayer == null)
        {
            if (TileDetailsMortgageButton != null)
            {
                TileDetailsMortgageButton.SetEnabled(false);
                TileDetailsMortgageButton.text = "MORTGAGE";
            }
            if (TileDetailsRedeemButton != null)
            {
                TileDetailsRedeemButton.SetEnabled(false);
                TileDetailsRedeemButton.text = "REDEEM";
            }
            return;
        }

        bool isOwner = prop.owner == currentPlayer;

        if (TileDetailsMortgageButton != null)
        {
            if (!isOwner)
            {
                TileDetailsMortgageButton.SetEnabled(false);
                TileDetailsMortgageButton.text = "MORTGAGE";
            }
            else if (prop.isMortgaged)
            {
                TileDetailsMortgageButton.SetEnabled(false);
                TileDetailsMortgageButton.text = "MORTGAGED";
            }
            else if (prop.houses > 0 || prop.hasHotel)
            {
                TileDetailsMortgageButton.SetEnabled(false);
                TileDetailsMortgageButton.text = "SELL BUILDINGS";
            }
            else
            {
                int mortgageValue = prop.price / 2;
                TileDetailsMortgageButton.SetEnabled(true);
                TileDetailsMortgageButton.text = $"MORTGAGE\n₦{mortgageValue:N0}";
            }
        }

        if (TileDetailsRedeemButton != null)
        {
            if (!isOwner)
            {
                TileDetailsRedeemButton.SetEnabled(false);
                TileDetailsRedeemButton.text = "REDEEM";
            }
            else if (!prop.isMortgaged)
            {
                TileDetailsRedeemButton.SetEnabled(false);
                TileDetailsRedeemButton.text = "REDEEM";
            }
            else
            {
                int redemptionCost = (int)(prop.price * 0.6f);
                bool canAfford = currentPlayer.CanAfford(redemptionCost);
                TileDetailsRedeemButton.SetEnabled(canAfford);
                TileDetailsRedeemButton.text = canAfford ? $"REDEEM\n₦{redemptionCost:N0}" : "CAN'T AFFORD";
            }
        }
    }

    void OnTileDetailsMortgageClicked()
    {
        if (CurrentTileDetails == null || CurrentTileDetails.property == null) return;
        if (turnManager == null) return;

        Player currentPlayer = turnManager.GetCurrentPlayer();
        if (currentPlayer == null) return;

        if (currentPlayer.MortgageProperty(CurrentTileDetails.property))
        {
            ShowTileDetails(CurrentTileDetails);
        }
    }

    void OnTileDetailsRedeemClicked()
    {
        if (CurrentTileDetails == null || CurrentTileDetails.property == null) return;
        if (turnManager == null) return;

        Player currentPlayer = turnManager.GetCurrentPlayer();
        if (currentPlayer == null) return;

        if (currentPlayer.RedeemProperty(CurrentTileDetails.property))
        {
            ShowTileDetails(CurrentTileDetails);
        }
    }

    void AddRentRow(ScrollView table, string label, string value)
    {
        if (table == null) return;

        VisualElement row = new VisualElement();
        row.AddToClassList("tile-details-rent-row");

        Label left = new Label(label);
        left.AddToClassList("tile-details-kv-key");

        Label right = new Label(value);
        right.AddToClassList("tile-details-kv-value");

        row.Add(left);
        row.Add(right);
        table.Add(row);
    }

    Color GetPropertySwatchColor(Property prop)
    {
        if (prop == null) return new Color(0.2f, 0.2f, 0.2f);

        if (!string.IsNullOrEmpty(prop.tierLabel))
        {
            switch (prop.tierLabel.ToLower())
            {
                case "satellite":
                    return new Color(0.8f, 0.2f, 0.2f);
                case "mid":
                    return new Color(1f, 0.84f, 0f);
                case "prime":
                    return new Color(0.2f, 0.6f, 0.2f);
                default:
                    return new Color(0.3f, 0.3f, 0.8f);
            }
        }

        return new Color(0.3f, 0.45f, 0.75f);
    }

    Sprite GetHeaderGlossSprite()
    {
        return uiHeaderGlossSprite != null ? uiHeaderGlossSprite : tileDetailsHeaderGlossSprite;
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



    void UpdateBuildingIcons(Property prop)
    {
        if (TileDetailsBuildingsIcons == null)
            return;

        TileDetailsBuildingsIcons.Clear();

        if (prop == null)
            return;

        if (prop.hasHotel)
        {
            AddBuildingIcon(tileDetailsHotelIcon);
            return;
        }

        int houseCount = Mathf.Clamp(prop.houses, 0, 4);
        for (int i = 0; i < houseCount; i++)
        {
            AddBuildingIcon(tileDetailsHouseIcon);
        }
    }

    void AddBuildingIcon(Sprite sprite)
    {
        if (TileDetailsBuildingsIcons == null) return;

        VisualElement icon = new VisualElement();
        icon.AddToClassList("tile-details-building-icon");

        if (sprite != null)
        {
            icon.style.backgroundImage = new StyleBackground(sprite);
        }

        TileDetailsBuildingsIcons.Add(icon);
    }
    
    void InitializePlayerStatisticsPanel()
    {
        if (playerStatisticsPanelDocument == null)
        {
            Debug.LogWarning("UIDocumentManager: Player Statistics Panel Document not assigned!");
            return;
        }
        
        var root = playerStatisticsPanelDocument.rootVisualElement;
        PlayerStatisticsPanel = root.Q<VisualElement>("PlayerStatisticsPanel");
        StatisticsTitleText = root.Q<Label>("StatisticsTitleText");
        StatisticsCharacterImage = root.Q<VisualElement>("StatisticsCharacterImage");
        StatisticsPlayerNameText = root.Q<Label>("StatisticsPlayerNameText");
        StatisticsCharacterNameText = root.Q<Label>("StatisticsCharacterNameText");
        StatisticsMoneyText = root.Q<Label>("StatisticsMoneyText");
        StatisticsPropertiesText = root.Q<Label>("StatisticsPropertiesText");
        StatisticsNetWorthText = root.Q<Label>("StatisticsNetWorthText");
        StatisticsDetailsText = root.Q<Label>("StatisticsDetailsText");
        CharacterBackstoryText = root.Q<Label>("CharacterBackstoryText");
        CharacterPerksText = root.Q<Label>("CharacterPerksText");
        CharacterCastsText = root.Q<Label>("CharacterCastsText");
        CharacterPerksContainer = root.Q<VisualElement>("CharacterPerksContainer");
        CharacterFaultsContainer = root.Q<VisualElement>("CharacterFaultsContainer");
        StatisticsCloseButton = root.Q<Button>("StatisticsCloseButton");
        
        ApplyHeaderGloss(root, "PlayerStatisticsHeader");
        ApplyPlayerStatisticsVisualStyle();
        
        // Connect close button
        if (StatisticsCloseButton != null)
        {
            StatisticsCloseButton.clicked -= HidePlayerStatisticsPanel;
            StatisticsCloseButton.clicked += HidePlayerStatisticsPanel;
        }
        
        // Hide entire document root by default
        if (root != null)
            root.style.display = DisplayStyle.None;
        else
            Debug.LogWarning("PlayerStatisticsPanel root not found!");
    }

    void ApplyPlayerStatisticsVisualStyle()
    {
        // Source of truth is UXML/USS. Runtime code intentionally avoids popup layout/style edits.
    }

    void InitializeCharacterSetupPanel()
    {
        if (characterSetupPanelDocument == null)
        {
            UIDocument[] docs = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
            foreach (UIDocument doc in docs)
            {
                if (doc != null && doc.visualTreeAsset != null && doc.visualTreeAsset.name.Contains("CharacterSetupPanel"))
                {
                    characterSetupPanelDocument = doc;
                    break;
                }
            }
        }
        if (characterSetupPanelDocument == null) return;

        VisualElement root = characterSetupPanelDocument.rootVisualElement;
        if (root == null) return;

        CharacterSetupPanel = root.Q<VisualElement>("CharacterSetupPanel");
        CharacterSetupList = root.Q<ScrollView>("CharacterSetupList");
        CharacterSetupOkButton = root.Q<Button>("CharacterSetupOkButton");

        if (CharacterSetupOkButton != null)
        {
            CharacterSetupOkButton.clicked -= OnCharacterSetupOkClicked;
            CharacterSetupOkButton.clicked += OnCharacterSetupOkClicked;
        }

        root.style.display = DisplayStyle.None;
    }

    public void ShowCharacterSetupPanel(List<Player> playerList, Action onOk)
    {
        if (characterSetupPanelDocument == null || characterSetupPanelDocument.rootVisualElement == null)
        {
            onOk?.Invoke();
            return;
        }

        _characterSetupOkHandler = onOk;
        VisualElement root = characterSetupPanelDocument.rootVisualElement;
        root.style.display = DisplayStyle.Flex;
        ApplyCharacterSetupPanelLayout();

        if (CharacterSetupList != null)
        {
            CharacterSetupList.Clear();
            if (playerList != null)
            {
                foreach (Player player in playerList)
                {
                    if (player == null) continue;
                    CharacterSetupList.Add(CreateCharacterSetupRow(player));
                }
            }
        }
    }

    void OnCharacterSetupOkClicked()
    {
        if (characterSetupPanelDocument != null && characterSetupPanelDocument.rootVisualElement != null)
            characterSetupPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
        Action callback = _characterSetupOkHandler;
        _characterSetupOkHandler = null;
        callback?.Invoke();
    }

    void ApplyCharacterSetupPanelLayout()
    {
        // Source of truth is UXML/USS. Runtime code intentionally avoids popup layout edits.
    }

    VisualElement CreateCharacterSetupRow(Player player)
    {
        VisualElement row = new VisualElement();
        row.AddToClassList("char-setup-row");

        Label name = new Label($"{player.playerName} - {player.characterName}");
        name.AddToClassList("char-setup-name");
        row.Add(name);

        Label perks = new Label($"Perks: {player.GetPerkEffectsSummary()}");
        perks.AddToClassList("char-setup-perks");
        row.Add(perks);

        Label faults = new Label($"Casts/Faults: {player.GetFaultEffectsSummary()}");
        faults.AddToClassList("char-setup-faults");
        row.Add(faults);

        VisualElement timingRow = new VisualElement();
        timingRow.AddToClassList("char-setup-timing");
        Label timingLabel = new Label("Trigger timing");
        timingLabel.AddToClassList("char-setup-timing-label");
        timingRow.Add(timingLabel);

        List<string> choices = new List<string> { "Auto", "Early", "Mid", "Late" };
        DropdownField timing = new DropdownField(choices, 0);
        timing.value = player.perkTimingPreference.ToString();
        timing.AddToClassList("char-setup-timing-dropdown");
        timing.RegisterValueChangedCallback(evt =>
        {
            if (Enum.TryParse(evt.newValue, out PerkTimingPreference parsed))
                player.perkTimingPreference = parsed;
            if (player.runtimeState != null)
                player.runtimeState.gamePhase = evt.newValue;
        });
        timingRow.Add(timing);
        row.Add(timingRow);

        return row;
    }
    
    /// <summary>
    /// Show player statistics panel.
    /// </summary>
    public void ShowPlayerStatistics(Player player, int anchorPlayerIndex = -1)
    {
        if (player == null || playerStatisticsPanelDocument == null) return;
        
        if (playerStatisticsPanelDocument.rootVisualElement != null)
        {
            playerStatisticsPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
        }
        _lastStatisticsAnchorPlayerIndex = anchorPlayerIndex;
        
        // Character from database (for image and text)
        Character c = null;
        if (turnManager != null && turnManager.characterDB != null && player.characterIndex >= 0 && player.characterIndex < turnManager.characterDB.CharacterCount)
            c = turnManager.characterDB.GetCharacter(player.characterIndex);

        // Dynamic title
        if (StatisticsTitleText != null)
        {
            string charName = c != null ? c.characterName : (player.characterName ?? "CHARACTER");
            StatisticsTitleText.text = charName.ToUpper();
        }

        // Character portrait
        if (StatisticsCharacterImage != null)
        {
            Sprite portrait = (c != null && c.fullImage != null) ? c.fullImage : (c != null && c.tokenImage != null ? c.tokenImage : null);
            if (portrait != null)
            {
                Texture2D texture = SpriteToTexture2D(portrait);
                if (texture != null)
                {
                    StatisticsCharacterImage.style.backgroundImage = new StyleBackground(texture);
                    StatisticsCharacterImage.style.display = DisplayStyle.Flex;
                }
                else
                {
                    StatisticsCharacterImage.style.backgroundImage = StyleKeyword.None;
                    StatisticsCharacterImage.style.backgroundColor = player.playerColor;
                }
            }
            else
            {
                StatisticsCharacterImage.style.backgroundImage = StyleKeyword.None;
                StatisticsCharacterImage.style.backgroundColor = player.playerColor;
            }
        }

        // Player name and character name
        if (StatisticsPlayerNameText != null)
            StatisticsPlayerNameText.text = !string.IsNullOrEmpty(player.playerName) ? player.playerName : $"Player {player.playerIndex + 1}";
        if (StatisticsCharacterNameText != null)
            StatisticsCharacterNameText.text = c != null ? c.characterName : (player.characterName ?? "");

        // Financial stats
        if (StatisticsMoneyText != null)
            StatisticsMoneyText.text = $"\u20A6{player.Money:N0}";
        if (StatisticsPropertiesText != null)
            StatisticsPropertiesText.text = $"{player.GetPropertyCount()} Properties";
        if (StatisticsNetWorthText != null)
            StatisticsNetWorthText.text = $"Net Worth: \u20A6{player.GetNetWorth():N0}";

        // Detail breakdown
        if (StatisticsDetailsText != null)
        {
            int money = player.Money;
            int propertyValue = player.GetNetWorth() - money;
            StatisticsDetailsText.text = $"Cash \u20A6{money:N0}  \u00B7  Property \u20A6{propertyValue:N0}";
        }

        // Backstory
        if (CharacterBackstoryText != null)
            CharacterBackstoryText.text = c != null ? c.backstory : "";

        // Perk / Fault text fallbacks
        if (CharacterPerksText != null)
        {
            string dynamicPerks = player.GetPerkEffectsSummary();
            CharacterPerksText.text = !string.IsNullOrEmpty(dynamicPerks)
                ? dynamicPerks
                : (c != null ? $"{c.perk1.name} \u2014 {c.perk1.description}\n{c.perk2.name} \u2014 {c.perk2.description}" : "");
        }
        if (CharacterCastsText != null)
        {
            string dynamicFaults = player.GetFaultEffectsSummary();
            CharacterCastsText.text = !string.IsNullOrEmpty(dynamicFaults)
                ? dynamicFaults
                : (c != null ? $"{c.cast1.name} \u2014 {c.cast1.description}\n{c.cast2.name} \u2014 {c.cast2.description}" : "");
        }

        // Behavior status cards
        PopulateCharacterBehaviorCards(player, true);
        PopulateCharacterBehaviorCards(player, false);
    }
    
    /// <summary>Show player profile (stats + character) when profile is clicked on HUD. Same as ShowPlayerStatistics.</summary>
    public void ShowPlayerProfileDetail(Player player)
    {
        ShowPlayerStatistics(player, _lastStatisticsAnchorPlayerIndex);
    }
    
    void OnPlayerProfileClicked(int playerIndex)
    {
        if (turnManager == null || turnManager.players == null) return;
        if (playerIndex < 0 || playerIndex >= turnManager.players.Count) return;
        _lastStatisticsAnchorPlayerIndex = playerIndex;
        Player p = turnManager.players[playerIndex];
        if (p != null && !p.IsEliminated)
            ShowPlayerStatistics(p, playerIndex);
    }
    
    public void HidePlayerStatisticsPanel()
    {
        if (playerStatisticsPanelDocument != null && playerStatisticsPanelDocument.rootVisualElement != null)
            playerStatisticsPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
    }

    void PopulateCharacterBehaviorCards(Player player, bool perks)
    {
        VisualElement container = perks ? CharacterPerksContainer : CharacterFaultsContainer;
        if (container == null || player == null) return;

        container.Clear();
        List<CharacterBehaviorStatusItem> items = player.BuildBehaviorStatusItems();
        bool found = false;
        foreach (CharacterBehaviorStatusItem item in items)
        {
            if (item == null || item.isPerk != perks) continue;
            found = true;
            container.Add(CreateBehaviorCard(item));
        }

        if (!found)
        {
            Label empty = new Label(perks ? "No perk status available." : "No fault/cast status available.");
            empty.AddToClassList("behavior-empty");
            container.Add(empty);
        }
    }

    VisualElement CreateBehaviorCard(CharacterBehaviorStatusItem item)
    {
        VisualElement card = new VisualElement();
        card.AddToClassList("behavior-card");
        card.AddToClassList(item.isPerk ? "behavior-card-perk" : "behavior-card-fault");

        VisualElement head = new VisualElement();
        head.AddToClassList("behavior-card-head");

        Label title = new Label(item.title);
        title.AddToClassList("behavior-card-title");
        head.Add(title);

        Label badge = new Label(item.state);
        badge.AddToClassList("behavior-card-badge");
        head.Add(badge);
        card.Add(head);

        Label counter = new Label(item.counter);
        counter.AddToClassList("behavior-card-counter");
        card.Add(counter);
        return card;
    }

    void PositionStatisticsPanelNearProfile(int playerIndex)
    {
        // Source of truth is UXML/USS. Runtime code intentionally avoids popup layout edits.
    }

    VisualElement GetPlayerInfoElement(int playerIndex)
    {
        switch (playerIndex)
        {
            case 0: return Player1Info;
            case 1: return Player2Info;
            case 2: return Player3Info;
            case 3: return Player4Info;
            default: return null;
        }
    }
    
    // Update player info in UI (for player index 0-3)
    public void UpdatePlayerInfo(int playerIndex, Player player)
    {
        if (player == null) return;
        
        VisualElement info = null;
        VisualElement avatar = null;
        Label nameLabel = null;
        Label characterLabel = null;
        Label moneyLabel = null;
        
        // Get the correct UI elements based on player index
        switch (playerIndex)
        {
            case 0:
                info = Player1Info;
                avatar = Player1Avatar;
                nameLabel = Player1Name;
                characterLabel = Player1CharacterName;
                moneyLabel = Player1Money;
                break;
            case 1:
                info = Player2Info;
                avatar = Player2Avatar;
                nameLabel = Player2Name;
                characterLabel = Player2CharacterName;
                moneyLabel = Player2Money;
                break;
            case 2:
                info = Player3Info;
                avatar = Player3Avatar;
                nameLabel = Player3Name;
                characterLabel = Player3CharacterName;
                moneyLabel = Player3Money;
                break;
            case 3:
                info = Player4Info;
                avatar = Player4Avatar;
                nameLabel = Player4Name;
                characterLabel = Player4CharacterName;
                moneyLabel = Player4Money;
                break;
        }
        
        // Ensure character name is set from CharacterDatabase if empty
        if (string.IsNullOrEmpty(player.characterName) && turnManager != null && turnManager.characterDB != null
            && player.characterIndex >= 0 && player.characterIndex < turnManager.characterDB.CharacterCount)
        {
            Character c = turnManager.characterDB.GetCharacter(player.characterIndex);
            if (c != null)
                player.characterName = c.characterName;
        }

        if (mainHUDController != null)
        {
            mainHUDController.UpdatePlayerInfo(playerIndex, player);
            return;
        }

        if (info != null)
        {
            // Show/hide based on whether player exists and is not eliminated
            if (player.IsEliminated)
            {
                info.style.display = DisplayStyle.None;
            }
            else
            {
                info.style.display = DisplayStyle.Flex;
                
                // Update name (player name only; character/title in separate label)
                if (nameLabel != null)
                {
                    nameLabel.text = !string.IsNullOrEmpty(player.playerName) ? player.playerName : $"Player {player.playerIndex + 1}";
                }
                
                // Update character/title (e.g. "Street Hustler")
                if (characterLabel != null)
                {
                    string characterName = !string.IsNullOrEmpty(player.characterName) ? player.characterName : "";
                    int perkCount = (player.characterEffects != null && player.characterEffects.PerkKeys != null) ? player.characterEffects.PerkKeys.Count : 0;
                    int faultCount = (player.characterEffects != null && player.characterEffects.FaultKeys != null) ? player.characterEffects.FaultKeys.Count : 0;
                    characterLabel.text = (perkCount > 0 || faultCount > 0)
                        ? $"{characterName}  P{perkCount}/F{faultCount}"
                        : characterName;
                    string perkSummary = player.GetPerkEffectsSummary();
                    string faultSummary = player.GetFaultEffectsSummary();
                    if (!string.IsNullOrEmpty(perkSummary) || !string.IsNullOrEmpty(faultSummary))
                    {
                        characterLabel.tooltip =
                            $"Perks: {(string.IsNullOrEmpty(perkSummary) ? "None" : perkSummary)}\n" +
                            $"Faults: {(string.IsNullOrEmpty(faultSummary) ? "None" : faultSummary)}";
                    }
                }
                
                // Update money
                if (moneyLabel != null)
                {
                    moneyLabel.text = $"₦{player.Money:N0}";
                }
                
                // Update avatar color and visual (if avatar exists)
                if (avatar != null)
                {
                    // Try to load and display avatar sprite
                    PlayerVisualManager visualManager = PlayerVisualManager.Instance;
                    if (visualManager != null && player.tokenSpriteIndex >= 0)
                    {
                        Sprite tokenSprite = visualManager.GetTokenSprite(player.tokenSpriteIndex);
                        if (tokenSprite != null)
                        {
                            // Convert Sprite to Texture2D for UI Toolkit
                            Texture2D texture = SpriteToTexture2D(tokenSprite);
                            if (texture != null)
                            {
                                // Create a background image from the sprite
                                avatar.style.backgroundImage = new StyleBackground(texture);
                                avatar.style.backgroundSize = new StyleBackgroundSize(new BackgroundSize(BackgroundSizeType.Contain));
                                avatar.style.backgroundRepeat = new StyleBackgroundRepeat(new BackgroundRepeat(Repeat.NoRepeat, Repeat.NoRepeat));
                                avatar.style.backgroundPositionX = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
                                avatar.style.backgroundPositionY = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
                                avatar.style.backgroundColor = new StyleColor(Color.white); // Use white tint to show sprite colors
                            }
                            else
                            {
                                // Fallback to player color
                                avatar.style.backgroundImage = StyleKeyword.None;
                                avatar.style.backgroundColor = player.playerColor;
                            }
                        }
                        else
                        {
                            // No sprite available, use player color as fallback
                            avatar.style.backgroundImage = StyleKeyword.None;
                            avatar.style.backgroundColor = player.playerColor;
                        }
                    }
                    else
                    {
                        // No visual manager or invalid index, use player color
                        avatar.style.backgroundImage = StyleKeyword.None;
                        avatar.style.backgroundColor = player.playerColor;
                    }
                }

                UpdatePerkCardOnProfile(playerIndex, player);
            }
        }
    }

    void EnsurePerkCardSlot(int playerIndex, VisualElement infoRoot)
    {
        if (playerIndex < 0 || playerIndex >= MaxPlayers || infoRoot == null) return;
        if (_perkCardRoots[playerIndex] != null) return;

        var root = new VisualElement { name = $"PerkCardProfile_{playerIndex}" };
        root.AddToClassList("hud-perk-card-root");

        var icon = new VisualElement { name = $"PerkCardIcon_{playerIndex}" };
        icon.AddToClassList("hud-perk-card-icon");

        var textWrap = new VisualElement { name = $"PerkCardTextWrap_{playerIndex}" };
        textWrap.AddToClassList("hud-perk-card-text-wrap");

        var nameLabel = new Label { name = $"PerkCardName_{playerIndex}" };
        nameLabel.AddToClassList("hud-perk-card-name");

        var usesLabel = new Label { name = $"PerkCardUses_{playerIndex}" };
        usesLabel.AddToClassList("hud-perk-card-uses");

        textWrap.Add(nameLabel);
        textWrap.Add(usesLabel);
        root.Add(icon);
        root.Add(textWrap);
        infoRoot.Add(root);

        _perkCardRoots[playerIndex] = root;
        _perkCardIcons[playerIndex] = icon;
        _perkCardNames[playerIndex] = nameLabel;
        _perkCardUses[playerIndex] = usesLabel;
    }

    void UpdatePerkCardOnProfile(int playerIndex, Player player)
    {
        if (player == null) return;
        VisualElement infoRoot = GetPlayerInfoRoot(playerIndex);
        if (infoRoot == null) return;
        EnsurePerkCardSlot(playerIndex, infoRoot);

        var root = _perkCardRoots[playerIndex];
        var icon = _perkCardIcons[playerIndex];
        var name = _perkCardNames[playerIndex];
        var uses = _perkCardUses[playerIndex];
        if (root == null || name == null || uses == null) return;

        PerkCardInstance perk = (player.perkCards != null && player.perkCards.Count > 0) ? player.perkCards[0] : null;
        if (perk == null)
        {
            root.style.display = DisplayStyle.None;
            return;
        }

        root.style.display = DisplayStyle.Flex;
        name.text = string.IsNullOrEmpty(perk.name) ? "Perk Card" : perk.name;
        uses.text = perk.maxUses > 0 ? $"Uses: {perk.usesRemaining}/{perk.maxUses}" : "Passive";

        if (icon != null)
        {
            Sprite perkSprite = (cardIconCatalog != null) ? cardIconCatalog.GetSprite(perk.type) : null;
            if (perkSprite != null)
            {
                Texture2D t = SpriteToTexture2D(perkSprite);
                if (t != null)
                    icon.style.backgroundImage = new StyleBackground(t);
                else
                    icon.style.backgroundImage = new StyleBackground(perkSprite);
            }
            else
            {
                icon.style.backgroundImage = StyleKeyword.None;
            }
        }
    }

    VisualElement GetPlayerInfoRoot(int playerIndex)
    {
        switch (playerIndex)
        {
            case 0: return Player1Info;
            case 1: return Player2Info;
            case 2: return Player3Info;
            case 3: return Player4Info;
            default: return null;
        }
    }

    public void PinPerkCardToProfile(int playerIndex, PerkCardInstance perk, bool playWiggle = true)
    {
        if (playerIndex < 0 || playerIndex >= MaxPlayers) return;
        VisualElement infoRoot = GetPlayerInfoRoot(playerIndex);
        if (infoRoot == null) return;
        EnsurePerkCardSlot(playerIndex, infoRoot);

        var root = _perkCardRoots[playerIndex];
        var name = _perkCardNames[playerIndex];
        var uses = _perkCardUses[playerIndex];
        var icon = _perkCardIcons[playerIndex];
        if (root == null || name == null || uses == null) return;

        if (perk == null)
        {
            root.style.display = DisplayStyle.None;
            return;
        }

        root.style.display = DisplayStyle.Flex;
        name.text = string.IsNullOrEmpty(perk.name) ? "Perk Card" : perk.name;
        uses.text = perk.maxUses > 0 ? $"Uses: {perk.usesRemaining}/{perk.maxUses}" : "Passive";

        if (icon != null)
        {
            Sprite perkSprite = (cardIconCatalog != null) ? cardIconCatalog.GetSprite(perk.type) : null;
            if (perkSprite != null)
            {
                Texture2D t = SpriteToTexture2D(perkSprite);
                if (t != null)
                    icon.style.backgroundImage = new StyleBackground(t);
                else
                    icon.style.backgroundImage = new StyleBackground(perkSprite);
            }
        }

        if (playWiggle)
        {
            if (_perkCardWiggles[playerIndex] != null)
                StopCoroutine(_perkCardWiggles[playerIndex]);
            _perkCardWiggles[playerIndex] = StartCoroutine(PlayPinnedPerkWiggle(playerIndex));
        }
    }

    IEnumerator PlayPinnedPerkWiggle(int playerIndex)
    {
        var root = (playerIndex >= 0 && playerIndex < MaxPlayers) ? _perkCardRoots[playerIndex] : null;
        if (root == null) yield break;

        float elapsed = 0f;
        const float duration = 0.55f;
        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float phase = elapsed * 24f;
            float angle = Mathf.Sin(phase) * 6f * Mathf.Clamp01((duration - elapsed) / duration + 0.25f);
            root.style.rotate = new StyleRotate(new Rotate(angle));
            yield return null;
        }
        root.style.rotate = new StyleRotate(new Rotate(0f));
        _perkCardWiggles[playerIndex] = null;
    }

    public void SetActivePlayerIndicator(int playerIndex)
    {
        activePlayerIndex = playerIndex;
        if (mainHUDController != null)
        {
            mainHUDController.SetActivePlayerIndicator(playerIndex);
            return;
        }

        if (!activePulseScheduled && mainHUDDocument != null && mainHUDDocument.rootVisualElement != null)
        {
            activePulseScheduled = true;
            var root = mainHUDDocument.rootVisualElement;
            root.schedule.Execute(() =>
            {
                activePulseOn = !activePulseOn;
                ApplyActivePlayerPulse();
            }).Every(700);
        }
    }

    private void ApplyActivePlayerPulse()
    {
        ApplyActiveClass(Player1Info, Player1Avatar, activePlayerIndex == 0 && activePulseOn);
        ApplyActiveClass(Player2Info, Player2Avatar, activePlayerIndex == 1 && activePulseOn);
        ApplyActiveClass(Player3Info, Player3Avatar, activePlayerIndex == 2 && activePulseOn);
        ApplyActiveClass(Player4Info, Player4Avatar, activePlayerIndex == 3 && activePulseOn);
    }

    private void ApplyActiveClass(VisualElement info, VisualElement avatar, bool active)
    {
        if (info != null)
        {
            if (active) info.AddToClassList("active-player-pulse");
            else info.RemoveFromClassList("active-player-pulse");
        }
        if (avatar != null)
        {
            if (active) avatar.AddToClassList("active-player-pulse");
            else avatar.RemoveFromClassList("active-player-pulse");
        }
    }
    
    /// <summary>
    /// Updates all player info slots based on active players.
    /// Distributes players evenly between left and right sides.
    /// Hides slots for players that don't exist or are eliminated.
    /// </summary>
    public void UpdateAllPlayerInfo()
    {
        if (turnManager == null || turnManager.players == null)
        {
            // Hide all player slots if no turn manager
            HideAllPlayerSlots();
            return;
        }
        
        // Get list of active (non-eliminated) players
        List<Player> activePlayers = new List<Player>();
        foreach (Player player in turnManager.players)
        {
            if (player != null && !player.IsEliminated)
            {
                activePlayers.Add(player);
            }
        }
        
        // Distribute players evenly: left side gets first half, right side gets second half
        int totalPlayers = activePlayers.Count;
        int leftCount = (totalPlayers + 1) / 2; // Round up for odd numbers
        int rightCount = totalPlayers - leftCount;
        
        // Update left side (Player1Info = index 0, Player3Info = index 2)
        for (int i = 0; i < 2; i++)
        {
            int slotIndex = i * 2; // 0 for Player1Info, 2 for Player3Info
            if (i < leftCount)
            {
                // Show and update this slot
                UpdatePlayerInfo(slotIndex, activePlayers[i]);
            }
            else
            {
                // Hide this slot
                HidePlayerSlot(slotIndex);
            }
        }
        
        // Update right side (Player2Info = index 1, Player4Info = index 3)
        for (int i = 0; i < 2; i++)
        {
            int slotIndex = i * 2 + 1; // 1 for Player2Info, 3 for Player4Info
            int playerIndex = leftCount + i; // Start from where left side ended
            if (i < rightCount && playerIndex < totalPlayers)
            {
                // Show and update this slot
                UpdatePlayerInfo(slotIndex, activePlayers[playerIndex]);
            }
            else
            {
                // Hide this slot
                HidePlayerSlot(slotIndex);
            }
        }
    }
    
    /// <summary>
    /// Hides a specific player slot by index (0-3).
    /// </summary>
    public void HidePlayerSlot(int playerIndex)
    {
        if (mainHUDController != null)
        {
            mainHUDController.HidePlayerSlot(playerIndex);
            return;
        }

        VisualElement info = null;
        
        switch (playerIndex)
        {
            case 0:
                info = Player1Info;
                break;
            case 1:
                info = Player2Info;
                break;
            case 2:
                info = Player3Info;
                break;
            case 3:
                info = Player4Info;
                break;
        }
        
        if (info != null)
        {
            info.style.display = DisplayStyle.None;
        }
    }
    
    /// <summary>
    /// Hides all player slots.
    /// </summary>
    private void HideAllPlayerSlots()
    {
        if (mainHUDController != null)
        {
            mainHUDController.HideAllPlayerSlots();
            return;
        }

        if (Player1Info != null) Player1Info.style.display = DisplayStyle.None;
        if (Player2Info != null) Player2Info.style.display = DisplayStyle.None;
        if (Player3Info != null) Player3Info.style.display = DisplayStyle.None;
        if (Player4Info != null) Player4Info.style.display = DisplayStyle.None;
    }
    
    /// <summary>
    /// Converts a Sprite to Texture2D for use in UI Toolkit.
    /// Creates a readable copy of the sprite's texture region.
    /// </summary>
    private Texture2D SpriteToTexture2D(Sprite sprite)
    {
        if (sprite == null) return null;
        
        try
        {
            Texture2D sourceTexture = sprite.texture;
            if (sourceTexture == null) return null;

            Rect spriteRect = sprite.textureRect;

            // Always crop to sprite rect so avatar shows only selected sprite, not full atlas.
            Texture2D readableTexture = sourceTexture;
            bool createdReadableCopy = false;
            if (!sourceTexture.isReadable)
            {
                var previous = RenderTexture.active;
                RenderTexture rt = RenderTexture.GetTemporary(sourceTexture.width, sourceTexture.height, 0, RenderTextureFormat.ARGB32);
                try
                {
                    Graphics.Blit(sourceTexture, rt);
                    RenderTexture.active = rt;
                    readableTexture = new Texture2D(sourceTexture.width, sourceTexture.height, TextureFormat.RGBA32, false);
                    readableTexture.ReadPixels(new Rect(0, 0, sourceTexture.width, sourceTexture.height), 0, 0);
                    readableTexture.Apply();
                    createdReadableCopy = true;
                }
                finally
                {
                    RenderTexture.active = previous;
                    RenderTexture.ReleaseTemporary(rt);
                }
            }

            Texture2D newTexture = new Texture2D((int)spriteRect.width, (int)spriteRect.height, TextureFormat.RGBA32, false);
            Color[] pixels = readableTexture.GetPixels(
                (int)spriteRect.x,
                (int)spriteRect.y,
                (int)spriteRect.width,
                (int)spriteRect.height
            );
            newTexture.SetPixels(pixels);
            newTexture.Apply();

            if (createdReadableCopy)
                Destroy(readableTexture);

            return newTexture;
        }
        catch (Exception e)
        {
            Debug.LogWarning($"Failed to convert sprite to texture: {e.Message}. Using player color instead.");
            return null;
        }
    }
}
