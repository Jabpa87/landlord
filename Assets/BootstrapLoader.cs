using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Loads the Board and UI scenes additively when the Bootstrap scene starts.
/// Attach this to a GameObject in the Bootstrap scene (e.g. GameRoot or Bootstrap).
/// Runs in Awake so Board and UI are loaded before TurnManager and others run Start().
/// </summary>
[DefaultExecutionOrder(-100)]
public class BootstrapLoader : MonoBehaviour
{
    [Header("Scenes to load (additive)")]
    [Tooltip("Name of the board scene (e.g. BoardScene). Must be in Build Settings.")]
    public string boardSceneName = "BoardScene";
    [Tooltip("Name of the UI scene (e.g. UIScene_v2). Must be in Build Settings.")]
    public string uiSceneName = "UIScene_v2";

    [Header("Optional")]
    [Tooltip("If true, unloads the Bootstrap scene's own content after loading (rare). Leave false.")]
    public bool unloadBootstrapAfterLoad;

    void Awake()
    {
        if (!string.IsNullOrEmpty(boardSceneName))
        {
            if (IsSceneLoaded(boardSceneName))
                Debug.Log($"BootstrapLoader: {boardSceneName} already loaded.");
            else
            {
                SceneManager.LoadScene(boardSceneName, LoadSceneMode.Additive);
                Debug.Log($"BootstrapLoader: Loaded {boardSceneName} additively.");
            }
        }

        if (!string.IsNullOrEmpty(uiSceneName))
        {
            if (IsSceneLoaded(uiSceneName))
                Debug.Log($"BootstrapLoader: {uiSceneName} already loaded.");
            else
            {
                SceneManager.LoadScene(uiSceneName, LoadSceneMode.Additive);
                Debug.Log($"BootstrapLoader: Loaded {uiSceneName} additively.");
            }
        }
    }

    static bool IsSceneLoaded(string sceneName)
    {
        for (int i = 0; i < SceneManager.sceneCount; i++)
        {
            var s = SceneManager.GetSceneAt(i);
            if (s.name == sceneName && s.isLoaded) return true;
        }
        return false;
    }
}
