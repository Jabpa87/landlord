using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

/// <summary>
/// Helper script to set up rotation for all BuildingVisuals components.
/// Attach this to a GameObject (preferably the board center) and use context menu options.
/// </summary>
public class BuildingVisualsRotationSetup : MonoBehaviour
{
    [Header("Board Center Reference")]
    [Tooltip("The center point of the board (for auto-detection). If null, uses this GameObject's position.")]
    public Transform boardCenter;
    
    [Header("Auto-Setup Options")]
    [Tooltip("If true, enables auto-detection on all tiles")]
    public bool enableAutoDetection = true;
    
    [ContextMenu("Set Board Center for All Tiles")]
    public void SetBoardCenterForAllTiles()
    {
        Transform center = boardCenter != null ? boardCenter : transform;
        
        BuildingVisuals[] allVisuals = FindObjectsByType<BuildingVisuals>(FindObjectsSortMode.None);
        int updated = 0;
        
        foreach (BuildingVisuals v in allVisuals)
        {
            v.boardCenter = center;
            v.autoDetectBoardSide = enableAutoDetection;
            
            #if UNITY_EDITOR
            EditorUtility.SetDirty(v);
            #endif
            updated++;
        }
        
        Debug.Log($"✓ Set board center for {updated} BuildingVisuals components!");
        Debug.Log($"  Board Center: {center.name} at position {center.position}");
        Debug.Log($"  Auto-detection: {(enableAutoDetection ? "ENABLED" : "DISABLED")}");
    }
    
    [ContextMenu("Disable Auto-Detection (Use Manual Board Side)")]
    public void DisableAutoDetection()
    {
        BuildingVisuals[] allVisuals = FindObjectsByType<BuildingVisuals>(FindObjectsSortMode.None);
        int updated = 0;
        
        foreach (BuildingVisuals v in allVisuals)
        {
            v.autoDetectBoardSide = false;
            
            #if UNITY_EDITOR
            EditorUtility.SetDirty(v);
            #endif
            updated++;
        }
        
        Debug.Log($"✓ Disabled auto-detection on {updated} BuildingVisuals components!");
        Debug.Log("  You can now manually set 'Board Side' on each tile in the Inspector.");
    }
    
    [ContextMenu("Force Update All Visuals (Apply Rotation)")]
    public void ForceUpdateAllVisuals()
    {
        BuildingVisualsManager.UpdateAllTiles();
        Debug.Log("✓ Forced update on all tiles - rotations should now be applied!");
    }
    
    [ContextMenu("Test Rotation Detection")]
    public void TestRotationDetection()
    {
        Transform center = boardCenter != null ? boardCenter : transform;
        
        BuildingVisuals[] allVisuals = FindObjectsByType<BuildingVisuals>(FindObjectsSortMode.None);
        int bottom = 0, right = 0, top = 0, left = 0;
        
        foreach (BuildingVisuals v in allVisuals)
        {
            v.boardCenter = center;
            BoardSide side = v.DetectBoardSide();
            
            switch (side)
            {
                case BoardSide.Bottom: bottom++; break;
                case BoardSide.Right: right++; break;
                case BoardSide.Top: top++; break;
                case BoardSide.Left: left++; break;
            }
        }
        
        Debug.Log($"=== Rotation Detection Test ===");
        Debug.Log($"Board Center: {center.position}");
        Debug.Log($"Bottom side tiles: {bottom}");
        Debug.Log($"Right side tiles: {right}");
        Debug.Log($"Top side tiles: {top}");
        Debug.Log($"Left side tiles: {left}");
        Debug.Log($"Total tiles: {allVisuals.Length}");
    }
}
