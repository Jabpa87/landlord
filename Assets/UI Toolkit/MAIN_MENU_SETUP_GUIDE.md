# Main Menu Setup Guide

> **⚠️ IMPORTANT**: This guide is for the OLD single-scene setup.  
> **For the NEW two-scene setup, see `SCENE_SETUP_GUIDE.md`**  
> The new system uses separate MainMenu and Game scenes.

---

## ✅ What Was Created

### 1. Main Menu UI
- ✅ **MainMenu.uxml** - Complete player selection and game customization screen
- ✅ **PlayerSlot.uxml** - Template for individual player configuration slots
- ✅ **MainMenuManager.cs** - Script to handle menu logic and player setup
- ✅ **GameSettings.cs** - Data class to hold game configuration

### 2. Features Implemented
- ✅ Player count selection (2, 3, or 4 players)
- ✅ Player name input for each player
- ✅ Color selection for each player (8 colors available)
- ✅ Game customization:
  - Starting money configuration
  - GO salary configuration
- ✅ Start Game button to begin with configured settings

---

## 🎮 How It Works

### Player Selection Flow:
1. User selects number of players (2, 3, or 4)
2. Player slots appear for each selected player
3. User configures each player:
   - Sets player name
   - Selects player color
4. User can customize game settings (starting money, GO salary)
5. User clicks "START GAME"
6. MainMenuManager creates Player GameObjects with configured settings
7. Menu hides and game begins

---

## 🔧 Setup Instructions

### Step 1: Create Main Menu GameObject

1. In your scene, create an empty GameObject: **"Main Menu Manager"**
2. Add **MainMenuManager** component to it
3. Add **UIDocument** component to it

### Step 2: Assign UXML File

1. Select **Main Menu Manager** GameObject
2. In **UIDocument** component:
   - Set **Source Asset** to: `Assets/UI Toolkit/UXML/MainMenu.uxml`

### Step 3: Configure MainMenuManager

1. Select **Main Menu Manager** GameObject
2. In **MainMenuManager** component:
   - **Main Menu Document**: Assign the UIDocument component (drag from same GameObject)
   - **Turn Manager**: Assign your TurnManager GameObject
   - **Player Prefab** (Optional): If you have a Player prefab, assign it. Otherwise, players will be created as new GameObjects.

### Step 4: Update TurnManager

The TurnManager has been updated to work with the menu:
- It will wait for MainMenuManager to configure players if the list is empty
- Call `InitializePlayers()` after MainMenuManager sets up players

### Step 5: Test the Menu

1. **Play the scene**
2. **Main menu should appear** with player selection
3. **Select number of players** (2, 3, or 4)
4. **Configure each player** (name and color)
5. **Adjust game settings** if desired
6. **Click START GAME**
7. **Menu should hide** and game should begin with configured players

---

## 📝 Player Configuration Details

### Available Colors:
- Red (#F44336)
- Blue (#2196F3)
- Green (#4CAF50)
- Yellow (#FFEB3B)
- Purple (#9C27B0)
- Orange (#FF9800)
- Pink (#E91E63)
- Cyan (#00BCD4)

### Default Settings:
- **Starting Money**: ₦2,000,000
- **GO Salary**: ₦200,000
- **Player Names**: "Player 1", "Player 2", etc.

---

## 🎨 UI Structure

```
MainMenu
├── Title: "MONOPOLY GAME"
├── Player Count Section
│   ├── Buttons: 2, 3, 4 players
├── Player Setup ScrollView
│   └── Player Setup Container
│       ├── Player Slot 1 (Name, Color)
│       ├── Player Slot 2 (Name, Color)
│       └── ...
├── Game Settings Section
│   ├── Starting Money input
│   └── GO Salary input
└── Action Buttons
    ├── START GAME button
    └── BACK button
```

---

## 🔄 Integration with Game

### When "START GAME" is clicked:

1. **MainMenuManager** collects all player configurations
2. Creates Player GameObjects (or uses prefab)
3. Applies player names and colors
4. Sets starting money for each player
5. Adds players to TurnManager's players list
6. Applies game economy settings (GO salary)
7. Calls `TurnManager.InitializePlayers()`
8. Hides the menu
9. Game begins!

---

## ⚠️ Important Notes

1. **Player Prefab**: If you have a Player prefab with all components set up, assign it. Otherwise, MainMenuManager will create basic Player GameObjects.

2. **TurnManager Setup**: Make sure TurnManager's `players` list starts empty - MainMenuManager will populate it.

3. **Scene Setup**: The menu should be visible at game start. You can hide it programmatically or set it up in a separate menu scene.

4. **Player Components**: Created players need:
   - `Player` component
   - `boardPoints` assigned (Transform array)
   - Other Player dependencies (CardSystem, etc.)

---

## 🐛 Troubleshooting

### Menu doesn't appear:
- Check that UIDocument has MainMenu.uxml assigned
- Check that MainMenuManager component is enabled
- Check Console for errors

### Players not created:
- Check that TurnManager is assigned in MainMenuManager
- Check that Player prefab (if used) has Player component
- Check Console for errors during player creation

### Colors not showing:
- Check that USS styles are loaded (main-styles.uss)
- Check that color buttons have correct class names

### Start Game doesn't work:
- Check that all required fields are assigned in MainMenuManager
- Check Console for errors
- Verify TurnManager is properly set up

---

## 📚 Files Created/Modified

### Created:
- ✅ `UI Toolkit/UXML/MainMenu.uxml`
- ✅ `UI Toolkit/UXML/PlayerSlot.uxml`
- ✅ `UI Toolkit/Scripts/MainMenuManager.cs`
- ✅ `UI Toolkit/Scripts/GameSettings.cs`
- ✅ `UI Toolkit/MAIN_MENU_SETUP_GUIDE.md` (this file)

### Modified:
- ✅ `UI Toolkit/USS/main-styles.uss` - Added menu styles
- ✅ `TurnManager.cs` - Added InitializePlayers() method
- ✅ `Player.cs` - Made Money property settable

---

**Main Menu system is ready!** Follow the setup instructions to integrate it into your game. 🎉
