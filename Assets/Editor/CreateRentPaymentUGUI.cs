using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;

public static class CreateRentPaymentUGUI
{
    private const string CanvasName = "Rent Payment UI (uGUI)";
    private const string OverlayName = "RentPaymentOverlay";
    private const string BlockerName = "RentPaymentOverlayBlocker";
    private const string PanelName = "RentPaymentPanel";
    private const string HeaderName = "RentPaymentHeader";
    private const string TitleName = "RentPaymentTitleText";
    private const string BodyName = "RentPaymentBody";
    private const string MessageName = "RentPaymentMessageText";
    private const string DetailsName = "RentPaymentDetailsText";
    private const string FooterName = "RentPaymentFooter";
    private const string OkButtonName = "RentPaymentOkButton";
    private const string OkLabelName = "RentPaymentOkLabel";

    private const string PopupSpritePath = "Assets/Sprites/PopupBackground.png";
    private const string BadgeSpritePath = "Assets/Sprites/Badge.png";
    private const string GoldButtonSpritePath = "Assets/Sprites/Gold Button.png";
    private const string DefaultFontPath = "Assets/TextMesh Pro/Resources/Fonts & Materials/LiberationSans SDF.asset";

    [MenuItem("Tools/UI/Build Rent Payment uGUI Panel")]
    public static void BuildRentPaymentUGUI()
    {
        var scene = EditorSceneManager.GetActiveScene();
        if (!scene.IsValid())
        {
            Debug.LogError("No active scene. Open GameScene.unity first.");
            return;
        }

        var canvasGo = GameObject.Find(CanvasName);
        if (canvasGo == null)
        {
            canvasGo = new GameObject(CanvasName, typeof(RectTransform), typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
            var canvas = canvasGo.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;
            canvas.overrideSorting = true;
            canvas.sortingOrder = 50;

            var scaler = canvasGo.GetComponent<CanvasScaler>();
            scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            scaler.referenceResolution = new Vector2(1920, 1080);
            scaler.matchWidthOrHeight = 0.5f;
        }

        var overlay = GetOrCreateUIObject(OverlayName, canvasGo.transform);
        SetStretch(overlay);
        overlay.SetActive(false);

        var blocker = GetOrCreateUIObject(BlockerName, overlay.transform);
        SetStretch(blocker);
        var blockerImage = EnsureImage(blocker, new Color(0f, 0f, 0f, 0.45f));
        var blockerButton = EnsureButton(blocker, blockerImage);

        var panel = GetOrCreateUIObject(PanelName, overlay.transform);
        SetCentered(panel, new Vector2(563f, 420f));
        var panelImage = EnsureImage(panel, Color.white);
        panelImage.sprite = AssetDatabase.LoadAssetAtPath<Sprite>(PopupSpritePath);
        panelImage.preserveAspect = true;

        var header = GetOrCreateUIObject(HeaderName, panel.transform);
        SetTopCentered(header, new Vector2(480f, 200f), -45f);
        var headerImage = EnsureImage(header, Color.white);
        headerImage.sprite = AssetDatabase.LoadAssetAtPath<Sprite>(BadgeSpritePath);
        headerImage.preserveAspect = true;

        var title = GetOrCreateUIObject(TitleName, header.transform);
        SetCentered(title, new Vector2(480f, 100f));
        var titleText = EnsureTMP(title);
        titleText.text = "RENT PAYMENT";
        titleText.fontSize = 38;
        titleText.alignment = TextAlignmentOptions.Center;

        var body = GetOrCreateUIObject(BodyName, panel.transform);
        SetCentered(body, new Vector2(480f, 140f));

        var message = GetOrCreateUIObject(MessageName, body.transform);
        SetTopCentered(message, new Vector2(480f, 40f), 0f);
        var messageText = EnsureTMP(message);
        messageText.fontSize = 26;
        messageText.alignment = TextAlignmentOptions.Center;

        var details = GetOrCreateUIObject(DetailsName, body.transform);
        SetTopCentered(details, new Vector2(480f, 70f), -40f);
        var detailsText = EnsureTMP(details);
        detailsText.fontSize = 22;
        detailsText.alignment = TextAlignmentOptions.Center;

        var footer = GetOrCreateUIObject(FooterName, panel.transform);
        SetBottomCentered(footer, new Vector2(480f, 80f), 24f);

        var okButton = GetOrCreateUIObject(OkButtonName, footer.transform);
        SetCentered(okButton, new Vector2(200f, 56f));
        var okImage = EnsureImage(okButton, Color.white);
        okImage.sprite = AssetDatabase.LoadAssetAtPath<Sprite>(GoldButtonSpritePath);
        okImage.preserveAspect = true;
        var okButtonComponent = EnsureButton(okButton, okImage);

        var okLabel = GetOrCreateUIObject(OkLabelName, okButton.transform);
        SetStretch(okLabel);
        var okLabelText = EnsureTMP(okLabel);
        okLabelText.text = "OK";
        okLabelText.fontSize = 22;
        okLabelText.alignment = TextAlignmentOptions.Center;

        var rentPanel = overlay.GetComponent<RentPaymentPanelUGUI>();
        if (rentPanel == null) rentPanel = overlay.AddComponent<RentPaymentPanelUGUI>();
        rentPanel.overlayRoot = overlay;
        rentPanel.panelRoot = panel;
        rentPanel.titleText = titleText;
        rentPanel.messageText = messageText;
        rentPanel.detailsText = detailsText;
        rentPanel.okButton = okButtonComponent;
        rentPanel.overlayButton = blockerButton;

        var uiDocManager = Object.FindObjectOfType<UIDocumentManager>();
        if (uiDocManager != null)
        {
            uiDocManager.rentPaymentPanelUGUI = rentPanel;
            uiDocManager.useUGUIRentPaymentPanel = true;
            EditorUtility.SetDirty(uiDocManager);
        }

        EditorSceneManager.MarkSceneDirty(scene);
        Debug.Log("Rent Payment uGUI panel created/updated. Assign sprites or adjust layout if needed.");
    }

    private static GameObject GetOrCreateUIObject(string name, Transform parent)
    {
        var child = parent.Find(name);
        if (child != null) return child.gameObject;
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

    private static void SetCentered(GameObject go, Vector2 size)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.anchorMin = new Vector2(0.5f, 0.5f);
        rt.anchorMax = new Vector2(0.5f, 0.5f);
        rt.sizeDelta = size;
        rt.anchoredPosition = Vector2.zero;
        rt.localScale = Vector3.one;
    }

    private static void SetTopCentered(GameObject go, Vector2 size, float yOffset)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.anchorMin = new Vector2(0.5f, 1f);
        rt.anchorMax = new Vector2(0.5f, 1f);
        rt.sizeDelta = size;
        rt.anchoredPosition = new Vector2(0f, yOffset);
        rt.localScale = Vector3.one;
    }

    private static void SetBottomCentered(GameObject go, Vector2 size, float yOffset)
    {
        var rt = go.GetComponent<RectTransform>();
        rt.anchorMin = new Vector2(0.5f, 0f);
        rt.anchorMax = new Vector2(0.5f, 0f);
        rt.sizeDelta = size;
        rt.anchoredPosition = new Vector2(0f, yOffset);
        rt.localScale = Vector3.one;
    }

    private static Image EnsureImage(GameObject go, Color color)
    {
        var image = go.GetComponent<Image>();
        if (image == null) image = go.AddComponent<Image>();
        image.color = color;
        image.raycastTarget = true;
        return image;
    }

    private static Button EnsureButton(GameObject go, Image target)
    {
        var button = go.GetComponent<Button>();
        if (button == null) button = go.AddComponent<Button>();
        button.targetGraphic = target;
        return button;
    }

    private static TMP_Text EnsureTMP(GameObject go)
    {
        var tmp = go.GetComponent<TextMeshProUGUI>();
        if (tmp == null) tmp = go.AddComponent<TextMeshProUGUI>();
        var font = AssetDatabase.LoadAssetAtPath<TMP_FontAsset>(DefaultFontPath);
        if (font != null) tmp.font = font;
        tmp.enableWordWrapping = true;
        tmp.raycastTarget = false;
        return tmp;
    }
}
