using UnityEngine;
using UnityEngine.UIElements;

/// <summary>
/// Manages responsive layout for the Main HUD to prevent overlap with the game board.
/// Adjusts UI element positions based on screen size and aspect ratio.
/// </summary>
public class ResponsiveHUDManager : MonoBehaviour
{
    [Header("UI References")]
    [Tooltip("Main HUD UIDocument (auto-found if not assigned)")]
    public UIDocument mainHUDDocument;
    
    [Header("Layout Settings")]
    [Tooltip("Top panel height as percentage of screen (default 12%)")]
    public float topPanelHeightPercent = 12f;
    
    [Tooltip("Bottom panel height as percentage of screen (default 18%)")]
    public float bottomPanelHeightPercent = 18f;
    
    [Tooltip("Action buttons height in pixels")]
    public float actionButtonsHeight = 60f;
    
    [Tooltip("News feed height in pixels (larger = more room for feed / dev console)")]
    public float newsFeedHeight = 300f;
    
    [Tooltip("Minimum safe area from edges (prevents overlap)")]
    public float safeAreaPadding = 10f;
    
    private VisualElement root;
    private VisualElement topPanel;
    private VisualElement bottomPanel;
    private VisualElement actionButtonsRow;
    private VisualElement newsFeedSection;
    
    void Start()
    {
        if (mainHUDDocument == null)
        {
            UIDocumentManager uiManager = FindFirstObjectByType<UIDocumentManager>();
            if (uiManager != null)
            {
                mainHUDDocument = uiManager.mainHUDDocument;
            }
        }
        
        // Initialize after a short delay to ensure UI is ready
        Invoke(nameof(InitializeUI), 0.1f);
    }
    
    void InitializeUI()
    {
        if (mainHUDDocument == null || mainHUDDocument.rootVisualElement == null)
        {
            Debug.LogWarning("ResponsiveHUDManager: Main HUD document not found.");
            return;
        }
        
        root = mainHUDDocument.rootVisualElement;
        topPanel = root.Q<VisualElement>("TopPanel");
        bottomPanel = root.Q<VisualElement>("BottomPanel");
        actionButtonsRow = root.Q<VisualElement>("ActionButtonsRow");
        newsFeedSection = root.Q<VisualElement>("NewsFeedSection");
        
        // Update layout
        UpdateLayout();
        
        // Update on screen size changes
        InvokeRepeating(nameof(UpdateLayout), 0.5f, 0.5f);
    }
    
    void UpdateLayout()
    {
        if (root == null) return;
        
        float screenHeight = root.resolvedStyle.height;
        float screenWidth = root.resolvedStyle.width;
        
        if (screenHeight <= 0 || screenWidth <= 0) return;
        
        // Calculate responsive heights
        float topHeight = (screenHeight * topPanelHeightPercent / 100f);
        topHeight = Mathf.Clamp(topHeight, 140f, 180f);
        
        float bottomHeight = (screenHeight * bottomPanelHeightPercent / 100f);
        bottomHeight = Mathf.Clamp(bottomHeight, 220f, 320f);
        
        // Update Top Panel
        if (topPanel != null)
        {
            topPanel.style.height = topHeight;
            topPanel.style.top = 0;
            topPanel.style.left = 0;
            topPanel.style.right = 0;
        }
        
        // Calculate bottom positions (stack from bottom up)
        float currentBottom = 0f;
        
        // News Feed at very bottom — full width edge-to-edge (larger for readability / dev log)
        if (newsFeedSection != null)
        {
            float feedHeight = Mathf.Clamp(newsFeedHeight, 260f, screenHeight * 0.35f);
            newsFeedSection.style.height = feedHeight;
            newsFeedSection.style.bottom = currentBottom;
            newsFeedSection.style.left = 0;
            newsFeedSection.style.right = 0;
            newsFeedSection.style.width = new StyleLength(new Length(100, LengthUnit.Percent));
            newsFeedSection.style.marginLeft = 0;
            newsFeedSection.style.marginRight = 0;
            currentBottom += feedHeight;
        }
        
        // Action Buttons above news feed
        if (actionButtonsRow != null)
        {
            float btnHeight = Mathf.Clamp(actionButtonsHeight, 50f, 70f);
            actionButtonsRow.style.height = btnHeight;
            actionButtonsRow.style.bottom = currentBottom;
            currentBottom += btnHeight;
        }
        
        // Bottom Panel above action buttons
        if (bottomPanel != null)
        {
            bottomPanel.style.height = bottomHeight;
            bottomPanel.style.bottom = currentBottom;
            currentBottom += bottomHeight;
        }
        
        // Ensure UI doesn't overlap board (add margin if needed)
        // The board should be visible between topPanel and bottomPanel
        float boardAreaTop = topHeight + safeAreaPadding;
        float boardAreaBottom = currentBottom + safeAreaPadding;
        
        // Log for debugging
        if (Time.frameCount % 60 == 0) // Log every 60 frames
        {
            Debug.Log($"ResponsiveHUDManager: Screen={screenWidth}x{screenHeight}, Top={topHeight}, Bottom={bottomHeight}, ActionBtns={actionButtonsHeight}, Feed={newsFeedHeight}, BoardArea={boardAreaTop}-{boardAreaBottom}");
        }
    }
    
    void OnDestroy()
    {
        CancelInvoke();
    }
}
