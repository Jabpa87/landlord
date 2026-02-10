# Hybrid Migration: uGUI Main HUD Setup

Option B (Hybrid): **Main HUD uses uGUI**; all other panels (Property, Jail, Card, Trade, Auction, etc.) stay in **UI Toolkit**.

---

## Quick setup (step-by-step)

### A. Create the Canvas

1. In the **Hierarchy**: right‑click → **UI** → **Canvas**. Rename it to **Main HUD (uGUI)**.
2. Select the Canvas. In the **Inspector**:
   - **Canvas**: Render Mode = **Screen Space - Overlay**.
   - **Canvas Scaler**: UI Scale Mode = **Scale With Screen Size**, Reference Resolution **1920 x 1080**, Screen Match Mode = **Match Width Or Height**, Match = **0.5**.
3. Under the Canvas, create an empty **Panel** (right‑click Canvas → **UI** → **Panel**). Name it **HUD Root**. Use this as the parent for all HUD elements, or put everything directly under the Canvas.

### B. Top bar (current player, wallet, supply)

1. Right‑click **HUD Root** (or Canvas) → **UI** → **Panel**. Name it **TopPanel**. Position it at the top (Anchor: top‑stretch, Pivot 0.5,1, set Height e.g. 120).
2. Under **TopPanel**:
   - **Text - TextMeshPro**: name **CurrentPlayerText**. Set placeholder text e.g. `Current Player: Player 1`. Assign this to **MainHUDController → Current Player Text**.
   - **Text - TextMeshPro**: name **WalletText**. Placeholder `Wallet: ₦2,000,000`. Assign to **Wallet Text**.
   - **Text - TextMeshPro**: name **BuildingSupplyText**. Placeholder `Houses: 32/32 | Hotels: 12/12`. Assign to **Building Supply Text**.
   - **Text - TextMeshPro**: name **DoublesIndicatorText**. Placeholder empty or `Consecutive Doubles: 0/3`. Can disable the GameObject by default. Assign to **Doubles Indicator Text**.

### C. Center (roll + dice text)

1. Under **HUD Root**: **UI** → **Button - TextMeshPro** (or **Button** then add TMP to label). Name **RollButton**, set label text **ROLL DICE**. Assign to **MainHUDController → Roll Button**.
2. **Text - TextMeshPro**: name **DiceText**, text `Dice: Roll to move`. Assign to **Dice Text**.

### D. Action buttons row

1. Under **HUD Root**: **UI** → **Panel**. Name **ActionButtonsRow**. Anchor bottom, stretch horizontally, set height ~70.
2. Under **ActionButtonsRow**, create five buttons (Button - TextMeshPro or Button):
   - **MenuButton** (text MENU) → assign to **Menu Button**.
   - **BuildButton** (text BUILD) → **Build Button**.
   - **SellButton** (text SELL) → **Sell Button**.
   - **TradeButton** (text TRADE) → **Trade Button**.
   - **EndTurnButton** (text END TURN) → **End Turn Button**.

### E. Live Feed (optional)

1. Right‑click **HUD Root** → **UI** → **Scroll View**. Name **NewsFeedScrollView**.
2. Open **NewsFeedScrollView** → find the child **Content** (under Viewport). Select **Content**.
3. Add a **Vertical Layout Group** to Content (Add Component) so feed lines stack. Optionally add **Content Size Fitter** (Vertical Fit = Preferred Size).
4. In **MainHUDController**, assign **News Feed Content** to this **Content** object’s Transform (drag the Content from Hierarchy).

### F. Game Log overlay (optional)

1. Under **HUD Root**: **UI** → **Panel**. Name **GameLogOverlay**. Make it full‑screen (anchor stretch all, left/right/top/bottom = 0). Set a semi‑transparent background. Assign to **MainHUDController → Game Log Overlay**.
2. Disable **GameLogOverlay** by default (checkbox in Inspector) so it’s hidden until “GAME LOG” is clicked.
3. Under **GameLogOverlay**:
   - **UI** → **Scroll View**. Name **GameLogScrollView**. Its child **Content** → assign to **MainHUDController → Game Log Content**.
   - **Button** “✕ Close” → assign to **Game Log Close Button**.
   - **Button** “Clear” → assign to **Game Log Clear Button**.
4. Somewhere visible on the HUD (e.g. near the feed): **Button** “GAME LOG” → assign to **Game Log Open Button**.

### G. Feed sound toggle (optional)

1. Under **HUD Root** (or near the feed): **UI** → **Toggle**. Name **FeedSoundToggle**, label “Sound”. Assign to **MainHUDController → Feed Sound Toggle**.

### H. Player rows (optional)

For each player 1–4:

1. **UI** → **Panel**. Name **Player1Row** (or Player2Row, etc.). Add two **Text - TextMeshPro** children: one for name, one for money.
2. Assign the Panel to **MainHUDController → Player 1 Row**, and the two TMPs to **Player 1 Name** and **Player 1 Money**. Repeat for Player 2–4.

### I. Add MainHUDController and wire UIDocumentManager

1. Select the **Canvas** (or **HUD Root**). **Add Component** → search **Main HUD Controller**. Add it.
2. In the **Main HUD Controller** component, drag from the Hierarchy every element you created into the matching slot (Current Player Text, Wallet Text, Roll Button, etc.). Leave optional slots empty if you didn’t create them.
3. Select the GameObject that has **UIDocumentManager** (e.g. your UI manager or game manager).
4. In **UIDocumentManager**, under **Hybrid: uGUI Main HUD**, set **Main HUD Controller** to the Canvas (or the object that has the MainHUDController component).
5. **Disable** the GameObject that has the **UIDocument** using **MainHUD.uxml** (the old UI Toolkit HUD) so only the uGUI HUD is visible. Or leave it; it’s ignored when **Main HUD Controller** is set.

### J. Test

Press Play. You should see the uGUI HUD. Roll, End Turn, and other buttons should work; current player, wallet, and supply should update. If you set up the feed and game log, “GAME LOG” opens the overlay and the live feed fills from NarrativeManager.

---

## 1. What’s in place

- **MainHUDBridge.cs** – `HUDButton` and `HUDLabel` bridge types used by both UI Toolkit and uGUI.
- **MainHUDController.cs** – uGUI HUD controller: assign your Canvas HUD elements in the Inspector; it builds the bridge for `UIDocumentManager`.
- **UIDocumentManager** – If `mainHUDController` is assigned, it uses the uGUI HUD and ignores `mainHUDDocument` for HUD. Panels stay UI Toolkit.
- **TurnManager, Player, BuildingSupplyManager** – Use the bridge API (`RollButton.Clicked`, `CurrentPlayerText.Text`, `DoublesIndicatorText.SetVisible`, etc.).
- **NarrativeManager** – If `UIDocumentManager.mainHUDController` is set and has `NewsFeedContent`, the Live Feed uses uGUI (adds TMP lines under that transform).
- **GameLogManager** – If `mainHUDController` is set and has Game Log refs, the Game Log overlay uses uGUI (show/hide panel, fill content with TMP lines).

---

## 2. Scene setup (uGUI Main HUD)

### Step 1: Create the uGUI HUD Canvas

1. **GameObject → UI → Canvas**. Name it e.g. `Main HUD (uGUI)`.
2. Set **Canvas**:
   - Render Mode: **Screen Space - Overlay** (or Camera if you prefer).
   - **Canvas Scaler**: Scale With Screen Size, Reference Resolution 1920×1080, Match 0.5.
3. Under the Canvas, create a hierarchy that matches what `MainHUDController` expects (names can differ; wiring is by Inspector).

### Step 2: Add HUD elements

Create (under the Canvas or a root panel):

- **Top area**
  - Current player: **Text (TMP)** → assign to `MainHUDController.currentPlayerText`.
  - Wallet: **Text (TMP)** → `walletText`.
  - Building supply: **Text (TMP)** → `buildingSupplyText`.
  - Doubles indicator: **Text (TMP)** → `doublesIndicatorText` (can be hidden by default).

- **Center**
  - **Button** “ROLL DICE” → `rollButton`.
  - Dice status: **Text (TMP)** → `diceText`.

- **Action buttons**
  - **Buttons**: Menu, Build, Sell, Trade, End Turn → `menuButton`, `buildButton`, `sellButton`, `tradeButton`, `endTurnButton`.
  - Optional: Mortgage, Redeem → `mortgageButton`, `redeemButton`.

- **Player rows (optional)**
  - For each player (1–4): a **GameObject** with child **Text (TMP)** for name and money. Assign the row GameObject to `player1Row`, `player2Row`, etc., and the name/money texts to `player1Name`, `player1Money`, etc.

- **Live Feed**
  - A **Scroll View** with a **Content** (empty). Assign the Content’s **Transform** to `MainHUDController.newsFeedContent`. New feed items will be added as children (TMP lines).

- **Game Log**
  - A **Panel** (GameObject) that can be shown/hidden → `gameLogOverlay`.
  - Inside it: a **Scroll View** with **Content** → assign Content’s Transform to `gameLogContent`.
  - **Buttons**: Open (e.g. “GAME LOG”), Close, Clear → `gameLogOpenButton`, `gameLogCloseButton`, `gameLogClearButton`.

- **Feed sound**
  - **Toggle** → `feedSoundToggle`.

### Step 3: MainHUDController

1. Add **MainHUDController** to the Canvas (or a root HUD GameObject).
2. In the Inspector, assign every field you use (buttons, TMP_Texts, `newsFeedContent`, `gameLogOverlay`, `gameLogContent`, Game Log buttons, `feedSoundToggle`, optional player rows and mortgage/redeem buttons).

### Step 4: UIDocumentManager

1. Select the GameObject that has **UIDocumentManager**.
2. In **Hybrid: uGUI Main HUD**, assign **Main HUD Controller** to your MainHUDController.
3. Leave **Main HUD Document** unassigned (or leave it; it will be ignored for HUD when `mainHUDController` is set).

### Step 5: Disable or remove the old UI Toolkit Main HUD

- Either disable the GameObject that has the **UIDocument** using **MainHUD.uxml**, or remove that UIDocument from the scene so only the uGUI HUD is visible.

---

## 3. Behaviour summary

| When `mainHUDController` is set | When `mainHUDController` is null |
|----------------------------------|-----------------------------------|
| Roll / End Turn / Build / Sell / Trade / Menu use uGUI buttons | Same controls come from UI Toolkit Main HUD (`mainHUDDocument`) |
| Current player, wallet, supply, dice, doubles use uGUI labels | Same from UI Toolkit |
| Live Feed adds lines under `newsFeedContent` (uGUI) | Feed uses UI Toolkit `NewsFeedScrollView` / container |
| Game Log uses `gameLogOverlay` / `gameLogContent` and uGUI buttons | Game Log uses UI Toolkit overlay and buttons |
| Property / Jail / Card / Trade / etc. still UI Toolkit | Same |

---

## 4. Optional: prefab

You can build the uGUI HUD once (Canvas + all elements + MainHUDController refs), save it as a **Prefab**, and instantiate it in each scene where you need the Main HUD. Then assign the instantiated prefab’s **MainHUDController** to **UIDocumentManager.mainHUDController**.

---

## 5. Troubleshooting

- **Buttons do nothing** – Ensure `UIDocumentManager.mainHUDController` is set and that **TurnManager** has a reference to **UIDocumentManager** (it connects Roll/End Turn/Build/Sell/Trade there).
- **Feed empty** – Ensure `MainHUDController.newsFeedContent` is the Content **Transform** of a Scroll View; NarrativeManager will add children there when using uGUI.
- **Game Log not opening** – Ensure `gameLogOverlay`, `gameLogContent`, and the three Game Log buttons are assigned on MainHUDController; GameLogManager binds to them when `mainHUDController` is set.
- **Player names/money not updating** – Assign `player1Row`/`player1Name`/`player1Money` (and 2–4) and optional row GameObjects so `UpdatePlayerInfo` / `HidePlayerSlot` can run.
