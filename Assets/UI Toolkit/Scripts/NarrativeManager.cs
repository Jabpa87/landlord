using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

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
    
    [Tooltip("News feed item template (UXML asset)")]
    public VisualTreeAsset newsFeedItemTemplate;
    
    [Header("Feed Settings")]
    [Tooltip("Maximum number of items to keep in feed")]
    public int maxFeedItems = 30;
    
    [Tooltip("Market report frequency (every N turns)")]
    public int marketReportFrequency = 4;
    
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
    
    // State
    private int turnCount = 0;
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
        // Only use uGUI feed when it is assigned and active (visible). If you deactivate the uGUI feed, UI Toolkit feed is used.
        Transform uguiFeed = (uiManager != null && uiManager.mainHUDController != null) ? uiManager.mainHUDController.NewsFeedContent : null;
        if (uguiFeed != null && uguiFeed.gameObject.activeInHierarchy)
        {
            _useUguiFeed = true;
            _uguiFeedContent = uguiFeed;
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
    
    IEnumerator InitializeUIAfterDelay()
    {
        yield return new WaitForSeconds(0.1f);
        InitializeUI();
    }
    
    void InitializeUI()
    {
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
        AddNewsItem(player, message);
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
        AddNewsItem(player, message);
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
        AddNewsItem(player, message);
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
        AddNewsItem(player, message);
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
        AddNewsItem(player, message);
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
        AddNewsItem("Market Report", report);
    }
    
    /// <summary>
    /// Adds a news item to the feed (uses player avatar from Assets/Sprites/Avatars when available).
    /// </summary>
    void AddNewsItem(Player player, string message)
    {
        if (player == null) return;
        
        string username = $"@{player.playerName}";
        Color avatarColor = player.playerColor;
        
        AddNewsItemInternal(username, message, avatarColor, player);
    }
    
    /// <summary>
    /// Adds a news item for system messages (LandLords News, Market Report). Uses neutral avatar color.
    /// </summary>
    void AddNewsItem(string username, string message)
    {
        Color systemColor = new Color(0.5f, 0.52f, 0.55f, 1f); // neutral gray
        AddNewsItemInternal(username, message, systemColor);
    }

    /// <summary>
    /// Adds a system message to the feed/game log (public helper). No emoji. Third param ignored for compatibility.
    /// </summary>
    public void AddSystemMessage(string title, string message, string _ = null)
    {
        if (string.IsNullOrEmpty(title) || string.IsNullOrEmpty(message)) return;
        AddNewsItem(StripEmoji(title).Trim(), StripEmoji(message).Trim());
    }

    /// <summary>Removes common emoji/symbols from text for display.</summary>
    static string StripEmoji(string text)
    {
        if (string.IsNullOrEmpty(text)) return text;
        return Regex.Replace(text, @"[\u2600-\u27BF]|[\uD83C-\uDBFF\uDC00-\uDFFF]|[\u2300-\u23FF]|[\u2B50\u2B55\u2728\u2705\u274C\u274E\u2753-\u2755\u2795-\u2797\u27A1\u27B0\u27BF\u2934\u2935\u3030\u303D\u3297\u3299]", "");
    }
    
    /// <summary>
    /// Internal method to add news item to feed. When player is set, uses avatar from Assets/Sprites/Avatars (via PlayerVisualManager).
    /// </summary>
    void AddNewsItemInternal(string username, string message, Color avatarColor, Player player = null)
    {
        if (GameLogManager.Instance != null)
            GameLogManager.Instance.AddGameEvent($"{username}: {message}");

        if (_useUguiFeed && _uguiFeedContent != null)
        {
            AddNewsItemUgui(username, StripEmoji(message));
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
            item.Add(content);
        }
        
        Label usernameLabelElement = item.Q<Label>("NewsItemUsername");
        Label messageLabelElement = item.Q<Label>("NewsItemMessage");
        VisualElement avatarElement = item.Q<VisualElement>("NewsItemAvatar");
        
        if (usernameLabelElement != null)
        {
            usernameLabelElement.text = username;
            usernameLabelElement.style.color = new Color(avatarColor.r, avatarColor.g, avatarColor.b, 1f);
        }
        
        if (messageLabelElement != null)
            messageLabelElement.text = StripEmoji(message);
        
        if (avatarElement != null)
        {
            // Use player avatar sprite from Assets/Sprites/Avatars when available
            Sprite avatarSprite = null;
            if (player != null && PlayerVisualManager.Instance != null && player.tokenSpriteIndex >= 0)
                avatarSprite = PlayerVisualManager.Instance.GetTokenSprite(player.tokenSpriteIndex);
            
            if (avatarSprite != null)
            {
                Texture2D tex = SpriteToTexture2D(avatarSprite);
                if (tex != null)
                {
                    avatarElement.style.backgroundImage = new StyleBackground(tex);
                    avatarElement.style.backgroundColor = new StyleColor(Color.white);
                    avatarElement.style.unityBackgroundImageTintColor = new StyleColor(Color.white);
                }
                else
                {
                    avatarElement.style.backgroundImage = StyleKeyword.None;
                    avatarElement.style.backgroundColor = avatarColor;
                }
            }
            else
            {
                avatarElement.style.backgroundImage = StyleKeyword.None;
                avatarElement.style.backgroundColor = avatarColor;
            }
        }
        
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
            if (oldest != null && oldest.parent != null)
                oldest.parent.Remove(oldest);
        }
        
        if (newsFeedScrollView != null)
            newsFeedScrollView.scrollOffset = new Vector2(0, 0);
        
        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayFeedNotice();
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

    void AddNewsItemUgui(string username, string message)
    {
        if (_uguiFeedContent == null) return;

        var go = new GameObject("FeedItem");
        go.transform.SetParent(_uguiFeedContent, false);
        var tmp = go.AddComponent<TextMeshProUGUI>();
        tmp.text = $"{username}: {message}";
        tmp.fontSize = 14;
        tmp.raycastTarget = false;
        tmp.textWrappingMode = TMPro.TextWrappingModes.Normal;

        _uguiFeedItems.Insert(0, go);
        while (_uguiFeedItems.Count > maxFeedItems)
        {
            var oldest = _uguiFeedItems[_uguiFeedItems.Count - 1];
            _uguiFeedItems.RemoveAt(_uguiFeedItems.Count - 1);
            if (oldest != null) UnityEngine.Object.Destroy(oldest);
        }

        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.PlayFeedNotice();
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
}
