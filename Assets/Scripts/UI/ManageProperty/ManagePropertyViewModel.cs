using System;

[Serializable]
public sealed class ManagePropertyViewModel
{
    public string playerName;
    public int wallet;
    public string propertyName;
    public string groupId;
    public int currentRent;
    public int houses;
    public bool hasHotel;
    public bool isMortgaged;

    public bool canBuild;
    public bool canSell;
    public bool canMortgage;
    public bool canRedeem;

    public string statusText;
}

