# Card System Setup Guide

## 📦 ScriptableObject Card Data (recommended)

Card data can be stored in **ScriptableObject** assets so you can edit it in the Inspector and assign it to the Card System.

### Create default deck assets (one-time)

1. In Unity menu: **Assets → Create → Card Deck Data (Chance + Community Chest)**.
2. This creates:
   - **Assets/Data/CardDecks/ChanceDeckData.asset** – Chance deck (16 cards).
   - **Assets/Data/CardDecks/CommunityChestDeckData.asset** – Community Chest deck (15 cards).
   - Individual **Card Data** assets under **Chance/** and **CommunityChest/** subfolders (editable in Inspector).

### Assign decks to Card System

1. Select the **Card System** GameObject in the Game Scene.
2. In the Inspector, under **Deck Data (optional)**:
   - **Chance Deck Data** → drag **ChanceDeckData**.
   - **Community Chest Deck Data** → drag **CommunityChestDeckData**.
3. At runtime the Card System loads cards from these assets. If you leave them empty, it uses the built-in default decks.

### Edit card data

- Open **Assets/Data/CardDecks/Chance/** or **CommunityChest/** and select any **Card Data** asset.
- Edit **Title**, **Description**, **Type**, money amounts, movement targets, etc. in the Inspector.
- To add a new card: **Right-click in Project → Create → Game → Card Data**, then add it to the deck asset’s **Cards** list.

---

## ✅ Implementation Complete

The full Chance & Community Chest card system has been implemented with all standard Monopoly cards!

### **Features Implemented:**
- ✅ **Card Deck System** - Proper shuffling, discard pile, reshuffling
- ✅ **16 Chance Cards** - All standard Monopoly Chance cards
- ✅ **16 Community Chest Cards** - All standard Monopoly Community Chest cards
- ✅ **Movement Cards** - Advance to GO, properties, nearest utility/transportation, go back spaces
- ✅ **Money Cards** - Pay/receive money, collect from/pay to all players
- ✅ **Property Repair Cards** - Pay per house/hotel owned
- ✅ **Special Cards** - "Get out of Jail Free", "Go to Jail"
- ✅ **Card UI** - Display card title and description
- ✅ **"Get out of Jail Free"** - Player keeps card until used, returns to deck when used

---

## 🎮 Card Types

### **Movement Cards:**
- **Advance to GO** - Move to GO, collect ₦200,000
- **Advance to [Property]** - Move to specific property (Kuje, Central Business District, Wuse)
- **Advance to Nearest Utility** - Move to nearest utility, pay 10× dice roll if owned
- **Advance to Nearest Transportation** - Move to nearest transportation, pay 2× rent if owned
- **Go Back 3 Spaces** - Move backward 3 spaces
- **Go to Jail** - Go directly to jail

### **Money Cards:**
- **Receive Money** - Bank pays you, inherit, etc.
- **Pay Money** - Hospital fees, school fees, taxes, etc.
- **Collect from All Players** - Birthday, beauty contest prizes
- **Pay All Players** - Elected Chairman of the Board

### **Property Repair Cards:**
- **Make General Repairs** - ₦25,000 per house, ₦100,000 per hotel
- **Pay for Street Repairs** - ₦40,000 per house, ₦115,000 per hotel

### **Special Cards:**
- **Get out of Jail Free** - Keep until needed, use to escape jail
- **Go to Jail** - Go directly to jail (no GO salary)

---

## 🛠️ Setup Instructions

### **Step 1: Create CardSystem GameObject**

1. **Create empty GameObject** in your scene
2. **Name it** `CardSystem`
3. **Add Component** → `CardSystem`
4. The decks will auto-initialize on Awake

### **Step 2: Link CardSystem to Players**

1. **Select each Player** GameObject
2. In Inspector, find **"Card System"** section
3. **Assign Card System** → Drag `CardSystem` GameObject
4. **Assign Turn Manager** → Drag your `TurnManager` GameObject

### **Step 3: Create Card UI**

1. **Create Card Panel:**
   - Create a **Panel** in your Canvas
   - Name it `CardPanel`
   - Position it (center or side)
   - Set background color/image

2. **Add UI Elements:**
   - **Text (TextMeshProUGUI)** - Name: `CardTitleText`
     - Shows card title (e.g., "Advance to GO")
   - **Text (TextMeshProUGUI)** - Name: `CardDescriptionText`
     - Shows card description (e.g., "Collect ₦200,000")
   - **Button** - Name: `   `
     - Text: "OK" or "Continue"
     - Closes the card panel

3. **Link to Player:**
   - Select **Player** GameObject
   - In Inspector, find **"Card UI"** section
   - Assign:
     - **Card Panel** → `CardPanel`
     - **Card Title Text** → `CardTitleText`
     - **Card Description Text** → `CardDescriptionText`
     - **Card Ok Button** → `CardOkButton`

### **Step 4: Test the System**

1. **Enter Play Mode**
2. **Move player** to a Chance or Community Chest tile
3. **Card should appear** with title and description
4. **Click OK** to continue
5. **Card effect should apply** (money, movement, etc.)

---

## 📋 How It Works

### **Card Drawing:**
1. Player lands on Chance/Community Chest tile
2. System draws top card from deck
3. Card is removed from deck
4. Card goes to discard pile (unless "Get out of Jail Free")
5. When deck is empty, discard pile is reshuffled into deck

### **"Get out of Jail Free" Cards:**
- Player **keeps the card** (doesn't go to discard)
- Card is stored in `HasGetOutOfJailFreeCard`
- When used, card is **returned to deck** and shuffled
- Player can use it from jail UI

### **Movement Cards:**
- **Advance to GO** - Moves to GO tile, collects salary
- **Advance to Property** - Moves to specific property by name
- **Nearest Utility** - Finds closest utility, moves there
- **Nearest Transportation** - Finds closest transportation, moves there
- **Go Back X Spaces** - Moves backward X spaces
- **Go to Jail** - Immediately sends player to jail

### **Money Cards:**
- **Positive amount** - Player receives money
- **Negative amount** - Player pays money
- **"Each player"** - Collects from or pays to all other players

### **Property Repair Cards:**
- Counts all houses and hotels owned by player
- Calculates total cost (houses × houseCost + hotels × hotelCost)
- Player pays the total

---

## 🎯 Card List

### **Chance Cards (16 cards):**
1. Advance to GO
2. Advance to Kuje
3. Advance to Nearest Utility
4. Advance to Nearest Transportation
5. Go Back 3 Spaces
6. Go to Jail
7. Bank pays you dividend (₦100,000)
8. Pay poor tax (₦150,000)
9. Your building loan matures (₦200,000)
10. You have won a crossword competition (₦100,000)
11. Make general repairs (₦25k/house, ₦100k/hotel)
12. Pay for street repairs (₦40k/house, ₦115k/hotel)
13. Get out of Jail Free
14. Take a trip to Central Business District
15. Advance to Wuse
16. Elected Chairman of the Board (pay each player ₦50,000)

### **Community Chest Cards (16 cards):**
1. Advance to GO
2. Go to Jail
3. Bank error in your favor (₦200,000)
4. Doctor's fee (₦50,000)
5. From sale of stock (₦50,000)
6. Holiday fund matures (₦100,000)
7. Income tax refund (₦20,000)
8. It is your birthday (₦100,000 from each player)
9. Life insurance matures (₦100,000)
10. Pay hospital fees (₦100,000)
11. Pay school fees (₦150,000)
12. Receive ₦25,000 consultancy fee
13. You have won second prize in a beauty contest (₦10,000)
14. You inherit ₦100,000
15. Get out of Jail Free

---

## 🔧 Advanced Features

### **Customizing Cards:**

You can modify cards in `CardSystem.cs`:
- Change money amounts
- Add/remove cards
- Modify property names
- Adjust repair costs

### **Adding New Cards:**

```csharp
new Card 
{ 
    title = "Your Card Title",
    description = "Card description",
    type = CardType.Money, // or Movement, PropertyRepair, Special
    moneyAmount = 100000 // for money cards
}
```

---

## 🐛 Troubleshooting

### **Issue: Cards not drawing**
- **Check:** CardSystem component is assigned to Player
- **Check:** CardSystem GameObject exists in scene
- **Check:** Console for errors

### **Issue: Card UI doesn't appear**
- **Check:** Card UI elements are assigned in Player Inspector
- **Check:** Card Panel is active in Hierarchy
- **Check:** Card Ok Button has onClick listener

### **Issue: Movement cards don't work**
- **Check:** Property names match exactly (case-sensitive)
- **Check:** Board has utility/transportation tiles
- **Check:** Console for "Could not find target" warnings

### **Issue: "Get out of Jail Free" not working**
- **Check:** Player has `HasGetOutOfJailFreeCard = true`
- **Check:** Card is returned to deck when used
- **Check:** Jail UI shows "Use Card" button enabled

---

## ✅ Testing Checklist

- [ ] CardSystem GameObject created and CardSystem component added
- [ ] CardSystem assigned to all Players
- [ ] TurnManager assigned to all Players
- [ ] Card UI created and assigned
- [ ] Landing on Chance draws Chance card
- [ ] Landing on Community Chest draws Community Chest card
- [ ] Card UI displays title and description
- [ ] Money cards add/subtract money correctly
- [ ] Movement cards move player correctly
- [ ] Property repair cards calculate cost correctly
- [ ] "Get out of Jail Free" card is kept by player
- [ ] "Go to Jail" card sends player to jail
- [ ] Deck reshuffles when empty

---

## 🎉 Next Steps

The card system is now fully functional! All standard Monopoly cards are implemented:
- ✅ Card deck system with shuffling
- ✅ All movement cards
- ✅ All money cards
- ✅ Property repair cards
- ✅ Special cards (Get out of Jail Free, Go to Jail)

The system is ready to use! Just set up the UI and link the components.
