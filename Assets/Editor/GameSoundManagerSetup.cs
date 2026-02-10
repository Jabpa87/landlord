#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

/// <summary>
/// Assigns sound clips from Assets/Sounds to GameSoundManager when they are missing.
/// Use menu: Tools > Fix Game Sound Manager Clips (or run when entering play mode).
/// </summary>
public static class GameSoundManagerSetup
{
    const string SoundsPath = "Assets/Sounds";

    [MenuItem("Tools/Fix Game Sound Manager Clips")]
    public static void AssignClipsFromAssets()
    {
        GameSoundManager mgr = Object.FindFirstObjectByType<GameSoundManager>();
        if (mgr == null)
        {
            Debug.LogWarning("GameSoundManagerSetup: No GameSoundManager found in the scene. Load the Game scene and run again.");
            return;
        }

        int assigned = 0;
        if (mgr.monopolyClip == null) { mgr.monopolyClip = LoadClip("Monopoly.mp3"); if (mgr.monopolyClip != null) assigned++; }
        if (mgr.stepClip == null) { mgr.stepClip = LoadClip("st3-footstep-sfx-323056.mp3"); if (mgr.stepClip != null) assigned++; }
        if (mgr.feedNoticeClip == null) { mgr.feedNoticeClip = LoadClip("Feed notice.mp3"); if (mgr.feedNoticeClip != null) assigned++; }
        if (mgr.buyPropertyClip == null) { mgr.buyPropertyClip = LoadClip("Buy Propertry.mp3"); if (mgr.buyPropertyClip != null) assigned++; }
        if (mgr.buyHouseClip == null) { mgr.buyHouseClip = LoadClip("Buying house.mp3"); if (mgr.buyHouseClip != null) assigned++; }
        if (mgr.policeClip == null) { mgr.policeClip = LoadClip("police.mp3"); if (mgr.policeClip != null) assigned++; }
        if (mgr.moneyInClip == null) { mgr.moneyInClip = LoadClip("Buy Propertry.mp3"); if (mgr.moneyInClip != null) assigned++; }
        if (mgr.moneyOutClip == null) { mgr.moneyOutClip = LoadClip("Buying house.mp3"); if (mgr.moneyOutClip != null) assigned++; }
        if (mgr.gameMusicClip1 == null) { mgr.gameMusicClip1 = LoadClip("tunetank-african-africa-music-347203.mp3"); if (mgr.gameMusicClip1 != null) assigned++; }
        if (mgr.gameMusicClip2 == null) { mgr.gameMusicClip2 = LoadClip("tunetank-africa-african-music-348514.mp3"); if (mgr.gameMusicClip2 != null) assigned++; }

        if (assigned > 0)
        {
            EditorUtility.SetDirty(mgr);
            var prefabStage = PrefabStageUtility.GetCurrentPrefabStage();
            if (prefabStage != null)
                EditorSceneManager.MarkSceneDirty(prefabStage.scene);
            else
                EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene());
            Debug.Log($"GameSoundManagerSetup: Assigned {assigned} clip(s) from {SoundsPath}. Save the scene to keep changes.");
        }
        else
            Debug.Log("GameSoundManagerSetup: All clips already assigned.");
    }

    static AudioClip LoadClip(string fileName)
    {
        string path = $"{SoundsPath}/{fileName}";
        var clip = AssetDatabase.LoadAssetAtPath<AudioClip>(path);
        if (clip == null)
            Debug.LogWarning($"GameSoundManagerSetup: Could not load {path}");
        return clip;
    }
}
#endif
