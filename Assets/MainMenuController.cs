using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System.Collections.Generic;

/// <summary>
/// uGUI main menu controller: number of players, sequential per-player character selection
/// (character + color for building identification + AI checkbox), Game Settings button, Start Game.
/// Builds GameSettings and sets MainMenuManager.SettingsToLoad before loading GameScene.
/// </summary>
public class MainMenuController : MonoBehaviour
{
    [Header("Database and character panel")]
    public CharacterDatabase characterDB;
    public CharacterManager characterManager;

    [Header("Quick Pick Mode")]
    [Tooltip("One-screen quick pick: tap character card to assign next player.")]
    public bool quickPickMode = true;
    [Tooltip("Allow multiple players to pick the same character.")]
    public bool allowDuplicateCharacters = false;

    [Header("Number of players")]
    public TMP_Text playerCountText;
    public Button playerCountDecreaseButton;
    public Button playerCountIncreaseButton;
    [Tooltip("Optional dropdown with options for 2, 3, 4 players (values 0..2).")]
    public TMP_Dropdown playerCountDropdown;
    [SerializeField] [Range(2, 4)] private int playerCount = 2;

    [Header("Current player label")]
    public TMP_Text currentPlayerLabel;

    [Header("Color selection (for building identification)")]
    [Tooltip("Preset colors; assign buttons in same order")]
    public Color[] presetColors = new Color[]
    {
        new Color(0.96f, 0.26f, 0.21f),
        new Color(0.13f, 0.59f, 0.95f),
        new Color(0.30f, 0.69f, 0.31f),
        new Color(1f, 0.92f, 0.23f),
        new Color(0.61f, 0.15f, 0.69f),
        new Color(1f, 0.6f, 0f),
        new Color(0.91f, 0.12f, 0.39f),
        new Color(0f, 0.74f, 0.83f)
    };
    [Tooltip("Buttons that select color; order must match presetColors")]
    public Button[] colorButtons = new Button[0];
    [Tooltip("Optional: image to show current color")]
    public Image selectedColorPreview;
    private int selectedColorIndex = 0;

    [Header("AI and navigation")]
    public Toggle aiToggle;
    public Button selectButton;
    public Button backButton;
    public Button startGameButton;

    [Header("Game Settings (outside character section)")]
    public Button gameSettingsButton;
    public GameObject gameSettingsPanel;
    [Header("Text size (assign in Settings panel)")]
    [Tooltip("Optional buttons for Small / Medium / Large text. Saves to PlayerPrefs for game scene.")]
    public Button fontSizeSmallButton;
    public Button fontSizeMediumButton;
    public Button fontSizeLargeButton;

    [Header("Scene")]
    public string gameSceneName = "GameScene";

    [Header("Game economy defaults")]
    public int defaultGoSalary = 200000;

    private int currentPlayerIndex = 0;
    private List<PlayerConfig> playerConfigsBuilt = new List<PlayerConfig>();
    private HashSet<int> usedCharacterIndices = new HashSet<int>();

    void Start()
    {
        playerCount = Mathf.Clamp(playerCount, 2, 4);
        currentPlayerIndex = 0;
        playerConfigsBuilt.Clear();
        usedCharacterIndices.Clear();

        UpdatePlayerCountUI();
        UpdateCurrentPlayerLabel();
        UpdateColorPreview();
        if (startGameButton != null) startGameButton.gameObject.SetActive(false);

        if (playerCountDecreaseButton != null) playerCountDecreaseButton.onClick.AddListener(OnPlayerCountDecrease);
        if (playerCountIncreaseButton != null) playerCountIncreaseButton.onClick.AddListener(OnPlayerCountIncrease);
        if (playerCountDropdown != null) playerCountDropdown.onValueChanged.AddListener(OnPlayerCountDropdownChanged);
        if (selectButton != null) selectButton.onClick.AddListener(OnSelectClicked);
        if (backButton != null) backButton.onClick.AddListener(OnBackClicked);
        if (startGameButton != null) startGameButton.onClick.AddListener(OnStartGameClicked);
        if (gameSettingsButton != null) gameSettingsButton.onClick.AddListener(OnGameSettingsClicked);

        for (int i = 0; i < colorButtons?.Length; i++)
        {
            int idx = i;
            if (colorButtons[i] != null)
                colorButtons[i].onClick.AddListener(() => OnColorSelected(idx));
        }

        if (gameSettingsPanel != null) gameSettingsPanel.SetActive(false);
        if (fontSizeSmallButton != null) fontSizeSmallButton.onClick.AddListener(() => SetFontSizeLevel(0));
        if (fontSizeMediumButton != null) fontSizeMediumButton.onClick.AddListener(() => SetFontSizeLevel(1));
        if (fontSizeLargeButton != null) fontSizeLargeButton.onClick.AddListener(() => SetFontSizeLevel(2));
        ApplyPlayerCountFromDropdown();
        SyncPlayerCountDropdown();

        if (quickPickMode)
        {
            // Auto-assign colors and hide extra actions in quick pick mode.
            if (selectButton != null) selectButton.gameObject.SetActive(false);
            if (backButton != null) backButton.gameObject.SetActive(false);
            if (selectedColorPreview != null) selectedColorPreview.gameObject.SetActive(false);
            for (int i = 0; i < colorButtons?.Length; i++)
            {
                if (colorButtons[i] != null) colorButtons[i].gameObject.SetActive(false);
            }
            if (characterManager != null)
            {
                characterManager.SetQuickPickMode(true);
                characterManager.OnCharacterSelected += OnQuickPickCharacterSelected;
            }
        }
    }

    void OnPrevCharacterClicked()
    {
        if (characterManager == null) return;
        characterManager.BackOption();
    }

    void OnNextCharacterClicked()
    {
        if (characterManager == null) return;
        characterManager.NextOption();
    }

    void OnPlayerCountDecrease()
    {
        if (playerCount <= 2) return;
        playerCount--;
        currentPlayerIndex = Mathf.Min(currentPlayerIndex, playerCount - 1);
        if (playerConfigsBuilt.Count > playerCount) playerConfigsBuilt.RemoveRange(playerCount, playerConfigsBuilt.Count - playerCount);
        UpdatePlayerCountUI();
        UpdateCurrentPlayerLabel();
        SyncPlayerCountDropdown();
        if (startGameButton != null) startGameButton.gameObject.SetActive(playerConfigsBuilt.Count >= playerCount && playerCount > 0);
    }

    void OnPlayerCountIncrease()
    {
        if (playerCount >= 4) return;
        playerCount++;
        UpdatePlayerCountUI();
        UpdateCurrentPlayerLabel();
        SyncPlayerCountDropdown();
        if (startGameButton != null) startGameButton.gameObject.SetActive(playerConfigsBuilt.Count >= playerCount && playerCount > 0);
    }

    void UpdatePlayerCountUI()
    {
        if (playerCountText != null) playerCountText.text = playerCount.ToString();
        if (playerCountDecreaseButton != null) playerCountDecreaseButton.interactable = playerCount > 2;
        if (playerCountIncreaseButton != null) playerCountIncreaseButton.interactable = playerCount < 4;
    }

    void UpdateCurrentPlayerLabel()
    {
        if (currentPlayerLabel == null) return;
        if (currentPlayerIndex >= playerCount)
        {
            currentPlayerLabel.text = "All players selected";
            return;
        }
        int displayIndex = Mathf.Clamp(currentPlayerIndex, 0, Mathf.Max(0, playerCount - 1)) + 1;
        currentPlayerLabel.text = quickPickMode
            ? $"Pick for Player {displayIndex}"
            : $"Player {displayIndex}";
    }

    void OnColorSelected(int index)
    {
        if (index >= 0 && index < presetColors.Length)
        {
            selectedColorIndex = index;
            UpdateColorPreview();
        }
    }

    void UpdateColorPreview()
    {
        if (selectedColorPreview != null && selectedColorIndex >= 0 && selectedColorIndex < presetColors.Length)
            selectedColorPreview.color = presetColors[selectedColorIndex];
    }

    void OnSelectClicked()
    {
        if (quickPickMode) return;
        if (characterManager == null || characterDB == null) return;
        Character c = characterManager.GetCurrentCharacter();
        if (c == null) return;

        Color col = selectedColorIndex >= 0 && selectedColorIndex < presetColors.Length
            ? presetColors[selectedColorIndex]
            : Color.white;
        bool isAI = aiToggle != null && aiToggle.isOn;
        int startMoney = c.startingMoney > 0 ? c.startingMoney : 0;

        playerConfigsBuilt.Add(new PlayerConfig(c.characterName, col, characterManager.SelectedIndex, isAI, startMoney));
        currentPlayerIndex++;

        if (currentPlayerIndex >= playerCount)
        {
            if (startGameButton != null) startGameButton.gameObject.SetActive(true);
            if (selectButton != null) selectButton.interactable = false;
            UpdateCurrentPlayerLabel();
            return;
        }

        UpdateCurrentPlayerLabel();
        selectedColorIndex = 0;
        UpdateColorPreview();
        if (aiToggle != null) aiToggle.isOn = false;
    }

    void OnBackClicked()
    {
        if (quickPickMode) return;
        if (playerConfigsBuilt.Count == 0) return;
        playerConfigsBuilt.RemoveAt(playerConfigsBuilt.Count - 1);
        currentPlayerIndex--;
        UpdateCurrentPlayerLabel();
        if (startGameButton != null) startGameButton.gameObject.SetActive(false);
        if (selectButton != null) selectButton.interactable = true;
    }

    void OnStartGameClicked()
    {
        if (playerConfigsBuilt.Count != playerCount) return;

        // Always load the actual game scene — never StartPage, Start, or StartGame (fixes wrong Inspector value)
        string sceneToLoad = gameSceneName;
        if (string.IsNullOrWhiteSpace(sceneToLoad)
            || string.Equals(sceneToLoad, "StartPage", System.StringComparison.OrdinalIgnoreCase)
            || string.Equals(sceneToLoad, "Start", System.StringComparison.OrdinalIgnoreCase)
            || string.Equals(sceneToLoad, "StartGame", System.StringComparison.OrdinalIgnoreCase))
            sceneToLoad = "GameScene";

        var gameSettings = new GameSettings();
        gameSettings.playerConfigs = new List<PlayerConfig>(playerConfigsBuilt);
        gameSettings.startingMoney = 2000000; // ₦2M standard
        gameSettings.goSalary = defaultGoSalary; // ₦200k per turn

        MainMenuManager.SettingsToLoad = gameSettings;
        SceneManager.LoadScene(sceneToLoad);
    }

    void OnGameSettingsClicked()
    {
        if (gameSettingsPanel != null)
            gameSettingsPanel.SetActive(!gameSettingsPanel.activeSelf);
    }

    void SetFontSizeLevel(int level)
    {
        level = Mathf.Clamp(level, 0, 2);
        PlayerPrefs.SetInt(UIDocumentManager.PrefsKeyUIFontSize, level);
        var ui = FindFirstObjectByType<UIDocumentManager>();
        if (ui != null) ui.SetFontSizeLevel(level);
    }

    void OnPlayerCountDropdownChanged(int value)
    {
        int count = GetPlayerCountFromDropdownValue(value);
        playerCount = count;
        if (playerConfigsBuilt.Count > playerCount)
            playerConfigsBuilt.RemoveRange(playerCount, playerConfigsBuilt.Count - playerCount);
        currentPlayerIndex = Mathf.Clamp(playerConfigsBuilt.Count, 0, playerCount);
        UpdatePlayerCountUI();
        UpdateCurrentPlayerLabel();
        if (startGameButton != null) startGameButton.gameObject.SetActive(playerConfigsBuilt.Count >= playerCount && playerCount > 0);
    }

    void SyncPlayerCountDropdown()
    {
        if (playerCountDropdown == null) return;
        int value = Mathf.Clamp(playerCount, 2, 4) - 2;
        if (playerCountDropdown.value != value)
            playerCountDropdown.SetValueWithoutNotify(value);
    }

    void ApplyPlayerCountFromDropdown()
    {
        if (playerCountDropdown == null) return;
        playerCount = GetPlayerCountFromDropdownValue(playerCountDropdown.value);
        UpdatePlayerCountUI();
        UpdateCurrentPlayerLabel();
    }

    int GetPlayerCountFromDropdownValue(int value)
    {
        int count = 0;
        if (playerCountDropdown != null && value >= 0 && value < playerCountDropdown.options.Count)
        {
            string text = playerCountDropdown.options[value].text;
            if (!int.TryParse(text, out count))
            {
                count = 0;
            }
        }
        if (count == 0)
        {
            // Fallback: expect dropdown options for 2, 3, 4 players mapped to values 0..2.
            count = value + 2;
        }
        return Mathf.Clamp(count, 2, 4);
    }

    void OnQuickPickCharacterSelected(int characterIndex)
    {
        if (!quickPickMode) return;
        if (characterManager == null || characterDB == null) return;
        if (currentPlayerIndex >= playerCount) return;
        if (!allowDuplicateCharacters && usedCharacterIndices.Contains(characterIndex)) return;

        Character c = characterManager.GetCurrentCharacter();
        if (c == null) return;

        int colorIndex = currentPlayerIndex % presetColors.Length;
        Color col = presetColors[colorIndex];
        int startMoney = c.startingMoney > 0 ? c.startingMoney : 0;
        bool isAI = aiToggle != null && aiToggle.isOn;

        playerConfigsBuilt.Add(new PlayerConfig(c.characterName, col, characterIndex, isAI, startMoney));
        usedCharacterIndices.Add(characterIndex);
        currentPlayerIndex = Mathf.Clamp(playerConfigsBuilt.Count, 0, playerCount);

        if (currentPlayerIndex >= playerCount)
        {
            if (startGameButton != null) startGameButton.gameObject.SetActive(true);
            if (startGameButton != null) startGameButton.interactable = true;
            UpdateCurrentPlayerLabel();
            return;
        }

        UpdateCurrentPlayerLabel();
        if (aiToggle != null) aiToggle.isOn = false;
    }
}
