# Gameplay HUD Layout Redesign Plan

**Goal:** Rearrange the **button row** and **player profile section** to match the reference image. Keep all existing colors, styles, and button assets; change **only layout**.

**Reference layout:**
- **Top:** One horizontal row of 6 buttons (Menu, Build, Sell, Mortgage, Redeem, Trade) on a lighter band.
- **Below:** One horizontal row of player profile cards — **2, 3, or 4** cards depending on player count (evenly spaced).

**Dice / roll area:** There is no dice or roll visual yet. Use a **“Roll Dice” button** in the place where the dice will eventually be added (same spot, same behavior as the existing Roll button).

**Out of scope:** “Make a decision”, End Turn, news feed, and other HUD elements stay as-is.

---

## 1. Current State

### 1.1 Files involved
- **`Assets/UI Toolkit/UXML/GameplayHUD.uxml`** — structure of the HUD.
- **`Assets/UI Toolkit/USS/main-styles.uss`** — layout and look of gameplay HUD (e.g. `.gameplay-hud-*`).
- **`Assets/UI Toolkit/Scripts/UIDocumentManager.cs`** — wires buttons and player slots by name; shows/hides Player1–4 by player count.

### 1.2 Current layout
- **Player panels:** Four panels (`Player1Info` … `Player4Info`) with **absolute positioning** in corners (tl, tr, bl, br) via classes `gameplay-hud-player-tl`, `-tr`, `-bl`, `-br`.
- **Buttons:** Only **Manage** and **Trade** in `ActionRow1` inside `GameplayHUDCenter`. Code expects **Menu, Build, Sell, Mortgage, Redeem, Trade**; missing ones are currently `null`.

### 1.3 What stays the same
- All button **assets** (e.g. `button.png`, `Gold Button.png`), **colors**, and **classes** (e.g. `gameplay-hud-action-btn`, `gameplay-hud-btn-green` / `-red`).
- All player panel **content** (avatar, name, character name, money) and **styling** (borders, background, fonts).
- Logic in **UIDocumentManager** (show/hide by player count, click to open profile, UpdatePlayerInfo).

---

## 2. Button Layout Changes

### 2.1 UXML (`GameplayHUD.uxml`)

- Add a **top bar** container directly under `MainHUD` (or at the top of the main HUD content), e.g.:
  - Name: `GameplayHUDButtonBar`
  - Class: `gameplay-hud-button-bar`
  - Contains a **single horizontal row** of 6 buttons in this order:
    1. **Menu** — `name="MenuButton"`
    2. **Build** — `name="BuildButton"`
    3. **Sell** — `name="SellButton"`
    4. **Mortgage** — `name="MortgageButton"`
    5. **Redeem** — `name="RedeemButton"`
    6. **Trade** — `name="TradeButton"`
- Reuse existing button styling (same classes and background-image as current action buttons). Use the same `gameplay-hud-action-btn` and green/red where appropriate (e.g. Trade red, others green if that matches your reference).
- **Do not remove** Roll, End Turn, or other center controls; only add/move the 6 buttons into this bar. Optionally keep `ManagePropertiesButton` in the center or add a 7th “Manage” in the bar if the reference includes it; if the reference shows only 6, use the list above.
- Remove or **do not duplicate** the old `ActionRow1` usage for these 6 so the only place they live is the new top bar.

### 2.2 USS (`main-styles.uss`)

- Add **`.gameplay-hud-button-bar`**:
  - `flex-direction: row`
  - `align-items: center`
  - `justify-content: center` (or space-evenly)
  - Full width, padding (e.g. 12–16px), gap between buttons
  - Optional: light background (e.g. lighter blue/white band) to match reference
- Keep **`.gameplay-hud-action-btn`** and **`.gameplay-hud-btn-green`** / **`.gameplay-hud-btn-red`** unchanged so button look stays the same.

---

## 3. Player Profile Layout Changes

### 3.1 UXML (`GameplayHUD.uxml`)

- Add a **profile row** container, e.g.:
  - Name: `GameplayHUDProfilesRow`
  - Class: `gameplay-hud-profiles-row`
- Place **Player1Info, Player2Info, Player3Info, Player4Info** **inside** this container **in order** (left to right).
- Remove the **corner positioning** from each panel (no `left`, `right`, `top`, `bottom` on the elements; no reliance on `gameplay-hud-player-tl` / `-tr` / `-bl` / `-br` for layout). Either:
  - Remove those classes from the player panels, or
  - Override in USS so that inside `.gameplay-hud-profiles-row` the panels use flex flow instead of absolute position.
- Keep each panel’s **internal structure** (avatar, name, character, money, More button, indicators) and **class** `gameplay-hud-player-panel` so existing styles and code still apply.

### 3.2 USS (`main-styles.uss`)

- Add **`.gameplay-hud-profiles-row`**:
  - `flex-direction: row`
  - `align-items: stretch` (or center)
  - `justify-content: center` or `space-between` or `space-evenly`
  - `flex-wrap: nowrap`
  - Gap between cards (e.g. 12–16px)
  - Full width, padding as needed
- Adjust **`.gameplay-hud-player-panel`** when it’s a **child of** `.gameplay-hud-profiles-row`:
  - Set `position: relative` (or default) and **no** `left/right/top/bottom` so they sit in the flex row.
  - Give a **flex basis** or **width** (e.g. `flex: 1 1 0` with `min-width` or fixed width) so 2/3/4 cards share space evenly. Example: `flex: 1 1 0; min-width: 180px; max-width: 280px;`
- **Player count:** Code already shows only the first N panels (Player1…Player4) and hides the rest with `display: None`. So with 2 players only the first two panels are visible; with 3, the first three; with 4, all four. No code change needed; just ensure the row uses flex so when some are hidden, the visible ones still lay out in a row.

---

## 4. Dice / Roll Area (Placeholder Until Dice Visual Exists)

### 4.1 Requirement
- There is **no dice graphic or roll animation** yet.
- The HUD still needs a way for the player to **roll the dice**.
- **Solution:** Keep a **“Roll Dice” button** in the **same place** where the dice will later be shown (e.g. center or lower-center of the HUD, where the reference shows the two dice).

### 4.2 Implementation
- **UXML:** In the area reserved for the dice (e.g. inside `GameplayHUDCenter` or a dedicated “dice area” container), place a single button:
  - `name="RollButton"` (so `UIDocumentManager` and `TurnManager` keep wiring it as today).
  - Text: **“Roll Dice”** (or keep existing “Roll Dice” label).
- **Layout:** Position this button **where the dice will eventually go** (e.g. centered in the dice region). When you add dice visuals later, you can replace or shrink the button (e.g. show dice + a smaller “Roll” control).
- **Behavior:** No code change: `RollButton` is already wired to `TurnManager.RollDice`. Just ensure the button remains in the layout and is visible in the dice area.
- **USS:** Reuse existing `.gameplay-hud-roll-btn` (or equivalent) so the button matches current style; optionally give the dice-area container a min-height so the region is clearly reserved for future dice.

### 4.3 Later (when adding dice)
- Add dice visuals in this same area; keep the Roll button (or a smaller “Roll” next to the dice) so the click-to-roll flow stays the same.

---

## 5. Order of Elements in `MainHUD`

Suggested order (top to bottom) so it matches the reference:

1. **GameplayHUDButtonBar** — 6 buttons in one row.
2. **GameplayHUDProfilesRow** — Player1Info … Player4Info in one row (visibility by player count unchanged).
3. **Dice / roll area** — **Roll Dice** button in the spot where dice will go (no dice graphic yet); keep `name="RollButton"` and existing wiring.
4. **GameplayHUDCenter** (or equivalent) — End Turn and any other center controls (unchanged).
5. Any other existing blocks (e.g. news feed) unchanged.

Player panels that are currently absolutely positioned in corners must be **moved** into `GameplayHUDProfilesRow` and taken out of the corner positions.

---

## 6. Implementation Checklist

- [ ] **UXML:** Add `GameplayHUDButtonBar` with 6 buttons (Menu, Build, Sell, Mortgage, Redeem, Trade); reuse existing button classes/assets.
- [ ] **UXML:** Add `GameplayHUDProfilesRow` and move `Player1Info` … `Player4Info` inside it; remove corner-position classes or override them.
- [ ] **UXML:** Ensure `ManagePropertiesButton` is still present (e.g. in center or as “Manage” in bar if desired); UIDocumentManager already uses it.
- [ ] **USS:** Add `.gameplay-hud-button-bar` (row, padding, gap, optional light band).
- [ ] **USS:** Add `.gameplay-hud-profiles-row` (row, gap, flex).
- [ ] **USS:** Style player panels inside the profile row (no absolute positioning; flex basis/width for 2/3/4 cards).
- [ ] **Test:** 2, 3, and 4 players — only 2/3/4 profile cards visible and laid out in one row.
- [ ] **Test:** All 6 buttons clickable and wired (Menu, Build, Sell, Mortgage, Redeem, Trade) in UIDocumentManager.
- [ ] **UXML:** Ensure **Roll Dice** button (`name="RollButton"`) is in the **dice area** (where dice will be added later); keep existing style and wiring.
- [ ] **Test:** Roll Dice button works (triggers roll) and is visible in the reserved dice spot.

---

## 7. Optional: Icons on Buttons

The reference shows icons (e.g. hamburger for Menu, house for Build). This plan keeps **only layout** changes; icons can be added later by placing an image or icon element inside each button and reusing existing icon assets without changing the layout plan.

---

## 8. Summary

| Area              | Change                                                                 | Do not change                          |
|-------------------|------------------------------------------------------------------------|----------------------------------------|
| **Buttons**       | One top row: Menu, Build, Sell, Mortgage, Redeem, Trade               | Colors, classes, assets, button style |
| **Profiles**      | One row below buttons; 2/3/4 cards by player count                    | Card content, colors, borders, fonts  |
| **Dice area**     | Roll Dice button in place where dice will go (no dice visual yet)     | RollButton name, wiring, style        |
| **Rest of HUD**   | Leave as-is                                                            | End Turn, feed, etc.                  |

This keeps your existing visuals and behavior and only rearranges the button bar and profile section to match the reference layout.
