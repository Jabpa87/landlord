using UnityEngine;
using System.Collections.Generic;

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

    [Header("Theme Override")]
    [Tooltip("When enabled, replaces loaded decks with the Nigerian-themed Chance/Community cards below.")]
    public bool useNigerianThemeDecks = true;
    [Tooltip("Logs payout integrity for all money cards at startup (Chance + Community Chest).")]
    public bool validateMoneyCardsOnStartup = true;
    
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

        if (useNigerianThemeDecks)
            ApplyNigerianThemeDecks();
        
        // Shuffle both decks
        ShuffleDeck(CardDeckType.Chance);
        ShuffleDeck(CardDeckType.CommunityChest);

        if (validateMoneyCardsOnStartup)
            ValidateMoneyCardPayoutsOnStartup();
    }

    void ApplyNigerianThemeDecks()
    {
        chanceDeck = BuildNigerianChanceDeck();
        communityChestDeck = BuildNigerianCommunityDeck();
        Debug.Log("CardSystem: Applied Nigerian-themed Chance and Community Chest decks.");
    }

    List<Card> BuildNigerianCommunityDeck()
    {
        return new List<Card>
        {
            new Card { title = "Bank make mistake credit you", description = "Collect ₦300,000.", type = CardType.Money, moneyAmount = 300000 },
            new Card { title = "You visit private hospital", description = "Doctor bill show. Pay ₦75,000.", type = CardType.Money, moneyAmount = -75000 },
            new Card { title = "You sell crypto small", description = "Collect ₦75,000.", type = CardType.Money, moneyAmount = 75000 },
            new Card { title = "Police Oga Know Me card", description = "Keep am — use am escape jail.", type = CardType.Special, isGetOutOfJailFree = true },
            new Card { title = "Police carry you go station", description = "Go jail straight.", type = CardType.Special, isGoToJail = true },
            new Card { title = "Government refund your tax small", description = "Collect ₦30,000.", type = CardType.Money, moneyAmount = 30000 },
            new Card { title = "Na your birthday (collect from each player)", description = "Everybody dash you ₦15,000 each.", type = CardType.Money, moneyAmount = 15000 },
            new Card { title = "Your insurance pay out", description = "Collect ₦150,000.", type = CardType.Money, moneyAmount = 150000 },
            new Card { title = "Hospital admission don show", description = "Pay ₦150,000.", type = CardType.Money, moneyAmount = -150000 },
            new Card { title = "School fees don land", description = "Pay ₦225,000.", type = CardType.Money, moneyAmount = -225000 },
            new Card { title = "Small consultancy hustle", description = "Collect ₦37,500.", type = CardType.Money, moneyAmount = 37500 },
            new Card { title = "Uncle from village leave money for you", description = "Collect ₦150,000.", type = CardType.Money, moneyAmount = 150000 },
            new Card { title = "Roof leak for your house", description = "Pay ₦60,000 per house.", type = CardType.PropertyRepair, payPerHouse = true, payPerHotel = false, houseCost = 60000, hotelCost = 0 },
            new Card { title = "Christmas contribution pay out", description = "Collect ₦150,000.", type = CardType.Money, moneyAmount = 150000 },
            new Card { title = "Generator spoil suddenly", description = "Pay ₦90,000 repair.", type = CardType.Money, moneyAmount = -90000 },
            new Card { title = "You win cooperative payout", description = "Collect ₦120,000.", type = CardType.Money, moneyAmount = 120000 }
        };
    }

    List<Card> BuildNigerianChanceDeck()
    {
        return new List<Card>
        {
            new Card { title = "Advance to GO", description = "Go back to Start. Collect ₦300,000.", type = CardType.Movement, targetTile = TileType.Go },
            new Card { title = "Move go Maitama luxury estate", description = "Advance to Maitama.", type = CardType.Movement, targetPropertyName = "Maitama" },
            new Card { title = "Advance to Nearest Utility (NEPA office)", description = "Go nearest NEPA office.", type = CardType.Movement, targetTile = TileType.Property },
            new Card { title = "Advance to Nearest Transportation (BRT station)", description = "Enter nearest BRT station.", type = CardType.Movement, targetTile = TileType.Property },
            new Card { title = "Bank dash you dividend", description = "Collect ₦75,000.", type = CardType.Money, moneyAmount = 75000 },
            new Card { title = "Bail Settled card", description = "Keep am.", type = CardType.Special, isGetOutOfJailFree = true },
            new Card { title = "Reverse waka 3 tiles", description = "Go back 3 spaces.", type = CardType.Movement, moveSpaces = -3 },
            new Card { title = "EFCC invite you", description = "Go jail immediately.", type = CardType.Special, isGoToJail = true },
            new Card { title = "Do house maintenance", description = "Pay ₦37,500 per house.", type = CardType.PropertyRepair, payPerHouse = true, payPerHotel = false, houseCost = 37500, hotelCost = 0 },
            new Card { title = "Sanitation levy show", description = "Pay ₦22,500.", type = CardType.Money, moneyAmount = -22500 },
            new Card { title = "Travel go Abuja airport", description = "Advance to Nnamdi Azikiwe Airport.", type = CardType.Movement, targetPropertyName = "Nnamdi Azikiwe Airport" },
            new Card { title = "Pay each player ₦75,000 (Chairman wahala)", description = "Dem vote you chairman. Dash everybody ₦75,000 each.", type = CardType.Money, moneyAmount = -75000 },
            new Card { title = "Your building investment pay", description = "Collect ₦225,000.", type = CardType.Money, moneyAmount = 225000 },
            new Card { title = "LASTMA catch you overspeed", description = "Pay ₦22,500.", type = CardType.Money, moneyAmount = -22500 },
            new Card { title = "Move go Banana Island", description = "Advance to premium estate (Maitama).", type = CardType.Movement, targetPropertyName = "Maitama" },
            new Card { title = "Pay each player ₦75,000 (No vex)", description = "You dash everybody money. Pay ₦75,000 each.", type = CardType.Money, moneyAmount = -75000 }
        };
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
            title = deckType == CardDeckType.Chance ? "Bail Settled card" : "Police Oga Know Me card",
            description = deckType == CardDeckType.Chance ? "Keep am." : "Keep am — use am escape jail.",
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
            if (useNigerianThemeDecks)
                chanceDeck = BuildNigerianChanceDeck();
            else if (chanceDeckData != null && chanceDeckData.cards != null && chanceDeckData.cards.Count > 0)
                chanceDeck = chanceDeckData.ToCardList();
            else
                InitializeChanceDeck();
        }
        else
        {
            if (useNigerianThemeDecks)
                communityChestDeck = BuildNigerianCommunityDeck();
            else if (communityChestDeckData != null && communityChestDeckData.cards != null && communityChestDeckData.cards.Count > 0)
                communityChestDeck = communityChestDeckData.ToCardList();
            else
                InitializeCommunityChestDeck();
        }
    }

    void ValidateMoneyCardPayoutsOnStartup()
    {
        ValidateMoneyCardsForDeck(CardDeckType.Chance, chanceDeck);
        ValidateMoneyCardsForDeck(CardDeckType.CommunityChest, communityChestDeck);
    }

    void ValidateMoneyCardsForDeck(CardDeckType deckType, List<Card> deck)
    {
        if (deck == null)
        {
            Debug.LogWarning($"[CardSystem][MoneyValidation] {deckType}: deck is null.");
            return;
        }

        int moneyCardCount = 0;
        int zeroAmountCount = 0;
        int signMismatchCount = 0;

        for (int i = 0; i < deck.Count; i++)
        {
            Card card = deck[i];
            if (card == null || card.type != CardType.Money) continue;
            moneyCardCount++;

            int configured = card.moneyAmount;
            int inferred = InferMoneyAmountFromCardText(card);

            if (configured == 0)
            {
                zeroAmountCount++;
                Debug.LogWarning($"[CardSystem][MoneyValidation] {deckType} | ZERO amount | \"{card.title}\" | inferred={inferred} | desc=\"{card.description}\"");
                continue;
            }

            if (inferred != 0 && (configured > 0) != (inferred > 0))
            {
                signMismatchCount++;
                Debug.LogWarning($"[CardSystem][MoneyValidation] {deckType} | SIGN mismatch | \"{card.title}\" | configured={configured} inferred={inferred}");
            }
            else
            {
                Debug.Log($"[CardSystem][MoneyValidation] {deckType} | OK | \"{card.title}\" | amount={configured}");
            }
        }

        Debug.Log($"[CardSystem][MoneyValidation] {deckType} summary: moneyCards={moneyCardCount}, zeroAmount={zeroAmountCount}, signMismatch={signMismatchCount}");
    }

    int InferMoneyAmountFromCardText(Card card)
    {
        if (card == null) return 0;

        string title = string.IsNullOrEmpty(card.title) ? string.Empty : card.title.ToLowerInvariant();
        string description = string.IsNullOrEmpty(card.description) ? string.Empty : card.description.ToLowerInvariant();
        string text = $"{title} {description}";

        int bestValue = 0;
        int current = 0;
        bool inDigits = false;
        for (int i = 0; i < text.Length; i++)
        {
            char ch = text[i];
            if (ch >= '0' && ch <= '9')
            {
                inDigits = true;
                int digit = ch - '0';
                if (current <= (int.MaxValue - digit) / 10)
                    current = current * 10 + digit;
            }
            else
            {
                if (inDigits)
                {
                    if (current > bestValue) bestValue = current;
                    current = 0;
                    inDigits = false;
                }
            }
        }
        if (inDigits && current > bestValue) bestValue = current;
        if (bestValue <= 0) return 0;

        bool isPositive =
            text.Contains("collect") ||
            text.Contains("receive") ||
            text.Contains("credit") ||
            text.Contains("refund") ||
            text.Contains("dividend") ||
            text.Contains("win");

        bool isNegative =
            text.Contains("pay") ||
            text.Contains("bill") ||
            text.Contains("levy") ||
            text.Contains("fine") ||
            text.Contains("repair");

        if (isPositive && !isNegative) return bestValue;
        if (isNegative && !isPositive) return -bestValue;
        return bestValue;
    }
}
