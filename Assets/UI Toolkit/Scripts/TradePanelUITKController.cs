using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;

public enum TradeItemType
{
    Property,
    SetCard,
    PerkCard,
    OtherCard
}

public class TradePanelUITKController : MonoBehaviour
{
    public UIDocumentManager uiManager;
    public TradeSystem tradeSystem;
    public int slotsPerPage = 4;

    enum TradeTab
    {
        Properties,
        Cards
    }

    enum TradeSide
    {
        Left,
        Right
    }

    class TradeItemVM
    {
        public string Id;
        public string Title;
        public string Subtitle;
        public Color GroupColor;
        public bool IsMortgaged;
        public TradeItemType Type;
        public Property PropertyRef;
        public PerkCardInstance PerkRef;
    }

    TradeTab _leftTab = TradeTab.Properties;
    TradeTab _rightTab = TradeTab.Properties;
    int _leftPageIndex = 0;
    int _rightPageIndex = 0;
    bool _bound = false;
    bool _suppressMoney = false;

    VisualElement _root;
    Label _tradeTitle;
    Label _tradeStatus;

    Label _leftPlayerName;
    Label _leftPlayerCash;
    Label _rightPlayerName;
    Label _rightPlayerCash;
    VisualElement _leftAvatar;
    VisualElement _rightAvatar;

    VisualElement _leftSlotList;
    VisualElement _rightSlotList;
    List<VisualElement> _leftSlots;
    List<VisualElement> _rightSlots;

    Button _leftPrev;
    Button _leftNext;
    Label _leftPageText;
    Button _rightPrev;
    Button _rightNext;
    Label _rightPageText;

    Button _leftTabProperties;
    Button _leftTabCards;
    Button _rightTabProperties;
    Button _rightTabCards;

    IntegerField _leftCashField;
    IntegerField _rightCashField;

    public void Bind(UIDocumentManager manager, TradeSystem system)
    {
        uiManager = manager;
        tradeSystem = system;
        if (uiManager == null || uiManager.tradePanelDocument == null)
            return;

        _root = uiManager.tradePanelDocument.rootVisualElement;
        if (_root == null) return;

        _tradeTitle = _root.Q<Label>("TradeTitleText");
        _tradeStatus = _root.Q<Label>("TradeStatusText");
        _leftPlayerName = _root.Q<Label>("LeftPlayerName");
        _leftPlayerCash = _root.Q<Label>("LeftPlayerCash");
        _rightPlayerName = _root.Q<Label>("RightPlayerName");
        _rightPlayerCash = _root.Q<Label>("RightPlayerCash");
        _leftAvatar = _root.Q<VisualElement>("LeftAvatar");
        _rightAvatar = _root.Q<VisualElement>("RightAvatar");

        _leftSlotList = _root.Q<VisualElement>("LeftSlotList");
        _rightSlotList = _root.Q<VisualElement>("RightSlotList");
        _leftSlots = _leftSlotList != null ? _leftSlotList.Query<VisualElement>(className: "trade-slot").ToList() : new List<VisualElement>();
        _rightSlots = _rightSlotList != null ? _rightSlotList.Query<VisualElement>(className: "trade-slot").ToList() : new List<VisualElement>();

        _leftPrev = _root.Q<Button>("LeftPrevBtn");
        _leftNext = _root.Q<Button>("LeftNextBtn");
        _leftPageText = _root.Q<Label>("LeftPageText");
        _rightPrev = _root.Q<Button>("RightPrevBtn");
        _rightNext = _root.Q<Button>("RightNextBtn");
        _rightPageText = _root.Q<Label>("RightPageText");

        _leftTabProperties = _root.Q<Button>("LeftTabProperties");
        _leftTabCards = _root.Q<Button>("LeftTabCards");
        _rightTabProperties = _root.Q<Button>("RightTabProperties");
        _rightTabCards = _root.Q<Button>("RightTabCards");

        _leftCashField = _root.Q<IntegerField>("Player1MoneyField");
        _rightCashField = _root.Q<IntegerField>("Player2MoneyField");

        WireSlots(_leftSlots, TradeSide.Left);
        WireSlots(_rightSlots, TradeSide.Right);
        WireTabs();
        WirePager();
        WireCash();

        _bound = true;
    }

    void WireSlots(List<VisualElement> slots, TradeSide side)
    {
        foreach (var slot in slots)
        {
            slot.RegisterCallback<ClickEvent>(_ => OnSlotClicked(slot, side));
        }
    }

    void WireTabs()
    {
        if (_leftTabProperties != null) _leftTabProperties.clicked += () => SetTab(TradeSide.Left, TradeTab.Properties);
        if (_leftTabCards != null) _leftTabCards.clicked += () => SetTab(TradeSide.Left, TradeTab.Cards);
        if (_rightTabProperties != null) _rightTabProperties.clicked += () => SetTab(TradeSide.Right, TradeTab.Properties);
        if (_rightTabCards != null) _rightTabCards.clicked += () => SetTab(TradeSide.Right, TradeTab.Cards);
    }

    void WirePager()
    {
        if (_leftPrev != null) _leftPrev.clicked += () => { _leftPageIndex = Mathf.Max(0, _leftPageIndex - 1); Refresh(); };
        if (_leftNext != null) _leftNext.clicked += () => { _leftPageIndex += 1; Refresh(); };
        if (_rightPrev != null) _rightPrev.clicked += () => { _rightPageIndex = Mathf.Max(0, _rightPageIndex - 1); Refresh(); };
        if (_rightNext != null) _rightNext.clicked += () => { _rightPageIndex += 1; Refresh(); };
    }

    void WireCash()
    {
        if (_leftCashField != null)
        {
            _leftCashField.RegisterValueChangedCallback(evt =>
            {
                if (_suppressMoney || tradeSystem == null) return;
                tradeSystem.SetMoneyOfferPublic(Mathf.Max(0, evt.newValue), true);
            });
        }

        if (_rightCashField != null)
        {
            _rightCashField.RegisterValueChangedCallback(evt =>
            {
                if (_suppressMoney || tradeSystem == null) return;
                tradeSystem.SetMoneyOfferPublic(Mathf.Max(0, evt.newValue), false);
            });
        }
    }

    public void Refresh()
    {
        if (!_bound || tradeSystem == null) return;

        Player left = tradeSystem.InitiatingPlayer;
        Player right = tradeSystem.TargetPlayer;
        bool hasTarget = right != null;
        bool hasOffer = tradeSystem.HasAnyOffer();

        if (_tradeTitle != null && left != null)
            _tradeTitle.text = $"{left.playerName} OFFERS";

        if (_tradeStatus != null)
        {
            if (!hasTarget)
            {
                _tradeStatus.text = "Select a player to trade with.";
            }
            else if (!hasOffer)
            {
                _tradeStatus.text = "You must offer something in exchange.";
            }
            else
            {
                _tradeStatus.text = $"{left?.playerName} is offering a trade to {right?.playerName}";
            }
        }

        if (_leftPlayerName != null) _leftPlayerName.text = left != null ? left.playerName : "Player 1";
        if (_rightPlayerName != null) _rightPlayerName.text = right != null ? right.playerName : "Player 2";
        if (_leftPlayerCash != null) _leftPlayerCash.text = left != null ? $"₦{left.Money:N0}" : "₦0";
        if (_rightPlayerCash != null) _rightPlayerCash.text = right != null ? $"₦{right.Money:N0}" : "₦0";
        ApplyAvatar(_leftAvatar, left);
        ApplyAvatar(_rightAvatar, right);

        // Sync target selection buttons
        if (uiManager != null && uiManager.TradeTargetButtons != null)
        {
            foreach (var child in uiManager.TradeTargetButtons.Children())
            {
                if (child is Button btn)
                {
                    if (right != null && btn.text == right.playerName)
                        btn.AddToClassList("selected");
                    else
                        btn.RemoveFromClassList("selected");
                }
            }
        }

        _suppressMoney = true;
        if (_leftCashField != null) _leftCashField.value = tradeSystem.GetOfferMoney(true);
        if (_rightCashField != null) _rightCashField.value = tradeSystem.GetOfferMoney(false);
        _suppressMoney = false;

        RefreshSide(TradeSide.Left, left, tradeSystem.Player1OfferingProperties, tradeSystem.Player1OfferingCards);
        RefreshSide(TradeSide.Right, right, tradeSystem.Player2OfferingProperties, tradeSystem.Player2OfferingCards);

        UpdateTabVisuals();

        if (uiManager != null && uiManager.TradeOfferButton != null)
            uiManager.TradeOfferButton.SetEnabled(hasTarget && hasOffer);
    }

    void RefreshSide(TradeSide side, Player player, List<Property> offeredProperties, List<PerkCardInstance> offeredCards)
    {
        var list = BuildList(side, player, offeredProperties, offeredCards);
        int perPage = Mathf.Max(1, slotsPerPage);
        int totalPages = Mathf.Max(1, Mathf.CeilToInt(list.Count / (float)perPage));
        if (side == TradeSide.Left)
            _leftPageIndex = Mathf.Clamp(_leftPageIndex, 0, totalPages - 1);
        else
            _rightPageIndex = Mathf.Clamp(_rightPageIndex, 0, totalPages - 1);

        int pageIndex = side == TradeSide.Left ? _leftPageIndex : _rightPageIndex;
        var slots = side == TradeSide.Left ? _leftSlots : _rightSlots;
        for (int i = 0; i < slots.Count; i++)
        {
            if (i >= perPage)
            {
                slots[i].style.display = DisplayStyle.None;
                continue;
            }
            slots[i].style.display = DisplayStyle.Flex;
            int idx = pageIndex * perPage + i;
            TradeItemVM item = idx < list.Count ? list[idx] : null;
            BindSlot(slots[i], item, offeredProperties, offeredCards);
        }

        if (side == TradeSide.Left)
        {
            if (_leftPageText != null) _leftPageText.text = $"{pageIndex + 1} / {totalPages}";
            if (_leftPrev != null) _leftPrev.SetEnabled(pageIndex > 0);
            if (_leftNext != null) _leftNext.SetEnabled(pageIndex < totalPages - 1);
        }
        else
        {
            if (_rightPageText != null) _rightPageText.text = $"{pageIndex + 1} / {totalPages}";
            if (_rightPrev != null) _rightPrev.SetEnabled(pageIndex > 0);
            if (_rightNext != null) _rightNext.SetEnabled(pageIndex < totalPages - 1);
        }
    }

    List<TradeItemVM> BuildList(TradeSide side, Player player, List<Property> offeredProperties, List<PerkCardInstance> offeredCards)
    {
        var items = new List<TradeItemVM>();
        if (player == null || tradeSystem == null) return items;

        TradeTab tab = side == TradeSide.Left ? _leftTab : _rightTab;
        bool wantProps = tab == TradeTab.Properties;
        bool wantCards = tab == TradeTab.Cards;

        if (wantProps)
        {
            var props = tradeSystem.GetTradeablePropertiesPublic(player);
            var sortedProps = props
                .OrderBy(p => GetGroupSortKey(p != null ? p.groupId : ""))
                .ThenBy(p => p != null ? p.propertyName : "");
            foreach (var prop in sortedProps)
            {
                items.Add(new TradeItemVM
                {
                    Id = prop.propertyName,
                    Title = prop.propertyName,
                    Subtitle = $"₦{prop.price:N0}",
                    GroupColor = tradeSystem.GetPropertyGroupColorPublic(prop),
                    IsMortgaged = prop.isMortgaged,
                    Type = TradeItemType.Property,
                    PropertyRef = prop
                });
            }
        }

        if (wantCards)
        {
            if (player.perkCards != null)
            {
                foreach (var card in player.perkCards)
                {
                    if (card == null) continue;
                    items.Add(new TradeItemVM
                    {
                        Id = card.name,
                        Title = card.name,
                        Subtitle = "CARD",
                        GroupColor = Color.clear,
                        IsMortgaged = false,
                        Type = TradeItemType.PerkCard,
                        PerkRef = card
                    });
                }
            }
        }

        return items;
    }

    void BindSlot(VisualElement slot, TradeItemVM item, List<Property> offeredProperties, List<PerkCardInstance> offeredCards)
    {
        var check = slot.Q<VisualElement>("SlotCheck");
        var icon = slot.Q<VisualElement>("SlotIcon");
        var strip = slot.Q<VisualElement>("SlotColor");
        var title = slot.Q<Label>("SlotTitle");
        var subtitle = slot.Q<Label>("SlotSubtitle");
        var badge = slot.Q<Label>("SlotBadge");

        slot.userData = item;

        if (item == null)
        {
            slot.AddToClassList("is-empty");
            slot.RemoveFromClassList("is-selected");
            slot.RemoveFromClassList("is-mortgaged");
            if (title != null) title.text = "";
            if (subtitle != null) subtitle.text = "";
            if (badge != null) badge.text = "";
            if (strip != null) strip.style.backgroundColor = Color.clear;
            if (icon != null)
            {
                icon.RemoveFromClassList("icon-regular");
                icon.RemoveFromClassList("icon-utility");
                icon.RemoveFromClassList("icon-transportation");
                icon.RemoveFromClassList("icon-card");
            }
            return;
        }

        slot.style.display = DisplayStyle.Flex;
        slot.RemoveFromClassList("is-empty");
        if (title != null) title.text = item.Title;
        if (subtitle != null) subtitle.text = item.Subtitle;
        if (strip != null) strip.style.backgroundColor = item.GroupColor;

        bool isSelected = false;
        if (item.Type == TradeItemType.Property && item.PropertyRef != null)
            isSelected = offeredProperties.Contains(item.PropertyRef);
        if (item.Type == TradeItemType.PerkCard && item.PerkRef != null)
            isSelected = offeredCards.Contains(item.PerkRef);

        if (isSelected) slot.AddToClassList("is-selected");
        else slot.RemoveFromClassList("is-selected");

        if (item.IsMortgaged) slot.AddToClassList("is-mortgaged");
        else slot.RemoveFromClassList("is-mortgaged");

        if (icon != null)
        {
            icon.RemoveFromClassList("icon-regular");
            icon.RemoveFromClassList("icon-utility");
            icon.RemoveFromClassList("icon-transportation");
            icon.RemoveFromClassList("icon-card");
            if (item.Type == TradeItemType.Property && item.PropertyRef != null)
            {
                switch (item.PropertyRef.propertyType)
                {
                    case PropertyType.Utility:
                        icon.AddToClassList("icon-utility");
                        break;
                    case PropertyType.Transportation:
                        icon.AddToClassList("icon-transportation");
                        break;
                    default:
                        icon.AddToClassList("icon-regular");
                        break;
                }
            }
            else
            {
                icon.AddToClassList("icon-card");
            }
        }
    }

    void OnSlotClicked(VisualElement slot, TradeSide side)
    {
        if (tradeSystem == null) return;
        var item = slot.userData as TradeItemVM;
        if (item == null) return;

        bool isInitiator = side == TradeSide.Left;
        if (item.Type == TradeItemType.Property && item.PropertyRef != null)
        {
            tradeSystem.TogglePropertyOffer(item.PropertyRef, isInitiator);
        }
        else if (item.Type == TradeItemType.PerkCard && item.PerkRef != null)
        {
            tradeSystem.ToggleCardOffer(item.PerkRef, isInitiator);
        }
    }

    void SetTab(TradeSide side, TradeTab tab)
    {
        if (side == TradeSide.Left)
        {
            _leftTab = tab;
            _leftPageIndex = 0;
        }
        else
        {
            _rightTab = tab;
            _rightPageIndex = 0;
        }
        Refresh();
    }

    void UpdateTabVisuals()
    {
        SetTabClass(_leftTabProperties, _leftTab == TradeTab.Properties);
        SetTabClass(_leftTabCards, _leftTab == TradeTab.Cards);

        SetTabClass(_rightTabProperties, _rightTab == TradeTab.Properties);
        SetTabClass(_rightTabCards, _rightTab == TradeTab.Cards);
    }

    void SetTabClass(Button btn, bool isActive)
    {
        if (btn == null) return;
        if (isActive) btn.AddToClassList("is-active");
        else btn.RemoveFromClassList("is-active");
    }

    static int GetGroupSortKey(string groupIdRaw)
    {
        if (string.IsNullOrWhiteSpace(groupIdRaw)) return 999;
        string key = groupIdRaw.Trim().ToUpperInvariant().Replace(" ", "").Replace("_", "").Replace("-", "");
        switch (key)
        {
            case "G1": return 1;
            case "G2": return 2;
            case "G3": return 3;
            case "G4": return 4;
            case "G5": return 5;
            case "G6": return 6;
            case "G7": return 7;
            case "G8": return 8;
            case "G9": return 9;
            case "G10": return 10;
            case "UTILITY": return 90;
            case "TRANSPORTATION": return 91;
            default: return 999;
        }
    }

    void ApplyAvatar(VisualElement avatar, Player player)
    {
        if (avatar == null) return;
        if (player == null)
        {
            avatar.style.backgroundImage = StyleKeyword.None;
            avatar.style.backgroundColor = new StyleColor(new Color(0.2f, 0.2f, 0.2f, 1f));
            return;
        }

        Sprite tokenSprite = null;
        if (PlayerVisualManager.Instance != null)
            tokenSprite = PlayerVisualManager.Instance.GetTokenSprite(player.tokenSpriteIndex);

        if (tokenSprite != null)
        {
            Texture2D tex = SpriteToTexture2D(tokenSprite);
            if (tex != null)
            {
                avatar.style.backgroundImage = new StyleBackground(tex);
                avatar.style.backgroundSize = new StyleBackgroundSize(new BackgroundSize(BackgroundSizeType.Contain));
                avatar.style.backgroundRepeat = new StyleBackgroundRepeat(new BackgroundRepeat(Repeat.NoRepeat, Repeat.NoRepeat));
                avatar.style.backgroundPositionX = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
                avatar.style.backgroundPositionY = new StyleBackgroundPosition(new BackgroundPosition(BackgroundPositionKeyword.Center));
                avatar.style.backgroundColor = new StyleColor(Color.white);
                return;
            }
        }

        avatar.style.backgroundImage = StyleKeyword.None;
        avatar.style.backgroundColor = player.playerColor;
    }

    static Texture2D SpriteToTexture2D(Sprite sprite)
    {
        if (sprite == null) return null;
        Texture2D sourceTexture = sprite.texture;
        if (sourceTexture == null) return null;
        try
        {
            if (!sourceTexture.isReadable)
                return sourceTexture;
            Rect r = sprite.textureRect;
            Texture2D tex = new Texture2D((int)r.width, (int)r.height, TextureFormat.RGBA32, false);
            Color[] pixels = sourceTexture.GetPixels((int)r.x, (int)r.y, (int)r.width, (int)r.height);
            tex.SetPixels(pixels);
            tex.Apply();
            return tex;
        }
        catch
        {
            return null;
        }
    }
}
