using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System;

public class GUIDrag : MonoBehaviour, IDragHandler
{
    public GameObject Target = null;
    RectTransform _mTransform;
    Vector3 _localPosition;
    
    void Start()
    {
        _mTransform = Target.GetComponent<RectTransform>();
        _mTransform.pivot = new Vector2(0f, 0f);
        _localPosition = _mTransform.localPosition;
        _mTransform.localPosition = _localPosition + new Vector3(-_mTransform.sizeDelta.x * 0.5f, -_mTransform.sizeDelta.y * 0.5f, 0);
    }

    public void OnDrag(PointerEventData eventData)
    {
        //_mTransform.SetAsLastSibling();
        _mTransform.position += new Vector3(eventData.delta.x, eventData.delta.y);
        _mTransform.position = new Vector3
            (
            Mathf.Min(Screen.width - _mTransform.sizeDelta.x, Mathf.Max(0f, _mTransform.position.x)),
            Mathf.Min(Screen.height - _mTransform.sizeDelta.y, Mathf.Max(0f, _mTransform.position.y)),
            _mTransform.position.z
            );
    }
}
