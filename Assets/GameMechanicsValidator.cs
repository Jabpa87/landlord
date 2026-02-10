using UnityEngine;
using System.Collections;

/// <summary>
/// Runs startup and optional in-game checks so we can see if core mechanics are ready.
/// Logs [GameMechanics] for easy filtering. Add to a GameObject in GameScene (e.g. on TurnManager or a dedicated validator object).
/// </summary>
public class GameMechanicsValidator : MonoBehaviour
{
    [Tooltip("Delay before running startup checks (so other managers are ready).")]
    public float startupCheckDelay = 0.5f;

    void Start()
    {
        StartCoroutine(RunStartupChecks());
    }

    IEnumerator RunStartupChecks()
    {
        yield return new WaitForSeconds(startupCheckDelay);

        Debug.Log("[GameMechanics] ========== Startup validation ==========");

        // UIDocumentManager
        var uiManager = FindFirstObjectByType<UIDocumentManager>();
        if (uiManager == null)
            Debug.LogError("[GameMechanics] FAIL: UIDocumentManager not found.");
        else
            Debug.Log("[GameMechanics] OK: UIDocumentManager found.");

        // Tile details panel (for tile click)
        if (uiManager != null)
        {
            bool tilePanelAssigned = uiManager.tileDetailsPanelDocument != null;
            if (!tilePanelAssigned)
                Debug.LogError("[GameMechanics] FAIL: Tile Details Panel Document not assigned on UIDocumentManager - tile click may not show panel.");
            else
                Debug.Log("[GameMechanics] OK: Tile Details Panel Document assigned.");
        }

        // At least one TileClickHandler with uiManager
        var handlers = FindObjectsByType<TileClickHandler>(FindObjectsSortMode.None);
        int withUi = 0;
        foreach (var h in handlers)
        {
            if (h != null && h.uiManager != null) withUi++;
        }
        if (handlers.Length == 0)
            Debug.LogWarning("[GameMechanics] No TileClickHandler found - tile click may not work.");
        else if (withUi == 0)
            Debug.LogWarning("[GameMechanics] TileClickHandlers exist but none have uiManager - tile details may not show.");
        else
            Debug.Log($"[GameMechanics] OK: {withUi}/{handlers.Length} TileClickHandlers have uiManager.");

        // Card system (Chance/Community Chest)
        var cardSystem = FindFirstObjectByType<CardSystem>();
        if (cardSystem == null)
            Debug.LogWarning("[GameMechanics] CardSystem not found - Chance/Community Chest may use fallback only.");
        else
            Debug.Log("[GameMechanics] OK: CardSystem found.");

        // Card panel on UIDocumentManager (for showing Chance/Community cards)
        if (uiManager != null)
        {
            bool cardPanelRef = uiManager.CardPanel != null;
            if (!cardPanelRef)
                Debug.LogWarning("[GameMechanics] Card panel reference may be missing - Chance/Community card popup may not show.");
            else
                Debug.Log("[GameMechanics] OK: Card panel reference present.");
        }

        // Perk reveal
        var perkReveal = FindFirstObjectByType<PerkRevealController>();
        if (perkReveal == null)
            Debug.Log("[GameMechanics] PerkRevealController not found (optional).");
        else
            Debug.Log("[GameMechanics] OK: PerkRevealController found.");

        // TurnManager
        var turnManager = FindFirstObjectByType<TurnManager>();
        if (turnManager == null)
            Debug.LogError("[GameMechanics] FAIL: TurnManager not found.");
        else
            Debug.Log("[GameMechanics] OK: TurnManager found.");

        Debug.Log("[GameMechanics] ========== End startup validation ==========");
    }
}
