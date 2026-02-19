using UnityEngine;
using UnityEngine.UI;
using TMPro;
#if ENABLE_INPUT_SYSTEM
using UnityEngine.InputSystem;
#endif

/// <summary>
/// uGUI Tile Details card controller. Populates a prefab with property data.
/// Assign all fields in the Inspector.
/// </summary>
public class TileDetailsCardUI : MonoBehaviour
{
    public static TileDetailsCardUI Instance { get; private set; }

    [Header("Root")]
    public GameObject cardRoot;

    [Header("Header")]
    public TMP_Text titleText;
    public Image propertyImage;
    public Image propertyColorBar;

    [Header("Buttons")]
    public Button closeButton;

    [Header("Close Behavior")]
    public bool closeOnOutsideClick = true;
    public RectTransform cardRect;

    [Header("Prices")]
    public TMP_Text baseRentText; // Rentprize
    public TMP_Text rent1HouseText; // Propertrent1hus
    public TMP_Text rent2HouseText; // Propertrent2hus
    public TMP_Text rent3HouseText; // Propertrent3hus
    public TMP_Text rent4HouseText; // Propertrent4hus
    public TMP_Text rentHotelText;  // Propertrent1hotel
    public TMP_Text constructionText; // Construction
    public TMP_Text mortgageText; // Mortgage

    [Header("Optional Row GameObjects (hide for non-regular)")]
    public GameObject row1House;
    public GameObject row2House;
    public GameObject row3House;
    public GameObject row4House;
    public GameObject rowHotel;

    [Header("Group Sprites (G1-G8)")]
    public Sprite groupG1;
    public Sprite groupG2;
    public Sprite groupG3;
    public Sprite groupG4;
    public Sprite groupG5;
    public Sprite groupG6;
    public Sprite groupG7;
    public Sprite groupG8;

    [Header("Group Sprites (Color Names)")]
    public Sprite groupBrown;
    public Sprite groupLightBlue;
    public Sprite groupPink;
    public Sprite groupOrange;
    public Sprite groupRed;
    public Sprite groupYellow;
    public Sprite groupGreen;
    public Sprite groupDarkBlue;

    public Sprite transportationSprite;
    public Sprite utilitySprite;
    public Sprite defaultSprite;

    private TileInfo _currentTile;
    private Color _propertyColorBarBaseColor = Color.white;

    void Awake()
    {
        Instance = this;
        if (cardRoot == null) cardRoot = gameObject;
        if (cardRect == null) cardRect = GetComponent<RectTransform>();
        if (propertyColorBar != null)
            _propertyColorBarBaseColor = propertyColorBar.color;
        if (closeButton == null)
        {
            // Try to auto-find a Close button in children
            Button[] buttons = GetComponentsInChildren<Button>(true);
            foreach (var btn in buttons)
            {
                if (btn != null && btn.name == "CloseButton")
                {
                    closeButton = btn;
                    break;
                }
            }
            if (closeButton == null && buttons.Length > 0)
                closeButton = buttons[0];
        }
    }

    void Start()
    {
        Hide();
        if (closeButton != null)
        {
            closeButton.onClick.RemoveListener(Hide);
            closeButton.onClick.AddListener(Hide);
        }
    }

    public void Show(TileInfo tile)
    {
        if (tile == null) return;
        _currentTile = tile;
        if (cardRoot != null) cardRoot.SetActive(true);
        _ignoreOutsideClicksUntilFrame = Time.frameCount + 1;

        if (tile.property == null)
        {
            SetEmpty(tile.tileType.ToString());
            return;
        }

        Property prop = tile.property;
        if (titleText != null) titleText.text = prop.propertyName.ToUpperInvariant();

        // Group visuals (independent from ownership marker layer)
        Sprite groupSprite = GetGroupSprite(prop);

        if (propertyImage != null)
        {
            propertyImage.sprite = groupSprite;
            propertyImage.enabled = propertyImage.sprite != null;
        }
        if (propertyColorBar != null)
        {
            propertyColorBar.sprite = groupSprite;
            propertyColorBar.color = _propertyColorBarBaseColor;
            propertyColorBar.enabled = propertyColorBar.sprite != null;
        }

        if (baseRentText != null)
            baseRentText.text = $"Rent ₦{FormatMoney(prop.rentByLevel != null && prop.rentByLevel.Length > 0 ? prop.rentByLevel[0] : 0)}";

        if (prop.propertyType == PropertyType.Regular && prop.rentByLevel != null && prop.rentByLevel.Length >= 6)
        {
            SetRentText(rent1HouseText, prop.rentByLevel[1]);
            SetRentText(rent2HouseText, prop.rentByLevel[2]);
            SetRentText(rent3HouseText, prop.rentByLevel[3]);
            SetRentText(rent4HouseText, prop.rentByLevel[4]);
            SetRentText(rentHotelText, prop.rentByLevel[5]);
            SetRowActive(row1House, true);
            SetRowActive(row2House, true);
            SetRowActive(row3House, true);
            SetRowActive(row4House, true);
            SetRowActive(rowHotel, true);
            if (constructionText != null)
                constructionText.text = $"Construction ₦{FormatMoney(prop.houseCost)} each";
        }
        else
        {
            SetRentText(rent1HouseText, 0, true);
            SetRentText(rent2HouseText, 0, true);
            SetRentText(rent3HouseText, 0, true);
            SetRentText(rent4HouseText, 0, true);
            SetRentText(rentHotelText, 0, true);
            SetRowActive(row1House, false);
            SetRowActive(row2House, false);
            SetRowActive(row3House, false);
            SetRowActive(row4House, false);
            SetRowActive(rowHotel, false);
            if (constructionText != null)
                constructionText.text = "Construction N/A";
        }

        if (mortgageText != null)
            mortgageText.text = $"Mortgage ₦{FormatMoney(prop.price / 2)}";
    }

    public void Hide()
    {
        if (cardRoot != null) cardRoot.SetActive(false);
    }

    void OnApplicationFocus(bool hasFocus)
    {
        if (hasFocus) RefreshGroupStripIfVisible();
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (!pauseStatus) RefreshGroupStripIfVisible();
    }

    void Update()
    {
        if (!closeOnOutsideClick || cardRoot == null || !cardRoot.activeSelf) return;
        if (Time.frameCount <= _ignoreOutsideClicksUntilFrame) return;

        Vector2? screenPos = GetPointerScreenPosition();
        if (!screenPos.HasValue) return;

        if (cardRect == null)
        {
            cardRect = GetComponent<RectTransform>();
            if (cardRect == null) return;
        }

        Camera uiCam = null;
        Canvas c = cardRect.GetComponentInParent<Canvas>();
        if (c != null && c.renderMode != RenderMode.ScreenSpaceOverlay)
            uiCam = c.worldCamera;

        if (!RectTransformUtility.RectangleContainsScreenPoint(cardRect, screenPos.Value, uiCam))
        {
            Hide();
        }
    }

    private Vector2? GetPointerScreenPosition()
    {
#if ENABLE_INPUT_SYSTEM
        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
            return Mouse.current.position.ReadValue();
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
            return Touchscreen.current.primaryTouch.position.ReadValue();
        return null;
#else
        if (Input.GetMouseButtonDown(0))
            return Input.mousePosition;
        if (Input.touchCount > 0)
        {
            Touch t = Input.GetTouch(0);
            if (t.phase == TouchPhase.Began) return t.position;
        }
        return null;
#endif
    }

    private int _ignoreOutsideClicksUntilFrame = -1;

    private void SetEmpty(string title)
    {
        if (titleText != null) titleText.text = title.ToUpperInvariant();
        if (propertyImage != null) propertyImage.enabled = false;
        if (propertyColorBar != null) propertyColorBar.enabled = false;
        SetRentText(baseRentText, 0, true);
        SetRentText(rent1HouseText, 0, true);
        SetRentText(rent2HouseText, 0, true);
        SetRentText(rent3HouseText, 0, true);
        SetRentText(rent4HouseText, 0, true);
        SetRentText(rentHotelText, 0, true);
        if (constructionText != null) constructionText.text = "Construction N/A";
        if (mortgageText != null) mortgageText.text = "Mortgage N/A";
    }

    private void SetRentText(TMP_Text target, int value, bool dashIfZero = false)
    {
        if (target == null) return;
        target.text = dashIfZero && value == 0 ? "—" : $"₦{FormatMoney(value)}";
    }

    private void SetRowActive(GameObject row, bool active)
    {
        if (row != null) row.SetActive(active);
    }

    private Sprite GetGroupSprite(Property prop)
    {
        if (prop == null) return defaultSprite;
        if (prop.propertyType == PropertyType.Transportation)
            return transportationSprite != null ? transportationSprite : defaultSprite;
        if (prop.propertyType == PropertyType.Utility)
            return utilitySprite != null ? utilitySprite : defaultSprite;

        string gid = NormalizeGroupId(prop.groupId);
        switch (gid)
        {
            case "BROWN":
            case "G1":
                return groupBrown != null ? groupBrown : (groupG1 != null ? groupG1 : defaultSprite);
            case "LIGHTBLUE":
            case "G2":
                return groupLightBlue != null ? groupLightBlue : (groupG2 != null ? groupG2 : defaultSprite);
            case "PINK":
            case "G3":
                return groupPink != null ? groupPink : (groupG3 != null ? groupG3 : defaultSprite);
            case "ORANGE":
            case "G4":
                return groupOrange != null ? groupOrange : (groupG4 != null ? groupG4 : defaultSprite);
            case "RED":
            case "G5":
                return groupRed != null ? groupRed : (groupG5 != null ? groupG5 : defaultSprite);
            case "YELLOW":
            case "G6":
                return groupYellow != null ? groupYellow : (groupG6 != null ? groupG6 : defaultSprite);
            case "GREEN":
            case "G7":
                return groupGreen != null ? groupGreen : (groupG7 != null ? groupG7 : defaultSprite);
            case "DARKBLUE":
            case "G8":
                return groupDarkBlue != null ? groupDarkBlue : (groupG8 != null ? groupG8 : defaultSprite);
            default:
                return defaultSprite;
        }
    }

    private static string NormalizeGroupId(string groupId)
    {
        if (string.IsNullOrWhiteSpace(groupId)) return "";
        return groupId.Trim().ToUpperInvariant().Replace(" ", "").Replace("_", "").Replace("-", "");
    }

    private void RefreshGroupStripIfVisible()
    {
        if (_currentTile == null || cardRoot == null || !cardRoot.activeSelf) return;
        Show(_currentTile);
    }

    private string FormatMoney(int amount)
    {
        if (amount >= 1_000_000_000)
            return $"{(amount / 1_000_000_000f):0.#}B";
        if (amount >= 1_000_000)
            return $"{(amount / 1_000_000f):0.#}M";
        if (amount >= 1_000)
            return $"{(amount / 1_000f):0.#}K";
        return amount.ToString();
    }
}
