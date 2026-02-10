# Trade & Bankruptcy UI Setup Guide

## Overview

This guide explains how to set up the Trade Panel and Bankruptcy Panel UI documents in your Unity scene.

**Note:** If you already have a GameObject called "TradeSystem" with the TradeSystem component, you can use that! Just make sure it has the correct references assigned.

---

## Step 1: Create Trade Panel Document

1. **In Hierarchy**, find your **UI Manager** GameObject
2. **Right-click** on UI Manager → **Create Empty**
3. **Rename** it to **"Trade Panel Document"**
4. **Select** "Trade Panel Document"
5. **Add Component** → **UI Document**
6. **In UIDocument component:**
   - Set **Source Asset** to: `Assets/UI Toolkit/UXML/TradePanel.uxml`
7. **Select UI Manager** GameObject
8. **In UIDocumentManager component**, drag **Trade Panel Document** to the **Trade Panel Document** field

**Note:** If you already have a GameObject called "TradeSystem", you can use that instead. Just make sure it has the TradeSystem component attached and the references are set correctly.

---

## Step 2: Create Bankruptcy Panel Document

1. **In Hierarchy**, find your **UI Manager** GameObject
2. **Right-click** on UI Manager → **Create Empty**
3. **Rename** it to **"Bankruptcy Panel Document"**
4. **Select** "Bankruptcy Panel Document"
5. **Add Component** → **UI Document**
6. **In UIDocument component:**
   - Set **Source Asset** to: `Assets/UI Toolkit/UXML/BankruptcyPanel.uxml`
7. **Select UI Manager** GameObject
8. **In UIDocumentManager component**, drag **Bankruptcy Panel Document** to the **Bankruptcy Panel Document** field

---

## Step 3: Verify Setup

Your Hierarchy should look like:

```
UI Manager
├── Main HUD Document
├── Property Panel Document
├── Jail Panel Document
├── Card Panel Document
├── Game Over Panel Document
├── Trade Panel Document ← NEW
└── Bankruptcy Panel Document ← NEW
```

---

## Step 4: Test

### Test Trading:
1. Play the game
2. Click **TRADE** button
3. Trade panel should appear
4. You should see:
   - Player names
   - Property lists (clickable to add/remove)
   - Money input fields
   - Confirm/Cancel buttons

### Test Bankruptcy:
1. Play the game
2. Land on a property you can't afford
3. Bankruptcy panel should appear automatically
4. Shows bankruptcy message and details

---

## UI Features

### Trade Panel Features:
- **Player Names**: Shows who is trading
- **Property Lists**: Scrollable lists of tradeable properties
- **Money Fields**: Input fields for money amounts
- **Confirm Button**: Initiating player confirms trade
- **Cancel Button**: Initiating player cancels trade
- **Accept Button**: Target player accepts trade (shown after confirm)
- **Reject Button**: Target player rejects trade (shown after confirm)

### Bankruptcy Panel Features:
- **Title**: "⚠️ BANKRUPTCY"
- **Message**: Player name and bankruptcy status
- **Details**: Debt amount and property transfer info
- **OK Button**: Closes the panel

---

## Troubleshooting

### Trade Panel Not Showing:
- Check that Trade Panel Document is assigned in UIDocumentManager
- Verify TradePanel.uxml is assigned to UIDocument
- Check Console for errors

### Bankruptcy Panel Not Showing:
- Check that Bankruptcy Panel Document is assigned in UIDocumentManager
- Verify BankruptcyPanel.uxml is assigned to UIDocument
- Check Console for errors

### Properties Not Appearing in Trade List:
- Properties must be:
  - Owned by the player
  - Not mortgaged
  - No houses or hotels
- If a property has buildings, sell them first

---

## Notes

- Trade UI shows all tradeable properties for each player
- Click a property to add/remove it from the trade
- Green background = property is in the trade
- Gray background = property available but not in trade
- Money fields update automatically when changed
