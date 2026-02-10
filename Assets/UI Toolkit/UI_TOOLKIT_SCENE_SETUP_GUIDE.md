# UI Toolkit Scene Setup Guide

This guide will walk you through setting up UI Toolkit in your Unity scene.

---

## 📋 Step-by-Step Setup

### Step 1: Create UI Manager GameObject

1. In your scene, right-click in the **Hierarchy**
2. Create Empty GameObject: Right-click → **Create Empty**
3. Rename it to **"UI Manager"**

### Step 2: Add UIDocumentManager Component

1. Select the **UI Manager** GameObject
2. In the **Inspector**, click **Add Component**
3. Search for and add **UIDocumentManager** component

### Step 3: Create UIDocument GameObjects

**IMPORTANT**: Unity only allows **one UIDocument per GameObject**, so we need to create separate GameObjects for each panel.

#### 3.1: Main HUD Document
1. Right-click on **UI Manager** in Hierarchy → **Create Empty**
2. Rename it to **"Main HUD Document"**
3. Select **Main HUD Document**
4. Click **Add Component** → Add **UI Document** component
5. In the **Source Asset** field, drag and drop:
   - `Assets/UI Toolkit/UXML/MainHUD.uxml`
6. In **UIDocumentManager** component (on UI Manager), drag **Main HUD Document** GameObject to the **Main HUD Document** field

#### 3.2: Property Panel Document
1. Right-click on **UI Manager** → **Create Empty**
2. Rename it to **"Property Panel Document"**
3. Select **Property Panel Document**
4. Add **UI Document** component
5. Set **Source Asset** to:
   - `Assets/UI Toolkit/UXML/PropertyPanel.uxml`
6. In **UIDocumentManager**, drag **Property Panel Document** to **Property Panel Document** field

#### 3.3: Jail Panel Document
1. Right-click on **UI Manager** → **Create Empty**
2. Rename it to **"Jail Panel Document"**
3. Select **Jail Panel Document**
4. Add **UI Document** component
5. Set **Source Asset** to:
   - `Assets/UI Toolkit/UXML/JailPanel.uxml`
6. In **UIDocumentManager**, drag **Jail Panel Document** to **Jail Panel Document** field

#### 3.4: Card Panel Document
1. Right-click on **UI Manager** → **Create Empty**
2. Rename it to **"Card Panel Document"**
3. Select **Card Panel Document**
4. Add **UI Document** component
5. Set **Source Asset** to:
   - `Assets/UI Toolkit/UXML/CardPanel.uxml`
6. In **UIDocumentManager**, drag **Card Panel Document** to **Card Panel Document** field

**Final Hierarchy Should Look Like:**
```
UI Manager
├── Main HUD Document (with UIDocument component)
├── Property Panel Document (with UIDocument component)
├── Jail Panel Document (with UIDocument component)
└── Card Panel Document (with UIDocument component)
```

**Note:** Build functionality now uses the BUILD button in the main UI (ActionButtonsRow), so no separate Build Panel is needed.

### Step 4: Connect to TurnManager

1. Find your **TurnManager** GameObject in the scene
2. Select it
3. In the **TurnManager** component, find the **UI Toolkit** section
4. Drag the **UI Manager** GameObject to the **UI Manager** field

### Step 5: Connect to Player(s)

1. Find each **Player** GameObject in the scene
2. Select a Player
3. In the **Player** component, find the **UI Toolkit** section
4. Drag the **UI Manager** GameObject to the **UI Manager** field
5. Repeat for all players

---

## ✅ Verification Checklist

After setup, verify:

- [ ] UI Manager GameObject exists in scene
- [ ] UI Manager has UIDocumentManager component
- [ ] 4 child GameObjects exist (MainHUD, PropertyPanel, JailPanel, CardPanel)
- [ ] Each child GameObject has exactly 1 UIDocument component
- [ ] Each UIDocument has correct UXML file assigned
- [ ] UIDocumentManager has all 4 UIDocuments assigned (drag the child GameObjects)
- [ ] TurnManager has UI Manager assigned
- [ ] All Player GameObjects have UI Manager assigned
- [ ] BUILD button is in main UI (ActionButtonsRow) - no separate BuildPanel needed

---

## 🎮 Testing

1. **Play the scene**
2. You should see:
   - Top panel with player name and wallet
   - Bottom panel with Roll Dice and End Turn buttons
3. **Click Roll Dice** - should work
4. **Land on a property** - Property Panel should appear
5. **Land on your own property** - BUILD button should enable (in action buttons row)
6. **Click BUILD button** - Should build house/hotel on current property
7. **Go to jail** - Jail Panel should appear
8. **Draw a card** - Card Panel should appear

---

## 🐛 Troubleshooting

### UI Not Showing
- **Check**: All UIDocument components are enabled
- **Check**: UXML files are assigned correctly
- **Check**: UI Manager GameObject is active

### Buttons Not Working
- **Check**: TurnManager has UI Manager assigned
- **Check**: Player has UI Manager assigned
- **Check**: Console for errors

### Panels Not Appearing
- **Check**: UIDocumentManager has all documents assigned
- **Check**: Scripts are calling `uiManager.ShowXXXPanel()`
- **Check**: Console for null reference errors

### Text Not Updating
- **Check**: UIDocumentManager initialized correctly (check Start method)
- **Check**: Element names match between UXML and script queries

---

## 📝 Notes

- **One UIDocument Per GameObject**: Unity only allows one UIDocument component per GameObject. That's why we create separate child GameObjects.
- **Panel Settings**: Each UIDocument can have its own PanelSettings, but default works fine
- **Sorting Order**: If panels overlap, adjust PanelSettings sorting order
- **Screen Space**: UI Toolkit renders in screen space by default (no Canvas needed!)
- **Organization**: Keeping all UIDocuments as children of UI Manager keeps the hierarchy clean

---

## 🎯 Next Steps

After setup is complete:
1. Test all UI interactions
2. Adjust styles in USS files if needed
3. Remove old Canvas UI (if you had one)
4. Enjoy your new UI Toolkit system! 🎉
