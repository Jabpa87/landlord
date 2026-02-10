# Turn / AI–Human Conflict Diagnostic

This document lists **exact methods** that change current player or phase, **methods that trigger roll/move/resolve**, and **where gating is missing or conflicting**, leading to:
- AI sometimes moving the human token
- AI waiting for human UI clicks on its turn
- Human unable to roll or buy on their turn

---

## 1. Methods that CHANGE current player or turn phase

| File | Method | What it does |
|------|--------|--------------|
| **TurnManager.cs** | `MoveToNextPlayer()` (line 871) | Sets `currentPlayerIndex = (currentPlayerIndex + 1) % players.Count`; skips eliminated players. **Only** place that changes `currentPlayerIndex`. |
| **TurnManager.cs** | `EndTurn()` (line 829) | Calls `MoveToNextPlayer()` then `StartTurn()`. Sets `aiTurnInProgress = false`, stops AI watchdog. |
| **TurnManager.cs** | `HandlePlayerBankruptcy(bankruptPlayer, creditor, debtAmount)` (line 933) | If `GetCurrentPlayer() == bankruptPlayer`, calls **`MoveToNextPlayer()`** (lines 956, 973). **Does NOT call `StartTurn()`** and does NOT clear `turnInProgress`. |

**Root cause – bankruptcy:**  
When a player goes bankrupt during a move (e.g. can’t pay rent in `Player.PayRent` → `TurnManager.HandlePlayerBankruptcy`), **only** `MoveToNextPlayer()` runs. The next player’s turn is never started (no `StartTurn()`), and `turnInProgress` stays true. Meanwhile `DoMoveAndWait(p)` is still running with the **old** (bankrupt) player `p`. When that coroutine later enables the End Turn button, it’s under the assumption the “current” player is still `p`; but `GetCurrentPlayer()` is already the **next** player. Result: wrong player can end turn, or next turn never properly starts; UI (Roll/Buy) can stay disabled or apply to wrong player.

---

## 2. Methods that TRIGGER roll / move / resolve

| Source | Method / trigger | When it runs |
|--------|------------------|---------------|
| **TurnManager.cs** | `RollDice()` (line 528) | UI Roll button click **or** `AITurnRoutine` (line 1385) **or** `DoMoveAndWait` after doubles for AI (line 663). |
| **TurnManager.cs** | `OnDiceRollComplete(p, dice1, dice2)` (line 596) | Callback from `diceRoller.RollDice(...)` or `DiceRollTimeoutFallback`. Starts `DoMoveAndWait(p, ...)` or `DoJailTurn(p, ...)`. |
| **TurnManager.cs** | `DoMoveAndWait(Player p, ...)` (line 648) | Started from `OnDiceRollComplete`. Runs `p.MoveSteps(...)` then waits on choice / calls `ResolveAIChoice(p)` or `EndTurn()`. |
| **TurnManager.cs** | `StartAITurn(Player p)` (line 1368) | From `StartTurn()` when `p.isAI`. Starts `AITurnRoutine(p)` and `AITurnWatchdog(p)`. |
| **TurnManager.cs** | `AITurnRoutine(Player p)` (line 1379) | Waits `aiRollDelay`, then calls `RollDice()`. |
| **TurnManager.cs** | `ResolveAIChoice(Player p)` (line 1413) | From `DoMoveAndWait` when `p.isAI` after move; calls `p.BuyProperty()` or `p.SkipAction()`. |
| **Player.cs** | `MoveSteps(...)` (line 441) | Called by TurnManager’s `DoMoveAndWait` or `DoJailTurn`. Ends with `TriggerTileAction(finalTile)`. |
| **Player.cs** | `TriggerTileAction` → `HandlePropertyTile` / Chance / CommunityChest (lines 672–724) | Inside `MoveSteps`; can set `IsAwaitingChoice = true`, show panels, or call `PayRent` (which can call `HandlePlayerBankruptcy`). |
| **TurnManager.cs** | `EndTurn()` (line 829) | UI End Turn button **or** `DoMoveAndWait` when AI (line 735) **or** `DoJailTurn` when AI (770, 797) **or** `AITurnWatchdog` on timeout (line 1406). |

So: **multiple callers** can advance the turn (`EndTurn`, `HandlePlayerBankruptcy`) and **multiple** can trigger roll/move/resolve (Roll button, AI routine, dice callback, jail flow). If `HandlePlayerBankruptcy` runs **during** `DoMoveAndWait` (e.g. from `PayRent` inside `MoveSteps`), turn advances **while** the move coroutine is still active and still holds a reference to the previous player `p`.

---

## 3. Stale player reference and gating

- **Coroutines hold a specific `Player p`:**  
  `DoMoveAndWait(Player p, ...)`, `DoJailTurn(Player p, ...)`, `AITurnRoutine(Player p)`, `ResolveAIChoice(Player p)` all keep the **same** `p` for the whole coroutine. They do **not** re-query `GetCurrentPlayer()` except in a few guards (e.g. `ResolveAIChoice` aborts if `GetCurrentPlayer() != p`).

- **After bankruptcy mid-move:**  
  1. `DoMoveAndWait(p1)` is running (human p1 moved, then e.g. rent).  
  2. `PayRent` → `HandlePlayerBankruptcy(p1, ...)` → `MoveToNextPlayer()`.  
  3. `GetCurrentPlayer()` is now p2; `DoMoveAndWait(p1)` is still running.  
  4. Later `DoMoveAndWait` enables End Turn for “human” (p1) or continues AI branch for p1. So either End Turn is enabled for a player who is no longer current, or the code assumes current is still p1.  
  5. **Buy/Skip** in TurnManager use `GetCurrentPlayer()` (lines 1258, 1267). So after bankruptcy, `GetCurrentPlayer()` is p2. If the UI is still showing p1’s Buy/Skip panel, clicks are gated by “current player” and may be ignored (e.g. treated as “not your turn” or “AI”) so **human appears unable to click Buy**.

- **Roll button:**  
  `RollDice()` gates on `GetCurrentPlayer()` and `p.isAI` / `aiTurnInProgress` / `p.IsAwaitingChoice`. If turn was advanced by bankruptcy and `StartTurn()` was never called, Roll may stay disabled (last state from previous turn) or apply to the wrong player.

So: **stale reference** = coroutines still using `p` after `MoveToNextPlayer()`. **Missing gating** = `HandlePlayerBankruptcy` advances the turn but does not start the next turn or reconcile with in-flight coroutines.

---

## 4. AI and human input active at the same time

- **Roll button** is connected once in `ConnectUIButtons()` (line 157). No per-turn disconnect. So when it’s AI’s turn, the human can still “click” Roll; `RollDice()` then gates with `if (p.isAI && !aiTurnInProgress) return` (line 544). So the **gate is there**; if `aiTurnInProgress` is wrong or set late, human could roll for AI or AI could “wait” on a human-only flow.

- **End Turn button** is connected once (line 161). `EndTurn()` gates with `if (p != null && p.isAI && !aiTurnInProgress) return` (line 835). So if it’s AI’s turn and `aiTurnInProgress` is true, human can’t end. But if `HandlePlayerBankruptcy` already advanced the turn and didn’t call `StartTurn()`, `aiTurnInProgress` might still be from the previous AI turn, so state is inconsistent.

- **Buy/Skip** (lines 1256–1270): gate is `GetCurrentPlayer()` and `!p.isAI` and `p.IsAwaitingChoice`. So if `GetCurrentPlayer()` changed (e.g. after bankruptcy) while the Buy/Skip panel is still open for the previous player, clicks are ignored → **human can’t click Buy**.

- **AI turn start:** `StartTurn()` (line 475) sets `turnInProgress = false`, then if `p.isAI` calls `StartAITurn(p)`. So if `StartTurn()` is never called after bankruptcy, the next player (AI) never gets `StartAITurn` and **AI waits for nothing** (no roll triggered). Meanwhile the UI might still show the previous state (e.g. End Turn enabled for wrong player).

So: **simultaneous activity** is less about two input handlers both firing than about **turn index and flags** (currentPlayerIndex, turnInProgress, aiTurnInProgress) getting out of sync when turn advances from **two different paths** (EndTurn vs HandlePlayerBankruptcy).

---

## 5. Turn progression before async finishes

- **DoMoveAndWait** correctly waits on `p.MoveSteps(...)` and then on `p.IsAwaitingChoice` (human) or `ResolveAIChoice(p)` (AI). So turn progression (End Turn / next turn) is **intended** to happen only after `DoMoveAndWait` finishes (or after jail flow).

- **Exception:** `HandlePlayerBankruptcy` can be called **from inside** the same move flow (PayRent during `TriggerTileAction` during `MoveSteps`). So **during** the async move we call `MoveToNextPlayer()`. That is “turn progression before async finishes” from the point of view of the **move coroutine**: the global “current player” changes while `DoMoveAndWait(p)` is still running.

- **Result:** After bankruptcy, we have “current player” = next player, but the move coroutine for the bankrupt player is still in progress and will later enable buttons or call `EndTurn()` based on the old `p`. So we get **conflicting sequences**: one path advanced the turn, the other path will try to end the turn or enable UI for the old player.

---

## 6. Files and methods responsible (summary)

| File | Class | Methods | Role / issue |
|------|--------|--------|---------------|
| **TurnManager.cs** | TurnManager | `MoveToNextPlayer()` | **Only** place that changes `currentPlayerIndex`. |
| **TurnManager.cs** | TurnManager | `EndTurn()` | Normal turn end: advance turn + `StartTurn()`. |
| **TurnManager.cs** | TurnManager | `HandlePlayerBankruptcy()` | **Advances turn** via `MoveToNextPlayer()` **without** calling `StartTurn()` or clearing `turnInProgress`. Primary source of desync. |
| **TurnManager.cs** | TurnManager | `StartTurn()` | Sets `turnInProgress = false`, enables Roll/End Turn or starts AI. Must run after every turn advance. |
| **TurnManager.cs** | TurnManager | `RollDice()`, `OnDiceRollComplete()`, `DoMoveAndWait()`, `DoJailTurn()` | Roll/move/resolve chain; all use a single `Player p` for the whole flow. |
| **TurnManager.cs** | TurnManager | `StartAITurn()`, `AITurnRoutine()`, `ResolveAIChoice()`, `AITurnWatchdog()` | AI turn and choice resolution; depend on `GetCurrentPlayer() == p` in places. |
| **TurnManager.cs** | TurnManager | `OnBuyButtonClicked()`, `OnSkipButtonClicked()` | Gate on `GetCurrentPlayer()` and `IsAwaitingChoice`; if current player changed mid-flow, human clicks do nothing. |
| **Player.cs** | Player | `MoveSteps()` → `TriggerTileAction()` → `HandlePropertyTile()` / rent path | Can call `TurnManager.HandlePlayerBankruptcy()` during move, causing turn advance from inside async move. |
| **Player.cs** | Player | `PayRent()` | Can call `turnManager.HandlePlayerBankruptcy()` (line 976). |
| **Player.cs** | Player | `BuyProperty()`, `SkipAction()` | Check `turnManager.GetCurrentPlayer() == this`; if turn already advanced, they no-op or behave for wrong context. |

---

## 7. Most likely conflicting call sequences

**Sequence A – Bankruptcy during rent (human can’t click Buy / wrong turn)**  
1. Human P1 lands on P2’s property; `DoMoveAndWait(p1)` running.  
2. `MoveSteps` → `TriggerTileAction` → `HandlePropertyTile` → `PayRent(p1, …)`.  
3. P1 can’t pay → `HandlePlayerBankruptcy(p1, P2, rent)` → `MoveToNextPlayer()`.  
4. `currentPlayerIndex` is now P2. **No** `StartTurn()` called.  
5. `DoMoveAndWait(p1)` continues (waiting on `p1.IsAwaitingChoice` or already past that).  
6. Later it enables End Turn for “human” (p1). So End Turn is enabled while **current** is P2.  
7. Buy/Skip panel might still be open for P1, but `GetCurrentPlayer()` is P2 → OnBuyButtonClicked/OnSkipButtonClicked return early → **human appears unable to click Buy**.  
8. If user clicks End Turn, `EndTurn()` runs with `GetCurrentPlayer()` = P2 → turn advances again → **skip a turn**.

**Sequence B – Next turn never starts after bankruptcy**  
1. Same as A up to step 4.  
2. `HandlePlayerBankruptcy` never calls `StartTurn()`.  
3. So Roll is never re-enabled for the next player, and if next is AI, `StartAITurn()` never runs → **AI never rolls**, game appears stuck.

**Sequence C – AI “waiting” for human UI**  
1. If by a bug or race `GetCurrentPlayer()` is human but `StartAITurn` or `aiTurnInProgress` was set for AI (or vice versa), Roll/End Turn gates can block the wrong side.  
2. Or: after bankruptcy, `aiTurnInProgress` is still true from previous AI turn, and current player is already the next one; then `EndTurn()` might early-return and leave the next turn in a bad state.

---

## 8. Recommended fixes (concise)

1. **HandlePlayerBankruptcy**  
   After `MoveToNextPlayer()`, call **`StartTurn()`** (and ensure `turnInProgress` is consistent). Optionally delay bankruptcy UI or run it after the move coroutine has been stopped/cleaned up so only one path advances the turn.

2. **Single place for “advance turn”**  
   Consider having **only** `EndTurn()` (or a single helper) call `MoveToNextPlayer()` and then `StartTurn()`, and have `HandlePlayerBankruptcy` call that instead of calling `MoveToNextPlayer()` directly (e.g. “schedule end of turn for bankrupt player” then let the main flow or a small state machine call the single advance).

3. **DoMoveAndWait after bankruptcy**  
   When `HandlePlayerBankruptcy` is about to run from inside a move (e.g. from `PayRent`), either:  
   - Stop the running move coroutine and then advance the turn and start the next, or  
   - Set a “bankruptcy in progress” flag, have `DoMoveAndWait` check it and **yield break** / clean up without enabling End Turn or calling `EndTurn()`, then have a single place (e.g. after bankruptcy UI) advance the turn and call `StartTurn()`.

4. **Re-check current player in coroutines**  
   In `DoMoveAndWait` (and similar), after any `yield return` that might allow other code to run (e.g. after `yield return p.MoveSteps(...)`), consider checking `GetCurrentPlayer() == p`; if not, abort the rest of the coroutine (don’t enable End Turn or call `EndTurn()` for `p`).

5. **Button state after bankruptcy**  
   When handling bankruptcy, explicitly set Roll/End Turn (and Buy/Skip visibility) to a known state for the **new** current player (e.g. by calling `StartTurn()`), so the UI always matches `GetCurrentPlayer()`.

Applying these should remove the main turn/phase conflicts and the “human can’t click” / “AI doesn’t move” symptoms traced above.
