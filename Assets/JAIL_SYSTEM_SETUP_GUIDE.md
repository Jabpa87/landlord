# Jail System Setup Guide

## ✅ Implementation Complete

The full jail system has been implemented with all Monopoly-standard features:

### **Features Implemented:**
- ✅ "Go to Jail" tile functionality
- ✅ Jail mechanics (3 turns maximum)
- ✅ Roll doubles to get out (automatic)
- ✅ Pay ₦50,000 to get out immediately
- ✅ "Get out of Jail Free" card support
- ✅ Jail UI panel
- ✅ Turn tracking (1/3, 2/3, 3/3)
- ✅ Automatic movement after getting out

---

## 🎮 How It Works

### **Going to Jail:**
1. Player lands on **"Go to Jail"** tile
2. Player is immediately moved to **Jail** tile
3. Jail state is set (`IsInJail = true`)
4. Turn counter starts at 0

### **While in Jail:**
- Player **cannot move normally**
- Player must either:
  - **Roll doubles** (automatic escape)
  - **Pay ₦50,000** bail (immediate escape)
  - **Use "Get out of Jail Free" card** (if owned)
  - **Wait** (up to 3 turns, then must pay)

### **Getting Out:**
- **Roll doubles:** Automatically get out and move by dice roll
- **Pay bail:** Pay ₦50,000 to get out immediately
- **Use card:** Use "Get out of Jail Free" card (if owned)
- **After 3 turns:** Must pay bail (can't wait anymore)

---

## 🛠️ Setup Instructions

### **Step 1: Jail UI Setup**

1. **Create Jail Panel:**
   - Create a new **Panel** in your Canvas (or HUD)
   - Name it `JailPanel`
   - Position it where you want (center or side)

2. **Add UI Elements:**
   - **Text (TextMeshProUGUI)** - Name: `JailStatusText`
     - Shows: "In Jail - Turn X/3" and instructions
   - **Button** - Name: `PayBailButton`
     - Text: "PAY BAIL (₦50,000)"
   - **Button** - Name: `UseCardButton`
     - Text: "USE CARD"
   - **Button** - Name: `WaitButton`
     - Text: "WAIT"

3. **Link to TurnManager:**
   - Select your **TurnManager** GameObject
   - In Inspector, find **"Jail UI"** section
   - Assign:
     - **Jail Panel** → `JailPanel`
     - **Jail Status Text** → `JailStatusText`
     - **Pay Bail Button** → `PayBailButton`
     - **Use Card Button** → `UseCardButton`
     - **Wait Button** → `WaitButton`

### **Step 2: Configure Jail Bail Cost**

1. **Select each Player** GameObject
2. In Inspector, find **"Jail System"** section
3. **Jail Bail Cost** is set to **₦50,000** by default
4. Adjust if needed (standard Monopoly is 50)

### **Step 3: Test the System**

1. **Enter Play Mode**
2. **Move player** to "Go to Jail" tile (or trigger it via code)
3. **Player should be moved to Jail** tile
4. **Jail panel should appear** on next turn
5. **Test each option:**
   - Roll dice (try to get doubles)
   - Pay bail
   - Use card (if you have one)
   - Wait (if turns < 3)

---

## 📋 Jail UI Button States

### **Pay Bail Button:**
- **Enabled:** If player can afford ₦50,000
- **Disabled:** If player cannot afford bail
- **Action:** Pays bail and gets out immediately

### **Use Card Button:**
- **Enabled:** If player has "Get out of Jail Free" card
- **Disabled:** If player doesn't have card
- **Action:** Uses card and gets out immediately

### **Wait Button:**
- **Enabled:** If turns < 3 (can still wait)
- **Disabled:** If turns >= 3 (must pay)
- **Action:** Ends turn, stays in jail

---

## 🎯 Jail Turn Flow

### **Turn 1-2:**
1. Player rolls dice
2. If **doubles** → Get out automatically, move
3. If **not doubles** → Show jail UI:
   - Pay bail (if can afford)
   - Use card (if has one)
   - Wait (ends turn, stays in jail)

### **Turn 3:**
1. Player rolls dice
2. If **doubles** → Get out automatically, move
3. If **not doubles** → **Must pay bail:**
   - Pay bail button is enabled (if can afford)
   - Wait button is disabled
   - Player must pay to get out

---

## 🔧 Code Integration

### **Giving "Get out of Jail Free" Card:**

```csharp
// From Chance/Community Chest card
player.GiveGetOutOfJailFreeCard();
```

### **Checking Jail Status:**

```csharp
if (player.IsInJail)
{
    Debug.Log($"Player is in jail - Turn {player.TurnsInJail}/3");
    Debug.Log($"Has card: {player.HasGetOutOfJailFreeCard}");
}
```

### **Manual Jail Actions (if needed):**

```csharp
// Pay bail
bool success = player.PayJailBail();

// Use card
bool success = player.UseGetOutOfJailFreeCard();
```

---

## 🐛 Troubleshooting

### **Issue: Player doesn't go to jail when landing on "Go to Jail"**
- **Check:** Tile has `TileType.GoToJail` set
- **Check:** `HandleGoToJail()` is being called
- **Check:** Jail tile exists on board

### **Issue: Jail UI doesn't appear**
- **Check:** Jail UI elements are assigned in TurnManager
- **Check:** `ShowJailUI()` is being called
- **Check:** Panel is active in Hierarchy

### **Issue: Player can't get out of jail**
- **Check:** Player has enough money for bail
- **Check:** Player has "Get out of Jail Free" card (if using)
- **Check:** Console for error messages

### **Issue: Player moves while in jail**
- **Check:** `MoveSteps()` checks `IsInJail` (should prevent movement)
- **Check:** TurnManager uses `DoJailTurn()` when player is in jail

---

## 📝 Notes

- **Jail tile:** Player can land on jail tile normally (just visiting)
- **"Go to Jail" tile:** Sends player to jail immediately
- **Bail cost:** Configurable per player (default ₦50,000)
- **Turn limit:** 3 turns maximum, then must pay
- **Doubles:** Automatically gets player out (no UI needed)
- **Movement:** Player moves by dice roll after getting out

---

## ✅ Testing Checklist

- [ ] Player goes to jail when landing on "Go to Jail" tile
- [ ] Jail UI appears when player is in jail
- [ ] Player can pay bail to get out
- [ ] Player can use "Get out of Jail Free" card
- [ ] Player can wait (if turns < 3)
- [ ] Player must pay after 3 turns
- [ ] Rolling doubles gets player out automatically
- [ ] Player moves correctly after getting out
- [ ] Jail status shows in HUD
- [ ] Buttons are enabled/disabled correctly

---

## 🎉 Next Steps

The jail system is now fully functional! Next features to implement:
1. **Bankruptcy System** - Detect when player can't pay
2. **Win Conditions** - Game ends when 1 player remains
3. **Mortgage System** - Mortgage properties for money
4. **Trading System** - Trade properties between players

See `GAME_STATUS_AND_ROADMAP.md` for full roadmap.
