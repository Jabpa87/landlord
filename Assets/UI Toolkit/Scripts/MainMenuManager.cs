using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Linq;
using System.IO;

/// <summary>
/// Manages the main menu UI for player selection and game customization.
/// </summary>
public class MainMenuManager : MonoBehaviour
{
    [Header("UI Documents")]
    public UIDocument mainMenuDocument;
    
    [Header("Scene Management")]
    [Tooltip("Name of the game scene to load when starting game. Use 'GameScene' — not 'StartPage', 'Start', or 'StartGame'.")]
    public string gameSceneName = "GameScene";
    
    [Header("Character Preview")]
    [Tooltip("Assign CharacterDatabase so preview panel can show character details.")]
    public CharacterDatabase characterDatabase;
    [Tooltip("Optional: character portraits for the preview panel (index matches CharacterDatabase).")]
    public Sprite[] characterPortraits = new Sprite[0];
    
    // UI Elements
    private Button playerCount2Button;
    private Button playerCount3Button;
    private Button playerCount4Button;
    private ScrollView playerSetupScrollView;
    private VisualElement playerSetupContainer;
    private TextField startingMoneyInput;
    private TextField goSalaryInput;
    private Button startGameButton;
    private Button backButton;
    private VisualElement rootElement;
    private bool pulseToggle;
    private int previewPlayerIndex = 0;

    private VisualElement characterImage;
    private Label characterHeaderText;
    private Label characterPlayerTitle;
    private Label characterNameText;
    private Label characterDifficultyText;
    private Label characterBackstoryText;
    private VisualElement characterIconSlot;
    private Label characterBenefit1Text;
    private Label characterBenefit2Text;
    private Label characterPerk1Text;
    private Label characterPerk2Text;
    private Label characterCast1Text;
    private Label characterCast2Text;
    
    // State
    private int selectedPlayerCount = 2;
    private List<VisualElement> playerSlots = new List<VisualElement>();
    private GameSettings gameSettings = new GameSettings();
    private Dictionary<int, int> selectedAvatars = new Dictionary<int, int>(); // playerIndex -> avatarIndex
    private Dictionary<int, bool> selectedAI = new Dictionary<int, bool>(); // playerIndex -> isAI
    
    // Static reference to pass settings to game scene
    public static GameSettings SettingsToLoad { get; set; }

    private const string DebugLogPath = @"c:\Users\DELL\bizgame\Assets\.cursor\debug.log";
    
    // Available colors for players
    private Color[] availableColors = new Color[]
    {
        new Color(0.96f, 0.26f, 0.21f), // Red
        new Color(0.13f, 0.59f, 0.95f), // Blue
        new Color(0.30f, 0.69f, 0.31f), // Green
        new Color(1.0f, 0.92f, 0.23f),  // Yellow
        new Color(0.61f, 0.15f, 0.69f), // Purple
        new Color(1.0f, 0.60f, 0.0f),   // Orange
        new Color(0.91f, 0.12f, 0.39f), // Pink
        new Color(0.0f, 0.74f, 0.83f)   // Cyan
    };
    
    // Available avatar/token names (for UI display)
    private string[] availableAvatarNames = new string[]
    {
        "Hat", "Car", "Dog", "Ship", "Wheelbarrow", "Boot"
    };
    
    void Start()
    {
        // #region agent log
        WriteDebugLog("H1", "main_menu_start", "MainMenuManager.Start",
            $"docAssigned={mainMenuDocument != null}, goActive={gameObject.activeInHierarchy}");
        // #endregion
        if (mainMenuDocument == null)
        {
            Debug.LogError("MainMenuManager: Main Menu Document not assigned!");
            return;
        }

        if (!mainMenuDocument.gameObject.scene.isLoaded)
        {
            // #region agent log
            WriteDebugLog("H4", "main_menu_doc_not_loaded", "MainMenuManager.Start",
                $"docSceneLoaded={mainMenuDocument.gameObject.scene.isLoaded}");
            // #endregion
            mainMenuDocument = FindSceneMainMenuDocument();
        }

        // #region agent log
        WriteDebugLog("H2", "main_menu_doc_state", "MainMenuManager.Start",
            $"docEnabled={mainMenuDocument.enabled}, docGoActive={mainMenuDocument.gameObject.activeInHierarchy}, panelSettings={(mainMenuDocument.panelSettings != null ? mainMenuDocument.panelSettings.name : "null")}, visualTree={(mainMenuDocument.visualTreeAsset != null ? mainMenuDocument.visualTreeAsset.name : "null")}");
        // #endregion

        // If this UIDocument is not the MainMenu tree, skip initialization to avoid errors in other scenes
        if (mainMenuDocument.visualTreeAsset == null ||
            !mainMenuDocument.visualTreeAsset.name.ToLower().Contains("mainmenu"))
        {
            // #region agent log
            WriteDebugLog("H4", "main_menu_wrong_tree", "MainMenuManager.Start",
                $"visualTree={(mainMenuDocument.visualTreeAsset != null ? mainMenuDocument.visualTreeAsset.name : "null")}");
            // #endregion
            enabled = false;
            return;
        }
        // #region agent log
        WriteDebugLog("H2", "main_menu_doc_active_self", "MainMenuManager.Start",
            $"docActiveSelf={mainMenuDocument.gameObject.activeSelf}");
        // #endregion
        // #region agent log
        var docScene = mainMenuDocument.gameObject.scene;
        var mgrScene = gameObject.scene;
        WriteDebugLog("H4", "main_menu_doc_scene", "MainMenuManager.Start",
            $"docScene={docScene.name}, docSceneLoaded={docScene.isLoaded}, mgrScene={mgrScene.name}, mgrSceneLoaded={mgrScene.isLoaded}");
        // #endregion

        if (!string.Equals(mgrScene.name, "MainMenu", System.StringComparison.OrdinalIgnoreCase))
        {
            // #region agent log
            WriteDebugLog("H7", "main_menu_wrong_scene", "MainMenuManager.Start",
                $"mgrScene={mgrScene.name}");
            // #endregion
            enabled = false;
            return;
        }

        if (!mainMenuDocument.gameObject.activeInHierarchy)
        {
            mainMenuDocument.gameObject.SetActive(true);
            ActivateParents(mainMenuDocument.gameObject);
            // #region agent log
            WriteDebugLog("H2", "main_menu_doc_activated", "MainMenuManager.Start",
                "action=SetActive(true)");
            // #endregion
        }
        if (!mainMenuDocument.enabled)
        {
            mainMenuDocument.enabled = true;
            // #region agent log
            WriteDebugLog("H2", "main_menu_doc_enabled", "MainMenuManager.Start",
                "action=enabled=true");
            // #endregion
        }

        StartCoroutine(InitializeUIDelayed());
    }
    
    System.Collections.IEnumerator InitializeUIDelayed()
    {
        // Wait for UIDocument to initialize rootVisualElement
        int frames = 0;
        // #region agent log
        WriteDebugLog("H2", "main_menu_wait_start", "MainMenuManager.InitializeUIDelayed",
            $"rootNull={(mainMenuDocument != null ? mainMenuDocument.rootVisualElement == null : true)}");
        // #endregion
        while (mainMenuDocument != null && mainMenuDocument.rootVisualElement == null && frames < 60)
        {
            frames++;
            yield return null;
        }

        var root = mainMenuDocument != null ? mainMenuDocument.rootVisualElement : null;
        // #region agent log
        WriteDebugLog("H2", "main_menu_root_ready", "MainMenuManager.InitializeUIDelayed",
            $"rootNull={root == null}, framesWaited={frames}");
        // #endregion
        // #region agent log
        WriteDebugLog("H2", "main_menu_doc_state_postwait", "MainMenuManager.InitializeUIDelayed",
            $"docEnabled={(mainMenuDocument != null ? mainMenuDocument.enabled.ToString() : "null")}, docGoActive={(mainMenuDocument != null ? mainMenuDocument.gameObject.activeInHierarchy.ToString() : "null")}, panelSettings={(mainMenuDocument != null && mainMenuDocument.panelSettings != null ? mainMenuDocument.panelSettings.name : "null")}, visualTree={(mainMenuDocument != null && mainMenuDocument.visualTreeAsset != null ? mainMenuDocument.visualTreeAsset.name : "null")}");
        // #endregion

        if (root == null)
        {
            Debug.LogError("MainMenuManager: rootVisualElement is null after waiting.");
            yield break;
        }

        rootElement = root;
        InitializeUI(root);
        SetupPulseAnimation(root);
        SetupPlayerCountButtons();
        CreatePlayerSlots(selectedPlayerCount);
        ApplyVsComputerAISelection();
        SetupStartButton();
    }

    void InitializeUI(VisualElement root)
    {
        // #region agent log
        WriteDebugLog("H2", "main_menu_root", "MainMenuManager.InitializeUI",
            $"rootNull={root == null}");
        // #endregion
        
        if (root == null)
            return;
        
        // Get UI elements (supporting both old and new UI structure)
        playerCount2Button = root.Q<Button>("PlayerCount2");
        playerCount3Button = root.Q<Button>("PlayerCount3");
        playerCount4Button = root.Q<Button>("PlayerCount4");
        
        // Try new structure first, fallback to old
        playerSetupScrollView = root.Q<ScrollView>("PlayerSetupScrollView") ?? root.Q<ScrollView>("MainContentScroll");
        playerSetupContainer = root.Q<VisualElement>("PlayerSetupContainer");
        
        startingMoneyInput = root.Q<TextField>("StartingMoneyInput");
        goSalaryInput = root.Q<TextField>("GoSalaryInput");
        startGameButton = root.Q<Button>("StartGameButton") ?? root.Q<Button>("NextSceneButton") ?? root.Q<Button>("PlayButton");
        backButton = root.Q<Button>("BackButton");

        characterImage = root.Q<VisualElement>("CharacterImage");
        characterHeaderText = root.Q<Label>("CharacterHeaderText");
        characterPlayerTitle = root.Q<Label>("CharacterPlayerTitle");
        characterNameText = root.Q<Label>("CharacterNameText");
        characterDifficultyText = root.Q<Label>("CharacterDifficultyText");
        characterBackstoryText = root.Q<Label>("CharacterBackstoryText");
        characterIconSlot = root.Q<VisualElement>("CharacterIconSlot");
        characterBenefit1Text = root.Q<Label>("CharacterBenefit1Text");
        characterBenefit2Text = root.Q<Label>("CharacterBenefit2Text");
        characterPerk1Text = root.Q<Label>("CharacterPerk1Text");
        characterPerk2Text = root.Q<Label>("CharacterPerk2Text");
        characterCast1Text = root.Q<Label>("CharacterCast1Text");
        characterCast2Text = root.Q<Label>("CharacterCast2Text");

        // #region agent log
        WriteDebugLog("H3", "main_menu_elements", "MainMenuManager.InitializeUI",
            $"playerSetupContainer={(playerSetupContainer != null)}, playerSetupScroll={(playerSetupScrollView != null)}");
        // #endregion

        if (playerSetupContainer == null && playerSetupScrollView != null)
        {
            playerSetupContainer = playerSetupScrollView.contentContainer;
            // #region agent log
            WriteDebugLog("H3", "main_menu_container_fallback", "MainMenuManager.InitializeUI",
                $"fallbackToScrollContent={(playerSetupContainer != null)}");
            // #endregion
        }
        
        // Leave settings blank so values can be entered manually
        if (startingMoneyInput != null)
            startingMoneyInput.value = "";
        if (goSalaryInput != null)
            goSalaryInput.value = "";
        
        // Setup back button
        if (backButton != null)
            backButton.clicked += OnBackClicked;
    }

    void ActivateParents(GameObject target)
    {
        if (target == null) return;
        Transform current = target.transform.parent;
        int depth = 0;
        System.Text.StringBuilder chain = new System.Text.StringBuilder();
        while (current != null && depth < 10)
        {
            chain.Append($"{current.name}:self={current.gameObject.activeSelf},hier={current.gameObject.activeInHierarchy};");
            if (!current.gameObject.activeSelf)
            {
                current.gameObject.SetActive(true);
            }
            current = current.parent;
            depth++;
        }
        // #region agent log
        WriteDebugLog("H2", "main_menu_parent_activation", "MainMenuManager.ActivateParents",
            $"depth={depth}, docGoActive={mainMenuDocument.gameObject.activeInHierarchy}, chain={chain}");
        // #endregion
    }

    UIDocument FindSceneMainMenuDocument()
    {
        UIDocument[] docs = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
        foreach (UIDocument doc in docs)
        {
            if (doc == null || !doc.gameObject.scene.isLoaded) continue;
            if (doc.visualTreeAsset != null &&
                doc.visualTreeAsset.name.ToLower().Contains("mainmenu"))
            {
                // #region agent log
                WriteDebugLog("H4", "main_menu_doc_found", "MainMenuManager.FindSceneMainMenuDocument",
                    $"docName={doc.name}, scene={doc.gameObject.scene.name}");
                // #endregion
                return doc;
            }
        }
        // #region agent log
        WriteDebugLog("H4", "main_menu_doc_not_found", "MainMenuManager.FindSceneMainMenuDocument", "result=null");
        // #endregion
        return mainMenuDocument;
    }

    void WriteDebugLog(string hypothesisId, string message, string location, string data)
    {
        try
        {
            string json = JsonUtility.ToJson(new DebugLogPayload
            {
                sessionId = "debug-session",
                runId = "mainmenu-debug",
                hypothesisId = hypothesisId,
                location = location,
                message = message,
                data = data ?? "",
                timestamp = System.DateTimeOffset.UtcNow.ToUnixTimeMilliseconds()
            });
            File.AppendAllText(DebugLogPath, json + "\n");
        }
        catch { }
    }

    [System.Serializable]
    struct DebugLogPayload
    {
        public string sessionId;
        public string runId;
        public string hypothesisId;
        public string location;
        public string message;
        public string data;
        public long timestamp;
    }
    
    void SetupPlayerCountButtons()
    {
        if (playerCount2Button != null)
            playerCount2Button.clicked += () => OnPlayerCountSelected(2);
        if (playerCount3Button != null)
            playerCount3Button.clicked += () => OnPlayerCountSelected(3);
        if (playerCount4Button != null)
            playerCount4Button.clicked += () => OnPlayerCountSelected(4);
        
        // Select default (2 players)
        OnPlayerCountSelected(2);
    }
    
    void OnPlayerCountSelected(int count)
    {
        selectedPlayerCount = count;
        
        // Update button states
        UpdateButtonState(playerCount2Button, count == 2);
        UpdateButtonState(playerCount3Button, count == 3);
        UpdateButtonState(playerCount4Button, count == 4);
        
        // Recreate player slots
        CreatePlayerSlots(count);
        ApplyVsComputerAISelection();
    }

    /// <summary>
    /// When coming from "Play with Computer", set all players except the first to AI.
    /// </summary>
    void ApplyVsComputerAISelection()
    {
        if (StartPageFlow.IsPassDevice)
            return;
        for (int i = 1; i < selectedPlayerCount; i++)
        {
            selectedAI[i] = true;
            if (i < playerSlots.Count)
            {
                var slot = playerSlots[i];
                var aiToggle = slot?.Q<Toggle>("AIPlayerToggle");
                if (aiToggle != null)
                    aiToggle.value = true;
                UpdateAvatarBadges(i);
            }
        }
    }
    
    void UpdateButtonState(Button button, bool selected)
    {
        if (button == null) return;
        
        if (selected)
            button.AddToClassList("selected");
        else
            button.RemoveFromClassList("selected");
    }
    
    void CreatePlayerSlots(int count)
    {
        // Clear existing slots
        if (playerSetupContainer != null)
        {
            playerSetupContainer.Clear();
            playerSlots.Clear();
            selectedAvatars.Clear(); // Clear avatar selections when recreating slots
            selectedAI.Clear();
        }
        else
        {
            Debug.LogError("MainMenuManager: PlayerSetupContainer not found in MainMenu UXML.");
            return;
        }
        
        // Create slots manually (since UXML template loading can be tricky)
        for (int i = 0; i < count; i++)
        {
            var slotElement = CreatePlayerSlotManually(i);
            if (slotElement != null)
            {
                SetupPlayerSlot(slotElement, i);
                playerSetupContainer.Add(slotElement);
                playerSlots.Add(slotElement);
            }
        }

        previewPlayerIndex = 0;
        UpdateCharacterPreview(previewPlayerIndex);
    }
    
    VisualElement CreatePlayerSlotManually(int playerIndex)
    {
        var slot = new VisualElement();
        slot.name = "PlayerSlot";
        slot.AddToClassList("player-slot-modern");
        slot.AddToClassList("player-slot"); // Fallback for old styles
        
        // Title
        var title = new Label($"Player {playerIndex + 1}");
        title.name = "PlayerSlotTitle";
        title.AddToClassList("player-slot-title-modern");
        slot.Add(title);
        
        // Name input
        var nameRow = new VisualElement();
        nameRow.name = "NameRow";
        nameRow.AddToClassList("player-row-modern");
        var nameLabel = new Label("Name:") { name = "NameLabel" };
        nameLabel.AddToClassList("player-label-modern");
        nameRow.Add(nameLabel);
        var nameInput = new TextField { name = "PlayerNameInput", value = $"Player {playerIndex + 1}" };
        nameInput.AddToClassList("player-input-modern");
        nameRow.Add(nameInput);
        slot.Add(nameRow);
        
        // Color selection
        var colorRow = new VisualElement();
        colorRow.name = "ColorRow";
        colorRow.AddToClassList("player-row-modern");
        var colorLabel = new Label("Color:") { name = "ColorLabel" };
        colorLabel.AddToClassList("player-label-modern");
        colorRow.Add(colorLabel);
        var colorOptions = new VisualElement();
        colorOptions.name = "ColorOptions";
        colorOptions.AddToClassList("color-options-modern");
        
        // Add color buttons
        string[] colorNames = { "Red", "Blue", "Green", "Yellow", "Purple", "Orange", "Pink", "Cyan" };
        for (int j = 0; j < availableColors.Length && j < colorNames.Length; j++)
        {
            var colorBtn = new Button();
            colorBtn.name = $"Color{colorNames[j]}";
            colorBtn.AddToClassList("color-button-modern");
            colorBtn.AddToClassList($"{colorNames[j].ToLower()}-color");
            colorBtn.AddToClassList("pulse-target");
            colorBtn.style.backgroundColor = availableColors[j];
            int pIndex = playerIndex;
            int cIndex = j;
            colorBtn.clicked += () => OnColorSelected(pIndex, cIndex);
            colorOptions.Add(colorBtn);
        }
        
        colorRow.Add(colorOptions);
        slot.Add(colorRow);
        
        // Avatar/token selection
        var avatarRow = new VisualElement();
        avatarRow.name = "AvatarRow";
        avatarRow.AddToClassList("player-row-modern");
        var avatarLabel = new Label("Token:") { name = "AvatarLabel" };
        avatarLabel.AddToClassList("player-label-modern");
        avatarRow.Add(avatarLabel);
        var avatarOptions = new VisualElement();
        avatarOptions.name = "AvatarOptions";
        avatarOptions.AddToClassList("avatar-options-modern");
        
        // Token/avatar buttons: use fallback only (no sprite loading). Add token images manually in UI Toolkit if desired.
        int maxAvatars = availableAvatarNames.Length;
        for (int j = 0; j < maxAvatars; j++)
        {
            var avatarBtn = new Button();
            avatarBtn.name = $"Avatar{j}";
            avatarBtn.AddToClassList("avatar-button-modern");
            avatarBtn.AddToClassList("avatar-button");
            avatarBtn.AddToClassList("pulse-target");
            SetAvatarButtonFallback(avatarBtn, j);
            int pIndex = playerIndex;
            int aIndex = j;
            avatarBtn.clicked += () => OnAvatarSelected(pIndex, aIndex);
            avatarOptions.Add(avatarBtn);
        }
        
        avatarRow.Add(avatarOptions);
        slot.Add(avatarRow);

        // AI toggle
        var aiRow = new VisualElement();
        aiRow.name = "AIRow";
        aiRow.AddToClassList("player-row-modern");
        var aiLabel = new Label("AI:") { name = "AILabel" };
        aiLabel.AddToClassList("player-label-modern");
        aiRow.Add(aiLabel);
        var aiToggle = new Toggle();
        aiToggle.name = "AIPlayerToggle";
        aiToggle.AddToClassList("ai-toggle-modern");
        aiToggle.value = selectedAI.ContainsKey(playerIndex) && selectedAI[playerIndex];
        int aiIndex = playerIndex;
        aiToggle.RegisterValueChangedCallback(evt =>
        {
            selectedAI[aiIndex] = evt.newValue;
            UpdateAvatarBadges(aiIndex);
            if (previewPlayerIndex == aiIndex)
                UpdateCharacterPreview(aiIndex);
        });
        aiRow.Add(aiToggle);
        slot.Add(aiRow);
        
        // Select default color
        if (playerIndex < availableColors.Length)
        {
            OnColorSelected(playerIndex, playerIndex);
        }
        
        // Select default avatar (same as player index, or 0)
        int defaultAvatar = playerIndex < maxAvatars ? playerIndex : 0;
        selectedAvatars[playerIndex] = defaultAvatar;
        OnAvatarSelected(playerIndex, defaultAvatar);

        if (!selectedAI.ContainsKey(playerIndex))
        {
            selectedAI[playerIndex] = false;
        }
        
        return slot;
    }
    
    /// <summary>
    /// Helper method to set fallback display for avatar button (colored circle with letter).
    /// </summary>
    void SetAvatarButtonFallback(Button avatarBtn, int avatarIndex)
    {
        // Remove existing non-badge children
        RemoveNonBadgeChildren(avatarBtn);
        
        int colorIndex = avatarIndex % availableColors.Length;
        avatarBtn.style.backgroundColor = availableColors[colorIndex];
        // Get name from availableAvatarNames or generate one
        string avatarName = avatarIndex < availableAvatarNames.Length ? availableAvatarNames[avatarIndex] : $"Avatar {avatarIndex + 1}";
        var avatarLetterLabel = new Label(avatarName.Length > 0 ? avatarName.Substring(0, 1) : "?");
        avatarLetterLabel.style.fontSize = 24;
        avatarLetterLabel.style.unityTextAlign = TextAnchor.MiddleCenter;
        avatarLetterLabel.style.color = Color.white;
        avatarBtn.Add(avatarLetterLabel);
        EnsureAvatarBadge(avatarBtn);
    }
    
    void SetupPlayerSlot(VisualElement slot, int playerIndex)
    {
        // Update title
        var title = slot.Q<Label>("PlayerSlotTitle");
        if (title != null)
            title.text = $"Player {playerIndex + 1}";
        
        // Setup name input
        var nameInput = slot.Q<TextField>("PlayerNameInput");
        if (nameInput != null)
        {
            nameInput.value = $"Player {playerIndex + 1}";
        }
        
        // Setup color buttons
        var colorOptions = slot.Q<VisualElement>("ColorOptions");
        if (colorOptions != null)
        {
            var colorButtons = colorOptions.Query<Button>().ToList();
            for (int i = 0; i < colorButtons.Count && i < availableColors.Length; i++)
            {
                int btnIndex = i;
                int pIndex = playerIndex;
                colorButtons[i].clicked += () => OnColorSelected(pIndex, btnIndex);
            }
        }
        
        // Select default color for this player
        if (playerIndex < availableColors.Length)
        {
            OnColorSelected(playerIndex, playerIndex);
        }
        
        // Setup avatar buttons
        var avatarOptions = slot.Q<VisualElement>("AvatarOptions");
        if (avatarOptions != null)
        {
            var avatarButtons = avatarOptions.Query<Button>().ToList();
            
            // Get selected color for this player (for fallback display)
            Color playerColor = availableColors[playerIndex % availableColors.Length];
            if (colorOptions != null)
            {
                var colorButtons = colorOptions.Query<Button>().ToList();
                for (int j = 0; j < colorButtons.Count; j++)
                {
                    if (colorButtons[j].ClassListContains("selected"))
                    {
                        playerColor = availableColors[j];
                        break;
                    }
                }
            }
            
            for (int i = 0; i < avatarButtons.Count; i++)
            {
                int btnIndex = i;
                int pIndex = playerIndex;
                SetAvatarButtonFallback(avatarButtons[i], i);
                avatarButtons[i].clicked += () => OnAvatarSelected(pIndex, btnIndex);
            }
        }
        
        // Select default avatar (fallback display only; no sprite loading)
        int maxAvatarsForDefault = availableAvatarNames.Length;
        int defaultAvatar = playerIndex < maxAvatarsForDefault ? playerIndex : 0;
        if (!selectedAvatars.ContainsKey(playerIndex))
        {
            selectedAvatars[playerIndex] = defaultAvatar;
        }
        OnAvatarSelected(playerIndex, selectedAvatars[playerIndex]);
    }
    
    void OnAvatarSelected(int playerIndex, int avatarIndex)
    {
        if (playerIndex >= playerSlots.Count) return;
        // Remove the limit check - allow any avatar index (sprites can exceed availableAvatarNames.Length)
        
        // Store selected avatar
        selectedAvatars[playerIndex] = avatarIndex;
        
        var slot = playerSlots[playerIndex];
        var avatarOptions = slot.Q<VisualElement>("AvatarOptions");
        if (avatarOptions == null) return;
        
        // Update button states
        var avatarButtons = avatarOptions.Query<Button>().ToList();
        for (int i = 0; i < avatarButtons.Count; i++)
        {
            if (i == avatarIndex)
                avatarButtons[i].AddToClassList("selected");
            else
                avatarButtons[i].RemoveFromClassList("selected");
        }

        previewPlayerIndex = playerIndex;
        UpdateAvatarBadges(playerIndex);
        UpdateCharacterPreview(playerIndex);
    }
    
    void OnColorSelected(int playerIndex, int colorIndex)
    {
        if (playerIndex >= playerSlots.Count) return;
        if (colorIndex >= availableColors.Length) return;
        
        var slot = playerSlots[playerIndex];
        var colorOptions = slot.Q<VisualElement>("ColorOptions");
        if (colorOptions == null) return;
        
        // Update button states
        var colorButtons = colorOptions.Query<Button>().ToList();
        for (int i = 0; i < colorButtons.Count; i++)
        {
            if (i == colorIndex)
                colorButtons[i].AddToClassList("selected");
            else
                colorButtons[i].RemoveFromClassList("selected");
        }
        
        // Update avatar buttons to reflect selected color (only if no sprite)
        var avatarOptions = slot.Q<VisualElement>("AvatarOptions");
        if (avatarOptions != null)
        {
            var avatarButtons = avatarOptions.Query<Button>().ToList();
            Color selectedColor = availableColors[colorIndex];
            
            for (int i = 0; i < avatarButtons.Count; i++)
                avatarButtons[i].style.backgroundColor = selectedColor;
        }
    }

    void UpdateCharacterPreview(int playerIndex)
    {
        if (characterNameText == null) return;
        if (playerIndex < 0 || playerIndex >= selectedPlayerCount) return;

        int avatarIndex = selectedAvatars.ContainsKey(playerIndex) ? selectedAvatars[playerIndex] : playerIndex;
        Character character = null;

        if (characterDatabase != null && avatarIndex >= 0 && avatarIndex < characterDatabase.CharacterCount)
            character = characterDatabase.GetCharacter(avatarIndex);

        if (characterHeaderText != null)
            characterHeaderText.text = $"Player {playerIndex + 1} - Select Your Character";
        if (characterPlayerTitle != null)
            characterPlayerTitle.text = $"PLAYER {playerIndex + 1}";

        if (character != null)
        {
            if (characterNameText != null) characterNameText.text = character.characterName;
            if (characterDifficultyText != null) characterDifficultyText.text = character.difficultyLevel;
            if (characterBackstoryText != null) characterBackstoryText.text = character.backstory;

            if (characterBenefit1Text != null)
                characterBenefit1Text.text = character.startingMoney > 0 ? $"₦{character.startingMoney:N0}" : "";
            if (characterBenefit2Text != null)
                characterBenefit2Text.text = !string.IsNullOrEmpty(character.startingAssets) ? character.startingAssets : "";
            if (characterPerk1Text != null) characterPerk1Text.text = $"{character.perk1.name}: {character.perk1.description}";
            if (characterPerk2Text != null) characterPerk2Text.text = $"{character.perk2.name}: {character.perk2.description}";
            if (characterCast1Text != null) characterCast1Text.text = $"{character.cast1.name}: {character.cast1.description}";
            if (characterCast2Text != null) characterCast2Text.text = $"{character.cast2.name}: {character.cast2.description}";
        }
        else
        {
            if (characterNameText != null) characterNameText.text = "Character";
            if (characterDifficultyText != null) characterDifficultyText.text = "";
            if (characterBackstoryText != null) characterBackstoryText.text = "";
            if (characterBenefit1Text != null) characterBenefit1Text.text = "";
            if (characterBenefit2Text != null) characterBenefit2Text.text = "";
            if (characterPerk1Text != null) characterPerk1Text.text = "";
            if (characterPerk2Text != null) characterPerk2Text.text = "";
            if (characterCast1Text != null) characterCast1Text.text = "";
            if (characterCast2Text != null) characterCast2Text.text = "";
        }

        if (characterImage != null)
        {
            Sprite portrait = null;
            if (characterPortraits != null && avatarIndex >= 0 && avatarIndex < characterPortraits.Length)
                portrait = characterPortraits[avatarIndex];
            if (portrait != null)
            {
                characterImage.style.backgroundImage = new StyleBackground(portrait);
                characterImage.style.backgroundSize = new StyleBackgroundSize(new BackgroundSize(BackgroundSizeType.Contain));
            }
        }
    }

    void EnsureAvatarBadge(Button avatarBtn)
    {
        if (avatarBtn == null) return;
        var badge = avatarBtn.Q<Label>("AvatarBadge");
        if (badge != null) return;

        badge = new Label();
        badge.name = "AvatarBadge";
        badge.AddToClassList("avatar-badge");
        avatarBtn.Add(badge);
    }

    void RemoveNonBadgeChildren(VisualElement parent)
    {
        if (parent == null) return;
        var toRemove = new List<VisualElement>();
        foreach (var child in parent.Children())
        {
            if (child is Label lbl && lbl.name == "AvatarBadge") continue;
            toRemove.Add(child);
        }
        foreach (var child in toRemove)
            parent.Remove(child);
    }

    void UpdateAvatarBadges(int playerIndex)
    {
        if (playerIndex < 0 || playerIndex >= playerSlots.Count) return;
        var slot = playerSlots[playerIndex];
        var avatarOptions = slot.Q<VisualElement>("AvatarOptions");
        if (avatarOptions == null) return;

        bool isAI = selectedAI.ContainsKey(playerIndex) && selectedAI[playerIndex];
        int selectedAvatar = selectedAvatars.ContainsKey(playerIndex) ? selectedAvatars[playerIndex] : 0;
        string badgeText = isAI ? $"P{playerIndex + 1} AI" : $"P{playerIndex + 1}";

        var avatarButtons = avatarOptions.Query<Button>().ToList();
        for (int i = 0; i < avatarButtons.Count; i++)
        {
            var btn = avatarButtons[i];
            EnsureAvatarBadge(btn);
            var badge = btn.Q<Label>("AvatarBadge");
            if (badge == null) continue;
            if (i == selectedAvatar)
            {
                badge.text = badgeText;
                badge.style.display = DisplayStyle.Flex;
                if (isAI)
                    badge.AddToClassList("is-ai");
                else
                    badge.RemoveFromClassList("is-ai");
            }
            else
            {
                badge.style.display = DisplayStyle.None;
            }
        }
    }
    
    void SetupStartButton()
    {
        var root = mainMenuDocument?.rootVisualElement;
        if (root == null) return;
        // Wire every "go to next scene" button so Start Game and/or Next both work
        if (startGameButton != null)
            startGameButton.clicked += OnStartGameClicked;
        var nextBtn = root.Q<Button>("NextSceneButton");
        if (nextBtn != null && nextBtn != startGameButton)
            nextBtn.clicked += OnStartGameClicked;
        var playBtn = root.Q<Button>("PlayButton");
        if (playBtn != null && playBtn != startGameButton && playBtn != nextBtn)
            playBtn.clicked += OnStartGameClicked;
    }

    void SetupPulseAnimation(VisualElement root)
    {
        if (root == null) return;
        root.schedule.Execute(() =>
        {
            pulseToggle = !pulseToggle;
            var targets = root.Query<VisualElement>(className: "pulse-target").ToList();
            foreach (var target in targets)
            {
                if (target.ClassListContains("selected"))
                {
                    if (pulseToggle)
                        target.AddToClassList("pulse-on");
                    else
                        target.RemoveFromClassList("pulse-on");
                }
                else
                {
                    target.RemoveFromClassList("pulse-on");
                }
            }
        }).Every(700);
    }
    
    void OnStartGameClicked()
    {
        // Collect player configurations
        gameSettings.playerConfigs.Clear();
        
        for (int i = 0; i < selectedPlayerCount && i < playerSlots.Count; i++)
        {
            var slot = playerSlots[i];
            var nameInput = slot.Q<TextField>("PlayerNameInput");
            var colorOptions = slot.Q<VisualElement>("ColorOptions");
            
            string playerName = nameInput != null ? nameInput.value : $"Player {i + 1}";
            if (string.IsNullOrEmpty(playerName))
                playerName = $"Player {i + 1}";
            
            // Find selected color
            Color selectedColor = availableColors[i % availableColors.Length];
            if (colorOptions != null)
            {
                var colorButtons = colorOptions.Query<Button>().ToList();
                for (int j = 0; j < colorButtons.Count; j++)
                {
                    if (colorButtons[j].ClassListContains("selected"))
                    {
                        selectedColor = availableColors[j];
                        break;
                    }
                }
            }
            
            // Find selected avatar: use stored value (what user clicked), else which button has "selected", else player index
            int selectedAvatar;
            if (selectedAvatars.ContainsKey(i))
                selectedAvatar = selectedAvatars[i];
            else
            {
                selectedAvatar = i;
                var avatarOptions = slot.Q<VisualElement>("AvatarOptions");
                if (avatarOptions != null)
                {
                    var avatarButtons = avatarOptions.Query<Button>().ToList();
                    for (int j = 0; j < avatarButtons.Count; j++)
                    {
                        if (avatarButtons[j].ClassListContains("selected"))
                        {
                            selectedAvatar = j;
                            break;
                        }
                    }
                }
            }

            // AI toggle
            bool isAI = false;
            var aiToggle = slot.Q<Toggle>("AIPlayerToggle");
            if (aiToggle != null)
            {
                isAI = aiToggle.value;
            }
            else if (selectedAI.ContainsKey(i))
            {
                isAI = selectedAI[i];
            }
            
            gameSettings.playerConfigs.Add(new PlayerConfig(playerName, selectedColor, selectedAvatar, isAI));
        }
        
        // Get game settings
        if (startingMoneyInput != null && int.TryParse(startingMoneyInput.value, out int startMoney))
            gameSettings.startingMoney = startMoney;
        
        if (goSalaryInput != null && int.TryParse(goSalaryInput.value, out int salary))
            gameSettings.goSalary = salary;
        
        // Store settings to load in game scene
        SettingsToLoad = gameSettings;
        
        // Load game scene (never load StartPage/Start/StartGame by mistake — use GameScene)
        string sceneToLoad = gameSceneName;
        if (string.IsNullOrEmpty(sceneToLoad)
            || string.Equals(sceneToLoad, "StartPage", System.StringComparison.OrdinalIgnoreCase)
            || string.Equals(sceneToLoad, "Start", System.StringComparison.OrdinalIgnoreCase)
            || string.Equals(sceneToLoad, "StartGame", System.StringComparison.OrdinalIgnoreCase))
            sceneToLoad = "GameScene";
        Debug.Log($"Loading game scene: {sceneToLoad}");
        SceneManager.LoadScene(sceneToLoad, LoadSceneMode.Single);
    }
    
    // This method is now called from GameSceneLoader in the game scene
    public static void ApplyGameSettings(TurnManager turnManager, GameObject playerPrefab = null)
    {
        if (SettingsToLoad == null)
        {
            Debug.LogWarning("No game settings to load! Using defaults.");
            return;
        }
        
        var gameSettings = SettingsToLoad;
        
        // Clear existing players
        if (turnManager.players == null)
            turnManager.players = new List<Player>();
        else
            turnManager.players.Clear();
        
        // Resolve board path once so runtime-created players have boardPoints before Start()
        Transform[] boardPath = turnManager.boardPath != null && turnManager.boardPath.Length > 0
            ? turnManager.boardPath
            : turnManager.BuildBoardPathFromScenePublic();
        
        // Create players from config
        for (int i = 0; i < gameSettings.playerConfigs.Count; i++)
        {
            var config = gameSettings.playerConfigs[i];
            
            // Create player GameObject (prefab has SpriteRenderer; if no prefab, add one so token is visible)
            GameObject playerObj;
            if (playerPrefab != null)
            {
                playerObj = Object.Instantiate(playerPrefab);
            }
            else
            {
                playerObj = new GameObject($"Player_{i + 1}");
                playerObj.AddComponent<Player>();
                playerObj.AddComponent<SpriteRenderer>(); // Required so ApplyVisualSettings can show token
            }
            
            var player = playerObj.GetComponent<Player>();
            if (player != null)
            {
                // Apply configuration
                player.playerName = config.playerName;
                player.playerColor = config.playerColor;
                player.playerIndex = i;
                player.tokenSpriteIndex = config.avatarIndex;
                player.characterIndex = config.avatarIndex;
                player.isAI = config.isAI;
                
                // Set starting money (per-player from character, or game default)
                player.Money = config.startingMoney > 0 ? config.startingMoney : gameSettings.startingMoney;
                
                // Assign board path and turnManager so Player.Start() and GetCurrentTile() don't throw
                if (boardPath != null && boardPath.Length > 0)
                    player.boardPoints = boardPath;
                player.turnManager = turnManager;
                
                // Apply visual settings (color to SpriteRenderer)
                player.ApplyVisualSettings();
                
                turnManager.players.Add(player);
            }
        }
        
        // Apply game economy settings
        turnManager.goSalary = gameSettings.goSalary;
        
        Debug.Log($"Game started with {gameSettings.playerConfigs.Count} players!");
    }
    
    void OnBackClicked()
    {
        // Could return to main menu or exit
        Debug.Log("Back button clicked");
    }
}
