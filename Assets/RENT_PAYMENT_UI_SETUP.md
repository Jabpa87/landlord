# Rent Payment UI Setup Guide

## Overview

This guide explains how to set up the Rent Payment Panel UI that appears when a player pays rent to another player.

---

## Step 1: Create Rent Payment Panel Document

1. **In Hierarchy**, find your **UI Manager** GameObject
2. **Right-click** on UI Manager → **Create Empty**
3. **Rename** it to **"Rent Payment Panel Document"**
4. **Select** "Rent Payment Panel Document"
5. **Add Component** → **UI Document**
6. **In UIDocument component:**
   - Set **Source Asset** to: `Assets/UI Toolkit/UXML/RentPaymentPanel.uxml`
7. **Select UI Manager** GameObject
8. **In UIDocumentManager component**, drag **Rent Payment Panel Document** to the **Rent Payment Panel Document** field

---

## Step 2: Verify Setup

Your Hierarchy should look like:

```
UI Manager
├── Main HUD Document
├── Property Panel Document
├── Jail Panel Document
├── Card Panel Document
├── Game Over Panel Document
├── Trade Panel Document
├── Bankruptcy Panel Document
└── Rent Payment Panel Document ← NEW
```

---

## Step 3: Test

1. **Play the game**
2. **Land on a property owned by another player**
3. **Rent Payment Panel should appear automatically** showing:
   - Player name who paid
   - Property name
   - Rent amount
   - Owner name (who received the rent)
4. **Click OK** to dismiss the panel

---

## UI Features

The Rent Payment Panel shows:
- **Title**: "💰 RENT PAYMENT"
- **Message**: "{Player Name} paid rent"
- **Details**:
  - Property: {Property Name}
  - Rent: ₦{Amount}
  - Paid to: {Owner Name}
- **OK Button**: Closes the panel

---

## When It Appears

The Rent Payment Panel automatically appears when:
1. ✅ Player lands on opponent's property (normal rent)
2. ✅ Player lands on utility via card (10× dice roll)
3. ✅ Player lands on transportation via card (2× normal rent)

---

## Troubleshooting

### Panel Not Showing:
- Check that Rent Payment Panel Document is assigned in UIDocumentManager
- Verify RentPaymentPanel.uxml is assigned to UIDocument
- Check Console for errors
- Make sure rent was successfully paid (if player can't afford, bankruptcy panel shows instead)

### Panel Shows But Wrong Info:
- Check that property owner is set correctly
- Verify player names are set
- Check Console logs for rent calculation

---

## Notes

- The panel appears automatically - no button click needed
- Rent is paid automatically when landing on opponent's property
- If player can't afford rent, Bankruptcy Panel shows instead
- The panel is non-blocking - game continues after clicking OK
