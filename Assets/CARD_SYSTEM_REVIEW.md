# Card System Review (Chance / Community Chest)

## What the current system does
- Card data lives in `CardSystem.cs` as a `Card` model with four effect types: `Money`, `Movement`, `PropertyRepair`, `Special`.
- Decks can be loaded from ScriptableObject assets (`CardDeckData`) or fall back to built‑in defaults.
- Draw logic: shuffle on start, discard pile, reshuffle discard into deck; "Get out of Jail Free" stays with player (not discarded).
- Player flow:
  - `Player.HandleChanceEvent()` and `Player.HandleCommunityChestEvent()` draw and start `HandleCard()`.
  - Human: shows a **UI Toolkit** card panel via `UIDocumentManager.ShowCard(...)`, waits for “Continue”.
  - AI: skips UI and applies effects after a short delay.
  - Effects are applied in `ApplyCardEffect()` and include movement and money.

Files:
- `Assets/CardSystem.cs`
- `Assets/Player.cs`
- `Assets/UI Toolkit/Scripts/UIDocumentManager.cs`

## Differences from classic Monopoly
- **Custom economy:** currency is ₦ with tuned amounts (e.g., ₦50k/₦150k). This is intended and consistent.
- **Movement targeting uses names and tile types:**
  - `targetPropertyName` is used for “Advance to X”.
  - “Nearest Utility/Transportation” uses a `TileType.Property` check plus string inspection (`title.Contains(...)`).
  - This is functional but more brittle than classic Monopoly rules where utilities/railroads are distinct types.
- **Pay/collect from each player:** implemented using string checks in `ApplyMoneyCard()` (title contains “each player”).
- **Card UI is not 1:1 with Monopoly** (by design): you show a generic card panel with header + description, not a replica layout.

## UI implementation today
- Card display is **UI Toolkit only** (UXML + USS):
  - `UIDocumentManager.cardPanelDocument` with `CardPanel.uxml`.
  - `ShowCard()` wires the “Continue” button and optionally an icon from `CardIconCatalog`.
  - `ShowCardPanel()` ensures sort order, visibility, and button handlers.
- There is **no UGUI fallback** for the card panel (unlike Property/Tile panels which can switch to UGUI).

## Is UI Toolkit (UXML) OK for cards?
Yes. The card UI is simple, infrequent, and only needs one primary action (“Continue”). UI Toolkit is a good fit:
- Layout is stable (fixed card panel), not heavy animation.
- You already use UI Toolkit for other panels (Trade, Game Over, etc.).
- The card system is already integrated with UI Toolkit and verified with visibility checks.

## Should we switch to UGUI?
Only if you need **heavy animation**, **camera‑based effects**, or **tight integration** with your uGUI HUD. Otherwise, switching introduces risk and rework:
- You’d need a new uGUI card prefab and to add `ShowCardUGUI()/HideCardUGUI()` pathways.
- You’d need to rewire `Player.ShowCardUI()` and `UIDocumentManager.ShowCard()` to select UGUI vs UXML, similar to `useUGUIPropertyPanel`.
- You’d also need to update sorting / canvas stacking with the Main HUD canvas.

## Recommendation
**Keep UI Toolkit for cards** and only add a UGUI fallback if you have a specific, proven need (like animated 3D overlays or special shader effects). This keeps the card system stable and avoids new bugs.

If you still want a UGUI path, I recommend a phased approach:
1) Create a simple uGUI CardPanel prefab (image + title + description + Continue button).
2) Add `public bool useUGUICardPanel` and a reference to the prefab in `UIDocumentManager`.
3) In `ShowCard(...)`, route to UGUI only if `useUGUICardPanel` is true and prefab is assigned.
4) Keep UI Toolkit as the default until the UGUI panel is validated.

## Small logic improvements to consider later (optional)
- Replace title string checks (“Nearest Utility/Transportation”) with explicit card flags, or use `CardType.Movement` + sub‑type enum for more robust logic.
- For pay/collect‑from‑all cards, use a dedicated flag instead of searching the title text.
- Consider splitting `Property` tile type into `Utility` and `Transportation` if you want Monopoly‑accurate targeting.

