using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
#if UNITY_EDITOR
using UnityEditor;
#endif

/// <summary>
/// Handles visual dice rolling animation and displays the final dice values.
/// Supports both 2D sprite-based dice and 3D dice models.
/// </summary>
public class DiceRoller : MonoBehaviour
{
    [Header("Dice Visuals")]
    [Tooltip("UI Images for dice faces (1-6). If using sprites, assign 6 sprites here.")]
    public Image[] dice1Faces = new Image[6]; // Sprites for dice 1 (faces 1-6)
    public Image[] dice2Faces = new Image[6]; // Sprites for dice 2 (faces 1-6)

    [Header("Simple Dice UI (Single Image + Sprites)")]
    [Tooltip("Single Image for dice 1 (uses Face Sprites below).")]
    public Image dice1Image;
    [Tooltip("Single Image for dice 2 (uses Face Sprites below).")]
    public Image dice2Image;
    [Tooltip("Dice face sprites in order 1..6.")]
    public Sprite[] faceSprites = new Sprite[6];
    [Tooltip("Optional roll animation frames (sprite sheet slices). If set, used during rolling for a more 3D feel.")]
    public Sprite[] rollFrames = new Sprite[0];
    [Tooltip("Frames per second for roll animation frames.")]
    public float rollFrameRate = 24f;
    [Tooltip("Frame offset for dice 2 (to desync roll animation).")]
    public int rollFrameOffset = 7;
    
    [Tooltip("Alternative: Use 3D dice GameObjects if you have 3D models")]
    public GameObject dice1Model;
    public GameObject dice2Model;
    
    [Header("Animation Settings")]
    [Tooltip("Duration of the rolling animation in seconds")]
    public float rollDuration = 2f;
    
    [Tooltip("How fast the dice faces change during animation (faces per second)")]
    public float faceChangeSpeed = 10f;
    
    [Tooltip("Should dice bounce/scale during animation?")]
    public bool useBounceAnimation = true;
    
    [Tooltip("Bounce scale amount (1.0 = no bounce)")]
    public float bounceScale = 1.2f;

    [Header("Enhanced Roll FX")]
    [Tooltip("Spin dice during roll (degrees per second).")]
    public float spinSpeed = 720f;
    [Tooltip("Minimum distance (pixels) the dice drift while rolling.")]
    public float rollDriftDistanceMin = 20f;
    [Tooltip("Maximum distance (pixels) the dice drift while rolling.")]
    public float rollDriftDistanceMax = 80f;
    [Tooltip("Apply 3D-ish squash/stretch during roll.")]
    public bool useSquashStretch = true;
    [Tooltip("Squash/stretch intensity (0.0 - 0.3 recommended).")]
    public float squashStretchAmount = 0.12f;
    [Tooltip("Enable simple motion blur via ghost images.")]
    public bool useMotionBlur = true;
    [Tooltip("Ghost alpha for motion blur.")]
    public float motionBlurAlpha = 0.35f;
    [Tooltip("Ghost offset in pixels for motion blur.")]
    public Vector2 motionBlurOffset = new Vector2(8f, -6f);
    
    [Header("UI References")]
    [Tooltip("Text to show dice result (optional, can use existing diceText)")]
    public TMP_Text resultText;
    
    [Tooltip("Panel to show during dice roll (optional)")]
    public GameObject diceRollPanel;
    
    [Tooltip("Keep dice visible after roll completes? If false, dice will hide with panel.")]
    public bool keepDiceVisibleAfterRoll = true;
    
    [Tooltip("Container for dice when not rolling (optional, for keeping dice visible)")]
    public GameObject diceDisplayContainer;
    
    [Tooltip("Keep dice visible at game start? If true, dice will be visible even before first roll.")]
    public bool keepDiceVisibleAtStart = true;

    [Header("Interaction & Active Turn")]
    [Tooltip("Optional button overlay for clicking the dice.")]
    public Button diceButton;
    [Tooltip("TurnManager reference for click-to-roll.")]
    public TurnManager turnManager;
    [Tooltip("Root object to show/hide/pulse (defaults to diceRollPanel or this GameObject).")]
    public GameObject diceRoot;
    [Tooltip("Show dice only on active human turn.")]
    public bool showWhenActiveOnly = true;
    [Tooltip("Pulse dice when active.")]
    public bool pulseWhenActive = true;
    public float pulseSpeed = 2.2f;
    public float pulseScaleMin = 0.92f;
    public float pulseScaleMax = 1.06f;
    [Tooltip("Float dice slightly when active.")]
    public bool floatWhenActive = true;
    public float floatAmplitude = 6f;
    public float floatSpeed = 2f;
    
    [Header("Audio (Optional)")]
    [Tooltip("Sound effect to play when rolling starts")]
    public AudioSource rollStartSound;
    
    [Tooltip("Sound effect to play when rolling ends")]
    public AudioSource rollEndSound;
    
    private bool isRolling = false;
    private int finalDice1 = 1;
    private int finalDice2 = 1;
    private Coroutine rollingCoroutine;
    private bool dice1FacesValid = true;
    private bool dice2FacesValid = true;
    private bool warnedMissingDice1Faces = false;
    private bool warnedMissingDice2Faces = false;
    private bool isActiveTurn = false;
    private Vector3 rootBaseLocalPos;
    private Vector3 rootBaseLocalScale;
    private Quaternion rootBaseLocalRot;
    private RectTransform rootRect;
    private Image dice1Ghost;
    private Image dice2Ghost;
    private Vector2 rollDriftDir = Vector2.right;
    private float rollDriftDistance = 0f;
    private float rollSpinDirection = 1f;
    private const string RollSheetPath = "Assets/Dice/Glossy Red Dice Rolls.png";
    
    void Start()
    {
#if UNITY_EDITOR
        if ((rollFrames == null || rollFrames.Length == 0) && !Application.isPlaying)
        {
            rollFrames = LoadRollFramesFromSheet();
        }
#endif
        ValidateFaces();

        // Initialize dice to show face 1
        if (dice1Faces != null && dice1Faces.Length > 0)
        {
            ShowDiceFace(1, 1);
            ShowDiceFace(2, 1);
        }
        else if (dice1Image != null && dice2Image != null)
        {
            ShowDiceFace(1, 1);
            ShowDiceFace(2, 1);
        }
        
        // Ensure dice containers are visible
        EnsureDiceContainersVisible();

        if (diceRoot == null)
            diceRoot = diceRollPanel != null ? diceRollPanel : (diceDisplayContainer != null ? diceDisplayContainer : gameObject);
        rootRect = diceRoot != null ? diceRoot.GetComponent<RectTransform>() : null;
        if (diceRoot != null)
        {
            rootBaseLocalPos = diceRoot.transform.localPosition;
            rootBaseLocalScale = diceRoot.transform.localScale;
            rootBaseLocalRot = diceRoot.transform.localRotation;
        }

        if (diceButton != null)
        {
            diceButton.onClick.RemoveListener(OnDiceClicked);
            diceButton.onClick.AddListener(OnDiceClicked);
        }
        
        // Handle panel visibility based on settings
        if (keepDiceVisibleAtStart || keepDiceVisibleAfterRoll)
        {
            // If we have a separate display container, use that
            if (diceDisplayContainer != null)
            {
                diceDisplayContainer.SetActive(true);
                // Can hide the roll panel if using separate container
                if (diceRollPanel != null)
                {
                    diceRollPanel.SetActive(false);
                }
            }
            else if (diceRollPanel != null)
            {
                // Keep the roll panel visible so dice stay visible
                diceRollPanel.SetActive(true);
            }
        }
        else
        {
            // Hide dice roll panel if we don't want to keep dice visible
            if (diceRollPanel != null)
            {
                diceRollPanel.SetActive(false);
            }
        }
    }

    void Update()
    {
        if (!isActiveTurn || isRolling) return;
        if (diceRoot == null) return;

        if (pulseWhenActive)
        {
            float t = (Mathf.Sin(Time.time * pulseSpeed) + 1f) * 0.5f;
            float scale = Mathf.Lerp(pulseScaleMin, pulseScaleMax, t);
            diceRoot.transform.localScale = rootBaseLocalScale * scale;
        }

        if (floatWhenActive)
        {
            float offset = Mathf.Sin(Time.time * floatSpeed) * floatAmplitude;
            if (rootRect != null)
            {
                rootRect.anchoredPosition = new Vector2(rootRect.anchoredPosition.x, rootBaseLocalPos.y + offset);
            }
            else
            {
                diceRoot.transform.localPosition = new Vector3(rootBaseLocalPos.x, rootBaseLocalPos.y + offset, rootBaseLocalPos.z);
            }
        }
    }

    private void ValidateFaces()
    {
        if (faceSprites != null && faceSprites.Length >= 6 && dice1Image != null && dice2Image != null)
        {
            dice1FacesValid = true;
            dice2FacesValid = true;
            return;
        }
        dice1FacesValid = HasValidFaces(dice1Faces);
        dice2FacesValid = HasValidFaces(dice2Faces);

        if (!dice1FacesValid && !warnedMissingDice1Faces)
        {
            Debug.LogWarning("DiceRoller: Dice 1 faces are not fully assigned. Assign 6 face images to dice1Faces.");
            warnedMissingDice1Faces = true;
        }

        if (!dice2FacesValid && !warnedMissingDice2Faces)
        {
            Debug.LogWarning("DiceRoller: Dice 2 faces are not fully assigned. Assign 6 face images to dice2Faces.");
            warnedMissingDice2Faces = true;
        }
    }

    private bool HasValidFaces(Image[] faces)
    {
        if (faces == null || faces.Length < 6) return false;
        for (int i = 0; i < 6; i++)
        {
            if (faces[i] == null) return false;
        }
        return true;
    }
    
    /// <summary>
    /// Ensures dice container GameObjects are active so dice faces are visible.
    /// </summary>
    private void EnsureDiceContainersVisible()
    {
        // Activate dice containers if they exist
        if (dice1Faces != null && dice1Faces.Length > 0 && dice1Faces[0] != null)
        {
            Transform container = dice1Faces[0].transform.parent;
            while (container != null && container != diceRollPanel?.transform)
            {
                if (!container.gameObject.activeSelf)
                {
                    container.gameObject.SetActive(true);
                }
                container = container.parent;
            }
        }
        
        if (dice2Faces != null && dice2Faces.Length > 0 && dice2Faces[0] != null)
        {
            Transform container = dice2Faces[0].transform.parent;
            while (container != null && container != diceRollPanel?.transform)
            {
                if (!container.gameObject.activeSelf)
                {
                    container.gameObject.SetActive(true);
                }
                container = container.parent;
            }
        }
    }
    
    /// <summary>
    /// Start rolling animation and return the final dice values via callback.
    /// </summary>
    public void RollDice(System.Action<int, int> onComplete)
    {
        if (isRolling)
        {
            Debug.LogWarning("Dice are already rolling!");
            return;
        }
        
        // Generate random final values
        finalDice1 = Random.Range(1, 7);
        finalDice2 = Random.Range(1, 7);
        
        // Start rolling animation
        rollingCoroutine = StartCoroutine(RollAnimation(finalDice1, finalDice2, onComplete));
    }
    
    /// <summary>
    /// Roll dice with specific final values (for testing or predetermined rolls).
    /// </summary>
    public void RollDice(int finalValue1, int finalValue2, System.Action<int, int> onComplete)
    {
        if (isRolling)
        {
            Debug.LogWarning("Dice are already rolling!");
            return;
        }
        
        finalDice1 = Mathf.Clamp(finalValue1, 1, 6);
        finalDice2 = Mathf.Clamp(finalValue2, 1, 6);
        
        rollingCoroutine = StartCoroutine(RollAnimation(finalDice1, finalDice2, onComplete));
    }
    
    private IEnumerator RollAnimation(int final1, int final2, System.Action<int, int> onComplete)
    {
        isRolling = true;
        
        // Show dice roll panel if it exists
        if (diceRollPanel != null)
        {
            diceRollPanel.SetActive(true);
        }
        
        // Play roll start sound
        if (rollStartSound != null)
        {
            rollStartSound.Play();
        }
        
        float elapsed = 0f;
        float lastFaceChange = 0f;
        float faceChangeInterval = 1f / faceChangeSpeed;

        InitRollDrift();
        
        // Animation loop
        while (elapsed < rollDuration)
        {
            elapsed += Time.deltaTime;
            
            // Change dice faces rapidly during animation
            if (elapsed - lastFaceChange >= faceChangeInterval)
            {
                if (rollFrames != null && rollFrames.Length > 0 && dice1Image != null && dice2Image != null)
                {
                    int frameIndex = (int)(elapsed * rollFrameRate) % rollFrames.Length;
                    ShowRollFrame(frameIndex);
                }
                else
                {
                    // Show random faces during animation
                    int randomFace1 = Random.Range(1, 7);
                    int randomFace2 = Random.Range(1, 7);
                    ShowDiceFace(1, randomFace1);
                    ShowDiceFace(2, randomFace2);
                }
                
                lastFaceChange = elapsed;
            }
            
            // Bounce animation
            if (useBounceAnimation && dice1Faces != null && dice1Faces.Length > 0)
            {
                float bounce = Mathf.Sin(elapsed * 20f) * 0.1f + 1f; // Oscillating bounce
                float scale = Mathf.Lerp(bounceScale, 1f, elapsed / rollDuration); // Slow down near end
                
                ApplyBounceScale(scale);
            }

            ApplySpinAndSquash(elapsed);
            ApplyMotionBlur();
            ApplyRollDrift(elapsed / rollDuration);
            
            yield return null;
        }
        
        // Show final dice faces
        ShowDiceFace(1, final1);
        ShowDiceFace(2, final2);
        
        // Reset bounce scale
        if (useBounceAnimation)
        {
            ApplyBounceScale(1f);
        }
        ResetSpinAndSquash();
        ResetMotionBlur();
        ResetRollDrift();
        
        // Update result text
        if (resultText != null)
        {
            bool isDoubles = (final1 == final2);
            string doublesText = isDoubles ? " (Doubles!)" : "";
            resultText.text = $"Dice: {final1} + {final2} = {final1 + final2}{doublesText}";
        }
        
        // Play roll end sound
        if (rollEndSound != null)
        {
            rollEndSound.Play();
        }
        
        // Wait a moment before completing
        yield return new WaitForSeconds(0.3f);
        
        isRolling = false;
        
        // Handle panel visibility based on settings
        if (keepDiceVisibleAfterRoll)
        {
            // If we want to keep dice visible, move them to display container or keep panel visible
            if (diceDisplayContainer != null)
            {
                // Move dice to display container (if using separate containers)
                // For now, just keep the panel visible but you can move GameObjects if needed
                if (diceRollPanel != null)
                {
                    // Keep panel visible but maybe make background transparent
                    diceRollPanel.SetActive(true);
                }
                diceDisplayContainer.SetActive(true);
            }
            else if (diceRollPanel != null)
            {
                // Keep the roll panel visible if no separate display container
                diceRollPanel.SetActive(true);
            }
        }
        else
        {
            // Hide dice roll panel
            if (diceRollPanel != null)
            {
                diceRollPanel.SetActive(false);
            }
            if (diceDisplayContainer != null)
            {
                diceDisplayContainer.SetActive(false);
            }
        }
        
        // Call completion callback
        onComplete?.Invoke(final1, final2);
    }
    
    /// <summary>
    /// Show a specific face for a die (1-6).
    /// </summary>
    private void ShowDiceFace(int diceNumber, int faceValue)
    {
        if (faceValue < 1 || faceValue > 6) return;

        // Prefer single-image mode if configured
        if (faceSprites != null && faceSprites.Length >= 6 && dice1Image != null && dice2Image != null)
        {
            int index = faceValue - 1;
            Sprite sprite = faceSprites[index];
            if (diceNumber == 1 && dice1Image != null)
            {
                dice1Image.sprite = sprite;
                dice1Image.enabled = sprite != null;
            }
            else if (diceNumber == 2 && dice2Image != null)
            {
                dice2Image.sprite = sprite;
                dice2Image.enabled = sprite != null;
            }
            return;
        }

        Image[] faces = diceNumber == 1 ? dice1Faces : dice2Faces;
        if (diceNumber == 1 && !dice1FacesValid) return;
        if (diceNumber == 2 && !dice2FacesValid) return;

        if (faces == null || faces.Length < 6)
        {
            Debug.LogWarning($"DiceRoller: Dice {diceNumber} faces array is null or too short!");
            return;
        }

        // Hide all faces
        for (int i = 0; i < faces.Length; i++)
        {
            if (faces[i] != null)
            {
                faces[i].gameObject.SetActive(false);
            }
        }

        // Show the selected face (faceValue is 1-6, array index is 0-5)
        int idx = faceValue - 1;
        if (idx >= 0 && idx < faces.Length && faces[idx] != null)
        {
            faces[idx].gameObject.SetActive(true);

            // Ensure parent containers are active so dice are visible
            Transform parent = faces[idx].transform.parent;
            while (parent != null)
            {
                if (!parent.gameObject.activeSelf)
                {
                    Debug.LogWarning($"DiceRoller: Parent {parent.name} is inactive! Activating it.");
                    parent.gameObject.SetActive(true);
                }
                parent = parent.parent;
            }
        }
        else
        {
            if (diceNumber == 1 && !warnedMissingDice1Faces)
            {
                Debug.LogWarning($"DiceRoller: Dice 1 missing face at index {idx}. Assign all 6 face images.");
                warnedMissingDice1Faces = true;
            }
            else if (diceNumber == 2 && !warnedMissingDice2Faces)
            {
                Debug.LogWarning($"DiceRoller: Dice 2 missing face at index {idx}. Assign all 6 face images.");
                warnedMissingDice2Faces = true;
            }
        }
    }

    private void ShowRollFrame(int frameIndex)
    {
        if (rollFrames == null || rollFrames.Length == 0) return;
        if (dice1Image == null || dice2Image == null) return;
        int idx = Mathf.Clamp(frameIndex, 0, rollFrames.Length - 1);
        int idx2 = (idx + rollFrameOffset) % rollFrames.Length;
        dice1Image.sprite = rollFrames[idx];
        dice2Image.sprite = rollFrames[idx2];
        dice1Image.enabled = dice1Image.sprite != null;
        dice2Image.enabled = dice2Image.sprite != null;
    }
    
    /// <summary>
    /// Apply bounce scale to dice visuals.
    /// </summary>
    private void ApplyBounceScale(float scale)
    {
        if (dice1Image != null && dice2Image != null && faceSprites != null && faceSprites.Length >= 6)
        {
            if (dice1Image != null) dice1Image.transform.localScale = Vector3.one * scale;
            if (dice2Image != null) dice2Image.transform.localScale = Vector3.one * scale;
        }
        else if (dice1Faces != null)
        {
            foreach (Image face in dice1Faces)
            {
                if (face != null)
                {
                    face.transform.localScale = Vector3.one * scale;
                }
            }
        }
        
        if (dice2Faces != null)
        {
            foreach (Image face in dice2Faces)
            {
                if (face != null)
                {
                    face.transform.localScale = Vector3.one * scale;
                }
            }
        }
        
        // Also apply to 3D models if using them
        if (dice1Model != null)
        {
            dice1Model.transform.localScale = Vector3.one * scale;
        }
        
        if (dice2Model != null)
        {
            dice2Model.transform.localScale = Vector3.one * scale;
        }
    }

    private void ApplySpinAndSquash(float elapsed)
    {
        float spin = spinSpeed * Time.deltaTime * rollSpinDirection;
        float t = Mathf.Sin(elapsed * 18f);
        float squash = useSquashStretch ? squashStretchAmount * t : 0f;
        Vector3 squashScale = new Vector3(1f + squash, 1f - squash, 1f);

        if (dice1Image != null)
        {
            dice1Image.rectTransform.Rotate(0f, 0f, spin);
            dice1Image.rectTransform.localScale = squashScale;
        }
        if (dice2Image != null)
        {
            dice2Image.rectTransform.Rotate(0f, 0f, spin);
            dice2Image.rectTransform.localScale = squashScale;
        }
    }

    private void ResetSpinAndSquash()
    {
        if (dice1Image != null)
        {
            dice1Image.rectTransform.localRotation = Quaternion.identity;
            dice1Image.rectTransform.localScale = Vector3.one;
        }
        if (dice2Image != null)
        {
            dice2Image.rectTransform.localRotation = Quaternion.identity;
            dice2Image.rectTransform.localScale = Vector3.one;
        }
    }

    private void InitRollDrift()
    {
        Vector2 dir = Random.insideUnitCircle;
        if (dir.sqrMagnitude < 0.0001f)
            dir = Vector2.right;
        rollDriftDir = dir.normalized;
        rollDriftDistance = Random.Range(rollDriftDistanceMin, rollDriftDistanceMax);
        rollSpinDirection = Mathf.Abs(rollDriftDir.x) < 0.01f ? 1f : Mathf.Sign(rollDriftDir.x);
    }

    private void ApplyRollDrift(float t)
    {
        if (diceRoot == null) return;
        // Roll out and back so the dice finish where they started.
        float outAndBack = Mathf.Sin(t * Mathf.PI);
        Vector2 offset = rollDriftDir * (rollDriftDistance * outAndBack);
        if (rootRect != null)
        {
            rootRect.anchoredPosition = new Vector2(rootBaseLocalPos.x + offset.x, rootBaseLocalPos.y + offset.y);
        }
        else
        {
            diceRoot.transform.localPosition = new Vector3(rootBaseLocalPos.x + offset.x, rootBaseLocalPos.y + offset.y, rootBaseLocalPos.z);
        }
        diceRoot.transform.localRotation = rootBaseLocalRot * Quaternion.Euler(0f, 0f, spinSpeed * t * 0.02f * rollSpinDirection);
    }

    private void ResetRollDrift()
    {
        if (diceRoot == null) return;
        if (rootRect != null)
            rootRect.anchoredPosition = new Vector2(rootBaseLocalPos.x, rootBaseLocalPos.y);
        else
            diceRoot.transform.localPosition = rootBaseLocalPos;
        diceRoot.transform.localRotation = rootBaseLocalRot;
    }

    private void EnsureMotionBlurGhosts()
    {
        if (!useMotionBlur) return;
        if (dice1Image == null || dice2Image == null) return;
        if (dice1Ghost != null && dice2Ghost != null) return;

        dice1Ghost = CreateGhost(dice1Image, "Dice1Ghost");
        dice2Ghost = CreateGhost(dice2Image, "Dice2Ghost");
    }

    private Image CreateGhost(Image source, string name)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Image));
        go.transform.SetParent(source.transform, false);
        var img = go.GetComponent<Image>();
        img.sprite = source.sprite;
        img.color = new Color(1f, 1f, 1f, motionBlurAlpha);
        img.raycastTarget = false;
        var rt = img.rectTransform;
        rt.anchorMin = Vector2.zero;
        rt.anchorMax = Vector2.one;
        rt.offsetMin = Vector2.zero;
        rt.offsetMax = Vector2.zero;
        return img;
    }

    private void ApplyMotionBlur()
    {
        if (!useMotionBlur) return;
        EnsureMotionBlurGhosts();
        if (dice1Ghost != null)
        {
            dice1Ghost.sprite = dice1Image != null ? dice1Image.sprite : dice1Ghost.sprite;
            dice1Ghost.color = new Color(1f, 1f, 1f, motionBlurAlpha);
            dice1Ghost.rectTransform.anchoredPosition = motionBlurOffset;
        }
        if (dice2Ghost != null)
        {
            dice2Ghost.sprite = dice2Image != null ? dice2Image.sprite : dice2Ghost.sprite;
            dice2Ghost.color = new Color(1f, 1f, 1f, motionBlurAlpha);
            dice2Ghost.rectTransform.anchoredPosition = -motionBlurOffset;
        }
    }

    private void ResetMotionBlur()
    {
        if (dice1Ghost != null) dice1Ghost.color = new Color(1f, 1f, 1f, 0f);
        if (dice2Ghost != null) dice2Ghost.color = new Color(1f, 1f, 1f, 0f);
    }
    
    /// <summary>
    /// Stop current rolling animation (if any).
    /// </summary>
    public void StopRolling()
    {
        if (isRolling && rollingCoroutine != null)
        {
            StopCoroutine(rollingCoroutine);
            isRolling = false;
            
            // Show final faces
            ShowDiceFace(1, finalDice1);
            ShowDiceFace(2, finalDice2);
            
            if (diceRollPanel != null)
            {
                diceRollPanel.SetActive(false);
            }
        }
    }
    
    /// <summary>
    /// Check if dice are currently rolling.
    /// </summary>
    public bool IsRolling()
    {
        return isRolling;
    }
    
    /// <summary>
    /// Force dice to be visible (useful for debugging or ensuring visibility).
    /// </summary>
    public void ForceDiceVisible()
    {
        EnsureDiceContainersVisible();
        
        if (diceRollPanel != null)
        {
            diceRollPanel.SetActive(true);
        }
        
        if (diceDisplayContainer != null)
        {
            diceDisplayContainer.SetActive(true);
        }
        
        // Show face 1 for both dice
        ShowDiceFace(1, 1);
        ShowDiceFace(2, 1);
    }

    public void SetActiveTurn(bool active)
    {
        isActiveTurn = active;
        if (diceRoot == null)
            diceRoot = diceRollPanel != null ? diceRollPanel : (diceDisplayContainer != null ? diceDisplayContainer : gameObject);
        if (diceRoot != null && showWhenActiveOnly)
            diceRoot.SetActive(active);
        if (diceButton != null)
            diceButton.interactable = active;
        if (!active && diceRoot != null)
        {
            diceRoot.transform.localScale = rootBaseLocalScale != Vector3.zero ? rootBaseLocalScale : Vector3.one;
            if (rootRect != null)
                rootRect.anchoredPosition = new Vector2(rootRect.anchoredPosition.x, rootBaseLocalPos.y);
        }
    }

    private void OnDiceClicked()
    {
        if (!isActiveTurn || isRolling) return;
        if (turnManager == null)
            turnManager = FindFirstObjectByType<TurnManager>();
        if (turnManager != null)
            turnManager.RollDice();
    }

#if UNITY_EDITOR
    private Sprite[] LoadRollFramesFromSheet()
    {
        Object[] assets = AssetDatabase.LoadAllAssetsAtPath(RollSheetPath);
        if (assets == null || assets.Length == 0) return new Sprite[0];
        var sprites = new System.Collections.Generic.List<Sprite>();
        foreach (var a in assets)
        {
            if (a is Sprite s) sprites.Add(s);
        }
        sprites.Sort((a, b) => ParseFrameIndex(a.name).CompareTo(ParseFrameIndex(b.name)));
        return sprites.ToArray();
    }

    private int ParseFrameIndex(string name)
    {
        if (string.IsNullOrEmpty(name)) return 0;
        int underscore = name.LastIndexOf('_');
        if (underscore >= 0 && underscore + 1 < name.Length)
        {
            if (int.TryParse(name.Substring(underscore + 1), out int n))
                return n;
        }
        return 0;
    }
#endif
}
