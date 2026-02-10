using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

/// <summary>
/// Diagnostic tool to check if BuildingVisuals are set up correctly.
/// Attach to any GameObject and use context menu to run diagnostics.
/// </summary>
public class BuildingVisualsDiagnostic : MonoBehaviour
{
    [ContextMenu("Check All Property Tiles Setup")]
    public void CheckAllTiles()
    {
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int propertyTiles = 0;
        int withBuildingVisuals = 0;
        int withSprites = 0;
        int regularProperties = 0;
        
        Debug.Log("=== BuildingVisuals Diagnostic ===");
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType != TileType.Property) continue;
            
            propertyTiles++;
            
            if (tile.property != null && tile.property.propertyType == PropertyType.Regular)
            {
                regularProperties++;
            }
            
            BuildingVisuals visuals = tile.GetComponent<BuildingVisuals>();
            if (visuals != null)
            {
                withBuildingVisuals++;
                
                bool hasHouseSprite = visuals.houseSprite != null;
                bool hasHotelSprite = visuals.hotelSprite != null;
                
                if (hasHouseSprite && hasHotelSprite)
                {
                    withSprites++;
                }
                else
                {
                    Debug.LogWarning($"⚠ {tile.name}: Missing sprites - House: {hasHouseSprite}, Hotel: {hasHotelSprite}");
                }
                
                // Check sorting order
                if (visuals.sortingOrder <= 0)
                {
                    Debug.LogWarning($"⚠ {tile.name}: sortingOrder is {visuals.sortingOrder} (should be > 0 to render above tile)");
                }
            }
            else
            {
                Debug.LogWarning($"⚠ {tile.name}: Missing BuildingVisuals component!");
            }
        }
        
        Debug.Log($"=== Results ===");
        Debug.Log($"Total Property Tiles: {propertyTiles}");
        Debug.Log($"Regular Properties: {regularProperties}");
        Debug.Log($"Tiles with BuildingVisuals: {withBuildingVisuals}");
        Debug.Log($"Tiles with both sprites assigned: {withSprites}");
        
        if (withBuildingVisuals == propertyTiles && withSprites == regularProperties)
        {
            Debug.Log("✅ All tiles are properly set up!");
        }
        else
        {
            Debug.LogError("❌ Some tiles need setup. Check warnings above.");
        }
    }
    
    [ContextMenu("Test Visual Update on First Regular Property")]
    public void TestVisualUpdate()
    {
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.propertyType == PropertyType.Regular)
            {
                BuildingVisuals visuals = tile.GetComponent<BuildingVisuals>();
                if (visuals != null)
                {
                    Debug.Log($"Testing visual update on: {tile.name}");
                    Debug.Log($"  Current houses: {tile.property.houses}");
                    Debug.Log($"  Has hotel: {tile.property.hasHotel}");
                    Debug.Log($"  House sprite: {visuals.houseSprite != null}");
                    Debug.Log($"  Hotel sprite: {visuals.hotelSprite != null}");
                    
                    // Force update
                    visuals.UpdateVisuals();
                    
                    // Check if objects were created
                    int childCount = tile.transform.childCount;
                    Debug.Log($"  Child objects after update: {childCount}");
                    
                    // List all children
                    for (int i = 0; i < childCount; i++)
                    {
                        Transform child = tile.transform.GetChild(i);
                        Debug.Log($"    - {child.name} (active: {child.gameObject.activeSelf})");
                    }
                    
                    return;
                }
            }
        }
        
        Debug.LogWarning("No regular property tile with BuildingVisuals found!");
    }
    
    [ContextMenu("Force Update All Visuals")]
    public void ForceUpdateAll()
    {
        BuildingVisualsManager.UpdateAllTiles();
        Debug.Log("✓ Forced update on all tiles!");
    }
}
