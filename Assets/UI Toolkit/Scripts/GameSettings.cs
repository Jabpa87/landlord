using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Holds game configuration settings from the main menu.
/// </summary>
[System.Serializable]
public class GameSettings
{
    [Header("Player Configuration")]
    public List<PlayerConfig> playerConfigs = new List<PlayerConfig>();
    
    [Header("Game Economy")]
    public int startingMoney = 2000000; // ₦2,000,000 standard starting money
    public int goSalary = 200000; // ₦200,000 per turn (passing GO)
    
    public GameSettings()
    {
        playerConfigs = new List<PlayerConfig>();
    }
}

/// <summary>
/// Configuration for a single player.
/// </summary>
[System.Serializable]
public class PlayerConfig
{
    public string playerName = "Player";
    public Color playerColor = Color.white;
    public int avatarIndex = 0; // Index of selected avatar (character index in CharacterDatabase)
    public bool isAI = false;
    [Tooltip("Per-player starting money; 0 = use GameSettings.startingMoney")]
    public int startingMoney = 0;

    public PlayerConfig(string name, Color color, int avatar = 0, bool ai = false, int startMoney = 0)
    {
        playerName = name;
        playerColor = color;
        avatarIndex = avatar;
        isAI = ai;
        startingMoney = startMoney;
    }
}
