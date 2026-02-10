# Trade UI Redesign - Complete

## Overview

The Trade UI has been completely redesigned to match the modern mobile Monopoly-style interface shown in the reference image.

---

## New Design Features

### **1. Header Section**
- **"[Player Name] OFFERS"** header in light blue
- Shows which player is initiating the trade
- Bold white text on blue background

### **2. Player Name Button**
- Centered blue button showing target player's name
- Clickable (can be enhanced to show player details)

### **3. Property Information Panels**
- **Scrollable container** for property panels
- Each property shows:
  - **Color-coded header** (based on property tier: Red=Satellite, Yellow=Mid, Green=Prime)
  - **Property name** in header
  - **Property price**
  - **Base rent**
  - **Rent table** (for Regular properties):
    - 1 house: ₦X
    - 2 houses: ₦X
    - 3 houses: ₦X
    - 4 houses: ₦X
    - 1 hotel: ₦X
  - **Construction cost** (per house)
  - **Mortgage value** (50% of price)
- **Click property panel** to remove from trade

### **4. Cash/Cards Section**
- **Left Side: "YOUR CARDS"**
  - Shows property count (e.g., "0/12")
  - **"SEND"** box (green) showing amount being sent
  - **"TAP TO ENTER CASH"** button
- **Right Side: "OPPN. CARDS"**
  - Shows opponent's property count (e.g., "0/5")
  - **"ASK"** box (green) showing amount being asked
  - **"TAP TO ENTER CASH"** button

### **5. Offer Summary**
- Green box showing:
  - **Total offer value** (₦ X)
  - **Additional amount** (+₦X or -₦X)

### **6. Action Buttons**
- **OFFER** (green) - Confirm and send trade
- **SHOW BOARD** (blue) - Hide trade panel to view board
- **CANCEL** (red) - Cancel trade
- **ACCEPT/REJECT** (shown when trade is pending)

---

## How It Works

### **Starting a Trade**
1. Click **TRADE** button in main HUD
2. Trade panel opens with new design
3. Header shows "[Your Name] OFFERS"
4. Player name button shows target player

### **Adding Properties**
1. Properties are shown as **information panels** in scrollable area
2. **Click a property panel** to add/remove from trade
3. Panels show full property details (price, rent, construction, mortgage)

### **Adding Cash**
1. Click **"TAP TO ENTER CASH"** button
2. Currently increments by ₦10,000 (can be enhanced with input dialog)
3. Amount shown in green "SEND" or "ASK" box

### **Confirming Trade**
1. Click **OFFER** button
2. Trade is sent to target player
3. UI switches to show **ACCEPT/REJECT** buttons for target player

---

## UI Elements Reference

### **New Elements (in UIDocumentManager)**
- `TradeTitleText` - Header text "[Player] OFFERS"
- `TradePlayerNameButton` - Player name button
- `TradePropertiesScrollView` - Scrollable container for properties
- `TradePropertiesContainer` - Container for property panels
- `YourCardsCountText` - "YOUR CARDS X/12"
- `OpponentCardsCountText` - "OPPN. CARDS X/5"
- `SendCashAmountText` - Amount in SEND box
- `AskCashAmountText` - Amount in ASK box
- `SendCashButton` - "TAP TO ENTER CASH" (send)
- `AskCashButton` - "TAP TO ENTER CASH" (ask)
- `TradeOfferTotalText` - Total offer amount
- `TradeOfferAdditionalText` - Additional amount (+₦X)
- `TradeOfferButton` - "OFFER" button
- `TradeShowBoardButton` - "SHOW BOARD" button
- `TradeResponseButtons` - Container for ACCEPT/REJECT

### **Legacy Elements (for backward compatibility)**
- `TradeConfirmButton` - Maps to `TradeOfferButton`
- `Player1PropertiesList` - Maps to `TradePropertiesScrollView`
- `Player2PropertiesList` - Maps to `TradePropertiesScrollView`

---

## Customization

### **Property Panel Colors**
Colors are automatically assigned based on property tier:
- **Satellite** → Red header
- **Mid** → Yellow/Gold header
- **Prime** → Green header
- **Default** → Blue header

### **Cash Input**
Currently increments by ₦10,000 per click. Can be enhanced with:
- Input dialog
- Slider
- Direct text input

### **Card Counts**
Currently shows property count. Can be enhanced to show:
- Actual card count (if card system is implemented)
- Property groups owned
- Other statistics

---

## Setup

### **1. Update Trade Panel Document**
1. **Select** "Trade Panel Document" GameObject in Hierarchy
2. **In UIDocument component**, verify `TradePanel.uxml` is assigned
3. The new UXML has been created with the new design

### **2. Verify UIDocumentManager**
1. **Select** "UI Manager" GameObject
2. **In UIDocumentManager component**, verify:
   - Trade Panel Document is assigned
   - All new UI elements will be auto-detected

### **3. Test Trade System**
1. **Play the game**
2. **Click TRADE button**
3. **Verify** new UI appears with:
   - Header showing "[Player] OFFERS"
   - Player name button
   - Property panels (when properties are added)
   - Cash sections
   - Action buttons

---

## Visual Result

The new trade UI matches the reference design:
- ✅ Modern, clean layout
- ✅ Color-coded property panels
- ✅ Detailed property information
- ✅ Clear cash input sections
- ✅ Professional button layout
- ✅ Scrollable property list
- ✅ Offer summary display

---

## Future Enhancements

### **Cash Input Dialog**
- Create a popup dialog for entering cash amounts
- Include slider or number input
- Validate against player's available money

### **Property Selection**
- Add a property selection screen before showing trade panel
- Show all available properties in a grid
- Allow multi-select

### **Trade History**
- Show previous trades
- Display trade statistics

---

*The trade UI has been completely redesigned to match the modern mobile Monopoly interface!*
