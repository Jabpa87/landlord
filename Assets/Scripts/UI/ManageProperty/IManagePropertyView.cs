using System;

public interface IManagePropertyView
{
    event Action BuildRequested;
    event Action SellRequested;
    event Action MortgageRequested;
    event Action RedeemRequested;
    event Action CloseRequested;

    void Show();
    void Hide();
    void Render(ManagePropertyViewModel model);
}

