# UI to Script Mapping Reference

This document shows exactly which UI elements connect to which script variables.

---

## TurnManager Script Connections

### UI Section
| Script Variable | UI Element Name | Location | Type |
|----------------|-----------------|----------|------|
| `rollButton` | RollButton | Bottom Panel | Button |
| `endTurnButton` | EndTurnButton | Bottom Panel | Button |
| `currentPlayerText` | CurrentPlayerText | Top Panel | TextMeshProUGUI |
| `diceText` | DiceText | Bottom Panel | TextMeshProUGUI |
| `walletText` | WalletText | Top Panel | TextMeshProUGUI |

### Jail UI Section
| Script Variable | UI Element Name | Location | Type |
|----------------|-----------------|----------|------|
| `jailPanel` | JailPanel | Canvas (Inactive) | GameObject |
| `jailStatusText` | JailStatusText | Inside JailPanel | TextMeshProUGUI |
| `payBailButton` | PayBailButton | Inside JailPanel | Button |
| `useCardButton` | UseCardButton | Inside JailPanel | Button |
| `waitButton` | WaitButton | Inside JailPanel | Button |

---

## Player Script Connections

### UI Section (Property Panel)
| Script Variable | UI Element Name | Location | Type |
|----------------|-----------------|----------|------|
| `propertyPanel` | PropertyPanel | Canvas (Inactive) | GameObject |
| `propertyText` | PropertyText | Inside PropertyPanel | TextMeshProUGUI |
| `buyButton` | BuyButton | Inside PropertyPanel | Button |
| `skipButton` | SkipButton | Inside PropertyPanel | Button |

### Build UI Section
| Script Variable | UI Element Name | Location | Type |
|----------------|-----------------|----------|------|
| `buildPanel` | BuildPanel | Canvas (Inactive) | GameObject |
| `buildInfoText` | BuildInfoText | Inside BuildPanel | TextMeshProUGUI |
| `buildHouseButton` | BuildHouseButton | Inside BuildPanel | Button |
| `buildHouseButtonText` | BuildHouseButtonText | Text child of BuildHouseButton | TextMeshProUGUI |

---

## Visual Hierarchy Reference

```
Canvas
│
├── Background (Image)
│   └── Full screen background
│
├── MainHUD (Panel - for organization)
│   │
│   ├── TopPanel (Panel)
│   │   ├── ProfilePicture (Image)
│   │   ├── CurrentPlayerText (TextMeshPro) → TurnManager.currentPlayerText
│   │   └── WalletText (TextMeshPro) → TurnManager.walletText
│   │
│   └── BottomPanel (Panel)
│       ├── RollButton (Button) → TurnManager.rollButton
│       ├── EndTurnButton (Button) → TurnManager.endTurnButton
│       └── DiceText (TextMeshPro) → TurnManager.diceText
│
├── PropertyPanel (Panel - INACTIVE by default)
│   ├── PropertyText (TextMeshPro) → Player.propertyText
│   ├── BuyButton (Button) → Player.buyButton
│   └── SkipButton (Button) → Player.skipButton
│
├── BuildPanel (Panel - INACTIVE by default)
│   ├── BuildInfoText (TextMeshPro) → Player.buildInfoText
│   └── BuildHouseButton (Button) → Player.buildHouseButton
│       └── Text (TMP) → Player.buildHouseButtonText
│
└── JailPanel (Panel - INACTIVE by default)
    ├── JailStatusText (TextMeshPro) → TurnManager.jailStatusText
    ├── PayBailButton (Button) → TurnManager.payBailButton
    ├── UseCardButton (Button) → TurnManager.useCardButton
    └── WaitButton (Button) → TurnManager.waitButton
```

---

## Button Click Events

### Automatically Connected (via Scripts)
These buttons are connected automatically in the script's `Start()` method:

- **RollButton** → `TurnManager.RollDice()`
- **EndTurnButton** → `TurnManager.EndTurn()`
- **PayBailButton** → `TurnManager.PayBail()`
- **UseCardButton** → `TurnManager.UseJailCard()`
- **WaitButton** → `TurnManager.WaitInJail()`

### Connected via Inspector
These buttons need to be connected in the Inspector:

- **BuyButton** → `Player.BuyProperty()`
  - Select BuyButton → Inspector → Button → OnClick() → Add → Drag Player → Select `BuyProperty()`
  
- **SkipButton** → `Player.SkipAction()`
  - Select SkipButton → Inspector → Button → OnClick() → Add → Drag Player → Select `SkipAction()`
  
- **BuildHouseButton** → `Player.BuildHouse()`
  - Select BuildHouseButton → Inspector → Button → OnClick() → Add → Drag Player → Select `BuildHouse()`

**Note**: Your scripts may already handle these connections via code. Check the script's `Start()` method.

---

## Text Update Methods

### TurnManager Updates
- `UpdateHUD()` - Updates:
  - `currentPlayerText` - Shows current player name and jail status
  - `diceText` - Shows dice roll result
  - `walletText` - Shows player's money

### Player Updates
- `HandlePropertyTile()` - Updates:
  - `propertyText` - Shows property information
  - `buyButton` - Shows/hides and enables/disables based on affordability
  
- `ShowBuildUI()` - Updates:
  - `buildInfoText` - Shows property name, group, and building status
  - `buildHouseButtonText` - Shows build cost
  - `buildHouseButton` - Enables/disables based on affordability

### Jail Updates
- `ShowJailUI()` - Updates:
  - `jailStatusText` - Shows jail status and turn count
  - `payBailButton` - Enables/disables based on affordability
  - `useCardButton` - Enables/disables based on card availability
  - `waitButton` - Enables/disables based on turn count

---

## Panel Show/Hide Logic

### PropertyPanel
- **Shown**: When player lands on an unowned property or owned property
- **Hidden**: After buying property or skipping action
- **Controlled by**: `Player.HandlePropertyTile()` and `Player.SkipAction()`

### BuildPanel
- **Shown**: When player lands on their own property with full group ownership
- **Hidden**: After building or clicking "Done" button
- **Controlled by**: `Player.ShowBuildUI()` and `Player.HideBuildUI()`

### JailPanel
- **Shown**: When player is in jail and needs to make a decision
- **Hidden**: After player gets out of jail or ends turn
- **Controlled by**: `TurnManager.ShowJailUI()` and `TurnManager.HideJailUI()`

---

## Common Setup Mistakes to Avoid

1. **Wrong Type**: 
   - ❌ Using `Text` instead of `TextMeshProUGUI`
   - ✅ Use `Text - TextMeshPro` when creating text elements

2. **Missing References**:
   - ❌ Forgetting to assign UI elements in Inspector
   - ✅ Always check that all script references are assigned

3. **Panel Not Inactive**:
   - ❌ Leaving panels active by default
   - ✅ Set PropertyPanel, BuildPanel, JailPanel to inactive

4. **Wrong Hierarchy**:
   - ❌ Putting buttons outside their panels
   - ✅ Make sure PropertyText, BuyButton, SkipButton are children of PropertyPanel

5. **Missing EventSystem**:
   - ❌ Buttons don't work
   - ✅ Canvas automatically creates EventSystem, but check it exists

---

## Testing Checklist

After connecting everything:

- [ ] RollButton works and updates DiceText
- [ ] EndTurnButton switches to next player
- [ ] CurrentPlayerText shows correct player name
- [ ] WalletText updates when money changes
- [ ] PropertyPanel appears when landing on property
- [ ] BuyButton works and purchases property
- [ ] SkipButton closes PropertyPanel
- [ ] BuildPanel appears when landing on owned property
- [ ] BuildHouseButton builds houses/hotels
- [ ] JailPanel appears when in jail
- [ ] All jail buttons work correctly
- [ ] Profile picture displays (if implemented)

---

## Quick Reference: Script Locations

- **TurnManager.cs**: `Assets/TurnManager.cs`
- **Player.cs**: `Assets/Player.cs`

---

**For detailed setup instructions, see `COMPLETE_UI_SETUP_GUIDE.md`**
