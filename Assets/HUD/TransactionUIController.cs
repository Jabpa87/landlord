using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
#if DOTWEEN
using DG.Tweening;
#endif

/// <summary>
/// Displays lightweight transaction toasts (debit/credit) with optional coin fly animation.
/// Uses unscaled time and does not block input.
/// </summary>
public class TransactionUIController : MonoBehaviour
{
    public static TransactionUIController Instance { get; private set; }

    [Header("Root")]
    public GameObject panelRoot;
    public CanvasGroup panelCanvasGroup;
    public TMP_Text titleText;

    [Header("Payer")]
    public Image payerAvatar;
    public TMP_Text payerNameText;
    public RectTransform payerToastAnchor;

    [Header("Receiver")]
    public Image receiverAvatar;
    public TMP_Text receiverNameText;
    public RectTransform receiverToastAnchor;

    [Header("Toasts")]
    public AlertToast toastPrefab;

    [Header("Transfer Visuals")]
    public RectTransform coinFlyIcon;
    [Tooltip("How many money sprites flow from payer to receiver when DOTween is enabled.")]
    public int moneyFlowCount = 8;
    [Tooltip("Spread radius around payer start point (pixels).")]
    public float moneyFlowSpread = 24f;
    [Tooltip("Stagger delay between notes (seconds).")]
    public float moneyFlowStagger = 0.04f;
    [Tooltip("Start scale for each flowing money sprite.")]
    public float moneyFlowStartScale = 0.92f;
    [Tooltip("End scale for each flowing money sprite.")]
    public float moneyFlowEndScale = 0.62f;

    [Header("Timings")]
    public float toastInSeconds = 0.18f;
    public float toastOutSeconds = 0.18f;
    public float toastHoldSeconds = 0.9f;
    public float coinFlySeconds = 0.3f;
    public float coinArcHeight = 30f;

    private readonly Queue<TransactionData> _queue = new Queue<TransactionData>();
    private Coroutine _playRoutine;

    void Awake()
    {
        Instance = this;
        if (panelRoot == null) panelRoot = gameObject;
        if (panelCanvasGroup == null) panelCanvasGroup = GetComponent<CanvasGroup>();
        if (panelCanvasGroup != null)
        {
            panelCanvasGroup.blocksRaycasts = false;
            panelCanvasGroup.interactable = false;
        }
    }

    public void ShowTransaction(
        Sprite payerSprite,
        string payerName,
        Sprite receiverSprite,
        string receiverName,
        int amount,
        string reason)
    {
        _queue.Enqueue(new TransactionData
        {
            payerSprite = payerSprite,
            payerName = payerName,
            receiverSprite = receiverSprite,
            receiverName = receiverName,
            amount = amount,
            reason = reason
        });

        if (_playRoutine == null)
            _playRoutine = StartCoroutine(PlayQueue());
    }

    private IEnumerator PlayQueue()
    {
        while (_queue.Count > 0)
        {
            TransactionData data = _queue.Dequeue();
            yield return StartCoroutine(PlayOnce(data));
        }
        _playRoutine = null;
    }

    private IEnumerator PlayOnce(TransactionData data)
    {
        if (panelRoot != null) panelRoot.SetActive(true);
        if (titleText != null) titleText.text = string.IsNullOrEmpty(data.reason) ? "TRANSACTION" : data.reason.ToUpperInvariant();

        ApplyAvatar(payerAvatar, data.payerSprite);
        ApplyAvatar(receiverAvatar, data.receiverSprite);
        if (payerNameText != null) payerNameText.text = data.payerName ?? string.Empty;
        if (receiverNameText != null) receiverNameText.text = data.receiverName ?? string.Empty;

        AlertToast debitToast = SpawnToast(payerToastAnchor);
        AlertToast creditToast = SpawnToast(receiverToastAnchor);

        if (debitToast != null)
            debitToast.Configure(false, "DEBIT ALERT", $"-₦{data.amount:N0}");
        if (creditToast != null)
            creditToast.Configure(true, "CREDIT ALERT", $"+₦{data.amount:N0}");

        if (debitToast != null)
            yield return StartCoroutine(AnimateToastIn(debitToast));

        yield return WaitUnscaled(0.1f);

        if (coinFlyIcon != null && payerToastAnchor != null && receiverToastAnchor != null)
            yield return StartCoroutine(AnimateCoin(payerToastAnchor, receiverToastAnchor));

        if (creditToast != null)
            yield return StartCoroutine(AnimateToastIn(creditToast));

        yield return WaitUnscaled(toastHoldSeconds);

        if (debitToast != null)
            yield return StartCoroutine(AnimateToastOut(debitToast));
        if (creditToast != null)
            yield return StartCoroutine(AnimateToastOut(creditToast));

        if (debitToast != null) Destroy(debitToast.gameObject);
        if (creditToast != null) Destroy(creditToast.gameObject);

        if (panelRoot != null) panelRoot.SetActive(false);
    }

    private void ApplyAvatar(Image img, Sprite sprite)
    {
        if (img == null) return;
        img.sprite = sprite;
        img.enabled = img.sprite != null;
        img.preserveAspect = true;
        img.color = Color.white;
    }

    private AlertToast SpawnToast(RectTransform anchor)
    {
        if (toastPrefab == null || anchor == null) return null;
        AlertToast toast = Instantiate(toastPrefab, anchor);
        RectTransform rt = toast.GetComponent<RectTransform>();
        if (rt != null)
        {
            rt.anchorMin = new Vector2(0.5f, 0.5f);
            rt.anchorMax = new Vector2(0.5f, 0.5f);
            rt.pivot = new Vector2(0.5f, 0.5f);
            rt.anchoredPosition = Vector2.zero;
            rt.localScale = Vector3.one * 0.9f;
        }
        if (toast.canvasGroup != null)
            toast.canvasGroup.alpha = 0f;
        return toast;
    }

    private IEnumerator AnimateToastIn(AlertToast toast)
    {
        if (toast == null || toast.canvasGroup == null) yield break;
        RectTransform rt = toast.GetComponent<RectTransform>();
        Vector2 start = rt != null ? rt.anchoredPosition : Vector2.zero;
        Vector2 target = start + new Vector2(0, 20f);
        float t = 0f;
        while (t < 1f)
        {
            t += Time.unscaledDeltaTime / Mathf.Max(0.05f, toastInSeconds);
            float u = Mathf.Clamp01(t);
            toast.canvasGroup.alpha = Mathf.Lerp(0f, 1f, u);
            if (rt != null)
            {
                rt.localScale = Vector3.one * Mathf.Lerp(0.9f, 1f, u);
                rt.anchoredPosition = Vector2.Lerp(start, target, u);
            }
            yield return null;
        }
    }

    private IEnumerator AnimateToastOut(AlertToast toast)
    {
        if (toast == null || toast.canvasGroup == null) yield break;
        RectTransform rt = toast.GetComponent<RectTransform>();
        Vector2 start = rt != null ? rt.anchoredPosition : Vector2.zero;
        Vector2 target = start + new Vector2(0, 12f);
        float t = 0f;
        while (t < 1f)
        {
            t += Time.unscaledDeltaTime / Mathf.Max(0.05f, toastOutSeconds);
            float u = Mathf.Clamp01(t);
            toast.canvasGroup.alpha = Mathf.Lerp(1f, 0f, u);
            if (rt != null)
            {
                rt.localScale = Vector3.one * Mathf.Lerp(1f, 0.95f, u);
                rt.anchoredPosition = Vector2.Lerp(start, target, u);
            }
            yield return null;
        }
    }

    private IEnumerator AnimateCoin(RectTransform from, RectTransform to)
    {
        if (coinFlyIcon == null) yield break;

#if DOTWEEN
        yield return StartCoroutine(AnimateMoneyFlowDotween(from, to));
        yield break;
#else
        coinFlyIcon.gameObject.SetActive(true);

        Vector3 start = coinFlyIcon.parent.InverseTransformPoint(from.TransformPoint(from.rect.center));
        Vector3 end = coinFlyIcon.parent.InverseTransformPoint(to.TransformPoint(to.rect.center));
        Vector3 control = (start + end) * 0.5f + Vector3.up * coinArcHeight;

        float t = 0f;
        while (t < 1f)
        {
            t += Time.unscaledDeltaTime / Mathf.Max(0.05f, coinFlySeconds);
            float u = Mathf.Clamp01(t);
            Vector3 pos =
                (1 - u) * (1 - u) * start +
                2 * (1 - u) * u * control +
                u * u * end;
            coinFlyIcon.anchoredPosition = pos;
            float wobble = 1f + Mathf.Sin(u * Mathf.PI) * 0.1f;
            coinFlyIcon.localScale = Vector3.one * wobble;
            yield return null;
        }

        coinFlyIcon.gameObject.SetActive(false);
#endif
    }

#if DOTWEEN
    private IEnumerator AnimateMoneyFlowDotween(RectTransform from, RectTransform to)
    {
        if (coinFlyIcon == null || from == null || to == null) yield break;

        Transform flowParent = coinFlyIcon.parent;
        if (flowParent == null) yield break;

        Vector2 startCenter = WorldToParentLocal(flowParent, from);
        Vector2 endCenter = WorldToParentLocal(flowParent, to);

        int count = Mathf.Clamp(moneyFlowCount, 1, 24);
        float duration = Mathf.Max(0.12f, coinFlySeconds);
        int completed = 0;

        List<RectTransform> spawned = new List<RectTransform>(count);

        // Keep template hidden; create temporary movers from it.
        coinFlyIcon.gameObject.SetActive(false);

        for (int i = 0; i < count; i++)
        {
            RectTransform mover = Instantiate(coinFlyIcon, flowParent);
            spawned.Add(mover);
            mover.gameObject.SetActive(true);
            mover.SetAsLastSibling();

            Vector2 spread = Random.insideUnitCircle * moneyFlowSpread;
            Vector2 start = startCenter + spread;
            Vector2 end = endCenter + Random.insideUnitCircle * Mathf.Min(8f, moneyFlowSpread * 0.3f);
            Vector2 control = (start + end) * 0.5f + Vector2.up * (coinArcHeight + Random.Range(-8f, 10f));

            mover.anchoredPosition = start;
            mover.localScale = Vector3.one * moneyFlowStartScale;
            mover.localRotation = Quaternion.Euler(0f, 0f, Random.Range(-10f, 10f));

            float delay = i * Mathf.Max(0f, moneyFlowStagger);
            Sequence seq = DOTween.Sequence();
            seq.SetUpdate(true);
            seq.SetDelay(delay);

            seq.Join(DOTween.To(
                () => 0f,
                u =>
                {
                    float oneMinus = 1f - u;
                    Vector2 pos = oneMinus * oneMinus * start + 2f * oneMinus * u * control + u * u * end;
                    mover.anchoredPosition = pos;
                    float wobble = 1f + Mathf.Sin(u * Mathf.PI) * 0.08f;
                    float scale = Mathf.Lerp(moneyFlowStartScale, moneyFlowEndScale, u) * wobble;
                    mover.localScale = Vector3.one * scale;
                },
                1f,
                duration).SetEase(Ease.OutCubic));

            seq.OnComplete(() =>
            {
                completed++;
            });
        }

        float maxTime = duration + (count * Mathf.Max(0f, moneyFlowStagger)) + 0.1f;
        float timer = 0f;
        while (completed < count && timer < maxTime)
        {
            timer += Time.unscaledDeltaTime;
            yield return null;
        }

        for (int i = 0; i < spawned.Count; i++)
        {
            if (spawned[i] != null)
                Destroy(spawned[i].gameObject);
        }
    }

    private static Vector2 WorldToParentLocal(Transform parent, RectTransform source)
    {
        if (parent == null || source == null) return Vector2.zero;
        Vector3 world = source.TransformPoint(source.rect.center);
        Vector3 local = parent.InverseTransformPoint(world);
        return new Vector2(local.x, local.y);
    }
#endif

    private static IEnumerator WaitUnscaled(float seconds)
    {
        float t = 0f;
        while (t < seconds)
        {
            t += Time.unscaledDeltaTime;
            yield return null;
        }
    }

    private struct TransactionData
    {
        public Sprite payerSprite;
        public string payerName;
        public Sprite receiverSprite;
        public string receiverName;
        public int amount;
        public string reason;
    }
}
