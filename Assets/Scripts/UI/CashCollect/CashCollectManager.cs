using System;
using System.Collections;
using UnityEngine;
using TMPro;

#if DOTWEEN
using DG.Tweening;
#endif

public class CashCollectManager : MonoBehaviour
{
    [Header("References (assign in Inspector)")]
    [SerializeField] private RectTransform notesParent;
    [SerializeField] private CashCollectNote notePrefab;
    [SerializeField] private RectTransform walletTarget;
    [SerializeField] private TMP_Text balanceText;
    [SerializeField] private Sprite moneySprite;

    [Header("Amount Overlay (optional)")]
    [SerializeField] private RectTransform overlayParent;
    [SerializeField] private TMP_Text overlayPrefab;
    [SerializeField] private Color positiveColor = new Color(0.25f, 0.85f, 0.35f, 1f);
    [SerializeField] private Color negativeColor = new Color(0.95f, 0.25f, 0.25f, 1f);
    [SerializeField] private float overlayDuration = 1.1f;
    [SerializeField] private Vector2 overlayMoveOffset = new Vector2(0f, 60f);

    [Header("Notes Settings")]
    [SerializeField] private int amountPerNote = 50000;
    [SerializeField] private int minNotes = 6;
    [SerializeField] private int maxNotes = 16;
    [SerializeField] private float spreadRadius = 80f;
    [SerializeField] private float totalDuration = 0.8f;
    [SerializeField] private float moveDuration = 0.6f;
    [SerializeField] private float popDuration = 0.18f;
    [SerializeField] private float startScale = 1.25f;
    [SerializeField] private float endScale = 0.25f;
    [SerializeField] private float rotationRange = 18f;

    [Header("Test (optional)")]
    [SerializeField] private RectTransform testSource;
    [SerializeField] private int testAmount = 200000;
    [SerializeField] private int testNewBalance = 1000000;

    private CashCollectPool _pool;

    void Awake()
    {
        _pool = GetComponent<CashCollectPool>();
        if (_pool == null) _pool = gameObject.AddComponent<CashCollectPool>();
        _pool.Initialize(notePrefab, notesParent, maxNotes);
        if (notesParent != null) notesParent.SetAsLastSibling();
        if (overlayParent != null) overlayParent.SetAsLastSibling();
    }

    public void PlayCashCollect(int amount, RectTransform source, int newBalance, Action onComplete = null)
    {
        PlayCashCollect(amount, source, walletTarget, balanceText, newBalance, true, onComplete);
    }

    public void PlayCashCollect(int amount, RectTransform source, RectTransform target, TMP_Text balanceOverride, int newBalance, bool isIncome, Action onComplete = null)
    {
        if (amount <= 0 || source == null || notesParent == null || target == null)
        {
            UpdateBalanceText(balanceOverride, newBalance);
            onComplete?.Invoke();
            return;
        }

        int noteCount = Mathf.Clamp(
            Mathf.CeilToInt((float)amount / Mathf.Max(1, amountPerNote)),
            minNotes, maxNotes);

        Vector2 sourcePos = WorldToAnchored(notesParent, source);
        Vector2 targetPos = WorldToAnchored(notesParent, target);

        ShowOverlayAmount(amount, sourcePos, isIncome);

#if DOTWEEN
        int completed = 0;
        float perNoteDelay = (noteCount <= 1) ? 0f : totalDuration / (noteCount - 1);

        for (int i = 0; i < noteCount; i++)
        {
            CashCollectNote note = _pool.Get();
            if (note == null) continue;
            note.Setup(moneySprite);
            note.SetColor(isIncome ? positiveColor : negativeColor);

            Vector2 spread = UnityEngine.Random.insideUnitCircle * spreadRadius;
            note.Rect.anchoredPosition = sourcePos + spread;
            note.Rect.localScale = Vector3.zero;
            float zRot = UnityEngine.Random.Range(-rotationRange, rotationRange);
            note.Rect.localRotation = Quaternion.Euler(0f, 0f, zRot);

            float delay = perNoteDelay * i;
            Sequence seq = DOTween.Sequence();
            seq.SetDelay(delay);
            seq.Append(note.Rect.DOScale(startScale, popDuration).SetEase(Ease.OutBack));
            seq.Join(note.Rect.DOAnchorPos(targetPos, moveDuration).SetEase(Ease.InOutQuad));
            seq.Join(note.Rect.DOScale(endScale, moveDuration).SetEase(Ease.InQuad));
            seq.OnComplete(() =>
            {
                _pool.Release(note);
                completed++;
                if (completed >= noteCount)
                {
                    UpdateBalanceText(balanceOverride, newBalance);
                    onComplete?.Invoke();
                }
            });
        }
#else
        StartCoroutine(AnimateNotesFallback(noteCount, sourcePos, targetPos, balanceOverride, newBalance, isIncome, onComplete));
#endif
    }

    [ContextMenu("Test Collect In")]
    public void TestCollectIn()
    {
        RectTransform source = testSource != null ? testSource : walletTarget;
        PlayCashCollect(testAmount, source, testNewBalance);
    }

    void ShowOverlayAmount(int amount, Vector2 anchoredPos, bool isIncome)
    {
        if (overlayPrefab == null || overlayParent == null) return;
        TMP_Text overlay = Instantiate(overlayPrefab, overlayParent);
        overlay.gameObject.SetActive(true);
        string sign = isIncome ? "+" : "−";
        overlay.text = $"{sign}₦{amount:N0}";
        overlay.color = isIncome ? positiveColor : negativeColor;
        RectTransform r = overlay.GetComponent<RectTransform>();
        if (r != null)
            r.anchoredPosition = anchoredPos;

#if DOTWEEN
        CanvasGroup cg = overlay.GetComponent<CanvasGroup>();
        if (cg == null) cg = overlay.gameObject.AddComponent<CanvasGroup>();
        cg.alpha = 1f;
        Vector2 endPos = anchoredPos + overlayMoveOffset;
        Sequence s = DOTween.Sequence();
        s.Append(r.DOAnchorPos(endPos, overlayDuration).SetEase(Ease.OutQuad));
        s.Join(cg.DOFade(0f, overlayDuration).SetEase(Ease.InQuad));
        s.OnComplete(() => Destroy(overlay.gameObject));
#else
        StartCoroutine(AnimateOverlayFallback(overlay, r, anchoredPos));
#endif
    }

    void UpdateBalanceText(TMP_Text target, int newBalance)
    {
        if (target == null) return;
        target.text = $"₦{newBalance:N0}";
    }

    static Vector2 WorldToAnchored(RectTransform parent, RectTransform source)
    {
        Canvas canvas = parent.GetComponentInParent<Canvas>();
        Camera cam = canvas != null && canvas.renderMode != RenderMode.ScreenSpaceOverlay ? canvas.worldCamera : null;
        Vector2 screenPos = RectTransformUtility.WorldToScreenPoint(cam, source.position);
        RectTransformUtility.ScreenPointToLocalPointInRectangle(parent, screenPos, cam, out Vector2 localPoint);
        return localPoint;
    }

#if !DOTWEEN
    IEnumerator AnimateNotesFallback(int noteCount, Vector2 sourcePos, Vector2 targetPos, TMP_Text balanceOverride, int newBalance, bool isIncome, Action onComplete)
    {
        if (noteCount <= 0)
        {
            UpdateBalanceText(balanceOverride, newBalance);
            onComplete?.Invoke();
            yield break;
        }

        int completed = 0;
        float perNoteDelay = (noteCount <= 1) ? 0f : totalDuration / (noteCount - 1);

        for (int i = 0; i < noteCount; i++)
        {
            CashCollectNote note = _pool.Get();
            if (note == null) continue;
            note.Setup(moneySprite);
            note.SetColor(isIncome ? positiveColor : negativeColor);

            Vector2 spread = UnityEngine.Random.insideUnitCircle * spreadRadius;
            note.Rect.anchoredPosition = sourcePos + spread;
            note.Rect.localScale = Vector3.zero;
            float zRot = UnityEngine.Random.Range(-rotationRange, rotationRange);
            note.Rect.localRotation = Quaternion.Euler(0f, 0f, zRot);

            float delay = perNoteDelay * i;
            StartCoroutine(AnimateSingleNoteFallback(note, sourcePos + spread, targetPos, delay, () =>
            {
                _pool.Release(note);
                completed++;
                if (completed >= noteCount)
                {
                    UpdateBalanceText(balanceOverride, newBalance);
                    onComplete?.Invoke();
                }
            }));
        }
    }

    IEnumerator AnimateSingleNoteFallback(CashCollectNote note, Vector2 startPos, Vector2 targetPos, float delay, Action onDone)
    {
        if (delay > 0f) yield return new WaitForSeconds(delay);
        float t = 0f;
        while (t < popDuration)
        {
            t += Time.deltaTime;
            float k = Mathf.Clamp01(t / Mathf.Max(0.0001f, popDuration));
            float eased = Mathf.Sin(k * Mathf.PI * 0.5f);
            note.Rect.localScale = Vector3.one * (startScale * eased);
            yield return null;
        }

        t = 0f;
        while (t < moveDuration)
        {
            t += Time.deltaTime;
            float k = Mathf.Clamp01(t / Mathf.Max(0.0001f, moveDuration));
            float eased = Mathf.SmoothStep(0f, 1f, k);
            note.Rect.anchoredPosition = Vector2.LerpUnclamped(startPos, targetPos, eased);
            float scale = Mathf.Lerp(startScale, endScale, eased);
            note.Rect.localScale = Vector3.one * scale;
            yield return null;
        }

        onDone?.Invoke();
    }

    IEnumerator AnimateOverlayFallback(TMP_Text overlay, RectTransform r, Vector2 anchoredPos)
    {
        if (overlay == null || r == null) yield break;
        CanvasGroup cg = overlay.GetComponent<CanvasGroup>();
        if (cg == null) cg = overlay.gameObject.AddComponent<CanvasGroup>();
        cg.alpha = 1f;
        Vector2 endPos = anchoredPos + overlayMoveOffset;
        float t = 0f;
        while (t < overlayDuration)
        {
            t += Time.deltaTime;
            float k = Mathf.Clamp01(t / Mathf.Max(0.0001f, overlayDuration));
            float eased = Mathf.SmoothStep(0f, 1f, k);
            r.anchoredPosition = Vector2.LerpUnclamped(anchoredPos, endPos, eased);
            cg.alpha = Mathf.Lerp(1f, 0f, eased);
            yield return null;
        }
        Destroy(overlay.gameObject);
    }
#endif
}
