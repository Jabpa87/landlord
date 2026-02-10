# House/Hotel Visual Sprites Setup Guide

## ✅ Code Implementation Complete

The `BuildingVisuals.cs` component has been created and integrated with `Player.cs`. When you build houses or hotels, the visuals will automatically update on the tiles.

## 🎨 Step-by-Step Visual Setup

### Step 1: Create or Import House/Hotel Sprites

You have **3 options** for getting sprites:

#### **Option A: Use Simple Shapes (Quick Test)**
1. In Unity, right-click in Project → **Create → Sprites → Square** (or Circle)
2. Rename to `HouseSprite`
3. Duplicate it, rename to `HotelSprite`
4. Select `HotelSprite` → In Inspector, change **Color** to red (or different color) to distinguish it

#### **Option B: Create Custom Sprites (Recommended)**
1. **Create in image editor** (Photoshop, GIMP, Paint.NET, or online tools like Piskel):
   - **House sprite**: Simple house shape (e.g., 64x64 or 128x128 pixels)
     - Rectangle base + triangle roof
     - Use a simple color (e.g., green, blue)
   - **Hotel sprite**: Larger building (e.g., 64x64 or 128x128 pixels)
     - Taller rectangle with multiple windows
     - Use a different color (e.g., red, gold)
   
2. **Save as PNG** with transparent background
3. **Import to Unity**:
   - Drag PNG files into `Assets/` folder
   - Select each sprite → Inspector → **Texture Type**: `Sprite (2D and UI)`
   - Click **Apply**

#### **Option C: Download Free Assets**
- Search Unity Asset Store for "house sprite" or "building icon"
- Or use free resources like:
  - [OpenGameArt.org](https://opengameart.org/)
  - [Kenney.nl](https://kenney.nl/assets) (free game assets)
  - [Itch.io free assets](https://itch.io/game-assets/free)

**Recommended size**: 64x64 to 128x128 pixels (small, simple icons work best)

---

### Step 2: Add BuildingVisuals Component to Property Tiles

You have **2 options**:

#### **Option A: Automatic (Recommended)**
1. Create an empty GameObject in your scene (e.g., `BuildingVisualsManager`)
2. Add a script component (create new C# script) with this code:
   ```csharp
   using UnityEngine;
   
   public class BuildingVisualsSetup : MonoBehaviour
   {
       [ContextMenu("Add BuildingVisuals to All Property Tiles")]
       void SetupAllTiles()
       {
           BuildingVisualsManager.AddVisualsToAllTiles();
           BuildingVisualsManager.UpdateAllTiles();
           Debug.Log("✓ BuildingVisuals added to all property tiles!");
       }
   }
   ```
3. Right-click the component → **"Add BuildingVisuals to All Property Tiles"**
4. This automatically adds `BuildingVisuals` to all property tiles

#### **Option B: Manual (Per Tile)**
1. Select a property tile in the scene
2. In Inspector, click **Add Component**
3. Search for `BuildingVisuals` → Add it
4. Repeat for all property tiles

---

### Step 3: Assign Sprites to BuildingVisuals

#### **If you used Option A (Automatic):**
1. Select **one property tile** that has `BuildingVisuals`
2. In Inspector, find the **BuildingVisuals** component
3. Assign sprites:
   - **House Sprite**: Drag your house sprite from Project
   - **Hotel Sprite**: Drag your hotel sprite from Project

#### **If you have many tiles (Recommended approach):**
1. **Create a prefab**:
   - Select one property tile
   - Configure `BuildingVisuals` with sprites
   - Drag it to Project to create a prefab
   - Apply prefab changes to all tiles (or use it for new tiles)

#### **Or use a manager script:**
Create a script to assign sprites to all BuildingVisuals at once:
```csharp
using UnityEngine;

public class AssignBuildingSprites : MonoBehaviour
{
    public Sprite houseSprite;
    public Sprite hotelSprite;
    
    [ContextMenu("Assign Sprites to All Tiles")]
    void AssignSprites()
    {
        BuildingVisuals[] allVisuals = FindObjectsOfType<BuildingVisuals>(true);
        foreach (BuildingVisuals v in allVisuals)
        {
            v.houseSprite = houseSprite;
            v.hotelSprite = hotelSprite;
        }
        Debug.Log($"✓ Assigned sprites to {allVisuals.Length} tiles!");
    }
}
```

---

### Step 4: Configure Layout Settings (Optional)

In each `BuildingVisuals` component, you can adjust:

- **House Offset**: Position of houses relative to tile center (default: `(0, 0.2, -0.1)`)
- **Hotel Offset**: Position of hotel relative to tile center (default: `(0, 0.2, -0.1)`)
- **House Spacing**: Horizontal spacing between multiple houses (default: `0.15`)
- **House Scale**: Size of house sprites (default: `0.3`)
- **Hotel Scale**: Size of hotel sprite (default: `0.4`)
- **Sorting Layer ID**: Rendering layer (should be above tile, below UI)
- **Sorting Order**: Render order within layer (default: `10`)

**Tip**: Adjust these values in Play Mode to see changes in real-time, then copy values back to the component.

---

### Step 5: Test the System

1. **Enter Play Mode**
2. **Buy properties** in the same group (e.g., Kuje + Karshi from G1)
3. **Land on your property** → Build panel appears
4. **Click "BUILD HOUSE"** → House sprite should appear on the tile!
5. **Build 4 houses** → 4 house sprites should be visible
6. **Build hotel** → Hotel sprite replaces the 4 houses

---

## 🎯 Visual Layout Examples

### **Small Tiles (1x1 world units):**
- House Scale: `0.2` - `0.3`
- Hotel Scale: `0.3` - `0.4`
- House Spacing: `0.1` - `0.15`
- House Offset: `(0, 0.15, -0.1)`

### **Medium Tiles (2x2 world units):**
- House Scale: `0.3` - `0.4`
- Hotel Scale: `0.4` - `0.5`
- House Spacing: `0.15` - `0.2`
- House Offset: `(0, 0.2, -0.1)`

### **Large Tiles (3x3+ world units):**
- House Scale: `0.4` - `0.6`
- Hotel Scale: `0.5` - `0.7`
- House Spacing: `0.2` - `0.3`
- House Offset: `(0, 0.3, -0.1)`

---

## 🐛 Troubleshooting

**Houses don't appear:**
- Check that `houseSprite` is assigned in BuildingVisuals component
- Check that the tile has `TileInfo` with `tileType = Property`
- Check that `property.houses > 0` (use Inspector or console logs)
- Check Sorting Layer/Order (should be above tile sprite)

**Houses appear in wrong position:**
- Adjust `houseOffset` and `houseSpacing` in BuildingVisuals
- Check tile's local coordinate system
- Try different Z values (e.g., `-0.1` to render above tile)

**Hotel doesn't replace houses:**
- Check that `hotelSprite` is assigned
- Check that `property.hasHotel = true` (should be set when building hotel)
- Check console for errors

**Visuals don't update after building:**
- The code automatically calls `BuildingVisualsManager.UpdateTileVisuals()` when building
- If it doesn't work, manually call it: `BuildingVisualsManager.UpdateTileVisuals(tile)`

**Performance issues (too many sprites):**
- Only property tiles have BuildingVisuals (non-property tiles are skipped)
- Sprites are destroyed/recreated on update (not pooled, but fine for 28 tiles)

---

## 🎨 Advanced: Custom Sprite Colors by Owner

If you want houses to show the owner's color, you can modify `BuildingVisuals.cs`:

```csharp
void ShowHouses(int count)
{
    // ... existing code ...
    
    // Add owner color tint
    if (tileInfo.property != null && tileInfo.property.owner != null)
    {
        Color ownerColor = GetOwnerColor(tileInfo.property.owner);
        sr.color = ownerColor; // Tint house sprite
    }
}
```

---

## 📋 Quick Checklist

- [ ] Create/import house sprite (64x64 or 128x128 PNG)
- [ ] Create/import hotel sprite (64x64 or 128x128 PNG)
- [ ] Import sprites to Unity (Texture Type: Sprite)
- [ ] Add BuildingVisuals to property tiles (automatic or manual)
- [ ] Assign houseSprite and hotelSprite in BuildingVisuals
- [ ] Adjust layout settings (offset, scale, spacing) if needed
- [ ] Test in Play Mode: build houses → see sprites appear
- [ ] Test building hotel → see hotel replace houses

---

## 🚀 Next Steps

Once visuals are working:
- Add animations (e.g., houses pop in when built)
- Add sound effects when building
- Add particle effects
- Create different house sprites for different property tiers
- Add owner color coding

The system is ready to use! Just add your sprites and configure the components.
