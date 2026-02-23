using UnityEngine;

/// <summary>
/// Plays game event sounds and one looping background music track.
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
    public AudioClip clickClip;
    public AudioClip diceRollClip;
    public AudioClip tradeSuccessClip;
    public AudioClip tradeFailedClip;
    public AudioClip redeemClip;
    public AudioClip sellHouseClip;
    public AudioClip buildHouseClip;
    [Tooltip("Play when money is received (salary, rent from others, etc.). Leave null to use buyPropertyClip.")]
    public AudioClip moneyInClip;
    [Tooltip("Play when money is paid out (rent, tax, buy, etc.). Leave null to use a soft click or buyPropertyClip.")]
    public AudioClip moneyOutClip;

    [Header("Background Music (single looping track)")]
    [Tooltip("Single BGM clip. Recommended file name: BackgroundMusic.")]
    public AudioClip backgroundMusicClip;

    [Header("Legacy Music Fields (kept for scene compatibility)")]
    [Tooltip("Legacy field. If Background Music is not assigned, this is used as fallback.")]
    public AudioClip gameMusicClip1;
    [Tooltip("Legacy field. Ignored for playback (single-track BGM only).")]
    public AudioClip gameMusicClip2;

    [Header("Feed sound (can be toggled by user)")]
    [Tooltip("Whether feed notice sound is enabled")]
    public bool feedSoundEnabled = true;

    [Header("Runtime Audio Settings")]
    [Tooltip("Whether background music is enabled (saved to PlayerPrefs).")]
    public bool musicEnabled = true;
    [Range(0f, 1f)] public float musicVolume = 0.65f;
    [Tooltip("Whether sound effects are enabled (saved to PlayerPrefs).")]
    public bool sfxEnabled = true;
    [Range(0f, 1f)] public float sfxVolume = 1f;

    private AudioSource _oneShotSource;
    private AudioSource _musicSource;

    const string PrefFeedSound = "GameSound_FeedSoundEnabled";
    const string PrefMusicEnabled = "GameSound_MusicEnabled";
    const string PrefMusicVolume = "GameSound_MusicVolume";
    const string PrefSfxEnabled = "GameSound_SfxEnabled";
    const string PrefSfxVolume = "GameSound_SfxVolume";

    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            // If this instance is a better fit (more clips assigned), take over so sounds work in the game scene.
            if (ShouldReplaceExisting(_instance, this))
            {
                CopyMissingClipsFrom(_instance, this);
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
        musicEnabled = PlayerPrefs.GetInt(PrefMusicEnabled, 1) != 0;
        sfxEnabled = PlayerPrefs.GetInt(PrefSfxEnabled, 1) != 0;
        musicVolume = Mathf.Clamp01(PlayerPrefs.GetFloat(PrefMusicVolume, 0.65f));
        sfxVolume = Mathf.Clamp01(PlayerPrefs.GetFloat(PrefSfxVolume, 1f));

        _oneShotSource = gameObject.AddComponent<AudioSource>();
        _oneShotSource.playOnAwake = false;
        _oneShotSource.loop = false;
        _oneShotSource.volume = sfxVolume;
        _oneShotSource.spatialBlend = 0f;
        _oneShotSource.ignoreListenerPause = true;
        _oneShotSource.mute = false;

        _musicSource = gameObject.AddComponent<AudioSource>();
        _musicSource.playOnAwake = false;
        _musicSource.loop = true;
        _musicSource.volume = musicVolume;
        _musicSource.spatialBlend = 0f;
        _musicSource.ignoreListenerPause = true;
        _musicSource.mute = false;

        gameObject.SetActive(true);
        LoadClipsFromResourcesIfMissing();
        ApplyAudioSettings();
    }

    static bool HasAnyClips(GameSoundManager m)
    {
        if (m == null) return false;
        return m.monopolyClip != null || m.stepClip != null || m.feedNoticeClip != null
            || m.buyPropertyClip != null || m.buyHouseClip != null || m.policeClip != null
            || m.backgroundMusicClip != null || m.gameMusicClip1 != null;
    }

    static int GetAssignedClipCount(GameSoundManager m)
    {
        if (m == null) return 0;
        int count = 0;
        if (m.monopolyClip != null) count++;
        if (m.stepClip != null) count++;
        if (m.feedNoticeClip != null) count++;
        if (m.buyPropertyClip != null) count++;
        if (m.buyHouseClip != null) count++;
        if (m.policeClip != null) count++;
        if (m.clickClip != null) count++;
        if (m.diceRollClip != null) count++;
        if (m.tradeSuccessClip != null) count++;
        if (m.tradeFailedClip != null) count++;
        if (m.redeemClip != null) count++;
        if (m.sellHouseClip != null) count++;
        if (m.buildHouseClip != null) count++;
        if (m.moneyInClip != null) count++;
        if (m.moneyOutClip != null) count++;
        if (m.backgroundMusicClip != null) count++;
        if (m.gameMusicClip1 != null) count++;
        if (m.gameMusicClip2 != null) count++;
        return count;
    }

    static bool ShouldReplaceExisting(GameSoundManager existing, GameSoundManager candidate)
    {
        if (existing == null) return true;
        if (candidate == null) return false;
        if (!HasAnyClips(existing) && HasAnyClips(candidate)) return true;
        int existingCount = GetAssignedClipCount(existing);
        int candidateCount = GetAssignedClipCount(candidate);
        return candidateCount > existingCount;
    }

    static void CopyMissingClipsFrom(GameSoundManager src, GameSoundManager dst)
    {
        if (src == null || dst == null) return;
        if (dst.monopolyClip == null) dst.monopolyClip = src.monopolyClip;
        if (dst.stepClip == null) dst.stepClip = src.stepClip;
        if (dst.feedNoticeClip == null) dst.feedNoticeClip = src.feedNoticeClip;
        if (dst.buyPropertyClip == null) dst.buyPropertyClip = src.buyPropertyClip;
        if (dst.buyHouseClip == null) dst.buyHouseClip = src.buyHouseClip;
        if (dst.policeClip == null) dst.policeClip = src.policeClip;
        if (dst.clickClip == null) dst.clickClip = src.clickClip;
        if (dst.diceRollClip == null) dst.diceRollClip = src.diceRollClip;
        if (dst.tradeSuccessClip == null) dst.tradeSuccessClip = src.tradeSuccessClip;
        if (dst.tradeFailedClip == null) dst.tradeFailedClip = src.tradeFailedClip;
        if (dst.redeemClip == null) dst.redeemClip = src.redeemClip;
        if (dst.sellHouseClip == null) dst.sellHouseClip = src.sellHouseClip;
        if (dst.buildHouseClip == null) dst.buildHouseClip = src.buildHouseClip;
        if (dst.moneyInClip == null) dst.moneyInClip = src.moneyInClip;
        if (dst.moneyOutClip == null) dst.moneyOutClip = src.moneyOutClip;
        if (dst.backgroundMusicClip == null) dst.backgroundMusicClip = src.backgroundMusicClip;
        if (dst.gameMusicClip1 == null) dst.gameMusicClip1 = src.gameMusicClip1;
        if (dst.gameMusicClip2 == null) dst.gameMusicClip2 = src.gameMusicClip2;
    }

    static void StartMobileAudioOutput()
    {
#if UNITY_IOS || UNITY_ANDROID
        try
        {
            AudioSettings.Mobile.StartAudioOutput();
        }
        catch
        {
            // Ignore; older Unity versions may not support Mobile audio output control.
        }
#endif
    }

    void LoadClipsFromResourcesIfMissing()
    {
        if (monopolyClip == null) monopolyClip = Resources.Load<AudioClip>("Sounds/Monopoly");
        if (stepClip == null) stepClip = Resources.Load<AudioClip>("Sounds/st3-footstep-sfx-323056");
        if (feedNoticeClip == null) feedNoticeClip = Resources.Load<AudioClip>("Sounds/Feed notice");
        if (feedNoticeClip == null) feedNoticeClip = Resources.Load<AudioClip>("Sounds/feed notice");
        if (buyPropertyClip == null) buyPropertyClip = Resources.Load<AudioClip>("Sounds/Buy Propertry");
        if (buyHouseClip == null) buyHouseClip = Resources.Load<AudioClip>("Sounds/Buying house");
        if (policeClip == null) policeClip = Resources.Load<AudioClip>("Sounds/Police");
        if (policeClip == null) policeClip = Resources.Load<AudioClip>("Sounds/police");
        if (clickClip == null) clickClip = Resources.Load<AudioClip>("Sounds/click");
        if (diceRollClip == null) diceRollClip = Resources.Load<AudioClip>("Sounds/diceroll");
        if (tradeSuccessClip == null) tradeSuccessClip = Resources.Load<AudioClip>("Sounds/trade sucess");
        if (tradeFailedClip == null) tradeFailedClip = Resources.Load<AudioClip>("Sounds/Trade Failed");
        if (redeemClip == null) redeemClip = Resources.Load<AudioClip>("Sounds/Redeem");
        if (sellHouseClip == null) sellHouseClip = Resources.Load<AudioClip>("Sounds/Sell House");
        if (buildHouseClip == null) buildHouseClip = Resources.Load<AudioClip>("Sounds/Build House");
        if (moneyInClip == null) moneyInClip = Resources.Load<AudioClip>("Sounds/Buy Propertry"); // fallback
        if (moneyOutClip == null) moneyOutClip = Resources.Load<AudioClip>("Sounds/Buying house"); // fallback
        if (backgroundMusicClip == null) backgroundMusicClip = Resources.Load<AudioClip>("Sounds/BackgroundMusic");
        if (backgroundMusicClip == null) backgroundMusicClip = Resources.Load<AudioClip>("Sounds/Backgroundmusic");
        if (backgroundMusicClip == null && gameMusicClip1 != null) backgroundMusicClip = gameMusicClip1;
#if UNITY_EDITOR
        if (monopolyClip == null) monopolyClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Monopoly.mp3");
        if (stepClip == null) stepClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/st3-footstep-sfx-323056.mp3");
        if (feedNoticeClip == null) feedNoticeClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Feed notice.mp3");
        if (buyPropertyClip == null) buyPropertyClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Buy Propertry.mp3");
        if (buyHouseClip == null) buyHouseClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Buying house.mp3");
        if (policeClip == null) policeClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/police.mp3");
        if (clickClip == null) clickClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/click.mp3");
        if (diceRollClip == null) diceRollClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/diceroll.mp3");
        if (tradeSuccessClip == null) tradeSuccessClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/trade sucess.mp3");
        if (tradeFailedClip == null) tradeFailedClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Trade Failed.mp3");
        if (redeemClip == null) redeemClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Redeem.mp3");
        if (sellHouseClip == null) sellHouseClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Sell House.mp3");
        if (buildHouseClip == null) buildHouseClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Build House.mp3");
        if (moneyInClip == null) moneyInClip = buyPropertyClip;
        if (moneyOutClip == null) moneyOutClip = buyHouseClip;
        if (backgroundMusicClip == null) backgroundMusicClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/BackgroundMusic.mp3");
        if (backgroundMusicClip == null) backgroundMusicClip = UnityEditor.AssetDatabase.LoadAssetAtPath<AudioClip>("Assets/Sounds/Backgroundmusic.mp3");
#endif
        if (backgroundMusicClip == null) backgroundMusicClip = Resources.Load<AudioClip>("Sounds/tunetank-african-africa-music-347203");
    }

    void Start()
    {
        AudioListener.volume = 1f;
        AudioListener.pause = false;
        EnsureAudioListenerExists();
        StartMobileAudioOutput();
        PlayBackgroundMusicIfNeeded();
    }

    void OnEnable()
    {
        PlayBackgroundMusicIfNeeded();
    }

    void OnApplicationFocus(bool hasFocus)
    {
        if (hasFocus)
        {
            AudioListener.pause = false;
            StartMobileAudioOutput();
            EnsureAudioListenerExists();
            ApplyAudioSettings();
            PlayBackgroundMusicIfNeeded();
        }
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (!pauseStatus)
        {
            AudioListener.pause = false;
            StartMobileAudioOutput();
            EnsureAudioListenerExists();
            ApplyAudioSettings();
            PlayBackgroundMusicIfNeeded();
        }
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
        if (!musicEnabled || _musicSource == null) return;
        if (_musicSource.clip == null)
            LoadClipsFromResourcesIfMissing();
        if (_musicSource.clip == null && backgroundMusicClip != null)
            _musicSource.clip = backgroundMusicClip;
        if (_musicSource.clip != null && !_musicSource.isPlaying)
            _musicSource.Play();
    }

    void ApplyAudioSettings()
    {
        if (_oneShotSource != null)
        {
            _oneShotSource.volume = sfxVolume;
            _oneShotSource.mute = !sfxEnabled;
        }

        if (_musicSource != null)
        {
            _musicSource.volume = musicVolume;
            _musicSource.mute = !musicEnabled;
            if (!musicEnabled && _musicSource.isPlaying)
                _musicSource.Stop();
        }
    }

    void PlayBackgroundMusicIfNeeded()
    {
        if (_musicSource == null) return;

        LoadClipsFromResourcesIfMissing();
        if (_musicSource.clip == null)
            _musicSource.clip = backgroundMusicClip;

        if (!musicEnabled || _musicSource.clip == null)
        {
            if (_musicSource.isPlaying) _musicSource.Stop();
            return;
        }

        if (!_musicSource.isPlaying)
            _musicSource.Play();
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
            ApplyAudioSettings();
            PlayBackgroundMusicIfNeeded();
        }
    }

    public float MusicVolume
    {
        get => musicVolume;
        set
        {
            musicVolume = Mathf.Clamp01(value);
            PlayerPrefs.SetFloat(PrefMusicVolume, musicVolume);
            PlayerPrefs.Save();
            ApplyAudioSettings();
        }
    }

    public bool SfxEnabled
    {
        get => sfxEnabled;
        set
        {
            sfxEnabled = value;
            PlayerPrefs.SetInt(PrefSfxEnabled, value ? 1 : 0);
            PlayerPrefs.Save();
            ApplyAudioSettings();
        }
    }

    public float SfxVolume
    {
        get => sfxVolume;
        set
        {
            sfxVolume = Mathf.Clamp01(value);
            PlayerPrefs.SetFloat(PrefSfxVolume, sfxVolume);
            PlayerPrefs.Save();
            ApplyAudioSettings();
        }
    }

    public static GameSoundManager EnsureInitialized()
    {
        if (Instance != null) return Instance;
        var go = new GameObject("GameSoundManager");
        _instance = go.AddComponent<GameSoundManager>();
        return _instance;
    }

    /// <summary>Set music enabled from settings (e.g. Start Page). Saves to PlayerPrefs; applies to Instance if in scene.</summary>
    public static void SetMusicEnabledFromSettings(bool enabled)
    {
        EnsureInitialized().MusicEnabled = enabled;
    }

    public static void SetMusicVolumeFromSettings(float volume01)
    {
        EnsureInitialized().MusicVolume = volume01;
    }

    public static void SetSfxEnabledFromSettings(bool enabled)
    {
        EnsureInitialized().SfxEnabled = enabled;
    }

    public static void SetSfxVolumeFromSettings(float volume01)
    {
        EnsureInitialized().SfxVolume = volume01;
    }

    public static bool GetMusicEnabledSetting()
    {
        return PlayerPrefs.GetInt(PrefMusicEnabled, 1) != 0;
    }

    public static float GetMusicVolumeSetting()
    {
        return Mathf.Clamp01(PlayerPrefs.GetFloat(PrefMusicVolume, 0.65f));
    }

    public static bool GetSfxEnabledSetting()
    {
        return PlayerPrefs.GetInt(PrefSfxEnabled, 1) != 0;
    }

    public static float GetSfxVolumeSetting()
    {
        return Mathf.Clamp01(PlayerPrefs.GetFloat(PrefSfxVolume, 1f));
    }

    /// <summary>Call on any game activity (roll, move, buy, build, trade, etc.) to reset idle timer.</summary>
    public void NotifyActivity()
    {
        // Kept for call-site compatibility. Background music is continuous and unaffected.
    }

    public void PlayMonopoly()
    {
        if (sfxEnabled && monopolyClip != null) _oneShotSource.PlayOneShot(monopolyClip);
    }

    public void PlayStep()
    {
        if (sfxEnabled && stepClip != null) _oneShotSource.PlayOneShot(stepClip);
    }

    public void PlayFeedNotice()
    {
        if (sfxEnabled && feedSoundEnabled && feedNoticeClip != null) _oneShotSource.PlayOneShot(feedNoticeClip);
    }

    public void PlayBuyProperty()
    {
        if (sfxEnabled && buyPropertyClip != null) _oneShotSource.PlayOneShot(buyPropertyClip);
    }

    public void PlayBuyHouse()
    {
        if (sfxEnabled && buyHouseClip != null) _oneShotSource.PlayOneShot(buyHouseClip);
    }

    public void PlayPolice()
    {
        if (sfxEnabled && policeClip != null) _oneShotSource.PlayOneShot(policeClip);
    }

    public void PlayClick()
    {
        if (sfxEnabled && clickClip != null) _oneShotSource.PlayOneShot(clickClip);
    }

    public void PlayDiceRoll()
    {
        if (sfxEnabled && diceRollClip != null) _oneShotSource.PlayOneShot(diceRollClip);
    }

    public void PlayTradeSuccess()
    {
        if (sfxEnabled && tradeSuccessClip != null) _oneShotSource.PlayOneShot(tradeSuccessClip);
    }

    public void PlayTradeFailed()
    {
        if (sfxEnabled && tradeFailedClip != null) _oneShotSource.PlayOneShot(tradeFailedClip);
    }

    public void PlayRedeem()
    {
        if (sfxEnabled && redeemClip != null) _oneShotSource.PlayOneShot(redeemClip);
    }

    public void PlaySellHouse()
    {
        if (sfxEnabled && sellHouseClip != null) _oneShotSource.PlayOneShot(sellHouseClip);
    }

    public void PlayBuildHouse()
    {
        if (sfxEnabled && buildHouseClip != null) _oneShotSource.PlayOneShot(buildHouseClip);
    }

    /// <summary>Play when player receives money (salary, rent paid to them, etc.).</summary>
    public void PlayMoneyIn()
    {
        if (!sfxEnabled) return;
        if (moneyInClip != null) _oneShotSource.PlayOneShot(moneyInClip);
        else if (buyPropertyClip != null) _oneShotSource.PlayOneShot(buyPropertyClip);
    }

    /// <summary>Play when player pays money (rent, tax, buy property, etc.).</summary>
    public void PlayMoneyOut()
    {
        if (!sfxEnabled) return;
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
