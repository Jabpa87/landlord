using UnityEngine;
using UnityEditor;

public static class CreateCharacterDatabase
{
    [MenuItem("Assets/Create/Character Database (from plan)")]
    public static void Create()
    {
        var db = ScriptableObject.CreateInstance<CharacterDatabase>();
        db.characters = new Character[0];
        string path = "Assets/CharacterDatabase.asset";
        var existing = AssetDatabase.LoadAssetAtPath<CharacterDatabase>(path);
        if (existing != null)
        {
            Debug.Log("CharacterDatabase already exists at " + path);
            Selection.activeObject = existing;
            return;
        }
        AssetDatabase.CreateAsset(db, path);
        AssetDatabase.SaveAssets();
        Selection.activeObject = db;
        Debug.Log("Created CharacterDatabase at " + path + ". Assign characters in the Inspector.");
    }
}
