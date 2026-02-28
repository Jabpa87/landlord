using UnityEngine;

/// <summary>
/// Bridges gameplay state to a UI-agnostic manage-property view.
/// Keep game logic in Player/TurnManager; this only maps state + button intents.
/// </summary>
public sealed class ManagePropertyController : MonoBehaviour
{
    [Header("References")]
    [SerializeField] TurnManager turnManager;
    [SerializeField] UIDocumentManager uiManager;

    [Header("Views (one or both)")]
    [SerializeField] ManagePropertyUGUIViewAdapter uguiView;
    [SerializeField] ManagePropertyUITKViewAdapter uitkView;
    [SerializeField] bool useUIToolkitView;

    IManagePropertyView _view;

    void Awake()
    {
        if (turnManager == null) turnManager = FindFirstObjectByType<TurnManager>();
        if (uiManager == null) uiManager = FindFirstObjectByType<UIDocumentManager>();

        _view = useUIToolkitView ? (IManagePropertyView)uitkView : uguiView;
        if (_view == null)
        {
            Debug.LogWarning("ManagePropertyController: No view assigned.", this);
            return;
        }

        _view.BuildRequested += OnBuildRequested;
        _view.SellRequested += OnSellRequested;
        _view.MortgageRequested += OnMortgageRequested;
        _view.RedeemRequested += OnRedeemRequested;
        _view.CloseRequested += OnCloseRequested;
    }

    void OnDestroy()
    {
        if (_view == null) return;
        _view.BuildRequested -= OnBuildRequested;
        _view.SellRequested -= OnSellRequested;
        _view.MortgageRequested -= OnMortgageRequested;
        _view.RedeemRequested -= OnRedeemRequested;
        _view.CloseRequested -= OnCloseRequested;
    }

    public void Show()
    {
        if (_view == null) return;
        Refresh();
        _view.Show();
    }

    public void Hide()
    {
        _view?.Hide();
    }

    public void Refresh()
    {
        if (_view == null || turnManager == null || uiManager == null) return;

        Player current = turnManager.GetCurrentPlayer();
        TileInfo tile = uiManager.CurrentTileDetails;
        Property prop = tile != null ? tile.property : null;

        var vm = new ManagePropertyViewModel
        {
            playerName = current != null ? current.playerName : "-",
            wallet = current != null ? current.Money : 0,
            propertyName = prop != null ? prop.propertyName : "No property selected",
            groupId = prop != null ? prop.groupId : "-",
            currentRent = prop != null ? prop.CurrentRent : 0,
            houses = prop != null ? prop.houses : 0,
            hasHotel = prop != null && prop.hasHotel,
            isMortgaged = prop != null && prop.isMortgaged,
            canBuild = current != null && prop != null && !prop.isMortgaged && prop.owner == current,
            canSell = current != null && prop != null && prop.owner == current && (prop.houses > 0 || prop.hasHotel),
            canMortgage = current != null && prop != null && prop.owner == current && !prop.isMortgaged,
            canRedeem = current != null && prop != null && prop.owner == current && prop.isMortgaged,
            statusText = BuildStatus(current, prop)
        };

        _view.Render(vm);
    }

    static string BuildStatus(Player current, Property prop)
    {
        if (current == null) return "No active player.";
        if (prop == null) return "Select a property tile.";
        if (prop.owner == null) return "Unowned property.";
        if (prop.owner != current) return $"Owned by {prop.owner.playerName}.";
        if (prop.isMortgaged) return "Property is mortgaged.";
        return "Ready.";
    }

    void OnBuildRequested()
    {
        Player p = turnManager != null ? turnManager.GetCurrentPlayer() : null;
        if (p == null) return;
        p.BuildHouse();
        Refresh();
    }

    void OnSellRequested()
    {
        Player p = turnManager != null ? turnManager.GetCurrentPlayer() : null;
        if (p == null) return;
        p.ShowSellUI();
        Refresh();
    }

    void OnMortgageRequested()
    {
        if (uiManager == null || turnManager == null) return;
        Player p = turnManager.GetCurrentPlayer();
        TileInfo tile = uiManager.CurrentTileDetails;
        if (p == null || tile == null || tile.property == null) return;
        p.MortgageProperty(tile.property);
        Refresh();
    }

    void OnRedeemRequested()
    {
        if (uiManager == null || turnManager == null) return;
        Player p = turnManager.GetCurrentPlayer();
        TileInfo tile = uiManager.CurrentTileDetails;
        if (p == null || tile == null || tile.property == null) return;
        p.RedeemProperty(tile.property);
        Refresh();
    }

    void OnCloseRequested()
    {
        Hide();
    }
}

