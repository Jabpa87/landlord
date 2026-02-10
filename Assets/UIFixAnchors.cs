using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Utility script to fix UI anchoring issues for responsive design.
/// Attach this to any UI element that's spilling off screen.
/// </summary>
public class UIFixAnchors : MonoBehaviour
{
    [Header("Anchor Presets")]
    [Tooltip("Automatically fix anchors on Start")]
    public bool fixOnStart = false;
    
    [Tooltip("Preset anchor configuration")]
    public AnchorPreset preset = AnchorPreset.Custom;
    
    public enum AnchorPreset
    {
        Custom,
        StretchHorizontal,      // Stretch left to right
        StretchVertical,        // Stretch top to bottom
        StretchBoth,           // Stretch both directions
        TopLeft,
        TopCenter,
        TopRight,
        MiddleLeft,
        MiddleCenter,
        MiddleRight,
        BottomLeft,
        BottomCenter,
        BottomRight,
        TopStretch,            // Top edge, stretch horizontally
        BottomStretch,         // Bottom edge, stretch horizontally
        LeftStretch,           // Left edge, stretch vertically
        RightStretch           // Right edge, stretch vertically
    }
    
    void Start()
    {
        if (fixOnStart)
        {
            ApplyPreset();
        }
    }
    
    [ContextMenu("Apply Preset")]
    public void ApplyPreset()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        if (rectTransform == null)
        {
            Debug.LogWarning("UIFixAnchors: No RectTransform found on " + gameObject.name);
            return;
        }
        
        Vector2 anchorMin = rectTransform.anchorMin;
        Vector2 anchorMax = rectTransform.anchorMax;
        Vector2 anchoredPosition = rectTransform.anchoredPosition;
        Vector2 sizeDelta = rectTransform.sizeDelta;
        
        switch (preset)
        {
            case AnchorPreset.StretchHorizontal:
                anchorMin = new Vector2(0, anchorMin.y);
                anchorMax = new Vector2(1, anchorMax.y);
                sizeDelta = new Vector2(0, sizeDelta.y);
                anchoredPosition = new Vector2(0, anchoredPosition.y);
                break;
                
            case AnchorPreset.StretchVertical:
                anchorMin = new Vector2(anchorMin.x, 0);
                anchorMax = new Vector2(anchorMax.x, 1);
                sizeDelta = new Vector2(sizeDelta.x, 0);
                anchoredPosition = new Vector2(anchoredPosition.x, 0);
                break;
                
            case AnchorPreset.StretchBoth:
                anchorMin = Vector2.zero;
                anchorMax = Vector2.one;
                sizeDelta = Vector2.zero;
                anchoredPosition = Vector2.zero;
                break;
                
            case AnchorPreset.TopLeft:
                anchorMin = new Vector2(0, 1);
                anchorMax = new Vector2(0, 1);
                break;
                
            case AnchorPreset.TopCenter:
                anchorMin = new Vector2(0.5f, 1);
                anchorMax = new Vector2(0.5f, 1);
                break;
                
            case AnchorPreset.TopRight:
                anchorMin = new Vector2(1, 1);
                anchorMax = new Vector2(1, 1);
                break;
                
            case AnchorPreset.MiddleLeft:
                anchorMin = new Vector2(0, 0.5f);
                anchorMax = new Vector2(0, 0.5f);
                break;
                
            case AnchorPreset.MiddleCenter:
                anchorMin = new Vector2(0.5f, 0.5f);
                anchorMax = new Vector2(0.5f, 0.5f);
                break;
                
            case AnchorPreset.MiddleRight:
                anchorMin = new Vector2(1, 0.5f);
                anchorMax = new Vector2(1, 0.5f);
                break;
                
            case AnchorPreset.BottomLeft:
                anchorMin = new Vector2(0, 0);
                anchorMax = new Vector2(0, 0);
                break;
                
            case AnchorPreset.BottomCenter:
                anchorMin = new Vector2(0.5f, 0);
                anchorMax = new Vector2(0.5f, 0);
                break;
                
            case AnchorPreset.BottomRight:
                anchorMin = new Vector2(1, 0);
                anchorMax = new Vector2(1, 0);
                break;
                
            case AnchorPreset.TopStretch:
                anchorMin = new Vector2(0, 1);
                anchorMax = new Vector2(1, 1);
                sizeDelta = new Vector2(0, sizeDelta.y);
                anchoredPosition = new Vector2(0, anchoredPosition.y);
                break;
                
            case AnchorPreset.BottomStretch:
                anchorMin = new Vector2(0, 0);
                anchorMax = new Vector2(1, 0);
                sizeDelta = new Vector2(0, sizeDelta.y);
                anchoredPosition = new Vector2(0, anchoredPosition.y);
                break;
                
            case AnchorPreset.LeftStretch:
                anchorMin = new Vector2(0, 0);
                anchorMax = new Vector2(0, 1);
                sizeDelta = new Vector2(sizeDelta.x, 0);
                anchoredPosition = new Vector2(anchoredPosition.x, 0);
                break;
                
            case AnchorPreset.RightStretch:
                anchorMin = new Vector2(1, 0);
                anchorMax = new Vector2(1, 1);
                sizeDelta = new Vector2(sizeDelta.x, 0);
                anchoredPosition = new Vector2(anchoredPosition.x, 0);
                break;
        }
        
        rectTransform.anchorMin = anchorMin;
        rectTransform.anchorMax = anchorMax;
        rectTransform.sizeDelta = sizeDelta;
        rectTransform.anchoredPosition = anchoredPosition;
        
        Debug.Log($"UIFixAnchors: Applied preset '{preset}' to {gameObject.name}");
    }
    
    /// <summary>
    /// Fix all UI elements in children that might be spilling off screen
    /// </summary>
    [ContextMenu("Fix All Children")]
    public void FixAllChildren()
    {
        RectTransform[] children = GetComponentsInChildren<RectTransform>(true);
        foreach (RectTransform child in children)
        {
            if (child == GetComponent<RectTransform>()) continue; // Skip self
            
            // Check if element has fixed width that might overflow
            if (child.sizeDelta.x > 0 && child.anchorMin.x == child.anchorMax.x)
            {
                // Has fixed width and point anchor - might overflow
                Debug.LogWarning($"UIFixAnchors: {child.name} has fixed width ({child.sizeDelta.x}) with point anchor - might overflow on different screens");
            }
        }
    }
}
