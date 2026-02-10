# Main Menu UI Redesign Guide

## ✅ Complete UI Overhaul Implemented

The Main Menu has been completely redesigned with a modern, polished interface that supports avatar sprite previews.

---

## 🎨 New Features

### 1. **Modern Card-Based Design**
- Clean, gradient backgrounds
- Card-style sections with shadows and borders
- Improved spacing and visual hierarchy
- Professional color scheme with gold accents

### 2. **Avatar Sprite Support**
- Automatic sprite loading from `Sprites/Avatars` folder
- Sprite previews in avatar selection buttons
- Falls back to colored circles if no sprites found
- Supports both individual sprites and sprite sheets

### 3. **Enhanced Player Configuration**
- Larger, more readable input fields
- Better organized color and token selection
- Improved visual feedback for selections
- Modern button styling

---

## 📁 Files Modified

1. **`UI Toolkit/UXML/MainMenu.uxml`**
   - Complete redesign with modern structure
   - New element hierarchy and organization
   - Better semantic naming

2. **`UI Toolkit/USS/main-styles.uss`**
   - Added modern menu styles (`.main-menu-modern`, `.menu-card-modern`, etc.)
   - Gradient backgrounds
   - Enhanced button styles
   - Improved spacing and typography

3. **`UI Toolkit/Scripts/MainMenuManager.cs`**
   - Updated to use new UI structure
   - Added sprite preview support in avatar buttons
   - Enhanced color/avatar selection logic

4. **`PlayerVisualManager.cs`**
   - Added auto-load sprites functionality
   - Context menu option to reload sprites

5. **`AvatarSpriteLoader.cs`** (NEW)
   - Utility to load sprites from `Sprites/Avatars` folder
   - Works in both editor and runtime

---

## 🖼️ Setting Up Avatar Sprites

### Step 1: Prepare Your Sprites

1. **Create or import sprite images:**
   - Recommended size: 128x128 to 256x256 pixels
   - Format: PNG with transparent background
   - Name them descriptively (e.g., `Hat.png`, `Car.png`, etc.)

2. **Place sprites in Unity:**
   - Folder: `Assets/Sprites/Avatars/`
   - Drag PNG files into this folder

3. **Configure sprites in Unity:**
   - Select each sprite in Project window
   - Inspector → **Texture Type**: `Sprite (2D and UI)`
   - **Pixels Per Unit**: `100` (or appropriate for your sprites)
   - Click **Apply**

### Step 2: Auto-Load Sprites

**Option A: Automatic (Recommended)**
- `PlayerVisualManager` will auto-load sprites on Start
- Make sure `autoLoadSprites` is checked in Inspector

**Option B: Manual Assignment**
1. Find `PlayerVisualManager` in your scene (or create one)
2. In Inspector, expand **Token Sprites** array
3. Set **Size** to number of sprites
4. Drag sprites from Project window into array slots

**Option C: Context Menu**
- Select `PlayerVisualManager` GameObject
- Right-click → **Load Sprites from Folder**

---

## 🎯 New UI Structure

### Header Section
- Large "MONOPOLY" title with gold color
- Subtitle "Game Setup"
- Gradient background

### Player Count Section
- Modern card with rounded corners
- Three buttons: "2 Players", "3 Players", "4 Players"
- Selected button highlighted with gold border

### Player Configuration Section
- Scrollable container for player slots
- Each player slot is a modern card with:
  - Player name input
  - Color selection (8 colors)
  - **Token/Avatar selection with sprite previews**

### Game Settings Section
- Starting Money input
- GO Salary input
- Clean, organized layout

### Footer
- "START GAME" button (large, green gradient)
- "BACK" button (secondary style)

---

## 🎨 Style Classes

### New Modern Classes:
- `.main-menu-modern` - Main container
- `.menu-header-modern` - Header section
- `.menu-card-modern` - Card containers
- `.count-btn-modern` - Player count buttons
- `.player-slot-modern` - Individual player configuration cards
- `.avatar-button-modern` - Avatar selection buttons (with sprite support)
- `.color-button-modern` - Color selection buttons
- `.start-btn-modern` - Start game button
- `.back-btn-modern` - Back button

### Fallback Support:
- Old classes (`.player-slot`, `.avatar-button`, etc.) still work
- Ensures compatibility if styles aren't fully loaded

---

## 🔧 How Sprite Previews Work

1. **On Player Slot Creation:**
   - `MainMenuManager` checks for sprites via `PlayerVisualManager` or `AvatarSpriteLoader`
   - If sprites found, displays them as background images in avatar buttons
   - If no sprites, falls back to colored circles with letters

2. **Sprite Display:**
   - Sprites are shown as `background-image` on avatar buttons
   - Buttons are 70x70 pixels (circular)
   - Selected avatar has gold border and glow effect

3. **Color Integration:**
   - When player selects a color, avatar buttons update (if no sprite)
   - If sprite exists, sprite is preserved (color applied to board representation)

---

## 📝 Usage Instructions

### For Players:
1. Select number of players (2-4)
2. Configure each player:
   - Enter name
   - Select color
   - **Select token/avatar** (see sprite previews!)
3. Adjust game settings (optional)
4. Click "START GAME"

### For Developers:
- Sprites auto-load from `Sprites/Avatars` folder
- To add more avatars: Add sprites to folder, they'll appear automatically
- To manually assign: Use `PlayerVisualManager` Inspector
- Sprites are applied to players on the board automatically

---

## 🐛 Troubleshooting

### Sprites Not Showing:
1. **Check sprite configuration:**
   - Texture Type must be `Sprite (2D and UI)`
   - Sprite must be imported correctly

2. **Check folder location:**
   - Must be in `Assets/Sprites/Avatars/`
   - Case-sensitive on some systems

3. **Check PlayerVisualManager:**
   - Ensure `autoLoadSprites` is enabled
   - Or manually assign sprites in Inspector

4. **Check console:**
   - Look for `AvatarSpriteLoader` messages
   - Should show "Loaded X avatar sprites"

### UI Not Displaying Correctly:
1. **Check UXML:**
   - Ensure `MainMenu.uxml` is assigned to UIDocument
   - Check for compilation errors

2. **Check styles:**
   - Ensure `main-styles.uss` is referenced in UXML
   - Modern classes should be defined

3. **Fallback:**
   - Old classes are still supported
   - UI should work even if modern styles fail to load

---

## ✨ Visual Improvements

### Before:
- Basic flat design
- Simple colored circles for avatars
- Limited visual hierarchy
- Basic button styling

### After:
- Modern gradient backgrounds
- Card-based layout with shadows
- Sprite previews in avatar selection
- Enhanced button styles with hover effects
- Better spacing and typography
- Professional gold accent colors
- Improved visual feedback

---

## 🎮 Next Steps

1. **Add your avatar sprites** to `Sprites/Avatars` folder
2. **Configure sprites** (Texture Type: Sprite)
3. **Test in Play Mode** - sprites should appear in avatar selection
4. **Customize colors** in `main-styles.uss` if desired
5. **Adjust spacing** in UXML or USS as needed

---

## 📚 Technical Details

### Sprite Loading:
- Editor: Uses `AssetDatabase` to find sprites
- Runtime: Falls back to Inspector-assigned sprites
- Caching: Sprites are cached after first load

### UI Toolkit Integration:
- Uses `StyleBackground` for sprite display
- Falls back gracefully if sprites unavailable
- Maintains compatibility with old UI structure

### Performance:
- Sprites loaded once on Start
- Cached for subsequent uses
- Minimal performance impact

---

**Enjoy your new modern Main Menu! 🎉**
