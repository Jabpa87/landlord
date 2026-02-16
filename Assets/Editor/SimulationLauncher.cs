using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

public class SimulationLauncher
{
    [MenuItem("Simulation/Run Gameplay")]
    public static void RunSimulation()
    {
        // Open StartPage scene
        string startPagePath = "Assets/Scenes/StartPage.unity";
        // Check if scene exists
        if (!System.IO.File.Exists(startPagePath))
        {
            // Try finding it
            string[] guids = AssetDatabase.FindAssets("StartPage t:Scene");
            if (guids.Length > 0)
            {
                startPagePath = AssetDatabase.GUIDToAssetPath(guids[0]);
            }
            else
            {
                Debug.LogError("StartPage scene not found!");
                return;
            }
        }

        EditorSceneManager.OpenScene(startPagePath);

        // Create Simulator Object
        GameObject simulator = new GameObject("GameplaySimulator");
        simulator.AddComponent<GameplaySimulator>();

        // Enter Play Mode
        EditorApplication.isPlaying = true;
    }
}
