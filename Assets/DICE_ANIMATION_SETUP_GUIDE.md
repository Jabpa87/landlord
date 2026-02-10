# Dice Rolling Animation Setup Guide

This guide will help you set up animated dice rolling in your Unity game.

---

## 📋 Overview

The dice animation system provides:
- ✅ Visual dice rolling animation
- ✅ Support for 2D sprite-based dice or 3D dice models
- ✅ Configurable animation duration and effects
- ✅ Bounce/scale animations
- ✅ Sound effect support
- ✅ Seamless integration with TurnManager

---

## 🎯 Quick Setup (2D Sprite-Based Dice)

### Step 1: Prepare Dice Face Sprites

You need 6 sprites/images for each die (showing faces 1-6):

1. **Create or find dice face images:**
   - Dice face 1 (one dot)
   - Dice face 2 (two dots)
   - Dice face 3 (three dots)
   - Dice face 4 (four dots)
   - Dice face 5 (five dots)
   - Dice face 6 (six dots)

2. **Export from Photoshop/design tool:**
   - Export each face as PNG with transparency
   - Name them: `dice_face_1.png`, `dice_face_2.png`, etc.
   - Recommended size: 200x200 pixels (or larger for high-DPI)

3. **Import to Unity:**
   - Drag sprites into `Assets/UI/Sprites/` folder
   - Select each sprite → Inspector → **Texture Type**: `Sprite (2D and UI)`
   - Click **Apply**

### Step 2: Create Dice UI Elements

1. **Create Dice Container Panel:**
   - Right-click on `Canvas` → `UI` → `Panel`
   - Rename to `DiceRollPanel`
   - Position it where you want dice to appear (e.g., center of screen)
   - Set size (e.g., 400x200 for two dice side by side)
   - **Set to INACTIVE by default** (uncheck checkbox)

2. **Create Dice 1 Container:**
   - Right-click on `DiceRollPanel` → `UI` → `Panel`
   - Rename to `Dice1Container`
   - Remove Image component (or make transparent)
   - Position on left side
   - Set size (e.g., 150x150)

3. **Create Dice 1 Face Images:**
   - Right-click on `Dice1Container` → `UI` → `Image`
   - Rename to `Dice1Face1`
   - Assign `dice_face_1` sprite
   - Set **Preserve Aspect** ✅
   - Set anchors to stretch (Alt+Shift+click stretch preset)
   - Set Left/Right/Top/Bottom to `0`
   - **Repeat for faces 2-6:**
     - Create `Dice1Face2`, `Dice1Face3`, `Dice1Face4`, `Dice1Face5`, `Dice1Face6`
     - Assign corresponding sprites
     - **Set all faces to INACTIVE** except `Dice1Face1` (which shows by default)

4. **Create Dice 2 Container:**
   - Right-click on `DiceRollPanel` → `UI` → `Panel`
   - Rename to `Dice2Container`
   - Remove Image component
   - Position on right side
   - Set size (e.g., 150x150)

5. **Create Dice 2 Face Images:**
   - Right-click on `Dice2Container` → `UI` → `Image`
   - Create `Dice2Face1` through `Dice2Face6`
   - Assign sprites and configure same as Dice 1
   - **Set all faces to INACTIVE** except `Dice2Face1`

### Step 3: Setup DiceRoller Component

1. **Create DiceRoller GameObject:**
   - Right-click in Hierarchy → `Create Empty`
   - Rename to `DiceRoller`
   - Add Component → `Dice Roller` script

2. **Configure DiceRoller:**
   - Select `DiceRoller` GameObject
   - In Inspector, find **Dice Roller** component

3. **Assign Dice 1 Faces:**
   - Expand **Dice 1 Faces** array
   - Set **Size** to `6`
   - Assign faces in order:
     - Element 0: `Dice1Face1` (face 1)
     - Element 1: `Dice1Face2` (face 2)
     - Element 2: `Dice1Face3` (face 3)
     - Element 3: `Dice1Face4` (face 4)
     - Element 4: `Dice1Face5` (face 5)
     - Element 5: `Dice1Face6` (face 6)

4. **Assign Dice 2 Faces:**
   - Expand **Dice 2 Faces** array
   - Set **Size** to `6`
   - Assign faces in order:
     - Element 0: `Dice1Face1` (face 1)
     - Element 1: `Dice1Face2` (face 2)
     - Element 2: `Dice1Face3` (face 3)
     - Element 3: `Dice1Face4` (face 4)
     - Element 4: `Dice1Face5` (face 5)
     - Element 5: `Dice1Face6` (face 6)

5. **Configure Animation Settings:**
   - **Roll Duration**: `2` seconds (adjust as needed)
   - **Face Change Speed**: `10` (faces per second)
   - **Use Bounce Animation**: ✅ Checked
   - **Bounce Scale**: `1.2` (20% larger during bounce)

6. **Assign UI References:**
   - **Result Text**: Drag your `DiceText` (optional, will update existing text)
   - **Dice Roll Panel**: Drag `DiceRollPanel`

7. **Audio (Optional):**
   - Add `AudioSource` components to DiceRoller GameObject
   - Assign audio clips for roll start and roll end sounds
   - Drag AudioSources to **Roll Start Sound** and **Roll End Sound** fields

### Step 4: Connect to TurnManager

1. **Select TurnManager GameObject** in Hierarchy
2. In **TurnManager** component, find **Dice Animation** section
3. **Dice Roller**: Drag `DiceRoller` GameObject

---

## 🎨 Alternative: Using 3D Dice Models

If you have 3D dice models instead of sprites:

1. **Import 3D dice models** into Unity
2. **Create GameObjects** for dice in your scene
3. **In DiceRoller component:**
   - Leave **Dice 1 Faces** and **Dice 2 Faces** arrays empty
   - Assign **Dice 1 Model**: Your first 3D dice GameObject
   - Assign **Dice 2 Model**: Your second 3D dice GameObject
4. **Add rotation animation** (you may need to extend DiceRoller script for 3D rotation)

---

## ⚙️ Configuration Options

### Roll Duration
- **Default**: `2` seconds
- **Shorter**: `1` second (faster gameplay)
- **Longer**: `3` seconds (more dramatic)

### Face Change Speed
- **Default**: `10` faces per second
- **Faster**: `20` (more chaotic animation)
- **Slower**: `5` (more visible face changes)

### Bounce Animation
- **Enabled**: Dice scale up/down during roll
- **Disabled**: No scaling (just face changes)

### Bounce Scale
- **Default**: `1.2` (20% larger)
- **More dramatic**: `1.5` (50% larger)
- **Subtle**: `1.1` (10% larger)

---

## 🎵 Adding Sound Effects

1. **Import audio files:**
   - `dice_roll_start.wav` - Sound when rolling begins
   - `dice_roll_end.wav` - Sound when rolling ends

2. **Add AudioSource components:**
   - Select `DiceRoller` GameObject
   - Add Component → `Audio Source`
   - Rename to `RollStartSound`
   - Assign audio clip
   - **Uncheck Play On Awake**
   - Repeat for `RollEndSound`

3. **Assign in DiceRoller:**
   - Drag `RollStartSound` AudioSource to **Roll Start Sound**
   - Drag `RollEndSound` AudioSource to **Roll End Sound**

---

## 🧪 Testing

1. **Play the game**
2. **Click Roll Button**
3. **Verify:**
   - ✅ Dice roll panel appears
   - ✅ Dice faces change rapidly
   - ✅ Bounce animation works (if enabled)
   - ✅ Final dice values show correctly
   - ✅ Result text updates
   - ✅ Panel disappears after animation
   - ✅ Player movement starts after animation

---

## 🐛 Troubleshooting

### Dice faces don't show
- ✅ Check that sprites are assigned correctly
- ✅ Verify Image components have sprites
- ✅ Ensure faces are children of dice containers
- ✅ Check that at least one face is active initially

### Animation doesn't play
- ✅ Verify DiceRoller is assigned in TurnManager
- ✅ Check that DiceRoller component is enabled
- ✅ Ensure Roll Duration is > 0

### Dice faces overlap
- ✅ Make sure only one face per die is active at a time
- ✅ Check that faces are properly positioned
- ✅ Verify anchors are set to stretch

### Animation is too fast/slow
- ✅ Adjust **Roll Duration** in DiceRoller
- ✅ Adjust **Face Change Speed**

### Bounce doesn't work
- ✅ Check **Use Bounce Animation** is enabled
- ✅ Verify **Bounce Scale** is > 1.0

---

## 📝 Hierarchy Example

```
Canvas
├── Background
├── MainHUD
│   └── ...
└── DiceRollPanel (Inactive by default)
    ├── Dice1Container
    │   ├── Dice1Face1 (Active)
    │   ├── Dice1Face2 (Inactive)
    │   ├── Dice1Face3 (Inactive)
    │   ├── Dice1Face4 (Inactive)
    │   ├── Dice1Face5 (Inactive)
    │   └── Dice1Face6 (Inactive)
    └── Dice2Container
        ├── Dice2Face1 (Active)
        ├── Dice2Face2 (Inactive)
        ├── Dice2Face3 (Inactive)
        ├── Dice2Face4 (Inactive)
        ├── Dice2Face5 (Inactive)
        └── Dice2Face6 (Inactive)

DiceRoller (GameObject with DiceRoller script)
├── RollStartSound (AudioSource)
└── RollEndSound (AudioSource)
```

---

## 🎨 Design Tips

1. **Dice Size**: Make dice large enough to see clearly (150x150 minimum)
2. **Spacing**: Leave space between the two dice
3. **Position**: Center dice panel or position near roll button
4. **Background**: Add semi-transparent background to dice panel for visibility
5. **Colors**: Use contrasting colors for dice dots/faces

---

## 🚀 Advanced: Custom Animations

To add custom animations (rotation, movement, etc.):

1. **Extend DiceRoller script:**
   - Add rotation animation in `RollAnimation()` coroutine
   - Add movement/path animation
   - Add particle effects

2. **Use Animation System:**
   - Create Animation clips
   - Use Animator component
   - Trigger animations from DiceRoller

---

## ✅ Checklist

- [ ] Dice face sprites created and imported
- [ ] DiceRollPanel created and positioned
- [ ] Dice containers created (Dice1Container, Dice2Container)
- [ ] All 12 face images created (6 per die)
- [ ] Face images assigned to containers
- [ ] Only one face per die is active initially
- [ ] DiceRoller GameObject created
- [ ] DiceRoller component configured
- [ ] Dice faces assigned to arrays (in correct order)
- [ ] Animation settings configured
- [ ] DiceRollPanel assigned to DiceRoller
- [ ] DiceRoller assigned to TurnManager
- [ ] Sound effects added (optional)
- [ ] Tested in play mode

---

**For questions or issues, refer to the main COMPLETE_UI_SETUP_GUIDE.md**
