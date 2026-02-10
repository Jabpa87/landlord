# Building Rotation Guide

## Overview

The `BuildingVisuals` component now supports automatic rotation of house/hotel sprites based on which side of the board they're on. This ensures buildings always face the correct direction regardless of board orientation.

---

## Quick Setup (Recommended)

### Step 1: Set Up Board Center

1. **Find or create the board center GameObject:**
   - This should be at the center of your board (where all 4 sides meet)
   - If you don't have one, create an empty GameObject at the board center
   - Name it `BoardCenter` or similar

2. **Add the setup script:**
   - Select the board center GameObject (or any GameObject)
   - Add Component → `BuildingVisualsRotationSetup`
   - In Inspector, assign the board center to **Board Center** field (or leave null to use this GameObject's position)

3. **Run the setup:**
   - Right-click the `BuildingVisualsRotationSetup` component
   - Click **"Set Board Center for All Tiles"**
   - This will enable auto-detection on all tiles

### Step 2: Test Rotation Detection

1. Right-click `BuildingVisualsRotationSetup` component
2. Click **"Test Rotation Detection"**
3. Check Console to see how many tiles are detected on each side:
   ```
   Bottom side tiles: 7
   Right side tiles: 7
   Top side tiles: 7
   Left side tiles: 7
   ```

### Step 3: Apply Rotations

1. Right-click `BuildingVisualsRotationSetup` component
2. Click **"Force Update All Visuals (Apply Rotation)"**
3. All existing buildings will now have correct rotations!

---

## How It Works

### Auto-Detection (Default)

When `autoDetectBoardSide = true`:
- The system compares each tile's position to the board center
- Determines which side the tile is on (Bottom/Right/Top/Left)
- Applies rotation automatically:
  - **Bottom**: 0° (houses face up)
  - **Right**: 90° (houses face left)
  - **Top**: 180° (houses face down)
  - **Left**: 270° (houses face right)

### Manual Rotation

If auto-detection doesn't work correctly:
1. **Disable auto-detection:**
   - Set `Auto Detect Board Side = false` on a tile
   - Manually set `Board Side` dropdown (Bottom/Right/Top/Left)

2. **Or use manual rotation override:**
   - Set `Manual Rotation` to a specific angle (0-360°)
   - This overrides both auto-detection and board side

---

## Rotation Settings Explained

### In BuildingVisuals Component:

- **Auto Detect Board Side** (checkbox)
  - ✅ **ON**: Automatically detects board side from position
  - ❌ **OFF**: Uses manual `Board Side` setting

- **Board Side** (dropdown)
  - Only used when auto-detection is OFF
  - Options: Bottom, Right, Top, Left

- **Board Center** (Transform reference)
  - Reference point for auto-detection
  - Usually the center of the board
  - If null, uses world origin (0,0,0)

- **Manual Rotation** (0-360°)
  - Overrides everything if set to non-zero
  - Use for fine-tuning or special cases

---

## Troubleshooting

### Issue: Buildings Still Face Wrong Direction

**Solution 1: Check Board Center**
- Make sure `Board Center` is set correctly
- It should be at the center of your board
- Use `BuildingVisualsRotationSetup` → "Test Rotation Detection" to verify

**Solution 2: Verify Auto-Detection**
- Check that `Auto Detect Board Side = true` on the tile
- Run "Test Rotation Detection" to see detected sides
- If wrong, disable auto-detection and set manually

**Solution 3: Manual Override**
- Set `Manual Rotation` to the correct angle:
  - Bottom side: `0°`
  - Right side: `90°`
  - Top side: `180°`
  - Left side: `270°`

### Issue: All Buildings Rotate the Same Way

- This means auto-detection isn't working
- Check that `Board Center` is assigned
- Try disabling auto-detection and setting `Board Side` manually per tile

### Issue: Rotation Detection is Wrong

**If tiles are detected on wrong sides:**
1. Check board center position
2. Verify tile positions are correct
3. The detection uses the largest offset (X or Y) from center
4. If your board isn't square, you may need to set sides manually

---

## Manual Setup (Per Tile)

If you prefer to set rotation manually for each tile:

1. **Select a property tile**
2. Find **BuildingVisuals** component
3. **Uncheck** "Auto Detect Board Side"
4. **Set Board Side** dropdown:
   - Bottom tiles → `Bottom`
   - Right tiles → `Right`
   - Top tiles → `Top`
   - Left tiles → `Left`
5. **Repeat for all tiles**

**Or use manual rotation:**
- Set `Manual Rotation` to specific angle (0°, 90°, 180°, 270°)

---

## Advanced: Custom Rotation Angles

If you need custom rotations (not 90° increments):

1. Set `Manual Rotation` to your desired angle (0-360°)
2. This overrides all other rotation settings
3. Example: `45°` for diagonal buildings

---

## Quick Reference

| Board Side | Rotation Angle | Houses Face |
|------------|---------------|-------------|
| Bottom     | 0°            | Up ↑        |
| Right      | 90°           | Left ←      |
| Top        | 180°          | Down ↓      |
| Left       | 270°          | Right →     |

---

## Example Setup Workflow

1. **Create board center GameObject** at board center
2. **Add BuildingVisualsRotationSetup** to it
3. **Assign board center** in Inspector
4. **Run "Set Board Center for All Tiles"**
5. **Run "Test Rotation Detection"** to verify
6. **Run "Force Update All Visuals"** to apply
7. **Build houses** → They should now face correct direction!

---

## Notes

- Rotation is applied when buildings are created
- Existing buildings need to be updated (use "Force Update All Visuals")
- Rotation uses local rotation (relative to tile)
- Works for both houses and hotels
- Auto-detection works best with square/rectangular boards

---

## Still Having Issues?

1. Check Console for rotation debug logs
2. Verify board center position
3. Test with manual rotation override
4. Check that BuildingVisuals components are on all property tiles
5. Make sure sprites are assigned

The rotation system is now fully integrated - buildings should automatically face the correct direction on each side of the board!
