# Avatar Sprites Setup Guide

## Problem Fixed

The `AvatarSpriteLoader` has been updated to load **all sub-sprites from sprite sheets** (like Pins.png, Pins1.png, Pins2.png). Previously, it only loaded individual sprite assets, which is why you only saw a few avatars instead of all 26.

## How It Works Now

The updated loader:
1. Finds all texture files in `Assets/Sprites/Avatars/`
2. Uses `AssetDatabase.LoadAllAssetsAtPath()` to load **all sub-sprites** from each sprite sheet
3. Combines all sprites into one array
4. Sorts them by name for consistent ordering

## Setup Steps

### Step 1: Configure Sprite Sheets in Unity

For each sprite sheet (Pins.png, Pins1.png, Pins2.png):

1. **Select the sprite sheet** in Project window
2. **Inspector → Texture Type**: Set to `Sprite (2D and UI)`
3. **Sprite Mode**: Set to `Multiple` (this is crucial!)
4. **Click "Apply"**
5. **Click "Sprite Editor"** button
6. In Sprite Editor:
   - If sprites are already sliced, they should appear as separate sprites
   - If not sliced, click **"Slice"** → Choose method (Grid By Cell Count, Grid By Cell Size, or Automatic)
   - **Apply** the slicing
7. **Close Sprite Editor**

### Step 2: Verify Sprites Are Loaded

1. **In Unity Editor**, go to **Window → General → Console**
2. **Play the game** or enter Play Mode
3. Look for log message: `AvatarSpriteLoader: Loaded X total sprites from Y texture file(s)`
4. You should see all 26 sprites loaded (2 + 6 + 18)

### Step 3: Test in Main Menu

1. **Open MainMenu scene**
2. **Enter Play Mode**
3. **Check the avatar selection buttons** - you should now see all 26 sprites displayed
4. If you see more than 6 avatars, it's working!

## Troubleshooting

### Only Seeing 6 Avatars

**Problem**: Still only seeing 6 avatars (the default names)

**Solution**:
1. **Clear the sprite cache**: In Unity, find `PlayerVisualManager` in your scene
2. **Right-click** on the component → **"Load Sprites from Folder"**
3. Or **clear cache** in code: `AvatarSpriteLoader.ClearCache()`
4. **Restart Play Mode**

### Sprites Not Appearing

**Problem**: No sprites showing at all

**Check**:
1. Are sprite sheets configured as `Sprite Mode: Multiple`?
2. Are sprites sliced in Sprite Editor?
3. Check Console for error messages
4. Verify sprites are in `Assets/Sprites/Avatars/` folder

### Sprites Showing But Wrong Order

**Problem**: Sprites appear but in wrong order

**Solution**: The loader sorts by sprite name. To control order:
- Rename sprites in Sprite Editor (e.g., "Avatar_01", "Avatar_02", etc.)
- Or manually assign sprites in `PlayerVisualManager` Inspector in desired order

### APK / Android Build: Player Token Not Showing

**Problem**: In the built APK, the player token is invisible on the board (works in Editor).

**Cause**: In builds, avatar sprites are only loaded from a **Resources** folder. Your sprites are in `Assets/Sprites/Avatars`, so they are not found at runtime in the APK.

**Fix (choose one):**

1. **Assign token sprites in Inspector (recommended)**  
   - Open the **Game Scene**.  
   - Find or create a GameObject with **PlayerVisualManager**.  
   - In the Inspector: **Token Sprites** → set size and **drag** your avatar sprites (from `Sprites/Avatars`) into the array.  
   - Save the scene. Those references are included in the build, so tokens will show in the APK.

2. **Use the built-in fallback**  
   - The code now uses a **fallback circle** when no token sprite is available.  
   - After rebuilding the APK, the token should at least appear as a small white circle so it is visible.

3. **Use Resources (optional)**  
   - Copy or move your avatar textures into **Assets/Resources/Sprites/Avatars** so `Resources.LoadAll` can find them in the build.

## Main menu token selection (Game Setup)

If the Game Setup screen shows **letters (H, C, D, S, W, B)** instead of token images:

1. **MainMenu scene**: Select the GameObject that has **MainMenuManager**.
2. In the Inspector, find **Token Preview Sprites** and assign the same token sprites you use in-game (e.g. from `Sprites/Avatars` or from `PlayerVisualManager`).
3. The menu will use: Token Preview Sprites → PlayerVisualManager → AvatarSpriteLoader, in that order.

This ensures the main menu shows real token images so the chosen token is used when the game loads.

## Manual Assignment (Alternative)

If auto-loading doesn't work, you can manually assign:

1. **Find `PlayerVisualManager`** in your scene (or create one)
2. **In Inspector**, expand **Token Sprites** array
3. **Set Size** to 26 (or however many sprites you have)
4. **Drag sprites** from Project window into array slots
5. **Uncheck "Auto Load Sprites"** if you want to use manual assignment

## Code Changes Made

### AvatarSpriteLoader.cs
- Now uses `AssetDatabase.LoadAllAssetsAtPath()` to load all sub-sprites from sprite sheets
- Handles both individual sprites and sprite sheets
- Sorts sprites by name for consistent ordering

### MainMenuManager.cs
- Removed limit based on `availableAvatarNames.Length` (was limiting to 6)
- Now uses actual sprite count from loaded sprites
- All sprites will be displayed in avatar selection

## Expected Result

After setup, you should see:
- **All 26 avatar sprites** in the avatar selection UI
- Sprites displayed as circular buttons with the actual sprite images
- Ability to select any sprite for any player
- Sprites properly applied to players on the game board

## Next Steps

1. **Configure sprite sheets** (Step 1 above)
2. **Test in Play Mode**
3. **Verify all sprites appear** in Main Menu
4. **Select different avatars** for each player
5. **Start game** and verify avatars appear correctly on the board

---

**Note**: If you have more than 26 sprites, they will all be loaded and displayed. The UI will wrap to multiple rows if needed.
