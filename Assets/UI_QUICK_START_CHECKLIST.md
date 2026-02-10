# UI Quick Start Checklist

A condensed checklist for quickly setting up your UI in Unity.

## 🚀 Quick Steps

### 1. Export from Photoshop
- [ ] Export buttons (normal, hover, pressed states)
- [ ] Export backgrounds and panels
- [ ] Export icons (profile, dice, wallet, etc.)
- [ ] Use PNG format with transparency
- [ ] Export at 2x or 3x resolution (e.g., 2160x3840 for 1080x1920 target)

### 2. Import to Unity
- [ ] Create folder: `Assets/UI/Sprites/`
- [ ] Drag PNG files into Sprites folder
- [ ] For each sprite: Set **Texture Type** → `Sprite (2D and UI)`
- [ ] Set **Pixels Per Unit** → `100`
- [ ] Click **Apply**

### 3. Setup Canvas
- [ ] Create Canvas: Right-click Hierarchy → `UI` → `Canvas`
- [ ] Select Canvas → **Canvas Scaler**:
  - **UI Scale Mode**: `Scale With Screen Size`
  - **Reference Resolution**: `1080 x 1920`
  - **Match**: `0.5` or `1`
- [ ] Set Game view to `9:16` or `1080x1920`

### 4. Create UI Elements

#### Background
- [ ] Right-click Canvas → `UI` → `Image` → Rename `Background`
- [ ] Assign background sprite
- [ ] Set anchors to stretch (Alt+Shift+click stretch preset)
- [ ] Set Left/Right/Top/Bottom to `0`

#### Buttons (Create for each)
- [ ] Right-click Canvas → `UI` → `Button - TextMeshPro`
- [ ] Rename appropriately (e.g., `RollButton`)
- [ ] Assign button sprite to Image component
- [ ] Set Button Transition → `Sprite Swap`
- [ ] Assign normal/hover/pressed sprites
- [ ] Update button text
- [ ] Position button

**Required Buttons:**
- [ ] RollButton
- [ ] EndTurnButton
- [ ] BuyButton
- [ ] SkipButton
- [ ] BuildHouseButton
- [ ] PayBailButton
- [ ] UseCardButton
- [ ] WaitButton

#### Text Elements (Create for each)
- [ ] Right-click Canvas → `UI` → `Text - TextMeshPro`
- [ ] Rename appropriately
- [ ] Set text, font size, color, alignment
- [ ] Position text

**Required Text:**
- [ ] CurrentPlayerText
- [ ] DiceText
- [ ] WalletText
- [ ] PropertyText
- [ ] BuildInfoText
- [ ] JailStatusText
- [ ] BuildHouseButtonText

#### Profile Picture
- [ ] Right-click Canvas → `UI` → `Image` → Rename `ProfilePicture`
- [ ] Assign profile placeholder sprite
- [ ] Set **Preserve Aspect** ✅
- [ ] Position and size

#### Panels (Create for each)
- [ ] Right-click Canvas → `UI` → `Panel`
- [ ] Rename appropriately
- [ ] Add child elements (Text, Buttons)
- [ ] Set to **Inactive** by default (uncheck checkbox)

**Required Panels:**
- [ ] PropertyPanel (with PropertyText, BuyButton, SkipButton)
- [ ] BuildPanel (with BuildInfoText, BuildHouseButton)
- [ ] JailPanel (with JailStatusText, PayBailButton, UseCardButton, WaitButton)

### 5. Organize Hierarchy
```
Canvas
├── Background
├── MainHUD
│   ├── TopPanel (ProfilePicture, CurrentPlayerText, WalletText)
│   └── BottomPanel (RollButton, EndTurnButton, DiceText)
├── PropertyPanel (Inactive)
├── BuildPanel (Inactive)
└── JailPanel (Inactive)
```

### 6. Connect to Scripts

#### TurnManager
- [ ] Select TurnManager GameObject
- [ ] Drag UI elements to TurnManager component:
  - RollButton → Roll Button
  - EndTurnButton → End Turn Button
  - CurrentPlayerText → Current Player Text
  - DiceText → Dice Text
  - WalletText → Wallet Text
  - JailPanel → Jail Panel
  - JailStatusText → Jail Status Text
  - PayBailButton → Pay Bail Button
  - UseCardButton → Use Card Button
  - WaitButton → Wait Button

#### Player
- [ ] Select each Player GameObject
- [ ] Drag UI elements to Player component:
  - PropertyPanel → Property Panel
  - PropertyText → Property Text
  - BuyButton → Buy Button
  - SkipButton → Skip Button
  - BuildPanel → Build Panel
  - BuildInfoText → Build Info Text
  - BuildHouseButton → Build House Button
  - BuildHouseButtonText → Build House Button Text

### 7. Test
- [ ] Play the game
- [ ] Test all button clicks
- [ ] Verify text updates
- [ ] Check panels show/hide correctly
- [ ] Test on different resolutions
- [ ] Verify profile picture displays

---

## 📋 Element Checklist by Location

### Top Panel
- [ ] ProfilePicture
- [ ] CurrentPlayerText
- [ ] WalletText

### Bottom Panel
- [ ] RollButton
- [ ] EndTurnButton
- [ ] DiceText

### Property Panel (Center, Inactive)
- [ ] PropertyText
- [ ] BuyButton
- [ ] SkipButton

### Build Panel (Center, Inactive)
- [ ] BuildInfoText
- [ ] BuildHouseButton
- [ ] BuildHouseButtonText

### Jail Panel (Center, Inactive)
- [ ] JailStatusText
- [ ] PayBailButton
- [ ] UseCardButton
- [ ] WaitButton

---

## ⚡ Quick Tips

1. **9-Slicing**: For scalable buttons, use Sprite Editor to set borders, then Image Type → `Sliced`
2. **Anchors**: Hold Alt while clicking anchor preset to also set position
3. **Layout Groups**: Use for automatic arrangement (Horizontal/Vertical/Grid)
4. **Prefabs**: Save UI elements as prefabs for reuse
5. **Safe Area**: Consider device notches when positioning top/bottom elements

---

**For detailed instructions, see `COMPLETE_UI_SETUP_GUIDE.md`**
