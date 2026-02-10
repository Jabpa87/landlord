using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

/// <summary>
/// Creates default Chance and Community Chest deck ScriptableObject assets
/// so card data is editable in the Inspector and assignable to CardSystem.
/// </summary>
public static class CreateCardDeckAssets
{
    const string DeckFolder = "Assets/Data/CardDecks";
    const string ChanceDeckPath = "Assets/Data/CardDecks/ChanceDeckData.asset";
    const string CommunityChestDeckPath = "Assets/Data/CardDecks/CommunityChestDeckData.asset";

    [MenuItem("Assets/Create/Card Deck Data (Chance + Community Chest)")]
    public static void CreateDefaultDecks()
    {
        if (!AssetDatabase.IsValidFolder("Assets/Data"))
            AssetDatabase.CreateFolder("Assets", "Data");
        if (!AssetDatabase.IsValidFolder("Assets/Data/CardDecks"))
            AssetDatabase.CreateFolder("Assets/Data", "CardDecks");

        List<CardData> chanceCards = CreateChanceCardAssets();
        List<CardData> communityChestCards = CreateCommunityChestCardAssets();

        CardDeckData chanceDeck = ScriptableObject.CreateInstance<CardDeckData>();
        chanceDeck.deckName = "Chance";
        chanceDeck.cards = new List<CardData>(chanceCards);
        AssetDatabase.CreateAsset(chanceDeck, ChanceDeckPath);

        CardDeckData communityChestDeck = ScriptableObject.CreateInstance<CardDeckData>();
        communityChestDeck.deckName = "Community Chest";
        communityChestDeck.cards = new List<CardData>(communityChestCards);
        AssetDatabase.CreateAsset(communityChestDeck, CommunityChestDeckPath);

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Selection.activeObject = chanceDeck;
        Debug.Log($"Card decks created at {DeckFolder}. Assign ChanceDeckData and CommunityChestDeckData to CardSystem in the Inspector.");
    }

    static List<CardData> CreateChanceCardAssets()
    {
        var list = new List<CardData>();
        string folder = DeckFolder + "/Chance";
        if (!AssetDatabase.IsValidFolder("Assets/Data/CardDecks/Chance"))
            AssetDatabase.CreateFolder("Assets/Data/CardDecks", "Chance");

        Add(list, folder, "Advance to GO", "Collect ₦200,000", CardType.Movement, targetTile: TileType.Go);
        Add(list, folder, "Advance to Kuje", "If you pass GO, collect ₦200,000", CardType.Movement, targetPropertyName: "Kuje");
        Add(list, folder, "Advance to Nearest Utility", "If unowned, you may buy it. If owned, pay 10× dice roll", CardType.Movement, targetTile: TileType.Property);
        Add(list, folder, "Advance to Nearest Transportation", "If unowned, you may buy it. If owned, pay 2× rent", CardType.Movement, targetTile: TileType.Property);
        Add(list, folder, "Go Back 3 Spaces", "Move back 3 spaces", CardType.Movement, moveSpaces: -3);
        Add(list, folder, "Go to Jail", "Go directly to Jail. Do not pass GO. Do not collect ₦200,000", CardType.Special, isGoToJail: true);
        Add(list, folder, "Bank pays you dividend", "Collect ₦50,000", CardType.Money, moneyAmount: 50000);
        Add(list, folder, "Pay poor tax", "Pay ₦75,000", CardType.Money, moneyAmount: -75000);
        Add(list, folder, "Your building loan matures", "Collect ₦150,000", CardType.Money, moneyAmount: 150000);
        Add(list, folder, "You have won a crossword competition", "Collect ₦50,000", CardType.Money, moneyAmount: 50000);
        Add(list, folder, "Make general repairs", "Pay ₦25,000 per house, ₦100,000 per hotel", CardType.PropertyRepair, payPerHouse: true, payPerHotel: true, houseCost: 25000, hotelCost: 100000);
        Add(list, folder, "Pay for street repairs", "Pay ₦40,000 per house, ₦115,000 per hotel", CardType.PropertyRepair, payPerHouse: true, payPerHotel: true, houseCost: 40000, hotelCost: 115000);
        Add(list, folder, "Get out of Jail Free", "This card may be kept until needed or sold", CardType.Special, isGetOutOfJailFree: true);
        Add(list, folder, "Take a trip to Central Business District", "If you pass GO, collect ₦200,000", CardType.Movement, targetPropertyName: "Central Business District");
        Add(list, folder, "Advance to Wuse", "If you pass GO, collect ₦200,000", CardType.Movement, targetPropertyName: "Wuse");
        Add(list, folder, "Elected Chairman of the Board", "Pay each player ₦50,000", CardType.Money, moneyAmount: -50000);

        return list;
    }

    static List<CardData> CreateCommunityChestCardAssets()
    {
        var list = new List<CardData>();
        string folder = DeckFolder + "/CommunityChest";
        if (!AssetDatabase.IsValidFolder("Assets/Data/CardDecks/CommunityChest"))
            AssetDatabase.CreateFolder("Assets/Data/CardDecks", "CommunityChest");

        Add(list, folder, "Advance to GO", "Collect ₦200,000", CardType.Movement, targetTile: TileType.Go);
        Add(list, folder, "Go to Jail", "Go directly to Jail. Do not pass GO. Do not collect ₦200,000", CardType.Special, isGoToJail: true);
        Add(list, folder, "Bank error in your favor", "Collect ₦200,000", CardType.Money, moneyAmount: 200000);
        Add(list, folder, "Doctor's fee", "Pay ₦50,000", CardType.Money, moneyAmount: -50000);
        Add(list, folder, "From sale of stock", "Collect ₦50,000", CardType.Money, moneyAmount: 50000);
        Add(list, folder, "Holiday fund matures", "Collect ₦100,000", CardType.Money, moneyAmount: 100000);
        Add(list, folder, "Income tax refund", "Collect ₦20,000", CardType.Money, moneyAmount: 20000);
        Add(list, folder, "It is your birthday", "Collect ₦100,000 from each player", CardType.Money, moneyAmount: 100000);
        Add(list, folder, "Life insurance matures", "Collect ₦100,000", CardType.Money, moneyAmount: 100000);
        Add(list, folder, "Pay hospital fees", "Pay ₦100,000", CardType.Money, moneyAmount: -100000);
        Add(list, folder, "Pay school fees", "Pay ₦150,000", CardType.Money, moneyAmount: -150000);
        Add(list, folder, "Receive ₦25,000 consultancy fee", "Collect ₦25,000", CardType.Money, moneyAmount: 25000);
        Add(list, folder, "You have won second prize in a beauty contest", "Collect ₦10,000", CardType.Money, moneyAmount: 10000);
        Add(list, folder, "You inherit ₦100,000", "Collect ₦100,000", CardType.Money, moneyAmount: 100000);
        Add(list, folder, "Get out of Jail Free", "This card may be kept until needed or sold", CardType.Special, isGetOutOfJailFree: true);

        return list;
    }

    static void Add(List<CardData> list, string folder, string title, string description, CardType type,
        int moveSpaces = 0, TileType targetTile = TileType.Go, string targetPropertyName = "",
        int moneyAmount = 0, bool payPerHouse = false, bool payPerHotel = false, int houseCost = 0, int hotelCost = 0,
        bool isGetOutOfJailFree = false, bool isGoToJail = false)
    {
        var data = ScriptableObject.CreateInstance<CardData>();
        data.title = title;
        data.description = description;
        data.type = type;
        data.moveSpaces = moveSpaces;
        data.targetTile = targetTile;
        data.targetPropertyName = targetPropertyName ?? "";
        data.moneyAmount = moneyAmount;
        data.payPerHouse = payPerHouse;
        data.payPerHotel = payPerHotel;
        data.houseCost = houseCost;
        data.hotelCost = hotelCost;
        data.isGetOutOfJailFree = isGetOutOfJailFree;
        data.isGoToJail = isGoToJail;

        string safeName = title.Replace(" ", "_").Replace("'", "");
        string path = folder + "/" + safeName + ".asset";
        AssetDatabase.CreateAsset(data, path);
        list.Add(data);
    }
}
