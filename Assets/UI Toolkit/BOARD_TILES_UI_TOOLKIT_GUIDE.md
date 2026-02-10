# Board Tiles with UI Toolkit: One Template × 40

Yes, you can use **one UI Toolkit tile design** and **multiply it 40 times** around the board. This guide explains how and how it affects the game.

---

## Is it possible?

**Yes.** In UI Toolkit you:

1. Create **one tile** as a **Visual Tree Asset** (UXML) – one “prefab” for a tile (name, price, color strip, etc.).
2. At runtime **clone that template 40 times** with `visualTreeAsset.CloneTree()` (or instantiate 40 `VisualElement`s from the same template).
3. Add all 40 clones to a **container** (e.g. a `VisualElement` with flex layout) and **arrange them** in a loop (e.g. Monopoly-style: bottom row, right column, top row, left column).

So: one tile design in UI Toolkit, 40 instances around the table – that part is straightforward.

---

## How will this affect the game?

It depends **how** you use those 40 UI tiles.

### Current setup (no change to logic)

- The **board** is **40 GameObjects** in the scene, each with:
  - **TileInfo** (tile type, property data, owner, etc.)
  - **BoardTileVisuals** (colors, labels)
  - **Transform** used for player token position
- **TurnManager** builds `boardPath` from those TileInfo objects (ordered by name, e.g. Tile_1 … Tile_40).
- **Player** movement uses `boardPoints` (those Transforms) and `currentIndex`; the token moves in the **scene** (world or screen space).

So today: **game logic** (dice, move, buy, rent, Chance, etc.) is entirely driven by **scene tiles** (TileInfo + Transform), not by UI.

---

### Option A – Minimal impact (recommended): UI tiles as a **visual mirror**

- **Keep** all 40 scene tiles (TileInfo + Transform) and **do not change** any game logic (movement, buying, rent, TurnManager, Player, etc.).
- **Add** a separate **UI Toolkit board**: one tile UXML template, clone 40 times, lay them out in a loop.
- **Bind** each UI tile to the **existing** TileInfo at the same index (same order as `BuildBoardPathFromScene()`: Tile_1 → index 0, etc.):
  - Fill labels (name, price) from `TileInfo` / `Property`.
  - On click, call existing `ShowTileDetails(tileInfo[i])` so the current Tile Details panel and game logic stay as they are.
- **Player tokens** can stay as they are (GameObjects moving in the scene). Optionally you could also show a small indicator on the UI tile for “current player here” by checking `player.currentIndex == i`.

**Effect on the game:**

- **No change** to: dice, movement, buy/skip, rent, Chance/Community Chest, auction, jail, etc.
- **Only addition:** a second “view” of the board in UI Toolkit that looks consistent and can show names/prices and open the same Tile Details on click.

This is the **safest** way to get “one tile template × 40” without breaking anything.

---

### Option B – Full UI Toolkit board (replace scene tiles)

- **Remove** the 40 tile GameObjects from the scene (or leave them hidden and unused).
- **Tile data** (type, property, owner, etc.) moves into a **data structure** (e.g. list of 40 entries, or ScriptableObject) keyed by index 0–39.
- **Movement** no longer uses `Transform[]`; it uses **tile index** only. The **token** is a UI element (or stays in scene but position is driven by the **index** and a lookup table of positions from the 40 UI tile positions).
- Every place that currently uses **TileInfo** (e.g. `GetCurrentTileInfo()`, `ShowTileDetails(tile)`, property.owner, mortgage, build) must be refactored to use **tile index + data** (and optionally a small wrapper that still exposes the same API).

**Effect on the game:**

- **Large refactor:** TurnManager, Player, UIDocumentManager, AuctionSystem, etc. must stop relying on scene TileInfo/Transform and use the new data + index + UI positions.
- **Benefit:** Single source of truth for the board in UI Toolkit; no duplicate scene tiles.

Only do this if you explicitly want to **replace** the current board with a fully UI Toolkit–driven board.

---

## Recommended path: Option A (one template × 40, no logic change)

1. **Create one tile UXML** (e.g. `BoardTileItem.uxml`):
   - Root: `VisualElement` (e.g. class `board-tile-item`).
   - Children: e.g. label for name, label for price, optional color strip or icon.
   - Give the root a **name** like `BoardTileRoot` so you can query it after clone.

2. **Create a runtime script** (e.g. `BoardTilesUIController`) on a GameObject that has a **UIDocument** for the board:
   - In `Start`/`Awake`: load the tile VisualTreeAsset, get the ordered list of **TileInfo** (same order as `BuildBoardPathFromScene()`: find all `TileInfo`, sort by `ExtractTileIndex(gameObject.name)`).
   - For `i = 0..39`: clone the tile with `template.CloneTree()`, add to your container, **bind** to `tiles[i]` (set labels from `tiles[i].tileType` / `tiles[i].property`, register click to call `ShowTileDetails(tiles[i])`).
   - Layout the container so the 40 elements sit in a loop (e.g. flex row for bottom, then column for right, then row for top, then column for left – or a single flex-wrap grid if you prefer).

3. **Keep** TurnManager, Player, and all existing TileInfo/boardPath logic **unchanged**. The UI board is only a **visual layer** that mirrors the 40 scene tiles and forwards clicks to the existing Tile Details.

4. **Optional:** Add a second UIDocument or overlay for the **player token** on the UI board (e.g. a small dot per player at `tiles[player.currentIndex]`) if you want tokens to move on the UI layout; the actual game state still uses `player.currentIndex` and the scene for movement if you don’t change that.

---

## Summary

| Approach | One template × 40? | Change to game logic? |
|----------|--------------------|------------------------|
| **A – UI as mirror** | Yes | No – scene tiles and TurnManager/Player stay as they are. |
| **B – Full UI board** | Yes | Yes – big refactor; tiles become data + UI only. |

So: **yes, one UI Toolkit “prefab” tile multiplied 40 times around the table is possible.** To avoid breaking the game, use **Option A**: one tile UXML, 40 clones, layout in a loop, bind to existing TileInfo by index and keep all current game behaviour.
