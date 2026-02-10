using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// Draws a small on-screen overlay of TurnDebugState (ActivePlayer, CurrentPhase, InputEnabled, AIEnabled, ActiveTokenBeingMoved, last 10 actions).
/// Attach to a GameObject in the Game scene. Toggle with BackQuote key (`) or set showOverlay in Inspector.
/// </summary>
public class TurnDebugOverlay : MonoBehaviour
{
    [Tooltip("Show overlay at runtime. Toggle with BackQuote (`) key.")]
    public bool showOverlay = true;

    private GUIStyle _boxStyle;
    private GUIStyle _labelStyle;

    void OnGUI()
    {
        if (!showOverlay) return;

        if (_boxStyle == null)
        {
            _boxStyle = new GUIStyle(GUI.skin.box) { fontSize = 11 };
            _labelStyle = new GUIStyle(GUI.skin.label) { fontSize = 11 };
        }

        float w = 320f;
        float h = 220f;
        float x = 10f;
        float y = 10f;

        GUI.Box(new Rect(x, y, w, h), "Turn Debug");
        y += 22f;
        float lineH = 18f;

        GUI.Label(new Rect(x + 8, y, w - 16, lineH), $"ActivePlayer: {TurnDebugState.ActivePlayer}", _labelStyle); y += lineH;
        GUI.Label(new Rect(x + 8, y, w - 16, lineH), $"CurrentPhase: {TurnDebugState.CurrentPhase}", _labelStyle); y += lineH;
        GUI.Label(new Rect(x + 8, y, w - 16, lineH), $"InputEnabled: {TurnDebugState.InputEnabled}", _labelStyle); y += lineH;
        GUI.Label(new Rect(x + 8, y, w - 16, lineH), $"AIEnabled: {TurnDebugState.AIEnabled}", _labelStyle); y += lineH;
        GUI.Label(new Rect(x + 8, y, w - 16, lineH), $"ActiveTokenBeingMoved: {TurnDebugState.ActiveTokenBeingMoved}", _labelStyle); y += lineH + 4f;

        GUI.Label(new Rect(x + 8, y, w - 16, 16), "Last 10:", _labelStyle); y += lineH;
        IReadOnlyList<string> actions = TurnDebugState.GetLastActions();
        for (int i = 0; i < actions.Count; i++)
        {
            GUI.Label(new Rect(x + 8, y, w - 16, 14), actions[i], _labelStyle);
            y += 14f;
        }

        if (Event.current.type == EventType.KeyDown && Event.current.keyCode == KeyCode.BackQuote)
        {
            showOverlay = !showOverlay;
            Event.current.Use();
        }
    }
}
