# Building Visuals Troubleshooting Guide

## Problem: Sprites Not Showing When Building

If you've built houses/hotels but can't see the sprites, follow these steps:

---

## Step 1: Run Diagnostic Tool

1. **Create an empty GameObject** in your scene (e.g., `DiagnosticTool`)
2. **Add Component** → `BuildingVisualsDiagnostic`
3. **Right-click the component** → **"Check All Property Tiles Setup"**
4. **Check the Console** for warnings/errors

This will tell you:
- ✅ Which tiles have BuildingVisuals components
- ✅ Which tiles have sprites assigned
- ✅ Any missing setup issues

---

## Step 2: Common Issues & Fixes

### Issue 1: BuildingVisuals Component Missing

**Symptom:** Diagnostic shows "Missing BuildingVisuals component!"

**Fix:**
1. Use `BuildingVisualsSetup` script:
   - Create empty GameObject → Add `BuildingVisualsSetup` component
   - Right-click → **"1. Add BuildingVisuals to All Property Tiles"**
2. Or manually:
   - Select each property tile
   - Add Component → `BuildingVisuals`

---

### Issue 2: Sprites Not Assigned

**Symptom:** Diagnostic shows "Missing sprites - House: false, Hotel: false"

**Fix:**
1. **Select a property tile** with BuildingVisuals
2. In Inspector, find **BuildingVisuals** component
3. **Assign sprites:**
   - Drag your house sprite to **House Sprite** field
   - Drag your hotel sprite to **Hotel Sprite** field
4. **For all tiles at once:**
   - Use `BuildingVisualsSetup`:
     - Assign sprites in Inspector
     - Right-click → **"2. Assign Sprites to All Tiles"**

---

### Issue 3: Sprites Behind Tile (Sorting Order)

**Symptom:** Sprites exist but are hidden behind the tile

**Fix:**
1. **Select a property tile**
2. Find **BuildingVisuals** component
3. **Increase Sorting Order:**
   - Set `Sorting Order` to **10 or higher** (default is 10)
   - Make sure it's higher than the tile's SpriteRenderer sorting order
4. **Check Sorting Layer:**
   - Make sure BuildingVisuals uses the same or higher sorting layer than the tile

**Quick Test:**
- Set `Sorting Order` to **100** temporarily
- If sprites appear, the issue is sorting order

---

### Issue 4: Sprites Off-Screen (Position)

**Symptom:** Sprites exist but are positioned outside the tile

**Fix:**
1. **Select a property tile**
2. Find **BuildingVisuals** component
3. **Adjust offsets:**
   - `House Offset`: Try `(0, 0.2, -0.1)` or `(0, 0.3, -0.1)`
   - `Hotel Offset`: Same as house offset
   - `House Spacing`: Try `0.15` to `0.3` (adjust based on tile size)
4. **Adjust scale:**
   - `House Scale`: Try `0.2` to `0.5` (smaller tiles = smaller scale)
   - `Hotel Scale`: Try `0.3` to `0.6`

**Tip:** In Play Mode, you can adjust these values in real-time to see changes!

---

### Issue 5: UpdateVisuals Not Being Called

**Symptom:** Console shows no debug logs from BuildingVisuals

**Fix:**
1. **Check Console** for these logs when building:
   - `[BuildingVisualsManager] Updating visuals for tile: ...`
   - `[BuildingVisuals] Updating visuals for ...`
   - `[BuildingVisuals] Creating X house sprites...`

2. **If no logs appear:**
   - BuildingVisuals component might not be on the tile
   - Run diagnostic tool to check

3. **Force update manually:**
   - Use `BuildingVisualsDiagnostic` → **"Force Update All Visuals"**

---

### Issue 6: Property Type is Not Regular

**Symptom:** Buildings work but sprites don't show (only for Utilities/Transportation)

**Fix:**
- This is **expected behavior** - only Regular properties show building sprites
- Utilities and Transportation cannot have buildings
- Check that your property has `propertyType = Regular` in TileInfo

---

## Step 3: Debug in Play Mode

1. **Enter Play Mode**
2. **Build a house** on a property
3. **Check Console** for these logs:
   ```
   [BuildingVisualsManager] Updating visuals for tile: Tile_XX
   [BuildingVisuals] Updating visuals for Kuje: houses=1, hasHotel=False, houseSprite=True, hotelSprite=True
   [BuildingVisuals] Creating 1 house sprites on Tile_XX
   [BuildingVisuals] Created house 1 at localPos=(...), scale=0.3, sortingOrder=10
   ```

4. **If you see warnings:**
   - `houseSprite not assigned!` → Assign sprites (Issue 2)
   - `Missing BuildingVisuals component!` → Add component (Issue 1)

5. **Check the tile in Scene view:**
   - Select the tile in Hierarchy
   - Look for child objects named `House_1`, `House_2`, etc.
   - If they exist but are invisible → Sorting order issue (Issue 3)
   - If they don't exist → Sprites not assigned or UpdateVisuals not called

---

## Step 4: Manual Test

1. **Select a property tile** in the scene
2. **Find BuildingVisuals** component
3. **Right-click the component** → **"Update Visuals"** (if available)
   - Or use `BuildingVisualsDiagnostic` → **"Test Visual Update on First Regular Property"**
4. **Check Hierarchy:**
   - Tile should have child objects: `House_1`, `House_2`, etc. (if houses > 0)
   - Or `Hotel` (if hasHotel = true)

---

## Step 5: Verify Setup Checklist

- [ ] All property tiles have `BuildingVisuals` component
- [ ] All `BuildingVisuals` have `houseSprite` assigned
- [ ] All `BuildingVisuals` have `hotelSprite` assigned
- [ ] `Sorting Order` is set to 10 or higher
- [ ] Property has `propertyType = Regular` (not Utility/Transportation)
- [ ] Property has `houses > 0` or `hasHotel = true` (check in Inspector)
- [ ] Console shows debug logs when building
- [ ] Tile has child GameObjects after building (check Hierarchy)

---

## Quick Fix Script

If everything else fails, use this to reset and re-setup:

1. **Create empty GameObject** → `ResetTool`
2. **Add this script:**
   ```csharp
   using UnityEngine;
   
   public class ResetBuildingVisuals : MonoBehaviour
   {
       [ContextMenu("Reset All BuildingVisuals")]
       void ResetAll()
       {
           // Remove all
           BuildingVisuals[] all = FindObjectsOfType<BuildingVisuals>(true);
           foreach (var v in all) DestroyImmediate(v);
           
           // Re-add
           BuildingVisualsManager.AddVisualsToAllTiles();
           
           Debug.Log("✓ Reset complete! Now assign sprites using BuildingVisualsSetup.");
       }
   }
   ```
3. **Right-click** → **"Reset All BuildingVisuals"**
4. **Then use BuildingVisualsSetup** to assign sprites

---

## Still Not Working?

1. **Check Console** for any errors (red messages)
2. **Share the console output** - the debug logs will show exactly what's happening
3. **Verify sprites are valid:**
   - Select sprite in Project
   - Inspector should show: `Texture Type: Sprite (2D and UI)`
   - Sprite should have a preview image

---

## Expected Console Output (When Working)

When you build a house, you should see:
```
✓ Built house 1/4 on Kuje for ₦150,000!
  New rent: ₦100,000
[BuildingVisualsManager] Updating visuals for tile: Tile_01
[BuildingVisuals] Updating visuals for Kuje: houses=1, hasHotel=False, houseSprite=True, hotelSprite=True
[BuildingVisuals] Creating 1 house sprites on Tile_01
[BuildingVisuals] Created house 1 at localPos=(0, 0.2, -0.1), scale=0.3, sortingOrder=10
```

If you see this but still no sprites → **Sorting Order or Position issue** (Issues 3-4)
