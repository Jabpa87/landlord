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
            bool hasCardPanelPath =
                uiManager.cardPanelUGUI != null ||
                uiManager.cardPanelDocument != null ||
                uiManager.CardPanel != null;
            if (!hasCardPanelPath)
                Debug.LogWarning("[GameMechanics] Card panel path missing (uGUI + UITK). Chance/Community popup may not show.");
            else
                Debug.Log("[GameMechanics] OK: Card panel path present.");

            bool hasChanceFallback =
                uiManager.chanceFallbackIcon != null ||
                (uiManager.cardIconCatalog != null && uiManager.cardIconCatalog.GetSprite(CardPanelMode.Chance) != null);
            if (!hasChanceFallback)
                Debug.LogWarning("[GameMechanics] Chance icon fallback missing. Chance cards may show empty icon.");
            else
                Debug.Log("[GameMechanics] OK: Chance icon fallback present.");
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

        // Auction wiring
        var auctionSystem = FindFirstObjectByType<AuctionSystem>();
        if (auctionSystem == null)
        {
            Debug.LogWarning("[GameMechanics] AuctionSystem not found.");
        }
        else
        {
            bool usingV2 = auctionSystem.useUGUIAuctionPanel && auctionSystem.useNewUGUIAuctionModule;
            if (!usingV2)
            {
                Debug.LogWarning("[GameMechanics] Auction is not set to new uGUI v2 module.");
            }
            else if (auctionSystem.auctionPanelUGUIV2 == null && auctionSystem.auctionPanelUGUIV2Root == null)
            {
                Debug.LogWarning("[GameMechanics] Auction v2 controller/root is unassigned. Auction may fail to open.");
            }
            else
            {
                Debug.Log("[GameMechanics] OK: Auction v2 path appears wired.");
            }
        }

        Debug.Log("[GameMechanics] ========== End startup validation ==========");
    }
}
