using System.Collections;
using System.Reflection;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CoplayAutoPilotDriver : MonoBehaviour
{
    private float _nextActionTime;
    private bool _endingTurnScheduled;

    private void Update()
    {
        if (Time.time < _nextActionTime) return;

        TurnManager tm = Object.FindFirstObjectByType<TurnManager>();
        if (tm == null) return;

        Player current = tm.GetCurrentPlayer();
        if (current == null) return;

        // Let AI players run naturally.
        if (current.isAI)
        {
            _nextActionTime = Time.time + 0.4f;
            return;
        }

        // Resolve choice prompts quickly for the human-controlled player.
        if (current.IsAwaitingChoice)
        {
            current.SkipAction();
            _nextActionTime = Time.time + 0.5f;
            return;
        }

        // Human automation: roll when possible, then end turn after movement/actions settle.
        tm.RollDice();
        _nextActionTime = Time.time + 1.6f;

        if (!_endingTurnScheduled)
            StartCoroutine(EndTurnAfterDelay(tm, 2.4f));
    }

    private IEnumerator EndTurnAfterDelay(TurnManager tm, float delay)
    {
        _endingTurnScheduled = true;
        yield return new WaitForSeconds(delay);

        if (tm != null)
            tm.EndTurn();

        _endingTurnScheduled = false;
    }
}

public static class CoplayGameSimulationRunner
{
    // args JSON optional: {"playerCount":2}
    public static string Execute(string args = null)
    {
        int playerCount = 2;
        if (!string.IsNullOrEmpty(args))
        {
            try
            {
                var parsed = JsonUtility.FromJson<PlayerCountArgs>(args);
                if (parsed != null && (parsed.playerCount == 2 || parsed.playerCount == 3))
                    playerCount = parsed.playerCount;
            }
            catch { }
        }

        // Step 1: enter play mode from StartPage if not already playing.
        if (!EditorApplication.isPlaying)
        {
            EditorSceneManager.OpenScene("Assets/Scenes/StartPage.unity");
            EditorApplication.isPlaying = true;
            return "Opened StartPage and entered Play mode.";
        }

        string activeScene = SceneManager.GetActiveScene().name;

        // Step 2: StartPage -> Vs Computer
        if (activeScene == "StartPage")
        {
            var sp = Object.FindFirstObjectByType<StartPageManager>();
            if (sp == null) return "StartPageManager not found yet.";

            MethodInfo m = typeof(StartPageManager).GetMethod("OnVsComputerClicked", BindingFlags.Instance | BindingFlags.NonPublic);
            if (m == null) return "OnVsComputerClicked method not found.";
            m.Invoke(sp, null);
            return "Clicked Vs Computer on StartPage.";
        }

        // Step 3: MainMenu -> choose player count, avatars, start game
        if (activeScene == "MainMenu")
        {
            var mm = Object.FindFirstObjectByType<MainMenuManager>();
            if (mm == null) return "MainMenuManager not found yet.";

            MethodInfo setCount = typeof(MainMenuManager).GetMethod("OnPlayerCountSelected", BindingFlags.Instance | BindingFlags.NonPublic);
            MethodInfo setAvatar = typeof(MainMenuManager).GetMethod("OnAvatarSelected", BindingFlags.Instance | BindingFlags.NonPublic);
            MethodInfo startGame = typeof(MainMenuManager).GetMethod("OnStartGameClicked", BindingFlags.Instance | BindingFlags.NonPublic);

            if (setCount == null || setAvatar == null || startGame == null)
                return "MainMenu methods not found.";

            setCount.Invoke(mm, new object[] { playerCount });

            // Choose any characters deterministically.
            for (int i = 0; i < playerCount; i++)
            {
                int avatarIndex = (i + 1) % 6;
                setAvatar.Invoke(mm, new object[] { i, avatarIndex });
            }

            startGame.Invoke(mm, null);
            return $"Configured {playerCount} players and started game.";
        }

        // Step 4: GameScene -> attach autopilot driver if missing
        if (activeScene == "GameScene")
        {
            if (Object.FindFirstObjectByType<CoplayAutoPilotDriver>() == null)
            {
                var go = new GameObject("CoplayAutoPilotDriver");
                Object.DontDestroyOnLoad(go);
                go.AddComponent<CoplayAutoPilotDriver>();
                return "Attached CoplayAutoPilotDriver in GameScene.";
            }

            return "GameScene running; autopilot already attached.";
        }

        return $"Play mode active in scene '{activeScene}'. No action taken.";
    }

    [System.Serializable]
    private class PlayerCountArgs
    {
        public int playerCount = 2;
    }
}

