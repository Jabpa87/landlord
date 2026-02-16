using UnityEngine;

public class SetGameState : MonoBehaviour
{
    public static void Execute()
    {
        var sm = Object.FindFirstObjectByType<GameStateMachine>();
        if (sm != null)
        {
            sm.TransitionTo(GameStateMachine.State.ResolvingTile);
            Debug.Log("Set GameStateMachine state to ResolvingTile.");
        }
        else
        {
            Debug.LogError("GameStateMachine not found!");
        }
    }
}
