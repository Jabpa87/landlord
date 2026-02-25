using System.Collections.Generic;
using UnityEngine;

public class CashCollectPool : MonoBehaviour
{
    [SerializeField] private CashCollectNote notePrefab;
    [SerializeField] private RectTransform notesParent;
    [SerializeField] private int prewarmCount = 16;

    private readonly Queue<CashCollectNote> _pool = new Queue<CashCollectNote>();

    public void Initialize(CashCollectNote prefab, RectTransform parent, int prewarm)
    {
        notePrefab = prefab;
        notesParent = parent;
        prewarmCount = Mathf.Max(0, prewarm);
        Prewarm();
    }

    void Prewarm()
    {
        if (notePrefab == null || notesParent == null) return;
        while (_pool.Count < prewarmCount)
        {
            CashCollectNote n = Instantiate(notePrefab, notesParent);
            n.gameObject.SetActive(false);
            _pool.Enqueue(n);
        }
    }

    public CashCollectNote Get()
    {
        if (notePrefab == null || notesParent == null) return null;
        if (_pool.Count == 0)
        {
            CashCollectNote n = Instantiate(notePrefab, notesParent);
            n.gameObject.SetActive(false);
            _pool.Enqueue(n);
        }
        CashCollectNote note = _pool.Dequeue();
        note.transform.SetParent(notesParent, false);
        note.gameObject.SetActive(true);
        return note;
    }

    public void Release(CashCollectNote note)
    {
        if (note == null) return;
        note.gameObject.SetActive(false);
        _pool.Enqueue(note);
    }
}
