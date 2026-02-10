# Property Ownership Tag Setup Guide

## Overview

The Property Ownership Tag system displays a colored visual indicator on each property tile showing which player owns it. The tag uses the owner's player color for easy visual identification.

---

## Quick Setup

### **Option 1: Automatic Setup (Recommended)**

1. **Create an empty GameObject** in your scene (name it "Property Ownership Tag Manager")
2. **Add Component** → **Property Ownership Tag Manager**
3. **In Inspector:**
   - **Board Tiles Parent** → Drag your BoardTiles GameObject (or leave null to auto-find)
   - **Auto Update** → ✅ Checked (updates tags automatically)
   - **Update Interval** → 0.5 seconds (how often to check for changes)
4. **Play the game** → Tags will automatically appear on owned properties!

---

### **Option 2: Manual Setup (Per Tile)**

1. **Select a property tile** in Hierarchy
2. **Add Component** → **Property Ownership Tag**
3. **In Inspector**, customize:
   - **Tag Offset** - Position of tag relative to tile (default: above tile)
   - **Tag Size** - Size of the tag (default: 0.3 x 0.3)
   - **Sorting Order** - Render order (higher = on top, default: 100)
   - **Show Player Name** - Display player name on tag (default: true)
   - **Tag Sprite** - Custom sprite (optional, creates circle if null)
4. **Repeat** for each property tile

---

## How It Works

### **Visual Indicator**
- **Colored Circle/Badge** - Shows owner's player color
- **Player Name** - First 3 letters of player name (optional)
- **Position** - Above tile by default (customizable)

### **Automatic Updates**
- Tags update when properties are bought
- Tags update when properties are traded
- Tags update when properties are transferred (bankruptcy)
- Tags hide when properties are unowned

### **Color System**
- Each player has a `playerColor` field
- Tag uses owner's `playerColor`
- Text color adjusts automatically (white/black) for visibility

---

## Customization

### **Change Tag Position**
1. Select a tile with PropertyOwnershipTag
2. Adjust **Tag Offset**:
   - `(0, 0.5, 0)` = Above tile
   - `(0.5, 0, 0)` = Right side
   - `(-0.5, 0, 0)` = Left side
   - `(0, -0.5, 0)` = Below tile

### **Change Tag Size**
1. Select a tile with PropertyOwnershipTag
2. Adjust **Tag Size**:
   - `(0.3, 0.3)` = Small tag
   - `(0.5, 0.5)` = Medium tag
   - `(0.8, 0.8)` = Large tag

### **Hide Player Name**
1. Select a tile with PropertyOwnershipTag
2. **Uncheck "Show Player Name"**
3. Tag will show only colored circle

### **Use Custom Sprite**
1. Create or import a sprite for the tag
2. Select a tile with PropertyOwnershipTag
3. Drag sprite to **Tag Sprite** field
4. Tag will use your custom sprite instead of generated circle

---

## Integration with Game Systems

### **Property Purchase**
- When player buys property → Tag appears with player's color
- Automatically detected by update system

### **Trading**
- When properties are traded → Tags update for both players
- Call `PropertyOwnershipTagManager.UpdateAllTags()` after trade

### **Auction**
- When property is won in auction → Tag appears with winner's color
- Automatically detected by update system

### **Bankruptcy**
- When properties transfer → Tags update to new owner
- Automatically detected by update system

---

## Manual Refresh

If tags don't update automatically:

1. **Find Property Ownership Tag Manager** in Hierarchy
2. **Right-click** the component
3. **Click "Refresh All Ownership Tags"**
4. All tags will update immediately

---

## Troubleshooting

### **Tags Not Showing**
- **Check:** Property is owned (not unowned)
- **Check:** PropertyOwnershipTag component is on tile
- **Check:** Tag GameObject is active
- **Check:** Sorting order is high enough

### **Tags Showing Wrong Color**
- **Check:** Player's `playerColor` is set correctly
- **Check:** Tag is updating (try manual refresh)
- **Check:** Property owner is correct

### **Tags Not Updating**
- **Check:** PropertyOwnershipTagManager is in scene
- **Check:** Auto Update is enabled
- **Check:** Update Interval is reasonable (> 0)
- **Try:** Manual refresh via context menu

### **Tags Overlapping**
- **Adjust:** Tag Offset to position tags differently
- **Adjust:** Tag Size to make tags smaller
- **Adjust:** Sorting Order to control render order

---

## Performance Notes

- **Update Interval:** Lower = more responsive but more CPU usage
- **Recommended:** 0.5 seconds (updates twice per second)
- **For Testing:** 0.1 seconds (very responsive)
- **For Production:** 1.0 seconds (less CPU usage)

---

## Example Setup

### **Scene Setup:**
```
Scene
├── BoardTiles
│   ├── Tile_GO
│   ├── Tile_Property1 (has PropertyOwnershipTag)
│   ├── Tile_Property2 (has PropertyOwnershipTag)
│   └── ...
└── Property Ownership Tag Manager (has PropertyOwnershipTagManager)
```

### **Component Settings:**
- **PropertyOwnershipTagManager:**
  - Board Tiles Parent: BoardTiles
  - Auto Update: ✅
  - Update Interval: 0.5

- **PropertyOwnershipTag (on each property tile):**
  - Tag Offset: (0, 0.5, 0)
  - Tag Size: (0.3, 0.3)
  - Sorting Order: 100
  - Show Player Name: ✅

---

## Visual Result

When a player owns a property:
- ✅ Colored circle/badge appears above tile
- ✅ Color matches player's color
- ✅ Player name (first 3 letters) shown on tag
- ✅ Tag visible from any angle
- ✅ Updates automatically when ownership changes

---

*The ownership tag system makes it easy to see at a glance which properties belong to which players!*
