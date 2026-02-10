using UnityEngine;
using System.Collections.Generic;
using System.Linq;

/// <summary>
/// ScriptableObject for a deck of cards (Chance or Community Chest).
/// Create via Assets > Create > Game > Card Deck Data. Add CardData assets to the list.
/// Assign to CardSystem in the Inspector so the game uses this data.
/// </summary>
[CreateAssetMenu(fileName = "CardDeck", menuName = "Game/Card Deck Data", order = 3)]
public class CardDeckData : ScriptableObject
{
    [Tooltip("Display name for this deck (e.g. Chance, Community Chest).")]
    public string deckName = "Chance";

    [Tooltip("Card data assets. Drag Card Data assets here. Order is the initial draw order before shuffling.")]
    public List<CardData> cards = new List<CardData>();

    /// <summary>
    /// Converts all CardData in this deck to runtime Card instances.
    /// </summary>
    public List<Card> ToCardList()
    {
        if (cards == null || cards.Count == 0)
            return new List<Card>();
        return cards.Where(c => c != null).Select(c => c.ToCard()).ToList();
    }
}
