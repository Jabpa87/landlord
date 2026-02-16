# Bootstrap Scene — Step-by-Step Setup

The **Bootstrap** scene is the game root. It loads the **Board** and **UI** scenes additively and holds all game logic (TurnManager, players, state, input gate). When you press Play or load from the Main Menu, this scene runs first, then Board and UI are added so you get one combined game view.

---

## Step 1: Add Scenes to Build Settings

1. **File → Build Settings** (or **Build Profiles**).
2. **Add Open Scenes** (or drag in):
   - **BootstrapScene**
   - **BoardScene**
   - **UIScene_v2**
3. Ensure **BootstrapScene** is at **index 0** (first scene to load when the game starts). If you use Main Menu first, put MainMenu at 0 and Bootstrap at 1 (and have Main Menu load Bootstrap by name when starting the game).
4. **Save** the build list.

---

## Step 2: Create the Bootstrap Root Object

1. Open **BootstrapScene**.
2. Create an empty GameObject: **Right-click in Hierarchy → Create Empty**.
3. Name it **GameRoot** (or **Bootstrap**).
4. This object will hold the loader and can be the parent for game-logic objects, or you can keep everything at root—your choice.

---

## Step 3: Add the Scene Loader

1. Select **GameRoot** (or the object you use as root).
2. **Add Component** → search **Bootstrap Loader** → add **BootstrapLoader**.
3. In the Inspector:
   - **Board Scene Name**: `BoardScene` (must match the scene name in Build Settings).
   - **UI Scene Name**: `UIScene_v2` (must match).
4. Leave **Unload Bootstrap After Load** unchecked.

When the scene runs, **BootstrapLoader** loads Board and UI additively in **Awake** (it runs early), so by the time **TurnManager** and others run **Start()**, the Board and UI are already in the hierarchy.

---

## Step 4: Add Game State and Input (GameLogic)

1. Create an empty GameObject under or next to **GameRoot**, name it **GameLogic** (optional but clear).
2. Add these components to **GameLogic** (or to **GameRoot**):
   - **GameStateMachine** — single source of truth for game state.
   - **InputGate** — decides if input is allowed (blocks human input during AI turn).
   - **GameController** — the only thing that runs game actions; UI/board send requests here.
3. Leave references empty where possible; they **auto-find** each other and **TurnManager**:
   - **InputGate**: State Machine, Turn Manager (optional assign).
   - **GameController**: State Machine, Input Gate, Turn Manager (optional assign).
   - **TurnManager** (added below) will auto-find **GameStateMachine**.

---

## Step 5: Add TurnManager

1. Create an empty GameObject (e.g. **TurnManager** or under **GameRoot**).
2. **Add Component** → **Turn Manager**.
3. Assign in the Inspector:
   - **Character Database**: your CharacterDatabase asset (e.g. from Assets/Data or similar).
   - **Board Path**: leave empty; it will be built at runtime from **TileInfo** in the Board scene.
   - **State Machine**: drag the GameObject that has **GameStateMachine** (or leave empty to auto-find).
   - **UI Manager**: leave empty; **UIDocumentManager** will be found in the UI scene after it loads.
   - **Dice Roller**: optional; assign if you have a DiceRoller in this scene, or leave empty to find in Board/UI.
   - **Auction System**, **Trade System**, **Building Supply Manager**: add these components (see Step 7) and assign them here, or leave empty to auto-find.

**Players**: leave **Players** list empty. **GameSceneLoader** (next step) will create players from the Main Menu settings or defaults.

---

## Step 6: Add GameSceneLoader (Apply Main Menu Settings)

1. Select the same object that has **TurnManager** (or create a small “GameSetup” object).
2. **Add Component** → **Game Scene Loader**.
3. Assign:
   - **Turn Manager**: drag the **TurnManager** component’s GameObject.
   - **Player Prefab**: your **Player** prefab (the token/avatar prefab). If empty, the loader creates simple player objects.

When the game is started from the **Main Menu**, **MainMenuManager.ApplyGameSettings** runs from **GameSceneLoader** and fills **TurnManager.players** and calls **InitializePlayers()**. If you run Bootstrap without the Main Menu, the loader applies default money and still calls **InitializePlayers()** if there are any players.

---

## Step 7: Optional Systems (Same Scene as TurnManager)

Add these to **GameRoot** or **GameLogic** so they are in the same scene as **TurnManager** and can find it (or assign manually):

| Component | Purpose |
|-----------|--------|
| **AuctionSystem** | Property auctions. Assign **Turn Manager** and **Auction Panel Document** (the UIDocument in the UI scene that shows AuctionUi.uxml—assign at runtime or via a reference that points to the UI scene’s document). |
| **TradeSystem** | Player trading. Assign **Turn Manager** and **UI Manager** (or leave to find). |
| **BuildingSupplyManager** | House/hotel supply. Assign **Turn Manager** if needed. |
| **DiceRoller** | Dice animation. Can live here or in Board scene; **TurnManager** can reference or find it. |

**AuctionSystem** needs the **Auction Panel** UIDocument. That document lives in the **UI scene**. After the UI scene is loaded, you can assign it in the Inspector if you use a cross-scene reference, or ensure **AuctionSystem** finds it at runtime (e.g. **FindFirstObjectByType** for a document with AuctionUi). If your current design expects AuctionSystem in the same scene as the panel, you can leave AuctionSystem in the UI scene and assign **TurnManager** there; either way, **TurnManager** and **AuctionSystem** need to reference each other.

---

## Step 8: Main Menu → Load Bootstrap (Not GameScene)

So that “Start Game” loads the new flow:

1. Open **MainMenuManager** (or the script that loads the game scene).
2. Set **Game Scene Name** (or equivalent) to **`BootstrapScene`** instead of `GameScene` (e.g. in Inspector or in code: `gameSceneName = "BootstrapScene";`).
3. Ensure **BootstrapScene** is in Build Settings (Step 1).

Then when the player clicks Start Game, Unity loads **BootstrapScene** (single). **BootstrapLoader** runs and loads **BoardScene** and **UIScene_v2** additively, so you get Bootstrap + Board + UI in one play session.

---

## Step 9: Build Settings Order (Two Options)

**Option A — Main Menu first (recommended)**  
- [0] MainMenu  
- [1] BootstrapScene  
- [2] BoardScene  
- [3] UIScene_v2  

Main Menu loads; on Start Game it loads **BootstrapScene** (single). Bootstrap then loads Board + UI additively.

**Option B — Bootstrap first (no main menu in build)**  
- [0] BootstrapScene  
- [1] BoardScene  
- [2] UIScene_v2  

Game starts in Bootstrap; Bootstrap loads Board + UI additively. Use for testing or a build that skips the main menu.

---

## Common issues and fixes

- **"Scene 'GameScene' couldn't be loaded"** — Add **BootstrapScene** (and BoardScene, UIScene_v2) to **File → Build Profiles** / Build Settings. MainMenuManager now loads **BootstrapScene** by default, not GameScene.
- **Game skips Main Menu** — Put **MainMenu** at **index 0** in Build Settings so the app starts at the menu; put BootstrapScene at 1.
- **Board too big / wrong aspect** — In Board scene add **ResponsiveBoardCamera** to the camera and set **Reference Board Width/Height** to your board world size (e.g. 12×12). See **BOARD_RESPONSIVE_SETUP_GUIDE.md**. For a square view use a square Game view or reference resolution.
- **Auction panel visible at start** — AuctionUi.uxml root now has **display: none** by default so the panel stays hidden until an auction starts.
- **Need space for the board** — In the UI scene adjust Gameplay HUD layout (move/shrink buttons) and/or Board camera so the board has room.

---

## Step 10: Quick Checklist

- [ ] **BootstrapScene**, **BoardScene**, **UIScene_v2** are in Build Settings.
- [ ] **GameRoot** (or root object) has **BootstrapLoader** with correct **boardSceneName** and **uiSceneName**.
- [ ] **GameStateMachine**, **InputGate**, **GameController** are in the scene (e.g. on **GameLogic**).
- [ ] **TurnManager** is in the scene; **State Machine** assigned or auto-found; **UI Manager** left to be found from UI scene.
- [ ] **GameSceneLoader** is in the scene with **Turn Manager** and **Player Prefab** assigned.
- [ ] **AuctionSystem**, **TradeSystem**, **BuildingSupplyManager** (and **DiceRoller** if used) added and **Turn Manager** assigned where needed.
- [ ] Main Menu (or your start flow) loads **BootstrapScene** instead of **GameScene**.
- [ ] **MainMenu** is first in Build Settings so the game starts at the menu, not straight on the board.

---

## What Bootstrap Does at Runtime

1. **BootstrapLoader.Awake** runs first (early execution order), loads **BoardScene** and **UIScene_v2** additively.
2. **TurnManager.Start** (and others) run; **TurnManager** finds **TileInfo** in loaded scenes and builds **boardPath**; finds **UIDocumentManager** in the UI scene and assigns **uiManager** if needed.
3. **GameSceneLoader** applies Main Menu settings (or defaults), creates players, calls **InitializePlayers()**.
4. Game runs with one combined view: Board (tiles, camera) + UI (HUD, pop-ups) + Bootstrap (logic, players, state).

Players (tokens) are created and live in the Bootstrap scene; they move along the board path that comes from the Board scene’s tiles.
