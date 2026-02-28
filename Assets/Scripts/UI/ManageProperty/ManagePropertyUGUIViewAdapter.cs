using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// UGUI implementation of IManagePropertyView.
/// Wire this to your existing UGUI panel without changing gameplay logic.
/// </summary>
public sealed class ManagePropertyUGUIViewAdapter : MonoBehaviour, IManagePropertyView
{
    [Header("Root")]
    [SerializeField] GameObject panelRoot;

    [Header("Text")]
    [SerializeField] TMP_Text playerNameText;
    [SerializeField] TMP_Text walletText;
    [SerializeField] TMP_Text propertyNameText;
    [SerializeField] TMP_Text rentText;
    [SerializeField] TMP_Text stateText;

    [Header("Buttons")]
    [SerializeField] Button buildButton;
    [SerializeField] Button sellButton;
    [SerializeField] Button mortgageButton;
    [SerializeField] Button redeemButton;
    [SerializeField] Button closeButton;

    public event Action BuildRequested;
    public event Action SellRequested;
    public event Action MortgageRequested;
    public event Action RedeemRequested;
    public event Action CloseRequested;

    void Awake()
    {
        if (buildButton != null) buildButton.onClick.AddListener(() => BuildRequested?.Invoke());
        if (sellButton != null) sellButton.onClick.AddListener(() => SellRequested?.Invoke());
        if (mortgageButton != null) mortgageButton.onClick.AddListener(() => MortgageRequested?.Invoke());
        if (redeemButton != null) redeemButton.onClick.AddListener(() => RedeemRequested?.Invoke());
        if (closeButton != null) closeButton.onClick.AddListener(() => CloseRequested?.Invoke());
    }

    public void Show()
    {
        if (panelRoot != null) panelRoot.SetActive(true);
        else gameObject.SetActive(true);
    }

    public void Hide()
    {
        if (panelRoot != null) panelRoot.SetActive(false);
        else gameObject.SetActive(false);
    }

    public void Render(ManagePropertyViewModel model)
    {
        if (model == null) return;
        if (playerNameText != null) playerNameText.text = model.playerName;
        if (walletText != null) walletText.text = $"₦{model.wallet:N0}";
        if (propertyNameText != null) propertyNameText.text = model.propertyName;
        if (rentText != null) rentText.text = $"Rent: ₦{model.currentRent:N0}";
        if (stateText != null) stateText.text = model.statusText;

        if (buildButton != null) buildButton.interactable = model.canBuild;
        if (sellButton != null) sellButton.interactable = model.canSell;
        if (mortgageButton != null) mortgageButton.interactable = model.canMortgage;
        if (redeemButton != null) redeemButton.interactable = model.canRedeem;
    }
}

