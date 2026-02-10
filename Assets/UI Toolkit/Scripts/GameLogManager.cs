using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;
using System.Collections.Generic;
using System.Text;

/// <summary>
/// Manages the Game Log overlay: shows both in-game events (feed-style) and Unity dev log.
/// User opens via GAME LOG button; Clear clears both lists and refreshes the display.
/// </summary>
public class GameLogManager : MonoBehaviour
{
    private static GameLogManager _instance;
    public static GameLogManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindFirstObjectByType<GameLogManager>();
                if (_instance == null)
                {
                    var go = new GameObject("GameLogManager");
                    _instance = go.AddComponent<GameLogManager>();
                }
            }
            return _instance;
        }
    }

    [Header("UI")]
    [Tooltip("Main HUD UIDocument (auto-found from UIDocumentManager if not set)")]
    public UIDocument mainHUDDocument;

    [Header("Log limits")]
    [Tooltip("Max dev log lines to keep")]
    public int maxDevLogLines = 500;
    [Tooltip("Max game event lines to keep")]
    public int maxGameEventLines = 200;

    private readonly List<DevLogEntry> _devLog = new List<DevLogEntry>();
    private readonly List<string> _gameEvents = new List<string>();

    private VisualElement _overlay;
    private VisualElement _content;
    private UnityEngine.UIElements.Button _btnOpen;
    private UnityEngine.UIElements.Button _btnClose;
    private UnityEngine.UIElements.Button _btnClear;
    private UnityEngine.UIElements.Button _btnCopy;
    private ScrollView _scrollView;
    private bool _uiBound;

    private bool _useUgui;
    private GameObject _uguiOverlay;
    private Transform _uguiContent;

    struct DevLogEntry
    {
        public string Message;
        public string StackTrace;
        public LogType Type;
    }

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
        }
        else if (_instance != this)
        {
            Destroy(gameObject);
            return;
        }
    }

    void OnEnable()
    {
        Application.logMessageReceived += OnLogMessageReceived;
    }

    void OnDisable()
    {
        Application.logMessageReceived -= OnLogMessageReceived;
    }

    void OnLogMessageReceived(string condition, string stackTrace, LogType type)
    {
        lock (_devLog)
        {
            _devLog.Add(new DevLogEntry
            {
                Message = condition ?? "",
                StackTrace = type == LogType.Exception ? stackTrace : null,
                Type = type
            });
            while (_devLog.Count > maxDevLogLines)
                _devLog.RemoveAt(0);
        }
    }

    /// <summary>
    /// Add a one-line game event (e.g. from NarrativeManager) to the Game Log.
    /// </summary>
    public void AddGameEvent(string message)
    {
        if (string.IsNullOrEmpty(message)) return;
        _gameEvents.Add(message);
        while (_gameEvents.Count > maxGameEventLines)
            _gameEvents.RemoveAt(0);
    }

    void Start()
    {
        if (mainHUDDocument == null)
        {
            var ui = FindFirstObjectByType<UIDocumentManager>();
            if (ui != null)
                mainHUDDocument = ui.mainHUDDocument;
        }
        BindUI();
    }

    void BindUI()
    {
        if (_uiBound || mainHUDDocument == null || mainHUDDocument.rootVisualElement == null)
            return;

        var root = mainHUDDocument.rootVisualElement;
        _overlay = root.Q<VisualElement>("GameLogOverlay");
        _content = root.Q<VisualElement>("GameLogContent");
        _btnOpen = root.Q<UnityEngine.UIElements.Button>("GameLogButton");
        _btnClose = root.Q<UnityEngine.UIElements.Button>("GameLogCloseButton");
        _btnClear = root.Q<UnityEngine.UIElements.Button>("GameLogClearButton");
        _btnCopy = root.Q<UnityEngine.UIElements.Button>("GameLogCopyButton");
        _scrollView = root.Q<ScrollView>("GameLogScrollView");

        if (_content == null && _scrollView != null)
            _content = _scrollView.contentContainer;

        if (_overlay == null || _content == null)
        {
            Debug.LogWarning("GameLogManager: GameLogOverlay or GameLogScrollView not found on Main HUD.");
            return;
        }

        if (_btnOpen != null)
            _btnOpen.clicked += OnOpenClicked;
        if (_btnClose != null)
            _btnClose.clicked += OnCloseClicked;
        if (_btnClear != null)
            _btnClear.clicked += OnClearClicked;
        if (_btnCopy != null)
            _btnCopy.clicked += OnCopyClicked;

        _uiBound = true;
    }

    void OnOpenClicked()
    {
        if (_useUgui && _uguiOverlay != null)
        {
            _uguiOverlay.SetActive(true);
            RefreshDisplay();
            return;
        }
        if (_overlay != null)
            _overlay.style.display = DisplayStyle.Flex;
        RefreshDisplay();
    }

    void OnCloseClicked()
    {
        if (_useUgui && _uguiOverlay != null)
        {
            _uguiOverlay.SetActive(false);
            return;
        }
        if (_overlay != null)
            _overlay.style.display = DisplayStyle.None;
    }

    void OnClearClicked()
    {
        lock (_devLog)
        {
            _devLog.Clear();
        }
        _gameEvents.Clear();
        RefreshDisplay();
    }

    void OnCopyClicked()
    {
        var text = BuildFullLogText();
        if (!string.IsNullOrEmpty(text))
        {
            GUIUtility.systemCopyBuffer = text;
            Debug.Log("Game log copied to clipboard.");
        }
    }

    /// <summary>
    /// Builds the full log as plain text (game events + dev log) for copying.
    /// </summary>
    public string BuildFullLogText()
    {
        var sb = new StringBuilder();

        for (int i = _gameEvents.Count - 1; i >= 0; i--)
            sb.AppendLine("[Game] " + _gameEvents[i]);

        List<DevLogEntry> snapshot;
        lock (_devLog)
        {
            snapshot = new List<DevLogEntry>(_devLog);
        }
        if (snapshot.Count > 0)
        {
            sb.AppendLine("——— Dev Log ———");
            foreach (var e in snapshot)
            {
                var prefix = e.Type == LogType.Error || e.Type == LogType.Exception ? "[Error] " : (e.Type == LogType.Warning ? "[Warn] " : "[Log] ");
                sb.AppendLine(prefix + e.Message);
                if (!string.IsNullOrEmpty(e.StackTrace))
                    sb.AppendLine("    " + e.StackTrace.Replace("\n", "\n    "));
            }
        }

        return sb.ToString();
    }

    void RefreshDisplay()
    {
        if (_useUgui && _uguiContent != null)
        {
            RefreshDisplayUgui();
            return;
        }
        if (_content == null) return;

        _content.Clear();

        // Section: Game events (newest first for consistency with feed)
        for (int i = _gameEvents.Count - 1; i >= 0; i--)
        {
            var line = new Label("[Game] " + _gameEvents[i]);
            line.AddToClassList("game-log-line");
            line.AddToClassList("game-log-game");
            _content.Add(line);
        }

        // Section: Dev log (newest last = chronological)
        List<DevLogEntry> snapshot;
        lock (_devLog)
        {
            snapshot = new List<DevLogEntry>(_devLog);
        }
        if (snapshot.Count > 0)
        {
            var devHeader = new Label("——— Dev Log ———");
            devHeader.AddToClassList("game-log-line");
            devHeader.AddToClassList("game-log-section-header");
            _content.Add(devHeader);

            foreach (var e in snapshot)
            {
                var prefix = e.Type == LogType.Error || e.Type == LogType.Exception ? "[Error] " : (e.Type == LogType.Warning ? "[Warn] " : "[Log] ");
                var line = new Label(prefix + e.Message);
                line.AddToClassList("game-log-line");
                line.AddToClassList(e.Type == LogType.Error || e.Type == LogType.Exception ? "game-log-error" : (e.Type == LogType.Warning ? "game-log-warning" : "game-log-dev"));
                line.enableRichText = false;
                line.style.whiteSpace = WhiteSpace.Normal;
                _content.Add(line);
                if (!string.IsNullOrEmpty(e.StackTrace))
                {
                    var stack = new Label("    " + e.StackTrace.Replace("\n", "\n    "));
                    stack.AddToClassList("game-log-line");
                    stack.AddToClassList("game-log-stack");
                    stack.enableRichText = false;
                    stack.style.whiteSpace = WhiteSpace.Normal;
                    _content.Add(stack);
                }
            }
        }

        if (_scrollView != null)
            _scrollView.scrollOffset = new Vector2(0, 0);
    }

    void RefreshDisplayUgui()
    {
        for (int i = _uguiContent.childCount - 1; i >= 0; i--)
            Object.Destroy(_uguiContent.GetChild(i).gameObject);

        var linePrefab = new GameObject("LogLine");
        var tmp = linePrefab.AddComponent<TMPro.TextMeshProUGUI>();
        tmp.fontSize = 14;
        tmp.raycastTarget = false;

        for (int i = _gameEvents.Count - 1; i >= 0; i--)
        {
            var go = Object.Instantiate(linePrefab, _uguiContent);
            go.name = "Game_" + i;
            go.GetComponent<TMPro.TextMeshProUGUI>().text = "[Game] " + _gameEvents[i];
        }

        List<DevLogEntry> snapshot;
        lock (_devLog) { snapshot = new List<DevLogEntry>(_devLog); }
        if (snapshot.Count > 0)
        {
            var header = Object.Instantiate(linePrefab, _uguiContent);
            header.name = "DevHeader";
            header.GetComponent<TMPro.TextMeshProUGUI>().text = "——— Dev Log ———";
            foreach (var e in snapshot)
            {
                var prefix = e.Type == LogType.Error || e.Type == LogType.Exception ? "[Error] " : (e.Type == LogType.Warning ? "[Warn] " : "[Log] ");
                var go = Object.Instantiate(linePrefab, _uguiContent);
                go.GetComponent<TMPro.TextMeshProUGUI>().text = prefix + e.Message;
                if (!string.IsNullOrEmpty(e.StackTrace))
                {
                    var stack = Object.Instantiate(linePrefab, _uguiContent);
                    stack.GetComponent<TMPro.TextMeshProUGUI>().text = "    " + e.StackTrace.Replace("\n", "\n    ");
                }
            }
        }

        Object.Destroy(linePrefab);
    }
}
