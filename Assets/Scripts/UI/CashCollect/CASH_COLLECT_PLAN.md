# Cash Collect Animation Plan (uGUI + DOTween)

## Goal
Implement reusable cash animations that spawn multiple Naira note images near a source UI position, animate to or from the wallet/profile icon with DOTween, then update the balance text after all notes arrive.

## Scope
Files to create under `Assets/Scripts/UI/CashCollect/`:
- `CashCollectManager.cs`
- `CashCollectNote.cs` (helper)
- `CashCollectPool.cs` (helper)

No scene object lookups at runtime. All references assigned in Inspector.

## Core Flow
1. Compute note count from amount using `amountPerNote`, clamp with `minNotes`/`maxNotes`.
2. Convert source rect or screen position to anchored position in `notesParent` space.
3. Spawn or reuse note objects from pool.
4. For each note:
   - Place at source + random spread (radius).
   - Scale pop: `0 → 1` with `Ease.OutBack`.
   - Move to `walletTarget` with `Ease.InOutQuad`.
   - Optional small random rotation.
5. Stagger starts with per-note delay computed so total burst time is constant.
6. When all notes complete:
   - Update balance text.
   - Invoke `onComplete`.

## Two Animation Modes
- **Collect In (source → wallet):**
  - Notes spawn big at source, move into wallet, and shrink into the target.
- **Spend Out (wallet → world/nowhere):**
  - Notes spawn small at wallet, move outward to a target point (or disperse), and grow before fading out.

Expose as two public methods or a mode parameter.

## Timing Strategy
Use a constant `totalDuration` for the whole burst.
Compute `perNoteDelay`:
- If `noteCount <= 1`, delay = `0`.
- Else `perNoteDelay = totalDuration / (noteCount - 1)`.

The actual move time uses `moveDuration` (typically close to `totalDuration`).

## DOTween Safety
Wrap DOTween usage with compile guards:
- `#if DOTWEEN` or `#if DOTWEEN_DOTWEEN` (depending on project define).
- If not defined, gracefully log a warning and immediately update balance.

## UI Placement Rules
- `notesParent` is a full-screen `RectTransform` under the same Canvas as the wallet.
- All notes use `RectTransform.anchoredPosition` for motion.
- Notes parented under `notesParent`, `localScale = Vector3.one`, pivot centered.
- Supports Screen Space Overlay and Screen Space Camera (use canvas.worldCamera).

## Pooling
Implement a small pool:
- Prewarm `maxNotes`.
- `Get()` activates note; `Release()` deactivates and returns.

## Balance Update
After all notes arrive:
- Set `balanceText.text` to formatted Naira (`₦` + comma grouping).
- Only update once per animation.

## Setup Steps (to mirror in `CashCollectManager.cs`)
1. Use the existing UI: wallet/profile targets already exist in the current UI (UI Toolkit now, later uGUI). Do not create new wallet objects.
2. Create (or reuse) a uGUI Canvas that overlays the existing UI (Screen Space Overlay is fine).
3. Create empty `NotesParent` under that Canvas (stretch full screen).
4. Create `NotePrefab`: `Image` with placeholder sprite, raycastTarget off.
5. Assign references in Inspector.

## Example Usage
```
cashCollectManager.PlayCashCollect(
    amountEarned,
    payoutIconRect,
    player.NewBalance,
    () => ShowContinueButton()
);
```

## Acceptance Checklist
- Animation works in Screen Space Overlay and Screen Space Camera.
- Notes spawn with pop, spread, move, optional rotation.
- Total burst time stays consistent regardless of note count.
- Balance text updates only after all notes arrive.
- Pooling avoids instantiate spikes.
- Compile succeeds even if DOTween is missing.
