using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public enum PerkResultAggression
{
    Low,
    Medium,
    High
}

public enum ResultCardTone
{
    Neutral,
    Positive,
    Negative
}

/// <summary>
/// uGUI Card panel controller for Perk/Chance/Community cards.
/// Supports two-button choice mode and one-button info mode.
/// </summary>
public class CardPanelUGUI : MonoBehaviour
{
    public static CardPanelUGUI Instance { get; private set; }

    [Header("Root")]
    public GameObject overlayRoot;
    public GameObject panelRoot;

    [Header("Content")]
    public TMP_Text titleText;
    public TMP_Text topicText;
    public TMP_Text descriptionText;
    public Image iconImage;

    [Header("Buttons")]
    public Button okButton;
    public Button altButton;
    public Button blockerButton;

    [Header("Behavior")]
    public bool closeOnBlockerTap = false;

    [Header("Result Card Styling")]
    [Tooltip("Title shown for action result popup cards.")]
    public string resultTitleText = "RESULT CARD";
    [Tooltip("Identifier text shown under title so this popup is easy to identify/edit.")]
    public string resultIdentifierText = "RESULT_CARD_UGUI";
    [Tooltip("Fallback icon used for result popup when no icon is provided.")]
    public Sprite resultFallbackIcon;
    [Tooltip("Move result description text vertically (negative moves it down).")]
    public float resultDescriptionYShift = -18f;
    [Tooltip("Font size for result description text.")]
    public float resultDescriptionFontSize = 36f;
    [Tooltip("Center align result description text.")]
    public bool centerResultDescription = true;
    [Tooltip("Enable shake/blast impact animation when a perk is activated.")]
    public bool enablePerkImpactFx = true;
    [Tooltip("Tint used for the perk activation blast flash.")]
    public Color perkBlastTint = new Color(1f, 0.9f, 0.45f, 1f);
    [Tooltip("Shake amplitude in pixels for low-aggression perk activation.")]
    public float lowAggressionShake = 6f;
    [Tooltip("Shake amplitude in pixels for medium-aggression perk activation.")]
    public float mediumAggressionShake = 14f;
    [Tooltip("Shake amplitude in pixels for high-aggression perk activation.")]
    public float highAggressionShake = 24f;
    [Tooltip("Radial ring color used for high-aggression perk activations.")]
    public Color highAggressionRingColor = new Color(1f, 0.86f, 0.38f, 0.95f);
    [Tooltip("Max ring scale during high-aggression pulse.")]
    public float highAggressionRingScale = 1.55f;
    [Tooltip("Duration of high-aggression ring pulse.")]
    public float highAggressionRingDuration = 0.28f;
    [Tooltip("Enable tone-based impact animation for non-perk result cards.")]
    public bool enableResultToneFx = true;
    [Tooltip("Flash tint for accepted/good outcomes.")]
    public Color positiveResultTint = new Color(0.35f, 1f, 0.6f, 1f);
    [Tooltip("Flash tint for rejected/bad outcomes.")]
    public Color negativeResultTint = new Color(1f, 0.35f, 0.35f, 1f);

    private Action _onOk;
    private Action _onAlt;
    private Coroutine _autoHideRoutine;
    private Coroutine _perkImpactRoutine;
    private Coroutine _perkRingRoutine;
    private Coroutine _resultToneRoutine;
    private UGUIPopupAnimator _popupAnimator;
    private bool _handlersBound;
    private bool _layoutCached;
    private TextAlignmentOptions _defaultDescriptionAlignment;
    private float _defaultDescriptionFontSize;
    private Vector2 _defaultDescriptionAnchoredPos;
    private bool _defaultDescriptionWordWrap;
    private Image _perkRingFx;
    private static Sprite _generatedPerkRingSprite;

    void Awake()
    {
        Instance = this;
        if (panelRoot == null) panelRoot = gameObject;
        _popupAnimator = EnsurePopupAnimator();
        AutoBindIfMissing();
        CacheDefaultLayout();
        EnsureHandlers();
    }

void Start()
    {
        Hide();
    }


    void OnDestroy()
    {
        if (Instance == this) Instance = null;
        UnbindHandlers();
    }

    public void ShowChoice(string title, string description, string okText, string altText, Action onOk, Action onAlt, Sprite icon = null, string topic = "")
    {
        _onOk = onOk;
        _onAlt = onAlt;
        ApplyDefaultLayout();
        ApplyContent(title, topic, description, icon);
        SetButtons(
            true,
            string.IsNullOrEmpty(okText) ? "OK" : okText,
            true,
            string.IsNullOrEmpty(altText) ? "USE" : altText
        );
        ShowRoot();
    }

public void ShowInfo(string title, string topic, string description, string okText, Action onOk, Sprite icon = null)
    {
        _onOk = onOk;
        _onAlt = null;
        ApplyDefaultLayout();
        ApplyContent(title, topic, description, icon);

        bool showOk = onOk != null || !string.IsNullOrEmpty(okText);
        string label = string.IsNullOrEmpty(okText) ? "Continue" : okText;
        SetButtons(showOk, label, false, string.Empty);

        ShowRoot();
    }

    public void ShowResult(string message, float autoCloseSeconds, Sprite icon = null, ResultCardTone tone = ResultCardTone.Neutral)
    {
        _onOk = null;
        _onAlt = null;
        ApplyResultLayout();
        ApplyContent(resultTitleText, resultIdentifierText, message ?? string.Empty, icon != null ? icon : ResolveResultIcon());
        SetButtons(false, string.Empty, false, string.Empty);
        ShowRoot();
        StartResultToneFx(tone);

        if (_autoHideRoutine != null) StopCoroutine(_autoHideRoutine);
        _autoHideRoutine = StartCoroutine(AutoHide(Mathf.Max(0.1f, autoCloseSeconds)));
    }

    public void ShowPerkResult(string message, float autoCloseSeconds, Sprite icon, PerkResultAggression aggression)
    {
        _onOk = null;
        _onAlt = null;
        ApplyResultLayout();
        ApplyContent(resultTitleText, "PERK ACTIVATED", message ?? string.Empty, icon != null ? icon : ResolveResultIcon());
        SetButtons(false, string.Empty, false, string.Empty);
        ShowRoot();
        StartPerkImpactFx(aggression);

        if (_autoHideRoutine != null) StopCoroutine(_autoHideRoutine);
        _autoHideRoutine = StartCoroutine(AutoHide(Mathf.Max(0.1f, autoCloseSeconds)));
    }

    public void Hide()
    {
        if (_autoHideRoutine != null)
        {
            StopCoroutine(_autoHideRoutine);
            _autoHideRoutine = null;
        }
        if (_perkImpactRoutine != null)
        {
            StopCoroutine(_perkImpactRoutine);
            _perkImpactRoutine = null;
        }
        if (_perkRingRoutine != null)
        {
            StopCoroutine(_perkRingRoutine);
            _perkRingRoutine = null;
        }
        if (_resultToneRoutine != null)
        {
            StopCoroutine(_resultToneRoutine);
            _resultToneRoutine = null;
        }
        if (_perkRingFx != null)
            _perkRingFx.enabled = false;

        _onOk = null;
        _onAlt = null;

        if (_popupAnimator == null) _popupAnimator = EnsurePopupAnimator();
        if (_popupAnimator != null)
        {
            _popupAnimator.Hide(() =>
            {
                if (overlayRoot != null) overlayRoot.SetActive(false);
            });
        }
        else
        {
            if (panelRoot != null) panelRoot.SetActive(false);
            if (overlayRoot != null) overlayRoot.SetActive(false);
        }
    }

    public bool IsVisible()
    {
        return panelRoot != null && panelRoot.activeInHierarchy;
    }

    private IEnumerator AutoHide(float delay)
    {
        yield return new WaitForSeconds(delay);
        Hide();
    }

    private void ShowRoot()
    {
        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (root != null)
        {
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

        if (overlayRoot != null) overlayRoot.SetActive(true);
    }

    private void StartPerkImpactFx(PerkResultAggression aggression)
    {
        if (!enablePerkImpactFx) return;
        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (root == null) return;
        RectTransform rt = root.GetComponent<RectTransform>();
        if (rt == null) return;
        if (_perkImpactRoutine != null)
            StopCoroutine(_perkImpactRoutine);
        _perkImpactRoutine = StartCoroutine(PerkImpactFxRoutine(rt, aggression));
        if (aggression == PerkResultAggression.High)
            StartHighAggressionRingPulse();
    }

    private void StartResultToneFx(ResultCardTone tone)
    {
        if (!enableResultToneFx || tone == ResultCardTone.Neutral) return;
        GameObject root = panelRoot != null ? panelRoot : gameObject;
        if (root == null) return;
        RectTransform rt = root.GetComponent<RectTransform>();
        if (rt == null) return;
        if (_resultToneRoutine != null)
            StopCoroutine(_resultToneRoutine);
        _resultToneRoutine = StartCoroutine(ResultToneFxRoutine(rt, tone));
    }

    private IEnumerator ResultToneFxRoutine(RectTransform panelRect, ResultCardTone tone)
    {
        yield return new WaitForSecondsRealtime(0.03f);

        Image panelImage = panelRect.GetComponent<Image>();
        Color panelBase = panelImage != null ? panelImage.color : Color.white;
        Vector2 basePos = panelRect.anchoredPosition;
        Vector3 baseScale = panelRect.localScale;
        Vector3 iconBaseScale = iconImage != null ? iconImage.rectTransform.localScale : Vector3.one;

        if (tone == ResultCardTone.Positive)
        {
            float duration = 0.20f;
            float elapsed = 0f;
            while (elapsed < duration)
            {
                elapsed += Time.unscaledDeltaTime;
                float t = Mathf.Clamp01(elapsed / duration);
                float pulse = Mathf.Sin(t * Mathf.PI);
                panelRect.localScale = Vector3.Lerp(baseScale, baseScale * 1.06f, pulse);
                if (iconImage != null && iconImage.enabled)
                    iconImage.rectTransform.localScale = Vector3.Lerp(iconBaseScale, iconBaseScale * 1.12f, pulse);
                if (panelImage != null)
                    panelImage.color = Color.Lerp(panelBase, positiveResultTint, 0.22f * pulse);
                yield return null;
            }
        }
        else
        {
            float duration = 0.26f;
            float elapsed = 0f;
            float amplitude = 14f;
            while (elapsed < duration)
            {
                elapsed += Time.unscaledDeltaTime;
                float t = Mathf.Clamp01(elapsed / duration);
                float damping = 1f - t;
                float x = Mathf.Sin(t * 55f) * amplitude * damping;
                panelRect.anchoredPosition = basePos + new Vector2(x, 0f);
                if (panelImage != null)
                    panelImage.color = Color.Lerp(panelBase, negativeResultTint, 0.28f * damping);
                if (iconImage != null && iconImage.enabled)
                    iconImage.rectTransform.localScale = Vector3.Lerp(iconBaseScale, iconBaseScale * 1.06f, 1f - Mathf.Abs((t * 2f) - 1f));
                yield return null;
            }
        }

        panelRect.anchoredPosition = basePos;
        panelRect.localScale = baseScale;
        if (panelImage != null) panelImage.color = panelBase;
        if (iconImage != null && iconImage.enabled) iconImage.rectTransform.localScale = iconBaseScale;
        _resultToneRoutine = null;
    }

    private IEnumerator PerkImpactFxRoutine(RectTransform panelRect, PerkResultAggression aggression)
    {
        yield return new WaitForSecondsRealtime(0.08f);

        float shakeAmplitude = lowAggressionShake;
        float shakeDuration = 0.16f;
        float burstScale = 1.06f;
        float flashStrength = 0.2f;

        switch (aggression)
        {
            case PerkResultAggression.High:
                shakeAmplitude = highAggressionShake;
                shakeDuration = 0.32f;
                burstScale = 1.15f;
                flashStrength = 0.42f;
                break;
            case PerkResultAggression.Medium:
                shakeAmplitude = mediumAggressionShake;
                shakeDuration = 0.24f;
                burstScale = 1.10f;
                flashStrength = 0.30f;
                break;
            case PerkResultAggression.Low:
            default:
                break;
        }

        Image panelImage = panelRect.GetComponent<Image>();
        Color panelBase = panelImage != null ? panelImage.color : Color.white;
        Vector2 originalPos = panelRect.anchoredPosition;
        Vector3 iconBaseScale = iconImage != null ? iconImage.rectTransform.localScale : Vector3.one;

        float elapsed = 0f;
        while (elapsed < shakeDuration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / shakeDuration);
            float damping = 1f - (t * 0.7f);
            Vector2 offset = UnityEngine.Random.insideUnitCircle * (shakeAmplitude * damping);
            panelRect.anchoredPosition = originalPos + offset;

            if (panelImage != null)
                panelImage.color = Color.Lerp(panelBase, perkBlastTint, flashStrength * (1f - t));
            if (iconImage != null && iconImage.enabled)
                iconImage.rectTransform.localScale = Vector3.Lerp(iconBaseScale, iconBaseScale * burstScale, 1f - t);

            yield return null;
        }

        panelRect.anchoredPosition = originalPos;
        if (panelImage != null) panelImage.color = panelBase;
        if (iconImage != null && iconImage.enabled) iconImage.rectTransform.localScale = iconBaseScale;
        _perkImpactRoutine = null;
    }

    private void StartHighAggressionRingPulse()
    {
        if (iconImage == null || !iconImage.enabled) return;
        EnsurePerkRingFx();
        if (_perkRingFx == null) return;
        SyncPerkRingTransformToIcon();
        if (_perkRingRoutine != null)
            StopCoroutine(_perkRingRoutine);
        _perkRingRoutine = StartCoroutine(HighAggressionRingPulseRoutine());
    }

    private IEnumerator HighAggressionRingPulseRoutine()
    {
        if (_perkRingFx == null) yield break;
        RectTransform rt = _perkRingFx.rectTransform;
        if (rt == null) yield break;

        float duration = Mathf.Max(0.08f, highAggressionRingDuration);
        float elapsed = 0f;
        _perkRingFx.enabled = true;
        _perkRingFx.color = highAggressionRingColor;
        rt.localScale = Vector3.one * 0.72f;

        while (elapsed < duration)
        {
            elapsed += Time.unscaledDeltaTime;
            float t = Mathf.Clamp01(elapsed / duration);
            float eased = 1f - Mathf.Pow(1f - t, 3f);
            float scale = Mathf.Lerp(0.72f, Mathf.Max(1.05f, highAggressionRingScale), eased);
            float alpha = Mathf.Lerp(highAggressionRingColor.a, 0f, t);
            rt.localScale = new Vector3(scale, scale, 1f);
            Color c = highAggressionRingColor;
            c.a = alpha;
            _perkRingFx.color = c;
            yield return null;
        }

        _perkRingFx.enabled = false;
        _perkRingRoutine = null;
    }

    private void EnsurePerkRingFx()
    {
        if (_perkRingFx != null) return;
        if (iconImage == null) return;

        RectTransform iconRt = iconImage.rectTransform;
        RectTransform parentRt = iconRt != null ? iconRt.parent as RectTransform : null;
        if (parentRt == null) return;

        GameObject ringGo = new GameObject("PerkRingFx", typeof(RectTransform), typeof(Image));
        ringGo.transform.SetParent(parentRt, false);
        _perkRingFx = ringGo.GetComponent<Image>();
        _perkRingFx.raycastTarget = false;
        _perkRingFx.enabled = false;
        _perkRingFx.sprite = GetOrCreatePerkRingSprite();
        _perkRingFx.type = Image.Type.Simple;
        _perkRingFx.preserveAspect = true;

        int iconIndex = iconRt.GetSiblingIndex();
        ringGo.transform.SetSiblingIndex(Mathf.Max(0, iconIndex));
    }

    private void SyncPerkRingTransformToIcon()
    {
        if (_perkRingFx == null || iconImage == null) return;
        RectTransform ringRt = _perkRingFx.rectTransform;
        RectTransform iconRt = iconImage.rectTransform;
        if (ringRt == null || iconRt == null) return;

        ringRt.anchorMin = iconRt.anchorMin;
        ringRt.anchorMax = iconRt.anchorMax;
        ringRt.pivot = iconRt.pivot;
        ringRt.anchoredPosition = iconRt.anchoredPosition;
        ringRt.sizeDelta = iconRt.sizeDelta;
    }

    private static Sprite GetOrCreatePerkRingSprite()
    {
        if (_generatedPerkRingSprite != null) return _generatedPerkRingSprite;

        const int size = 128;
        Texture2D tex = new Texture2D(size, size, TextureFormat.RGBA32, false);
        tex.wrapMode = TextureWrapMode.Clamp;
        tex.filterMode = FilterMode.Bilinear;

        float half = (size - 1) * 0.5f;
        float outer = half * 0.92f;
        float inner = half * 0.58f;

        for (int y = 0; y < size; y++)
        {
            for (int x = 0; x < size; x++)
            {
                float dx = x - half;
                float dy = y - half;
                float d = Mathf.Sqrt((dx * dx) + (dy * dy));
                float outerFade = Mathf.Clamp01((outer - d) / (half * 0.08f));
                float innerFade = Mathf.Clamp01((d - inner) / (half * 0.08f));
                float alpha = outerFade * innerFade;
                tex.SetPixel(x, y, new Color(1f, 1f, 1f, alpha));
            }
        }

        tex.Apply();
        _generatedPerkRingSprite = Sprite.Create(tex, new Rect(0f, 0f, size, size), new Vector2(0.5f, 0.5f), 100f);
        return _generatedPerkRingSprite;
    }

    private void ApplyContent(string title, string topic, string description, Sprite icon)
    {
        if (titleText != null) titleText.text = title ?? string.Empty;
        if (topicText != null) topicText.text = topic ?? string.Empty;
        if (descriptionText != null) descriptionText.text = description ?? string.Empty;

        if (iconImage != null)
        {
            Sprite resolvedIcon = icon != null ? icon : ResolveResultIcon();
            iconImage.sprite = resolvedIcon;
            iconImage.enabled = resolvedIcon != null;
            iconImage.type = Image.Type.Simple;
            iconImage.preserveAspect = true;
            iconImage.color = Color.white;
        }
    }

    private void CacheDefaultLayout()
    {
        if (_layoutCached || descriptionText == null) return;
        _layoutCached = true;
        _defaultDescriptionAlignment = descriptionText.alignment;
        _defaultDescriptionFontSize = descriptionText.fontSize;
        _defaultDescriptionWordWrap = descriptionText.textWrappingMode != TextWrappingModes.NoWrap;
        RectTransform rt = descriptionText.rectTransform;
        _defaultDescriptionAnchoredPos = rt != null ? rt.anchoredPosition : Vector2.zero;
    }

    private void ApplyDefaultLayout()
    {
        CacheDefaultLayout();
        if (descriptionText != null)
        {
            descriptionText.alignment = _defaultDescriptionAlignment;
            descriptionText.fontSize = _defaultDescriptionFontSize;
            descriptionText.textWrappingMode = _defaultDescriptionWordWrap ? TextWrappingModes.Normal : TextWrappingModes.NoWrap;
            RectTransform rt = descriptionText.rectTransform;
            if (rt != null)
                rt.anchoredPosition = _defaultDescriptionAnchoredPos;
        }
    }

    private void ApplyResultLayout()
    {
        CacheDefaultLayout();
        if (descriptionText != null)
        {
            if (centerResultDescription)
                descriptionText.alignment = TextAlignmentOptions.Midline;
            descriptionText.textWrappingMode = TextWrappingModes.Normal;
            if (resultDescriptionFontSize > 0f)
                descriptionText.fontSize = resultDescriptionFontSize;
            RectTransform rt = descriptionText.rectTransform;
            if (rt != null)
                rt.anchoredPosition = _defaultDescriptionAnchoredPos + new Vector2(0f, resultDescriptionYShift);
        }
    }

    private Sprite ResolveResultIcon()
    {
        if (resultFallbackIcon != null) return resultFallbackIcon;
        Sprite fallback = PlayerVisualManager.GetOrCreateFallbackTokenSprite();
        if (fallback != null) return fallback;
        return null;
    }

    private void SetButtons(bool showOk, string okLabel, bool showAlt, string altLabel)
    {
        if (okButton != null)
        {
            okButton.gameObject.SetActive(showOk);
            okButton.interactable = showOk;
            TMP_Text txt = okButton.GetComponentInChildren<TMP_Text>(true);
            if (txt != null) txt.text = okLabel;
        }

        if (altButton != null)
        {
            altButton.gameObject.SetActive(showAlt);
            altButton.interactable = showAlt;
            TMP_Text txt = altButton.GetComponentInChildren<TMP_Text>(true);
            if (txt != null) txt.text = altLabel;
        }
    }

    private void EnsureHandlers()
    {
        if (_handlersBound) return;
        if (okButton != null) okButton.onClick.AddListener(OnOkClicked);
        if (altButton != null) altButton.onClick.AddListener(OnAltClicked);
        if (blockerButton != null) blockerButton.onClick.AddListener(OnBlockerClicked);
        _handlersBound = true;
    }

    private void UnbindHandlers()
    {
        if (!_handlersBound) return;
        if (okButton != null) okButton.onClick.RemoveListener(OnOkClicked);
        if (altButton != null) altButton.onClick.RemoveListener(OnAltClicked);
        if (blockerButton != null) blockerButton.onClick.RemoveListener(OnBlockerClicked);
        _handlersBound = false;
    }

    private void OnOkClicked()
    {
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        _onOk?.Invoke();
    }

    private void OnAltClicked()
    {
        if (GameSoundManager.Instance != null) GameSoundManager.Instance.PlayClick();
        _onAlt?.Invoke();
    }

    private void OnBlockerClicked()
    {
        if (!closeOnBlockerTap) return;
        Hide();
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

    private void AutoBindIfMissing()
    {
        if (titleText == null) titleText = FindTMPByName("CardTitleText");
        if (topicText == null) topicText = FindTMPByName("CardTopicText");
        if (descriptionText == null) descriptionText = FindTMPByName("CardDescriptionText");

        if (iconImage == null) iconImage = FindImageByName("CardIcon");

        if (okButton == null) okButton = FindButtonByName("CardOkButton");
        if (altButton == null) altButton = FindButtonByName("CardAltButton");
        if (blockerButton == null) blockerButton = FindButtonByName("CardOverlayBlocker");
    }

    private TMP_Text FindTMPByName(string name)
    {
        TMP_Text[] texts = GetComponentsInChildren<TMP_Text>(true);
        foreach (var t in texts)
        {
            if (t != null && t.name.Equals(name, StringComparison.OrdinalIgnoreCase))
                return t;
        }
        return null;
    }

    private Image FindImageByName(string name)
    {
        Image[] images = GetComponentsInChildren<Image>(true);
        foreach (var img in images)
        {
            if (img != null && img.name.Equals(name, StringComparison.OrdinalIgnoreCase))
                return img;
        }
        return null;
    }

    private Button FindButtonByName(string name)
    {
        Button[] buttons = GetComponentsInChildren<Button>(true);
        foreach (var b in buttons)
        {
            if (b != null && b.name.Equals(name, StringComparison.OrdinalIgnoreCase))
                return b;
        }
        return null;
    }
}
