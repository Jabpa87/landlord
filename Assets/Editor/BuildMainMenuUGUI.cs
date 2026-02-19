using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.EventSystems;

public static class BuildMainMenuUGUI
{
    private const string CanvasName = "MainMenuCanvas";
    private const string RootName = "MainMenuRoot";
    private const string ControllerName = "MainMenuController";
    private const string CharacterPanelName = "CharacterPanel";
    private const string TokenRowName = "TokenRow";
    private const string ColorRowName = "ColorRow";

    private const string CharacterDatabasePath = "Assets/CharacterDatabase.asset";
    private const string DefaultFontPath = "Assets/TextMesh Pro/Resources/Fonts & Materials/LiberationSans SDF.asset";
    private const string DiceCanvasName = "DiceOverlayCanvas";
    private const string DiceRootName = "DiceOverlayRoot";
    private const string Dice1Name = "Dice1";
    private const string Dice2Name = "Dice2";
    private const string Dice01Path = "Assets/Dice/dice-01.png";
    private const string Dice02Path = "Assets/Dice/dice-02.png";
    private const string Dice03Path = "Assets/Dice/dice-03.png";
    private const string Dice04Path = "Assets/Dice/dice-04.png";
    private const string Dice05Path = "Assets/Dice/dice-05.png";
    private const string Dice06Path = "Assets/Dice/dice-06.png";
    private const string DiceRollSheetPath = "Assets/Dice/Glossy Red Dice Rolls.png";

    [MenuItem("Tools/UI/Build Main Menu")]
    public static void Build()
    {
        var scene = EditorSceneManager.GetActiveScene();
        if (!scene.IsValid())
        {
            Debug.LogError("No active scene. Open MainMenu.unity first.");
            return;
        }

        EnsureEventSystem();

        var canvas = GetOrCreateCanvas(CanvasName);
        var root = GetOrCreateUIObject(RootName, canvas.transform);
        SetStretch(root);

        var controllerGo = GameObject.Find(ControllerName) ?? new GameObject(ControllerName);
        var mainMenu = controllerGo.GetComponent<MainMenuController>() ?? controllerGo.AddComponent<MainMenuController>();
        var characterManager = controllerGo.GetComponent<CharacterManager>() ?? controllerGo.AddComponent<CharacterManager>();

        var characterDb = AssetDatabase.LoadAssetAtPath<CharacterDatabase>(CharacterDatabasePath);
        mainMenu.characterDB = characterDb;
        characterManager.characterDB = characterDb;
        mainMenu.characterManager = characterManager;
        mainMenu.gameSceneName = "GameScene";
        mainMenu.quickPickMode = false;
        mainMenu.allowDuplicateCharacters = false;

        // Top bar
        var topBar = GetOrCreateUIObject("TopBar", root.transform);
        SetAnchored(topBar, new Vector2(0f, 1f), new Vector2(1f, 1f), new Vector2(0f, 1f), new Vector2(0f, 0f), new Vector2(0f, -20f));
        SetSize(topBar, new Vector2(0f, 140f));

        // Player count panel
        var playerCountPanel = GetOrCreateUIObject("PlayerCountPanel", topBar.transform);
        SetAnchored(playerCountPanel, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);
        SetSize(playerCountPanel, new Vector2(300f, 60f));

        var decBtn = CreateButton("PlayerCountDecreaseButton", playerCountPanel.transform, "-", 32);
        SetAnchored(decBtn.gameObject, new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(0f, 0f), Vector2.zero);
        SetSize(decBtn.gameObject, new Vector2(60f, 60f));

        var countText = CreateText("PlayerCountText", playerCountPanel.transform, "2", 32);
        SetAnchored(countText.gameObject, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);
        SetSize(countText.gameObject, new Vector2(80f, 60f));

        var incBtn = CreateButton("PlayerCountIncreaseButton", playerCountPanel.transform, "+", 32);
        SetAnchored(incBtn.gameObject, new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(0f, 0f), Vector2.zero);
        SetSize(incBtn.gameObject, new Vector2(60f, 60f));

        // Game settings button
        var settingsBtn = CreateButton("GameSettingsButton", topBar.transform, "Settings", 22);
        SetAnchored(settingsBtn.gameObject, new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(-40f, 0f), Vector2.zero);
        SetSize(settingsBtn.gameObject, new Vector2(180f, 50f));

        // Current player label
        var currentPlayerLabel = CreateText("CurrentPlayerLabel", topBar.transform, "Player 1", 26);
        SetAnchored(currentPlayerLabel.gameObject, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0f, -70f), Vector2.zero);
        SetSize(currentPlayerLabel.gameObject, new Vector2(400f, 40f));

        // Character panel
        var characterPanel = GetOrCreateUIObject(CharacterPanelName, root.transform);
        var panelImage = EnsureImage(characterPanel, new Color(0f, 0f, 0f, 0.15f));
        panelImage.raycastTarget = false;
        SetAnchored(characterPanel, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);
        SetSize(characterPanel, new Vector2(1500f, 650f));

        var leftImage = GetOrCreateUIObject("CharacterFullImage", characterPanel.transform);
        SetAnchored(leftImage, new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(60f, 0f), Vector2.zero);
        SetSize(leftImage, new Vector2(420f, 560f));
        var leftImageComponent = EnsureImage(leftImage, Color.white);

        var rightPanel = GetOrCreateUIObject("CharacterInfo", characterPanel.transform);
        SetAnchored(rightPanel, new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(-60f, 0f), Vector2.zero);
        SetSize(rightPanel, new Vector2(900f, 560f));

        var nameText = CreateText("CharacterNameText", rightPanel.transform, "Character Name", 34);
        SetAnchored(nameText.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -20f), Vector2.zero);
        SetSize(nameText.gameObject, new Vector2(900f, 40f));

        var difficultyText = CreateText("DifficultyText", rightPanel.transform, "Difficulty", 24);
        SetAnchored(difficultyText.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -70f), Vector2.zero);
        SetSize(difficultyText.gameObject, new Vector2(900f, 30f));

        var backstoryText = CreateText("BackstoryText", rightPanel.transform, "Backstory...", 20);
        backstoryText.enableWordWrapping = true;
        SetAnchored(backstoryText.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -120f), Vector2.zero);
        SetSize(backstoryText.gameObject, new Vector2(900f, 140f));

        var startingMoneyText = CreateText("StartingMoneyText", rightPanel.transform, "₦0", 20);
        SetAnchored(startingMoneyText.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -270f), Vector2.zero);
        SetSize(startingMoneyText.gameObject, new Vector2(900f, 30f));

        var startingAssetsText = CreateText("StartingAssetsText", rightPanel.transform, "Assets", 20);
        SetAnchored(startingAssetsText.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -305f), Vector2.zero);
        SetSize(startingAssetsText.gameObject, new Vector2(900f, 30f));

        var perk1Name = CreateText("Perk1Name", rightPanel.transform, "Perk 1", 20);
        SetAnchored(perk1Name.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -350f), Vector2.zero);
        SetSize(perk1Name.gameObject, new Vector2(900f, 25f));
        var perk1Desc = CreateText("Perk1Desc", rightPanel.transform, "Perk 1 desc", 18);
        SetAnchored(perk1Desc.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -375f), Vector2.zero);
        SetSize(perk1Desc.gameObject, new Vector2(900f, 40f));

        var perk2Name = CreateText("Perk2Name", rightPanel.transform, "Perk 2", 20);
        SetAnchored(perk2Name.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -420f), Vector2.zero);
        SetSize(perk2Name.gameObject, new Vector2(900f, 25f));
        var perk2Desc = CreateText("Perk2Desc", rightPanel.transform, "Perk 2 desc", 18);
        SetAnchored(perk2Desc.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -445f), Vector2.zero);
        SetSize(perk2Desc.gameObject, new Vector2(900f, 40f));

        var cast1Name = CreateText("Cast1Name", rightPanel.transform, "Cast 1", 20);
        SetAnchored(cast1Name.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -490f), Vector2.zero);
        SetSize(cast1Name.gameObject, new Vector2(900f, 25f));
        var cast1Desc = CreateText("Cast1Desc", rightPanel.transform, "Cast 1 desc", 18);
        SetAnchored(cast1Desc.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -515f), Vector2.zero);
        SetSize(cast1Desc.gameObject, new Vector2(900f, 40f));

        var cast2Name = CreateText("Cast2Name", rightPanel.transform, "Cast 2", 20);
        SetAnchored(cast2Name.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -560f), Vector2.zero);
        SetSize(cast2Name.gameObject, new Vector2(900f, 25f));
        var cast2Desc = CreateText("Cast2Desc", rightPanel.transform, "Cast 2 desc", 18);
        SetAnchored(cast2Desc.gameObject, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(0f, -585f), Vector2.zero);
        SetSize(cast2Desc.gameObject, new Vector2(900f, 40f));

        // Token row
        var tokenRow = GetOrCreateUIObject(TokenRowName, characterPanel.transform);
        SetAnchored(tokenRow, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0f, 20f), Vector2.zero);
        SetSize(tokenRow, new Vector2(1200f, 100f));
        var tokenLayout = tokenRow.GetComponent<HorizontalLayoutGroup>() ?? tokenRow.AddComponent<HorizontalLayoutGroup>();
        tokenLayout.childAlignment = TextAnchor.MiddleCenter;
        tokenLayout.spacing = 10f;
        tokenLayout.childControlHeight = true;
        tokenLayout.childControlWidth = true;
        tokenLayout.childForceExpandHeight = false;
        tokenLayout.childForceExpandWidth = false;

        int characterCount = characterDb != null ? characterDb.CharacterCount : 0;
        var tokenImages = new Image[characterCount];
        var tokenButtons = new Button[characterCount];
        for (int i = 0; i < characterCount; i++)
        {
            var tokenButton = GetOrCreateUIObject($"TokenButton_{i}", tokenRow.transform);
            SetSize(tokenButton, new Vector2(90f, 90f));
            var tokenImage = EnsureImage(tokenButton, Color.white);
            var btn = tokenButton.GetComponent<Button>() ?? tokenButton.AddComponent<Button>();
            btn.targetGraphic = tokenImage;
            tokenImages[i] = tokenImage;
            tokenButtons[i] = btn;
        }

        // Color row
        var colorRow = GetOrCreateUIObject(ColorRowName, characterPanel.transform);
        SetAnchored(colorRow, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0f, 130f), Vector2.zero);
        SetSize(colorRow, new Vector2(420f, 50f));
        var colorLayout = colorRow.GetComponent<HorizontalLayoutGroup>() ?? colorRow.AddComponent<HorizontalLayoutGroup>();
        colorLayout.childAlignment = TextAnchor.MiddleCenter;
        colorLayout.spacing = 8f;

        var colorButtons = new Button[8];
        for (int i = 0; i < colorButtons.Length; i++)
        {
            var cb = GetOrCreateUIObject($"ColorButton_{i}", colorRow.transform);
            SetSize(cb, new Vector2(40f, 40f));
            var img = EnsureImage(cb, Color.white);
            var btn = cb.GetComponent<Button>() ?? cb.AddComponent<Button>();
            btn.targetGraphic = img;
            if (mainMenu.presetColors != null && i < mainMenu.presetColors.Length)
                img.color = mainMenu.presetColors[i];
            colorButtons[i] = btn;
        }

        var colorPreview = GetOrCreateUIObject("SelectedColorPreview", characterPanel.transform);
        SetAnchored(colorPreview, new Vector2(1f, 0f), new Vector2(1f, 0f), new Vector2(1f, 0f), new Vector2(-40f, 130f), Vector2.zero);
        SetSize(colorPreview, new Vector2(40f, 40f));
        var colorPreviewImage = EnsureImage(colorPreview, Color.white);

        // Bottom bar
        var bottomBar = GetOrCreateUIObject("BottomBar", root.transform);
        SetAnchored(bottomBar, new Vector2(0f, 0f), new Vector2(1f, 0f), new Vector2(0f, 0f), new Vector2(0f, 0f), new Vector2(0f, 20f));
        SetSize(bottomBar, new Vector2(0f, 120f));

        var aiToggle = CreateToggle("AIToggle", bottomBar.transform, "AI");
        SetAnchored(aiToggle.gameObject, new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(0f, 0.5f), new Vector2(40f, 0f), Vector2.zero);
        SetSize(aiToggle.gameObject, new Vector2(160f, 40f));

        var selectBtn = CreateButton("SelectButton", bottomBar.transform, "Select", 22);
        SetAnchored(selectBtn.gameObject, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(-140f, 0f), Vector2.zero);
        SetSize(selectBtn.gameObject, new Vector2(160f, 50f));

        var backBtn = CreateButton("BackButton", bottomBar.transform, "Back", 22);
        SetAnchored(backBtn.gameObject, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(20f, 0f), Vector2.zero);
        SetSize(backBtn.gameObject, new Vector2(160f, 50f));

        var startBtn = CreateButton("StartGameButton", bottomBar.transform, "Start Game", 22);
        SetAnchored(startBtn.gameObject, new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(1f, 0.5f), new Vector2(-200f, 0f), Vector2.zero);
        SetSize(startBtn.gameObject, new Vector2(200f, 50f));

        // Settings panel (hidden)
        var settingsPanel = GetOrCreateUIObject("GameSettingsPanel", root.transform);
        SetAnchored(settingsPanel, new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(-20f, -20f), Vector2.zero);
        SetSize(settingsPanel, new Vector2(360f, 220f));
        var settingsImage = EnsureImage(settingsPanel, new Color(0f, 0f, 0f, 0.6f));
        settingsImage.raycastTarget = true;
        settingsPanel.SetActive(false);

        var settingsTitle = CreateText("GameSettingsTitle", settingsPanel.transform, "Game Settings", 22);
        SetAnchored(settingsTitle.gameObject, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0f, -20f), Vector2.zero);
        SetSize(settingsTitle.gameObject, new Vector2(320f, 30f));

        // Assign references
        mainMenu.playerCountText = countText;
        mainMenu.playerCountDecreaseButton = decBtn;
        mainMenu.playerCountIncreaseButton = incBtn;
        mainMenu.currentPlayerLabel = currentPlayerLabel;
        mainMenu.colorButtons = colorButtons;
        mainMenu.selectedColorPreview = colorPreviewImage;
        mainMenu.aiToggle = aiToggle;
        mainMenu.selectButton = selectBtn;
        mainMenu.backButton = backBtn;
        mainMenu.startGameButton = startBtn;
        mainMenu.gameSettingsButton = settingsBtn;
        mainMenu.gameSettingsPanel = settingsPanel;

        characterManager.characterFullImage = leftImageComponent;
        characterManager.characterNameText = nameText;
        characterManager.difficultyText = difficultyText;
        characterManager.backstoryText = backstoryText;
        characterManager.startingMoneyText = startingMoneyText;
        characterManager.startingAssetsText = startingAssetsText;
        characterManager.perk1NameText = perk1Name;
        characterManager.perk1DescText = perk1Desc;
        characterManager.perk2NameText = perk2Name;
        characterManager.perk2DescText = perk2Desc;
        characterManager.cast1NameText = cast1Name;
        characterManager.cast1DescText = cast1Desc;
        characterManager.cast2NameText = cast2Name;
        characterManager.cast2DescText = cast2Desc;
        characterManager.tokenImages = tokenImages;
        characterManager.tokenButtons = tokenButtons;

        EditorUtility.SetDirty(mainMenu);
        EditorUtility.SetDirty(characterManager);
        EditorSceneManager.MarkSceneDirty(scene);
        Debug.Log("Main Menu uGUI created/updated.");
    }

    [MenuItem("Tools/UI/Build Dice Overlay")]
    public static void BuildDiceOverlay()
    {
        var scene = EditorSceneManager.GetActiveScene();
        if (!scene.IsValid())
        {
            Debug.LogError("No active scene. Open GameScene.unity first.");
            return;
        }

        var canvas = GetOrCreateCanvas(DiceCanvasName);
        canvas.sortingOrder = 50;

        var root = GetOrCreateUIObject(DiceRootName, canvas.transform);
        SetCentered(root, new Vector2(260f, 140f));

        var rootImage = EnsureImage(root, new Color(1f, 1f, 1f, 0f));
        var rootButton = root.GetComponent<Button>() ?? root.AddComponent<Button>();
        rootButton.targetGraphic = rootImage;

        var dice1 = GetOrCreateUIObject(Dice1Name, root.transform);
        SetAnchored(dice1, new Vector2(0.25f, 0.5f), new Vector2(0.25f, 0.5f), new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);
        SetSize(dice1, new Vector2(110f, 110f));
        var dice1Image = EnsureImage(dice1, Color.white);

        var dice2 = GetOrCreateUIObject(Dice2Name, root.transform);
        SetAnchored(dice2, new Vector2(0.75f, 0.5f), new Vector2(0.75f, 0.5f), new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);
        SetSize(dice2, new Vector2(110f, 110f));
        var dice2Image = EnsureImage(dice2, Color.white);

        Sprite[] faceSprites = new Sprite[6];
        faceSprites[0] = AssetDatabase.LoadAssetAtPath<Sprite>(Dice01Path);
        faceSprites[1] = AssetDatabase.LoadAssetAtPath<Sprite>(Dice02Path);
        faceSprites[2] = AssetDatabase.LoadAssetAtPath<Sprite>(Dice03Path);
        faceSprites[3] = AssetDatabase.LoadAssetAtPath<Sprite>(Dice04Path);
        faceSprites[4] = AssetDatabase.LoadAssetAtPath<Sprite>(Dice05Path);
        faceSprites[5] = AssetDatabase.LoadAssetAtPath<Sprite>(Dice06Path);

        Sprite[] rollFrames = LoadRollFrames();

        DiceRoller roller = Object.FindFirstObjectByType<DiceRoller>();
        if (roller == null)
        {
            var go = new GameObject("DiceRoller");
            roller = go.AddComponent<DiceRoller>();
        }

        roller.dice1Image = dice1Image;
        roller.dice2Image = dice2Image;
        roller.faceSprites = faceSprites;
        roller.rollFrames = rollFrames;
        roller.dice1Faces = new Image[0];
        roller.dice2Faces = new Image[0];
        roller.dice1Model = null;
        roller.dice2Model = null;
        roller.diceButton = rootButton;
        roller.diceRoot = root;
        roller.diceRollPanel = root;
        roller.diceDisplayContainer = root;
        roller.keepDiceVisibleAtStart = false;
        roller.keepDiceVisibleAfterRoll = true;
        roller.showWhenActiveOnly = true;
        roller.useBounceAnimation = true;
        roller.rollDuration = 1.2f;
        roller.faceChangeSpeed = 16f;
        roller.rollFrameRate = 30f;
        roller.rollFrameOffset = 9;

        var tm = Object.FindFirstObjectByType<TurnManager>();
        if (tm != null)
        {
            roller.turnManager = tm;
            tm.diceRoller = roller;
            EditorUtility.SetDirty(tm);
        }

        EditorUtility.SetDirty(roller);
        EditorSceneManager.MarkSceneDirty(scene);
        Debug.Log("Dice overlay built and DiceRoller configured.");
    }

    private static Canvas GetOrCreateCanvas(string name)
    {
        var go = GameObject.Find(name);
        if (go == null)
            go = new GameObject(name, typeof(RectTransform), typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));

        var canvas = go.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.overrideSorting = true;
        canvas.sortingOrder = 0;

        var scaler = go.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920f, 1080f);
        scaler.matchWidthOrHeight = 0.5f;

        return canvas;
    }

    private static void EnsureEventSystem()
    {
        if (Object.FindObjectOfType<EventSystem>() != null) return;
        var es = new GameObject("EventSystem", typeof(EventSystem), typeof(StandaloneInputModule));
        Object.DontDestroyOnLoad(es);
    }

    private static GameObject GetOrCreateUIObject(string name, Transform parent)
    {
        var existing = parent.Find(name);
        if (existing != null) return existing.gameObject;
        var go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);
        return go;
    }

    private static void SetStretch(GameObject go)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.anchorMin = Vector2.zero;
        rt.anchorMax = Vector2.one;
        rt.offsetMin = Vector2.zero;
        rt.offsetMax = Vector2.zero;
        rt.localScale = Vector3.one;
    }

    private static void SetAnchored(GameObject go, Vector2 anchorMin, Vector2 anchorMax, Vector2 pivot, Vector2 anchoredPos, Vector2 offset)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.anchorMin = anchorMin;
        rt.anchorMax = anchorMax;
        rt.pivot = pivot;
        rt.anchoredPosition = anchoredPos;
        rt.offsetMin = offset;
        rt.offsetMax = offset;
        rt.localScale = Vector3.one;
    }

    private static void SetCentered(GameObject go, Vector2 size)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.anchorMin = new Vector2(0.5f, 0.5f);
        rt.anchorMax = new Vector2(0.5f, 0.5f);
        rt.pivot = new Vector2(0.5f, 0.5f);
        rt.anchoredPosition = Vector2.zero;
        rt.sizeDelta = size;
        rt.localScale = Vector3.one;
    }

    private static void SetSize(GameObject go, Vector2 size)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.sizeDelta = size;
    }

    private static Image EnsureImage(GameObject go, Color color)
    {
        var img = go.GetComponent<Image>();
        if (img == null) img = go.AddComponent<Image>();
        img.color = color;
        img.raycastTarget = true;
        return img;
    }

    private static Sprite[] LoadRollFrames()
    {
        Object[] assets = AssetDatabase.LoadAllAssetsAtPath(DiceRollSheetPath);
        if (assets == null || assets.Length == 0) return new Sprite[0];
        var sprites = new System.Collections.Generic.List<Sprite>();
        foreach (var a in assets)
        {
            if (a is Sprite s) sprites.Add(s);
        }
        sprites.Sort((a, b) => ParseFrameIndex(a.name).CompareTo(ParseFrameIndex(b.name)));
        return sprites.ToArray();
    }

    private static int ParseFrameIndex(string name)
    {
        if (string.IsNullOrEmpty(name)) return 0;
        int underscore = name.LastIndexOf('_');
        if (underscore >= 0 && underscore + 1 < name.Length)
        {
            if (int.TryParse(name.Substring(underscore + 1), out int n))
                return n;
        }
        return 0;
    }

    private static TMP_Text CreateText(string name, Transform parent, string text, int size)
    {
        var go = GetOrCreateUIObject(name, parent);
        var tmp = go.GetComponent<TextMeshProUGUI>();
        if (tmp == null) tmp = go.AddComponent<TextMeshProUGUI>();
        var font = AssetDatabase.LoadAssetAtPath<TMP_FontAsset>(DefaultFontPath);
        if (font != null) tmp.font = font;
        tmp.text = text;
        tmp.fontSize = size;
        tmp.alignment = TextAlignmentOptions.Left;
        tmp.raycastTarget = false;
        return tmp;
    }

    private static Button CreateButton(string name, Transform parent, string label, int fontSize)
    {
        var go = GetOrCreateUIObject(name, parent);
        var img = EnsureImage(go, new Color(1f, 1f, 1f, 0.9f));
        var btn = go.GetComponent<Button>() ?? go.AddComponent<Button>();
        btn.targetGraphic = img;
        var labelGo = GetOrCreateUIObject(name + "_Label", go.transform);
        SetStretch(labelGo);
        var labelText = CreateText(labelGo.name, go.transform, label, fontSize);
        labelText.alignment = TextAlignmentOptions.Center;
        return btn;
    }

    private static Toggle CreateToggle(string name, Transform parent, string label)
    {
        var go = GetOrCreateUIObject(name, parent);
        var img = EnsureImage(go, new Color(1f, 1f, 1f, 0.9f));
        var toggle = go.GetComponent<Toggle>() ?? go.AddComponent<Toggle>();
        toggle.targetGraphic = img;

        var labelGo = GetOrCreateUIObject(name + "_Label", go.transform);
        SetStretch(labelGo);
        var labelText = CreateText(labelGo.name, go.transform, label, 20);
        labelText.alignment = TextAlignmentOptions.Center;
        toggle.graphic = img;
        return toggle;
    }
}
