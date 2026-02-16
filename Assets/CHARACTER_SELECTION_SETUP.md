# Character Selection System — Setup

Scripts are in place: **Character**, **CharacterDatabase**, **CharacterManager**, **MainMenuController**. GameSettings/PlayerConfig support per-player starting money; ApplyGameSettings uses it.

## 1. Create Character Database asset

- In Unity: **Assets → Create → Character Database** (or **Assets → Create → Character Database (from plan)** if you use the Editor menu).
- Or right-click in Project → **Create → Character Database**.
- Save as e.g. `Assets/CharacterDatabase.asset`.
- In the Inspector, set **Characters** size to at least 1 and fill:
  - **Full Image** (Sprite) — standing character art.
  - **Token Image** (Sprite) — in-game token; use same order as **PlayerVisualManager → Token Sprites** so character index matches token index.
  - **Character Name**, **Difficulty Level**, **Backstory**, **Starting Money**, **Starting Assets**.
  - **Perk 1/2** and **Cast 1/2** (name + description).

### 1.1 Example characters (fill these in your Character Database)

Based on your game theme (Abuja Monopoly) and the Civil Servant example, here are suggested characters:

**Character 1: Civil Servant**
- **Character Name**: "Civil Servant"
- **Difficulty Level**: "Easy"
- **Backstory**: "Quiet, disciplined, and patient. Not flashy, but Abuja's system favors those who understand it."
- **Starting Money**: 1800000 (₦1,800,000)
- **Starting Assets**: "None"
- **Perk 1**:
  - Name: "Pension Security"
  - Description: "Receives ₦100,000 every 5 turns."
- **Perk 2**:
  - Name: "Legal Shield"
  - Description: "Pays 25% less rent once per game."
- **Cast 1**:
  - Name: "Slow Growth"
  - Description: "Cannot build hotels until Turn 20."
- **Cast 2**:
  - Name: "Paperwork"
  - Description: "Trading requires approval (1-turn delay)."

  **Character 2: Business Tycoon**
  - **Character Name**: "Business Tycoon"
  - **Difficulty Level**: "Medium"
  - **Backstory**: "Ambitious entrepreneur with deep pockets. Knows how to make money work, but sometimes too aggressive."
  - **Starting Money**: 2500000 (₦2,500,000)
  - **Starting Assets**: "None"
  - **Perk 1**:
    - Name: "Capital Advantage"
    - Description: "Starts with ₦2,500,000 instead of default."
  - **Perk 2**:
    - Name: "Quick Deals"
    - Description: "Can build houses immediately (no group requirement for first house)."
  - **Cast 1**:
    - Name: "High Risk"
    - Description: "Pays 50% more rent on utilities and transportation."
  - **Cast 2**:
    - Name: "Overextended"
    - Description: "Cannot mortgage properties until Turn 10."

**Character 3: Real Estate Developer**
- **Character Name**: "Real Estate Developer"
- **Difficulty Level**: "Medium"
- **Backstory**: "Expert in property markets. Builds quickly but struggles with cash flow early on."
- **Starting Money**: 1500000 (₦1,500,000)
- **Starting Assets**: "None"
- **Perk 1**:
  - Name: "Construction Master"
  - Description: "Building costs reduced by 20%."
- **Perk 2**:
  - Name: "Property Insight"
  - Description: "Collects 15% more rent on owned properties."
- **Cast 1**:
  - Name: "Cash Flow Issues"
  - Description: "Starting money is ₦1,500,000 (lower than default)."
- **Cast 2**:
  - Name: "Slow Starter"
  - Description: "Cannot buy properties until Turn 3."

**Character 4: Traditional Trader**
- **Character Name**: "Traditional Trader"
- **Difficulty Level**: "Easy"
- **Backstory**: "Street-smart trader who knows Abuja's markets. Good at trading but cautious with investments."
- **Starting Money**: 2000000 (₦2,000,000)
- **Starting Assets**: "None"
- **Perk 1**:
  - Name: "Trade Master"
  - Description: "Can trade properties without restrictions (even mortgaged)."
- **Perk 2**:
  - Name: "Market Knowledge"
  - Description: "Gets ₦50,000 bonus when passing GO."
- **Cast 1**:
  - Name: "Risk Averse"
  - Description: "Cannot build hotels (only houses allowed)."
- **Cast 2**:
  - Name: "Small Scale"
  - Description: "Can only own maximum 5 properties at once."

**Character 5: Politician**
- **Character Name**: "Politician"
- **Difficulty Level**: "Hard"
- **Backstory**: "Influential figure with connections. Powerful but controversial, faces extra scrutiny."
- **Starting Money**: 2200000 (₦2,200,000)
- **Starting Assets**: "None"
- **Perk 1**:
  - Name: "Influence"
  - Description: "Can skip rent payment once per game."
- **Perk 2**:
  - Name: "Connections"
  - Description: "Gets out of jail free automatically (no bail needed)."
- **Cast 1**:
  - Name: "Public Scrutiny"
  - Description: "Pays double tax (₦200,000 instead of ₦100,000)."
- **Cast 2**:
  - Name: "Slow Movement"
  - Description: "Cannot roll doubles (no extra turns)."

**Character 6: Banker**
- **Character Name**: "Banker"
- **Difficulty Level**: "Medium"
- **Backstory**: "Financial expert with access to credit. Good with money but limited by regulations."
- **Starting Money**: 2100000 (₦2,100,000)
- **Starting Assets**: "None"
- **Perk 1**:
  - Name: "Credit Line"
  - Description: "Can mortgage properties for 60% value (instead of 50%)."
- **Perk 2**:
  - Name: "Interest Savings"
  - Description: "Unmortgage cost reduced by 50% (no interest)."
- **Cast 1**:
  - Name: "Regulations"
  - Description: "Cannot trade properties (only money trades allowed)."
- **Cast 2**:
  - Name: "Conservative"
  - Description: "Cannot build more than 2 houses per property."

**Note**: These are example characters. You can:
- Adjust starting money, perks, and casts to balance gameplay.
- Add more characters (e.g., "Tech Entrepreneur", "Oil Magnate", "Market Vendor").
- Assign **Full Image** and **Token Image** sprites from your art assets.
- Ensure **Token Image** order matches **PlayerVisualManager → Token Sprites** order.

## 2. How to create the new main menu (uGUI) for our game

This section walks through building the main menu from scratch using **uGUI only** (no UI Toolkit). The menu is the entry point for your game: number of players → sequential character selection (with color and AI) → Start Game.

### 2.1 New scene or revamp

- **Option A**: Duplicate `Scenes/MainMenu.unity` (e.g. `MainMenu_uGUI.unity`), open it, and remove all UI Toolkit objects (UIDocument, Main Menu Manager that uses UXML).
- **Option B**: Create a new scene (**File → New Scene**), save as `Scenes/MainMenu.unity` (or a new name) and add it to **File → Build Settings** so it is the first scene (index 0).

### 2.2 Canvas and scaling

1. **GameObject → UI → Canvas**. This creates a Canvas with an **EventSystem** (keep it).
2. Select the **Canvas**:
   - **Render Mode**: Screen Space - Overlay.
   - **UI Scale Mode**: Scale With Screen Size.
   - **Reference Resolution**: e.g. 1920×1080 (or your design resolution).
   - **Match**: 0.5 (or Width = 0 for portrait).
3. Add a **Canvas Scaler** if not present; same settings as above so the layout scales on different resolutions.

### 2.3 Hierarchy layout (top to bottom)

Create empty GameObjects under the Canvas to group UI. Use the names below so you can find them when assigning references.

**A. Outside character section (top)**

- **GameSettingsButton** — **GameObject → UI → Button**. Place in a corner (e.g. top-right). Set button text to "Settings" or "Game Settings". This opens the game settings panel (volume, rules, etc.) anytime.
- **GameSettingsPanel** — **GameObject → UI → Panel** (or an empty GameObject with an Image as background). Add a **Close** button inside. Leave this **disabled** by default; the script will toggle it when the user clicks Game Settings. Put volume sliders, toggles, or other options inside as needed.

**B. Number of players (top centre)**

- **PlayerCountPanel** (optional parent):
  - **PlayerCountText** — **UI → Text** (or TextMeshPro - Text). Label like "Number of players:" or just show the number (2, 3, 4). Assign to MainMenuController **Player Count Text**.
  - **PlayerCountDecreaseButton** — **UI → Button**. Label "-". Assign to MainMenuController **Player Count Decrease Button**.
  - **PlayerCountIncreaseButton** — **UI → Button**. Label "+". Assign to MainMenuController **Player Count Increase Button**.

**C. Current player label**

- **CurrentPlayerLabel** — **UI → Text**. Will show "Player 1", "Player 2", etc. Assign to MainMenuController **Current Player Label**.

**D. Character selection panel (centre)**

One panel that shows the current player’s character choice. Create a parent (e.g. **CharacterPanel**) and under it:

- **Left: full-body image**
  - **CharacterFullImage** — **UI → Image** (recommended) or a GameObject with a **Sprite Renderer**. Assign to CharacterManager **Character Full Image** (Image) or **Character Full Image Sprite** (Sprite Renderer). The script will set its sprite from the selected character.

- **Right: profile**
  - **CharacterNameText** — Text. Assign to CharacterManager **Character Name Text**.
  - **DifficultyText** — Text. Assign to CharacterManager **Difficulty Text**.
  - **BackstoryText** — Text (can be multi-line). Assign to CharacterManager **Backstory Text**.
  - **StartingMoneyText** — Text. Assign to CharacterManager **Starting Money Text**.
  - **StartingAssetsText** — Text. Assign to CharacterManager **Starting Assets Text**.
  - **Perk1Name**, **Perk1Desc**, **Perk2Name**, **Perk2Desc** — Text. Assign to CharacterManager.
  - **Cast1Name**, **Cast1Desc**, **Cast2Name**, **Cast2Desc** — Text. Assign to CharacterManager.

- **Color selection (for building identification)**
  - Create 4–8 **UI → Button**s (or Images with Button components). Optionally give them names **ColorButton_0**, **ColorButton_1**, … Set each button’s **Image → Color** to a different colour (red, blue, green, etc.). Assign the same order to MainMenuController **Color Buttons** and, if you use presets, match MainMenuController **Preset Colors** to that order.
  - Optional: **SelectedColorPreview** — **UI → Image** to show the current colour. Assign to MainMenuController **Selected Color Preview**.

- **Token row (bottom of character panel)**
  - Create one **Image** (or **Button**) per character in your CharacterDatabase. Name them e.g. **TokenButton_0**, **TokenButton_1**, … Assign to CharacterManager **Token Images** (and **Token Buttons** if you use buttons) in the **same order** as the characters in the database. The script will set each image’s sprite and highlight the selected token.
  - Optional: **NextButton**, **PrevButton** — Buttons to cycle character. Assign to CharacterManager **Next Button**, **Prev Button**.

**E. AI and navigation (bottom)**

- **AIToggle** — **GameObject → UI → Toggle**. Label "Use computer" or "AI". Assign to MainMenuController **AI Toggle**.
- **SelectButton** — **UI → Button**. Label "Select". Assign to MainMenuController **Select Button**. (Clicks are wired in code.)
- **BackButton** — **UI → Button**. Label "Back". Assign to MainMenuController **Back Button**. (Optional; goes back to previous player.)
- **StartGameButton** — **UI → Button**. Label "Start Game". Assign to MainMenuController **Start Game Button**. Leave it **disabled** or hidden initially; the script will show it when all players have selected.

### 2.4 Anchors and layout

- Use **RectTransform** anchors so key areas scale correctly (e.g. top-left for Settings, top-centre for player count, centre for character panel, bottom for buttons).
- For the character panel, you can use **Horizontal Layout Group** or **Grid Layout Group** for the token row so buttons stay aligned.

### 2.5 Scripts and references

1. Create an empty GameObject (e.g. **MainMenuController**). Add the **MainMenuController** script.
2. Add the **CharacterManager** script to the same GameObject or to a child (e.g. **CharacterPanel**).
3. Assign **Character Database** to both (your `CharacterDatabase.asset`).
4. In **MainMenuController**, assign every field listed in section 2.3 (player count UI, current player label, color buttons, AI toggle, Select/Back/Start Game, Game Settings button/panel).
5. In **CharacterManager**, assign the Character Database, full image, all profile texts, token images (and token buttons if used), and optional next/prev buttons.
6. Set **Game Scene Name** on MainMenuController to your game scene name (e.g. `GameScene`).

### 2.6 Quick reference — Main menu assignment checklist

- **MainMenuController**: Character DB, Character Manager, Player Count Text, Player Count Decrease/Increase Buttons, Current Player Label, Preset Colors (optional; defaults exist), Color Buttons, Selected Color Preview (optional), AI Toggle, Select Button, Back Button, Start Game Button, Game Settings Button, Game Settings Panel, Game Scene Name.
- **CharacterManager**: Character DB, Character Full Image (Image or Sprite), all profile Text fields, Token Images (and Token Buttons), optional Token Highlight, Next/Prev Buttons.

Select, Back, Start Game, and Game Settings clicks are wired in **Start()**; token and next/prev are wired in CharacterManager **Start()**. No manual OnClick assignment needed for those.

## 3. Main menu scene (uGUI) — short summary

- **Replace or revamp** the main menu scene with **uGUI** (Canvas, Image, Text, Button, Toggle). No UI Toolkit for this menu.
- Use the hierarchy and naming in **section 2** so references are easy to assign.
- **MainMenuController** and **CharacterManager** wire their own buttons in **Start()**; assign the references in the Inspector.

## 4. Token order

- **CharacterDatabase** character order (index 0, 1, 2…) should match **PlayerVisualManager → Token Sprites** order so that `avatarIndex` (character index) in GameSettings correctly shows the right token in-game.

## 5. Flow

- User sets **number of players** (2, 3, or 4).
- For each player in order: label shows "Player 1", "Player 2", …; user picks **character** (token row or Next/Back), **color** (for building identification), and **AI** checkbox; clicks **Select**.
- When all have selected, **Start Game** appears; click to build GameSettings and load GameScene.
- **Game Settings** button (outside character section) opens the settings panel anytime.

GameSceneLoader and MainMenuManager.ApplyGameSettings already use **MainMenuManager.SettingsToLoad**; MainMenuController sets it before loading the game scene, so no change is required in the game scene for basic flow.

## 6. Character behavior runtime spec (data-driven)

This project now uses a data-driven character behavior model with runtime UI state. Character logic should no longer depend on direct hardcoded character-name checks in gameplay systems.

### 6.1 Effect key source of truth

- Canonical keys are defined in `Assets/CharacterEffects.cs` (`CharacterEffectKeys`).
- Character assets can explicitly define:
  - `perkEffectKeys[]`
  - `faultEffectKeys[]`
- If those arrays are empty, fallback mapping still resolves effects from `characterName` and legacy perk/cast text.

Recommended action for production data quality:
- Populate `perkEffectKeys` and `faultEffectKeys` directly in `CharacterDatabase.asset` for every character.
- Keep display text and effect behavior decoupled (UI text can change; keys should remain stable).

### 6.2 Runtime state model

Each `Player` now owns:
- `perkTimingPreference` (`Auto`, `Early`, `Mid`, `Late`)
- `runtimeState` (`CharacterRuntimeState`) with:
  - `turnsUntilPension`
  - `turnsUntilHotelUnlock`
  - one-time status tracking (legal shield / credit trust / bid penalty)
  - board progression snapshot (`boardPurchasedRatio`, `gamePhase`)

`TurnManager` recomputes runtime state on turn boundaries via `RecomputeAllCharacterRuntimeStates()` so UI and gameplay status stay synchronized.

### 6.3 “More” popup behavior dashboard rules

The player statistics popup (More/profile click) is now a behavior dashboard:
- Shows character summary and economy snapshot.
- Shows Perk status cards and Cast/Fault status cards.
- Each card has:
  - icon hint (UP for perk, DOWN for fault),
  - state badge (`Active`, `Unused`, `Used`, `Locked`, `Unlocked`),
  - counter/details (e.g., turns until pension payout).

Dashboard placement:
- Popup anchors near the clicked player profile row (with screen-safe clamping), so it feels like a profile extension instead of a detached center modal.

### 6.4 Pre-game character briefing popup rules

Before first turn starts:
- A character briefing popup is shown after perk reveal.
- It lists each player’s selected character, effect summary, and timing selector.
- Timing selector options: `Auto`, `Early`, `Mid`, `Late`.
- Game start is blocked until user presses `OK - Start Game`.

If the setup document is not present in a scene, startup safely falls back to normal turn start.

### 6.5 Trigger timing definitions

- **Early**: Prefer using triggerable one-time effects during early board development.
- **Mid**: Prefer activation around mid ownership phase (about 50% properties purchased).
- **Late**: Prefer activation once board is saturated (all/near-all properties purchased).
- **Auto**: Engine decides safest timing based on current board state and effect context.

Current implementation stores this preference and exposes it to runtime/UI. If a preference is invalid or missing, behavior defaults to `Auto`.
