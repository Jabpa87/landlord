using UnityEngine;

/// <summary>
/// ScriptableObject database of characters. Create via Assets → Create → Character Database.
/// </summary>
[CreateAssetMenu(fileName = "CharacterDatabase", menuName = "Character Database", order = 1)]
public class CharacterDatabase : ScriptableObject
{
    public Character[] characters = new Character[0];

    public int CharacterCount => characters != null ? characters.Length : 0;

    /// <summary>
    /// Returns the character at the given index, or null if out of range.
    /// </summary>
    public Character GetCharacter(int index)
    {
        if (characters == null || index < 0 || index >= characters.Length)
            return null;
        return characters[index];
    }
}
