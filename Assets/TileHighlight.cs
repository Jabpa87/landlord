using UnityEngine;
using System.Collections;

/// <summary>
/// Animation type for tile highlight
/// </summary>
public enum TileAnimationType
{
    Scale,  // Scale up and bring forward (overlaps other tiles)
    Push    // Push away from board center (maintains size)
}

/// <summary>
/// Handles visual highlighting of tiles when selected.
/// Creates a highlight effect around the tile that animates in and out.
/// </summary>
[RequireComponent(typeof(SpriteRenderer))]
public class TileHighlight : MonoBehaviour
{
    [Header("Animation Settings")]
    [Tooltip("Type of animation: Scale (grows and overlaps) or Push (moves away from center)")]
    public TileAnimationType animationType = TileAnimationType.Scale;
    
    [Tooltip("Animation duration for highlight appearance")]
    public float animationDuration = 0.3f;
    
    [Header("Scale Animation Settings")]
    [Tooltip("Scale animation amount (1.0 = no scale, 1.1 = 10% larger)")]
    public float scaleAmount = 1.1f;
    
    [Header("Push Animation Settings")]
    [Tooltip("How far the tile moves when selected (in units). Reduced by 50% from original.")]
    public float pushForwardAmount = 0.1f; // Reduced from 0.2 to 0.1 (50% reduction)
    
    [Tooltip("Reference point for push direction (usually the board center). If null, pushes up.")]
    public Transform boardCenter;
    
    [Header("Highlight Settings")]
    [Tooltip("Color of the highlight outline")]
    public Color highlightColor = new Color(1f, 1f, 0f, 0.8f); // Yellow with transparency
    
    [Tooltip("Width of the highlight outline")]
    public float outlineWidth = 0.15f;
    
    private GameObject highlightObject;
    private SpriteRenderer tileRenderer;
    private SpriteRenderer highlightRenderer;
    private Vector3 originalPosition;
    private Vector3 originalScale;
    private int originalSortingOrder;
    private Coroutine highlightCoroutine;
    private bool isHighlighted = false;
    
    void Awake()
    {
        tileRenderer = GetComponent<SpriteRenderer>();
        originalPosition = transform.localPosition;
        originalScale = transform.localScale;
        originalSortingOrder = tileRenderer != null ? tileRenderer.sortingOrder : 0;
        
        // Auto-find board center if not assigned
        if (boardCenter == null && animationType == TileAnimationType.Push)
        {
            // Try to find board center from BuildingVisuals on this or parent
            BuildingVisuals buildingVisuals = GetComponent<BuildingVisuals>();
            if (buildingVisuals == null)
            {
                buildingVisuals = GetComponentInParent<BuildingVisuals>();
            }
            if (buildingVisuals != null && buildingVisuals.boardCenter != null)
            {
                boardCenter = buildingVisuals.boardCenter;
            }
            else
            {
                // Try to find a GameObject named "BoardCenter"
                GameObject boardCenterObj = GameObject.Find("BoardCenter");
                if (boardCenterObj != null)
                {
                    boardCenter = boardCenterObj.transform;
                }
            }
        }
        
        // Create highlight GameObject
        CreateHighlightObject();
    }
    
    void CreateHighlightObject()
    {
        // Create a child GameObject for the highlight
        highlightObject = new GameObject("TileHighlight");
        highlightObject.transform.SetParent(transform);
        highlightObject.transform.localPosition = Vector3.zero;
        highlightObject.transform.localRotation = Quaternion.identity;
        highlightObject.transform.localScale = Vector3.one;
        
        // Add SpriteRenderer for highlight
        highlightRenderer = highlightObject.AddComponent<SpriteRenderer>();
        
        // Use the same sprite as the tile but with different color
        if (tileRenderer != null && tileRenderer.sprite != null)
        {
            highlightRenderer.sprite = tileRenderer.sprite;
        }
        
        // Set highlight properties
        highlightRenderer.color = highlightColor;
        highlightRenderer.sortingOrder = tileRenderer.sortingOrder - 1; // Render behind tile (acts as outline)
        
        // Hide by default
        highlightObject.SetActive(false);
    }
    
    /// <summary>
    /// Show highlight with animation
    /// </summary>
    public void ShowHighlight()
    {
        if (isHighlighted) return;
        
        isHighlighted = true;
        
        if (highlightCoroutine != null)
        {
            StopCoroutine(highlightCoroutine);
        }
        
        highlightCoroutine = StartCoroutine(AnimateHighlightIn());
    }
    
    /// <summary>
    /// Hide highlight with animation
    /// </summary>
    public void HideHighlight()
    {
        if (!isHighlighted) return;
        
        isHighlighted = false;
        
        if (highlightCoroutine != null)
        {
            StopCoroutine(highlightCoroutine);
        }
        
        highlightCoroutine = StartCoroutine(AnimateHighlightOut());
    }
    
    IEnumerator AnimateHighlightIn()
    {
        // Activate highlight
        highlightObject.SetActive(true);
        
        // Start from invisible
        Color startColor = highlightColor;
        startColor.a = 0f;
        highlightRenderer.color = startColor;
        
        // Increase sorting order to bring tile forward (for both animation types)
        if (tileRenderer != null)
        {
            tileRenderer.sortingOrder = originalSortingOrder + 10;
        }
        
        if (animationType == TileAnimationType.Scale)
        {
            // SCALE ANIMATION: Scale up and overlap other tiles
            Vector3 startScale = originalScale;
            Vector3 targetScale = originalScale * scaleAmount;
            
            transform.localScale = startScale;
            
            float elapsed = 0f;
            while (elapsed < animationDuration)
            {
                elapsed += Time.deltaTime;
                float t = elapsed / animationDuration;
                
                // Ease out animation
                t = 1f - Mathf.Pow(1f - t, 3f);
                
                // Fade in highlight
                Color currentColor = highlightColor;
                currentColor.a = Mathf.Lerp(0f, highlightColor.a, t);
                highlightRenderer.color = currentColor;
                
                // Scale up
                transform.localScale = Vector3.Lerp(startScale, targetScale, t);
                
                yield return null;
            }
            
            // Ensure final state
            highlightRenderer.color = highlightColor;
            transform.localScale = targetScale;
        }
        else // Push animation
        {
            // PUSH ANIMATION: Push away from board center
            Vector3 startPosition = originalPosition;
            Vector3 targetPosition = CalculatePushDirection();
            
            transform.localPosition = startPosition;
            
            float elapsed = 0f;
            while (elapsed < animationDuration)
            {
                elapsed += Time.deltaTime;
                float t = elapsed / animationDuration;
                
                // Ease out animation
                t = 1f - Mathf.Pow(1f - t, 3f);
                
                // Fade in highlight
                Color currentColor = highlightColor;
                currentColor.a = Mathf.Lerp(0f, highlightColor.a, t);
                highlightRenderer.color = currentColor;
                
                // Push forward
                transform.localPosition = Vector3.Lerp(startPosition, targetPosition, t);
                
                yield return null;
            }
            
            // Ensure final state
            highlightRenderer.color = highlightColor;
            transform.localPosition = targetPosition;
        }
    }
    
    /// <summary>
    /// Calculates the push direction based on board center position.
    /// Pushes the tile away from the board center.
    /// </summary>
    Vector3 CalculatePushDirection()
    {
        Vector3 targetPosition = originalPosition;
        
        if (boardCenter != null)
        {
            // Get world positions
            Vector3 tileWorldPos = transform.position;
            Vector3 centerWorldPos = boardCenter.position;
            
            // Calculate direction from board center to this tile (in world space)
            Vector3 directionFromCenter = (tileWorldPos - centerWorldPos);
            
            // If tile is at center, push up as fallback
            if (directionFromCenter.magnitude < 0.01f)
            {
                directionFromCenter = Vector3.up;
            }
            else
            {
                directionFromCenter.Normalize();
            }
            
            // Convert world direction to local space for localPosition
            // We need to push in the direction relative to the parent
            Vector3 worldPush = directionFromCenter * pushForwardAmount;
            
            // If tile has a parent, convert to local space
            if (transform.parent != null)
            {
                Vector3 localPush = transform.parent.InverseTransformDirection(worldPush);
                targetPosition = originalPosition + localPush;
            }
            else
            {
                // No parent, use world space directly
                targetPosition = originalPosition + worldPush;
            }
        }
        else
        {
            // Fallback: push up if no board center
            targetPosition.y += pushForwardAmount;
        }
        
        return targetPosition;
    }
    
    IEnumerator AnimateHighlightOut()
    {
        Color startColor = highlightRenderer.color;
        
        float elapsed = 0f;
        
        if (animationType == TileAnimationType.Scale)
        {
            // SCALE ANIMATION: Scale back down
            Vector3 startScale = transform.localScale;
            
            while (elapsed < animationDuration)
            {
                elapsed += Time.deltaTime;
                float t = elapsed / animationDuration;
                
                // Ease in animation
                t = t * t;
                
                // Fade out highlight
                Color currentColor = startColor;
                currentColor.a = Mathf.Lerp(startColor.a, 0f, t);
                highlightRenderer.color = currentColor;
                
                // Scale down
                transform.localScale = Vector3.Lerp(startScale, originalScale, t);
                
                yield return null;
            }
            
            // Ensure final state
            transform.localScale = originalScale;
        }
        else // Push animation
        {
            // PUSH ANIMATION: Move back to original position
            Vector3 startPosition = transform.localPosition;
            
            while (elapsed < animationDuration)
            {
                elapsed += Time.deltaTime;
                float t = elapsed / animationDuration;
                
                // Ease in animation
                t = t * t;
                
                // Fade out highlight
                Color currentColor = startColor;
                currentColor.a = Mathf.Lerp(startColor.a, 0f, t);
                highlightRenderer.color = currentColor;
                
                // Push back to original position
                transform.localPosition = Vector3.Lerp(startPosition, originalPosition, t);
                
                yield return null;
            }
            
            // Ensure final state
            transform.localPosition = originalPosition;
        }
        
        // Restore original sorting order
        if (tileRenderer != null)
        {
            tileRenderer.sortingOrder = originalSortingOrder;
        }
        
        highlightObject.SetActive(false);
    }
    
    void OnDestroy()
    {
        if (highlightObject != null)
        {
            Destroy(highlightObject);
        }
    }
}
