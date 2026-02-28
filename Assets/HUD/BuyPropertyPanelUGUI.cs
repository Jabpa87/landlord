using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// uGUI buy-property popup controller.
/// Supports Buy / Skip actions and optional embedded TileDetailsCardUI.
/// </summary>
public class BuyPropertyPanelUGUI : MonoBehaviour
{
    public static BuyPropertyPanelUGUI Instance { get; private set; }

    [Header("Root")]
    public GameObject panelRoot;

    [Header("Content")]
    public TMP_Text propertyText;
    public Button buyButton;
    public Button auctionButton;
    public Button skipButton;

    [Header("Optional Embedded Tile Card")]
    [Tooltip("If assigned with a host, an instance is created and shown inside this panel.")]
    public GameObject tileDetailsCardPrefab;
    public RectTransform tileDetailsHost;
    public TileDetailsCardUI embeddedTileDetailsCard;
    [Tooltip("Optional ribbon overlay shown above the embedded tile card.")]
    public RectTransform saleRibbon;

    public event Action BuyClicked;
    // Kept for scene compatibility; manual auction button is no longer used.
    public event Action AuctionClicked;
    public event Action SkipClicked;

    private bool _buttonHandlersBound;
    private bool _usedFallbackTileCard;
    private bool _fallbackCloseOnOutsideClickOriginal;
    private bool _fallbackCloseOnOutsideClickCaptured;
    private UGUIPopupAnimator _popupAnimator;

    void Awake()
    {
        Instance = this;
        if (panelRoot == null) panelRoot = gameObject;
        _popupAnimator = EnsurePopupAnimator();
        AutoBindIfMissing();
        EnsureButtonHandlers();
    }

    void Start()
    {
        // Do not auto-hide here; Start can run after a Show call and would flicker the panel off.
    }

    void OnDestroy()
    {
        if (Instance == this) Instance = null;
        UnbindButtonHandlers();
    }

    public void Show(TileInfo tile, bool canAfford, string message)
    {
        EnsureButtonHandlers();
        EnsureEmbeddedTileCard();
        _usedFallbackTileCard = false;

        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (root != null)
        {
            // Ensure all parents are active so the panel is visible at runtime.
            Transform t = root.transform;
            while (t != null)
            {
                if (!t.gameObject.activeSelf)
                    t.gameObject.SetActive(true);
                t = t.parent;
            }

            Canvas c = root.GetComponentInParent<Canvas>(true);
            if (c != null) c.enabled = true;

            _popupAnimator = EnsurePopupAnimator();
            if (_popupAnimator != null)
                _popupAnimator.Show();
            else
            {
                root.SetActive(true);
                root.transform.SetAsLastSibling();
            }
        }
        Debug.Log($"[BuyPropertyPanelUGUI] Show called. Root activeInHierarchy={root != null && root.activeInHierarchy}, tile={(tile != null ? tile.name : "null")}");

        SetMessage(message);
        SetBuyEnabled(canAfford);
        SetAuctionEnabled(false);
        SetSkipEnabled(true);

        if (embeddedTileDetailsCard != null && tile != null)
        {
            // Embedded card must not close itself on random taps while buy panel is active.
            embeddedTileDetailsCard.closeOnOutsideClick = false;
            embeddedTileDetailsCard.Show(tile);
        }
        else if (TileDetailsCardUI.Instance != null && tile != null)
        {
            _usedFallbackTileCard = true;
            if (!_fallbackCloseOnOutsideClickCaptured)
            {
                _fallbackCloseOnOutsideClickOriginal = TileDetailsCardUI.Instance.closeOnOutsideClick;
                _fallbackCloseOnOutsideClickCaptured = true;
            }
            // Fallback shared card should also stay visible until this panel hides.
            TileDetailsCardUI.Instance.closeOnOutsideClick = false;
            TileDetailsCardUI.Instance.Show(tile);
        }
    }

    public void Hide()
    {
        if (embeddedTileDetailsCard != null)
        {
            embeddedTileDetailsCard.closeOnOutsideClick = false;
            embeddedTileDetailsCard.Hide();
        }
        if (_usedFallbackTileCard && TileDetailsCardUI.Instance != null)
        {
            if (_fallbackCloseOnOutsideClickCaptured)
                TileDetailsCardUI.Instance.closeOnOutsideClick = _fallbackCloseOnOutsideClickOriginal;
            TileDetailsCardUI.Instance.Hide();
        }
        _usedFallbackTileCard = false;
        _fallbackCloseOnOutsideClickCaptured = false;
        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (_popupAnimator == null) _popupAnimator = EnsurePopupAnimator();
        if (_popupAnimator != null)
            _popupAnimator.Hide();
        else if (root != null)
            root.SetActive(false);
        Debug.Log("[BuyPropertyPanelUGUI] Hide called.");
    }

    private UGUIPopupAnimator EnsurePopupAnimator()
    {
        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (root == null) return null;
        var animator = root.GetComponent<UGUIPopupAnimator>();
        if (animator == null) animator = root.AddComponent<UGUIPopupAnimator>();
        animator.panelRoot = root;
        return animator;
    }

    public void SetMessage(string message)
    {
        if (propertyText != null)
            propertyText.text = message ?? string.Empty;
    }

    public void SetBuyEnabled(bool enabled)
    {
        if (buyButton != null)
            buyButton.interactable = enabled;
    }

    public void SetAuctionEnabled(bool enabled)
    {
        if (auctionButton != null)
        {
            auctionButton.interactable = false;
            auctionButton.gameObject.SetActive(false);
        }
    }

    public void SetSkipEnabled(bool enabled)
    {
        if (skipButton != null)
            skipButton.interactable = enabled;
    }

    private void AutoBindIfMissing()
    {
        if (propertyText == null)
            propertyText = GetComponentInChildren<TMP_Text>(true);

        if (buyButton == null)
            buyButton = FindButtonByName("buyButton");
        if (auctionButton == null)
            auctionButton = FindButtonByName("auctionButton");
        if (skipButton == null)
            skipButton = FindButtonByName("skipButton");
    }

    private Button FindButtonByName(string buttonName)
    {
        Button[] buttons = GetComponentsInChildren<Button>(true);
        for (int i = 0; i < buttons.Length; i++)
        {
            if (buttons[i] != null && string.Equals(buttons[i].name, buttonName, StringComparison.OrdinalIgnoreCase))
                return buttons[i];
        }
        return null;
    }

    private void EnsureEmbeddedTileCard()
    {
        if (embeddedTileDetailsCard != null) return;
        if (tileDetailsHost == null || tileDetailsCardPrefab == null)
        {
            Debug.LogWarning($"[BuyPropertyPanelUGUI] Cannot create embedded tile card. Host null? {tileDetailsHost == null}, Prefab null? {tileDetailsCardPrefab == null}");
            return;
        }

        if (saleRibbon == null)
            saleRibbon = tileDetailsHost.Find("SaleRibbon") as RectTransform;

        GameObject cardObj = Instantiate(tileDetailsCardPrefab, tileDetailsHost);
        cardObj.name = tileDetailsCardPrefab.name;
        embeddedTileDetailsCard = cardObj.GetComponent<TileDetailsCardUI>();
        if (embeddedTileDetailsCard == null)
        {
            Debug.LogWarning("[BuyPropertyPanelUGUI] Embedded card prefab missing TileDetailsCardUI component.");
            return;
        }

        // Ensure it fits the host without distortion and doesn't block button clicks.
        RectTransform rt = cardObj.GetComponent<RectTransform>();
        if (rt != null)
        {
            rt.anchorMin = new Vector2(0.5f, 0.5f);
            rt.anchorMax = new Vector2(0.5f, 0.5f);
            rt.pivot = new Vector2(0.5f, 0.5f);
            rt.anchoredPosition = Vector2.zero;
        }

        // Prevent layout groups from stretching the card object.
        var le = cardObj.GetComponent<LayoutElement>();
        if (le == null) le = cardObj.AddComponent<LayoutElement>();
        le.ignoreLayout = true;

        FitEmbeddedCardToHost();

        var cg = cardObj.GetComponent<CanvasGroup>();
        if (cg == null) cg = cardObj.AddComponent<CanvasGroup>();
        cg.blocksRaycasts = false;
        cg.interactable = false;

        if (embeddedTileDetailsCard.closeButton != null)
            embeddedTileDetailsCard.closeButton.gameObject.SetActive(false);

        // Embedded mode: the parent panel controls visibility, not outside taps on this sub-card.
        embeddedTileDetailsCard.closeOnOutsideClick = false;

        if (saleRibbon != null)
            saleRibbon.SetAsLastSibling();

        Debug.Log("[BuyPropertyPanelUGUI] Embedded tile card created and configured.");
    }

    private void FitEmbeddedCardToHost()
    {
        if (embeddedTileDetailsCard == null || tileDetailsHost == null) return;
        RectTransform cardRt = embeddedTileDetailsCard.GetComponent<RectTransform>();
        if (cardRt == null) return;

        Canvas.ForceUpdateCanvases();
        LayoutRebuilder.ForceRebuildLayoutImmediate(tileDetailsHost);

        float hostW = tileDetailsHost.rect.width;
        float hostH = tileDetailsHost.rect.height;
        float cardW = cardRt.rect.width;
        float cardH = cardRt.rect.height;

        if (cardW <= 1f || cardH <= 1f)
        {
            cardW = Mathf.Abs(cardRt.sizeDelta.x);
            cardH = Mathf.Abs(cardRt.sizeDelta.y);
        }

        if (hostW <= 1f || hostH <= 1f || cardW <= 1f || cardH <= 1f)
            return;

        float scale = Mathf.Min(hostW / cardW, hostH / cardH);
        cardRt.sizeDelta = new Vector2(cardW, cardH);
        cardRt.localScale = Vector3.one * scale;
    }

    private void EnsureButtonHandlers()
    {
        if (_buttonHandlersBound) return;

        if (buyButton != null)
            buyButton.onClick.AddListener(OnBuyClicked);
        if (skipButton != null)
            skipButton.onClick.AddListener(OnSkipClicked);

        _buttonHandlersBound = true;
    }

    private void UnbindButtonHandlers()
    {
        if (!_buttonHandlersBound) return;

        if (buyButton != null)
            buyButton.onClick.RemoveListener(OnBuyClicked);
        if (skipButton != null)
            skipButton.onClick.RemoveListener(OnSkipClicked);

        _buttonHandlersBound = false;
    }

    private void OnBuyClicked()
    {
        Debug.Log("[BuyPropertyPanelUGUI] Buy clicked.");
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        // Prevent double-click spam while the action resolves.
        SetBuyEnabled(false);
        SetAuctionEnabled(false);
        SetSkipEnabled(false);
        BuyClicked?.Invoke();
    }

    private void OnAuctionClicked()
    {
        // Legacy no-op path; keep equivalent behavior if some old scene still invokes this.
        OnSkipClicked();
    }

    private void OnSkipClicked()
    {
        Debug.Log("[BuyPropertyPanelUGUI] Skip clicked.");
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        SetBuyEnabled(false);
        SetAuctionEnabled(false);
        SetSkipEnabled(false);
        SkipClicked?.Invoke();
    }
}
