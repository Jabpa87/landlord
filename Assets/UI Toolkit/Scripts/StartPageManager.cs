using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.Collections;

/// <summary>
/// Manages the start page (first screen before main menu): logo, banner, game options button,
/// and 2x2 grid of mode buttons (V/S Computer, Pass Device, Online Multiplayer, Play with Friends).
/// V/S Computer and Pass Device load the MainMenu scene; Online and Friends show "Coming soon" for now.
/// </summary>
public class StartPageManager : MonoBehaviour
{
    [Header("UI Document")]
    [Tooltip("UIDocument that uses StartPage.uxml")]
    public UIDocument startPageDocument;

    [Header("Button icons (assign sprites to illustrate each mode)")]
    [Tooltip("Icon for V/S Computer (e.g. computer/monitor)")]
    public Sprite vsComputerIcon;
    [Tooltip("Icon for Pass Device (e.g. hand passing device)")]
    public Sprite passDeviceIcon;
    [Tooltip("Icon for Online Multiplayer (e.g. globe/players)")]
    public Sprite onlineMultiplayerIcon;
    [Tooltip("Icon for Play with Friends (e.g. friends/hearts)")]
    public Sprite playWithFriendsIcon;
    [Tooltip("Icon for Options (e.g. gear)")]
    public Sprite gameOptionsIcon;

    [Header("Scene")]
    [Tooltip("Main menu scene name (use 'MainMenu', not 'StartPage'). Loaded when V/S Computer or Pass Device is chosen.")]
    public string mainMenuSceneName = "MainMenu";

    private Button vsComputerButton;
    private Button passDeviceButton;
    private Button onlineMultiplayerButton;
    private Button playWithFriendsButton;
    private Button gameOptionsButton;
    private VisualElement root;

    void Start()
    {
        if (startPageDocument == null)
            startPageDocument = GetComponent<UIDocument>();
        if (startPageDocument == null)
        {
            Debug.LogError("StartPageManager: No UIDocument assigned.");
            return;
        }

        StartCoroutine(InitializeUIWhenReady());
    }

    IEnumerator InitializeUIWhenReady()
    {
        int frames = 0;
        while (startPageDocument != null && startPageDocument.rootVisualElement == null && frames < 120)
        {
            frames++;
            yield return null;
        }

        root = startPageDocument != null ? startPageDocument.rootVisualElement : null;
        if (root == null)
        {
            Debug.LogError("StartPageManager: rootVisualElement is null after waiting. Check that UIDocument has a Panel Settings and the GameObject is active.");
            yield break;
        }

        // Extra frame so descendant elements are fully built
        yield return null;

        vsComputerButton = root.Q<Button>("VsComputerButton");
        if (vsComputerButton == null)
            vsComputerButton = root.Q("VsComputerContainer")?.Q<Button>();
        passDeviceButton = root.Q<Button>("PassDeviceButton");
        onlineMultiplayerButton = root.Q<Button>("OnlineMultiplayerButton");
        playWithFriendsButton = root.Q<Button>("PlayWithFriendsButton");
        gameOptionsButton = root.Q<Button>("GameOptionsButton");

        if (vsComputerButton != null)
            vsComputerButton.clicked += OnVsComputerClicked;
        else
            Debug.LogError("StartPageManager: VsComputerButton not found. Check StartPage.uxml has a Button with name 'VsComputerButton'.");
        if (passDeviceButton != null)
            passDeviceButton.clicked += OnPassDeviceClicked;
        if (onlineMultiplayerButton != null)
            onlineMultiplayerButton.clicked += OnOnlineMultiplayerClicked;
        if (playWithFriendsButton != null)
            playWithFriendsButton.clicked += OnPlayWithFriendsClicked;
        if (gameOptionsButton != null)
            gameOptionsButton.clicked += OnGameOptionsClicked;

        ApplyButtonIcons();
    }

    void ApplyButtonIcons()
    {
        SetIcon(root.Q<VisualElement>("VsComputerIcon"), vsComputerIcon);
        SetIcon(root.Q<VisualElement>("PassDeviceIcon"), passDeviceIcon);
        SetIcon(root.Q<VisualElement>("OnlineMultiplayerIcon"), onlineMultiplayerIcon);
        SetIcon(root.Q<VisualElement>("PlayWithFriendsIcon"), playWithFriendsIcon);
        SetIcon(root.Q<VisualElement>("GameOptionsIcon"), gameOptionsIcon);
    }

    void SetIcon(VisualElement el, Sprite sprite)
    {
        if (el == null) return;
        if (sprite == null) return;
        Texture2D tex = SpriteToTexture2D(sprite);
        if (tex != null)
            el.style.backgroundImage = new StyleBackground(tex);
        else
            el.style.backgroundImage = new StyleBackground(sprite);
    }

    static Texture2D SpriteToTexture2D(Sprite sprite)
    {
        if (sprite == null || sprite.texture == null) return null;
        try
        {
            if (!sprite.texture.isReadable)
                return sprite.texture;
            Rect r = sprite.textureRect;
            Color[] pixels = sprite.texture.GetPixels((int)r.x, (int)r.y, (int)r.width, (int)r.height);
            Texture2D t = new Texture2D((int)r.width, (int)r.height, TextureFormat.RGBA32, false);
            t.SetPixels(pixels);
            t.Apply();
            return t;
        }
        catch { return null; }
    }

    void OnVsComputerClicked()
    {
        LoadMainMenu(isPassDevice: false);
    }

    void OnPassDeviceClicked()
    {
        LoadMainMenu(isPassDevice: true);
    }

    void OnOnlineMultiplayerClicked()
    {
        Debug.Log("StartPage: Online Multiplayer — coming soon.");
        ShowComingSoon("Online Multiplayer");
    }

    void OnPlayWithFriendsClicked()
    {
        Debug.Log("StartPage: Play with Friends (local network) — coming soon.");
        ShowComingSoon("Play with Friends");
    }

    void OnGameOptionsClicked()
    {
        Debug.Log("StartPage: Game Options — open your options panel here.");
        ShowComingSoon("Game Options");
    }

    void LoadMainMenu(bool isPassDevice)
    {
        // Main menu must be "MainMenu" — never load StartPage (that would reload the start screen)
        string sceneName = mainMenuSceneName;
        if (string.IsNullOrEmpty(sceneName) || string.Equals(sceneName, "StartPage", System.StringComparison.OrdinalIgnoreCase))
            sceneName = "MainMenu";
        Debug.Log($"StartPageManager: Loading Main Menu scene '{sceneName}' (isPassDevice={isPassDevice}).");
        StartPageFlow.IsPassDevice = isPassDevice;
        try
        {
            SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
        }
        catch (System.Exception e)
        {
            Debug.LogError($"StartPageManager: Failed to load scene '{sceneName}'. Add the scene to File > Build Settings. Error: {e.Message}");
        }
    }

    void ShowComingSoon(string feature)
    {
        if (root == null) return;
        var existing = root.Q<VisualElement>("ComingSoonOverlay");
        if (existing != null)
            existing.RemoveFromHierarchy();
        var overlay = new VisualElement();
        overlay.name = "ComingSoonOverlay";
        overlay.style.position = Position.Absolute;
        overlay.style.left = 0;
        overlay.style.right = 0;
        overlay.style.top = 0;
        overlay.style.bottom = 0;
        overlay.style.backgroundColor = new Color(0, 0, 0, 0.6f);
        overlay.style.justifyContent = Justify.Center;
        overlay.style.alignItems = Align.Center;
        var label = new Label($"{feature}\nComing soon");
        label.style.backgroundColor = new Color(0.2f, 0.2f, 0.2f, 0.95f);
        label.style.color = Color.white;
        label.style.unityTextAlign = TextAnchor.MiddleCenter;
        label.style.fontSize = 20;
        label.style.paddingTop = label.style.paddingBottom = 16;
        label.style.paddingLeft = label.style.paddingRight = 24;
        overlay.Add(label);
        overlay.RegisterCallback<ClickEvent>(evt => { overlay.RemoveFromHierarchy(); });
        root.Add(overlay);
    }
}

/// <summary>
/// Static flags set by StartPage (e.g. pass device vs vs computer). MainMenu can read these if needed.
/// </summary>
public static class StartPageFlow
{
    public static bool IsPassDevice { get; set; }
}
