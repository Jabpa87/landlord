using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;

/// <summary>
/// Bridge types for Hybrid Main HUD: same API whether backed by UI Toolkit or uGUI.
/// UIDocumentManager uses these so TurnManager, Player, etc. work with either system.
/// </summary>
public class HUDButton
{
    public event Action Clicked;

    private readonly UnityEngine.UI.Button _uiButton;
    private readonly UnityEngine.UIElements.Button _uitkButton;

    private HUDButton(UnityEngine.UI.Button uiButton, UnityEngine.UIElements.Button uitkButton)
    {
        _uiButton = uiButton;
        _uitkButton = uitkButton;
    }

    public bool Enabled
    {
        get => _uiButton != null ? _uiButton.interactable : (_uitkButton != null && _uitkButton.enabledInHierarchy);
        set
        {
            if (_uiButton != null) _uiButton.interactable = value;
            else if (_uitkButton != null) _uitkButton.SetEnabled(value);
        }
    }

    public string Text
    {
        get => _uiButton != null ? (_uiButton.GetComponentInChildren<TMP_Text>()?.text ?? _uiButton.GetComponentInChildren<Text>()?.text ?? "") : (_uitkButton?.text ?? "");
        set
        {
            if (_uiButton != null)
            {
                var tmp = _uiButton.GetComponentInChildren<TMP_Text>();
                if (tmp != null) tmp.text = value;
                else
                {
                    var leg = _uiButton.GetComponentInChildren<Text>();
                    if (leg != null) leg.text = value;
                }
            }
            else if (_uitkButton != null) _uitkButton.text = value;
        }
    }

    public static HUDButton FromUGUI(UnityEngine.UI.Button button)
    {
        if (button == null) return null;
        var b = new HUDButton(button, null);
        button.onClick.AddListener(() => b.Clicked?.Invoke());
        return b;
    }

    public static HUDButton FromUIToolkit(UnityEngine.UIElements.Button button)
    {
        if (button == null) return null;
        var b = new HUDButton(null, button);
        button.clicked += () => b.Clicked?.Invoke();
        return b;
    }

    public void SetEnabled(bool enabled) => Enabled = enabled;
}

public class HUDLabel
{
    private readonly TMP_Text _tmp;
    private readonly Text _legacyText;
    private readonly Label _uitkLabel;
    private readonly GameObject _gameObjectForVisibility;

    private HUDLabel(TMP_Text tmp, Text legacyText, Label uitkLabel, GameObject gameObjectForVisibility)
    {
        _tmp = tmp;
        _legacyText = legacyText;
        _uitkLabel = uitkLabel;
        _gameObjectForVisibility = gameObjectForVisibility;
    }

    public string Text
    {
        get => _tmp != null ? _tmp.text : (_legacyText != null ? _legacyText.text : (_uitkLabel?.text ?? ""));
        set
        {
            if (_tmp != null) _tmp.text = value;
            else if (_legacyText != null) _legacyText.text = value;
            else if (_uitkLabel != null) _uitkLabel.text = value;
        }
    }

    public static HUDLabel FromUGUI(TMP_Text tmp)
    {
        if (tmp == null) return null;
        return new HUDLabel(tmp, null, null, tmp.gameObject);
    }

    public static HUDLabel FromUGUI(Text text)
    {
        if (text == null) return null;
        return new HUDLabel(null, text, null, text.gameObject);
    }

    public static HUDLabel FromUIToolkit(Label label)
    {
        if (label == null) return null;
        return new HUDLabel(null, null, label, null);
    }

    public void SetVisible(bool visible)
    {
        if (_gameObjectForVisibility != null)
            _gameObjectForVisibility.SetActive(visible);
        else if (_uitkLabel != null)
            _uitkLabel.style.display = visible ? DisplayStyle.Flex : DisplayStyle.None;
    }
}
