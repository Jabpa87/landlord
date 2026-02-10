# Trading, Bankruptcy & Win Conditions Implementation

## Summary

This document describes the implementation of the Trading System, Bankruptcy & Elimination, and Win Conditions features as requested from the roadmap.

---

## ✅ Completed Features

### 1. Trading System (Core Logic)

**File Created:** `TradeSystem.cs`

**Features Implemented:**
- ✅ Trade properties between players
- ✅ Trade money between players
- ✅ Trade properties + money combinations
- ✅ Trade validation (can't trade mortgaged properties, properties with buildings, etc.)
- ✅ Trade execution (transfers properties and money)
- ✅ Trade cancellation/rejection

**Key Methods:**
- `StartTrade(Player initiator, Player target)` - Initiates a trade
- `AddPropertyToOffer(Property property, bool fromInitiator)` - Add property to trade
- `SetMoneyOffer(int amount, bool fromInitiator)` - Set money amount
- `ConfirmTrade()` - Initiating player confirms offer
- `AcceptTrade()` - Target player accepts trade
- `RejectTrade()` - Target player rejects trade
- `CancelTrade()` - Initiating player cancels trade
- `ExecuteTrade()` - Executes the actual transfer

**Trade Rules:**
- Cannot trade mortgaged properties
- Cannot trade properties with houses/hotels (must sell buildings first)
- Cannot offer more money than player has
- Trade must include at least one item (property or money)

**Integration:**
- ✅ `TradeButton` connected in `TurnManager.ConnectUIButtons()`
- ✅ `OnTradeButtonClicked()` handler in `TurnManager`
- ✅ `TradeSystem` reference added to `TurnManager`
- ✅ Auto-initialization in `TurnManager.InitializePlayers()`

**Status:** ⚠️ **Core logic complete, UI needs implementation**

The trading system logic is fully functional, but the UI methods (`ShowTradeUI()`, `UpdateTradeUI()`, etc.) are placeholders that need to be implemented with actual UI Toolkit elements.

---

### 2. Bankruptcy & Elimination

**Status:** ✅ **Fully Implemented**

**Features:**
- ✅ Player elimination when can't pay rent/debt
- ✅ Properties transfer to creditor (player or bank)
- ✅ Bankruptcy notification
- ✅ Automatic elimination handling

**Implementation Details:**

**Player.cs:**
- `Eliminate(Player creditor)` - Eliminates player and transfers properties
- `IsBankrupt(int debtAmount)` - Checks if player can pay debt
- Properties automatically transferred to creditor (or bank if null)

**TurnManager.cs:**
- `HandlePlayerBankruptcy(Player bankruptPlayer, Player creditor, int debtAmount)` - Handles bankruptcy
- Automatically moves to next player if current player is eliminated
- Calls `CheckWinCondition()` after elimination

**UIDocumentManager.cs:**
- `ShowBankruptcyNotification(Player bankruptPlayer, Player creditor, int debtAmount)` - Shows bankruptcy message

**How It Works:**
1. Player lands on property and can't afford rent
2. `Player.HandlePropertyTile()` detects inability to pay
3. Calls `TurnManager.HandlePlayerBankruptcy()`
4. Properties transferred to creditor
5. Player eliminated (GameObject disabled)
6. Turn moves to next active player
7. Win condition checked

---

### 3. Win Conditions

**Status:** ✅ **Fully Implemented**

**Features:**
- ✅ Detect when only 1 player remains
- ✅ Game over screen
- ✅ Winner announcement
- ✅ Final statistics (money, properties owned, net worth)

**Implementation Details:**

**TurnManager.cs:**
- `CheckWinCondition()` - Checks if only 1 active player remains
- `ShowGameOver(Player winner)` - Shows game over screen with winner info

**UIDocumentManager.cs:**
- `ShowGameOverPanel(Player winner)` - Displays winner information
- Shows:
  - Winner name
  - Final money
  - Properties owned count
  - Net worth

**How It Works:**
1. After each player elimination, `CheckWinCondition()` is called
2. If only 1 active player remains, `ShowGameOver()` is called
3. Game over panel displays winner statistics
4. Game controls are disabled

---

## ⚠️ Pending Work

### Trading System UI

The trading system core logic is complete, but the UI needs to be implemented:

**Required UI Elements:**
1. **Trade Panel** (UXML)
   - Player selection (who to trade with)
   - Property selection (which properties to offer)
   - Money input field
   - Trade summary (what each player is offering)
   - Confirm/Cancel buttons
   - Accept/Reject buttons (for target player)

2. **UI Methods to Implement:**
   - `ShowTradeUI()` - Display trade panel
   - `HideTradeUI()` - Hide trade panel
   - `UpdateTradeUI()` - Update trade summary
   - `ShowTradeForAcceptance()` - Show trade to target player

**Suggested Implementation:**
- Create `TradePanel.uxml` similar to `PropertyPanel.uxml` or `JailPanel.uxml`
- Add `tradePanelDocument` to `UIDocumentManager`
- Implement property selection UI (list of owned properties)
- Add money input field
- Show trade summary with both players' offers

---

## Setup Instructions

### 1. Add TradeSystem to Scene

1. In Unity, create an empty GameObject
2. Name it "Trade System"
3. Add `TradeSystem` component
4. In Inspector, assign:
   - `Turn Manager` → Your TurnManager GameObject
   - `Ui Manager` → Your UIDocumentManager GameObject

**OR** let it auto-find (it will search for these in `Start()`)

### 2. Connect TradeButton

The TradeButton is already connected in `TurnManager.ConnectUIButtons()`. Just make sure:
- `UIDocumentManager` is assigned to `TurnManager`
- `TradeButton` exists in your `MainHUD.uxml` (it already does)

### 3. Test Trading

1. Play the game
2. Click "TRADE" button
3. Currently, it will start a trade with the first available player
4. Check Console for trade logs (UI not yet implemented)

---

## Testing Checklist

### Trading System
- [ ] TradeButton is visible and clickable
- [ ] Trade starts when button clicked
- [ ] Properties can be added to trade (when UI implemented)
- [ ] Money can be set (when UI implemented)
- [ ] Trade executes correctly
- [ ] Properties transfer correctly
- [ ] Money transfers correctly

### Bankruptcy
- [ ] Player eliminated when can't pay rent
- [ ] Properties transfer to creditor
- [ ] Bankruptcy notification appears
- [ ] Turn moves to next player
- [ ] Eliminated player can't take turns

### Win Conditions
- [ ] Game ends when only 1 player remains
- [ ] Game over screen appears
- [ ] Winner statistics displayed correctly
- [ ] Game controls disabled after win

---

## Future Enhancements

1. **Trading UI** - Full UI implementation with property selection
2. **Trade History** - Log of all trades
3. **Trade Offers** - Players can make trade offers that persist
4. **Bankruptcy Options** - Allow players to sell assets to avoid bankruptcy
5. **Bankruptcy UI Panel** - Dedicated panel for bankruptcy notifications
6. **Trade Animations** - Visual feedback when trades execute

---

## Files Modified/Created

**Created:**
- `TradeSystem.cs` - Trading system logic

**Modified:**
- `TurnManager.cs` - Added TradeSystem reference and OnTradeButtonClicked handler
- `UIDocumentManager.cs` - Added ShowBankruptcyNotification method
- `GAME_STATUS_AND_ROADMAP.md` - Updated status of features

---

## Notes

- The trading system is designed to be flexible and can handle any combination of properties and money
- Bankruptcy automatically transfers all properties to the creditor
- Win condition is checked after every elimination
- All features integrate with the existing UI Toolkit system
