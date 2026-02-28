using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TradePanelUGUI : MonoBehaviour
{
    [Header("Root")]
    public GameObject panelRoot;

    [Header("Header")]
    public TMP_Text titleText;
    public TMP_Text statusText;
    public TMP_Text targetPlayerText;
    public Button switchPlayerButton;

    [Header("Players")]
    public TMP_Text leftPlayerName;
    public TMP_Text rightPlayerName;

    [Header("Lists")]
    public RectTransform leftContent;
    public RectTransform rightContent;
    public TradePropertyCard cardPrefab;
    public bool useSimpleTextList = false;
    public bool usePagedList = true;
    public int rowsPerPage = 3;
    public Button leftPrevButton;
    public Button leftNextButton;
    public TMP_Text leftPageText;
    public Button rightPrevButton;
    public Button rightNextButton;
    public TMP_Text rightPageText;
    public Sprite propertyIconSprite;

    [Header("Money")]
    public TMP_InputField leftMoneyInput;
    public TMP_InputField rightMoneyInput;
    public Image cashIcon;
    public Toggle offerCashToggle;
    public Toggle askCashToggle;
    public Slider cashSlider;
    public TMP_Text cashAmountText;

    [Header("Buttons")]
    public Button offerButton;
    public Button showBoardButton;
    public Button cancelButton;
    public Button acceptButton;
    public Button rejectButton;
    public Button backToTradeButton;

    private TradeSystem _tradeSystem;
    private Player _left;
    private Player _right;
    private bool _suppressCashEvents = false;
    private TMP_Text _debugText;
    private int _leftPageIndex = 0;
    private int _rightPageIndex = 0;
    private Player _lastLeft;
    private Player _lastRight;
    private UGUIPopupAnimator _popupAnimator;

    void Awake()
    {
        if (panelRoot == null) panelRoot = gameObject;
        _popupAnimator = EnsurePopupAnimator();
        BindUIIfMissing();
        BindInputChildrenIfMissing();
        BindScrollRectsIfMissing();
        BindSliderPartsIfMissing();
        Hide();
    }

#if UNITY_EDITOR
    void OnValidate()
    {
        // Keep inspector references in sync in edit mode.
        if (panelRoot == null) panelRoot = gameObject;
        BindUIIfMissing();
        BindInputChildrenIfMissing();
        BindScrollRectsIfMissing();
        BindSliderPartsIfMissing();
    }
#endif

    public void Bind(TradeSystem tradeSystem)
    {
        _tradeSystem = tradeSystem;
        HookButtons();
    }

    public void Show()
    {
        if (_popupAnimator == null) _popupAnimator = EnsurePopupAnimator();
        if (_popupAnimator != null) _popupAnimator.Show();
        else if (panelRoot != null) panelRoot.SetActive(true);
        ForceToFrontAndInteractable();
    }

    public void Hide()
    {
        if (_popupAnimator == null) _popupAnimator = EnsurePopupAnimator();
        if (_popupAnimator != null) _popupAnimator.Hide();
        else if (panelRoot != null) panelRoot.SetActive(false);
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

    public void Refresh(Player left, Player right, bool hasTarget, bool hasOffer, int leftMoney, int rightMoney)
    {
        _left = left;
        _right = right;
        if (_left != _lastLeft)
        {
            _leftPageIndex = 0;
            _lastLeft = _left;
        }
        if (_right != _lastRight)
        {
            _rightPageIndex = 0;
            _lastRight = _right;
        }
        if (titleText != null && left != null) titleText.text = $"{left.playerName} OFFERS";
        if (targetPlayerText != null)
        {
            targetPlayerText.text = right != null ? $"Trading With: {right.playerName}" : "Trading With: -";
        }
        if (leftPlayerName != null) leftPlayerName.text = left != null ? left.playerName : "";
        if (rightPlayerName != null) rightPlayerName.text = right != null ? right.playerName : "";

        if (statusText != null)
        {
            if (!hasTarget) statusText.text = "Select a player to trade with.";
            else if (!hasOffer) statusText.text = "You must offer something in exchange.";
            else statusText.text = $"{left?.playerName} is offering a trade to {right?.playerName}";
        }

        if (leftMoneyInput != null)
        {
            leftMoneyInput.text = leftMoney.ToString();
            leftMoneyInput.interactable = hasTarget;
        }
        if (rightMoneyInput != null)
        {
            rightMoneyInput.text = rightMoney.ToString();
            rightMoneyInput.interactable = hasTarget;
        }

        if (offerButton != null) offerButton.interactable = hasTarget && hasOffer;
        UpdateCashControls(hasTarget, leftMoney, rightMoney);
        RebuildLists();
    }

    public void ShowForAcceptance(Player target)
    {
        ForceToFrontAndInteractable();
        if (acceptButton == null || rejectButton == null)
            Debug.LogWarning($"TradePanelUGUI: Accept/Reject button missing. accept={(acceptButton != null)} reject={(rejectButton != null)}");

        if (offerButton != null) offerButton.gameObject.SetActive(false);
        if (showBoardButton != null) showBoardButton.gameObject.SetActive(false);
        if (cancelButton != null) cancelButton.gameObject.SetActive(false);
        if (backToTradeButton != null) backToTradeButton.gameObject.SetActive(false);

        if (acceptButton != null)
        {
            acceptButton.gameObject.SetActive(true);
            acceptButton.interactable = true;
        }
        if (rejectButton != null)
        {
            rejectButton.gameObject.SetActive(true);
            rejectButton.interactable = true;
        }

        if (statusText != null && target != null)
            statusText.text = $"{target.playerName}, do you accept this trade?";
    }

    public void ForceToFrontAndInteractable()
    {
        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (root == null) return;

        if (!root.activeSelf)
            root.SetActive(true);

        // Ensure this panel renders above HUD/dice overlays and receives clicks.
        Canvas canvas = root.GetComponent<Canvas>();
        if (canvas == null) canvas = root.AddComponent<Canvas>();
        canvas.overrideSorting = true;
        canvas.sortingOrder = 9000;
        if (canvas.renderMode != RenderMode.ScreenSpaceOverlay)
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;

        if (root.GetComponent<GraphicRaycaster>() == null)
            root.AddComponent<GraphicRaycaster>();

        CanvasGroup cg = root.GetComponent<CanvasGroup>();
        if (cg == null) cg = root.AddComponent<CanvasGroup>();
        cg.alpha = 1f;
        cg.interactable = true;
        cg.blocksRaycasts = true;

        root.transform.SetAsLastSibling();
    }

    private void RebuildLists()
    {
        if (_tradeSystem == null) return;
        if (leftContent == null || rightContent == null || cardPrefab == null) return;

        foreach (Transform c in leftContent) Destroy(c.gameObject);
        foreach (Transform c in rightContent) Destroy(c.gameObject);

        if (_left != null)
        {
            List<Property> props = _tradeSystem.GetTradeablePropertiesPublic(_left);
            int totalPages = Mathf.Max(1, Mathf.CeilToInt(props.Count / Mathf.Max(1, rowsPerPage)));
            _leftPageIndex = Mathf.Clamp(_leftPageIndex, 0, totalPages - 1);
            if (usePagedList)
                BuildPage(leftContent, props, _leftPageIndex, rowsPerPage, true);
            else
                BuildAll(leftContent, props, true);
            UpdatePageUI(true, _leftPageIndex, totalPages);
        }

        if (_right != null)
        {
            List<Property> props = _tradeSystem.GetTradeablePropertiesPublic(_right);
            int totalPages = Mathf.Max(1, Mathf.CeilToInt(props.Count / Mathf.Max(1, rowsPerPage)));
            _rightPageIndex = Mathf.Clamp(_rightPageIndex, 0, totalPages - 1);
            if (usePagedList)
                BuildPage(rightContent, props, _rightPageIndex, rowsPerPage, false);
            else
                BuildAll(rightContent, props, false);
            UpdatePageUI(false, _rightPageIndex, totalPages);
        }

        FixContentLayout(leftContent);
        FixContentLayout(rightContent);
        UpdateDebugInfo();
    }

    private void BuildAll(RectTransform parent, List<Property> props, bool isInitiator)
    {
        foreach (var prop in props)
            BuildRow(parent, prop, isInitiator);
    }

    private void BuildPage(RectTransform parent, List<Property> props, int pageIndex, int perPage, bool isInitiator)
    {
        int start = pageIndex * Mathf.Max(1, perPage);
        int end = Mathf.Min(start + Mathf.Max(1, perPage), props.Count);
        for (int i = start; i < end; i++)
            BuildRow(parent, props[i], isInitiator);
    }

    private void BuildRow(RectTransform parent, Property prop, bool isInitiator)
    {
        TileInfo tile = _tradeSystem.FindTileForProperty(prop);
        bool offered = _tradeSystem.IsPropertyOffered(prop, isInitiator);
        if (useSimpleTextList || tile == null)
        {
            CreateSimpleRow(parent, prop, offered, isInitiator);
        }
        else
        {
            var card = Instantiate(cardPrefab, parent);
            card.Init(tile, offered, () =>
            {
                _tradeSystem.TogglePropertyOffer(prop, isInitiator);
            });
        }
    }

    private void CreateSimpleRow(RectTransform parent, Property prop, bool offered, bool isInitiator)
    {
        if (parent == null || prop == null) return;

        var rowGO = new GameObject($"Prop_{prop.propertyName}", typeof(RectTransform), typeof(Image), typeof(Button), typeof(LayoutElement));
        rowGO.transform.SetParent(parent, false);
        var rowRt = rowGO.GetComponent<RectTransform>();
        if (rowRt != null)
        {
            rowRt.anchorMin = new Vector2(0, 1);
            rowRt.anchorMax = new Vector2(1, 1);
            rowRt.pivot = new Vector2(0.5f, 1);
            rowRt.sizeDelta = new Vector2(0, 70);
        }
        var img = rowGO.GetComponent<Image>();
        if (img == null) return;
        img.color = offered ? new Color(0.2f, 0.6f, 0.2f, 0.85f) : new Color(0.15f, 0.15f, 0.15f, 0.85f);

        var layout = rowGO.GetComponent<LayoutElement>();
        if (layout == null) return;
        layout.preferredHeight = 70f;
        layout.minHeight = 60f;

        CreateIconBox(rowGO.transform, "LeftIcon", new Vector2(8, 0), new Vector2(40, 40), offered);
        CreateIconBox(rowGO.transform, "RightIcon", new Vector2(-48, 0), new Vector2(40, 40), false);

        var textGO = new GameObject("Text", typeof(RectTransform), typeof(TextMeshProUGUI));
        textGO.transform.SetParent(rowGO.transform, false);
        var text = textGO.GetComponent<TextMeshProUGUI>();
        if (text == null) return;
        if (TMP_Settings.defaultFontAsset != null)
            text.font = TMP_Settings.defaultFontAsset;
        text.text = $"{prop.propertyName}\n<size=70%>₦{prop.price:N0}</size>";
        text.fontSize = 22;
        text.alignment = TextAlignmentOptions.Left;
        text.color = Color.white;
        text.raycastTarget = false;

        var textRt = (RectTransform)textGO.transform;
        textRt.anchorMin = new Vector2(0, 0);
        textRt.anchorMax = new Vector2(1, 1);
        textRt.offsetMin = new Vector2(56, 6);
        textRt.offsetMax = new Vector2(-56, -6);

        var btn = rowGO.GetComponent<Button>();
        if (btn != null)
        {
            btn.onClick.AddListener(() =>
            {
                _tradeSystem?.TogglePropertyOffer(prop, isInitiator);
            });
        }
    }

    private void CreateIconBox(Transform parent, string name, Vector2 offset, Vector2 size, bool isOn)
    {
        var iconGO = new GameObject(name, typeof(RectTransform), typeof(Image));
        iconGO.transform.SetParent(parent, false);
        var rt = iconGO.GetComponent<RectTransform>();
        rt.anchorMin = new Vector2(offset.x < 0 ? 1 : 0, 0.5f);
        rt.anchorMax = new Vector2(offset.x < 0 ? 1 : 0, 0.5f);
        rt.pivot = new Vector2(offset.x < 0 ? 1 : 0, 0.5f);
        rt.anchoredPosition = new Vector2(offset.x, 0);
        rt.sizeDelta = size;

        var img = iconGO.GetComponent<Image>();
        img.sprite = propertyIconSprite;
        img.preserveAspect = true;
        img.color = isOn ? new Color(0.9f, 0.85f, 0.4f, 1f) : new Color(0.9f, 0.9f, 0.9f, 0.9f);
    }

    private void FixContentLayout(RectTransform content)
    {
        if (content == null) return;
        content.anchorMin = new Vector2(0, 1);
        content.anchorMax = new Vector2(1, 1);
        content.pivot = new Vector2(0.5f, 1);
        content.anchoredPosition = Vector2.zero;
        content.sizeDelta = new Vector2(0, 0);

        // Force a sensible height so content is visible even if layout breaks.
        float totalHeight = 0f;
        foreach (Transform child in content)
        {
            var le = child.GetComponent<LayoutElement>();
            if (le != null && le.preferredHeight > 0f)
                totalHeight += le.preferredHeight;
            else
                totalHeight += 80f;
        }
        if (totalHeight > 0f)
        {
            totalHeight += 20f; // padding
            content.sizeDelta = new Vector2(0, totalHeight);
        }

        Canvas.ForceUpdateCanvases();
        LayoutRebuilder.ForceRebuildLayoutImmediate(content);
    }

    private void HookButtons()
    {
        if (offerButton != null) offerButton.onClick.AddListener(() => _tradeSystem?.ConfirmTrade());
        if (cancelButton != null) cancelButton.onClick.AddListener(() => _tradeSystem?.CancelTrade());
        if (acceptButton != null) acceptButton.onClick.AddListener(() => _tradeSystem?.AcceptTrade());
        if (rejectButton != null) rejectButton.onClick.AddListener(() => _tradeSystem?.RejectTrade());
        if (showBoardButton != null) showBoardButton.onClick.AddListener(() => _tradeSystem?.OnShowBoardClickedPublic());
        if (backToTradeButton != null) backToTradeButton.onClick.AddListener(() => _tradeSystem?.OnShowBoardClickedPublic());
        if (switchPlayerButton != null) switchPlayerButton.onClick.AddListener(() => _tradeSystem?.CycleTradeTargetPublic());
        if (leftPrevButton != null) leftPrevButton.onClick.AddListener(() => { _leftPageIndex = Mathf.Max(0, _leftPageIndex - 1); RebuildLists(); });
        if (leftNextButton != null) leftNextButton.onClick.AddListener(() => { _leftPageIndex += 1; RebuildLists(); });
        if (rightPrevButton != null) rightPrevButton.onClick.AddListener(() => { _rightPageIndex = Mathf.Max(0, _rightPageIndex - 1); RebuildLists(); });
        if (rightNextButton != null) rightNextButton.onClick.AddListener(() => { _rightPageIndex += 1; RebuildLists(); });

        if (leftMoneyInput != null)
        {
            leftMoneyInput.onEndEdit.AddListener(v =>
            {
                if (int.TryParse(v, out int amount))
                    _tradeSystem?.SetMoneyOfferPublic(amount, true);
            });
        }
        if (rightMoneyInput != null)
        {
            rightMoneyInput.onEndEdit.AddListener(v =>
            {
                if (int.TryParse(v, out int amount))
                    _tradeSystem?.SetMoneyOfferPublic(amount, false);
            });
        }

        if (offerCashToggle != null)
        {
            offerCashToggle.onValueChanged.AddListener(_ => OnCashModeChanged());
        }
        if (askCashToggle != null)
        {
            askCashToggle.onValueChanged.AddListener(_ => OnCashModeChanged());
        }
        if (cashSlider != null)
        {
            cashSlider.onValueChanged.AddListener(v =>
            {
                if (_suppressCashEvents) return;
                int amount = Mathf.RoundToInt(v);
                bool isInitiator = offerCashToggle == null || offerCashToggle.isOn;
                _tradeSystem?.SetMoneyOfferPublic(amount, isInitiator);
                UpdateCashAmountText(amount, isInitiator);
            });
        }
    }

    private void BindUIIfMissing()
    {
        if (panelRoot == null) panelRoot = FindGO("TradePanel") ?? gameObject;
        if (titleText == null) titleText = FindText("TradeTitleText");
        if (statusText == null) statusText = FindText("TradeStatusText");
        if (targetPlayerText == null) targetPlayerText = FindText("TargetPlayerText");
        if (switchPlayerButton == null) switchPlayerButton = FindButton("SwitchPlayerButton");
        if (leftPlayerName == null) leftPlayerName = FindText("LeftPlayerName");
        if (rightPlayerName == null) rightPlayerName = FindText("RightPlayerName");
        if (leftContent == null) leftContent = FindRect("LeftCardsContent");
        if (rightContent == null) rightContent = FindRect("RightCardsContent");
        if (leftMoneyInput == null) leftMoneyInput = FindInput("LeftMoneyInput");
        if (rightMoneyInput == null) rightMoneyInput = FindInput("RightMoneyInput");
        if (cashIcon == null) cashIcon = FindImage("CashIcon");
        if (offerCashToggle == null) offerCashToggle = FindToggle("OfferCashToggle");
        if (askCashToggle == null) askCashToggle = FindToggle("AskCashToggle");
        if (cashSlider == null) cashSlider = FindSlider("CashSlider");
        if (cashAmountText == null) cashAmountText = FindText("CashAmountText");
        if (offerButton == null) offerButton = FindButton("OfferButton");
        if (showBoardButton == null) showBoardButton = FindButton("ShowBoardButton");
        if (cancelButton == null) cancelButton = FindButton("CancelButton");
        if (acceptButton == null) acceptButton = FindButton("AcceptButton");
        if (rejectButton == null) rejectButton = FindButton("RejectButton");
        if (backToTradeButton == null) backToTradeButton = FindButton("BackToTradeButton");
        if (leftPrevButton == null) leftPrevButton = FindButton("LeftPrevButton");
        if (leftNextButton == null) leftNextButton = FindButton("LeftNextButton");
        if (leftPageText == null) leftPageText = FindText("LeftPageText");
        if (rightPrevButton == null) rightPrevButton = FindButton("RightPrevButton");
        if (rightNextButton == null) rightNextButton = FindButton("RightNextButton");
        if (rightPageText == null) rightPageText = FindText("RightPageText");

        BindToggleGraphics(offerCashToggle);
        BindToggleGraphics(askCashToggle);

        if (offerCashToggle != null && askCashToggle != null)
        {
            var group = offerCashToggle.GetComponentInParent<ToggleGroup>();
            if (group != null)
            {
                offerCashToggle.group = group;
                askCashToggle.group = group;
            }
        }
    }

    private TMP_Text FindText(string name)
    {
        foreach (var t in GetComponentsInChildren<TMP_Text>(true))
            if (t.name == name) return t;
        return null;
    }

    private RectTransform FindRect(string name)
    {
        foreach (var t in GetComponentsInChildren<RectTransform>(true))
            if (t.name == name) return t;
        return null;
    }

    private TMP_InputField FindInput(string name)
    {
        foreach (var i in GetComponentsInChildren<TMP_InputField>(true))
            if (i.name == name) return i;
        return null;
    }

    private Image FindImage(string name)
    {
        foreach (var i in GetComponentsInChildren<Image>(true))
            if (i.name == name) return i;
        return null;
    }

    private GameObject FindGO(string name)
    {
        foreach (var t in GetComponentsInChildren<Transform>(true))
            if (t.name == name) return t.gameObject;
        return null;
    }

    private Toggle FindToggle(string name)
    {
        foreach (var t in GetComponentsInChildren<Toggle>(true))
            if (t.name == name) return t;
        return null;
    }

    private Slider FindSlider(string name)
    {
        foreach (var s in GetComponentsInChildren<Slider>(true))
            if (s.name == name) return s;
        return null;
    }

    private Button FindButton(string name)
    {
        foreach (var b in GetComponentsInChildren<Button>(true))
            if (b.name == name) return b;
        return null;
    }

    private void BindInputChildrenIfMissing()
    {
        BindInputChildren(leftMoneyInput);
        BindInputChildren(rightMoneyInput);
    }

    private void BindInputChildren(TMP_InputField input)
    {
        if (input == null) return;
        if (input.textComponent == null)
        {
            var text = FindTextInChildren(input.transform, "Text");
            if (text != null) input.textComponent = text;
        }
        if (input.placeholder == null)
        {
            var placeholder = FindGraphicInChildren(input.transform, "Placeholder");
            if (placeholder != null) input.placeholder = placeholder;
        }
    }

    private TMP_Text FindTextInChildren(Transform root, string name)
    {
        foreach (var t in root.GetComponentsInChildren<TMP_Text>(true))
            if (t.name == name) return t;
        return null;
    }

    private Graphic FindGraphicInChildren(Transform root, string name)
    {
        foreach (var g in root.GetComponentsInChildren<Graphic>(true))
            if (g.name == name) return g;
        return null;
    }

    private void BindSliderPartsIfMissing()
    {
        if (cashSlider == null) return;
        if (cashSlider.fillRect == null)
        {
            var fill = FindRectInChildren(cashSlider.transform, "Fill");
            if (fill != null) cashSlider.fillRect = fill;
        }
        if (cashSlider.handleRect == null)
        {
            var handle = FindRectInChildren(cashSlider.transform, "Handle");
            if (handle != null) cashSlider.handleRect = handle;
        }
        if (cashSlider.targetGraphic == null)
        {
            var bg = FindGraphicInChildren(cashSlider.transform, "Background");
            if (bg != null) cashSlider.targetGraphic = bg;
        }
    }

    private void BindScrollRectsIfMissing()
    {
        BindScrollRect("LeftCardsScroll", "LeftCardsContent");
        BindScrollRect("RightCardsScroll", "RightCardsContent");
    }

    private void BindScrollRect(string scrollName, string contentName)
    {
        var scroll = FindScrollRect(scrollName);
        if (scroll == null) return;
        if (scroll.viewport == null)
        {
            scroll.viewport = FindRectInChildren(scroll.transform, "Viewport");
            if (scroll.viewport == null)
                scroll.viewport = scroll.GetComponent<RectTransform>();
        }
        if (scroll.content == null)
            scroll.content = FindRectInChildren(scroll.transform, contentName);

        // Make viewport stretch and avoid masking issues.
        if (scroll.viewport != null)
        {
            scroll.viewport.anchorMin = Vector2.zero;
            scroll.viewport.anchorMax = Vector2.one;
            scroll.viewport.offsetMin = Vector2.zero;
            scroll.viewport.offsetMax = Vector2.zero;
            var mask = scroll.viewport.GetComponent<Mask>();
            if (mask != null) mask.showMaskGraphic = false;
            var img = scroll.viewport.GetComponent<Image>();
            if (img != null) img.raycastTarget = false;
        }
    }

    private ScrollRect FindScrollRect(string name)
    {
        foreach (var s in GetComponentsInChildren<ScrollRect>(true))
            if (s.name == name) return s;
        return null;
    }

    void LateUpdate()
    {
        // Ensure ScrollRects are wired even if inspector refs are missing or serialized links broke.
        BindScrollRectsIfMissing();
        UpdateDebugInfo();
    }

    private void UpdateDebugInfo()
    {
        if (_debugText == null)
            _debugText = FindText("TradeDebugText");
        if (_debugText == null) return;

        int leftCount = leftContent != null ? leftContent.childCount : -1;
        int rightCount = rightContent != null ? rightContent.childCount : -1;
        Vector2 leftSize = leftContent != null ? leftContent.rect.size : Vector2.zero;
        Vector2 rightSize = rightContent != null ? rightContent.rect.size : Vector2.zero;
        _debugText.text =
            $"Left rows: {leftCount} size:{leftSize.x:0}x{leftSize.y:0}\n" +
            $"Right rows: {rightCount} size:{rightSize.x:0}x{rightSize.y:0}";
    }

    private void UpdatePageUI(bool isLeft, int pageIndex, int totalPages)
    {
        if (isLeft)
        {
            if (leftPageText != null) leftPageText.text = $"{pageIndex + 1} / {totalPages}";
            if (leftPrevButton != null) leftPrevButton.interactable = pageIndex > 0;
            if (leftNextButton != null) leftNextButton.interactable = pageIndex < totalPages - 1;
        }
        else
        {
            if (rightPageText != null) rightPageText.text = $"{pageIndex + 1} / {totalPages}";
            if (rightPrevButton != null) rightPrevButton.interactable = pageIndex > 0;
            if (rightNextButton != null) rightNextButton.interactable = pageIndex < totalPages - 1;
        }
    }

    private void BindToggleGraphics(Toggle toggle)
    {
        if (toggle == null) return;
        if (toggle.targetGraphic == null)
        {
            Graphic bg = toggle.GetComponent<Graphic>();
            if (bg == null) bg = FindGraphicInChildren(toggle.transform, "Background");
            if (bg != null) toggle.targetGraphic = bg;
        }
        if (toggle.graphic == null)
        {
            var check = FindGraphicInChildren(toggle.transform, "Checkmark");
            if (check != null) toggle.graphic = check;
        }
    }

    private RectTransform FindRectInChildren(Transform root, string name)
    {
        foreach (var t in root.GetComponentsInChildren<RectTransform>(true))
            if (t.name == name) return t;
        return null;
    }

    private void OnCashModeChanged()
    {
        if (_suppressCashEvents) return;
        UpdateCashControls(_right != null, _tradeSystem != null ? _tradeSystem.GetOfferMoney(true) : 0, _tradeSystem != null ? _tradeSystem.GetOfferMoney(false) : 0);
    }

    private void UpdateCashControls(bool hasTarget, int leftMoney, int rightMoney)
    {
        if (cashSlider == null) return;
        _suppressCashEvents = true;
        bool offerMode = offerCashToggle == null || offerCashToggle.isOn;
        if (offerCashToggle != null && askCashToggle != null && !offerCashToggle.isOn && !askCashToggle.isOn)
        {
            offerCashToggle.isOn = true;
            offerMode = true;
        }
        int max = 0;
        if (offerMode)
            max = _left != null ? _left.Money : 0;
        else
            max = _right != null ? _right.Money : 0;

        cashSlider.interactable = hasTarget;
        cashSlider.minValue = 0;
        cashSlider.maxValue = Mathf.Max(0, max);
        int current = offerMode ? leftMoney : rightMoney;
        cashSlider.SetValueWithoutNotify(current);
        UpdateCashAmountText(current, offerMode);

        if (leftMoneyInput != null) leftMoneyInput.interactable = hasTarget && offerMode;
        if (rightMoneyInput != null) rightMoneyInput.interactable = hasTarget && !offerMode;
        _suppressCashEvents = false;
    }

    private void UpdateCashAmountText(int amount, bool isOffer)
    {
        if (cashAmountText == null) return;
        cashAmountText.text = isOffer ? $"Offer: ₦{amount:N0}" : $"Ask: ₦{amount:N0}";
    }

    public void ToggleBoardView(bool showBoard)
    {
        if (panelRoot != null) panelRoot.SetActive(!showBoard);
        if (backToTradeButton != null) backToTradeButton.gameObject.SetActive(showBoard);
    }
}
