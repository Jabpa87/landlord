using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;

/// <summary>
/// Loads game settings from MainMenuManager when the game scene starts.
/// Attach this to a GameObject in your game scene.
/// </summary>
public class GameSceneLoader : MonoBehaviour
{
    [Header("Game Setup")]
    public TurnManager turnManager;
    public GameObject playerPrefab; // Optional: Player prefab to instantiate
    
    void Awake()
    {
        // Prevent Start Page UI from overlaying the game: hide any UIDocument showing StartPage.uxml
        HideStartPageOverlayInScene();
    }
    
    void Start()
    {
        // Wait a frame to ensure all objects are initialized
        StartCoroutine(LoadGameSettingsDelayed());
    }
    
    System.Collections.IEnumerator LoadGameSettingsDelayed()
    {
        yield return null; // Wait one frame
        
        // Check if we have settings from main menu
        if (MainMenuManager.SettingsToLoad != null)
        {
            Debug.Log("Loading game settings from Main Menu...");
            
            // Apply settings to game
            if (turnManager != null)
            {
                MainMenuManager.ApplyGameSettings(turnManager, playerPrefab);
                turnManager.InitializePlayers();
            }
            else
            {
                Debug.LogError("GameSceneLoader: TurnManager not assigned!");
            }
        }
        else
        {
            Debug.LogWarning("No game settings found! Game will use default settings.");
            Debug.LogWarning("Make sure to start from MainMenu scene, or configure players manually.");
            
            // Apply default ₦2,000,000 to all players when not started from main menu
            const int defaultStartingMoney = 2000000; // ₦2M standard
            if (turnManager != null && turnManager.players != null)
            {
                foreach (var p in turnManager.players)
                {
                    if (p != null)
                        p.Money = defaultStartingMoney;
                }
                if (turnManager.players.Count > 0)
                    turnManager.InitializePlayers();
            }
        }
    }
    
    /// <summary>
    /// Finds and disables any UIDocument in this scene that displays StartPage.uxml,
    /// so the start page cannot overlay the game (e.g. from wrong assignment or prefab).
    /// </summary>
    static void HideStartPageOverlayInScene()
    {
        var docs = Object.FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
        foreach (var doc in docs)
        {
            if (doc == null || doc.visualTreeAsset == null) continue;
            string name = doc.visualTreeAsset.name ?? "";
            if (name.IndexOf("StartPage", System.StringComparison.OrdinalIgnoreCase) >= 0)
            {
                doc.enabled = false;
                if (doc.gameObject != null)
                    doc.gameObject.SetActive(false);
                Debug.Log($"GameSceneLoader: Hid Start Page overlay (UIDocument on '{(doc.gameObject != null ? doc.gameObject.name : "?")}').");
            }
        }
    }
}
