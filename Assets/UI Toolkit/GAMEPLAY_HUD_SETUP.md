# Gameplay HUD (UI Toolkit) – Setup

The **Gameplay HUD** is a new main HUD built in UI Toolkit: four player panels in the corners (avatar, name, title, money, More button, indicator bars) and a central cluster of action buttons (Roll Dice, Build, Trade, Sell, End Turn, Menu, Mortgage, Redeem).

## Replacing the uGUI Main HUD with this HUD

Do this in your **Game** scene (the scene where you play the board game).

### Step 1: Use the new HUD UXML

- Find the GameObject that has **UIDocumentManager** (often on a "UI Manager" or "Game UI" object).
- In the **UIDocumentManager** component:
  - **Main HUD Document:** Assign a **UIDocument** that will show the new HUD.
    - If you don’t have one yet: create an empty GameObject, add **UI Document** (Add Component → UI Toolkit → UI Document), then assign **Source Asset** to **GameplayHUD** (`Assets/UI Toolkit/UXML/GameplayHUD.uxml`). Assign your **Panel Settings** if the component needs it.
  - Assign that same UIDocument to **Main HUD Document** on UIDocumentManager.

### Step 2: Switch from uGUI to UI Toolkit

- Still on **UIDocumentManager**:
  - Set **Main HUD Controller** to **None** (clear the reference).
- As long as **Main HUD Controller** is empty, the game uses **Main HUD Document** (your new Gameplay HUD). If **Main HUD Controller** is assigned, the game uses the old uGUI Canvas instead.

### Step 3: Hide the old uGUI HUD (optional)

- In the Hierarchy, find the Canvas or GameObject that had the old uGUI Main HUD (the one that had **MainHUDController** on it).
- Either:
  - **Disable** that GameObject (uncheck the checkbox next to its name), or
  - **Remove** it if you no longer need it.
- This stops the old HUD from drawing on top of the new one.

That’s it. No code changes are required; the same element names (RollButton, EndTurnButton, WalletText, Player1Info, etc.) are used.

## Files

- **UXML:** `UI Toolkit/UXML/GameplayHUD.uxml`
- **Styles:** `UI Toolkit/USS/main-styles.uss` (classes: `gameplay-hud-*`)

## Layout

- **Four corners:** Player panels (avatar, name in gold, character/title in white, money in white, “More” button, three indicator bars).
- **Center:** Current player, dice, wallet, **Roll Dice**, Build / Trade / Sell, **End Turn**, Menu / Mortgage / Redeem, building supply and doubles labels.

## Optional

- **Feed sound toggle:** The current UXML does not include `FeedSoundToggle`. To add it, add a `Toggle` with `name="FeedSoundToggle"` (e.g. in a top-right corner); the code will bind it if present.
- **Gold Button sprite:** To use `Sprites/Gold Button.png` on Roll/End Turn/Build/etc., you can add a USS rule or inline style that sets `background-image` to that asset; the current layout uses solid green/red and gold borders from USS.
