using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Displays a visual tag on property tiles showing which player owns them.
/// The tag is colored with the owner's player color.
/// </summary>
[RequireComponent(typeof(TileInfo))]
public class PropertyOwnershipTag : MonoBehaviour
{
    [Header("Tag Settings")]
    [Tooltip("Position offset from tile center (in local space)")]
    public Vector3 tagOffset = new Vector3(0f, 0.5f, 0f); // Above tile by default
    
    [Tooltip("Size of the ownership tag")]
    public Vector2 tagSize = new Vector2(0.3f, 0.3f);
    
    [Tooltip("Sorting order for the tag (higher = renders on top)")]
    public int sortingOrder = 100;
    
    [Tooltip("Show player name on tag")]
    public bool showPlayerName = true;
    
    [Tooltip("Tag sprite (if null, will create a colored circle)")]
    public Sprite tagSprite;
    
    private GameObject tagObject;
    private SpriteRenderer tagRenderer;
    private TextMesh tagText;
    private TileInfo tileInfo;
    private Player currentOwner;
    
    void Awake()
    {
        tileInfo = GetComponent<TileInfo>();
        
        if (tileInfo == null)
        {
            Debug.LogWarning($"PropertyOwnershipTag on {gameObject.name}: No TileInfo component found!");
            enabled = false;
            return;
        }
        
        // Create tag GameObject
        CreateTagObject();
        
        // Hide by default (will show when property is owned)
        if (tagObject != null)
        {
            tagObject.SetActive(false);
        }
    }
    
    void Start()
    {
        // Check initial ownership
        UpdateOwnershipDisplay();
        
        // Subscribe to property changes if possible
        // Note: Property class doesn't have events, so we rely on UpdateOwnershipDisplay being called
    }
    
    void LateUpdate()
    {
        // Periodically check for ownership changes (fallback if not called manually)
        // This is less efficient but ensures tags stay updated
        if (tileInfo != null && tileInfo.property != null)
        {
            if (tileInfo.property.owner != currentOwner)
            {
                UpdateOwnershipDisplay();
            }
        }
    }
    
    void CreateTagObject()
    {
        // Create tag GameObject
        tagObject = new GameObject("OwnershipTag");
        tagObject.transform.SetParent(transform);
        tagObject.transform.localPosition = tagOffset;
        tagObject.transform.localRotation = Quaternion.identity;
        tagObject.transform.localScale = Vector3.one;
        
        // Add SpriteRenderer for the tag visual
        tagRenderer = tagObject.AddComponent<SpriteRenderer>();
        
        // Use provided sprite or create a default circle sprite
        if (tagSprite != null)
        {
            tagRenderer.sprite = tagSprite;
        }
        else
        {
            // Create a simple colored circle sprite
            tagRenderer.sprite = CreateCircleSprite();
        }
        
        // Set tag properties
        tagRenderer.sortingOrder = sortingOrder;
        tagRenderer.color = Color.white; // Will be set based on owner color
        
        // Add text for player name (optional)
        if (showPlayerName)
        {
            GameObject textObject = new GameObject("OwnerName");
            textObject.transform.SetParent(tagObject.transform);
            textObject.transform.localPosition = Vector3.zero;
            textObject.transform.localRotation = Quaternion.identity;
            textObject.transform.localScale = Vector3.one * 0.5f; // Smaller text
            
            tagText = textObject.AddComponent<TextMesh>();
            tagText.anchor = TextAnchor.MiddleCenter;
            tagText.alignment = TextAlignment.Center;
            tagText.fontSize = 20;
            tagText.color = Color.white;
            tagText.characterSize = 0.1f;
            tagText.fontStyle = FontStyle.Bold;
        }
    }
    
    /// <summary>
    /// Creates a simple circle sprite for the ownership tag.
    /// </summary>
    Sprite CreateCircleSprite()
    {
        int size = 64;
        Texture2D texture = new Texture2D(size, size, TextureFormat.RGBA32, false);
        
        Vector2 center = new Vector2(size / 2f, size / 2f);
        float radius = size / 2f - 2f; // Slight padding
        
        // Fill with transparent
        Color[] pixels = new Color[size * size];
        for (int i = 0; i < pixels.Length; i++)
        {
            pixels[i] = Color.clear;
        }
        
        // Draw circle outline
        for (int y = 0; y < size; y++)
        {
            for (int x = 0; x < size; x++)
            {
                Vector2 pos = new Vector2(x, y);
                float distance = Vector2.Distance(pos, center);
                
                // Draw filled circle
                if (distance <= radius)
                {
                    pixels[y * size + x] = Color.white;
                }
                // Draw outline
                else if (distance <= radius + 2f)
                {
                    pixels[y * size + x] = new Color(1f, 1f, 1f, 0.5f);
                }
            }
        }
        
        texture.SetPixels(pixels);
        texture.Apply();
        
        return Sprite.Create(texture, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f), size);
    }
    
    /// <summary>
    /// Updates the ownership display based on current property owner.
    /// </summary>
    public void UpdateOwnershipDisplay()
    {
        if (tileInfo == null || tileInfo.property == null)
        {
            // Not a property tile, hide tag
            if (tagObject != null)
            {
                tagObject.SetActive(false);
            }
            currentOwner = null;
            return;
        }
        
        Player owner = tileInfo.property.owner;
        
        // Check if ownership changed
        if (owner != currentOwner)
        {
            currentOwner = owner;
            
            if (owner != null)
            {
                // Show tag with owner's color
                ShowTag(owner);
            }
            else
            {
                // Hide tag if unowned
                HideTag();
            }
        }
    }
    
    /// <summary>
    /// Shows the ownership tag with the owner's color.
    /// </summary>
    void ShowTag(Player owner)
    {
        if (tagObject == null || tagRenderer == null) return;
        
        // Activate tag
        tagObject.SetActive(true);
        
        // Set color to owner's color
        Color ownerColor = owner.playerColor;
        tagRenderer.color = ownerColor;
        
        // Update text if enabled
        if (tagText != null && showPlayerName)
        {
            // Use first letter of player name or first 3 characters
            string displayName = owner.playerName;
            if (displayName.Length > 3)
            {
                displayName = displayName.Substring(0, 3).ToUpper();
            }
            else
            {
                displayName = displayName.ToUpper();
            }
            
            tagText.text = displayName;
            
            // Set text color to be visible (white or black based on background brightness)
            float brightness = (ownerColor.r + ownerColor.g + ownerColor.b) / 3f;
            tagText.color = brightness > 0.5f ? Color.black : Color.white;
        }
        
        // Scale tag to specified size
        if (tagRenderer.sprite != null)
        {
            float spriteWidth = tagRenderer.sprite.bounds.size.x;
            float spriteHeight = tagRenderer.sprite.bounds.size.y;
            float scaleX = tagSize.x / spriteWidth;
            float scaleY = tagSize.y / spriteHeight;
            tagObject.transform.localScale = new Vector3(scaleX, scaleY, 1f);
        }
    }
    
    /// <summary>
    /// Hides the ownership tag.
    /// </summary>
    void HideTag()
    {
        if (tagObject != null)
        {
            tagObject.SetActive(false);
        }
        currentOwner = null;
    }
    
    void OnDestroy()
    {
        if (tagObject != null)
        {
            Destroy(tagObject);
        }
    }
    
    // Called when property ownership changes (can be called manually or via event)
    void OnValidate()
    {
        // Update display in editor
        if (Application.isPlaying)
        {
            UpdateOwnershipDisplay();
        }
    }
}
