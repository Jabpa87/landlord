# Auction UI Not Showing - Troubleshooting Guide

## Quick Fix Checklist

### 1. Check AuctionSystem Component Setup

1. **Find AuctionSystem GameObject** in your scene
2. **Select it** and check Inspector
3. **Verify these fields are assigned:**
   - ✅ `Turn Manager` - Should reference your TurnManager
   - ✅ `Ui Manager` - Should reference your UIDocumentManager
   - ✅ `Auction Panel Document` - **THIS IS CRITICAL!**

### 2. Create and Assign Auction Panel Document

If `Auction Panel Document` is **NULL** or **None**, you need to create it:

1. **In Hierarchy**, find your **UI Manager** GameObject
2. **Right-click** on UI Manager → **Create Empty**
3. **Rename** to **"Auction Panel Document"**
4. **Select** "Auction Panel Document"
5. **Add Component** → **UI Document**
6. **In UIDocument component:**
   - Set **Source Asset** to: `Assets/UI Toolkit/UXML/AuctionUi.uxml`
7. **Select AuctionSystem GameObject** again
8. **Drag** "Auction Panel Document" to the **Auction Panel Document** field

### 3. Check Console for Errors

When you click Skip, check the **Console** window for these messages:

**Good messages (means it's working):**
- `"AuctionSystem: Using separate AuctionPanelDocument"`
- `"AuctionSystem: AuctionPanel found successfully!"`
- `"=== AUCTION STARTED ==="`
- `"AuctionSystem: Showing auction document root"`

**Bad messages (indicates problems):**
- `"AuctionSystem: No UI document found!"` → AuctionPanelDocument not assigned
- `"AuctionSystem: AuctionPanel not found in UI"` → UXML file issue
- `"AuctionSystem not found!"` → AuctionSystem component missing from scene

### 4. Verify UXML File

1. **Open** `Assets/UI Toolkit/UXML/AuctionUi.uxml`
2. **Check** it has:
   - `<ui:VisualElement name="AuctionPanel">` (must be exact name!)
   - All required child elements (labels, buttons, etc.)

### 5. Test Steps

1. **Play the game**
2. **Land on an unowned property**
3. **Click "Skip" button**
4. **Check Console** for debug messages
5. **Look for auction panel** on screen

## Common Issues and Solutions

### Issue: "AuctionPanelDocument is NULL"

**Solution:**
- Create the Auction Panel Document GameObject (see step 2 above)
- Assign it to AuctionSystem component

### Issue: "AuctionPanel not found in UI"

**Solution:**
- Check that `AuctionUi.uxml` has `<ui:VisualElement name="AuctionPanel">`
- Make sure the name is **exactly** "AuctionPanel" (case-sensitive)
- Verify the UIDocument's Source Asset is set correctly

### Issue: Panel shows but is invisible/off-screen

**Solution:**
- Check the panel's position in UXML
- The panel might be positioned off-screen
- Try adjusting the `style` attributes in AuctionUi.uxml

### Issue: Panel shows but buttons don't work

**Solution:**
- Check Console for "BidButton not found!" or "PassButton not found!"
- Verify button names in UXML match exactly:
  - `name="BidButton"`
  - `name="PassButton"`

## Debug Mode

The updated code now includes extensive logging. When you click Skip, you should see:

```
Player [Name]: SkipAction called - skipping property purchase
Player [Name] declined to buy [Property] - starting auction
=== AUCTION STARTED ===
Property: [Property Name]
Starting Bid: ₦[Amount]
AuctionPanelDocument: Assigned (or NULL - using MainHUD)
AuctionPanel found: Yes (or No)
AuctionSystem: Showing auction document root
```

If any of these messages are missing or show errors, that's where the problem is.

## Still Not Working?

1. **Check that AuctionSystem GameObject is active** (checkbox checked)
2. **Check that Auction Panel Document GameObject is active**
3. **Verify UIDocument component** on Auction Panel Document has Source Asset assigned
4. **Try restarting Unity** (sometimes UI Toolkit needs a refresh)
5. **Check that no other script is hiding the panel** after it's shown

## Alternative: Use MainHUD Instead

If you prefer to have the auction panel in MainHUD instead of a separate document:

1. **Open** `Assets/UI Toolkit/UXML/MainHUD.uxml`
2. **Add** the AuctionPanel structure inside the root element
3. **Leave AuctionPanelDocument as NULL** in AuctionSystem
4. The system will automatically use MainHUD as fallback
