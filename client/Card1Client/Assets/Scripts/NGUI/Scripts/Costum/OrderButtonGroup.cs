using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 指令模式
/// </summary>
public enum OrderMode
{
    Radial180,
    Radial360,
}

/// <summary>
/// 指令按钮组
/// 20151222
/// zhangrj
/// </summary>
public class OrderButtonGroup : MonoBehaviour 
{
    public System.Action<string> callback;

    public OrderMode mode = OrderMode.Radial360;

    public float offest;

    private bool bInit = false;

    private Vector3 point = Vector3.zero;

    private Vector3 size;

    private int len = 0;

    private List<OrderButton> orders = new List<OrderButton>();

    public GameObject root;

    public GameObject rotationObj;

    private BoxCollider col;

    private bool bShow;

    private Vector3 rotation=Vector3.zero;

    private Camera uiCamera = null;

    void Awake()
    {
        bInit = false;
    }

    void OnDisable()
    {
        bInit = false;
    }

    void OnEnable()
    {
        OnInit();
    }

    void OnDestory()
    {
        callback = null;
        if (orders != null)
            orders.Clear();
        col = null;
        root = null;
        OrderButton.Current = null;
    }

    private void OnInit()
    {
        bInit = true;
        bShow = false;
        col = GetComponent<BoxCollider>();

        GameObject CameraObj = GameObject.FindGameObjectWithTag("UICamera");
        if (CameraObj != null)
        {
            uiCamera = CameraObj.GetComponent<Camera>();
        }

        size = col != null ? col.size : new Vector3(20, 20);

        orders.Clear();
        OrderButton[] buttons = GetComponentsInChildren<OrderButton>(true);
        if (buttons != null)
        {
            orders = new List<OrderButton>(buttons);
            len = orders.Count;
        }

        if (orders != null)
        {
            orders.Sort(SortByName);
        }

        if (root != null)
            root.SetActive(false);

        if (rotationObj != null)
            rotationObj.SetActive(false);
    }

    static public int SortByName(OrderButton a, OrderButton b) { return string.Compare(a.name, b.name); }

    void Update()
    {
        if (!bInit) return;
        if (Input.GetMouseButtonDown(0))
        {
            if (ClickOrderGameObject(Input.mousePosition))
            {
                if (root != null)
                {
                    root.SetActive(true);
                    bShow = true;
                }
                if (rotationObj != null)
                {
                    rotationObj.SetActive(true);
                }
            }
        }
        else if (Input.GetMouseButton(0))
        {
            if (!bShow) return;
            if (ClickOrderGameObject(Input.mousePosition))
            {
                if (OrderButton.Current != null)
                    OrderButton.Current.SetState(UIButtonColor.State.Normal, false);
            }
            else
            {
                int index = GetOrderIndex(Input.mousePosition);
                if (index < 0)
                {
                    if (OrderButton.Current != null)
                        OrderButton.Current.SetState(UIButtonColor.State.Normal, false);
                }
                else
                {
                    if (index < len)
                    {
                        if (OrderButton.Current != null)
                            OrderButton.Current.SetState(UIButtonColor.State.Normal, false);
                        OrderButton.Current = orders[index];
                        OrderButton.Current.SetState(UIButtonColor.State.Hover, false);
                    }
                }
                if (rotationObj != null)
                {
                    rotation.z = GetAngle(Input.mousePosition);
                    rotationObj.transform.localEulerAngles = rotation;
                }
            } 
        }
        else if (Input.GetMouseButtonUp(0))
        {
            if (!bShow) return;
            if (!ClickOrderGameObject(Input.mousePosition))
            {
                int index = GetOrderIndex(Input.mousePosition);
                if (index >= 0)
                {
                    if (index < len)
                    {
                        if (OrderButton.Current != null)
                            OrderButton.Current.SetState(UIButtonColor.State.Normal, false);
                        OrderButton.Current = orders[index];
                        OrderButton.Current.SetState(UIButtonColor.State.Normal, false);
                        if (callback != null)
                            callback(OrderButton.Current.Text);
                    }
                }
            }
            if (root != null)
            {
                root.SetActive(false);
            }
            if (rotationObj != null)
            {
                rotationObj.SetActive(false);
            }
            bShow = false;
        }
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="position"></param>
    /// <returns></returns>
    bool ClickOrderGameObject(Vector3 position)
    {
        if (uiCamera != null)
            position = uiCamera.ScreenToWorldPoint(position);
        else
            return false;
        point = transform.InverseTransformPoint(position);
        if (point.x >= -size.x * 0.5f && point.x <= size.x * 0.5f)
        {
            if (point.y >= -size.y * 0.5f && point.y <= size.y * 0.5f)
            {
                return true;
            }
        }
        return false;
    }

    float  GetAngle(Vector3 position)
    {
        if (uiCamera != null)
            position = uiCamera.ScreenToWorldPoint(position);
        else
            return 0.0f;
        point = transform.InverseTransformPoint(position);
        point.z = 0;
        float angle = Vector3.Angle(Vector3.left, point);

        if (point.y < 0)
        {
            angle = 360 - angle;
        }

        angle += 360;
        angle = angle % 360;

        angle -= offest;
        angle = -angle;

        //if (angle > 0)
        //{
        //    if (angle < 90)
        //        angle = 0;
        //    else
        //        angle = 180;
        //}

        return angle;
    }

    /// <summary>
    /// 获取指令索引
    /// </summary>
    /// <param name="position"></param>
    /// <returns></returns>
    int GetOrderIndex(Vector3 position)
    {
        if (len <= 0)
            return -1;
        if (uiCamera != null)
            position = uiCamera.ScreenToWorldPoint(position);
        else
            return -1;
        point = transform.InverseTransformPoint(position);
        point.z = 0;
        float angle = Vector3.Angle(Vector3.left, point);
        if (point.y < 0)
        {
            angle = 360 - angle;
        }

        angle += 360;
        angle = angle % 360;

        if (mode == OrderMode.Radial180)
        {
            float f = 180;
            f = 180 / (len - 1);
            if (angle > 180)
            {
                if (angle <= (180 + f / 2))
                    return len - 1;
                else if (angle > (360 - f / 2))
                    return 0;
                else
                    return -1;
            }
            else
            {
                f = angle / f;
                return Mathf.RoundToInt(f);
            }
        }
        else
        {
            float f = 360;
            f = 360 / len;
            f = angle / f;
            return Mathf.RoundToInt(f);
        }
    }
}
