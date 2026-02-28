using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

public enum FeedEventType
{
    None,
    Salary,
    Arrest,
    Construction,
    AuctionWon,
    GainMonopoly,
    TransportMogul,
    EscapePrison,
    JustVisiting
}

/// <summary>
/// Manages the Live News Feed system, converting game events into narrative "tweets"
/// and displaying them in a social media-style feed.
/// </summary>
public class NarrativeManager : MonoBehaviour
{
    private static NarrativeManager _instance;
    public static NarrativeManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindFirstObjectByType<NarrativeManager>();
                if (_instance == null)
                {
                    GameObject go = new GameObject("NarrativeManager");
                    _instance = go.AddComponent<NarrativeManager>();
                }
            }
            return _instance;
        }
    }
    
    [Header("UI References")]
    [Tooltip("Main HUD UIDocument (auto-found if not assigned)")]
    public UIDocument mainHUDDocument;
    [Tooltip("Optional feed-only UIDocument (CommunityFeedPanel). If assigned, this is preferred over uGUI feed.")]
    public UIDocument communityFeedDocument;
    
    [Tooltip("News feed item template (UXML asset)")]
    public VisualTreeAsset newsFeedItemTemplate;
    
    [Header("Feed Settings")]
    [Tooltip("Maximum number of items to keep in feed")]
    public int maxFeedItems = 30;
    
    [Tooltip("Market report frequency (every N turns)")]
    public int marketReportFrequency = 4;

    [Header("Comment Settings")]
    [Tooltip("Maximum comments shown per feed item")]
    public int maxCommentsPerItem = 10;

    [Tooltip("Maximum comment text length")]
    public int maxCommentLength = 140;

    [Tooltip("Show in-game toast for replies")]
    public bool showCommentReplyToasts = true;
    [Header("AI Feed Commenting")]
    [Tooltip("Allow AI players to post random comments on existing feed posts.")]
    public bool enableRandomAiFeedComments = true;
    [Tooltip("Chance per turn that AI posts a random feed comment.")]
    [Range(0f, 1f)] public float randomAiCommentChancePerTurn = 0.28f;
    [Tooltip("Minimum turn gap between random AI feed comments.")]
    public int randomAiCommentMinTurnGap = 1;

    public struct FeedCommentEventData
    {
        public string feedAuthorUsername;
        public string feedMessage;
        public string commenterUsername;
        public string commentText;
        public string replyToUsername;
        public long utcUnixSeconds;
    }

    public struct FeedReplyNotificationData
    {
        public string targetUsername;
        public string fromUsername;
        public string commentText;
        public string feedAuthorUsername;
        public string feedMessage;
        public long utcUnixSeconds;
    }

    // Multiplayer transport can subscribe and forward these events to remote players.
    public static event Action<FeedCommentEventData> FeedCommentPosted;
    public static event Action<FeedReplyNotificationData> FeedReplyNotificationRequested;
    
    [Header("Animation Settings")]
    [Tooltip("Enable slide-in animations")]
    public bool enableAnimations = true;
    
    [Tooltip("Animation duration in seconds")]
    public float animationDuration = 0.3f;
    
    // UI Elements
    private ScrollView newsFeedScrollView;
    private VisualElement newsFeedContainer;
    private List<VisualElement> feedItems = new List<VisualElement>();
    
    // uGUI feed (when using MainHUDController hybrid)
    private bool _useUguiFeed;
    private Transform _uguiFeedContent;
    private List<GameObject> _uguiFeedItems = new List<GameObject>();
    private GameObject _uguiFeedItemPrefab;
    private ScrollRect _uguiFeedScrollRect;

    private class UguiFeedComment
    {
        public string author;
        public string text;
        public bool isAi;
    }

    private class UguiFeedItemContext
    {
        public int id;
        public string username;
        public string message;
        public FeedEventType eventType;
        public Player subjectPlayer;
        public Sprite inlineSprite;
        public readonly List<UguiFeedComment> comments = new List<UguiFeedComment>();
    }

    [Header("uGUI Feed (tweet-style)")]
    [Tooltip("Optional uGUI feed item prefab. If assigned, items use avatar + message layout.")]
    public GameObject uguiFeedItemPrefab;
    [Tooltip("Use event-specific feed images when available.")]
    public bool useEventImagesInFeed = true;
    [Tooltip("Inline images that can appear on some tweets (optional).")]
    public Sprite[] uguiInlineSprites;
    [Range(0f, 1f)]
    public float uguiInlineImageChance = 0.25f;
    public float uguiAnimateInDuration = 0.25f;
    public float uguiAnimateOutDuration = 0.2f;
    [Header("uGUI Feed Interaction")]
    [Tooltip("When enabled, clicking an image post opens a full-image modal with comments.")]
    public bool enableUguiImagePostInteraction = true;
    [Tooltip("Maximum comments kept in the image-post modal thread.")]
    public int uguiMaxModalComments = 14;
    [Tooltip("Delay before AI posts an auto-reply in the image-post modal.")]
    public float uguiAiReplyDelay = 0.7f;
    [Header("Event Images (Assets/Sprites/Events)")]
    public Sprite eventImageSalary;
    public Sprite eventImageArrest;
    public Sprite eventImageConstruction;
    public Sprite eventImageAuctionWon;
    public Sprite eventImageGainMonopoly;
    public Sprite eventImageTransportMogul;
    public Sprite eventImageEscapePrison;
    public Sprite eventImageJustVisiting;

    private readonly Dictionary<NewsFeedItemUGUI, UguiFeedItemContext> _uguiFeedContexts = new Dictionary<NewsFeedItemUGUI, UguiFeedItemContext>();
    private UguiFeedItemContext _activeUguiModalContext;
    private int _nextUguiFeedContextId = 1;

    private GameObject _uguiImageModalRoot;
    private TMP_Text _uguiImageModalTitle;
    private UnityEngine.UI.Image _uguiImageModalImage;
    private RectTransform _uguiImageModalCommentsContent;
    private ScrollRect _uguiImageModalCommentsScroll;
    private TMP_InputField _uguiImageModalInput;
    private UnityEngine.UI.Button _uguiImageModalPostButton;
    private UnityEngine.UI.Button _uguiImageModalCloseButton;

    private class UitkFeedComment
    {
        public string author;
        public string text;
        public bool isAi;
    }

    private class UitkFeedItemContext
    {
        public int id;
        public string username;
        public string message;
        public FeedEventType eventType;
        public Sprite inlineSprite;
        public readonly List<UitkFeedComment> comments = new List<UitkFeedComment>();
    }

    private readonly Dictionary<VisualElement, UitkFeedItemContext> _uitkFeedContexts = new Dictionary<VisualElement, UitkFeedItemContext>();
    private readonly Dictionary<VisualElement, int> _uitkUnreadCommentBadges = new Dictionary<VisualElement, int>();
    private readonly Dictionary<NewsFeedItemUGUI, int> _uguiUnreadCommentBadges = new Dictionary<NewsFeedItemUGUI, int>();
    private UitkFeedItemContext _activeUitkModalContext;
    private int _nextUitkFeedContextId = 1;

    private VisualElement _uitkImageModalOverlay;
    private Label _uitkImageModalTitle;
    private VisualElement _uitkImageModalImage;
    private ScrollView _uitkImageModalCommentsScroll;
    private VisualElement _uitkImageModalCommentsContainer;
    private TextField _uitkImageModalInput;
    private UnityEngine.UIElements.Button _uitkImageModalPostButton;
    
    // State
    private int turnCount = 0;
    private int _lastAiRandomCommentTurn = -999;
    private TurnManager turnManager;
    private BuildingSupplyManager buildingSupplyManager;
    
    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else if (_instance != this)
        {
            Destroy(gameObject);
        }
    }
    
    void Start()
    {
        UIDocumentManager uiManager = FindFirstObjectByType<UIDocumentManager>();
        ResolvePreferredFeedDocument(uiManager);
        // Only use uGUI feed when it is assigned and active (visible). If you deactivate the uGUI feed, UI Toolkit feed is used.
        Transform uguiFeed = (uiManager != null && uiManager.mainHUDController != null) ? uiManager.mainHUDController.NewsFeedContent : null;
        if ((mainHUDDocument == null || mainHUDDocument.rootVisualElement == null) &&
            uguiFeed != null && uguiFeed.gameObject.activeInHierarchy)
        {
            _useUguiFeed = true;
            _uguiFeedContent = uguiFeed;
            _uguiFeedItemPrefab = (uiManager != null && uiManager.mainHUDController != null) ? uiManager.mainHUDController.FeedItemPrefabGO : null;
            if (_uguiFeedItemPrefab == null && uguiFeedItemPrefab != null)
                _uguiFeedItemPrefab = uguiFeedItemPrefab;
            _uguiFeedScrollRect = uguiFeed.GetComponentInParent<ScrollRect>();
            AddNewsItemUgui("LandLords News", "Welcome to Abuja! The property market is heating up. #GameStart");
        }
        if (mainHUDDocument == null && uiManager != null)
            mainHUDDocument = uiManager.mainHUDDocument;

        turnManager = FindFirstObjectByType<TurnManager>();
        buildingSupplyManager = BuildingSupplyManager.Instance;
        
        // Load news feed item template
        if (newsFeedItemTemplate == null)
        {
            // Try loading from Resources or direct path
            newsFeedItemTemplate = Resources.Load<VisualTreeAsset>("NewsFeedItem");
            if (newsFeedItemTemplate == null)
            {
                // Try loading via AssetDatabase in editor
                #if UNITY_EDITOR
                string[] guids = UnityEditor.AssetDatabase.FindAssets("NewsFeedItem t:VisualTreeAsset");
                if (guids.Length > 0)
                {
                    string path = UnityEditor.AssetDatabase.GUIDToAssetPath(guids[0]);
                    newsFeedItemTemplate = UnityEditor.AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(path);
                }
                #endif
            }
        }
        
        // Initialize UI after a short delay to ensure HUD is ready
        StartCoroutine(InitializeUIAfterDelay());
    }

#if UNITY_EDITOR
    void OnValidate()
    {
        TryAutoAssignEventSpritesEditor();
    }

    void TryAutoAssignEventSpritesEditor()
    {
        eventImageSalary = eventImageSalary != null ? eventImageSalary : LoadEventSpriteEditor("Salary");
        eventImageArrest = eventImageArrest != null ? eventImageArrest : LoadEventSpriteEditor("get arrested");
        eventImageConstruction = eventImageConstruction != null ? eventImageConstruction : LoadEventSpriteEditor("Start construction");
        eventImageAuctionWon = eventImageAuctionWon != null ? eventImageAuctionWon : LoadEventSpriteEditor("Auction won");
        eventImageGainMonopoly = eventImageGainMonopoly != null ? eventImageGainMonopoly : LoadEventSpriteEditor("Gain monopoly");
        eventImageTransportMogul = eventImageTransportMogul != null ? eventImageTransportMogul : LoadEventSpriteEditor("Transportmogul");
        eventImageEscapePrison = eventImageEscapePrison != null ? eventImageEscapePrison : LoadEventSpriteEditor("Escape prison");
        eventImageJustVisiting = eventImageJustVisiting != null ? eventImageJustVisiting : LoadEventSpriteEditor("justvistingjail");
    }

    static Sprite LoadEventSpriteEditor(string fileNameNoExt)
    {
        string path = $"Assets/Sprites/Events/{fileNameNoExt}.png";
        return UnityEditor.AssetDatabase.LoadAssetAtPath<Sprite>(path);
    }
#endif
    
    IEnumerator InitializeUIAfterDelay()
    {
        yield return new WaitForSeconds(0.1f);
        InitializeUI();
    }
    
    void InitializeUI()
    {
        ResolvePreferredFeedDocument(FindFirstObjectByType<UIDocumentManager>());
        if (mainHUDDocument == null || mainHUDDocument.rootVisualElement == null)
        {
            Debug.LogWarning("NarrativeManager: Main HUD document not found. News feed will not be displayed.");
            return;
        }
        
        VisualElement root = mainHUDDocument.rootVisualElement;
        
        // Find news feed elements
        newsFeedScrollView = root.Q<ScrollView>("NewsFeedScrollView");
        if (newsFeedScrollView != null)
        {
            newsFeedContainer = newsFeedScrollView.contentContainer;
        }
        else
        {
            Debug.LogWarning("NarrativeManager: NewsFeedScrollView not found in MainHUD.uxml");
        }
        
        // Add welcome message
        if (newsFeedContainer != null)
        {
            AddNewsItem("LandLords News", "Welcome to Abuja! The property market is heating up. #GameStart");
        }
    }

    void ResolvePreferredFeedDocument(UIDocumentManager uiManager)
    {
        if (communityFeedDocument == null)
            communityFeedDocument = FindFeedDocumentInScene();

        if (communityFeedDocument != null)
        {
            mainHUDDocument = communityFeedDocument;
            _useUguiFeed = false;
            DisableLegacyUGUIFeed(uiManager);
            return;
        }

        if (mainHUDDocument == null && uiManager != null && uiManager.mainHUDDocument != null)
            mainHUDDocument = uiManager.mainHUDDocument;
    }

    UIDocument FindFeedDocumentInScene()
    {
        UIDocument[] docs = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
        // Prefer explicit feed-only documents.
        for (int i = 0; i < docs.Length; i++)
        {
            UIDocument doc = docs[i];
            if (doc == null || doc.visualTreeAsset == null || doc.rootVisualElement == null) continue;
            if (doc.visualTreeAsset.name.IndexOf("Newsfeedpanel", StringComparison.OrdinalIgnoreCase) >= 0)
                return doc;
            if (doc.visualTreeAsset.name.IndexOf("CommunityFeedPanel", StringComparison.OrdinalIgnoreCase) >= 0)
                return doc;
        }
        for (int i = 0; i < docs.Length; i++)
        {
            UIDocument doc = docs[i];
            if (doc == null || doc.rootVisualElement == null) continue;
            if (doc.rootVisualElement.Q<ScrollView>("NewsFeedScrollView") != null)
                return doc;
        }
        return null;
    }

    void DisableLegacyUGUIFeed(UIDocumentManager uiManager)
    {
        if (uiManager == null || uiManager.mainHUDController == null) return;
        Transform hudRoot = uiManager.mainHUDController.transform.Find("HUD Root");
        if (hudRoot == null) return;

        Transform legacyPanel = hudRoot.Find("NewsFeedPanel");
        if (legacyPanel != null && legacyPanel.gameObject.activeSelf)
            legacyPanel.gameObject.SetActive(false);
    }
    
    /// <summary>
    /// Called when a player passes GO
    /// </summary>
    public void OnPlayerPassedGO(Player player, int salary)
    {
        if (player == null) return;
        
        string[] templates = new string[]
        {
            $"Fresh ₦{salary:N0} in the bank! @{player.playerName} just finished another lap around Abuja. #SalaryDay",
            $"@{player.playerName} collected their salary of ₦{salary:N0} after completing a full circuit! #AbujaLife",
            $"Another round complete! @{player.playerName} pockets ₦{salary:N0} from the bank. #KeepMoving"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, FeedEventType.Salary);
    }
    
    /// <summary>
    /// Called when a player buys a property
    /// </summary>
    public void OnPropertyBought(Player player, Property property)
    {
        if (player == null || property == null) return;
        
        string[] templates = new string[]
        {
            $"MARKET MOVE: @{player.playerName} just secured a prime spot in {property.propertyName}! The portfolio is growing. #AbujaRealEstate",
            $"@{player.playerName} expands their empire with {property.propertyName}! Investment: ₦{property.price:N0} #PropertyDeal",
            $"New acquisition alert! @{player.playerName} now owns {property.propertyName}. #LandLordLife"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, property.propertyType == PropertyType.Transportation ? FeedEventType.TransportMogul : FeedEventType.None);

        if (DidPlayerCompleteMonopolyGroup(player, property))
        {
            AddNewsItem(player, $"Monopoly secured in {property.groupId}! @{player.playerName} now controls the full set. #Monopoly", FeedEventType.GainMonopoly);
        }
    }
    
    /// <summary>
    /// Called when a player goes to jail
    /// </summary>
    public void OnPlayerJailed(Player player)
    {
        if (player == null) return;
        
        string[] templates = new string[]
        {
            $"BREAKING: @{player.playerName} spotted entering the station. Looks like a 3-turn vacation in Garki! #Lockdown",
            $"@{player.playerName} has been detained! Time to reflect on those property investments... #JailTime",
            $"Uh oh! @{player.playerName} is taking an unexpected break at the station. See you in 3 turns! #Detained"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, FeedEventType.Arrest);
    }

    /// <summary>
    /// Called when a player lands on the jail tile but is not jailed.
    /// </summary>
    public void OnPlayerJustVisitingJail(Player player)
    {
        if (player == null) return;

        string[] templates = new string[]
        {
            $"@{player.playerName} branch station side just to greet the comrades. Nothing spoil, na just visiting.",
            $"No case today: @{player.playerName} check the boys for jail and waka go. #JustVisiting",
            $"@{player.playerName} pass by the station, wave everybody, and continue movement. Na normal check-up."
        };

        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, FeedEventType.JustVisiting);
    }
    
    /// <summary>
    /// Called when a player goes bankrupt
    /// </summary>
    public void OnPlayerBankrupt(Player player, Player creditor)
    {
        if (player == null) return;
        
        string creditorName = creditor != null ? creditor.playerName : "the bank";
        
        string[] templates = new string[]
        {
            $"END OF THE ROAD: @{player.playerName} has officially exited the Abuja market. Who's next? 📉 #LandLordDown",
            $"💀 @{player.playerName} is out! All assets transferred to {creditorName}. The game continues... #Bankruptcy",
            $"Game over for @{player.playerName}! The property empire has crumbled. 💸 #Eliminated"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, FeedEventType.Construction);
    }
    
    /// <summary>
    /// Called when a player builds a house or hotel
    /// </summary>
    public void OnHouseBuilt(Player player, Property property, bool isHotel)
    {
        if (player == null || property == null) return;
        
        string buildingType = isHotel ? "hotel" : "house";
        int count = isHotel ? 1 : property.houses;
        
        string[] templates = new string[]
        {
            $"@{player.playerName} just built a {buildingType} on {property.propertyName}! Development in progress. #Construction",
            $"Building boom! @{player.playerName} adds {count} {buildingType}(s) to {property.propertyName}. #RealEstate",
            $"@{player.playerName} is expanding {property.propertyName} with new {buildingType} construction! #Development"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, FeedEventType.None);
    }
    
    /// <summary>
    /// Called when a player pays rent
    /// </summary>
    public void OnRentPaid(Player payer, Player receiver, int amount)
    {
        if (payer == null || receiver == null) return;
        
        string[] templates = new string[]
        {
            $"💸 @{payer.playerName} paid ₦{amount:N0} rent to @{receiver.playerName}! The landlord is happy. 😊 #RentPayment",
            $"💰 Rent collected! @{receiver.playerName} receives ₦{amount:N0} from @{payer.playerName}. #PassiveIncome",
            $"🏠 @{payer.playerName} just paid ₦{amount:N0} to stay on @{receiver.playerName}'s property. #TenantLife"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(payer, message);
    }
    
    /// <summary>
    /// Called when players complete a trade
    /// </summary>
    public void OnTradeCompleted(Player player1, Player player2)
    {
        if (player1 == null || player2 == null) return;
        
        string[] templates = new string[]
        {
            $"Major deal! @{player1.playerName} and @{player2.playerName} just completed a property trade. #Negotiation",
            $"Trade alert: @{player1.playerName} and @{player2.playerName} - Assets exchanged! #BusinessDeal",
            $"Strategic move! @{player1.playerName} and @{player2.playerName} swapped properties. #MarketActivity"
        };
        
        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player1, message);
    }

    /// <summary>
    /// Called when a player activates a perk card/effect.
    /// </summary>
    public void OnPerkUsed(Player player, string perkName, string context = null, int impactValue = 0)
    {
        if (player == null || string.IsNullOrWhiteSpace(perkName)) return;

        string impactText = impactValue > 0 ? $" (₦{impactValue:N0})" : "";
        string contextText = string.IsNullOrWhiteSpace(context) ? "" : $" during {context}";

        string[] templates = new string[]
        {
            $"@{player.playerName} activated {perkName}{contextText}{impactText}. #PerkPlay",
            $"Tactical move: @{player.playerName} used {perkName}{contextText}{impactText}. #Strategy",
            $"Perk trigger! @{player.playerName} popped {perkName}{contextText}{impactText}. #GameMoment"
        };

        string message = templates[UnityEngine.Random.Range(0, templates.Length)];
        AddNewsItem(player, message, FeedEventType.None);
    }
    
    /// <summary>
    /// Called at the end of each turn to track turn count and generate market reports
    /// </summary>
    public void OnTurnEnded()
    {
        turnCount++;
        
        // Generate market report every N turns
        if (turnCount % marketReportFrequency == 0)
        {
            GenerateMarketReport();
        }

        if (enableRandomAiFeedComments)
            TryPostRandomAiFeedComment();
    }

    void TryPostRandomAiFeedComment()
    {
        if (UnityEngine.Random.value > Mathf.Clamp01(randomAiCommentChancePerTurn))
            return;
        if ((turnCount - _lastAiRandomCommentTurn) <= Mathf.Max(0, randomAiCommentMinTurnGap))
            return;

        if (!_useUguiFeed)
        {
            if (feedItems == null || feedItems.Count == 0) return;
            int limit = Mathf.Min(feedItems.Count, 8);
            List<VisualElement> candidates = new List<VisualElement>(limit);
            for (int i = 0; i < limit; i++)
            {
                VisualElement item = feedItems[i];
                if (item == null) continue;
                if (!_uitkFeedContexts.ContainsKey(item)) continue;
                if (item.Q<VisualElement>("NewsItemComments") == null) continue;
                candidates.Add(item);
            }
            if (candidates.Count == 0) return;

            VisualElement target = candidates[UnityEngine.Random.Range(0, candidates.Count)];
            if (!_uitkFeedContexts.TryGetValue(target, out UitkFeedItemContext context) || context == null) return;

            string aiAuthor = SelectAiResponderUsername();
            string aiComment = GenerateScenarioBasedReply(context.eventType, context.message);
            if (string.IsNullOrWhiteSpace(aiComment)) return;

            VisualElement commentsContainer = target.Q<VisualElement>("NewsItemComments");
            UnityEngine.UIElements.Button commentButton = target.Q<UnityEngine.UIElements.Button>("NewsItemCommentButton");
            AddCommentToFeedItem(commentsContainer, aiAuthor, aiComment, null);
            context.comments.Add(new UitkFeedComment { author = aiAuthor, text = aiComment, isAi = true });
            while (context.comments.Count > Mathf.Max(1, maxCommentsPerItem))
                context.comments.RemoveAt(0);

            int unread = 0;
            _uitkUnreadCommentBadges.TryGetValue(target, out unread);
            unread++;
            _uitkUnreadCommentBadges[target] = unread;
            SetCommentBadge(commentButton, unread);
        }
        else
        {
            if (_uguiFeedContexts == null || _uguiFeedContexts.Count == 0) return;
            var contexts = _uguiFeedContexts
                .Where(kv => kv.Key != null && kv.Value != null && kv.Value.inlineSprite != null)
                .Take(10)
                .ToList();
            if (contexts.Count == 0) return;

            var picked = contexts[UnityEngine.Random.Range(0, contexts.Count)];
            NewsFeedItemUGUI item = picked.Key;
            UguiFeedItemContext context = picked.Value;
            string aiAuthor = SelectAiResponderUsername(context);
            string aiComment = GenerateScenarioBasedReply(context, context.message);
            if (string.IsNullOrWhiteSpace(aiComment)) return;

            context.comments.Add(new UguiFeedComment { author = aiAuthor, text = aiComment, isAi = true });
            TrimModalComments(context);

            int unread = 0;
            _uguiUnreadCommentBadges.TryGetValue(item, out unread);
            unread++;
            _uguiUnreadCommentBadges[item] = unread;
            if (item != null)
                item.SetCommentBadgeCount(unread);

            if (_activeUguiModalContext == context && _uguiImageModalRoot != null && _uguiImageModalRoot.activeInHierarchy)
                RefreshUguiModalComments();
        }

        _lastAiRandomCommentTurn = turnCount;
        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayFeedNotice();
    }
    
    /// <summary>
    /// Generates a periodic market report with statistics
    /// </summary>
    void GenerateMarketReport()
    {
        if (turnManager == null) return;
        
        // Get active players manually since GetActivePlayers() might be private
        List<Player> activePlayers = new List<Player>();
        if (turnManager.players != null)
        {
            foreach (Player p in turnManager.players)
            {
                if (p != null && !p.IsEliminated)
                {
                    activePlayers.Add(p);
                }
            }
        }
        if (activePlayers.Count == 0) return;
        
        // Find wealthiest player
        Player wealthiest = activePlayers.OrderByDescending(p => p.GetNetWorth()).FirstOrDefault();
        
        // Find player with most properties
        Player mostProperties = activePlayers.OrderByDescending(p => p.GetPropertyCount()).FirstOrDefault();
        
        // Building supply status
        string supplyStatus = "";
        if (buildingSupplyManager != null)
        {
            int housesLeft = buildingSupplyManager.availableHouses;
            int hotelsLeft = buildingSupplyManager.availableHotels;
            supplyStatus = $"Houses: {housesLeft}/{buildingSupplyManager.totalHouseSupply} | Hotels: {hotelsLeft}/{buildingSupplyManager.totalHotelSupply}";
        }
        
        string[] reportTemplates = new string[]
        {
            $"MARKET REPORT: @{wealthiest.playerName} is currently the wealthiest LandLord with a net worth of ₦{wealthiest.GetNetWorth():N0}! #MarketLeader",
            $"SUPPLY ALERT: {supplyStatus} #BuildingSupply",
            $"@{mostProperties.playerName} leads with {mostProperties.GetPropertyCount()} properties! The competition is fierce. #PropertyKing"
        };
        
        string report = reportTemplates[UnityEngine.Random.Range(0, reportTemplates.Length)];
        AddNewsItem("Market Report", report, FeedEventType.None);
    }
    
    /// <summary>
    /// Adds a news item to the feed (uses player avatar from Assets/Sprites/Avatars when available).
    /// </summary>
    void AddNewsItem(Player player, string message, FeedEventType eventType = FeedEventType.None)
    {
        if (player == null) return;
        
        string username = $"@{player.playerName}";
        Color avatarColor = player.playerColor;
        
        AddNewsItemInternal(username, message, avatarColor, player, eventType);
    }
    
    /// <summary>
    /// Adds a news item for system messages (LandLords News, Market Report). Uses neutral avatar color.
    /// </summary>
    void AddNewsItem(string username, string message, FeedEventType eventType = FeedEventType.None)
    {
        Color systemColor = new Color(0.5f, 0.52f, 0.55f, 1f); // neutral gray
        AddNewsItemInternal(username, message, systemColor, null, eventType);
    }

    /// <summary>
    /// Adds a system message to the feed/game log (public helper). No emoji. Third param ignored for compatibility.
    /// </summary>
    public void AddSystemMessage(string title, string message, string _ = null)
    {
        if (string.IsNullOrEmpty(title) || string.IsNullOrEmpty(message)) return;
        FeedEventType eventType = DetectEventTypeFromText(title, message);
        AddNewsItem(StripEmoji(title).Trim(), StripEmoji(message).Trim(), eventType);
    }

    FeedEventType DetectEventTypeFromText(string title, string message)
    {
        string t = ((title ?? "") + " " + (message ?? "")).ToLowerInvariant();
        if (t.Contains("auction") && (t.Contains("won") || t.Contains("winner") || t.Contains("sold")))
            return FeedEventType.AuctionWon;
        if (t.Contains("arrest") || t.Contains("detained") || t.Contains("jail"))
            return FeedEventType.Arrest;
        if (t.Contains("salary") || t.Contains("passed go"))
            return FeedEventType.Salary;
        if (t.Contains("construct") || t.Contains("build"))
            return FeedEventType.Construction;
        if (t.Contains("monopoly"))
            return FeedEventType.GainMonopoly;
        if (t.Contains("transport"))
            return FeedEventType.TransportMogul;
        if (t.Contains("escape prison"))
            return FeedEventType.EscapePrison;
        if (t.Contains("just visiting") || t.Contains("station side") || t.Contains("no case today"))
            return FeedEventType.JustVisiting;
        return FeedEventType.None;
    }

    /// <summary>Removes common emoji/symbols from text for display.</summary>
    static string StripEmoji(string text)
    {
        if (string.IsNullOrEmpty(text)) return text;
        return Regex.Replace(text, @"[\u2600-\u27BF]|[\uD83C-\uDBFF\uDC00-\uDFFF]|[\u2300-\u23FF]|[\u2B50\u2B55\u2728\u2705\u274C\u274E\u2753-\u2755\u2795-\u2797\u27A1\u27B0\u27BF\u2934\u2935\u3030\u303D\u3297\u3299]", "");
    }

    static void SetCommentBadge(UnityEngine.UIElements.Button commentButton, int unreadCount)
    {
        if (commentButton == null) return;
        commentButton.text = unreadCount > 0
            ? $"Comment ({Mathf.Clamp(unreadCount, 1, 99)})"
            : "Comment";
    }

    void SetupCommentInteractions(VisualElement item, string feedAuthorUsername, string feedMessage)
    {
        if (item == null) return;

        UnityEngine.UIElements.Button commentButton = item.Q<UnityEngine.UIElements.Button>("NewsItemCommentButton");
        VisualElement commentsContainer = item.Q<VisualElement>("NewsItemComments");
        VisualElement composer = item.Q<VisualElement>("NewsItemComposer");
        TextField input = item.Q<TextField>("NewsItemCommentInput");
        UnityEngine.UIElements.Button postButton = item.Q<UnityEngine.UIElements.Button>("NewsItemCommentPost");

        if (commentsContainer == null || composer == null || input == null || postButton == null)
            return;

        composer.style.display = DisplayStyle.None;
        string replyTo = null;

        void OpenComposer(string replyTarget = null)
        {
            replyTo = replyTarget;
            composer.style.display = DisplayStyle.Flex;
            if (!string.IsNullOrEmpty(replyTarget))
                input.value = $"{replyTarget} ";
            input.Focus();
            _uitkUnreadCommentBadges[item] = 0;
            if (commentButton != null)
                commentButton.text = "Close";
        }

        void CloseComposer()
        {
            replyTo = null;
            input.value = string.Empty;
            composer.style.display = DisplayStyle.None;
            if (commentButton != null)
                SetCommentBadge(commentButton, 0);
        }

        if (commentButton != null)
        {
            commentButton.clicked += () =>
            {
                bool isOpen = composer.resolvedStyle.display != DisplayStyle.None;
                if (isOpen)
                {
                    CloseComposer();
                    return;
                }

                commentButton.text = "Close";
                OpenComposer();
            };
        }

        postButton.clicked += () =>
        {
            string trimmed = StripEmoji((input.value ?? string.Empty).Trim());
            if (string.IsNullOrEmpty(trimmed)) return;

            if (trimmed.Length > maxCommentLength)
                trimmed = trimmed.Substring(0, maxCommentLength);

            string commenter = GetLocalCommentAuthorUsername();
            AddCommentToFeedItem(commentsContainer, commenter, trimmed, author =>
            {
                if (string.IsNullOrEmpty(author)) return;
                if (commentButton != null)
                    commentButton.text = "Close";
                OpenComposer(author);
            });

            long now = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
            FeedCommentEventData posted = new FeedCommentEventData
            {
                feedAuthorUsername = feedAuthorUsername,
                feedMessage = feedMessage,
                commenterUsername = commenter,
                commentText = trimmed,
                replyToUsername = replyTo,
                utcUnixSeconds = now
            };
            FeedCommentPosted?.Invoke(posted);

            if (!string.IsNullOrEmpty(replyTo) && !string.Equals(replyTo, commenter, StringComparison.OrdinalIgnoreCase))
            {
                FeedReplyNotificationData replyData = new FeedReplyNotificationData
                {
                    targetUsername = replyTo,
                    fromUsername = commenter,
                    commentText = trimmed,
                    feedAuthorUsername = feedAuthorUsername,
                    feedMessage = feedMessage,
                    utcUnixSeconds = now
                };
                FeedReplyNotificationRequested?.Invoke(replyData);

                if (showCommentReplyToasts)
                {
                    UIDocumentManager ui = FindFirstObjectByType<UIDocumentManager>();
                    if (ui != null)
                        ui.ShowResultNotification($"{commenter} replied to {replyTo}", 1.8f);
                }
            }

            CloseComposer();
        };
    }

    void AddCommentToFeedItem(VisualElement commentsContainer, string commenter, string commentText, Action<string> onReplyRequested)
    {
        if (commentsContainer == null) return;

        VisualElement row = new VisualElement();
        row.AddToClassList("news-item-comment");

        Label author = new Label(commenter);
        author.AddToClassList("news-item-comment-author");

        Label text = new Label(commentText);
        text.AddToClassList("news-item-comment-text");

        row.Add(author);
        row.Add(text);

        row.RegisterCallback<ClickEvent>(_ =>
        {
            onReplyRequested?.Invoke(commenter);
        });

        commentsContainer.Add(row);

        while (commentsContainer.childCount > Mathf.Max(1, maxCommentsPerItem))
            commentsContainer.RemoveAt(0);
    }

    string GetLocalCommentAuthorUsername()
    {
        Player current = turnManager != null ? turnManager.GetCurrentPlayer() : null;
        if (current != null && !string.IsNullOrWhiteSpace(current.playerName))
            return $"@{current.playerName}";
        return "@Player";
    }

    public void AddRemoteFeedComment(string feedAuthorUsername, string feedMessage, string commenterUsername, string commentText)
    {
        if (newsFeedContainer == null) return;

        for (int i = 0; i < feedItems.Count; i++)
        {
            VisualElement item = feedItems[i];
            if (item == null) continue;

            Label user = item.Q<Label>("NewsItemUsername");
            Label message = item.Q<Label>("NewsItemMessage");
            if (user == null || message == null) continue;

            if (!string.Equals(user.text, feedAuthorUsername, StringComparison.OrdinalIgnoreCase)) continue;
            if (!string.Equals(message.text, StripEmoji(feedMessage), StringComparison.Ordinal)) continue;

            VisualElement commentsContainer = item.Q<VisualElement>("NewsItemComments");
            AddCommentToFeedItem(commentsContainer, commenterUsername, StripEmoji(commentText), author =>
            {
                UnityEngine.UIElements.Button commentButton = item.Q<UnityEngine.UIElements.Button>("NewsItemCommentButton");
                VisualElement composer = item.Q<VisualElement>("NewsItemComposer");
                TextField input = item.Q<TextField>("NewsItemCommentInput");
                if (commentButton != null)
                    commentButton.text = "Close";
                if (composer != null)
                    composer.style.display = DisplayStyle.Flex;
                if (input != null)
                {
                    input.value = $"{author} ";
                    input.Focus();
                }
            });
            return;
        }
    }
    
    /// <summary>
    /// Internal method to add news item to feed. When player is set, uses avatar from Assets/Sprites/Avatars (via PlayerVisualManager).
    /// </summary>
    void AddNewsItemInternal(string username, string message, Color avatarColor, Player player = null, FeedEventType eventType = FeedEventType.None)
    {
        if (GameLogManager.Instance != null)
            GameLogManager.Instance.AddGameEvent($"{username}: {message}");

        if (_useUguiFeed && _uguiFeedContent != null)
        {
            Sprite eventInline = ResolveEventInlineSprite(eventType);
            AddNewsItemUgui(username, StripEmoji(message), avatarColor, player, eventInline, eventType);
            return;
        }

        if (newsFeedContainer == null)
        {
            Debug.LogWarning("NarrativeManager: News feed container not initialized.");
            return;
        }

        VisualElement item;
        
        if (newsFeedItemTemplate != null)
            item = newsFeedItemTemplate.Instantiate();
        else
        {
            item = new VisualElement();
            item.AddToClassList("news-feed-item");
            var avatar = new VisualElement { name = "NewsItemAvatar" };
            avatar.AddToClassList("news-item-avatar");
            item.Add(avatar);
            var content = new VisualElement { name = "NewsItemContent" };
            content.AddToClassList("news-item-content");
            var usernameLabel = new Label { name = "NewsItemUsername" };
            usernameLabel.AddToClassList("news-item-username");
            content.Add(usernameLabel);
            var messageLabel = new Label { name = "NewsItemMessage" };
            messageLabel.AddToClassList("news-item-message");
            content.Add(messageLabel);
            var actions = new VisualElement { name = "NewsItemActions" };
            actions.AddToClassList("news-item-actions");
            var commentBtn = new UnityEngine.UIElements.Button { name = "NewsItemCommentButton", text = "Comment" };
            commentBtn.AddToClassList("news-item-comment-btn");
            actions.Add(commentBtn);
            content.Add(actions);
            var comments = new VisualElement { name = "NewsItemComments" };
            comments.AddToClassList("news-item-comments");
            content.Add(comments);
            var composer = new VisualElement { name = "NewsItemComposer" };
            composer.AddToClassList("news-item-composer");
            var input = new TextField { name = "NewsItemCommentInput" };
            input.AddToClassList("news-item-comment-input");
            var post = new UnityEngine.UIElements.Button { name = "NewsItemCommentPost", text = "Post" };
            post.AddToClassList("news-item-comment-post-btn");
            composer.Add(input);
            composer.Add(post);
            content.Add(composer);
            item.Add(content);
        }
        
        Label usernameLabelElement = item.Q<Label>("NewsItemUsername");
        Label messageLabelElement = item.Q<Label>("NewsItemMessage");
        VisualElement avatarElement = item.Q<VisualElement>("NewsItemAvatar");
        VisualElement contentElement = item.Q<VisualElement>("NewsItemContent");
        
        if (usernameLabelElement != null)
        {
            usernameLabelElement.text = username;
            usernameLabelElement.style.color = new Color(avatarColor.r, avatarColor.g, avatarColor.b, 1f);
        }
        
        string cleanMessage = StripEmoji(message);
        if (messageLabelElement != null)
            messageLabelElement.text = cleanMessage;

        Sprite eventSprite = ResolveEventInlineSprite(eventType);
        if (eventSprite != null)
        {
            VisualElement inlineElement = item.Q<VisualElement>("NewsItemInlineImage");
            if (inlineElement == null)
            {
                inlineElement = new VisualElement { name = "NewsItemInlineImage" };
                inlineElement.AddToClassList("news-item-inline-image");
                if (contentElement != null)
                    contentElement.Insert(2, inlineElement);
                else
                    item.Add(inlineElement);
            }
            inlineElement.style.backgroundImage = new StyleBackground(eventSprite);
            inlineElement.style.backgroundSize = new StyleBackgroundSize(new BackgroundSize(BackgroundSizeType.Cover));
            inlineElement.style.backgroundRepeat = new StyleBackgroundRepeat(new BackgroundRepeat(Repeat.NoRepeat, Repeat.NoRepeat));
            inlineElement.style.backgroundPositionX = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
            inlineElement.style.backgroundPositionY = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
            inlineElement.style.backgroundColor = new StyleColor(Color.clear);
            inlineElement.style.display = DisplayStyle.Flex;
            inlineElement.pickingMode = PickingMode.Position;
            inlineElement.RegisterCallback<ClickEvent>(_ => OpenUitkImagePostModal(item));
        }
        
        if (avatarElement != null)
        {
            // Use player avatar sprite from Assets/Sprites/Avatars when available
            Sprite avatarSprite = null;
            if (player != null && PlayerVisualManager.Instance != null && player.tokenSpriteIndex >= 0)
                avatarSprite = PlayerVisualManager.Instance.GetTokenSprite(player.tokenSpriteIndex);
            if (avatarSprite == null)
                avatarSprite = GetRandomFeedAvatarSprite();
            
            if (avatarSprite != null)
            {
                avatarElement.style.backgroundImage = new StyleBackground(avatarSprite);
                avatarElement.style.backgroundColor = new StyleColor(Color.white);
                avatarElement.style.unityBackgroundImageTintColor = new StyleColor(Color.white);
            }
            else
            {
                avatarElement.style.backgroundImage = StyleKeyword.None;
                avatarElement.style.backgroundColor = avatarColor;
            }
        }

        SetupCommentInteractions(item, username, cleanMessage);
        _uitkUnreadCommentBadges[item] = 0;

        _uitkFeedContexts[item] = new UitkFeedItemContext
        {
            id = _nextUitkFeedContextId++,
            username = username ?? string.Empty,
            message = cleanMessage,
            eventType = eventType,
            inlineSprite = eventSprite
        };
        
        // Pop-in: start slightly off and scaled down
        if (enableAnimations)
        {
            item.style.opacity = 0f;
            item.style.translate = new StyleTranslate(new Translate(24f, 8f, 0));
            item.style.scale = new Scale(new Vector2(0.92f, 0.92f));
        }
        
        newsFeedContainer.Insert(0, item);
        feedItems.Insert(0, item);
        
        if (enableAnimations)
            StartCoroutine(AnimateItemIn(item));
        
        if (feedItems.Count > maxFeedItems)
        {
            VisualElement oldest = feedItems[feedItems.Count - 1];
            feedItems.RemoveAt(feedItems.Count - 1);
            _uitkFeedContexts.Remove(oldest);
            _uitkUnreadCommentBadges.Remove(oldest);
            if (oldest != null && oldest.parent != null)
                oldest.parent.Remove(oldest);
        }
        
        if (newsFeedScrollView != null)
            newsFeedScrollView.scrollOffset = new Vector2(0, 0);
        
        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayFeedNotice();
    }

    void OpenUitkImagePostModal(VisualElement feedItem)
    {
        if (feedItem == null) return;
        if (!_uitkFeedContexts.TryGetValue(feedItem, out UitkFeedItemContext context) || context == null) return;
        if (context.inlineSprite == null) return;

        EnsureUitkImageModal();
        if (_uitkImageModalOverlay == null) return;

        _activeUitkModalContext = context;
        if (_uitkImageModalTitle != null)
            _uitkImageModalTitle.text = $"{context.username} - Post";

        if (_uitkImageModalImage != null)
        {
            _uitkImageModalImage.style.backgroundImage = new StyleBackground(context.inlineSprite);
            _uitkImageModalImage.style.backgroundSize = new StyleBackgroundSize(new BackgroundSize(BackgroundSizeType.Contain));
            _uitkImageModalImage.style.backgroundPositionX = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
            _uitkImageModalImage.style.backgroundPositionY = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
            _uitkImageModalImage.style.backgroundRepeat = new StyleBackgroundRepeat(new BackgroundRepeat(Repeat.NoRepeat, Repeat.NoRepeat));
            _uitkImageModalImage.style.backgroundColor = new StyleColor(Color.black);
        }

        if (_uitkImageModalInput != null)
            _uitkImageModalInput.value = string.Empty;

        RefreshUitkModalComments();
        _uitkImageModalOverlay.style.display = DisplayStyle.Flex;
    }

    void EnsureUitkImageModal()
    {
        if (_uitkImageModalOverlay != null) return;
        if (mainHUDDocument == null || mainHUDDocument.rootVisualElement == null) return;

        VisualElement root = mainHUDDocument.rootVisualElement;

        _uitkImageModalOverlay = new VisualElement { name = "FeedImageModalOverlay" };
        _uitkImageModalOverlay.AddToClassList("feed-image-modal-overlay");
        _uitkImageModalOverlay.style.display = DisplayStyle.None;
        _uitkImageModalOverlay.RegisterCallback<ClickEvent>(_ => CloseUitkImageModal());

        VisualElement panel = new VisualElement { name = "FeedImageModalPanel" };
        panel.AddToClassList("feed-image-modal-panel");
        panel.RegisterCallback<ClickEvent>(evt => evt.StopPropagation());

        VisualElement header = new VisualElement { name = "FeedImageModalHeader" };
        header.AddToClassList("feed-image-modal-header");
        _uitkImageModalTitle = new Label("Post");
        _uitkImageModalTitle.AddToClassList("feed-image-modal-title");
        UnityEngine.UIElements.Button close = new UnityEngine.UIElements.Button(CloseUitkImageModal) { text = "Close" };
        close.AddToClassList("feed-image-modal-close-btn");
        header.Add(_uitkImageModalTitle);
        header.Add(close);

        _uitkImageModalImage = new VisualElement { name = "FeedImageModalImage" };
        _uitkImageModalImage.AddToClassList("feed-image-modal-image");

        Label commentsHeader = new Label("Comments");
        commentsHeader.AddToClassList("feed-image-modal-comments-header");

        _uitkImageModalCommentsScroll = new ScrollView(ScrollViewMode.Vertical);
        _uitkImageModalCommentsScroll.AddToClassList("feed-image-modal-comments-scroll");
        _uitkImageModalCommentsContainer = new VisualElement { name = "FeedImageModalCommentsContainer" };
        _uitkImageModalCommentsContainer.AddToClassList("feed-image-modal-comments-container");
        _uitkImageModalCommentsScroll.Add(_uitkImageModalCommentsContainer);

        VisualElement composer = new VisualElement { name = "FeedImageModalComposer" };
        composer.AddToClassList("feed-image-modal-composer");
        _uitkImageModalInput = new TextField();
        _uitkImageModalInput.AddToClassList("feed-image-modal-input");
        _uitkImageModalInput.label = string.Empty;
        _uitkImageModalInput.multiline = false;
        _uitkImageModalInput.maxLength = Mathf.Max(50, maxCommentLength);
        _uitkImageModalPostButton = new UnityEngine.UIElements.Button(SubmitUitkModalComment) { text = "Post" };
        _uitkImageModalPostButton.AddToClassList("feed-image-modal-post-btn");
        composer.Add(_uitkImageModalInput);
        composer.Add(_uitkImageModalPostButton);

        panel.Add(header);
        panel.Add(_uitkImageModalImage);
        panel.Add(commentsHeader);
        panel.Add(_uitkImageModalCommentsScroll);
        panel.Add(composer);
        _uitkImageModalOverlay.Add(panel);
        root.Add(_uitkImageModalOverlay);
    }

    void CloseUitkImageModal()
    {
        if (_uitkImageModalOverlay != null)
            _uitkImageModalOverlay.style.display = DisplayStyle.None;
        _activeUitkModalContext = null;
    }

    void SubmitUitkModalComment()
    {
        if (_activeUitkModalContext == null || _uitkImageModalInput == null) return;
        string trimmed = StripEmoji((_uitkImageModalInput.value ?? string.Empty).Trim());
        if (string.IsNullOrEmpty(trimmed)) return;
        if (trimmed.Length > maxCommentLength)
            trimmed = trimmed.Substring(0, maxCommentLength);

        string commenter = GetLocalCommentAuthorUsername();
        _activeUitkModalContext.comments.Add(new UitkFeedComment { author = commenter, text = trimmed, isAi = false });
        TrimUitkModalComments(_activeUitkModalContext);
        RefreshUitkModalComments();

        FeedCommentEventData posted = new FeedCommentEventData
        {
            feedAuthorUsername = _activeUitkModalContext.username,
            feedMessage = _activeUitkModalContext.message,
            commenterUsername = commenter,
            commentText = trimmed,
            replyToUsername = null,
            utcUnixSeconds = DateTimeOffset.UtcNow.ToUnixTimeSeconds()
        };
        FeedCommentPosted?.Invoke(posted);

        _uitkImageModalInput.value = string.Empty;
        StartCoroutine(PostUitkModalAIReplyAfterDelay(_activeUitkModalContext, trimmed));
    }

    IEnumerator PostUitkModalAIReplyAfterDelay(UitkFeedItemContext context, string lastUserComment)
    {
        if (context == null) yield break;
        yield return new WaitForSeconds(Mathf.Max(0.15f, uguiAiReplyDelay));
        if (context == null) yield break;

        string aiAuthor = SelectAiResponderUsername();
        string aiReply = GenerateScenarioBasedReply(context.eventType, lastUserComment);
        if (string.IsNullOrEmpty(aiReply)) yield break;

        context.comments.Add(new UitkFeedComment { author = aiAuthor, text = aiReply, isAi = true });
        TrimUitkModalComments(context);

        if (_activeUitkModalContext == context && _uitkImageModalOverlay != null && _uitkImageModalOverlay.resolvedStyle.display != DisplayStyle.None)
            RefreshUitkModalComments();
    }

    void TrimUitkModalComments(UitkFeedItemContext context)
    {
        if (context == null) return;
        int maxCount = Mathf.Max(4, uguiMaxModalComments);
        while (context.comments.Count > maxCount)
            context.comments.RemoveAt(0);
    }

    void RefreshUitkModalComments()
    {
        if (_activeUitkModalContext == null || _uitkImageModalCommentsContainer == null) return;
        _uitkImageModalCommentsContainer.Clear();

        for (int i = 0; i < _activeUitkModalContext.comments.Count; i++)
        {
            UitkFeedComment c = _activeUitkModalContext.comments[i];
            VisualElement row = new VisualElement();
            row.AddToClassList("feed-image-modal-comment-row");

            Label author = new Label(c.author);
            author.AddToClassList("feed-image-modal-comment-author");
            Label text = new Label(c.text);
            text.AddToClassList("feed-image-modal-comment-text");
            if (c.isAi)
                text.AddToClassList("feed-image-modal-comment-text-ai");

            row.Add(author);
            row.Add(text);
            _uitkImageModalCommentsContainer.Add(row);
        }

        _uitkImageModalCommentsScroll?.ScrollTo(_uitkImageModalCommentsContainer);
    }
    
    /// <summary>
    /// Animates a feed item popping in (slide + fade + scale).
    /// </summary>
    IEnumerator AnimateItemIn(VisualElement item)
    {
        float elapsed = 0f;
        float startOpacity = 0f;
        float endOpacity = 1f;
        float startX = 24f;
        float startY = 8f;
        float startScale = 0.92f;
        float endScale = 1f;
        
        while (elapsed < animationDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / animationDuration;
            t = 1f - (1f - t) * (1f - t); // ease-out for snappy pop
            
            item.style.opacity = Mathf.Lerp(startOpacity, endOpacity, t);
            item.style.translate = new StyleTranslate(new Translate(Mathf.Lerp(startX, 0f, t), Mathf.Lerp(startY, 0f, t), 0));
            float s = Mathf.Lerp(startScale, endScale, t);
            item.style.scale = new Scale(new Vector2(s, s));
            
            yield return null;
        }
        
        item.style.opacity = endOpacity;
        item.style.translate = new StyleTranslate(new Translate(0, 0, 0));
        item.style.scale = new Scale(Vector2.one);
    }

    void AddNewsItemUgui(string username, string message, Color avatarColor = default, Player player = null, Sprite forcedInline = null, FeedEventType eventType = FeedEventType.None)
    {
        if (_uguiFeedContent == null) return;
        GameObject go;
        NewsFeedItemUGUI uguiItem = null;
        Sprite resolvedInline = forcedInline;
        if (_uguiFeedItemPrefab != null)
        {
            go = UnityEngine.Object.Instantiate(_uguiFeedItemPrefab, _uguiFeedContent);
            go.name = "FeedItem";
            go.SetActive(true);
            uguiItem = go.GetComponent<NewsFeedItemUGUI>();
            if (uguiItem != null)
            {
                Sprite avatarSprite = null;
                if (player != null && PlayerVisualManager.Instance != null && player.tokenSpriteIndex >= 0)
                    avatarSprite = PlayerVisualManager.Instance.GetTokenSprite(player.tokenSpriteIndex);
                if (avatarSprite == null)
                    avatarSprite = GetRandomFeedAvatarSprite();
                if (resolvedInline == null && uguiInlineSprites != null && uguiInlineSprites.Length > 0 && UnityEngine.Random.value <= uguiInlineImageChance)
                    resolvedInline = uguiInlineSprites[UnityEngine.Random.Range(0, uguiInlineSprites.Length)];
                uguiItem.Setup(username, message, avatarColor, avatarSprite, resolvedInline);
                uguiItem.InlineImageClicked -= HandleUguiInlineImageClicked;
                uguiItem.InlineImageClicked += HandleUguiInlineImageClicked;
                uguiItem.PlayIn(uguiAnimateInDuration);
            }
        }
        else
        {
            go = new GameObject("FeedItem");
            go.transform.SetParent(_uguiFeedContent, false);
            var tmp = go.AddComponent<TextMeshProUGUI>();
            tmp.text = $"{username}: {message}";
            tmp.fontSize = 14;
            tmp.raycastTarget = false;
            tmp.textWrappingMode = TMPro.TextWrappingModes.Normal;
        }

        if (uguiItem != null)
        {
            UguiFeedItemContext context = new UguiFeedItemContext
            {
                id = _nextUguiFeedContextId++,
                username = username ?? string.Empty,
                message = StripEmoji(message),
                eventType = eventType,
                subjectPlayer = player,
                inlineSprite = resolvedInline
            };
            _uguiFeedContexts[uguiItem] = context;
            _uguiUnreadCommentBadges[uguiItem] = 0;
            uguiItem.SetCommentBadgeCount(0);
        }

        go.transform.SetSiblingIndex(0);
        _uguiFeedItems.Insert(0, go);
        while (_uguiFeedItems.Count > maxFeedItems)
        {
            var oldest = _uguiFeedItems[_uguiFeedItems.Count - 1];
            _uguiFeedItems.RemoveAt(_uguiFeedItems.Count - 1);
            if (oldest != null)
            {
                var item = oldest.GetComponent<NewsFeedItemUGUI>();
                if (item != null)
                {
                    _uguiFeedContexts.Remove(item);
                    _uguiUnreadCommentBadges.Remove(item);
                    StartCoroutine(item.PlayOutAndDestroy(uguiAnimateOutDuration));
                }
                else
                    UnityEngine.Object.Destroy(oldest);
            }
        }

        if (_uguiFeedScrollRect != null)
            _uguiFeedScrollRect.verticalNormalizedPosition = 1f;

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayFeedNotice();
    }

    void HandleUguiInlineImageClicked(NewsFeedItemUGUI item, Sprite inlineSprite)
    {
        if (!enableUguiImagePostInteraction || inlineSprite == null || item == null) return;
        if (!_uguiFeedContexts.TryGetValue(item, out UguiFeedItemContext context) || context == null) return;
        _uguiUnreadCommentBadges[item] = 0;
        item.SetCommentBadgeCount(0);
        OpenUguiImagePostModal(context, inlineSprite);
    }

    void OpenUguiImagePostModal(UguiFeedItemContext context, Sprite sprite)
    {
        if (context == null || sprite == null) return;
        EnsureUguiImageModal();
        if (_uguiImageModalRoot == null) return;

        _activeUguiModalContext = context;
        if (_uguiImageModalTitle != null)
            _uguiImageModalTitle.text = $"{context.username} • Post";
        if (_uguiImageModalImage != null)
        {
            _uguiImageModalImage.sprite = sprite;
            _uguiImageModalImage.preserveAspect = true;
            _uguiImageModalImage.color = Color.white;
        }
        if (_uguiImageModalInput != null)
            _uguiImageModalInput.text = string.Empty;

        RefreshUguiModalComments();
        _uguiImageModalRoot.SetActive(true);
    }

    void EnsureUguiImageModal()
    {
        if (_uguiImageModalRoot != null) return;

        Canvas canvas = _uguiFeedContent != null ? _uguiFeedContent.GetComponentInParent<Canvas>() : FindFirstObjectByType<Canvas>();
        if (canvas == null) return;

        GameObject root = new GameObject("FeedImageModal", typeof(RectTransform), typeof(UnityEngine.UI.Image));
        root.transform.SetParent(canvas.transform, false);
        RectTransform rootRt = root.GetComponent<RectTransform>();
        rootRt.anchorMin = Vector2.zero;
        rootRt.anchorMax = Vector2.one;
        rootRt.offsetMin = Vector2.zero;
        rootRt.offsetMax = Vector2.zero;

        UnityEngine.UI.Image rootBg = root.GetComponent<UnityEngine.UI.Image>();
        rootBg.color = new Color(0f, 0f, 0f, 0.78f);
        UnityEngine.UI.Button bgButton = root.AddComponent<UnityEngine.UI.Button>();
        bgButton.transition = Selectable.Transition.None;
        bgButton.onClick.AddListener(CloseUguiImageModal);

        GameObject card = new GameObject("Card", typeof(RectTransform), typeof(UnityEngine.UI.Image), typeof(VerticalLayoutGroup), typeof(LayoutElement));
        card.transform.SetParent(root.transform, false);
        RectTransform cardRt = card.GetComponent<RectTransform>();
        cardRt.anchorMin = new Vector2(0.5f, 0.5f);
        cardRt.anchorMax = new Vector2(0.5f, 0.5f);
        cardRt.pivot = new Vector2(0.5f, 0.5f);
        cardRt.sizeDelta = new Vector2(690f, 760f);
        UnityEngine.UI.Image cardBg = card.GetComponent<UnityEngine.UI.Image>();
        cardBg.color = new Color(0.08f, 0.09f, 0.12f, 0.98f);
        VerticalLayoutGroup cardLayout = card.GetComponent<VerticalLayoutGroup>();
        cardLayout.padding = new RectOffset(20, 20, 16, 16);
        cardLayout.spacing = 10f;
        cardLayout.childControlWidth = true;
        cardLayout.childControlHeight = false;
        cardLayout.childForceExpandWidth = true;
        cardLayout.childForceExpandHeight = false;
        card.AddComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.Unconstrained;
        UnityEngine.UI.Button cardBlocker = card.AddComponent<UnityEngine.UI.Button>();
        cardBlocker.transition = Selectable.Transition.None;
        cardBlocker.onClick.AddListener(() => { });

        GameObject header = new GameObject("Header", typeof(RectTransform), typeof(HorizontalLayoutGroup), typeof(LayoutElement));
        header.transform.SetParent(card.transform, false);
        LayoutElement headerLE = header.GetComponent<LayoutElement>();
        headerLE.preferredHeight = 44f;
        HorizontalLayoutGroup headerLayout = header.GetComponent<HorizontalLayoutGroup>();
        headerLayout.childControlWidth = false;
        headerLayout.childControlHeight = true;
        headerLayout.childForceExpandWidth = false;
        headerLayout.childForceExpandHeight = false;
        headerLayout.spacing = 8f;

        _uguiImageModalTitle = CreateTMPLabel("Title", header.transform, "Post", 28, FontStyles.Bold);
        LayoutElement titleLE = _uguiImageModalTitle.gameObject.AddComponent<LayoutElement>();
        titleLE.flexibleWidth = 1f;

        _uguiImageModalCloseButton = CreateButton("CloseButton", header.transform, "Close", 14);
        _uguiImageModalCloseButton.onClick.AddListener(CloseUguiImageModal);

        GameObject frame = new GameObject("ImageFrame", typeof(RectTransform), typeof(UnityEngine.UI.Image), typeof(LayoutElement));
        frame.transform.SetParent(card.transform, false);
        frame.GetComponent<UnityEngine.UI.Image>().color = new Color(0f, 0f, 0f, 1f);
        LayoutElement frameLE = frame.GetComponent<LayoutElement>();
        frameLE.preferredHeight = 350f;
        frameLE.minHeight = 260f;

        GameObject modalImageGo = new GameObject("Image", typeof(RectTransform), typeof(UnityEngine.UI.Image));
        modalImageGo.transform.SetParent(frame.transform, false);
        RectTransform imgRt = modalImageGo.GetComponent<RectTransform>();
        imgRt.anchorMin = Vector2.zero;
        imgRt.anchorMax = Vector2.one;
        imgRt.offsetMin = new Vector2(8f, 8f);
        imgRt.offsetMax = new Vector2(-8f, -8f);
        _uguiImageModalImage = modalImageGo.GetComponent<UnityEngine.UI.Image>();
        _uguiImageModalImage.preserveAspect = true;

        TMP_Text commentsHeader = CreateTMPLabel("CommentsHeader", card.transform, "Comments", 21, FontStyles.Bold);
        commentsHeader.color = new Color(0.9f, 0.93f, 0.99f, 1f);

        _uguiImageModalCommentsScroll = CreateCommentsScrollView(card.transform, out _uguiImageModalCommentsContent);

        GameObject composer = new GameObject("Composer", typeof(RectTransform), typeof(HorizontalLayoutGroup), typeof(LayoutElement));
        composer.transform.SetParent(card.transform, false);
        LayoutElement composerLE = composer.GetComponent<LayoutElement>();
        composerLE.preferredHeight = 58f;
        HorizontalLayoutGroup composerLayout = composer.GetComponent<HorizontalLayoutGroup>();
        composerLayout.spacing = 8f;
        composerLayout.childControlWidth = false;
        composerLayout.childControlHeight = true;
        composerLayout.childForceExpandWidth = false;
        composerLayout.childForceExpandHeight = false;

        _uguiImageModalInput = CreateTMPInputField("CommentInput", composer.transform, "Write a comment...");
        LayoutElement inputLE = _uguiImageModalInput.GetComponent<LayoutElement>();
        if (inputLE == null) inputLE = _uguiImageModalInput.gameObject.AddComponent<LayoutElement>();
        inputLE.flexibleWidth = 1f;
        inputLE.minWidth = 300f;
        inputLE.preferredHeight = 54f;

        _uguiImageModalPostButton = CreateButton("PostButton", composer.transform, "Post", 15);
        LayoutElement postLE = _uguiImageModalPostButton.GetComponent<LayoutElement>();
        if (postLE == null) postLE = _uguiImageModalPostButton.gameObject.AddComponent<LayoutElement>();
        postLE.preferredWidth = 98f;
        postLE.preferredHeight = 54f;
        _uguiImageModalPostButton.onClick.AddListener(SubmitUguiModalComment);
        _uguiImageModalInput.onSubmit.AddListener(_ => SubmitUguiModalComment());

        _uguiImageModalRoot = root;
        _uguiImageModalRoot.SetActive(false);
    }

    ScrollRect CreateCommentsScrollView(Transform parent, out RectTransform contentRt)
    {
        GameObject scrollGo = new GameObject("CommentsScroll", typeof(RectTransform), typeof(UnityEngine.UI.Image), typeof(Mask), typeof(ScrollRect), typeof(LayoutElement));
        scrollGo.transform.SetParent(parent, false);
        LayoutElement scrollLE = scrollGo.GetComponent<LayoutElement>();
        scrollLE.preferredHeight = 220f;
        scrollLE.minHeight = 150f;

        UnityEngine.UI.Image bg = scrollGo.GetComponent<UnityEngine.UI.Image>();
        bg.color = new Color(0.13f, 0.14f, 0.2f, 0.92f);
        Mask mask = scrollGo.GetComponent<Mask>();
        mask.showMaskGraphic = true;

        GameObject viewportGo = new GameObject("Viewport", typeof(RectTransform));
        viewportGo.transform.SetParent(scrollGo.transform, false);
        RectTransform viewportRt = viewportGo.GetComponent<RectTransform>();
        viewportRt.anchorMin = Vector2.zero;
        viewportRt.anchorMax = Vector2.one;
        viewportRt.offsetMin = new Vector2(8f, 8f);
        viewportRt.offsetMax = new Vector2(-8f, -8f);

        GameObject contentGo = new GameObject("Content", typeof(RectTransform), typeof(VerticalLayoutGroup), typeof(ContentSizeFitter));
        contentGo.transform.SetParent(viewportGo.transform, false);
        contentRt = contentGo.GetComponent<RectTransform>();
        contentRt.anchorMin = new Vector2(0f, 1f);
        contentRt.anchorMax = new Vector2(1f, 1f);
        contentRt.pivot = new Vector2(0.5f, 1f);
        contentRt.anchoredPosition = Vector2.zero;
        contentRt.sizeDelta = new Vector2(0f, 0f);
        VerticalLayoutGroup contentLayout = contentGo.GetComponent<VerticalLayoutGroup>();
        contentLayout.spacing = 6f;
        contentLayout.padding = new RectOffset(2, 2, 2, 2);
        contentLayout.childControlWidth = true;
        contentLayout.childControlHeight = true;
        contentLayout.childForceExpandWidth = true;
        contentLayout.childForceExpandHeight = false;
        ContentSizeFitter contentFitter = contentGo.GetComponent<ContentSizeFitter>();
        contentFitter.verticalFit = ContentSizeFitter.FitMode.PreferredSize;
        contentFitter.horizontalFit = ContentSizeFitter.FitMode.Unconstrained;

        ScrollRect scroll = scrollGo.GetComponent<ScrollRect>();
        scroll.viewport = viewportRt;
        scroll.content = contentRt;
        scroll.horizontal = false;
        scroll.vertical = true;
        scroll.movementType = ScrollRect.MovementType.Clamped;
        scroll.scrollSensitivity = 20f;
        return scroll;
    }

    TMP_Text CreateTMPLabel(string name, Transform parent, string text, float size, FontStyles styles = FontStyles.Normal)
    {
        GameObject go = new GameObject(name, typeof(RectTransform), typeof(TextMeshProUGUI));
        go.transform.SetParent(parent, false);
        TMP_Text label = go.GetComponent<TextMeshProUGUI>();
        label.text = text;
        label.fontSize = size;
        label.fontStyle = styles;
        label.color = new Color(0.95f, 0.96f, 1f, 1f);
        label.textWrappingMode = TextWrappingModes.Normal;
        label.alignment = TextAlignmentOptions.Left;
        return label;
    }

    UnityEngine.UI.Button CreateButton(string name, Transform parent, string text, float fontSize)
    {
        GameObject go = new GameObject(name, typeof(RectTransform), typeof(UnityEngine.UI.Image), typeof(UnityEngine.UI.Button), typeof(LayoutElement));
        go.transform.SetParent(parent, false);
        go.GetComponent<UnityEngine.UI.Image>().color = new Color(0.22f, 0.45f, 0.86f, 1f);
        UnityEngine.UI.Button btn = go.GetComponent<UnityEngine.UI.Button>();
        TMP_Text label = CreateTMPLabel("Label", go.transform, text, fontSize, FontStyles.Bold);
        label.alignment = TextAlignmentOptions.Center;
        RectTransform lrt = label.rectTransform;
        lrt.anchorMin = Vector2.zero;
        lrt.anchorMax = Vector2.one;
        lrt.offsetMin = Vector2.zero;
        lrt.offsetMax = Vector2.zero;
        return btn;
    }

    TMP_InputField CreateTMPInputField(string name, Transform parent, string placeholder)
    {
        GameObject go = new GameObject(name, typeof(RectTransform), typeof(UnityEngine.UI.Image), typeof(TMP_InputField), typeof(LayoutElement));
        go.transform.SetParent(parent, false);
        go.GetComponent<UnityEngine.UI.Image>().color = new Color(0.16f, 0.17f, 0.24f, 1f);

        GameObject textArea = new GameObject("Text Area", typeof(RectTransform));
        textArea.transform.SetParent(go.transform, false);
        RectTransform taRt = textArea.GetComponent<RectTransform>();
        taRt.anchorMin = Vector2.zero;
        taRt.anchorMax = Vector2.one;
        taRt.offsetMin = new Vector2(10f, 8f);
        taRt.offsetMax = new Vector2(-10f, -8f);

        TMP_Text text = CreateTMPLabel("Text", textArea.transform, string.Empty, 20f);
        text.color = new Color(0.95f, 0.96f, 1f, 1f);
        text.textWrappingMode = TextWrappingModes.NoWrap;
        text.alignment = TextAlignmentOptions.Left;

        TMP_Text ph = CreateTMPLabel("Placeholder", textArea.transform, placeholder, 20f);
        ph.color = new Color(0.67f, 0.68f, 0.78f, 1f);
        ph.fontStyle = FontStyles.Italic;
        ph.alignment = TextAlignmentOptions.Left;

        RectTransform txtRt = text.rectTransform;
        txtRt.anchorMin = Vector2.zero;
        txtRt.anchorMax = Vector2.one;
        txtRt.offsetMin = Vector2.zero;
        txtRt.offsetMax = Vector2.zero;
        RectTransform phRt = ph.rectTransform;
        phRt.anchorMin = Vector2.zero;
        phRt.anchorMax = Vector2.one;
        phRt.offsetMin = Vector2.zero;
        phRt.offsetMax = Vector2.zero;

        TMP_InputField field = go.GetComponent<TMP_InputField>();
        field.textViewport = taRt;
        field.textComponent = text as TextMeshProUGUI;
        field.placeholder = ph;
        field.lineType = TMP_InputField.LineType.SingleLine;
        field.characterLimit = Mathf.Max(50, maxCommentLength);
        return field;
    }

    void CloseUguiImageModal()
    {
        if (_uguiImageModalRoot != null)
            _uguiImageModalRoot.SetActive(false);
        _activeUguiModalContext = null;
    }

    void SubmitUguiModalComment()
    {
        if (_activeUguiModalContext == null || _uguiImageModalInput == null) return;
        string trimmed = StripEmoji((_uguiImageModalInput.text ?? string.Empty).Trim());
        if (string.IsNullOrEmpty(trimmed)) return;
        if (trimmed.Length > maxCommentLength)
            trimmed = trimmed.Substring(0, maxCommentLength);

        string commenter = GetLocalCommentAuthorUsername();
        _activeUguiModalContext.comments.Add(new UguiFeedComment { author = commenter, text = trimmed, isAi = false });
        TrimModalComments(_activeUguiModalContext);
        RefreshUguiModalComments();

        long now = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
        FeedCommentEventData posted = new FeedCommentEventData
        {
            feedAuthorUsername = _activeUguiModalContext.username,
            feedMessage = _activeUguiModalContext.message,
            commenterUsername = commenter,
            commentText = trimmed,
            replyToUsername = null,
            utcUnixSeconds = now
        };
        FeedCommentPosted?.Invoke(posted);

        _uguiImageModalInput.text = string.Empty;
        StartCoroutine(PostAIModalReplyAfterDelay(_activeUguiModalContext, trimmed));
    }

    IEnumerator PostAIModalReplyAfterDelay(UguiFeedItemContext context, string lastUserComment)
    {
        if (context == null) yield break;
        yield return new WaitForSeconds(Mathf.Max(0.15f, uguiAiReplyDelay));
        if (context == null) yield break;

        string aiAuthor = SelectAiResponderUsername(context);
        string aiReply = GenerateScenarioBasedReply(context, lastUserComment);
        if (string.IsNullOrEmpty(aiReply)) yield break;

        context.comments.Add(new UguiFeedComment { author = aiAuthor, text = aiReply, isAi = true });
        TrimModalComments(context);

        if (_activeUguiModalContext == context && _uguiImageModalRoot != null && _uguiImageModalRoot.activeInHierarchy)
            RefreshUguiModalComments();
    }

    void TrimModalComments(UguiFeedItemContext context)
    {
        if (context == null) return;
        int maxCount = Mathf.Max(4, uguiMaxModalComments);
        while (context.comments.Count > maxCount)
            context.comments.RemoveAt(0);
    }

    void RefreshUguiModalComments()
    {
        if (_activeUguiModalContext == null || _uguiImageModalCommentsContent == null) return;

        for (int i = _uguiImageModalCommentsContent.childCount - 1; i >= 0; i--)
            UnityEngine.Object.Destroy(_uguiImageModalCommentsContent.GetChild(i).gameObject);

        for (int i = 0; i < _activeUguiModalContext.comments.Count; i++)
        {
            UguiFeedComment comment = _activeUguiModalContext.comments[i];
            TMP_Text row = CreateTMPLabel($"Comment_{i}", _uguiImageModalCommentsContent, $"{comment.author}: {comment.text}", 18f);
            row.color = comment.isAi ? new Color(0.77f, 0.86f, 1f, 1f) : new Color(0.94f, 0.95f, 1f, 1f);
            LayoutElement le = row.gameObject.AddComponent<LayoutElement>();
            le.minHeight = 26f;
        }

        Canvas.ForceUpdateCanvases();
        if (_uguiImageModalCommentsScroll != null)
            _uguiImageModalCommentsScroll.verticalNormalizedPosition = 0f;
    }

    string SelectAiResponderUsername(UguiFeedItemContext context)
    {
        return SelectAiResponderUsername();
    }

    string SelectAiResponderUsername()
    {
        if (turnManager != null && turnManager.players != null)
        {
            List<Player> aiPool = new List<Player>();
            for (int i = 0; i < turnManager.players.Count; i++)
            {
                Player p = turnManager.players[i];
                if (p == null || !p.isAI || p.IsEliminated) continue;
                aiPool.Add(p);
            }
            if (aiPool.Count > 0)
            {
                Player picked = aiPool[UnityEngine.Random.Range(0, aiPool.Count)];
                if (picked != null && !string.IsNullOrWhiteSpace(picked.playerName))
                    return $"@{picked.playerName}";
            }
        }
        return "@CityBot";
    }

    string GenerateScenarioBasedReply(UguiFeedItemContext context, string userComment)
    {
        if (context == null) return GenerateScenarioBasedReply(FeedEventType.None, userComment);
        return GenerateScenarioBasedReply(context.eventType, userComment);
    }

    string GenerateScenarioBasedReply(FeedEventType eventType, string userComment)
    {
        string c = (userComment ?? string.Empty).ToLowerInvariant();
        bool isSupportive = c.Contains("sorry") || c.Contains("well done") || c.Contains("nice") || c.Contains("good") || c.Contains("congrats") || c.Contains("congrat");
        bool isTeasing = c.Contains("lol") || c.Contains("lmao") || c.Contains("serve") || c.Contains("caught") || c.Contains("jail");

        string Pick(params string[] options)
        {
            if (options == null || options.Length == 0) return string.Empty;
            return options[UnityEngine.Random.Range(0, options.Length)];
        }

        switch (eventType)
        {
            case FeedEventType.Arrest:
                if (isSupportive) return Pick("Thanks. I will bounce back next round.", "Appreciate the support. I will reset and return.", "Respect. Next turn I push hard.");
                if (isTeasing) return Pick("Laugh now. Bail is loading and I am coming back stronger.", "Enjoy the moment. I will be out soon.", "No stress. The comeback is already planned.");
                return Pick("Street heat is real. I will regroup.", "Not ideal, but this run is not over.", "Temporary setback. Strategy is still alive.");
            case FeedEventType.Salary:
                return isSupportive
                    ? Pick("Appreciate it. We reinvest and move.", "Thanks. Cash flow looking healthier now.", "Respect. This bankroll helps a lot.")
                    : Pick("GO money received. Expansion mode activated.", "Salary hit. Time to upgrade position.", "Cash landed. Board pressure rising.");
            case FeedEventType.Construction:
                return isSupportive
                    ? Pick("Builder mode. Let us keep stacking upgrades.", "Thanks. Construction plan is moving.", "Appreciate it. We keep developing.")
                    : Pick("New build unlocked. Rent pressure going up.", "Construction completed. Value just increased.", "Another upgrade online. Momentum continues.");
            case FeedEventType.AuctionWon:
                return isSupportive
                    ? Pick("Solid pickup. Deal closed.", "Thanks. That auction was worth it.", "Appreciate it. Good value secured.")
                    : Pick("Auction strategy worked. On to the next asset.", "Won the bid clean. Next target loading.", "Auction complete. Portfolio upgraded.");
            case FeedEventType.GainMonopoly:
                return Pick("Monopoly online. The board just changed.", "Full set secured. Big pressure starts now.", "Monopoly confirmed. This lane is locked.");
            case FeedEventType.TransportMogul:
                return Pick("Transport network is paying off now.", "Transit control is becoming serious value.", "Transport line looks strong this game.");
            case FeedEventType.EscapePrison:
                return Pick("Freedom secured. Back to business.", "Out of jail. Time to recover fast.", "Back on the board now. Let us move.");
            case FeedEventType.JustVisiting:
                return Pick("No case, no bail. Just solidarity visit.", "Quick hello at station side, then back to hustling.", "Na normal check-up. Movement continues.");
            default:
                return isSupportive
                    ? Pick("Respect. We move.", "Thanks. Let us keep the energy up.", "Appreciate it. We continue.")
                    : Pick("Noted. Let us see how this turn plays out.", "Copy that. Next move coming.", "Fair point. Let us watch this round.");
        }
    }

    /// <summary>Converts a Sprite to Texture2D for UI Toolkit backgroundImage. Uses sprite texture when not readable.</summary>
    static Texture2D SpriteToTexture2D(Sprite sprite)
    {
        if (sprite == null) return null;
        Texture2D sourceTexture = sprite.texture;
        if (sourceTexture == null) return null;
        try
        {
            if (!sourceTexture.isReadable)
                return sourceTexture;
            Rect r = sprite.textureRect;
            Texture2D tex = new Texture2D((int)r.width, (int)r.height, TextureFormat.RGBA32, false);
            Color[] pixels = sourceTexture.GetPixels((int)r.x, (int)r.y, (int)r.width, (int)r.height);
            tex.SetPixels(pixels);
            tex.Apply();
            return tex;
        }
        catch (Exception e)
        {
            Debug.LogWarning($"NarrativeManager: Sprite to texture failed: {e.Message}");
            return null;
        }
    }

    static Sprite GetRandomFeedAvatarSprite()
    {
        PlayerVisualManager vm = PlayerVisualManager.Instance;
        if (vm != null && vm.tokenSprites != null && vm.tokenSprites.Length > 0)
        {
            int idx = UnityEngine.Random.Range(0, vm.tokenSprites.Length);
            Sprite s = vm.GetTokenSprite(idx);
            if (s != null) return s;
        }
        return PlayerVisualManager.GetOrCreateFallbackTokenSprite();
    }

    Sprite ResolveEventInlineSprite(FeedEventType eventType)
    {
        if (!useEventImagesInFeed) return null;
        Sprite sprite;
        switch (eventType)
        {
            case FeedEventType.Salary: sprite = eventImageSalary; break;
            case FeedEventType.Arrest: sprite = eventImageArrest; break;
            case FeedEventType.Construction: sprite = eventImageConstruction; break;
            case FeedEventType.AuctionWon: sprite = eventImageAuctionWon; break;
            case FeedEventType.GainMonopoly: sprite = eventImageGainMonopoly; break;
            case FeedEventType.TransportMogul: sprite = eventImageTransportMogul; break;
            case FeedEventType.EscapePrison: sprite = eventImageEscapePrison; break;
            case FeedEventType.JustVisiting: sprite = eventImageJustVisiting; break;
            default: sprite = null; break;
        }
        if (sprite != null) return sprite;
        if (uguiInlineSprites != null && uguiInlineSprites.Length > 0)
            return uguiInlineSprites[UnityEngine.Random.Range(0, uguiInlineSprites.Length)];
        return null;
    }

    public Sprite GetEventImageForType(FeedEventType eventType)
    {
        return ResolveEventInlineSprite(eventType);
    }

    bool DidPlayerCompleteMonopolyGroup(Player player, Property property)
    {
        if (player == null || property == null || string.IsNullOrEmpty(property.groupId)) return false;
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        bool foundGroupTile = false;
        for (int i = 0; i < allTiles.Length; i++)
        {
            TileInfo tile = allTiles[i];
            if (tile == null || tile.tileType != TileType.Property || tile.property == null) continue;
            if (!string.Equals(tile.property.groupId, property.groupId, StringComparison.OrdinalIgnoreCase)) continue;
            foundGroupTile = true;
            if (tile.property.owner != player) return false;
        }
        return foundGroupTile;
    }
}
