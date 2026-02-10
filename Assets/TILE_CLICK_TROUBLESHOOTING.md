# Tile Click Troubleshooting Guide

## Problem: Tiles Not Clickable or UI Not Showing

If clicking tiles doesn't show the details panel, follow these steps:

---

## Step 1: Check Tile Details Panel Document Setup

### Verify Panel Document Exists:
1. **In Hierarchy**, look for **"Tile Details Panel Document"**
2. **Select** it
3. **Check Inspector:**
   - Should have **UIDocument** component
   - **Source Asset** should be set to `TileDetailsPanel.uxml`
   - **Panel Settings** should be assigned (usually auto-assigned)

### Verify UIDocumentManager Assignment:
1. **Select "UI Manager"** GameObject
2. **In Inspector**, find **UIDocumentManager** component
3. **Check "Tile Details Panel Document" field:**
   - Should have **"Tile Details Panel Document"** GameObject assigned
   - If empty, drag the GameObject from Hierarchy

**If missing, create it:**
- Right-click UI Manager → Create Empty
- Rename to "Tile Details Panel Document"
- Add Component → UIDocument
- Set Source Asset to `TileDetailsPanel.uxml`
- Drag to UIDocumentManager's "Tile Details Panel Document" field

---

## Step 2: Check Colliders

### Common Collider Issues:

#### Issue A: Colliders Too Small
**Problem:** Collider doesn't cover the tile sprite
**Solution:**
1. Select a tile
2. Check **BoxCollider2D** component
3. **Adjust Size** to match tile size:
   - If tile is 1x1 unit: Size = (1, 1)
   - If tile is 2x2 units: Size = (2, 2)
   - Check tile sprite size in SpriteRenderer

#### Issue B: Colliders Overlapping
**Problem:** Multiple colliders blocking clicks
**Solution:**
1. Check if tiles have **multiple colliders**
2. Remove duplicate colliders (keep only BoxCollider2D)
3. Make sure colliders don't overlap unnecessarily

#### Issue C: Collider is Trigger
**Problem:** Collider set as "Is Trigger" won't work with OnMouseDown
**Solution:**
1. Select tile
2. Check **BoxCollider2D** component
3. **Uncheck "Is Trigger"** (should be false)

#### Issue D: Collider on Wrong Layer
**Problem:** Collider on layer that camera can't see
**Solution:**
1. Check tile's **Layer** (top of Inspector)
2. Make sure it's on a visible layer (usually "Default")
3. Check camera's **Culling Mask** includes that layer

---

## Step 3: Check Camera Setup

### For OnMouseDown to Work:
1. **Camera must be set as "Main Camera"**
   - Select your camera
   - Check **Tag** = "MainCamera"
   - OR set `Camera.main` in code

2. **Camera must see the tiles**
   - Check camera's **Culling Mask** includes tile layer
   - Check camera's **Projection** (Orthographic for 2D)
   - Check camera can see the Z position of tiles

---

## Step 4: Check Console for Errors

### When Clicking a Tile:
1. **Open Console** (Window → General → Console)
2. **Click a tile**
3. **Look for:**
   - ✅ "Tile clicked!" message (means click detected)
   - ❌ "TileDetailsPanelDocument not assigned!" (setup issue)
   - ❌ "No TileInfo component found!" (tile missing TileInfo)
   - ❌ "UIDocumentManager not found!" (UI Manager missing)

---

## Step 5: Check UI Panel Visibility

### The Panel Might Be Displaying But Hidden:

#### Check Panel Position:
1. **Play the game**
2. **Click a tile**
3. **Check if panel appears** (might be off-screen)

#### Check Panel Z-Index:
1. The panel might be **behind other UI**
2. Check **TileDetailsPanel.uxml** positioning
3. Panel should have high z-index or be on top layer

#### Check Panel Display Style:
1. Panel might be set to `DisplayStyle.None`
2. Check `ShowTileDetails()` method sets it to `DisplayStyle.Flex`

---

## Step 6: Add Debug Logging

### Test if Click is Detected:

Add this to `TileClickHandler.cs` in `OnMouseDown()`:

```csharp
void OnMouseDown()
{
    Debug.Log($"=== TILE CLICKED: {gameObject.name} ===");
    
    if (tileInfo == null)
    {
        Debug.LogError("TileInfo is null!");
        return;
    }
    
    if (uiManager == null)
    {
        Debug.LogError("UIDocumentManager is null!");
        return;
    }
    
    Debug.Log("Calling ShowTileDetails...");
    ShowTileDetails();
    Debug.Log("ShowTileDetails called.");
}
```

### Test if Panel is Showing:

Add this to `UIDocumentManager.cs` in `ShowTileDetails()`:

```csharp
public void ShowTileDetails(TileInfo tile)
{
    Debug.Log($"=== ShowTileDetails called for {tile.gameObject.name} ===");
    
    if (tile == null)
    {
        Debug.LogError("Tile is null!");
        return;
    }
    
    if (tileDetailsPanelDocument == null)
    {
        Debug.LogError("Tile Details Panel Document is null! Not assigned in Inspector!");
        return;
    }
    
    if (tileDetailsPanelDocument.rootVisualElement == null)
    {
        Debug.LogError("rootVisualElement is null! UIDocument not initialized!");
        return;
    }
    
    Debug.Log("Setting display to Flex...");
    tileDetailsPanelDocument.rootVisualElement.style.display = DisplayStyle.Flex;
    Debug.Log("Display set to Flex. Panel should be visible now.");
    
    // ... rest of method
}
```

---

## Step 7: Manual Test

### Test Panel Directly:
1. **In Play Mode**, open Console
2. **Type in Console** (if you have a console command system):
   ```csharp
   FindObjectOfType<UIDocumentManager>().ShowTileDetails(FindObjectOfType<TileInfo>());
   ```
3. **OR** add a test button to call this manually

---

## Common Solutions

### Solution 1: Panel Document Not Assigned
**Fix:** Create Tile Details Panel Document and assign to UIDocumentManager

### Solution 2: Collider Issues
**Fix:** 
- Check collider size matches tile
- Uncheck "Is Trigger"
- Remove duplicate colliders

### Solution 3: Camera Issues
**Fix:**
- Set camera as Main Camera
- Check camera can see tiles

### Solution 4: Panel Off-Screen
**Fix:**
- Check TileDetailsPanel.uxml positioning
- Adjust panel position in UXML

### Solution 5: Panel Behind Other UI
**Fix:**
- Check panel z-index
- Move panel to top layer

---

## Quick Diagnostic Checklist

- [ ] Tile Details Panel Document exists in Hierarchy
- [ ] Tile Details Panel Document has UIDocument component
- [ ] UIDocument Source Asset = TileDetailsPanel.uxml
- [ ] UIDocumentManager's "Tile Details Panel Document" field is assigned
- [ ] Tiles have BoxCollider2D component
- [ ] Collider size matches tile size
- [ ] Collider "Is Trigger" is UNCHECKED
- [ ] Camera is set as Main Camera
- [ ] Camera can see tiles (culling mask, position)
- [ ] Console shows no errors when clicking
- [ ] Panel appears when manually calling ShowTileDetails()

---

## Still Not Working?

1. **Check Console** for specific error messages
2. **Add debug logging** (see Step 6)
3. **Test with one tile** that worked before
4. **Compare** working tile vs non-working tiles
5. **Check** if TileClickHandler component is on tiles
6. **Verify** UIDocumentManager is found by TileClickHandler

---

## Alternative: Use TileClickManager

Instead of adding TileClickHandler manually:

1. **Create empty GameObject** "Tile Click Manager"
2. **Add Component** → **Tile Click Manager**
3. **Assign:**
   - Ui Manager → Your UIDocumentManager
   - Board Tiles Parent → Your BoardTiles GameObject
4. **Play game** - it will auto-add TileClickHandler to all tiles

This ensures all tiles are set up correctly!
