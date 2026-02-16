using UnityEditor;
using UnityEngine;

public class StopPlayMode
{
    public static void Execute()
    {
        if (EditorApplication.isPlaying)
        {
            EditorApplication.isPlaying = false;
            Debug.Log("Stopped Play Mode.");
        }
    }
}
