using UnityEngine;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif

/// <summary>
/// Utility to load avatar sprites from the Sprites/Avatars folder.
/// Can be used at runtime or in editor.
/// </summary>
public static class AvatarSpriteLoader
{
    private static Sprite[] cachedSprites = null;
    
    /// <summary>
    /// Loads all sprites from Sprites/Avatars folder.
    /// Returns array of sprites, or empty array if none found.
    /// </summary>
    public static Sprite[] LoadAvatarSprites()
    {
        if (cachedSprites != null)
            return cachedSprites;
        
        List<Sprite> sprites = new List<Sprite>();
        
#if UNITY_EDITOR
        // Editor: Use AssetDatabase
        // Load all sprites from sprite sheets (Pins.png, Pins1.png, Pins2.png, etc.)
        // This works for both individual sprites and sprite sheets with multiple sprites
        string[] textureGuids = AssetDatabase.FindAssets("t:Texture2D", new[] { "Assets/Sprites/Avatars" });
        foreach (string guid in textureGuids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            
            // Load all sprites from this texture (works for sprite sheets with multiple sprites)
            Object[] allAssets = AssetDatabase.LoadAllAssetsAtPath(path);
            foreach (Object asset in allAssets)
            {
                if (asset is Sprite sprite)
                {
                    // Only add if not already in the list (avoid duplicates)
                    if (!sprites.Contains(sprite))
                    {
                        sprites.Add(sprite);
                    }
                }
            }
        }
        
        // Also load any individual sprite assets (if any exist separately)
        string[] spriteGuids = AssetDatabase.FindAssets("t:Sprite", new[] { "Assets/Sprites/Avatars" });
        foreach (string guid in spriteGuids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            Sprite sprite = AssetDatabase.LoadAssetAtPath<Sprite>(path);
            if (sprite != null && !sprites.Contains(sprite))
            {
                sprites.Add(sprite);
            }
        }
        
        // Sort sprites by name for consistent ordering
        sprites.Sort((a, b) => string.Compare(a.name, b.name, System.StringComparison.Ordinal));
        
        Debug.Log($"AvatarSpriteLoader: Loaded {sprites.Count} total sprites from {textureGuids.Length} texture file(s) (including sub-sprites from sprite sheets)");
#else
        // Runtime: Use Resources (if sprites are in Resources folder)
        // Note: For runtime, sprites should be assigned in Inspector to PlayerVisualManager
        // This is a fallback that won't work unless sprites are moved to Resources folder
        Sprite[] resourcesSprites = Resources.LoadAll<Sprite>("Sprites/Avatars");
        if (resourcesSprites != null && resourcesSprites.Length > 0)
        {
            sprites.AddRange(resourcesSprites);
        }
#endif
        
        cachedSprites = sprites.ToArray();
        if (cachedSprites.Length > 0)
        {
            Debug.Log($"AvatarSpriteLoader: Successfully loaded {cachedSprites.Length} avatar sprites");
        }
        else
        {
            Debug.LogWarning("AvatarSpriteLoader: No sprites found. Make sure sprite sheets are configured with Sprite Mode = Multiple and sprites are sliced.");
        }
        return cachedSprites;
    }
    
    /// <summary>
    /// Clears the sprite cache (useful when sprites are updated).
    /// </summary>
    public static void ClearCache()
    {
        cachedSprites = null;
    }
    
    /// <summary>
    /// Gets sprite at index, or null if index is out of range.
    /// </summary>
    public static Sprite GetSprite(int index)
    {
        Sprite[] sprites = LoadAvatarSprites();
        if (index >= 0 && index < sprites.Length)
            return sprites[index];
        return null;
    }
}
