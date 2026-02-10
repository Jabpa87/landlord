# Complete UI Setup Guide - From Photoshop to Unity

This comprehensive guide will walk you through importing your Photoshop UI design into Unity and setting up all UI elements for your Monopoly game in portrait mode.

---

## 📋 Table of Contents

1. [Preparing Your Photoshop Assets](#1-preparing-your-photoshop-assets)
2. [Importing Assets into Unity](#2-importing-assets-into-unity)
3. [Setting Up Canvas for Portrait Mode](#3-setting-up-canvas-for-portrait-mode)
4. [Creating UI Elements](#4-creating-ui-elements)
5. [Organizing UI Hierarchy](#5-organizing-ui-hierarchy)
6. [Connecting UI to Scripts](#6-connecting-ui-to-scripts)
7. [Advanced UI Features](#7-advanced-ui-features)
8. [Testing and Optimization](#8-testing-and-optimization)

---

## 1. Preparing Your Photoshop Assets

### Step 1.1: Export Individual Elements

Before importing into Unity, you need to export each UI element separately from Photoshop:

#### **Buttons**
- Export each button state as separate PNG files:
  - `button_normal.png` - Default state
  - `button_hover.png` - Hover/Highlighted state
  - `button_pressed.png` - Pressed/Clicked state
  - `button_disabled.png` - Disabled state (optional but recommended)

#### **Backgrounds**
- `background_main.png` - Main game background
- `panel_background.png` - Panel backgrounds (if any)
- `overlay_background.png` - Overlay backgrounds

#### **Icons & Graphics**
- `profile_placeholder.png` - Default profile picture
- `dice_icon.png` - Dice icon (if needed)
- `wallet_icon.png` - Wallet/money icon
- `property_icon.png` - Property icon
- Any other icons you designed

#### **Text Elements**
- **IMPORTANT**: Only export text as images if it's decorative/stylized text
- For regular text (player names, money amounts, etc.), we'll recreate them using TextMeshPro in Unity

### Step 1.2: Export Settings

1. **File Format**: PNG with transparency
2. **Resolution**: 
   - For portrait mobile: Export at 2x or 3x resolution
   - Example: If target is 1080x1920, export at 2160x3840 (2x) or 3240x5760 (3x)
   - This ensures crisp UI on high-DPI screens
3. **Color Mode**: RGB
4. **Transparency**: Preserve alpha channel
5. **Naming Convention**: Use clear, descriptive names (e.g., `roll_button_normal.png`)

### Step 1.3: Organize Your Files

Create a folder structure on your computer:
```
Photoshop_Exports/
  ├── Buttons/
  │   ├── roll_button_normal.png
  │   ├── roll_button_hover.png
  │   ├── roll_button_pressed.png
  │   ├── end_turn_button_normal.png
  │   └── ...
  ├── Backgrounds/
  │   ├── background_main.png
  │   └── ...
  ├── Icons/
  │   ├── profile_placeholder.png
  │   └── ...
  └── Panels/
      └── ...
```

---

## 2. Importing Assets into Unity

### Step 2.1: Create Folder Structure in Unity

1. In Unity Project window, navigate to `Assets/`
2. Create the following folder structure:
   ```
   Assets/
     UI/
       Sprites/
       Textures/
       Prefabs/
       Materials/
   ```

### Step 2.2: Import PNG Files

1. **Drag and drop** your PNG files into `Assets/UI/Sprites/`
2. Unity will automatically import them

### Step 2.3: Configure Import Settings

For each imported sprite:

1. **Select the sprite** in Project window
2. In the **Inspector**, configure:
   - **Texture Type**: `Sprite (2D and UI)`
   - **Sprite Mode**: 
     - `Single` for simple images (icons, backgrounds)
     - `Multiple` if you have sprite sheets (less common for UI)
   - **Pixels Per Unit**: `100` (standard for UI)
   - **Filter Mode**: `Bilinear` (smooth scaling)
   - **Compression**: 
     - `None` for best quality (if file size isn't an issue)
     - `Normal` for balanced quality/size
   - **Max Size**: 
     - `2048` for most UI elements
     - `4096` for large backgrounds
   - Click **Apply**

### Step 2.4: Create Sprite Atlases (Optional but Recommended)

For better performance, you can create sprite atlases:

1. Go to `Window` → `2D` → `Sprite Atlas`
2. Create a new Sprite Atlas
3. Add your UI sprites to it
4. This reduces draw calls

---

## 3. Setting Up Canvas for Portrait Mode

### Step 3.1: Create or Configure Canvas

1. **If you don't have a Canvas:**
   - Right-click in **Hierarchy** → `UI` → `Canvas`
   - This creates a Canvas with an EventSystem

2. **If you already have a Canvas:**
   - Select it in Hierarchy

### Step 3.2: Configure Canvas Settings

Select the Canvas and in the **Inspector**:

1. **Canvas Component:**
   - **Render Mode**: `Screen Space - Overlay` (for UI that appears on top)
   - **Pixel Perfect**: ✅ Checked (for crisp UI)

2. **Canvas Scaler Component** (add if missing):
   - **UI Scale Mode**: `Scale With Screen Size`
   - **Reference Resolution**: 
     - Width: `1080`
     - Height: `1920` (portrait mode)
   - **Screen Match Mode**: `Match Width Or Height`
   - **Match**: `0.5` (balanced) or `1` (match height for portrait)
   - **Reference Pixels Per Unit**: `100`

3. **Graphic Raycaster**: Keep default settings

### Step 3.3: Set Game View to Portrait

1. In the **Game view** window
2. Click the aspect ratio dropdown (e.g., "Free Aspect")
3. Select `9:16` or create a custom resolution:
   - Click `+` to add custom
   - Set to `1080 x 1920` (Portrait)
4. This ensures you're designing for the correct orientation

---

## 4. Creating UI Elements

### Step 4.1: Background

1. **Right-click** on `Canvas` → `UI` → `Image`
2. **Rename** to `Background`
3. **Configure Image component:**
   - **Source Image**: Drag your `background_main` sprite
   - **Image Type**: `Simple`
   - **Preserve Aspect**: ✅ Checked (if you want to maintain aspect ratio)
4. **Configure RectTransform:**
   - Click the **anchor preset** icon (top-left of RectTransform)
   - Hold **Alt + Shift** and click the **stretch** preset (bottom-right)
   - This makes it fill the entire screen
   - Set **Left, Right, Top, Bottom** all to `0`

### Step 4.2: Buttons

#### Create a Button:

1. **Right-click** on `Canvas` (or a Panel) → `UI` → `Button - TextMeshPro`
2. **Rename** to something descriptive (e.g., `RollButton`)
3. **Configure Button:**
   - **Source Image**: Drag your button sprite
   - **Image Type**: 
     - `Simple` for basic buttons
     - `Sliced` if you want the button to scale without distortion (requires 9-slicing)
   - **Color**: Adjust tint if needed

4. **Configure Button States (Sprite Swap):**
   - In **Button component**, expand **Transition**
   - Set **Transition** to `Sprite Swap`
   - Assign sprites:
     - **Normal**: `button_normal.png`
     - **Highlighted**: `button_hover.png`
     - **Pressed**: `button_pressed.png`
     - **Selected**: (optional, can use hover sprite)
     - **Disabled**: `button_disabled.png` (if you have one)

5. **Configure Button Text:**
   - The button automatically creates a child `Text (TMP)` object
   - Select it and configure:
     - **Text**: "ROLL DICE" (or your button text)
     - **Font Size**: `36` (adjust as needed)
     - **Alignment**: Center (horizontal and vertical)
     - **Color**: White or your design color
     - **Font Asset**: Use TextMeshPro default or import a custom font

6. **Position the Button:**
   - Use **RectTransform** to position
   - For portrait mode, common positions:
     - Bottom center: Anchor to bottom-center, set Y position
     - Top-right: Anchor to top-right, set X and Y offsets

#### Create All Required Buttons:

Based on your scripts, you'll need:
- `RollButton` - For rolling dice
- `EndTurnButton` - For ending turn
- `BuyButton` - For buying properties
- `SkipButton` - For skipping actions
- `BuildHouseButton` - For building houses
- `PayBailButton` - For paying jail bail
- `UseCardButton` - For using jail card
- `WaitButton` - For waiting in jail

**Repeat the button creation process for each.**

### Step 4.3: Text Elements (TextMeshPro)

#### Create Text for Player Info:

1. **Right-click** on `Canvas` (or a Panel) → `UI` → `Text - TextMeshPro`
2. **Rename** to `CurrentPlayerText`
3. **Configure:**
   - **Text**: "Player 1" (placeholder)
   - **Font Size**: `32` (adjust as needed)
   - **Alignment**: Left or Center (based on your design)
   - **Color**: Your design color
   - **RectTransform**: Position where you want it

#### Create All Required Text Elements:

- `CurrentPlayerText` - Shows current player name
- `DiceText` - Shows dice roll result
- `WalletText` - Shows player's money
- `PropertyText` - Shows property information
- `BuildInfoText` - Shows build information
- `JailStatusText` - Shows jail status
- `BuildHouseButtonText` - Text on build button (shows cost)

### Step 4.4: Profile Picture

#### Create Circular Profile Picture:

1. **Create Frame (Mask):**
   - Right-click on `Canvas` (or a Panel) → `UI` → `Image`
   - Rename to `ProfileFrame`
   - Add **Mask** component:
     - Click **Add Component** → `UI` → `Mask`
   - Set **Source Image** to a circular frame sprite (or create a simple circle)
   - Configure **RectTransform** for size and position

2. **Create Profile Image (Child of Frame):**
   - Right-click on `ProfileFrame` → `UI` → `Image`
   - Rename to `ProfilePicture`
   - **Source Image**: Drag your `profile_placeholder.png`
   - **Image Type**: `Simple`
   - **Preserve Aspect**: ✅ Checked
   - **RectTransform**: 
     - Set anchors to stretch (Alt + Shift + click stretch preset)
     - Set **Left, Right, Top, Bottom** to `-5` or `-10` (slight inset for frame)

#### Alternative: Simple Profile Picture (No Mask)

1. Right-click on `Canvas` → `UI` → `Image`
2. Rename to `ProfilePicture`
3. **Source Image**: Your profile placeholder
4. **Image Type**: `Simple`
5. **Preserve Aspect**: ✅ Checked
6. Position and size as needed

### Step 4.5: Panels

Panels are containers that group UI elements together.

#### Create Property Panel:

1. **Right-click** on `Canvas` → `UI` → `Panel`
2. **Rename** to `PropertyPanel`
3. **Configure Panel:**
   - **Image component**: 
     - **Source Image**: Your panel background sprite (or leave default)
     - **Color**: Adjust opacity/color as needed
   - **RectTransform**: 
     - Position in center or where you want
     - Set size (e.g., 800x600)

4. **Add Child Elements:**
   - Right-click on `PropertyPanel` → `UI` → `Text - TextMeshPro`
   - Rename to `PropertyText`
   - Right-click on `PropertyPanel` → `UI` → `Button - TextMeshPro`
   - Rename to `BuyButton`
   - Right-click on `PropertyPanel` → `UI` → `Button - TextMeshPro`
   - Rename to `SkipButton`

5. **Set Panel to Inactive by Default:**
   - Uncheck the checkbox at top of Inspector
   - This hides it until needed

#### Create Other Panels:

- `BuildPanel` - For building houses/hotels
- `JailPanel` - For jail actions

### Step 4.6: Icons

For icons (dice, wallet, etc.):

1. Right-click on `Canvas` (or a Panel) → `UI` → `Image`
2. Rename to `DiceIcon` (or appropriate name)
3. **Source Image**: Your icon sprite
4. **Image Type**: `Simple`
5. **Preserve Aspect**: ✅ Checked
6. Position and size as needed

---

## 5. Organizing UI Hierarchy

### Step 5.1: Recommended Hierarchy Structure

Organize your UI elements in a logical hierarchy:

```
Canvas
├── Background
├── MainHUD
│   ├── TopPanel
│   │   ├── ProfilePicture
│   │   ├── CurrentPlayerText
│   │   └── WalletText
│   ├── CenterPanel
│   │   └── (Game board area - if UI elements needed)
│   └── BottomPanel
│       ├── RollButton
│       ├── EndTurnButton
│       └── DiceText
├── PropertyPanel (Inactive by default)
│   ├── PropertyText
│   ├── BuyButton
│   └── SkipButton
├── BuildPanel (Inactive by default)
│   ├── BuildInfoText
│   └── BuildHouseButton
└── JailPanel (Inactive by default)
    ├── JailStatusText
    ├── PayBailButton
    ├── UseCardButton
    └── WaitButton
```

### Step 5.2: Create Parent Panels

1. **Create MainHUD:**
   - Right-click on `Canvas` → `UI` → `Panel`
   - Rename to `MainHUD`
   - Remove the Image component (or make it transparent)
   - This is just for organization

2. **Create TopPanel, CenterPanel, BottomPanel:**
   - Right-click on `MainHUD` → `UI` → `Panel`
   - Rename each accordingly
   - Remove Image components or make transparent

3. **Move existing UI elements** into appropriate panels by dragging in Hierarchy

### Step 5.3: Use Layout Groups (Optional but Helpful)

Layout Groups automatically arrange child elements:

#### Horizontal Layout Group:
- For buttons in a row
- Add component: `Horizontal Layout Group`
- Configure spacing, padding, child alignment

#### Vertical Layout Group:
- For elements stacked vertically
- Add component: `Vertical Layout Group`

#### Grid Layout Group:
- For grid arrangements
- Useful for property lists, player info grids

---

## 6. Connecting UI to Scripts

### Step 6.1: Connect TurnManager UI References

1. **Select your TurnManager GameObject** in Hierarchy
2. In the **Inspector**, find the **TurnManager** component
3. In the **UI** section, drag UI elements from Hierarchy:
   - **Roll Button**: Drag `RollButton`
   - **End Turn Button**: Drag `EndTurnButton`
   - **Current Player Text**: Drag `CurrentPlayerText`
   - **Dice Text**: Drag `DiceText`
   - **Wallet Text**: Drag `WalletText`

4. In the **Jail UI** section:
   - **Jail Panel**: Drag `JailPanel`
   - **Jail Status Text**: Drag `JailStatusText`
   - **Pay Bail Button**: Drag `PayBailButton`
   - **Use Card Button**: Drag `UseCardButton`
   - **Wait Button**: Drag `WaitButton`

### Step 6.2: Connect Player UI References

1. **Select each Player GameObject** in Hierarchy
2. In the **Player** component, find the **UI** section:
   - **Property Panel**: Drag `PropertyPanel`
   - **Property Text**: Drag `PropertyText` (child of PropertyPanel)
   - **Buy Button**: Drag `BuyButton` (child of PropertyPanel)
   - **Skip Button**: Drag `SkipButton` (child of PropertyPanel)

3. In the **Build UI (HUD Panel)** section:
   - **Build Panel**: Drag `BuildPanel`
   - **Build Info Text**: Drag `BuildInfoText` (child of BuildPanel)
   - **Build House Button**: Drag `BuildHouseButton` (child of BuildPanel)
   - **Build House Button Text**: Drag the Text (TMP) child of BuildHouseButton

### Step 6.3: Connect Button Click Events

Buttons are automatically connected via the script references, but you can also manually set up:

1. **Select a Button** (e.g., `BuyButton`)
2. In **Inspector**, find **Button** component
3. In **OnClick()** section:
   - Click **+** to add event
   - Drag the **Player GameObject** into the object field
   - Select function: `Player` → `BuyProperty()`

**Note**: Your scripts already handle button connections via code, so this step is optional.

### Step 6.4: Create Profile Picture Manager Script (Optional)

If you want to dynamically load profile pictures:

1. Create a new C# script: `ProfilePictureManager.cs`
2. Add this code:

```csharp
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ProfilePictureManager : MonoBehaviour
{
    [Header("Profile Picture UI")]
    public Image profileImage;
    public TextMeshProUGUI playerNameText;
    
    public void SetProfilePicture(Sprite sprite)
    {
        if (profileImage != null)
            profileImage.sprite = sprite;
    }
    
    public void SetPlayerName(string name)
    {
        if (playerNameText != null)
            playerNameText.text = name;
    }
}
```

3. Attach to a GameObject and assign references

---

## 7. Advanced UI Features

### Step 7.1: 9-Slicing for Scalable Buttons

If you want buttons that scale without distortion:

1. **Select your button sprite** in Project window
2. In **Inspector**, set **Sprite Editor**:
   - Click **Sprite Editor** button
   - Set **Border** values (L, R, T, B) - these define the corners
   - Click **Apply**
3. **On the Button Image component:**
   - Set **Image Type** to `Sliced`
   - Now the button will scale without distorting corners

### Step 7.2: Animations (Optional)

Add simple animations to UI elements:

1. **Select a UI element** (e.g., Button)
2. **Window** → `Animation` → `Animation`
3. Create animation clip
4. Record keyframes for position, scale, color, etc.
5. Add **Animator** component
6. Create Animator Controller and assign

### Step 7.3: Safe Area (For Notches)

For devices with notches (iPhone X, etc.):

1. Create a **Safe Area** script or use Unity's built-in support
2. Adjust UI margins for top/bottom safe areas
3. Or use **Canvas Scaler** with safe area support

### Step 7.4: UI Animations with DOTween (Optional)

For smooth animations:

1. Import **DOTween** from Asset Store (free version available)
2. Use for button hover effects, panel transitions, etc.

---

## 8. Testing and Optimization

### Step 8.1: Test on Different Resolutions

1. In **Game view**, test different aspect ratios:
   - 9:16 (Portrait)
   - 16:9 (Landscape - to ensure it doesn't break)
   - Custom resolutions

2. Check that:
   - UI elements are positioned correctly
   - Text is readable
   - Buttons are tappable
   - Panels appear/disappear correctly

### Step 8.2: Test UI Interactions

1. **Play the game** and test:
   - Button clicks work
   - Text updates correctly
   - Panels show/hide at right times
   - Profile pictures display
   - All UI elements are visible and accessible

### Step 8.3: Optimize Performance

1. **Use Sprite Atlases** (mentioned in Step 2.4)
2. **Reduce draw calls** by batching UI elements
3. **Compress textures** appropriately
4. **Disable raycast** on non-interactive elements:
   - Select Image/Text
   - In **Graphic** component, uncheck **Raycast Target**

### Step 8.4: Create Prefabs

Save reusable UI elements as prefabs:

1. **Drag UI elements** from Hierarchy to `Assets/UI/Prefabs/`
2. This allows you to:
   - Reuse across scenes
   - Make changes once, apply everywhere
   - Version control UI elements

---

## 📝 Quick Reference Checklist

### Assets Preparation
- [ ] Exported all button states (normal, hover, pressed, disabled)
- [ ] Exported backgrounds and panels
- [ ] Exported icons and graphics
- [ ] Named files clearly and consistently
- [ ] Exported at appropriate resolution (2x or 3x)

### Unity Setup
- [ ] Created UI folder structure
- [ ] Imported all PNG files
- [ ] Configured sprites (Texture Type: Sprite 2D and UI)
- [ ] Set up Canvas for portrait (1080x1920)
- [ ] Configured Canvas Scaler
- [ ] Set Game view to portrait aspect ratio

### UI Elements Created
- [ ] Background image
- [ ] All buttons (Roll, End Turn, Buy, Skip, Build, Jail buttons)
- [ ] All text elements (Player, Dice, Wallet, Property, Build, Jail text)
- [ ] Profile picture (with or without mask)
- [ ] All panels (Property, Build, Jail)
- [ ] Icons (if any)

### Organization
- [ ] Created logical hierarchy with parent panels
- [ ] Organized elements into Top/Center/Bottom panels
- [ ] Set panels to inactive by default (where appropriate)
- [ ] Used Layout Groups (if needed)

### Script Connections
- [ ] Connected all TurnManager UI references
- [ ] Connected all Player UI references
- [ ] Tested button clicks
- [ ] Verified text updates work

### Testing
- [ ] Tested on different resolutions
- [ ] Tested all UI interactions
- [ ] Verified panels show/hide correctly
- [ ] Checked performance (draw calls, etc.)
- [ ] Created prefabs for reusable elements

---

## 🎨 Design Tips

1. **Consistency**: Use the same button style, font, and spacing throughout
2. **Readability**: Ensure text is large enough and has good contrast
3. **Touch Targets**: Make buttons at least 44x44 pixels (or larger) for mobile
4. **Spacing**: Give elements breathing room - don't crowd the UI
5. **Visual Hierarchy**: Make important elements (like Roll button) stand out
6. **Feedback**: Ensure buttons provide visual feedback when pressed

---

## 🐛 Troubleshooting

### UI Elements Not Visible
- Check if Canvas is active
- Check if UI element is active
- Check if Image component has a sprite assigned
- Check if color/alpha is set correctly

### Buttons Not Clicking
- Check if Button component is present
- Check if Graphic Raycaster is on Canvas
- Check if EventSystem exists in scene
- Check if button is behind another UI element (z-order)

### Text Not Updating
- Verify script reference is assigned
- Check if TextMeshPro component exists
- Verify script is calling the correct text field
- Check Console for errors

### UI Scaling Issues
- Verify Canvas Scaler settings
- Check Reference Resolution matches your design
- Adjust Match value (0 = width, 1 = height, 0.5 = balanced)

---

## 📚 Additional Resources

- [Unity UI Documentation](https://docs.unity3d.com/Manual/UISystem.html)
- [TextMeshPro Documentation](https://docs.unity3d.com/Manual/com.unity.textmeshpro.html)
- [Unity UI Best Practices](https://docs.unity3d.com/Manual/UIBestPractices.html)

---

## 🎯 Next Steps

After setting up your UI:

1. **Test thoroughly** - Play through the game and verify all UI works
2. **Polish animations** - Add smooth transitions and effects
3. **Add sound effects** - Button clicks, panel opens/closes
4. **Create UI themes** - Different color schemes or styles
5. **Localization** - If planning multiple languages

---

**Good luck with your UI setup!** 🚀

If you encounter any issues, refer to the Troubleshooting section or check Unity's documentation.
