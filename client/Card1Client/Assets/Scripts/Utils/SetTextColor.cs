using UnityEngine;
using System.Collections;

public class SetTextColor : MonoBehaviour
{

    private UIToggle toggle;
    private UILabel label;
    void Awake()
    {
        toggle = this.GetComponentInParent<UIToggle>();
        label = this.GetComponent<UILabel>();
    }
    void Start()
    {
        SetColor();
    }

    // Update is called once per frame
    void Update()
    {
        SetColor();
    }

    void SetColor()
    {
        if (toggle == null || label == null)
            return;
        if (toggle.value)
            label.color = Color.black;
        else
            label.color = Color.white;
    }
    void OnDestroy()
    {
        toggle = null;
        label = null;
    }
}
