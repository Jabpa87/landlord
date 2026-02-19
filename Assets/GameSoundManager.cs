using UnityEngine;

/// <summary>
/// Plays game event sounds: monopoly, steps, feed notice, buy property, buy house, idle ambient.
/// Assign clips from Assets/Sounds in the Inspector, or place them in Resources/Sounds for auto-load.
/// </summary>
public class GameSoundManager : MonoBehaviour
{
    private static GameSoundManager _instance;
    public static GameSoundManager Instance
    {
        get
        {
            if (_instance == null)
                _instance = FindFirstObjectByType<GameSoundManager>();
            return _instance;
        }
    }

    [Header("Sound Clips (assign from Assets/Sounds)")]
    public AudioClip monopolyClip;
    public AudioClip stepClip;
    public AudioClip feedNoticeClip;
    public AudioClip buyPropertyClip;
    public AudioClip buyHouseClip;
    public AudioClip policeClip;
    [Tooltip("Play when money is received (salary, rent from others, etc.). Leave null to use buyPropertyClip.")]
    public AudioClip moneyInClip;
    [Tooltip("Play when money is paid out (rent, tax, buy, etc.). Leave null to use a soft click or buyPropertyClip.")]
    public AudioClip moneyOutClip;

    [Header("Game music (play interchangeably when idle)")]
    [Tooltip("First track: tunetank-african-africa-music-347203")]
    public AudioClip gameMusicClip1;
    [Tooltip("Second track: tunetank-africa-african-music-348514")]
    public AudioClip gameMusicClip2;

    [Header("Feed sound (can be toggled by user)")]
    [Tooltip("Whether feed notice sound is enabled")]
    public bool feedSoundEnabled = true;

    [Header("Idle")]
    [Tooltip("Seconds of no activity before playing idle ambient")]
    public float idleDelaySeconds = 10f;

    private AudioSource _oneShotSource;
    private AudioSource _idleSource;
    private float _lastActivityTime;
    private bool _playSecondTrackNext;

    const string PrefFeedSound = "GameSound_FeedSoundEnabled";
    const string PrefMusicEnabled = "GameSound_MusicEnabled";

    [Tooltip("Whether background music is enabled (saved to PlayerPrefs).")]
    public bool musicEnabled = true;
    bool _musicEnabledFromPrefs;

    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            // If the existing instance has no clips (e.g. from Main Menu) and this one has clips (e.g. Game scene), take over so sounds work.
            if (HasAnyClips(this) && !HasAnyClips(_instance))
            {
                Destroy(_instance.gameObject);
                _instance = null;
            }
            else
            {
                Destroy(gameObject);
                return;
            }
        }
        _instance = this;
        DontDestroyOnLoad(gameObject);

        feedSoundEnabled = PlayerPrefs.GetInt(PrefFeedSound, 1) != 0;
        _musicEnabledFromPrefs = PlayerPrefs.GetInt(PrefMusicEnabled, 1) != 0;
        musicEnabled = _musicEnabledFromPrefs;

        _oneShotSource = gameObject.AddComponent<AudioSource>();
        _oneShotSource.playOnAwake = false;
        _oneShotSource.loop = false;
        _oneShotSource.volume = 1f;
        _oneShotSource.mute = false;

        _idleSource = gameObject.AddComponent<AudioSource>();
        _idleSource.playOnAwake = false;
        _idleSource.loop = true;
        _idleSource.volume = 0.4f;
        _idleSource.mute = false;

        gameObject.SetActive(true);
        LoadClipsFromResourcesIfMissing();
    }

    static bool HasAnyClips(GameSoundManager m)
    {
        if (m == null) return false;
        return m.monopolyClip != null || m.stepClip != null || m.feedNoticeClip != null
            || m.buyPropertyClip != null || m.buyHouseClip != null || m.policeClip != null;
    }

    void LoadClipsFromResourcesIfMissing()
    {
        if (monopolyClip == null) monopolyClip = Resources.Load<AudioClip>("Sounds/Monopoly");
        if (stepClip == null) stepClip = Resources.Load<AudioClip>("Sounds/st3-footstep-sfx-323056");
        if (feedNoticeClip == null) feedNoticeClip = Resources.Load<AudioClip>("Sounds/Feed notice");
        if (buyPropertyClip == null) buyPropertyClip = Resources.Load<AudioClip>("Sounds/Buy Propertry");
        if (buyHouseClip == null) buyHouseClip = Resources.Load<AudioClip>("Sounds/Buying house");
        if (policeClip == null) policeClip = Resources.Load<AudioClip>("Sounds/Police");
        if (moneyInClip == null) moneyInClip = Resources.Load<AudioClip>("Sounds/Buy Propertry"); // fallback
        if (moneyOutClip == null) moneyOutClip = Resources.Load<AudioClip>("Sounds/Buying house"); // fallback
        if (gameMusicClip1 == null) gameMusicClip1 = Resources.Load<AudioClip>("Sounds/tunetank-african-africa-music-347203");
        if (gameMusicClip2 == null) gameMusicClip2 = Resources.Load<AudioClip>("Sounds/tunetank-africa-african-music-348514");
    }

    void Start()
    {
        _lastActivityTime = Time.time;
        EnsureAudioListenerExists();
    }

    /// <summary>Ensures there is an AudioListener in the scene so sounds can be heard.</summary>
    void EnsureAudioListenerExists()
    {
        if (FindFirstObjectByType<AudioListener>() != null) return;
        Camera cam = Camera.main != null ? Camera.main : FindFirstObjectByType<Camera>();
        if (cam != null)
        {
            if (cam.gameObject.GetComponent<AudioListener>() == null)
                cam.gameObject.AddComponent<AudioListener>();
        }
        else
        {
            if (gameObject.GetComponent<AudioListener>() == null)
                gameObject.AddComponent<AudioListener>();
        }
    }

    void Update()
    {
        if (!musicEnabled)
        {
            if (_idleSource != null && _idleSource.isPlaying)
                _idleSource.Stop();
            return;
        }
        AudioClip nextClip = GetNextGameMusicClip();
        if (nextClip == null || _idleSource.isPlaying) return;
        if (Time.time - _lastActivityTime >= idleDelaySeconds)
        {
            _idleSource.clip = nextClip;
            _idleSource.Play();
            _lastActivityTime = Time.time;
            _playSecondTrackNext = !_playSecondTrackNext;
        }
    }

    /// <summary>Whether background music is enabled. Persisted to PlayerPrefs.</summary>
    public bool MusicEnabled
    {
        get => musicEnabled;
        set
        {
            musicEnabled = value;
            PlayerPrefs.SetInt(PrefMusicEnabled, value ? 1 : 0);
            PlayerPrefs.Save();
            if (_idleSource != null && _idleSource.isPlaying && !value)
                _idleSource.Stop();
        }
    }

    /// <summary>Set music enabled from settings (e.g. Start Page). Saves to PlayerPrefs; applies to Instance if in scene.</summary>
    public static void SetMusicEnabledFromSettings(bool enabled)
    {
        PlayerPrefs.SetInt(PrefMusicEnabled, enabled ? 1 : 0);
        PlayerPrefs.Save();
        if (Instance != null)
            Instance.MusicEnabled = enabled;
    }

    AudioClip GetNextGameMusicClip()
    {
        if (gameMusicClip1 != null && gameMusicClip2 != null)
            return _playSecondTrackNext ? gameMusicClip2 : gameMusicClip1;
        if (gameMusicClip1 != null) return gameMusicClip1;
        return gameMusicClip2;
    }

    /// <summary>Call on any game activity (roll, move, buy, build, trade, etc.) to reset idle timer.</summary>
    public void NotifyActivity()
    {
        _lastActivityTime = Time.time;
        if (_idleSource != null && _idleSource.isPlaying)
        {
            _idleSource.Stop();
        }
    }

    public void PlayMonopoly()
    {
        if (monopolyClip != null) _oneShotSource.PlayOneShot(monopolyClip);
    }

    public void PlayStep()
    {
        if (stepClip != null) _oneShotSource.PlayOneShot(stepClip);
    }

    public void PlayFeedNotice()
    {
        if (feedSoundEnabled && feedNoticeClip != null) _oneShotSource.PlayOneShot(feedNoticeClip);
    }

    public void PlayBuyProperty()
    {
        if (buyPropertyClip != null) _oneShotSource.PlayOneShot(buyPropertyClip);
    }

    public void PlayBuyHouse()
    {
        if (buyHouseClip != null) _oneShotSource.PlayOneShot(buyHouseClip);
    }

    public void PlayPolice()
    {
        if (policeClip != null) _oneShotSource.PlayOneShot(policeClip);
    }

    /// <summary>Play when player receives money (salary, rent paid to them, etc.).</summary>
    public void PlayMoneyIn()
    {
        if (moneyInClip != null) _oneShotSource.PlayOneShot(moneyInClip);
        else if (buyPropertyClip != null) _oneShotSource.PlayOneShot(buyPropertyClip);
    }

    /// <summary>Play when player pays money (rent, tax, buy property, etc.).</summary>
    public void PlayMoneyOut()
    {
        if (moneyOutClip != null) _oneShotSource.PlayOneShot(moneyOutClip);
        else if (buyHouseClip != null) _oneShotSource.PlayOneShot(buyHouseClip);
    }

    public bool FeedSoundEnabled
    {
        get => feedSoundEnabled;
        set
        {
            feedSoundEnabled = value;
            PlayerPrefs.SetInt(PrefFeedSound, value ? 1 : 0);
            PlayerPrefs.Save();
        }
    }
}
