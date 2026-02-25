# Double-Roll + AI Stuck Findings (Review)

Date: 2026-02-24

## Summary
The doubles flow currently enables the **old Roll button** but does not re‑enable the **DiceRoller (tap dice)** UI. If the project uses DiceRoller instead of the Roll button, the re‑roll UI can be invisible and unclickable even though logs say “Roll enabled”. This matches the reported freeze after doubles.

AI stalls can also occur if `aiAwaitingBonusRoll` is set but the follow‑up roll never happens or if dice input is disabled for AI due to state mismatch.

## Evidence (code)
### 1) DiceRoller is the actual input now
`DiceRoller.OnDiceClicked()` calls `TurnManager.RollDice()` only when `isActiveTurn == true`.
`DiceRoller.SetActiveTurn(bool active)` controls visibility/interactable for the dice UI.

### 2) DiceRoller activation only happens in `UpdateAllPlayersUI()`
`TurnManager.UpdateAllPlayersUI()` sets:
- `diceRoller.SetActiveTurn(CanHumanRoll(current))`

`CanHumanRoll()` requires:
- human player, `turnInProgress == false`, not awaiting choice, no auction.

### 3) Doubles re‑roll branch does NOT update DiceRoller
In `TurnManager.DoMoveAndWait()`:
- On doubles, we set `turnInProgress = false` and enable the Roll button.
- We do NOT call `diceRoller.SetActiveTurn(true)` or `UpdateAllPlayersUI()`.

So, when doubles happen, the old Roll button becomes enabled, but DiceRoller remains inactive (hidden), causing the “stuck with no roll UI” state.

### 4) AI re‑roll logic
- For AI doubles, we set `aiAwaitingBonusRoll = true` and start `AIRollAgainAfterDoubles()`.
- `AIRollAgainAfterDoubles()` calls `RollDice()` after delay.
- `RollDice()` exits early if `turnInProgress == true` or if `p.isAI && !aiTurnInProgress`.

If any state gets desynced, AI can stall until watchdog triggers.

## Likely Root Cause for Human Freeze After Doubles
The doubles branch enables the old Roll button, but the game now uses DiceRoller as the input UI. The DiceRoller stays inactive because it only updates in `UpdateAllPlayersUI()` and is never toggled in the doubles branch.

## Likely Root Cause for AI “Stuck” Reports
- If `aiAwaitingBonusRoll` is set but the coroutine doesn’t execute (or the player changes), AI can wait indefinitely.
- If `RollDice()` is blocked by a stale `turnInProgress` or `aiTurnInProgress` mismatch, AI cannot roll.

## Recommended Fixes (Minimal)
1) **Activate DiceRoller on doubles**
In the doubles branch inside `DoMoveAndWait()`:
- Call `diceRoller.SetActiveTurn(true)` and optionally `diceRoller.ForceDiceVisible()`
- Or call `UpdateAllPlayersUI()` after `turnInProgress = false` to refresh dice input.

2) **Unify input gating**
- Use DiceRoller visibility as the primary “roll input enabled” state, not the old Roll button.
- When `RollButton.Enabled = true`, also explicitly activate DiceRoller if it exists.

3) **AI doubles guard**
- In `AIRollAgainAfterDoubles()`, log state flags and ensure `aiAwaitingBonusRoll` resets if roll can’t happen.
- Optionally, if `aiAwaitingBonusRoll == true` and `turnInProgress == false`, force `RollDice()` or recover in watchdog.

## Suggested Debug Logs
Add in doubles branch:
- `Debug.Log($"[Doubles] turnInProgress={turnInProgress} canRoll={CanHumanRoll(p)} diceActive={(diceRoller!=null ? diceRoller.IsActiveTurn() : false)}");`

Add in AI bonus roll:
- `Debug.Log($"[AI Bonus Roll] awaiting={aiAwaitingBonusRoll} turnInProgress={turnInProgress} aiTurnInProgress={aiTurnInProgress}");`

## Next Step
Implement the DiceRoller re‑activation in the doubles branch and test:
- Human doubles: dice UI appears and re‑roll works.
- AI doubles: AI re‑rolls correctly or watchdog recovers cleanly.
