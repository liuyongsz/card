using System.Collections.Generic;
using UnityEngine;
using System.Collections;

public class JoyStickControlor : MonoBehaviour
{
    [HideInInspector]
    public KeyCode KeyCode_X = KeyCode.JoystickButton2;
    [HideInInspector]
    public KeyCode KeyCode_Y = KeyCode.JoystickButton3;
    [HideInInspector]
    public KeyCode KeyCode_A = KeyCode.JoystickButton0;
    [HideInInspector]
    public KeyCode KeyCode_B = KeyCode.JoystickButton1;
    [HideInInspector]
    public KeyCode KeyCode_R1 = KeyCode.JoystickButton5;
    [HideInInspector]
    public KeyCode KeyCode_L1 = KeyCode.JoystickButton4;
    [HideInInspector]
    public KeyCode KeyCode_Left = KeyCode.LeftArrow;
    [HideInInspector]
    public KeyCode KeyCode_Right = KeyCode.RightArrow;
    [HideInInspector]
    public KeyCode KeyCode_Up = KeyCode.UpArrow;
    [HideInInspector]
    public KeyCode KeyCode_Down = KeyCode.DownArrow;
    [HideInInspector]
    public KeyCode KeyCode_Q = KeyCode.Q;

    /// <summary>
    /// 按键值
    /// </summary>
    public enum StickButtonCode
    {
        None,
        A,                                              //日键(A)/
        B,                                              //月键(B)/
        XUp,                                            //山键(X)抬起/
        XDown,                                          //山键(X)按下/
        Y,                                              //水键(Y)/
        L1,
        R1,
        L1_X,
        L1_Y,
        L1_A,
        R1_X,
        R1_Y,
        R1_A,
        L1_R1,
        LeftArrow,                                      //左方向键/
        RightArrow,                                     //右方向键/
        UpArrow,                                        //上方向键/
        DownArrow,                                      //下方向键/
        Both,                                               //额外操作Code/
        Q,
    }

    /// <summary>
    /// UI选择状态/
    /// </summary>
    public enum UIMouseStatus
    {
        MouseHide,                                      //鼠标隐藏状态/
        MouseActive,                                   //鼠标显示状态/
    }

    public delegate void OnInputCode(StickButtonCode code);
    private List<OnInputCode> inputListeners = new List<OnInputCode>();

    private List<StickButtonCode> codeList = new List<StickButtonCode>();
    UIMouseStatus _mouseStatus = UIMouseStatus.MouseHide;

    public UIMouseStatus MoustStatus
    {
        get
        {
            return _mouseStatus;
        }
        set
        {
            _mouseStatus = value;
        }
    }

    public Vector3 MousePositon
    {
        get
        {
            if (mouseTrans != null)
            {
                Camera camera = UICamera.currentCamera;
                Vector3 screenPos = camera.WorldToScreenPoint(mouseTrans.position);
                return screenPos;
            }
            return Vector3.zero;
        }
    }

    private int detecFrameInterval = 1;
    private int beforeDownFrame = 0;
    private int mouseMoveSpeed = 2;

    private GameObject mouseObj;
    private Transform mouseTrans;
    private Camera uicamera;

    static JoyStickControlor instance;
    public static JoyStickControlor GetInstance()
    {
        if (instance == null)
        {
            GameObject cameraObj = GameObject.FindGameObjectWithTag("UICamera");
            if (cameraObj != null)
            {
                instance = cameraObj.GetComponent<JoyStickControlor>();
                if (instance == null)
                {
                    instance = cameraObj.AddComponent<JoyStickControlor>();
                    instance.uicamera = cameraObj.GetComponent<Camera>();
                }
            }
        }
        return instance;
    }

    void Awake()
    {
        Instance.Set<JoyStickControlor>(this);
    }

    void Start()
    {
        CreateMouseObj();
    }

    private void CreateMouseObj()
    {
        string strFileName = "Prefabs/UI/MousePanel";

        //string strFile = strFileName.ToLower();
        DelegateProxy.LoadAsset(strFileName, OnPrefabLoaded);
    }

    void OnPrefabLoaded(params object[] param)
    {
        Object prefab = param[0] as Object;
        if (prefab != null && uicamera != null)
        {
            mouseObj = GameObject.Instantiate(prefab) as GameObject;
            mouseObj.SetActive(false);
            mouseObj.name = "Mouse";
            mouseTrans = mouseObj.transform;
            mouseTrans.parent = uicamera.transform;
            mouseTrans.localScale = Vector3.one;
            mouseTrans.localPosition = Vector3.zero;

            UIPanel panel = mouseTrans.GetComponent<UIPanel>();
            panel.depth = 2000;
        }
        DelegateProxy.UnloadAsset(param);
    }

    void Update()
    {
        int nowFrameCount = Time.frameCount;
        if (nowFrameCount > beforeDownFrame + detecFrameInterval && codeList.Count > 0)
        {
            //大于时间间隔，派发上一次的code事件/
            for (int i = 0; i < codeList.Count; i++)
            {
                StickCodeHandle(codeList[i]);
            }
            beforeDownFrame = nowFrameCount;
            codeList.Clear();
        }

        StickButtonCode tempStickCode = StickButtonCode.None;
        if (Input.GetKeyUp(KeyCode_A))
        {
            tempStickCode = StickButtonCode.A;
            CacheCode(tempStickCode);
        }

        if (Input.GetKeyUp(KeyCode_B))
        {
            tempStickCode = StickButtonCode.B;
            CacheCode(tempStickCode);
        }

        if (Input.GetKeyUp(KeyCode_X))
        {
            tempStickCode = StickButtonCode.XUp;
            CacheCode(tempStickCode);
        }

        if (Input.GetKeyDown(KeyCode_X))
        {
            tempStickCode = StickButtonCode.XDown;
            CacheCode(tempStickCode);
        }

        if (Input.GetKeyUp(KeyCode_Y))
        {
            tempStickCode = StickButtonCode.Y;
            CacheCode(tempStickCode);
        }

        if (Input.GetKeyUp(KeyCode_L1))
        {
            tempStickCode = StickButtonCode.L1;
            CacheCode(tempStickCode);
        }

        if (Input.GetKeyUp(KeyCode_R1))
        {
            tempStickCode = StickButtonCode.R1;
            CacheCode(tempStickCode);
        }


        if (Input.GetKeyDown(KeyCode_Q))
        {
            tempStickCode = StickButtonCode.Q;
            CacheCode(tempStickCode);
        }

        //         if (Input.GetAxis("joy_vertical") != 0.0f || Input.GetAxis("joy_horizontal") != 0.0f || Input.GetAxis("dpad_vertical") != 0.0f || Input.GetAxis("dpad_horizontal") != 0.0f)
        //         {
        //             MouseMove();
        //         }

        if (_mouseStatus == UIMouseStatus.MouseActive)
        {
            //UI选中状态属于呼出状态，只响应确认键和方向键，暂时不处理组合键的情况/
            if (Input.GetKey(KeyCode_X) || Input.GetKeyUp(KeyCode_X) || Input.GetKeyDown(KeyCode_X) || Input.GetKeyUp(KeyCode_B))
            {
                //不处理任何code，UICamera处理KeyCode_X的状态/
                StickCodeHandle(tempStickCode);
                codeList.Clear();
            }
            return;
        }

        if (codeList.Count == 2)
        {
            //如果缓存列表中的按键个数已经达到组合键最大个数，处理按键事件/
            StickButtonCode code1 = codeList[0];
            StickButtonCode code2 = codeList[1];
            if (code1 != code2)
            {
                StickButtonCode groupCode = CheckIsGroupCode(code1, code2);
                if (groupCode == StickButtonCode.Both)
                {
                    StickCodeHandle(code2);
                    StickCodeHandle(code1);
                }
                else
                {
                    if (groupCode != StickButtonCode.None)
                    {
                        StickCodeHandle(groupCode);
                    }
                }
            }
            codeList.Clear();
        }
        else
        {
            if (tempStickCode != StickButtonCode.None)
            {
                //如果没有达到个数，稍作延迟处理，防止用户点击的非同时性/
                beforeDownFrame = nowFrameCount;
            }
        }
    }

    private void CacheCode(StickButtonCode code)
    {
        //只处理两个以下按键的组合键/
        if (codeList.Count < 3)
        {
            codeList.Add(code);
        }
    }

    /// <summary>
    /// 检查是否是组合键
    /// </summary>
    /// <param name="code1"></param>
    /// <param name="code2"></param>
    /// <returns></returns>
    private StickButtonCode CheckIsGroupCode(StickButtonCode code1, StickButtonCode code2)
    {
        if (code1 == code2)
        {
            return StickButtonCode.None;
        }
        else
        {
            if (code1 == StickButtonCode.A)
            {
                if (code2 == StickButtonCode.L1)
                {
                    return StickButtonCode.L1_A;
                }
                else if (code2 == StickButtonCode.R1)
                {
                    return StickButtonCode.R1_A;
                }
            }
            else if (code1 == StickButtonCode.XUp)
            {
                if (code2 == StickButtonCode.L1)
                {
                    return StickButtonCode.L1_X;
                }
                else if (code2 == StickButtonCode.R1)
                {
                    return StickButtonCode.R1_X;
                }
            }
            else if (code1 == StickButtonCode.Y)
            {
                if (code2 == StickButtonCode.L1)
                {
                    return StickButtonCode.L1_Y;
                }
                else if (code2 == StickButtonCode.R1)
                {
                    return StickButtonCode.R1_Y;
                }
            }
            else if (code1 == StickButtonCode.L1)
            {
                if (code2 == StickButtonCode.A)
                {
                    return StickButtonCode.L1_A;
                }
                else if (code2 == StickButtonCode.XUp)
                {
                    return StickButtonCode.L1_X;
                }
                else if (code2 == StickButtonCode.Y)
                {
                    return StickButtonCode.L1_Y;
                }
                else if (code2 == StickButtonCode.R1)
                {
                    return StickButtonCode.L1_R1;
                }
            }
            else if (code1 == StickButtonCode.R1)
            {
                if (code2 == StickButtonCode.A)
                {
                    return StickButtonCode.R1_A;
                }
                else if (code2 == StickButtonCode.XUp)
                {
                    return StickButtonCode.R1_X;
                }
                else if (code2 == StickButtonCode.Y)
                {
                    return StickButtonCode.R1_Y;
                }
                else if (code2 == StickButtonCode.L1)
                {
                    return StickButtonCode.L1_R1;
                }
            }
        }

        return StickButtonCode.Both;
    }

    /// <summary>
    /// 输入code处理/
    /// </summary>
    private void StickCodeHandle(StickButtonCode code)
    {
        if (code == StickButtonCode.L1_R1)
        {
            //呼出或者隐藏光标键
            HideOrShowMouse(true);
        }
        else if (code == StickButtonCode.B)
        {
            HideOrShowMouse(false);
        }

        if (_mouseStatus == UIMouseStatus.MouseHide)
        {
            DispatchEvents(code);
        }
        else
        {
            //呼出光标键状态，不派发方向键盘事件，只处理鼠标的移动和确认事件/
            if (Input.GetKey(KeyCode_X) || Input.GetKeyUp(KeyCode_X) || Input.GetKeyDown(KeyCode_X))
            {
                DispatchEvents(code);
            }
        }
    }

    /// <summary>
    /// 呼出或者隐藏光标键
    /// </summary>
    private void HideOrShowMouse(bool state)
    {
        if (mouseObj != null)
        {
            mouseObj.SetActive(state);
            if (state)
            {
                //启用光标键/
                _mouseStatus = UIMouseStatus.MouseActive;
            }
            else
            {
                //隐藏光标键/
                _mouseStatus = UIMouseStatus.MouseHide;
            }
        }
    }

    /// <summary>
    /// 鼠标移动
    /// </summary>
    private void MouseMove()
    {
        if (_mouseStatus == UIMouseStatus.MouseHide)
        {
            return;
        }

        Vector3 dir = Vector3.zero;
//         if (Input.GetAxis("joy_horizontal") != 0.0f)
//         {
//             dir.x = Input.GetAxis("joy_horizontal");
//         }
//         else if (Input.GetAxis("dpad_horizontal") != 0.0f)
//         {
//             dir.x = Input.GetAxis("dpad_horizontal");
//         }
// 
//         if (Input.GetAxis("joy_vertical") != 0.0f)
//         {
//             dir.y = Input.GetAxis("joy_vertical");
//         }
//         else if (Input.GetAxis("dpad_vertical") != 0.0f)
//         {
//             dir.y = Input.GetAxis("dpad_vertical");
//         }

        dir.Normalize();

        mouseTrans.Translate(dir * mouseMoveSpeed * Time.deltaTime);

        Vector3 localPos = mouseTrans.localPosition;
        float screenWidth = uicamera.pixelWidth;
        float screenHeight = uicamera.pixelHeight;
        if (localPos.x > screenWidth / 2)
        {
            localPos.x = screenWidth / 2;
        }
        else if (localPos.x < screenWidth / 2 * -1)
        {
            localPos.x = screenWidth / 2 * -1;
        }

        if (localPos.y > screenHeight / 2)
        {
            localPos.y = screenHeight / 2;
        }
        else if (localPos.y < screenHeight / 2 * -1)
        {
            localPos.y = screenHeight / 2 * -1;
        }
        mouseTrans.localPosition = localPos;
    }

    /// <summary>
    /// 添加监听
    /// </summary>
    /// <param name="onInput"></param>
    public void AddListener(OnInputCode onInput)
    {
        if (inputListeners != null && !inputListeners.Contains(onInput))
        {
            inputListeners.Add(onInput);
        }
    }

    /// <summary>
    /// 移除监听
    /// </summary>
    public void RemoveListener(OnInputCode onInput)
    {
        if (inputListeners != null && inputListeners.Contains(onInput))
        {
            inputListeners.Remove(onInput);
        }
    }

    /// <summary>
    /// 派发事件
    /// </summary>
    /// <param name="code"></param>
    private void DispatchEvents(StickButtonCode code)
    {
        if (inputListeners == null || inputListeners.Count == 0)
        {
            return;
        }

        for (int i = 0; i < inputListeners.Count; i++)
        {
            inputListeners[i].Invoke(code);
        }
    }

    public bool GetKey(KeyCode key)
    {
        return Input.GetKey(key);
    }

    public bool GetKeyDown(KeyCode key)
    {
        return Input.GetKeyDown(key);
    }

    public bool GetKeyUp(KeyCode key)
    {
        return Input.GetKeyUp(key);
    }
}
