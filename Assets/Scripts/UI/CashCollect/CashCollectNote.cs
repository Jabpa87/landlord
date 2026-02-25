using UnityEngine;
using UnityEngine.UI;

public class CashCollectNote : MonoBehaviour
{
    [SerializeField] private Image noteImage;
    private RectTransform _rect;

    public RectTransform Rect
    {
        get
        {
            if (_rect == null) _rect = GetComponent<RectTransform>();
            return _rect;
        }
    }

    public void Setup(Sprite sprite)
    {
        if (noteImage == null) noteImage = GetComponent<Image>();
        if (noteImage != null && sprite != null) noteImage.sprite = sprite;
    }

    public void SetColor(Color color)
    {
        if (noteImage == null) noteImage = GetComponent<Image>();
        if (noteImage != null) noteImage.color = color;
    }
}
