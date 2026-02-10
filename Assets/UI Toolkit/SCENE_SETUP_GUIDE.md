# Scene Setup Guide - Main Menu & Game Scenes

## 📋 Overview

The game now uses **two separate scenes**:
1. **MainMenu Scene** - Player selection and game customization
2. **Game Scene** - The actual Monopoly game board

---

## 🎬 Scene Structure

### Scene 1: MainMenu Scene
**Purpose**: Player selection, customization, and game settings

**Required GameObjects**:
- **Main Menu Manager** (with MainMenuManager + UIDocument)
  - UIDocument → Source Asset: `MainMenu.uxml`
  - MainMenuManager → Game Scene Name: `"GameScene"` (or your game scene name)

### Scene 2: Game Scene  
**Purpose**: The actual game board and gameplay

**Required GameObjects**:
- **Game Scene Loader** (with GameSceneLoader component)
  - TurnManager → Assign your TurnManager
  - Player Prefab (optional) → Assign if you have a Player prefab
- **TurnManager** (your existing TurnManager)
- **UI Manager** (with UIDocumentManager)
- **All game board objects** (tiles, players, etc.)

---

## 🔧 Step-by-Step Setup

### Step 1: Create MainMenu Scene

1. **Create New Scene**:
   - File → New Scene
   - Save as: `MainMenu` (or `MainMenuScene`)

2. **Create Main Menu Manager**:
   - Create Empty GameObject: **"Main Menu Manager"**
   - Add Component → **MainMenuManager**
   - Add Component → **UIDocument**

3. **Configure UIDocument**:
   - Select **Main Menu Manager**
   - In **UIDocument** component:
     - **Source Asset**: `Assets/UI Toolkit/UXML/MainMenu.uxml`

4. **Configure MainMenuManager**:
   - **Main Menu Document**: Drag the UIDocument component (from same GameObject)
   - **Game Scene Name**: `"GameScene"` (or whatever you named your game scene)
   - **Player Prefab**: (Optional) Leave empty or assign if you have one

5. **Add Camera** (if needed):
   - The menu is UI-only, but Unity needs a camera
   - Create → Camera (or use existing)

6. **Save Scene**: `MainMenu.unity`

---

### Step 2: Update Game Scene

1. **Open Your Game Scene** (the one with the board)

2. **Create Game Scene Loader**:
   - Create Empty GameObject: **"Game Scene Loader"**
   - Add Component → **GameSceneLoader**

3. **Configure GameSceneLoader**:
   - **Turn Manager**: Drag your TurnManager GameObject
   - **Player Prefab**: (Optional) Assign if you have a Player prefab

4. **Update TurnManager**:
   - Make sure **Players** list is **empty** (MainMenu will populate it)
   - All other settings should remain the same

5. **Save Scene**: `GameScene.unity` (or your scene name)

---

### Step 3: Set Build Settings

1. **File → Build Settings**
2. **Add Open Scenes**:
   - Click **Add Open Scenes** for both MainMenu and GameScene
3. **Set MainMenu as First Scene**:
   - Drag **MainMenu** scene to be **first** in the list (index 0)
   - This ensures the menu loads first when you press Play

---

## 🎮 How It Works

### Flow:
1. **Game Starts** → MainMenu Scene loads
2. **Player Configures** → Selects players, names, colors, settings
3. **Clicks "START GAME"** → MainMenuManager stores settings and loads GameScene
4. **GameScene Loads** → GameSceneLoader reads settings and creates players
5. **Game Begins** → TurnManager initializes and game starts

### Data Transfer:
- Settings are stored in `MainMenuManager.SettingsToLoad` (static)
- GameSceneLoader reads this when GameScene starts
- Players are created with configured names, colors, and settings

---

## ✅ Testing

### Test MainMenu Scene:
1. **Open MainMenu scene**
2. **Press Play**
3. **Menu should appear** with player selection
4. **Configure players** (names, colors)
5. **Click "START GAME"**
6. **GameScene should load** with configured players

### Test GameScene Directly:
1. **Open GameScene** directly
2. **Press Play**
3. **Warning should appear** (no settings from menu)
4. **Game will use defaults** or players already assigned in Inspector

---

## 🔄 Scene Names

**Important**: Make sure the scene name in MainMenuManager matches your actual game scene name!

### To Find Your Scene Name:
1. Open your game scene
2. Look at the top of the Unity window (scene tab)
3. The scene name is shown there (e.g., "GameScene", "MonopolyGame", etc.)

### To Set Scene Name in MainMenuManager:
1. Select **Main Menu Manager** in MainMenu scene
2. In **MainMenuManager** component
3. Set **Game Scene Name** to match your scene name exactly (case-sensitive!)

---

## 🐛 Troubleshooting

### Menu doesn't appear:
- ✅ Check that MainMenu scene is set as first scene in Build Settings
- ✅ Check that UIDocument has MainMenu.uxml assigned
- ✅ Check Console for errors

### GameScene loads but players not created:
- ✅ Check that GameSceneLoader has TurnManager assigned
- ✅ Check Console for errors
- ✅ Verify scene name matches in MainMenuManager

### Scene name mismatch:
- ✅ Scene name in MainMenuManager must match exactly
- ✅ Check Build Settings to see scene names
- ✅ Scene names are case-sensitive!

### Players created but not configured:
- ✅ Check that GameSceneLoader is in the scene
- ✅ Check that it's enabled
- ✅ Check Console for warnings

---

## 📝 Quick Checklist

### MainMenu Scene:
- [ ] MainMenuManager GameObject created
- [ ] UIDocument component added
- [ ] MainMenu.uxml assigned to UIDocument
- [ ] Game Scene Name set correctly
- [ ] Scene saved
- [ ] Scene added to Build Settings

### Game Scene:
- [ ] GameSceneLoader GameObject created
- [ ] GameSceneLoader component added
- [ ] TurnManager assigned to GameSceneLoader
- [ ] TurnManager Players list is empty
- [ ] Scene saved
- [ ] Scene added to Build Settings

### Build Settings:
- [ ] MainMenu scene is first (index 0)
- [ ] GameScene is in the list
- [ ] Both scenes are enabled

---

## 🎯 Next Steps

1. **Create MainMenu scene** following Step 1
2. **Update Game scene** following Step 2
3. **Set Build Settings** following Step 3
4. **Test the flow**: MainMenu → GameScene
5. **Customize** as needed!

---

**Your game now has a proper menu system with separate scenes!** 🎉
