using UnityEngine;
using UnityEngine.SceneManagement;

public static class CoplayMcpPing
{
    public static string Execute()
    {
        return "Scene=" + SceneManager.GetActiveScene().name + ", isPlaying=" + Application.isPlaying;
    }
}

