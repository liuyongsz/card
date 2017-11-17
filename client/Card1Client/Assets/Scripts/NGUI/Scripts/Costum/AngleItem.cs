using UnityEngine;
using System.Collections;

public class AngleItem : MonoBehaviour
{
    private float MAXDISTANCE;

    private UIPanel panel;

    private AngleScrollView scrollView;

    private object data;

    private static int MaxDepth = 0;

    /// <summary>
    /// 当前选中的SecretItem
    /// </summary>
    public static object SelectSecretItem;

    /// <summary>
    /// 临时保存SecretItem
    /// </summary>
    private static object TempSecretItem;

	// Use this for initialization
	void Start () 
    {
        scrollView = NGUITools.FindInParents<AngleScrollView>(gameObject);
        panel = transform.GetComponent<UIPanel>();

        MAXDISTANCE = scrollView.panel.width / 2;
	}

	// Update is called once per frame
    void Update()
    {
        Vector3 vec = Vector3.zero;         //取消 z轴来计算距离 否则界面上有z轴 会影响距离结果
        vec.x = transform.position.x;
        vec.y = transform.position.y;
        Vector3 position = UICamera.currentCamera.transform.InverseTransformPoint(vec);

        float distance = Vector3.Distance(position, Vector3.zero);
        float scale = GetParabola(distance);
        transform.localScale = Vector3.one * scale;

        int depth = Mathf.RoundToInt(scale * 10) + scrollView.panel.depth;
        panel.depth = depth;
        panel.alpha = Mathf.Pow(scale, 2) * 1.2f;

        int max = Mathf.Max(MaxDepth, depth);
        if (max > MaxDepth)
        {
            MaxDepth = max;
            TempSecretItem = data;
        }
    }

    void LateUpdate()
    {
        if (TempSecretItem != null)
        {
            SelectSecretItem = TempSecretItem;
            TempSecretItem = null;
            MaxDepth = 0;
        }
    }

    public void SetSecretItem(object data)
    {
        this.data = data;
    }

    private float GetParabola(float x)
    {
        float step = 1.0f / MAXDISTANCE;
        float abs = Mathf.Max(MAXDISTANCE - Mathf.Abs(x), 0);
        return Mathf.Sqrt(abs * step);
    }
}
