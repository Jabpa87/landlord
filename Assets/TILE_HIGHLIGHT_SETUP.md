# Tile Highlight & Animation Setup Guide

## Overview

When you click a tile, it will now:
1. **Animate** with a scale and fade effect
2. **Show a highlight** (yellow outline) around the tile
3. **Keep the highlight visible** while the tile details panel is open
4. **Remove the highlight** when you close the panel

---

## How It Works

### **TileHighlight Component**
- Automatically added to tiles when `TileClickHandler` is present
- Creates a highlight sprite behind the tile (acts as an outline)
- Animates in/out with scale and fade effects

### **Animation Details**
- **Two Animation Types Available:**
  - **Scale Animation:** Tile scales up and overlaps other tiles (brings forward)
  - **Push Animation:** Tile pushes away from board center (maintains size)
- **Fade Animation:** Highlight fades in smoothly
- **Duration:** 0.3 seconds (configurable)
- **Color:** Yellow with transparency (configurable)
- **Board Center:** Push animation uses board center to determine push direction

---

## Setup

### **Automatic Setup (Recommended)**
The highlight system is **automatically set up** when you use `TileClickManager` to add `TileClickHandler` to tiles. No manual setup needed!

### **Manual Setup (If Needed)**
1. **Select a tile** in Hierarchy
2. **Check Inspector:**
   - Should have `TileClickHandler` component
   - Should have `TileHighlight` component (auto-added)
3. **In TileHighlight component**, you can customize:
   - **Animation Type** - Choose "Scale" or "Push" (default: Push)
   - **Animation Duration** - How long animation takes (default: 0.3 seconds)
   - **Scale Amount** - For Scale animation: how much to scale (default: 1.1x = 10% larger)
   - **Push Forward Amount** - For Push animation: how far tile moves (default: 0.1 units, reduced by 50%)
   - **Board Center** - Reference for push direction (auto-found from BuildingVisuals or "BoardCenter" GameObject)
   - **Highlight Color** - Color of the outline (default: Yellow)
   - **Outline Width** - Width of the outline (default: 0.15)

---

## Customization

### **Change Highlight Color**
1. Select a tile
2. Find **TileHighlight** component
3. Click **Highlight Color** field
4. Choose your color (e.g., Blue, Green, Red)

### **Change Animation Speed**
1. Select a tile
2. Find **TileHighlight** component
3. Adjust **Animation Duration** (lower = faster)

### **Change Animation Type**
1. Select a tile
2. Find **TileHighlight** component
3. Change **Animation Type** dropdown:
   - **Scale** - Tile grows and overlaps others
   - **Push** - Tile moves away from board center

### **Change Scale Amount (Scale Animation)**
1. Select a tile
2. Find **TileHighlight** component
3. Adjust **Scale Amount** (1.1 = 10% larger, 1.2 = 20% larger)

### **Change Push Distance (Push Animation)**
1. Select a tile
2. Find **TileHighlight** component
3. Adjust **Push Forward Amount** (default: 0.1 units, reduced by 50% from original)

### **Disable Highlight for Specific Tiles**
1. Select a tile
2. Find **TileClickHandler** component
3. **Uncheck "Enable Highlight"**

---

## How It Works with Panel

### **When You Click a Tile (Scale Animation):**
1. ✅ Previous tile's highlight is removed (if any)
2. ✅ Current tile scales up and shows highlight
3. ✅ Tile overlaps other tiles (brought forward)
4. ✅ Tile details panel opens
5. ✅ Highlight stays visible, tile stays scaled

### **When You Click a Tile (Push Animation):**
1. ✅ Previous tile's highlight is removed (if any)
2. ✅ Current tile pushes away from board center and shows highlight
3. ✅ Tile maintains size, just moves position
4. ✅ Tile details panel opens
5. ✅ Highlight stays visible, tile stays pushed forward

### **When You Close the Panel:**
1. ✅ Panel closes
2. ✅ Highlight animates out
3. ✅ Tile returns to original size/position

---

## Troubleshooting

### **Highlight Not Showing**
- **Check:** Tile has `TileHighlight` component
- **Check:** Tile has `SpriteRenderer` component (required)
- **Check:** `Enable Highlight` is checked in `TileClickHandler`

### **Highlight Not Removing When Panel Closes**
- **Check:** `HideTileDetailsPanel()` is being called
- **Check:** Console for errors

### **Animation Too Fast/Slow**
- **Adjust:** `Animation Duration` in `TileHighlight` component
- **Default:** 0.3 seconds

### **Highlight Color Not Visible**
- **Check:** Highlight color alpha (transparency)
- **Try:** Increase alpha value (make less transparent)
- **Try:** Change to a brighter color

---

## Technical Details

### **Components Used**
- `TileHighlight.cs` - Handles highlight visual and animation
- `TileClickHandler.cs` - Manages highlight show/hide
- `UIDocumentManager.cs` - Removes highlight when panel closes

### **Animation System**
- Uses Unity Coroutines for smooth animation
- Ease-out for highlight in, ease-in for highlight out
- **Scale Animation:** Scales tile transform and fades highlight sprite, increases sorting order
- **Push Animation:** Moves tile position away from board center (maintains size) and fades highlight sprite, increases sorting order
- Both animations increase sorting order to bring tile in front of others
- Push direction automatically calculated from board center position

### **Performance**
- Highlight GameObject is created once per tile
- Only active when tile is selected
- Minimal performance impact

---

## Example Usage

1. **Click a tile** → See animation and highlight
2. **Panel opens** → Highlight stays visible
3. **Click "CLOSE"** → Highlight animates out
4. **Click another tile** → Previous highlight removed, new one appears

---

## Notes

- Highlight works with all tile types (Properties, GO, Chance, etc.)
- Only one tile can be highlighted at a time
- Highlight automatically cleans up when tile is destroyed
- Works with both mouse clicks and touch input (if raycast is used)

---

*Enjoy the visual feedback! The highlight makes it clear which tile you've selected.*
