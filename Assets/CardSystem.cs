using UnityEngine;
using System.Collections.Generic;
using System.Linq;

/// <summary>
/// Represents a single Chance or Community Chest card.
/// </summary>
[System.Serializable]
public class Card
{
    public string title;
    public string description;
    public CardType type;
    
    // For movement cards
    public int moveSpaces = 0; // Move X spaces forward/backward
    public TileType targetTile = TileType.Go; // Go to specific tile type
    public string targetPropertyName = ""; // Go to specific property
    
    // For money cards
    public int moneyAmount = 0; // Positive = receive, Negative = pay
    public bool payPerHouse = false; // Pay per house owned
    public bool payPerHotel = false; // Pay per hotel owned
    public int houseCost = 0; // Cost per house
    public int hotelCost = 0; // Cost per hotel
    
    // For special cards
    public bool isGetOutOfJailFree = false;
    public bool isGoToJail = false;
}

/// <summary>
/// Type of card deck.
/// </summary>
public enum CardDeckType
{
    Chance,
    CommunityChest
}

/// <summary>
/// Type of card effect.
/// </summary>
public enum CardType
{
    Money,          // Pay or receive money
    Movement,       // Move to specific location
    PropertyRepair, // Pay per house/hotel
    Special         // Get out of jail free, go to jail, etc.
}

/// <summary>
/// Manages Chance and Community Chest card decks.
/// Assign optional Deck Data assets to use ScriptableObject card data; otherwise uses built-in defaults.
/// </summary>
public class CardSystem : MonoBehaviour
{
    [Header("Deck Data (optional)")]
    [Tooltip("Assign a Card Deck Data asset to use its cards for Chance. Leave empty to use built-in Chance deck.")]
    public CardDeckData chanceDeckData;
    [Tooltip("Assign a Card Deck Data asset to use its cards for Community Chest. Leave empty to use built-in deck.")]
    public CardDeckData communityChestDeckData;

    [Header("Card Decks (runtime – filled from Deck Data or built-in)")]
    public List<Card> chanceDeck = new List<Card>();
    public List<Card> communityChestDeck = new List<Card>();
    
    private List<Card> chanceDiscardPile = new List<Card>();
    private List<Card> communityChestDiscardPile = new List<Card>();
    
    void Awake()
    {
        // Load from ScriptableObject deck data if assigned and non-empty; otherwise use built-in
        if (chanceDeckData != null && chanceDeckData.cards != null && chanceDeckData.cards.Count > 0)
        {
            chanceDeck = chanceDeckData.ToCardList();
            Debug.Log($"CardSystem: Loaded {chanceDeck.Count} Chance cards from '{chanceDeckData.name}'.");
        }
        else
        {
            InitializeChanceDeck();
        }

        if (communityChestDeckData != null && communityChestDeckData.cards != null && communityChestDeckData.cards.Count > 0)
        {
            communityChestDeck = communityChestDeckData.ToCardList();
            Debug.Log($"CardSystem: Loaded {communityChestDeck.Count} Community Chest cards from '{communityChestDeckData.name}'.");
        }
        else
        {
            InitializeCommunityChestDeck();
        }
        
        // Shuffle both decks
        ShuffleDeck(CardDeckType.Chance);
        ShuffleDeck(CardDeckType.CommunityChest);
    }
    
    /// <summary>
    /// Initialize Chance deck with all standard Monopoly Chance cards.
    /// </summary>
    void InitializeChanceDeck()
    {
        chanceDeck = new List<Card>
        {
            // Movement cards
            new Card { title = "Advance to GO", description = "Collect ₦200,000", type = CardType.Movement, targetTile = TileType.Go },
            new Card { title = "Advance to Kuje", description = "If you pass GO, collect ₦200,000", type = CardType.Movement, targetPropertyName = "Kuje" },
            new Card { title = "Advance to Nearest Utility", description = "If unowned, you may buy it. If owned, pay 10× dice roll", type = CardType.Movement, targetTile = TileType.Property }, // Special handling needed
            new Card { title = "Advance to Nearest Transportation", description = "If unowned, you may buy it. If owned, pay 2× rent", type = CardType.Movement, targetTile = TileType.Property }, // Special handling needed
            new Card { title = "Go Back 3 Spaces", description = "Move back 3 spaces", type = CardType.Movement, moveSpaces = -3 },
            new Card { title = "Go to Jail", description = "Go directly to Jail. Do not pass GO. Do not collect ₦200,000", type = CardType.Special, isGoToJail = true },
            
            // Money cards (REBALANCED for new economy)
            new Card { title = "Bank pays you dividend", description = "Collect ₦50,000", type = CardType.Money, moneyAmount = 50000 },
            new Card { title = "Pay poor tax", description = "Pay ₦75,000", type = CardType.Money, moneyAmount = -75000 },
            new Card { title = "Your building loan matures", description = "Collect ₦150,000", type = CardType.Money, moneyAmount = 150000 },
            new Card { title = "You have won a crossword competition", description = "Collect ₦50,000", type = CardType.Money, moneyAmount = 50000 },
            
            // Property repair cards (REBALANCED for new building costs)
            new Card { title = "Make general repairs", description = "Pay ₦25,000 per house, ₦100,000 per hotel", type = CardType.PropertyRepair, payPerHouse = true, payPerHotel = true, houseCost = 25000, hotelCost = 100000 },
            new Card { title = "Pay for street repairs", description = "Pay ₦40,000 per house, ₦115,000 per hotel", type = CardType.PropertyRepair, payPerHouse = true, payPerHotel = true, houseCost = 40000, hotelCost = 115000 },
            
            // Special cards
            new Card { title = "Get out of Jail Free", description = "This card may be kept until needed or sold", type = CardType.Special, isGetOutOfJailFree = true },
            new Card { title = "Take a trip to Central Business District", description = "If you pass GO, collect ₦200,000", type = CardType.Movement, targetPropertyName = "Central Business District" },
            new Card { title = "Advance to Wuse", description = "If you pass GO, collect ₦200,000", type = CardType.Movement, targetPropertyName = "Wuse" },
            new Card { title = "Elected Chairman of the Board", description = "Pay each player ₦50,000", type = CardType.Money, moneyAmount = -50000 } // Special: pay all players
        };
    }
    
    /// <summary>
    /// Initialize Community Chest deck with all standard Monopoly Community Chest cards.
    /// </summary>
    void InitializeCommunityChestDeck()
    {
        communityChestDeck = new List<Card>
        {
            // Movement cards
            new Card { title = "Advance to GO", description = "Collect ₦200,000", type = CardType.Movement, targetTile = TileType.Go },
            new Card { title = "Go to Jail", description = "Go directly to Jail. Do not pass GO. Do not collect ₦200,000", type = CardType.Special, isGoToJail = true },
            
            // Money cards
            new Card { title = "Bank error in your favor", description = "Collect ₦200,000", type = CardType.Money, moneyAmount = 200000 },
            new Card { title = "Doctor's fee", description = "Pay ₦50,000", type = CardType.Money, moneyAmount = -50000 },
            new Card { title = "From sale of stock", description = "Collect ₦50,000", type = CardType.Money, moneyAmount = 50000 },
            new Card { title = "Holiday fund matures", description = "Collect ₦100,000", type = CardType.Money, moneyAmount = 100000 },
            new Card { title = "Income tax refund", description = "Collect ₦20,000", type = CardType.Money, moneyAmount = 20000 },
            new Card { title = "It is your birthday", description = "Collect ₦100,000 from each player", type = CardType.Money, moneyAmount = 100000 }, // Special: collect from all
            new Card { title = "Life insurance matures", description = "Collect ₦100,000", type = CardType.Money, moneyAmount = 100000 },
            new Card { title = "Pay hospital fees", description = "Pay ₦100,000", type = CardType.Money, moneyAmount = -100000 },
            new Card { title = "Pay school fees", description = "Pay ₦150,000", type = CardType.Money, moneyAmount = -150000 },
            new Card { title = "Receive ₦25,000 consultancy fee", description = "Collect ₦25,000", type = CardType.Money, moneyAmount = 25000 },
            new Card { title = "You have won second prize in a beauty contest", description = "Collect ₦10,000", type = CardType.Money, moneyAmount = 10000 },
            new Card { title = "You inherit ₦100,000", description = "Collect ₦100,000", type = CardType.Money, moneyAmount = 100000 },
            
            // Special cards
            new Card { title = "Get out of Jail Free", description = "This card may be kept until needed or sold", type = CardType.Special, isGetOutOfJailFree = true }
        };
    }
    
    /// <summary>
    /// Draw a card from the specified deck.
    /// </summary>
    public Card DrawCard(CardDeckType deckType)
    {
        List<Card> deck = deckType == CardDeckType.Chance ? chanceDeck : communityChestDeck;
        List<Card> discardPile = deckType == CardDeckType.Chance ? chanceDiscardPile : communityChestDiscardPile;
        
        // If deck is empty, reshuffle discard pile
        if (deck.Count == 0)
        {
            if (discardPile.Count == 0)
            {
                Debug.LogWarning($"{deckType} deck and discard pile are both empty! Reinitializing from deck data or built-in...");
                ReloadDeck(deckType);
                ShuffleDeck(deckType);
                deck = deckType == CardDeckType.Chance ? chanceDeck : communityChestDeck;
            }
            else
            {
                // Reshuffle discard pile back into deck
                deck.AddRange(discardPile);
                discardPile.Clear();
                ShuffleDeck(deckType);
                Debug.Log($"{deckType} deck reshuffled from discard pile.");
            }
        }
        
        // Draw top card
        Card drawnCard = deck[0];
        deck.RemoveAt(0);
        
        // Add to discard pile (unless it's "Get out of Jail Free" - player keeps it)
        if (!drawnCard.isGetOutOfJailFree)
        {
            discardPile.Add(drawnCard);
        }
        
        return drawnCard;
    }
    
    /// <summary>
    /// Shuffle a deck using Fisher-Yates algorithm.
    /// </summary>
    public void ShuffleDeck(CardDeckType deckType)
    {
        List<Card> deck = deckType == CardDeckType.Chance ? chanceDeck : communityChestDeck;
        
        for (int i = deck.Count - 1; i > 0; i--)
        {
            int j = Random.Range(0, i + 1);
            Card temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
        }
        
        Debug.Log($"{deckType} deck shuffled ({deck.Count} cards).");
    }
    
    /// <summary>
    /// Return a "Get out of Jail Free" card to the deck (when player uses it).
    /// </summary>
    public void ReturnGetOutOfJailCard(CardDeckType deckType)
    {
        List<Card> deck = deckType == CardDeckType.Chance ? chanceDeck : communityChestDeck;
        
        // Create the card and add it back
        Card card = new Card
        {
            title = "Get out of Jail Free",
            description = "This card may be kept until needed or sold",
            type = CardType.Special,
            isGetOutOfJailFree = true
        };
        
        deck.Add(card);
        ShuffleDeck(deckType);
    }

    /// <summary>
    /// Reload deck from assigned CardDeckData or built-in defaults (used when deck and discard are both empty).
    /// </summary>
    void ReloadDeck(CardDeckType deckType)
    {
        if (deckType == CardDeckType.Chance)
        {
            if (chanceDeckData != null && chanceDeckData.cards != null && chanceDeckData.cards.Count > 0)
                chanceDeck = chanceDeckData.ToCardList();
            else
                InitializeChanceDeck();
        }
        else
        {
            if (communityChestDeckData != null && communityChestDeckData.cards != null && communityChestDeckData.cards.Count > 0)
                communityChestDeck = communityChestDeckData.ToCardList();
            else
                InitializeCommunityChestDeck();
        }
    }
}
