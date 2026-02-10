# Tile Selection & Details View Setup Guide

## Overview

This guide explains how to set up tile selection so players can click on tiles to see their details.

---

## Step 1: Create Tile Details Panel Document

1. **In Hierarchy**, find your **UI Manager** GameObject
2. **Right-click** on UI Manager → **Create Empty**
3. **Rename** it to **"Tile Details Panel Document"**
4. **Select** "Tile Details Panel Document"
5. **Add Component** → **UI Document**
6. **In UIDocument component:**
   - Set **Source Asset** to: `Assets/UI Toolkit/UXML/TileDetailsPanel.uxml`
7. **Select UI Manager** GameObject
8. **In UIDocumentManager component**, drag **Tile Details Panel Document** to the **Tile Details Panel Document** field

---

## Step 2: Add TileClickHandler to Tiles

You have two options:

### Option A: Add to Individual Tiles (Manual)

1. **Select a tile** GameObject in Hierarchy
2. **Add Component** → **Tile Click Handler**
3. **In Inspector**, assign:
   - **Ui Manager** → Your UIDocumentManager GameObject
   - **Turn Manager** → Your TurnManager GameObject (optional)
4. **Repeat** for each tile you want to be clickable

    ### Option B: Add to All Tiles Automatically (Recommended)

1. **Create an empty GameObject** named "Tile Click Manager"
2. **Add Component** → **Tile Click Manager** (script below)
3. **In Inspector**, assign:
   - **Ui Manager** → Your UIDocumentManager GameObject
   - **Turn Manager** → Your TurnManager GameObject (optional)
   - **Board Tiles Parent** → Your BoardTiles GameObject (parent of all tiles)

**OR** use this helper script:

```csharp
// TileClickManager.cs - Add this script to a GameObject
using UnityEngine;

public class TileClickManager : MonoBehaviour
{
    [Header("References")]
    public UIDocumentManager uiManager;
    public TurnManager turnManager;
    
    [Header("Setup")]
    [Tooltip("Parent GameObject containing all tiles")]
    public Transform boardTilesParent;
    
    void Start()
    {
        if (boardTilesParent == null)
        {
            // Try to find BoardTiles automatically
            GameObject boardTiles = GameObject.Find("BoardTiles");
            if (boardTiles != null)
                boardTilesParent = boardTiles.transform;
        }
        
        if (boardTilesParent == null)
        {
            Debug.LogError("TileClickManager: BoardTiles parent not found!");
            return;
        }
        
        // Auto-find managers if not assigned
        if (uiManager == null)
            uiManager = FindFirstObjectByType<UIDocumentManager>();
        
        if (turnManager == null)
            turnManager = FindFirstObjectByType<TurnManager>();
        
        // Add TileClickHandler to all tiles
        AddClickHandlersToAllTiles();
    }
    
    void AddClickHandlersToAllTiles()
    {
        TileInfo[] allTiles = boardTilesParent.GetComponentsInChildren<TileInfo>();
        
        foreach (TileInfo tile in allTiles)
        {
            // Check if already has TileClickHandler
            if (tile.GetComponent<TileClickHandler>() != null)
                continue;
            
            // Add TileClickHandler
            TileClickHandler handler = tile.gameObject.AddComponent<TileClickHandler>();
            handler.uiManager = uiManager;
            handler.turnManager = turnManager;
            
            Debug.Log($"Added TileClickHandler to {tile.gameObject.name}");
        }
        
        Debug.Log($"Added TileClickHandler to {allTiles.Length} tiles");
    }
}
```

---

## Step 3: Verify Colliders

**Important:** Tiles need colliders to be clickable!

1. **Select a tile** GameObject
2. **Check** if it has a **Collider2D** component (BoxCollider2D, CircleCollider2D, etc.)
3. **If missing:**
   - **Add Component** → **Box Collider 2D**
   - **Adjust size** to cover the tile (usually 1x1 or match tile sprite size)

**Note:** TileClickHandler automatically adds a BoxCollider2D if none exists, but you may want to adjust the size manually.

---

## Step 4: Test

1. **Play the game**
2. **Click on any tile** (property, GO, Chance, etc.)
3. **Tile Details Panel should appear** showing:
   - Tile name/type
   - Property details (if it's a property)
   - Owner information
   - Rent information
   - Building status
   - Mortgage status
   - Rent table (for Regular properties)
4. **Click CLOSE** to dismiss the panel

---

## UI Features

The Tile Details Panel shows:

### For Property Tiles:
- ✅ Property name
- ✅ Property type (Regular/Utility/Transportation)
- ✅ Purchase price
- ✅ Current owner (or "Unowned")
- ✅ Current rent amount
- ✅ Building status (houses/hotels)
- ✅ Mortgage status
- ✅ Group ID and tier label
- ✅ Rent table (for Regular properties showing rent at each level)

### For Non-Property Tiles:
- ✅ Tile type (GO, Chance, Community Chest, Tax, Jail, Free Parking, Go To Jail)
- ✅ Basic tile information

---

## Troubleshooting

### Tiles Not Clickable:
- **Check colliders**: Tiles must have Collider2D components
- **Check camera**: Make sure Main Camera is set correctly
- **Check TileClickHandler**: Verify component is attached to tiles
- **Check Console**: Look for errors about missing components

### Panel Not Showing:
- **Check Tile Details Panel Document** is assigned in UIDocumentManager
- **Verify TileDetailsPanel.uxml** is assigned to UIDocument
- **Check Console** for errors

### Wrong Information Displayed:
- **Verify TileInfo component** has correct property data
- **Check property owner** is set correctly
- **Verify rent calculations** are working

---

## Advanced: Touch/Mobile Support

For mobile/touch support, you can use raycasting instead of OnMouseDown:

1. Create an **Input Manager** script that handles touch/click input
2. Use `TileClickHandler.HandleRaycast()` method
3. Cast ray from camera to screen position
4. Call `ShowTileDetails()` on hit tile

---

## Notes

- **Click anywhere on tile** to see details
- **Works for all tile types** (properties, GO, Chance, etc.)
- **Non-blocking**: Panel can be closed and game continues
- **Real-time updates**: Shows current owner, buildings, mortgage status
- **Rent table**: Only shown for Regular properties with rentByLevel data

---

## Files Created

- ✅ `TileClickHandler.cs` - Handles tile clicking
- ✅ `UI Toolkit/UXML/TileDetailsPanel.uxml` - Tile details UI
- ✅ `TILE_SELECTION_SETUP_GUIDE.md` - This guide

---

## Quick Setup Checklist

- [ ] Create Tile Details Panel Document GameObject
- [ ] Assign TileDetailsPanel.uxml to UIDocument
- [ ] Assign to UIDocumentManager's Tile Details Panel Document field
- [ ] Add TileClickHandler to tiles (manual or automatic)
- [ ] Verify tiles have colliders
- [ ] Test clicking on tiles
- [ ] Verify panel shows correct information
