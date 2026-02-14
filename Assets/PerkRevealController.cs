using UnityEngine;
using UnityEngine.UIElements;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// Runs the perk card reveal sequence at game start: for each player, shows their perk card
/// (non-interactive), plays tilt + minimize animation toward their HUD profile, then continues.
/// TurnManager calls RunPerkRevealSequence(players, onComplete) and starts the first turn in onComplete.
/// </summary>
public class PerkRevealController : MonoBehaviour
{
    [Header("References")]
    [Tooltip("Assign the UIDocumentManager that owns the card panel.")]
    public UIDocumentManager uiManager;

    [Header("Animation")]
    [Tooltip("Duration of each tilt phase (left, back, right) in seconds.")]
    public float tiltPhaseDuration = 0.25f;
    [Tooltip("Duration of the minimize-toward-profile phase in seconds.")]
    public float minimizeDuration = 0.5f;
    [Tooltip("Tilt angle in degrees (left/right).")]
    public float tiltAngle = 15f;
    [Tooltip("Scale at end of minimize (e.g. 0.15 = 15% size).")]
    public float minimizeScale = 0.15f;
    [Tooltip("Delay between players in seconds.")]
    public float delayBetweenPlayers = 0.3f;

    void Awake()
    {
        if (uiManager == null)
            uiManager = FindFirstObjectByType<UIDocumentManager>();
    }

    /// <summary>Run the perk reveal for each player in order, then call onComplete (e.g. StartTurn).</summary>
    public void RunPerkRevealSequence(List<Player> players, System.Action onComplete)
    {
        if (players == null || players.Count == 0)
        {
            onComplete?.Invoke();
            return;
        }
        StartCoroutine(RevealSequenceRoutine(players, onComplete));
    }

    IEnumerator RevealSequenceRoutine(List<Player> players, System.Action onComplete)
    {
        for (int i = 0; i < players.Count; i++)
        {
            Player p = players[i];
            if (p == null || p.perkCards == null || p.perkCards.Count == 0)
                continue;

            PerkCardInstance perk = p.perkCards[0];
            if (perk == null)
                continue;

            if (uiManager == null)
            {
                Debug.LogWarning("[GameMechanics] Perk reveal skipped - uiManager is null.");
                continue;
            }

            float dirX = GetMinimizeOffsetX(p.playerIndex);
            string dirStr = dirX < 0 ? "left" : "right";
            Debug.Log($"[GameMechanics] Perk reveal: playerIndex={p.playerIndex} playerName={p.playerName} direction={dirStr}");

            uiManager.ShowCard(perk, interactive: false);
            yield return new WaitForSeconds(0.1f);

            VisualElement cardElement = uiManager.CardPanel;
            if (cardElement != null)
                yield return StartCoroutine(AnimateCardReveal(cardElement, p.playerIndex));

            uiManager.HideCardPanel();
            uiManager.PinPerkCardToProfile(p.playerIndex, perk, playWiggle: true);
            yield return new WaitForSeconds(delayBetweenPlayers);
        }

        onComplete?.Invoke();
    }

    IEnumerator AnimateCardReveal(VisualElement card, int playerIndex)
    {
        ResetCardTransform(card);

        float tiltRad = tiltAngle * Mathf.Deg2Rad;

        // Tilt left
        float elapsed = 0f;
        while (elapsed < tiltPhaseDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / tiltPhaseDuration;
            float angle = Mathf.Lerp(0, -tiltAngle, t);
            SetRotation(card, angle);
            yield return null;
        }
        SetRotation(card, -tiltAngle);

        // Tilt back to center
        elapsed = 0f;
        while (elapsed < tiltPhaseDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / tiltPhaseDuration;
            float angle = Mathf.Lerp(-tiltAngle, 0, t);
            SetRotation(card, angle);
            yield return null;
        }
        SetRotation(card, 0);

        // Tilt right
        elapsed = 0f;
        while (elapsed < tiltPhaseDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / tiltPhaseDuration;
            float angle = Mathf.Lerp(0, tiltAngle, t);
            SetRotation(card, angle);
            yield return null;
        }
        SetRotation(card, tiltAngle);

        // Minimize toward profile: translate down and scale down (direction can be tuned per playerIndex)
        float offsetX = GetMinimizeOffsetX(playerIndex);
        float offsetY = -400f;

        elapsed = 0f;
        float startTx = 0f, startTy = 0f, startScale = 1f;
        while (elapsed < minimizeDuration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / minimizeDuration;
            t = Mathf.SmoothStep(0f, 1f, t);
            float tx = Mathf.Lerp(startTx, offsetX, t);
            float ty = Mathf.Lerp(startTy, offsetY, t);
            float scale = Mathf.Lerp(startScale, minimizeScale, t);
            SetTranslate(card, tx, ty);
            SetScale(card, scale);
            yield return null;
        }
        SetTranslate(card, offsetX, offsetY);
        SetScale(card, minimizeScale);

        ResetCardTransform(card);
    }

    float GetMinimizeOffsetX(int playerIndex)
    {
        switch (playerIndex)
        {
            case 0: return -200f;
            case 1: return 200f;
            case 2: return -200f;
            case 3: return 200f;
            default: return 0f;
        }
    }

    void ResetCardTransform(VisualElement card)
    {
        if (card == null) return;
        SetTranslate(card, 0, 0);
        SetRotation(card, 0);
        SetScale(card, 1f);
    }

    void SetTranslate(VisualElement el, float x, float y)
    {
        if (el == null) return;
        el.style.translate = new StyleTranslate(new Translate(x, y, 0));
    }

    void SetRotation(VisualElement el, float degreesZ)
    {
        if (el == null) return;
        el.style.rotate = new StyleRotate(new Rotate(degreesZ));
    }

    void SetScale(VisualElement el, float scale)
    {
        if (el == null) return;
        el.style.scale = new StyleScale(new Scale(new Vector2(scale, scale)));
    }
}
