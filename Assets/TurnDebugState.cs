using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Lightweight debug state and log for turn/phase/decision tracing.
/// Read by TurnDebugOverlay; written by TurnManager, Player, UIDocumentManager at key transitions.
/// </summary>
public static class TurnDebugState
{
    public static string ActivePlayer = "—";
    public static string CurrentPhase = "—";
    public static string InputEnabled = "None";
    public static bool AIEnabled;
    public static string ActiveTokenBeingMoved = "—";

    private const int MaxActions = 10;
    private static readonly List<string> LastActions = new List<string>(MaxActions);

    public static IReadOnlyList<string> GetLastActions() => LastActions;

    /// <summary>Log an action and optionally update state. Forwards to Debug.Log when forwardToConsole is true.</summary>
    public static void LogTurnAction(
        string eventId,
        string message,
        string setPhase = null,
        string setInputEnabled = null,
        bool? setAIEnabled = null,
        string setActiveToken = null,
        string setActivePlayer = null,
        bool forwardToConsole = true)
    {
        string line = $"{eventId} | {message}";
        LastActions.Insert(0, line);
        if (LastActions.Count > MaxActions)
            LastActions.RemoveAt(LastActions.Count - 1);

        if (setPhase != null) CurrentPhase = setPhase;
        if (setInputEnabled != null) InputEnabled = setInputEnabled;
        if (setAIEnabled.HasValue) AIEnabled = setAIEnabled.Value;
        if (setActiveToken != null) ActiveTokenBeingMoved = setActiveToken;
        if (setActivePlayer != null) ActivePlayer = setActivePlayer;

        if (forwardToConsole)
            Debug.Log($"[TurnDebug] {line}");
    }
}
