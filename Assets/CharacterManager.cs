using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

/// <summary>
/// Drives one character selection panel: displays a character from CharacterDatabase,
/// updates full image, name, difficulty, backstory, benefits, casts, token row.
/// Used by MainMenuController for each player's character selection step.
/// </summary>
public class CharacterManager : MonoBehaviour
{
    [Header("Database")]
    public CharacterDatabase characterDB;

    [Header("Full image (left)")]
    [Tooltip("Use Image (uGUI) or SpriteRenderer")]
    public Image characterFullImage;
    public SpriteRenderer characterFullImageSprite;

    [Header("Profile (right)")]
    public TMP_Text characterNameText;
    public TMP_Text difficultyText;
    public TMP_Text backstoryText;
    public TMP_Text startingMoneyText;
    public TMP_Text startingAssetsText;
    public TMP_Text perk1NameText;
    public TMP_Text perk1DescText;
    public TMP_Text perk2NameText;
    public TMP_Text perk2DescText;
    public TMP_Text cast1NameText;
    public TMP_Text cast1DescText;
    public TMP_Text cast2NameText;
    public TMP_Text cast2DescText;

    [Header("Token row (bottom)")]
    [Tooltip("Images or buttons showing character tokens; order must match CharacterDatabase")]
    public Image[] tokenImages = new Image[0];
    [Tooltip("Optional: buttons that call SelectToken(i) when clicked")]
    public Button[] tokenButtons = new Button[0];
    [Tooltip("Optional: highlight border/background for selected token")]
    public GameObject[] tokenHighlight = new GameObject[0];

    [Header("Optional navigation")]
    public Button nextButton;
    public Button prevButton;

    [Header("State")]
    [SerializeField] private int selectedIndex = 0;

    public int SelectedIndex => selectedIndex;

    public int CharacterCount => characterDB != null ? characterDB.CharacterCount : 0;

    public System.Action<int> OnCharacterSelected;

    public void SetQuickPickMode(bool enabled)
    {
        // In quick-pick, selection should be done via token/card clicks.
        if (nextButton != null) nextButton.gameObject.SetActive(!enabled);
        if (prevButton != null) prevButton.gameObject.SetActive(!enabled);
    }

    void Start()
    {
        if (characterDB != null && CharacterCount > 0)
        {
            selectedIndex = Mathf.Clamp(selectedIndex, 0, CharacterCount - 1);
            UpdateCharacterUI(selectedIndex);
        }
        if ((tokenButtons == null || tokenButtons.Length == 0) && tokenImages != null && tokenImages.Length > 0)
        {
            tokenButtons = new Button[tokenImages.Length];
            for (int i = 0; i < tokenImages.Length; i++)
            {
                if (tokenImages[i] == null) continue;
                tokenButtons[i] = tokenImages[i].GetComponent<Button>();
            }
        }
        for (int i = 0; i < tokenButtons?.Length; i++)
        {
            int idx = i;
            if (tokenButtons[i] != null)
                tokenButtons[i].onClick.AddListener(() => SelectToken(idx));
        }
        if (nextButton != null) nextButton.onClick.AddListener(NextOption);
        if (prevButton != null) prevButton.onClick.AddListener(BackOption);
    }

    /// <summary>
    /// Cycle to next character.
    /// </summary>
    public void NextOption()
    {
        if (CharacterCount == 0) return;
        selectedIndex = (selectedIndex + 1) % CharacterCount;
        UpdateCharacterUI(selectedIndex);
    }

    /// <summary>
    /// Cycle to previous character.
    /// </summary>
    public void BackOption()
    {
        if (CharacterCount == 0) return;
        selectedIndex--;
        if (selectedIndex < 0) selectedIndex = CharacterCount - 1;
        UpdateCharacterUI(selectedIndex);
    }

    /// <summary>
    /// Select character by index (e.g. from token row click).
    /// </summary>
    public void SelectToken(int index)
    {
        if (characterDB == null || index < 0 || index >= CharacterCount) return;
        selectedIndex = index;
        UpdateCharacterUI(selectedIndex);
        OnCharacterSelected?.Invoke(index);
    }

    /// <summary>
    /// Set selected index from outside (e.g. main menu controller) and refresh UI.
    /// </summary>
    public void SetSelectedIndex(int index)
    {
        if (CharacterCount == 0) return;
        selectedIndex = Mathf.Clamp(index, 0, CharacterCount - 1);
        UpdateCharacterUI(selectedIndex);
    }

    /// <summary>
    /// Refresh all UI elements for the given character index.
    /// </summary>
    public void UpdateCharacterUI(int index)
    {
        if (characterDB == null) return;
        Character c = characterDB.GetCharacter(index);
        if (c == null) return;

        selectedIndex = index;

        // Full image
        if (characterFullImage != null && c.fullImage != null)
            characterFullImage.sprite = c.fullImage;
        if (characterFullImageSprite != null && c.fullImage != null)
            characterFullImageSprite.sprite = c.fullImage;

        // Profile
        if (characterNameText != null) characterNameText.text = c.characterName;
        if (difficultyText != null) difficultyText.text = c.difficultyLevel;
        if (backstoryText != null) backstoryText.text = c.backstory;
        if (startingMoneyText != null) startingMoneyText.text = $"₦{c.startingMoney:N0}";
        if (startingAssetsText != null) startingAssetsText.text = c.startingAssets ?? "None";

        if (perk1NameText != null) perk1NameText.text = c.perk1?.name ?? "";
        if (perk1DescText != null) perk1DescText.text = c.perk1?.description ?? "";
        if (perk2NameText != null) perk2NameText.text = c.perk2?.name ?? "";
        if (perk2DescText != null) perk2DescText.text = c.perk2?.description ?? "";
        if (cast1NameText != null) cast1NameText.text = c.cast1?.name ?? "";
        if (cast1DescText != null) cast1DescText.text = c.cast1?.description ?? "";
        if (cast2NameText != null) cast2NameText.text = c.cast2?.name ?? "";
        if (cast2DescText != null) cast2DescText.text = c.cast2?.description ?? "";

        // Token row
        for (int i = 0; i < tokenImages?.Length; i++)
        {
            if (tokenImages[i] == null) continue;
            Character ch = characterDB.GetCharacter(i);
            tokenImages[i].sprite = ch?.tokenImage;
            tokenImages[i].enabled = ch?.tokenImage != null;
        }
        for (int i = 0; i < tokenHighlight?.Length; i++)
        {
            if (tokenHighlight[i] != null)
                tokenHighlight[i].SetActive(i == index);
        }
    }

    /// <summary>
    /// Get the currently selected Character (for building GameSettings).
    /// </summary>
    public Character GetCurrentCharacter()
    {
        return characterDB != null ? characterDB.GetCharacter(selectedIndex) : null;
    }
}
