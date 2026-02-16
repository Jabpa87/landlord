using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;
using System;

/// <summary>
/// uGUI-based Main HUD for Hybrid migration. Assign this on your Canvas HUD GameObject;
/// UIDocumentManager will use it instead of the UI Toolkit Main HUD when assigned.
/// Wire all references in the Inspector (create Canvas with buttons/texts matching names below).
/// </summary>
public class MainHUDController : MonoBehaviour
{
    [Header("Top panel")]
    public TMP_Text currentPlayerText;
    public TMP_Text walletText;
    public TMP_Text buildingSupplyText;
    public TMP_Text doublesIndicatorText;

    [Header("Center")]
    public Button rollButton;
    public TMP_Text diceText;

    [Header("Action buttons")]
    public Button endTurnButton;
    public Button buildButton;
    public Button sellButton;
    public Button tradeButton;
    public Button menuButton;

    [Header("Player info (optional - can use same labels as UI Toolkit)")]
    public TMP_Text player1Name;
    public TMP_Text player1Money;
    public TMP_Text player1CharacterName;
    public TMP_Text player2Name;
    public TMP_Text player2Money;
    public TMP_Text player2CharacterName;
    public TMP_Text player3Name;
    public TMP_Text player3Money;
    public TMP_Text player3CharacterName;
    public TMP_Text player4Name;
    public TMP_Text player4Money;
    public TMP_Text player4CharacterName;
    public Image player1Avatar;
    public Image player2Avatar;
    public Image player3Avatar;
    public Image player4Avatar;
    public Image player1RowBackground;
    public Image player2RowBackground;
    public Image player3RowBackground;
    public Image player4RowBackground;
    public Image player1AvatarOutline;
    public Image player2AvatarOutline;
    public Image player3AvatarOutline;
    public Image player4AvatarOutline;

    [Header("Feed & Game Log (optional - for NarrativeManager/GameLogManager)")]
    public Transform newsFeedContent;
    public TMP_Text feedItemPrefab;
    public GameObject gameLogOverlay;
    public Transform gameLogContent;
    public Button gameLogOpenButton;
    public Button gameLogCloseButton;
    public Button gameLogClearButton;
    public Toggle feedSoundToggle;

    [Header("Optional: player row GameObjects for show/hide")]
    public GameObject player1Row;
    public GameObject player2Row;
    public GameObject player3Row;
    public GameObject player4Row;

    [Header("Profile click - assign Button on each row to open profile detail")]
    [Tooltip("When assigned, clicking opens the player profile (character + stats) in UI Toolkit.")]
    public Button player1ProfileButton;
    public Button player2ProfileButton;
    public Button player3ProfileButton;
    public Button player4ProfileButton;
    public UnityEvent<int> onPlayerProfileClicked;

    [Header("Optional: mortgage/redeem (if not on HUD leave null)")]
    public Button mortgageButton;
    public Button redeemButton;

    [Header("Active player indicator (optional)")]
    public float activePulseSpeed = 2.2f;
    public float activePulseMinAlpha = 0.45f;
    public float activePulseMaxAlpha = 1f;

    private MainHUDBridgeData _bridge;
    private bool _bridgeCreated;
    private int _activePlayerIndex = -1;
    private Coroutine _activePulseRoutine;
    private readonly Color[] _playerColors = new Color[4];
    private readonly bool[] _playerColorSet = new bool[4];

    void Start()
    {
        if (player1ProfileButton != null) player1ProfileButton.onClick.AddListener(() => NotifyProfileClicked(0));
        if (player2ProfileButton != null) player2ProfileButton.onClick.AddListener(() => NotifyProfileClicked(1));
        if (player3ProfileButton != null) player3ProfileButton.onClick.AddListener(() => NotifyProfileClicked(2));
        if (player4ProfileButton != null) player4ProfileButton.onClick.AddListener(() => NotifyProfileClicked(3));
    }

    /// <summary>Call when a player profile row is clicked; opens profile detail (UIDocumentManager shows UI Toolkit panel).</summary>
    public void NotifyProfileClicked(int playerIndex)
    {
        onPlayerProfileClicked?.Invoke(playerIndex);
    }

    /// <summary>Bridge data for UIDocumentManager. Created once from SerializeField refs.</summary>
    public MainHUDBridgeData GetBridge()
    {
        if (_bridgeCreated) return _bridge;
        _bridgeCreated = true;
        _bridge = new MainHUDBridgeData
        {
            RollButton = HUDButton.FromUGUI(rollButton),
            EndTurnButton = HUDButton.FromUGUI(endTurnButton),
            BuildButton = HUDButton.FromUGUI(buildButton),
            SellButton = HUDButton.FromUGUI(sellButton),
            TradeButton = HUDButton.FromUGUI(tradeButton),
            MenuButton = HUDButton.FromUGUI(menuButton),
            MortgageButton = HUDButton.FromUGUI(mortgageButton),
            RedeemButton = HUDButton.FromUGUI(redeemButton),
            CurrentPlayerText = HUDLabel.FromUGUI(currentPlayerText),
            DiceText = HUDLabel.FromUGUI(diceText),
            WalletText = HUDLabel.FromUGUI(walletText),
            BuildingSupplyText = HUDLabel.FromUGUI(buildingSupplyText),
            DoublesIndicatorText = HUDLabel.FromUGUI(doublesIndicatorText),
            Player1Name = HUDLabel.FromUGUI(player1Name),
            Player1Money = HUDLabel.FromUGUI(player1Money),
            Player2Name = HUDLabel.FromUGUI(player2Name),
            Player2Money = HUDLabel.FromUGUI(player2Money),
            Player3Name = HUDLabel.FromUGUI(player3Name),
            Player3Money = HUDLabel.FromUGUI(player3Money),
            Player4Name = HUDLabel.FromUGUI(player4Name),
            Player4Money = HUDLabel.FromUGUI(player4Money)
        };
        return _bridge;
    }

    public Transform NewsFeedContent => newsFeedContent;
    public GameObject GameLogOverlay => gameLogOverlay;
    public Transform GameLogContent => gameLogContent;
    public Button GameLogOpenButton => gameLogOpenButton;
    public Button GameLogCloseButton => gameLogCloseButton;
    public Button GameLogClearButton => gameLogClearButton;
    public Toggle FeedSoundToggle => feedSoundToggle;
    public TMP_Text FeedItemPrefab => feedItemPrefab;

    /// <summary>Bind feed sound toggle to GameSoundManager (if present).</summary>
    public void BindFeedSoundToggle()
    {
        if (feedSoundToggle != null && GameSoundManager.Instance != null)
        {
            feedSoundToggle.onValueChanged.RemoveAllListeners();
            feedSoundToggle.isOn = GameSoundManager.Instance.FeedSoundEnabled;
            feedSoundToggle.onValueChanged.AddListener(OnFeedSoundToggleChanged);
        }
    }

    private void OnFeedSoundToggleChanged(bool enabled)
    {
        if (GameSoundManager.Instance != null)
            GameSoundManager.Instance.FeedSoundEnabled = enabled;
    }

    /// <summary>Update name and money for a player slot (0-3); show the row.</summary>
    public void UpdatePlayerInfo(int playerIndex, Player player)
    {
        if (player == null || player.IsEliminated)
        {
            HidePlayerSlot(playerIndex);
            return;
        }
        TMP_Text nameLabel = null;
        TMP_Text moneyLabel = null;
        GameObject row = null;
        Image avatarImage = null;
        switch (playerIndex)
        {
            case 0: nameLabel = player1Name; moneyLabel = player1Money; row = player1Row; avatarImage = player1Avatar; break;
            case 1: nameLabel = player2Name; moneyLabel = player2Money; row = player2Row; avatarImage = player2Avatar; break;
            case 2: nameLabel = player3Name; moneyLabel = player3Money; row = player3Row; avatarImage = player3Avatar; break;
            case 3: nameLabel = player4Name; moneyLabel = player4Money; row = player4Row; avatarImage = player4Avatar; break;
        }
        if (row != null) row.SetActive(true);
        if (nameLabel != null) nameLabel.text = !string.IsNullOrEmpty(player.playerName) ? player.playerName : $"Player {player.playerIndex + 1}";
        TMP_Text characterLabel = null;
        switch (playerIndex) { case 0: characterLabel = player1CharacterName; break; case 1: characterLabel = player2CharacterName; break; case 2: characterLabel = player3CharacterName; break; case 3: characterLabel = player4CharacterName; break; }
        if (characterLabel != null)
        {
            characterLabel.gameObject.SetActive(true);
            string characterName = !string.IsNullOrEmpty(player.characterName) ? player.characterName : "";
            int perkCount = (player.characterEffects != null && player.characterEffects.PerkKeys != null) ? player.characterEffects.PerkKeys.Count : 0;
            int faultCount = (player.characterEffects != null && player.characterEffects.FaultKeys != null) ? player.characterEffects.FaultKeys.Count : 0;
            characterLabel.text = (perkCount > 0 || faultCount > 0)
                ? $"{characterName}  P{perkCount}/F{faultCount}"
                : characterName;
        }
        if (moneyLabel != null) moneyLabel.text = $"₦{player.Money:N0}";
        if (avatarImage != null)
        {
            var sprite = PlayerVisualManager.Instance != null
                ? PlayerVisualManager.Instance.GetTokenSprite(player.tokenSpriteIndex)
                : null;
            avatarImage.sprite = sprite;
            avatarImage.enabled = (sprite != null);
        }
        if (playerIndex >= 0 && playerIndex < _playerColors.Length)
        {
            _playerColors[playerIndex] = player.playerColor;
            _playerColorSet[playerIndex] = true;
        }
    }

    /// <summary>Hide a specific player slot by index (0-3).</summary>
    public void HidePlayerSlot(int playerIndex)
    {
        GameObject row = null;
        Image avatarImage = null;
        Image rowBackground = null;
        Image avatarOutline = null;
        switch (playerIndex)
        {
            case 0: row = player1Row; avatarImage = player1Avatar; rowBackground = player1RowBackground; avatarOutline = player1AvatarOutline; break;
            case 1: row = player2Row; avatarImage = player2Avatar; rowBackground = player2RowBackground; avatarOutline = player2AvatarOutline; break;
            case 2: row = player3Row; avatarImage = player3Avatar; rowBackground = player3RowBackground; avatarOutline = player3AvatarOutline; break;
            case 3: row = player4Row; avatarImage = player4Avatar; rowBackground = player4RowBackground; avatarOutline = player4AvatarOutline; break;
        }
        if (row != null) row.SetActive(false);
        if (avatarImage != null) avatarImage.enabled = false;
        if (rowBackground != null) rowBackground.enabled = false;
        if (avatarOutline != null) avatarOutline.enabled = false;
    }

    /// <summary>Hide all player slots.</summary>
    public void HideAllPlayerSlots()
    {
        if (player1Row != null) player1Row.SetActive(false);
        if (player2Row != null) player2Row.SetActive(false);
        if (player3Row != null) player3Row.SetActive(false);
        if (player4Row != null) player4Row.SetActive(false);
        if (player1Avatar != null) player1Avatar.enabled = false;
        if (player2Avatar != null) player2Avatar.enabled = false;
        if (player3Avatar != null) player3Avatar.enabled = false;
        if (player4Avatar != null) player4Avatar.enabled = false;
        if (player1RowBackground != null) player1RowBackground.enabled = false;
        if (player2RowBackground != null) player2RowBackground.enabled = false;
        if (player3RowBackground != null) player3RowBackground.enabled = false;
        if (player4RowBackground != null) player4RowBackground.enabled = false;
        if (player1AvatarOutline != null) player1AvatarOutline.enabled = false;
        if (player2AvatarOutline != null) player2AvatarOutline.enabled = false;
        if (player3AvatarOutline != null) player3AvatarOutline.enabled = false;
        if (player4AvatarOutline != null) player4AvatarOutline.enabled = false;
    }

    public void SetActivePlayerIndicator(int playerIndex)
    {
        _activePlayerIndex = playerIndex;
        if (_activePulseRoutine == null)
            _activePulseRoutine = StartCoroutine(ActivePlayerPulse());
    }

    private System.Collections.IEnumerator ActivePlayerPulse()
    {
        while (true)
        {
            float t = (Mathf.Sin(Time.time * activePulseSpeed) + 1f) * 0.5f;
            float alpha = Mathf.Lerp(activePulseMinAlpha, activePulseMaxAlpha, t);
            ApplyPulseToRow(0, alpha);
            ApplyPulseToRow(1, alpha);
            ApplyPulseToRow(2, alpha);
            ApplyPulseToRow(3, alpha);
            yield return null;
        }
    }

    private void ApplyPulseToRow(int index, float alpha)
    {
        bool isActive = (index == _activePlayerIndex);
        GameObject row = null;
        TMP_Text nameLabel = null;
        TMP_Text moneyLabel = null;
        Image avatarImage = null;
        Image rowBackground = null;
        Image avatarOutline = null;
        switch (index)
        {
            case 0: row = player1Row; nameLabel = player1Name; moneyLabel = player1Money; avatarImage = player1Avatar; rowBackground = player1RowBackground; avatarOutline = player1AvatarOutline; break;
            case 1: row = player2Row; nameLabel = player2Name; moneyLabel = player2Money; avatarImage = player2Avatar; rowBackground = player2RowBackground; avatarOutline = player2AvatarOutline; break;
            case 2: row = player3Row; nameLabel = player3Name; moneyLabel = player3Money; avatarImage = player3Avatar; rowBackground = player3RowBackground; avatarOutline = player3AvatarOutline; break;
            case 3: row = player4Row; nameLabel = player4Name; moneyLabel = player4Money; avatarImage = player4Avatar; rowBackground = player4RowBackground; avatarOutline = player4AvatarOutline; break;
        }

        float targetAlpha = isActive ? alpha : 1f;
        if (nameLabel != null) nameLabel.alpha = targetAlpha;
        if (moneyLabel != null) moneyLabel.alpha = targetAlpha;
        if (avatarImage != null) avatarImage.color = new Color(1f, 1f, 1f, targetAlpha);

        if (rowBackground != null)
        {
            rowBackground.enabled = true;
            Color baseColor = (_playerColorSet[index]) ? _playerColors[index] : new Color(0.2f, 0.2f, 0.2f, 1f);
            float bgAlpha = isActive ? Mathf.Lerp(0.25f, 0.6f, alpha) : 0.25f;
            rowBackground.color = new Color(baseColor.r, baseColor.g, baseColor.b, bgAlpha);
        }

        if (avatarOutline != null)
        {
            avatarOutline.enabled = true;
            Color outlineColor = (_playerColorSet[index]) ? _playerColors[index] : Color.white;
            float outlineAlpha = isActive ? alpha : 0.2f;
            avatarOutline.color = new Color(outlineColor.r, outlineColor.g, outlineColor.b, outlineAlpha);
            if (isActive)
            {
                avatarOutline.rectTransform.Rotate(0f, 0f, 30f * Time.deltaTime);
            }
            else
            {
                avatarOutline.rectTransform.localRotation = Quaternion.identity;
            }
        }
    }
}

/// <summary>All bridge references for the Main HUD. UIDocumentManager assigns these when using uGUI HUD.</summary>
public class MainHUDBridgeData
{
    public HUDButton RollButton;
    public HUDButton EndTurnButton;
    public HUDButton BuildButton;
    public HUDButton SellButton;
    public HUDButton TradeButton;
    public HUDButton MenuButton;
    public HUDButton MortgageButton;
    public HUDButton RedeemButton;
    public HUDLabel CurrentPlayerText;
    public HUDLabel DiceText;
    public HUDLabel WalletText;
    public HUDLabel BuildingSupplyText;
    public HUDLabel DoublesIndicatorText;
    public HUDLabel Player1Name;
    public HUDLabel Player1Money;
    public HUDLabel Player2Name;
    public HUDLabel Player2Money;
    public HUDLabel Player3Name;
    public HUDLabel Player3Money;
    public HUDLabel Player4Name;
    public HUDLabel Player4Money;
}
