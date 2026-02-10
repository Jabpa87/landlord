using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// Manages player visual representation (tokens/avatars) on the board.
/// This is a singleton that can be extended to support token sprites.
/// In APK builds, assign token sprites in Inspector so they are included; otherwise a fallback circle is used.
/// </summary>
public class PlayerVisualManager : MonoBehaviour
{
    private static PlayerVisualManager _instance;
    private static Sprite _fallbackTokenSprite;
    public static PlayerVisualManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindFirstObjectByType<PlayerVisualManager>();
                if (_instance == null)
                {
                    GameObject go = new GameObject("PlayerVisualManager");
                    _instance = go.AddComponent<PlayerVisualManager>();
                }
            }
            return _instance;
        }
    }
    
    [Header("Token Sprites (Optional)")]
    [Tooltip("Array of token sprites. If empty, will try to auto-load from Sprites/Avatars folder.")]
    public Sprite[] tokenSprites = new Sprite[0];
    
    [Header("Token Names")]
    [Tooltip("Names for each token type (for UI display)")]
    public string[] tokenNames = { "Hat", "Car", "Dog", "Ship", "Wheelbarrow", "Boot" };
    
    [Header("Auto-Load Settings")]
    [Tooltip("Automatically load sprites from Sprites/Avatars folder on Start")]
    public bool autoLoadSprites = true;
    
    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else if (_instance != this)
        {
            Destroy(gameObject);
        }
    }
    
    void Start()
    {
        if (autoLoadSprites && (tokenSprites == null || tokenSprites.Length == 0))
        {
            LoadSpritesFromFolder();
        }
    }
    
    /// <summary>
    /// Attempts to load sprites from Sprites/Avatars folder.
    /// </summary>
    [ContextMenu("Load Sprites from Folder")]
    public void LoadSpritesFromFolder()
    {
        Sprite[] loadedSprites = AvatarSpriteLoader.LoadAvatarSprites();
        if (loadedSprites != null && loadedSprites.Length > 0)
        {
            tokenSprites = loadedSprites;
            Debug.Log($"PlayerVisualManager: Auto-loaded {tokenSprites.Length} sprites from Sprites/Avatars folder");
        }
        else
        {
            Debug.LogWarning("PlayerVisualManager: No sprites found in Sprites/Avatars folder. Please assign sprites manually in Inspector.");
        }
    }
    
    /// <summary>
    /// Gets the token sprite for a given index. Returns null if no sprites are assigned.
    /// </summary>
    public Sprite GetTokenSprite(int index)
    {
        if (tokenSprites == null || tokenSprites.Length == 0)
            return null;
        // Clamp to valid range so we always return a sprite when possible
        int clamped = Mathf.Clamp(index, 0, tokenSprites.Length - 1);
        return tokenSprites[clamped];
    }
    
    /// <summary>
    /// Gets the token name for a given index.
    /// </summary>
    public string GetTokenName(int index)
    {
        if (tokenNames == null || tokenNames.Length == 0)
            return $"Token {index + 1}";
        
        if (index >= 0 && index < tokenNames.Length)
            return tokenNames[index];
        
        return $"Token {index + 1}";
    }
    
    /// <summary>
    /// Applies token sprite to a player's SpriteRenderer.
    /// Tokens show their natural sprite colors (no tinting).
    /// Property ownership colors are handled separately by PropertyOwnershipTag.
    /// </summary>
    public void ApplyTokenToPlayer(Player player, int tokenIndex)
    {
        if (player == null) return;
        
        // Ensure player GameObject is active
        if (!player.gameObject.activeSelf)
        {
            player.gameObject.SetActive(true);
        }
        
        SpriteRenderer sr = player.GetComponent<SpriteRenderer>();
        if (sr == null)
        {
            sr = player.GetComponentInChildren<SpriteRenderer>();
        }
        
        if (sr != null)
        {
            sr.enabled = true;
            Sprite tokenSprite = GetTokenSprite(tokenIndex);
            if (tokenSprite != null)
                sr.sprite = tokenSprite;
            else
            {
                sr.sprite = GetOrCreateFallbackTokenSprite();
                if (sr.sprite == null)
                    Debug.LogWarning($"PlayerVisualManager: No token sprite for {player.playerName} (index {tokenIndex}). Assign token sprites in Inspector or add Sprites/Avatars to Resources for build.");
            }
            sr.color = Color.white;
            sr.sortingOrder = 200;
        }
        else
        {
            Debug.LogWarning($"PlayerVisualManager: No SpriteRenderer found on {player.playerName}. Token may not be visible.");
        }
    }

    /// <summary>
    /// Creates a simple circle sprite at runtime so the token is visible in APK/build when no sprites are loaded.
    /// Public so Player can use it when PlayerVisualManager is not in scene.
    /// </summary>
    public static Sprite GetOrCreateFallbackTokenSprite()
    {
        if (_fallbackTokenSprite != null) return _fallbackTokenSprite;
        const int size = 32;
        Texture2D tex = new Texture2D(size, size);
        Color clear = new Color(0, 0, 0, 0);
        Color white = Color.white;
        float center = size * 0.5f;
        float radius = center - 1f;
        for (int y = 0; y < size; y++)
            for (int x = 0; x < size; x++)
            {
                float dx = x - center;
                float dy = y - center;
                tex.SetPixel(x, y, (dx * dx + dy * dy <= radius * radius) ? white : clear);
            }
        tex.Apply();
        _fallbackTokenSprite = Sprite.Create(tex, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f));
        _fallbackTokenSprite.name = "FallbackToken";
        return _fallbackTokenSprite;
    }
}
