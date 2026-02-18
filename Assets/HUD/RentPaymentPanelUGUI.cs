using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// uGUI Rent Payment panel controller. Assign fields in the Inspector.
/// </summary>
public class RentPaymentPanelUGUI : MonoBehaviour
{
    public static RentPaymentPanelUGUI Instance { get; private set; }

    [Header("Root")]
    public GameObject overlayRoot;
    public GameObject panelRoot;

    [Header("Text")]
    public TMP_Text titleText;
    public TMP_Text messageText;
    public TMP_Text detailsText;

    [Header("Buttons")]
    public Button okButton;
    public Button overlayButton;

    void Awake()
    {
        Instance = this;
        if (panelRoot == null) panelRoot = gameObject;
    }

    void Start()
    {
        HookButtons();
        Hide();
    }

    public void Show(Player payer, Player owner, Property property, int rentAmount)
    {
        if (panelRoot != null) panelRoot.SetActive(true);
        if (overlayRoot != null) overlayRoot.SetActive(true);

        if (titleText != null) titleText.text = "RENT PAYMENT";
        if (messageText != null) messageText.text = $"{payer.playerName} paid rent";
        if (detailsText != null)
        {
            string details = $"Property: {property.propertyName}\n";
            details += $"Rent: ₦{rentAmount:N0}\n";
            details += $"Paid to: {owner.playerName}";
            detailsText.text = details;
        }
    }

    public void Hide()
    {
        if (panelRoot != null) panelRoot.SetActive(false);
        if (overlayRoot != null) overlayRoot.SetActive(false);
    }

    private void HookButtons()
    {
        if (okButton != null)
        {
            okButton.onClick.RemoveListener(Hide);
            okButton.onClick.AddListener(Hide);
        }
        if (overlayButton != null)
        {
            overlayButton.onClick.RemoveListener(Hide);
            overlayButton.onClick.AddListener(Hide);
        }
    }
}
