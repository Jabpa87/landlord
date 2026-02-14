using UnityEngine;

/// <summary>
/// The only component allowed to execute game actions.
/// Rule: UI Toolkit and Board clicks do not change gameplay directly.
/// They only send requests to GameController (e.g. RequestRollDice, RequestTileClicked).
/// GameController checks InputGate and GameStateMachine, then performs the action (e.g. via TurnManager).
/// </summary>
public class GameController : MonoBehaviour
{
    [Header("Contract: Single sources of truth")]
    [Tooltip("Optional. Assign GameObject with GameStateMachine; InputGate uses it. Auto-found if null.")]
    public MonoBehaviour stateMachine;
    [Tooltip("Is input allowed for this action?")]
    public InputGate inputGate;

    [Header("Game logic (executed only from here)")]
    [Tooltip("TurnManager, etc. Only GameController should call gameplay methods on these.")]
    public TurnManager turnManager;

    private void Awake()
    {
        if (stateMachine == null)
        {
            var all = FindObjectsByType<MonoBehaviour>(FindObjectsSortMode.None);
            foreach (var mb in all)
            {
                if (mb != null && mb.GetType().Name == "GameStateMachine")
                { stateMachine = mb; break; }
            }
        }
        if (inputGate == null) inputGate = FindFirstObjectByType<InputGate>();
        if (turnManager == null) turnManager = FindFirstObjectByType<TurnManager>();
    }

    void SetStateByName(string stateName)
    {
        if (stateMachine == null || string.IsNullOrEmpty(stateName)) return;
        var smType = stateMachine.GetType();
        var stateEnum = smType.GetNestedType("State");
        var transition = smType.GetMethod("TransitionTo");
        if (stateEnum == null || transition == null) return;
        try
        {
            object stateValue = System.Enum.Parse(stateEnum, stateName);
            transition.Invoke(stateMachine, new[] { stateValue });
        }
        catch { }
    }

    void SetTurnOwnerByName(string ownerName)
    {
        if (stateMachine == null || string.IsNullOrEmpty(ownerName)) return;
        var smType = stateMachine.GetType();
        var ownerEnum = smType.GetNestedType("TurnOwner");
        var setOwner = smType.GetMethod("SetTurnOwner");
        if (ownerEnum == null || setOwner == null) return;
        try
        {
            object ownerValue = System.Enum.Parse(ownerEnum, ownerName);
            setOwner.Invoke(stateMachine, new[] { ownerValue });
        }
        catch { }
    }

    // ---- Requests from UI / Board (do not execute game logic elsewhere) ----

    public void RequestRollDice()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.RollDice)) return;
        SetTurnOwnerByName("Human");
        SetStateByName("Moving");
        if (turnManager != null)
            turnManager.RollDice();
        else
            Debug.Log("[GameController] RequestRollDice: no TurnManager");
    }

    public void RequestEndTurn()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.EndTurn)) return;
        SetStateByName("EndTurnTransition");
        if (turnManager != null)
            turnManager.EndTurn();
        else
            Debug.Log("[GameController] RequestEndTurn: no TurnManager");
    }

    public void RequestTileClicked(int tileIndex)
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.BoardTileClick)) return;
        // Execute: e.g. show tile details only, or if it's a selection for move, handle there.
        // Board/UI only sends "tile was clicked"; GameController decides the game effect.
        if (turnManager != null)
        {
            // Stub: you may have a method like turnManager.OnTileClickedForSelection(tileIndex) or just notify for UI.
            Debug.Log($"[GameController] RequestTileClicked: tileIndex={tileIndex} (stub - wire to TurnManager as needed)");
        }
    }

    public void RequestBuyProperty()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.BuyProperty)) return;
        SetTurnOwnerByName("Human");
        SetStateByName("ResolvingTile");
        if (turnManager != null)
        {
            var p = turnManager.GetCurrentPlayer();
            if (p != null) p.BuyProperty();
        }
        else
            Debug.Log("[GameController] RequestBuyProperty: no TurnManager");
    }

    public void RequestSkipProperty()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.SkipProperty)) return;
        SetTurnOwnerByName("Human");
        SetStateByName("ResolvingTile");
        if (turnManager != null)
        {
            var p = turnManager.GetCurrentPlayer();
            if (p != null) p.SkipAction();
        }
        else
            Debug.Log("[GameController] RequestSkipProperty: no TurnManager");
    }

    public void RequestJailPayBail()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.JailPayBail)) return;
        SetTurnOwnerByName("Human");
        SetStateByName("ResolvingTile");
        if (turnManager != null)
            turnManager.PayBail();
        else
            Debug.Log("[GameController] RequestJailPayBail: no TurnManager");
    }

    public void RequestJailUseCard()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.JailUseCard)) return;
        SetTurnOwnerByName("Human");
        SetStateByName("ResolvingTile");
        if (turnManager != null)
            turnManager.UseJailCard();
        else
            Debug.Log("[GameController] RequestJailUseCard: no TurnManager");
    }

    public void RequestJailWait()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.JailWait)) return;
        SetTurnOwnerByName("Human");
        SetStateByName("ResolvingTile");
        if (turnManager != null)
            turnManager.WaitInJail();
        else
            Debug.Log("[GameController] RequestJailWait: no TurnManager");
    }

    /// <summary>Call this from UI/Board instead of invoking TurnManager or game logic directly.</summary>
    public void RequestMenu()
    {
        if (!inputGate.IsInputAllowed(InputGate.InputKind.Menu)) return;
        // Open menu / pause; state transition as needed
        Debug.Log("[GameController] RequestMenu (stub)");
    }
}