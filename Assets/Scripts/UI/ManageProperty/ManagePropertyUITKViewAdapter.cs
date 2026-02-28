using System;
using UnityEngine;
using UnityEngine.UIElements;

/// <summary>
/// UI Toolkit implementation of IManagePropertyView.
/// Set element names in inspector to match your UXML.
/// </summary>
public sealed class ManagePropertyUITKViewAdapter : MonoBehaviour, IManagePropertyView
{
    [SerializeField] UIDocument document;
    [SerializeField] string rootName = "ManagePropertyPanel";
    [SerializeField] string playerNameLabel = "ManagePlayerName";
    [SerializeField] string walletLabel = "ManageWalletText";
    [SerializeField] string propertyLabel = "ManagePropertyName";
    [SerializeField] string rentLabel = "ManageRentText";
    [SerializeField] string stateLabel = "ManageStateText";
    [SerializeField] string buildButtonName = "BuildButton";
    [SerializeField] string sellButtonName = "SellButton";
    [SerializeField] string mortgageButtonName = "MortgageButton";
    [SerializeField] string redeemButtonName = "RedeemButton";
    [SerializeField] string closeButtonName = "CloseButton";

    VisualElement _root;
    Label _playerName;
    Label _wallet;
    Label _property;
    Label _rent;
    Label _state;
    Button _build;
    Button _sell;
    Button _mortgage;
    Button _redeem;
    Button _close;

    public event Action BuildRequested;
    public event Action SellRequested;
    public event Action MortgageRequested;
    public event Action RedeemRequested;
    public event Action CloseRequested;

    void Awake()
    {
        Bind();
    }

    void Bind()
    {
        if (document == null || document.rootVisualElement == null) return;
        VisualElement root = document.rootVisualElement;
        _root = string.IsNullOrEmpty(rootName) ? root : root.Q<VisualElement>(rootName);
        if (_root == null) _root = root;

        _playerName = root.Q<Label>(playerNameLabel);
        _wallet = root.Q<Label>(walletLabel);
        _property = root.Q<Label>(propertyLabel);
        _rent = root.Q<Label>(rentLabel);
        _state = root.Q<Label>(stateLabel);
        _build = root.Q<Button>(buildButtonName);
        _sell = root.Q<Button>(sellButtonName);
        _mortgage = root.Q<Button>(mortgageButtonName);
        _redeem = root.Q<Button>(redeemButtonName);
        _close = root.Q<Button>(closeButtonName);

        if (_build != null) _build.clicked += () => BuildRequested?.Invoke();
        if (_sell != null) _sell.clicked += () => SellRequested?.Invoke();
        if (_mortgage != null) _mortgage.clicked += () => MortgageRequested?.Invoke();
        if (_redeem != null) _redeem.clicked += () => RedeemRequested?.Invoke();
        if (_close != null) _close.clicked += () => CloseRequested?.Invoke();
    }

    public void Show()
    {
        if (_root == null) Bind();
        if (_root != null) _root.style.display = DisplayStyle.Flex;
    }

    public void Hide()
    {
        if (_root == null) Bind();
        if (_root != null) _root.style.display = DisplayStyle.None;
    }

    public void Render(ManagePropertyViewModel model)
    {
        if (model == null) return;
        if (_root == null) Bind();

        if (_playerName != null) _playerName.text = model.playerName;
        if (_wallet != null) _wallet.text = $"₦{model.wallet:N0}";
        if (_property != null) _property.text = model.propertyName;
        if (_rent != null) _rent.text = $"Rent: ₦{model.currentRent:N0}";
        if (_state != null) _state.text = model.statusText;

        if (_build != null) _build.SetEnabled(model.canBuild);
        if (_sell != null) _sell.SetEnabled(model.canSell);
        if (_mortgage != null) _mortgage.SetEnabled(model.canMortgage);
        if (_redeem != null) _redeem.SetEnabled(model.canRedeem);
    }
}

