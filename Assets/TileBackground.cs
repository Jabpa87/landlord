using UnityEngine;

/// <summary>
/// Adds a background sprite layer to tiles, rendered behind the main tile sprite.
/// </summary>
[RequireComponent(typeof(SpriteRenderer))]
public class TileBackground : MonoBehaviour
{
    [Header("Background Settings")]
    [Tooltip("Background sprite (if null, will use a colored rectangle)")]
    public Sprite backgroundSprite;
    
    [Tooltip("Background color (used if backgroundSprite is null, or as tint if sprite is set)")]
    public Color backgroundColor = new Color(0.9f, 0.9f, 0.9f, 1f); // Light gray
    
    [Tooltip("Size of background (relative to tile size)")]
    public Vector2 backgroundSize = Vector2.one; // Same size as tile by default
    
    [Tooltip("Offset from tile center (in local space)")]
    public Vector3 backgroundOffset = Vector3.zero;
    
    [Tooltip("Sorting order (should be lower than main tile sprite)")]
    public int sortingOrder = -1; // Behind main tile
    
    [Tooltip("Sorting layer name (leave empty to use default)")]
    public string sortingLayerName = "";
    
    private GameObject backgroundObject;
    private SpriteRenderer backgroundRenderer;
    private SpriteRenderer tileRenderer;
    
    void Awake()
    {
        tileRenderer = GetComponent<SpriteRenderer>();
        CreateBackground();
    }
    
    void CreateBackground()
    {
        // Create background GameObject
        backgroundObject = new GameObject("TileBackground");
        backgroundObject.transform.SetParent(transform);
        backgroundObject.transform.localPosition = backgroundOffset;
        backgroundObject.transform.localRotation = Quaternion.identity;
        backgroundObject.transform.localScale = Vector3.one;
        
        // Add SpriteRenderer for background
        backgroundRenderer = backgroundObject.AddComponent<SpriteRenderer>();
        
        // Set sprite
        if (backgroundSprite != null)
        {
            backgroundRenderer.sprite = backgroundSprite;
        }
        else
        {
            // Create a simple rectangle sprite if none provided
            backgroundRenderer.sprite = CreateRectangleSprite();
        }
        
        // Set properties
        backgroundRenderer.color = backgroundColor;
        backgroundRenderer.sortingOrder = sortingOrder;
        
        if (!string.IsNullOrEmpty(sortingLayerName))
        {
            backgroundRenderer.sortingLayerName = sortingLayerName;
        }
        
        // Scale background to match tile size
        if (tileRenderer != null && tileRenderer.sprite != null)
        {
            float tileWidth = tileRenderer.sprite.bounds.size.x;
            float tileHeight = tileRenderer.sprite.bounds.size.y;
            float bgWidth = backgroundRenderer.sprite.bounds.size.x;
            float bgHeight = backgroundRenderer.sprite.bounds.size.y;
            
            float scaleX = (tileWidth * backgroundSize.x) / bgWidth;
            float scaleY = (tileHeight * backgroundSize.y) / bgHeight;
            
            backgroundObject.transform.localScale = new Vector3(scaleX, scaleY, 1f);
        }
    }
    
    /// <summary>
    /// Creates a simple rectangle sprite for the background.
    /// </summary>
    Sprite CreateRectangleSprite()
    {
        int size = 64;
        Texture2D texture = new Texture2D(size, size, TextureFormat.RGBA32, false);
        
        // Fill with solid color
        Color[] pixels = new Color[size * size];
        for (int i = 0; i < pixels.Length; i++)
        {
            pixels[i] = Color.white;
        }
        
        texture.SetPixels(pixels);
        texture.Apply();
        
        return Sprite.Create(texture, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f), size);
    }
    
    /// <summary>
    /// Updates the background color.
    /// </summary>
    public void SetBackgroundColor(Color color)
    {
        backgroundColor = color;
        if (backgroundRenderer != null)
        {
            backgroundRenderer.color = color;
        }
    }
    
    /// <summary>
    /// Updates the background sprite.
    /// </summary>
    public void SetBackgroundSprite(Sprite sprite)
    {
        backgroundSprite = sprite;
        if (backgroundRenderer != null)
        {
            backgroundRenderer.sprite = sprite ?? CreateRectangleSprite();
        }
    }
    
    void OnDestroy()
    {
        if (backgroundObject != null)
        {
            Destroy(backgroundObject);
        }
    }
}
