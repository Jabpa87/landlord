using UnityEngine;

/// <summary>
/// Perk: name + description for character benefits.
/// </summary>
[System.Serializable]
public class Perk
{
    public string name = "";
    public string description = "";
}

/// <summary>
/// Cast (fault): name + description for character drawbacks.
/// </summary>
[System.Serializable]
public class Cast
{
    public string name = "";
    public string description = "";
}

/// <summary>
/// Character data: full image, token image, name/title, difficulty, backstory,
/// starting money/assets, two perks, two casts. Used by CharacterDatabase (ScriptableObject).
/// </summary>
[System.Serializable]
public class Character
{
    [Header("Visuals")]
    [Tooltip("Full-body standing image (left side of character selection)")]
    public Sprite fullImage;

    [Tooltip("Token/logo used in-game and in the bottom token row")]
    public Sprite tokenImage;

    [Header("Identity")]
    public string characterName = "Character";
    [Tooltip("Easy, Medium, or Hard")]
    public string difficultyLevel = "Easy";
    [TextArea(2, 4)]
    public string backstory = "";

    [Header("Economy")]
    public int startingMoney = 1800000;
    [Tooltip("e.g. None or list of assets")]
    public string startingAssets = "None";

    [Header("Perks (2)")]
    public Perk perk1 = new Perk();
    public Perk perk2 = new Perk();

    [Header("Casts / Faults (2)")]
    public Cast cast1 = new Cast();
    public Cast cast2 = new Cast();
}
