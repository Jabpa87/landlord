using UnityEngine;
using UnityEngine.UIElements;

/// <summary>
/// Diagnostic script to test tile clicking and panel display.
/// Add this to any GameObject and use the context menu to test.
/// </summary>
public class TileClickDiagnostic : MonoBehaviour
{
    [ContextMenu("Test Tile Click System")]
    public void TestTileClickSystem()
    {
        Debug.Log("=== TILE CLICK DIAGNOSTIC TEST ===");
        
        // 1. Check UIDocumentManager
        UIDocumentManager uiManager = FindFirstObjectByType<UIDocumentManager>();
        if (uiManager == null)
        {
            Debug.LogError("❌ UIDocumentManager not found!");
            return;
        }
        Debug.Log("✅ UIDocumentManager found");
        
        // 2. Check Tile Details Panel Document
        if (uiManager.tileDetailsPanelDocument == null)
        {
            Debug.LogError("❌ Tile Details Panel Document is NOT assigned in UIDocumentManager!");
            Debug.LogError("   → Create 'Tile Details Panel Document' GameObject");
            Debug.LogError("   → Add UIDocument component");
            Debug.LogError("   → Set Source Asset to TileDetailsPanel.uxml");
            Debug.LogError("   → Assign to UIDocumentManager's 'Tile Details Panel Document' field");
            return;
        }
        Debug.Log("✅ Tile Details Panel Document is assigned");
        
        // 3. Check UIDocument rootVisualElement
        if (uiManager.tileDetailsPanelDocument.rootVisualElement == null)
        {
            Debug.LogError("❌ rootVisualElement is null! UIDocument may not be initialized.");
            return;
        }
        Debug.Log("✅ rootVisualElement exists");
        
        // 4. Check panel visibility
        var display = uiManager.tileDetailsPanelDocument.rootVisualElement.style.display;
        Debug.Log($"Panel display style: {display}");
        
        // 5. Find a tile to test
        TileInfo testTile = FindFirstObjectByType<TileInfo>();
        if (testTile == null)
        {
            Debug.LogError("❌ No TileInfo found in scene!");
            return;
        }
        Debug.Log($"✅ Found test tile: {testTile.gameObject.name}");
        
        // 6. Check if tile has TileClickHandler
        TileClickHandler handler = testTile.GetComponent<TileClickHandler>();
        if (handler == null)
        {
            Debug.LogWarning($"⚠️ Tile {testTile.gameObject.name} doesn't have TileClickHandler component!");
        }
        else
        {
            Debug.Log($"✅ Tile {testTile.gameObject.name} has TileClickHandler");
        }
        
        // 7. Check collider
        Collider2D col = testTile.GetComponent<Collider2D>();
        if (col == null)
        {
            Debug.LogError($"❌ Tile {testTile.gameObject.name} has no Collider2D!");
        }
        else
        {
            Debug.Log($"✅ Tile {testTile.gameObject.name} has {col.GetType().Name}");
            if (col is BoxCollider2D boxCol)
            {
                Debug.Log($"   Size: {boxCol.size}, Is Trigger: {boxCol.isTrigger}");
            }
        }
        
        // 8. Test showing panel
        Debug.Log("=== Testing ShowTileDetails ===");
        uiManager.ShowTileDetails(testTile);
        
        // 9. Check panel after call
        var displayAfter = uiManager.tileDetailsPanelDocument.rootVisualElement.style.display;
        Debug.Log($"Panel display style after ShowTileDetails: {displayAfter}");
        
        if (displayAfter == DisplayStyle.Flex)
        {
            Debug.Log("✅ Panel should be visible now!");
        }
        else
        {
            Debug.LogWarning($"⚠️ Panel display is {displayAfter}, should be Flex!");
        }
        
        Debug.Log("=== DIAGNOSTIC COMPLETE ===");
    }
    
    [ContextMenu("Find All Tiles Without Click Handlers")]
    public void FindTilesWithoutHandlers()
    {
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int withoutHandler = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.GetComponent<TileClickHandler>() == null)
            {
                Debug.LogWarning($"Tile {tile.gameObject.name} has no TileClickHandler!");
                withoutHandler++;
            }
        }
        
        Debug.Log($"Found {withoutHandler} tiles without TileClickHandler out of {allTiles.Length} total tiles.");
    }
    
    [ContextMenu("Find All Tiles Without Colliders")]
    public void FindTilesWithoutColliders()
    {
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int withoutCollider = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.GetComponent<Collider2D>() == null)
            {
                Debug.LogWarning($"Tile {tile.gameObject.name} has no Collider2D!");
                withoutCollider++;
            }
        }
        
        Debug.Log($"Found {withoutCollider} tiles without Collider2D out of {allTiles.Length} total tiles.");
    }
}
