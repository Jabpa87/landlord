# Tile Background Setup Guide

## Overview

The Tile Background system adds a background sprite layer behind each tile, giving tiles a visual background that renders behind the main tile sprite.

---

## Quick Setup

### **Option 1: Automatic Setup (Recommended)**

1. **Create an empty GameObject** in your scene (name it "Tile Background Manager")
2. **Add Component** → **Tile Background Manager**
3. **In Inspector:**
   - **Board Tiles Parent** → Drag your BoardTiles GameObject (or leave null to auto-find)
   - **Background Sprite** → (Optional) Assign a custom sprite, or leave null for solid color rectangle
   - **Background Color** → Set the color (default: Light gray)
   - **Background Size** → Adjust size relative to tile (default: 1,1 = same size)
   - **Sorting Order** → Keep at -1 (renders behind main tile)
4. **Right-click the component** → **"Add Background to All Tiles"**
5. **Done!** All tiles now have backgrounds

---

### **Option 2: Manual Setup (Per Tile)**

1. **Select a tile** in Hierarchy
2. **Add Component** → **Tile Background**
3. **In Inspector**, customize:
   - **Background Sprite** → Assign a sprite (optional)
   - **Background Color** → Set the color
   - **Background Size** → Size relative to tile (1.0 = same size)
   - **Background Offset** → Position offset (default: 0,0,0)
   - **Sorting Order** → -1 (behind main tile)
4. **Repeat** for each tile

---

## How It Works

### **Visual Layer System**
- **Background Layer** - Renders behind main tile sprite
- **Main Tile Sprite** - Your existing tile sprite (on top)
- **Sorting Order** - Background uses -1, main tile uses 0 or higher

### **Automatic Sprite Creation**
- If no background sprite is assigned, creates a solid colored rectangle
- Rectangle matches tile size automatically
- Uses the background color you specify

### **Custom Sprites**
- Assign any sprite to `Background Sprite` field
- Sprite will be scaled to match tile size
- Background color acts as a tint

---

## Customization

### **Change Background Color**
1. Select a tile with TileBackground
2. Adjust **Background Color** in Inspector
3. Or use TileBackgroundManager → **"Update All Background Colors"**

### **Change Background Size**
1. Select a tile with TileBackground
2. Adjust **Background Size**:
   - `(1.0, 1.0)` = Same size as tile
   - `(1.1, 1.1)` = 10% larger (creates border effect)
   - `(0.9, 0.9)` = 10% smaller (creates inset effect)

### **Use Custom Background Sprite**
1. Create or import a sprite for the background
2. Select a tile with TileBackground
3. Drag sprite to **Background Sprite** field
4. Background will use your custom sprite

### **Adjust Position**
1. Select a tile with TileBackground
2. Adjust **Background Offset**:
   - `(0, 0, 0)` = Centered
   - `(0, 0.1, 0)` = Slightly up
   - `(0.1, 0, 0)` = Slightly right

---

## Visual Examples

### **Solid Color Background**
- **Background Sprite**: null (empty)
- **Background Color**: Light gray (0.9, 0.9, 0.9)
- **Result**: Clean solid background behind tile

### **Larger Background (Border Effect)**
- **Background Size**: (1.1, 1.1)
- **Background Color**: Dark gray
- **Result**: Background extends beyond tile, creating a border

### **Custom Sprite Background**
- **Background Sprite**: Your custom sprite
- **Background Color**: White (acts as tint)
- **Result**: Custom pattern/texture behind tile

---

## Integration with Other Systems

### **Works With:**
- ✅ Main tile sprite (renders behind it)
- ✅ BuildingVisuals (houses/hotels render on top)
- ✅ PropertyOwnershipTag (ownership tag renders on top)
- ✅ TileHighlight (highlight renders on top)

### **Sorting Order:**
- **Background**: -1 (lowest, behind everything)
- **Main Tile**: 0 (default)
- **Buildings**: 10 (on top)
- **Tags/Highlights**: 100+ (on top)

---

## Troubleshooting

### **Background Not Showing**
- **Check:** TileBackground component is on tile
- **Check:** Sorting order is -1 (or lower than main tile)
- **Check:** Background color alpha is not 0
- **Check:** Background GameObject is active

### **Background Too Large/Small**
- **Adjust:** Background Size in Inspector
- **Try:** (1.0, 1.0) for same size, (1.1, 1.1) for larger

### **Background Wrong Color**
- **Check:** Background Color in Inspector
- **Update:** Use "Update All Background Colors" in manager

### **Background Overlapping Main Tile**
- **Check:** Sorting order is -1 (should be lower than main tile)
- **Check:** Main tile's SpriteRenderer sorting order is 0 or higher

---

## Performance Notes

- Backgrounds are lightweight (one SpriteRenderer per tile)
- Minimal performance impact
- Can be disabled per tile if needed

---

## Example Setup

### **Scene Setup:**
```
Scene
├── BoardTiles
│   ├── Tile_GO (has TileBackground)
│   ├── Tile_Property1 (has TileBackground)
│   ├── Tile_Property2 (has TileBackground)
│   └── ...
└── Tile Background Manager (has TileBackgroundManager)
```

### **Component Settings:**
- **TileBackgroundManager:**
  - Board Tiles Parent: BoardTiles
  - Background Sprite: (null = solid color)
  - Background Color: Light Gray (0.9, 0.9, 0.9, 1.0)
  - Background Size: (1.0, 1.0)
  - Sorting Order: -1

- **TileBackground (on each tile):**
  - Background Sprite: (null = auto-generated rectangle)
  - Background Color: Light Gray
  - Background Size: (1.0, 1.0)
  - Sorting Order: -1

---

## Visual Result

When background is added:
- ✅ Colored background appears behind tile
- ✅ Background matches tile size (or custom size)
- ✅ Renders behind main tile sprite
- ✅ Can use custom sprite or solid color
- ✅ Easy to customize per tile or globally

---

*The tile background system gives your tiles a polished, professional look with a clean background layer!*
