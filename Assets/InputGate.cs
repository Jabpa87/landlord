using UnityEngine;

/// <summary>
/// Single source of truth: is input allowed? For who? For what?
/// UI Toolkit and Board must ask InputGate before treating a click as a game request.
/// GameController also consults InputGate before executing any action.
/// </summary>
public class InputGate : MonoBehaviour
{
    public enum InputKind
    {
        BoardTileClick,   // Click on a board tile (e.g. inspect or select)
        RollDice,
        EndTurn,
        BuyProperty,
        SkipProperty,
        JailPayBail,
        JailUseCard,
        JailWait,
        AuctionBid,
        TradeOffer,
        TradeAccept,
        TradeCancel,
        Mortgage,
        Redeem,
        Build,
        SellBuilding,
        ManageProperties,
        Menu
    }

    /// <summary>Who is the input for. Human = UI/board (block when it's AI's turn). AI = AI code (block when it's human's turn).</summary>
    public enum InputActor
    {
        /// <summary>Request from UI/board; treated as human — blocked when current player is AI.</summary>
        Human,
        /// <summary>Request from AI code — allowed only when current player is AI.</summary>
        AI,
        AnyHuman = Human
    }

    [Header("References")]
    [Tooltip("Single source of truth for game state. Assign GameObject with GameStateMachine component, or leave empty to auto-find.")]
    public MonoBehaviour stateMachine;
    [Tooltip("Used to check current player and isAI — blocks human input during AI turn and vice versa.")]
    public TurnManager turnManager;

    // Match GameStateMachine.State enum order
    const int State_AwaitingRoll = 2, State_Moving = 3, State_ResolvingTile = 4, State_AwaitingHumanDecision = 5, State_ShowingResult = 6, State_AIProcessing = 7, State_EndTurnTransition = 8, State_InAuction = 9, State_InTrade = 10, State_InJailChoice = 11;
    const int TurnOwner_Human = 0, TurnOwner_AI = 1;

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
        if (turnManager == null)
            turnManager = FindFirstObjectByType<TurnManager>();
    }

    int GetCurrentStateInt()
    {
        if (stateMachine == null) return 0;
        var method = stateMachine.GetType().GetMethod("GetStateInt", System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
        if (method == null) return 0;
        var o = method.Invoke(stateMachine, null);
        return o is int i ? i : 0;
    }

    bool GetIsInPlay()
    {
        if (stateMachine == null) return false;
        var method = stateMachine.GetType().GetMethod("GetIsInPlay", System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
        if (method == null) return false;
        var o = method.Invoke(stateMachine, null);
        return o is bool b && b;
    }

    int GetCurrentTurnOwnerInt()
    {
        if (stateMachine == null) return TurnOwner_Human;
        var method = stateMachine.GetType().GetMethod("GetTurnOwnerInt", System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
        if (method == null) return TurnOwner_Human;
        var o = method.Invoke(stateMachine, null);
        return o is int i ? i : TurnOwner_Human;
    }

    /// <summary>
    /// Returns true if the given input is allowed right now for the given actor.
    /// Use InputActor.Human when the request comes from UI/board; use InputActor.AI when from AI code.
    /// Prevents human from playing during AI's turn and AI from playing during human's turn.
    /// </summary>
    public bool IsInputAllowed(InputKind kind, InputActor actor = InputActor.Human)
    {
        if (stateMachine == null) return false;

        int state = GetCurrentStateInt();
        int owner = GetCurrentTurnOwnerInt();

        // Ownership guard: during AI turn, block all human gameplay interactions.
        if (actor == InputActor.Human && owner == TurnOwner_AI && IsGameAction(kind))
            return false;
        if (actor == InputActor.AI && owner == TurnOwner_Human && IsGameAction(kind))
            return false;

        // Cross-turn guard: only the current player's "type" can act
        if (turnManager != null && IsGameAction(kind))
        {
            Player current = turnManager.GetCurrentPlayer();
            if (current == null) return false;
            if (actor == InputActor.Human && current.isAI) return false;  // Human cannot act during AI turn
            if (actor == InputActor.AI && !current.isAI) return false;   // AI cannot act during human turn
        }

        switch (kind)
        {
            case InputKind.BoardTileClick:
                return owner == TurnOwner_Human && state != State_AIProcessing && state != State_ShowingResult && GetIsInPlay();
            case InputKind.RollDice:
                return owner == TurnOwner_Human && state == State_AwaitingRoll;
            case InputKind.EndTurn:
                return owner == TurnOwner_Human && (state == State_AwaitingRoll || state == State_ResolvingTile || state == State_AwaitingHumanDecision);
            case InputKind.BuyProperty:
            case InputKind.SkipProperty:
                return owner == TurnOwner_Human && state == State_AwaitingHumanDecision;
            case InputKind.JailPayBail:
            case InputKind.JailUseCard:
            case InputKind.JailWait:
                return owner == TurnOwner_Human && state == State_InJailChoice;
            case InputKind.AuctionBid:
                return state == State_InAuction;
            case InputKind.TradeOffer:
            case InputKind.TradeAccept:
            case InputKind.TradeCancel:
                return state == State_InTrade;
            case InputKind.Mortgage:
            case InputKind.Redeem:
            case InputKind.Build:
            case InputKind.SellBuilding:
            case InputKind.ManageProperties:
                return owner == TurnOwner_Human && state != State_AIProcessing && GetIsInPlay();
            case InputKind.Menu:
                return true;
            default:
                return false;
        }
    }

    /// <summary>True for inputs that change game state and must respect human vs AI turn.</summary>
    static bool IsGameAction(InputKind kind)
    {
        return kind != InputKind.Menu && kind != InputKind.BoardTileClick;
    }

    public bool CanHumanClickBoard() => IsInputAllowed(InputKind.BoardTileClick, InputActor.Human);
    public bool CanHumanClickButtons() => !IsAITurn() && GetCurrentStateInt() != State_ShowingResult;
    public bool IsPopupInteractive() => !IsAITurn() && GetCurrentStateInt() == State_AwaitingHumanDecision;
    public bool IsAITurn() => GetCurrentTurnOwnerInt() == TurnOwner_AI;
}