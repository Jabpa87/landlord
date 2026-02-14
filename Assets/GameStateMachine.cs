using UnityEngine;
using System;

/// <summary>
/// Single source of truth: what state is the game in?
/// Board and UI do not set state; they request actions via GameController.
/// Only GameController (or this machine) transitions state.
/// </summary>
public class GameStateMachine : MonoBehaviour
{
    public enum TurnOwner
    {
        Human,
        AI
    }

    public enum State
    {
        None,
        MainMenu,
        AwaitingRoll,
        Moving,
        ResolvingTile,
        AwaitingHumanDecision,
        ShowingResult,
        AIProcessing,
        EndTurnTransition,
        InAuction,
        InTrade,
        InJailChoice,
        ShowingCard,
        GameOver
    }

    [SerializeField] [Tooltip("Initial state when the game starts.")]
    private State _currentState = State.None;
    [SerializeField] [Tooltip("Who currently owns the turn.")]
    private TurnOwner _currentTurnOwner = TurnOwner.Human;

    /// <summary>Current game state. Read-only for UI/Board; only GameController or this machine should transition.</summary>
    public State CurrentState => _currentState;
    /// <summary>Current turn owner. Exactly one owner must exist at all times.</summary>
    public TurnOwner CurrentTurnOwner => _currentTurnOwner;
    /// <summary>Contract alias for CurrentState.</summary>
    public State CurrentGameState => _currentState;

    /// <summary>Fired when state changes. (previousState, newState).</summary>
    public event Action<State, State> OnStateChanged;
    /// <summary>Fired when turn owner changes. (previousOwner, newOwner).</summary>
    public event Action<TurnOwner, TurnOwner> OnTurnOwnerChanged;

    /// <summary>
    /// Transition to a new state. In the contract, only GameController (or this component) should call this.
    /// UI/Board must not call TransitionTo directly.
    /// </summary>
    public void TransitionTo(State newState)
    {
        if (_currentState == newState) return;
        State previous = _currentState;
        _currentState = newState;
        OnStateChanged?.Invoke(previous, newState);
    }

    public void SetTurnOwner(TurnOwner newOwner)
    {
        if (_currentTurnOwner == newOwner) return;
        TurnOwner previous = _currentTurnOwner;
        _currentTurnOwner = newOwner;
        OnTurnOwnerChanged?.Invoke(previous, newOwner);
    }

    /// <summary>Called via reflection from TurnManager when GameStateMachine type isn't available at compile time.</summary>
    public void TransitionToInt(int stateAsInt)
    {
        if (stateAsInt >= 0 && stateAsInt <= (int)State.GameOver)
            TransitionTo((State)stateAsInt);
    }

    public bool IsInPlay => _currentState == State.AwaitingRoll
        || _currentState == State.Moving
        || _currentState == State.ResolvingTile
        || _currentState == State.AwaitingHumanDecision
        || _currentState == State.ShowingResult
        || _currentState == State.AIProcessing
        || _currentState == State.EndTurnTransition
        || _currentState == State.InAuction
        || _currentState == State.InTrade
        || _currentState == State.InJailChoice
        || _currentState == State.ShowingCard;

    /// <summary>For use via reflection from InputGate when type isn't available at compile time.</summary>
    public int GetStateInt() => (int)_currentState;

    /// <summary>For use via reflection from InputGate/GameController when type isn't available at compile time.</summary>
    public int GetTurnOwnerInt() => (int)_currentTurnOwner;

    /// <summary>For use via reflection from InputGate when type isn't available at compile time.</summary>
    public bool GetIsInPlay() => IsInPlay;
}