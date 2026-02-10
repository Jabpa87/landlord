using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

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
    
    void Start()
    {
        ValidateFaces();

        // Initialize dice to show face 1
        if (dice1Faces != null && dice1Faces.Length > 0)
        {
            ShowDiceFace(1, 1);
            ShowDiceFace(2, 1);
        }
        
        // Ensure dice containers are visible
        EnsureDiceContainersVisible();
        
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

    private void ValidateFaces()
    {
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
        
        // Animation loop
        while (elapsed < rollDuration)
        {
            elapsed += Time.deltaTime;
            
            // Change dice faces rapidly during animation
            if (elapsed - lastFaceChange >= faceChangeInterval)
            {
                // Show random faces during animation
                int randomFace1 = Random.Range(1, 7);
                int randomFace2 = Random.Range(1, 7);
                ShowDiceFace(1, randomFace1);
                ShowDiceFace(2, randomFace2);
                
                lastFaceChange = elapsed;
            }
            
            // Bounce animation
            if (useBounceAnimation && dice1Faces != null && dice1Faces.Length > 0)
            {
                float bounce = Mathf.Sin(elapsed * 20f) * 0.1f + 1f; // Oscillating bounce
                float scale = Mathf.Lerp(bounceScale, 1f, elapsed / rollDuration); // Slow down near end
                
                ApplyBounceScale(scale);
            }
            
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
        int index = faceValue - 1;
        if (index >= 0 && index < faces.Length && faces[index] != null)
        {
            faces[index].gameObject.SetActive(true);
            
            // Ensure parent containers are active so dice are visible
            Transform parent = faces[index].transform.parent;
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
                Debug.LogWarning($"DiceRoller: Dice 1 missing face at index {index}. Assign all 6 face images.");
                warnedMissingDice1Faces = true;
            }
            else if (diceNumber == 2 && !warnedMissingDice2Faces)
            {
                Debug.LogWarning($"DiceRoller: Dice 2 missing face at index {index}. Assign all 6 face images.");
                warnedMissingDice2Faces = true;
            }
        }
    }
    
    /// <summary>
    /// Apply bounce scale to dice visuals.
    /// </summary>
    private void ApplyBounceScale(float scale)
    {
        if (dice1Faces != null)
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
}
