using UnityEngine;

public class FixGameStateMachine : MonoBehaviour
{
    public static void Execute()
    {
        var existing = Object.FindFirstObjectByType<GameStateMachine>();
        if (existing == null)
        {
            GameObject go = new GameObject("GameStateMachine");
            go.AddComponent<GameStateMachine>();
            Debug.Log("Created GameStateMachine in scene.");
            
            // Also link it to TurnManager if possible
            var tm = Object.FindFirstObjectByType<TurnManager>();
            if (tm != null)
            {
                tm.stateMachine = go.GetComponent<GameStateMachine>();
                Debug.Log("Linked GameStateMachine to TurnManager.");
            }
        }
        else
        {
            Debug.Log("GameStateMachine already exists.");
            var tm = Object.FindFirstObjectByType<TurnManager>();
            if (tm != null && tm.stateMachine == null)
            {
                tm.stateMachine = existing;
                Debug.Log("Linked existing GameStateMachine to TurnManager.");
            }
        }
    }
}
