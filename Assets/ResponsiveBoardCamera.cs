using UnityEngine;

/// <summary>
/// Makes the game board responsive by adjusting camera orthographic size
/// based on screen aspect ratio. This ensures the board fits on all screen sizes.
/// </summary>
[RequireComponent(typeof(Camera))]
public class ResponsiveBoardCamera : MonoBehaviour
{
    [Header("Board Settings")]
    [Tooltip("Reference width of the board (in world units). Adjust this to match your board size.")]
    public float referenceBoardWidth = 20f;
    
    [Tooltip("Reference height of the board (in world units). Adjust this to match your board size.")]
    public float referenceBoardHeight = 20f;
    
    [Tooltip("Padding around the board (in world units).")]
    public float padding = 2f;
    
    [Header("Aspect Ratio Handling")]
    [Tooltip("How to handle different aspect ratios:\n" +
             "FitWidth: Always show full width (may crop top/bottom)\n" +
             "FitHeight: Always show full height (may crop left/right)\n" +
             "FitBoth: Show entire board (may have letterboxing)")]
    public FitMode fitMode = FitMode.FitBoth;
    
    public enum FitMode
    {
        FitWidth,   // Always show full width
        FitHeight,  // Always show full height
        FitBoth     // Show entire board (letterbox if needed)
    }
    
    [Header("Min/Max Constraints")]
    [Tooltip("Minimum orthographic size (prevents zooming in too much).")]
    public float minOrthographicSize = 3f;
    
    [Tooltip("Maximum orthographic size (prevents zooming out too much).")]
    public float maxOrthographicSize = 15f;
    
    [Header("Update Settings")]
    [Tooltip("Update camera on Start (recommended).")]
    public bool updateOnStart = true;
    
    [Tooltip("Update camera every frame (for dynamic screen size changes).")]
    public bool updateEveryFrame = false;
    
    private Camera cam;
    private float lastAspectRatio = 0f;
    private float lastScreenWidth = 0f;
    private float lastScreenHeight = 0f;
    
    void Awake()
    {
        cam = GetComponent<Camera>();
        if (cam == null)
        {
            Debug.LogError("ResponsiveBoardCamera: No Camera component found!");
            enabled = false;
            return;
        }
        
        if (!cam.orthographic)
        {
            Debug.LogWarning("ResponsiveBoardCamera: Camera is not orthographic. This script works best with orthographic cameras.");
        }
    }
    
    void Start()
    {
        if (updateOnStart)
        {
            UpdateCameraSize();
        }
    }
    
    void Update()
    {
        if (updateEveryFrame)
        {
            // Only update if screen size or aspect ratio changed
            if (Screen.width != lastScreenWidth || 
                Screen.height != lastScreenHeight ||
                Mathf.Abs(GetAspectRatio() - lastAspectRatio) > 0.001f)
            {
                UpdateCameraSize();
            }
        }
    }
    
    /// <summary>
    /// Manually update camera size (call this if screen size changes at runtime).
    /// </summary>
    [ContextMenu("Update Camera Size")]
    public void UpdateCameraSize()
    {
        if (cam == null) return;
        
        float aspectRatio = GetAspectRatio();
        float targetSize = CalculateOrthographicSize(aspectRatio);
        
        // Apply constraints
        targetSize = Mathf.Clamp(targetSize, minOrthographicSize, maxOrthographicSize);
        
        cam.orthographicSize = targetSize;
        
        // Store current values
        lastAspectRatio = aspectRatio;
        lastScreenWidth = Screen.width;
        lastScreenHeight = Screen.height;
        
        Debug.Log($"ResponsiveBoardCamera: Updated orthographic size to {targetSize:F2} (aspect: {aspectRatio:F2})");
    }
    
    float GetAspectRatio()
    {
        if (Screen.height == 0) return 16f / 9f; // Default aspect ratio
        return (float)Screen.width / Screen.height;
    }
    
    float CalculateOrthographicSize(float aspectRatio)
    {
        float boardAspectRatio = referenceBoardWidth / referenceBoardHeight;
        float targetSize;
        
        switch (fitMode)
        {
            case FitMode.FitWidth:
                // Always fit width: size = (width / 2) / aspectRatio
                targetSize = (referenceBoardWidth + padding * 2f) / (2f * aspectRatio);
                break;
                
            case FitMode.FitHeight:
                // Always fit height: size = height / 2
                targetSize = (referenceBoardHeight + padding * 2f) / 2f;
                break;
                
            case FitMode.FitBoth:
            default:
                // Fit both: use whichever is larger
                float sizeForWidth = (referenceBoardWidth + padding * 2f) / (2f * aspectRatio);
                float sizeForHeight = (referenceBoardHeight + padding * 2f) / 2f;
                targetSize = Mathf.Max(sizeForWidth, sizeForHeight);
                break;
        }
        
        return targetSize;
    }
    
    /// <summary>
    /// Set reference board dimensions (useful for runtime adjustment).
    /// </summary>
    public void SetBoardDimensions(float width, float height)
    {
        referenceBoardWidth = width;
        referenceBoardHeight = height;
        UpdateCameraSize();
    }
    
    /// <summary>
    /// Set padding around the board.
    /// </summary>
    public void SetPadding(float newPadding)
    {
        padding = newPadding;
        UpdateCameraSize();
    }
}
