using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;
using System.Collections;
using System.Reflection;
using System.Linq;
using System.Collections.Generic;

public class GameplaySimulator : MonoBehaviour
{
    private enum State
    {
        Init,
        StartPage,
        MainMenu,
        GameLoop,
        Finished
    }

    private State currentState = State.Init;
    private float stateTimer = 0f;
    private float totalTime = 0f;
    private const float MAX_TIME = 1200f; // 20 minutes

    private TurnManager turnManager;
    private UIDocumentManager uiManager;
    private MainMenuController mainMenuController;
    private StartPageManager startPageManager;

    private int turnsObserved = 0;
    private string winnerName = "";
    private bool isSimulationRunning = true;

    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    void Update()
    {
        if (!isSimulationRunning) return;

        totalTime += Time.deltaTime;
        stateTimer += Time.deltaTime;

        if (totalTime > MAX_TIME)
        {
            FinishSimulation("Time limit reached (20 minutes).");
            return;
        }

        switch (currentState)
        {
            case State.Init:
                HandleInit();
                break;
            case State.StartPage:
                HandleStartPage();
                break;
            case State.MainMenu:
                HandleMainMenu();
                break;
            case State.GameLoop:
                HandleGameLoop();
                break;
        }
    }

    void HandleInit()
    {
        string sceneName = SceneManager.GetActiveScene().name;
        Debug.Log($"[Simulator] Current Scene: {sceneName}");

        if (sceneName == "StartPage")
        {
            currentState = State.StartPage;
        }
        else if (sceneName == "MainMenu" || sceneName == "Mainmenunew")
        {
            currentState = State.MainMenu;
        }
        else if (sceneName == "GameScene")
        {
            currentState = State.GameLoop;
        }
        else
        {
            // Wait for scene load
        }
        stateTimer = 0f;
    }

    void HandleStartPage()
    {
        if (stateTimer < 2.0f) return; // Wait for UI to initialize

        startPageManager = FindFirstObjectByType<StartPageManager>();
        if (startPageManager == null)
        {
            Debug.LogError("[Simulator] StartPageManager not found!");
            return;
        }

        Debug.Log("[Simulator] Clicking 'Vs Computer' on StartPage...");
        
        // Use reflection to call OnVsComputerClicked
        MethodInfo method = typeof(StartPageManager).GetMethod("OnVsComputerClicked", BindingFlags.NonPublic | BindingFlags.Instance);
        if (method != null)
        {
            method.Invoke(startPageManager, null);
            currentState = State.MainMenu; // Assume it transitions
            stateTimer = 0f;
        }
        else
        {
            Debug.LogError("[Simulator] OnVsComputerClicked method not found!");
        }
    }

    void HandleMainMenu()
    {
        if (SceneManager.GetActiveScene().name != "MainMenu" && SceneManager.GetActiveScene().name != "Mainmenunew")
        {
            // Waiting for scene load
            return;
        }

        if (stateTimer < 2.0f) return; // Wait for UI

        mainMenuController = FindFirstObjectByType<MainMenuController>();
        if (mainMenuController == null)
        {
            // Try finding MainMenuManager if Controller is not used
            var mmManager = FindFirstObjectByType<MainMenuManager>();
            if (mmManager != null)
            {
                Debug.Log("[Simulator] Found MainMenuManager (UI Toolkit).");
                // Handle UI Toolkit Main Menu if needed
                // For now, assume uGUI controller is present as per prompt analysis
            }
            else
            {
                Debug.LogError("[Simulator] MainMenuController not found!");
            }
            return;
        }

        Debug.Log("[Simulator] Setting up Main Menu...");

        // Set player count to 2
        // Reflection to set private field if needed, but it has public methods/fields
        // playerCount is private serialized field, but has OnPlayerCountDecrease/Increase
        // Let's try to set it via reflection to be sure
        FieldInfo playerCountField = typeof(MainMenuController).GetField("playerCount", BindingFlags.NonPublic | BindingFlags.Instance);
        if (playerCountField != null)
        {
            playerCountField.SetValue(mainMenuController, 2);
        }

        // Add 2 players
        // Player 1 (Human)
        MethodInfo onSelectClicked = typeof(MainMenuController).GetMethod("OnSelectClicked", BindingFlags.NonPublic | BindingFlags.Instance);
        if (onSelectClicked != null)
        {
            Debug.Log("[Simulator] Adding Player 1...");
            onSelectClicked.Invoke(mainMenuController, null);
            
            // Player 2 (AI)
            // Need to enable AI toggle first?
            if (mainMenuController.aiToggle != null)
            {
                mainMenuController.aiToggle.isOn = true;
            }
            
            Debug.Log("[Simulator] Adding Player 2 (AI)...");
            onSelectClicked.Invoke(mainMenuController, null);
        }

        // Start Game
        Debug.Log("[Simulator] Starting Game...");
        MethodInfo onStartGameClicked = typeof(MainMenuController).GetMethod("OnStartGameClicked", BindingFlags.NonPublic | BindingFlags.Instance);
        if (onStartGameClicked != null)
        {
            onStartGameClicked.Invoke(mainMenuController, null);
            currentState = State.GameLoop;
            stateTimer = 0f;
        }
    }

    void HandleGameLoop()
    {
        if (SceneManager.GetActiveScene().name != "GameScene")
        {
            return;
        }

        if (turnManager == null)
        {
            turnManager = FindFirstObjectByType<TurnManager>();
            if (turnManager == null) return;
        }

        if (uiManager == null)
        {
            uiManager = FindFirstObjectByType<UIDocumentManager>();
        }

        if (stateTimer < 1.0f) return; // Throttle updates

        Player currentPlayer = turnManager.GetCurrentPlayer();
        if (currentPlayer == null) return;

        // Check for Game Over
        // If only 1 player active
        // But TurnManager handles this. We just watch.
        
        if (currentPlayer.isAI)
        {
            // AI plays automatically
            return;
        }

        // Human Player (Player 1) Automation
        if (currentPlayer.IsAwaitingChoice)
        {
            HandlePlayerChoice(currentPlayer);
        }
        else
        {
            // Not awaiting choice, try to roll or end turn
            if (uiManager != null && uiManager.RollButton != null && uiManager.RollButton.Enabled)
            {
                Debug.Log($"[Simulator] Rolling Dice for {currentPlayer.playerName}...");
                turnManager.RollDice();
                turnsObserved++;
                stateTimer = 0f;
            }
            else if (uiManager != null && uiManager.EndTurnButton != null && uiManager.EndTurnButton.Enabled)
            {
                Debug.Log($"[Simulator] Ending Turn for {currentPlayer.playerName}...");
                turnManager.EndTurn();
                stateTimer = 0f;
            }
        }
    }

    void HandlePlayerChoice(Player p)
    {
        Debug.Log($"[Simulator] Handling Choice for {p.playerName}...");

        // Check for active panels/buttons in UIDocumentManager
        if (uiManager == null) return;

        // Property Buy/Skip
        if (uiManager.BuyButton != null && uiManager.BuyButton.enabledSelf)
        {
            Debug.Log("[Simulator] Buying Property...");
            // Simulate click
            // uiManager.BuyButton.clicked?.Invoke(); // Can't invoke event directly
            // Call TurnManager handler? No, it's private.
            // But we can use SendEvent
            var evt = new ClickEvent();
            evt.target = uiManager.BuyButton;
            uiManager.BuyButton.SendEvent(evt);
            stateTimer = 0f;
            return;
        }
        
        if (uiManager.SkipButton != null && uiManager.SkipButton.enabledSelf)
        {
             // If can't buy (maybe check money?), skip. But for now, try to buy.
             // If Buy button is not enabled but Skip is?
        }

        // Jail
        if (uiManager.PayBailButton != null && uiManager.PayBailButton.enabledSelf)
        {
            Debug.Log("[Simulator] Paying Bail...");
            var evt = new ClickEvent();
            evt.target = uiManager.PayBailButton;
            uiManager.PayBailButton.SendEvent(evt);
            stateTimer = 0f;
            return;
        }

        // Auction (if implemented)
        // If AuctionSystem is active
        if (turnManager.auctionSystem != null && turnManager.auctionSystem.IsAuctionInProgress())
        {
            // Pass auction to speed up
            // Find Pass button in Auction UI?
            // Or just call auctionSystem.PassBid(p);
            Debug.Log("[Simulator] Auction in progress (auto-pass not available in this build).");
            stateTimer = 0f;
            return;
        }

        // Fallback: if stuck, try to end turn or skip
        if (uiManager.SkipButton != null && uiManager.SkipButton.enabledSelf)
        {
            Debug.Log("[Simulator] Skipping...");
            var evt = new ClickEvent();
            evt.target = uiManager.SkipButton;
            uiManager.SkipButton.SendEvent(evt);
            stateTimer = 0f;
        }
    }

    void FinishSimulation(string reason)
    {
        isSimulationRunning = false;
        Debug.Log($"[Simulator] Simulation Finished: {reason}");
        Debug.Log($"[Simulator] Total Time: {totalTime:F2}s");
        Debug.Log($"[Simulator] Turns Observed: {turnsObserved}");
        
        // Output report to file
        string report = $"Simulation Report:\nReason: {reason}\nTotal Time: {totalTime:F2}s\nTurns Observed: {turnsObserved}\nWinner: {winnerName}\n";
        System.IO.File.WriteAllText("simulation_report.txt", report);

#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#endif
    }
}
