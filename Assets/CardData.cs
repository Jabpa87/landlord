using UnityEngine;

/// <summary>
/// ScriptableObject for a single Chance or Community Chest card.
/// Create via Assets > Create > Game > Card Data. Edit in Inspector and assign to deck assets.
/// </summary>
[CreateAssetMenu(fileName = "NewCard", menuName = "Game/Card Data", order = 2)]
public class CardData : ScriptableObject
{
    [Header("Display")]
    public string title = "Card Title";
    [TextArea(2, 4)]
    public string description = "Card description...";

    [Header("Type")]
    public CardType type = CardType.Money;

    [Header("Movement")]
    public int moveSpaces = 0;
    public TileType targetTile = TileType.Go;
    public string targetPropertyName = "";

    [Header("Money")]
    public int moneyAmount = 0;
    public bool payPerHouse = false;
    public bool payPerHotel = false;
    public int houseCost = 0;
    public int hotelCost = 0;

    [Header("Special")]
    public bool isGetOutOfJailFree = false;
    public bool isGoToJail = false;

    /// <summary>
    /// Converts this ScriptableObject data to a runtime Card instance.
    /// </summary>
    public Card ToCard()
    {
        return new Card
        {
            title = title,
            description = description,
            type = type,
            moveSpaces = moveSpaces,
            targetTile = targetTile,
            targetPropertyName = targetPropertyName ?? "",
            moneyAmount = moneyAmount,
            payPerHouse = payPerHouse,
            payPerHotel = payPerHotel,
            houseCost = houseCost,
            hotelCost = hotelCost,
            isGetOutOfJailFree = isGetOutOfJailFree,
            isGoToJail = isGoToJail
        };
    }
}
