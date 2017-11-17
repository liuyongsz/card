using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using System.Collections;
using PureMVC.Patterns;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class UtilTools
{
    public static string GetPlatformName()
    {
#if UNITY_EDITOR
        return GetPlatformForAssetBundles(EditorUserBuildSettings.activeBuildTarget);
#else
		return GetPlatformForAssetBundles(Application.platform);
#endif
    }

#if UNITY_EDITOR
    private static string GetPlatformForAssetBundles(BuildTarget target)
    {
        switch (target)
        {
            case BuildTarget.Android:
                return "Android";
            case BuildTarget.iOS:
                return "IOS";
            case BuildTarget.WebGL:
                return "WebGL";
            case BuildTarget.WebPlayer:
                return "WebPlayer";
            case BuildTarget.StandaloneWindows:
            case BuildTarget.StandaloneWindows64:
                return "Windows";
            case BuildTarget.StandaloneOSXIntel:
            case BuildTarget.StandaloneOSXIntel64:
            case BuildTarget.StandaloneOSXUniversal:
                return "OSX";
            // Add more build targets for your own.
            // If you add more targets, don't forget to add the same platforms to GetPlatformForAssetBundles(RuntimePlatform) function.
            default:
                return null;
        }
    }
#endif

    private static string GetPlatformForAssetBundles(RuntimePlatform platform)
    {
        switch (platform)
        {
            case RuntimePlatform.Android:
                return "Android";
            case RuntimePlatform.IPhonePlayer:
                return "IOS";
            case RuntimePlatform.WebGLPlayer:
                return "WebGL";
            case RuntimePlatform.OSXWebPlayer:
            case RuntimePlatform.WindowsWebPlayer:
                return "WebPlayer";
            case RuntimePlatform.WindowsPlayer:
                return "Windows";
            case RuntimePlatform.OSXPlayer:
                return "OSX";
            // Add more build targets for your own.
            // If you add more targets, don't forget to add the same platforms to GetPlatformForAssetBundles(RuntimePlatform) function.
            default:
                return null;
        }
    }
    /// 获取指定距离下相机视口四个角的坐标
    /// </summary>
    /// <param name="cam"></param>
    /// <param name="distance">相对于相机的距离</param>
    /// <returns></returns>
    public static Vector3[] GetCameraFovPositionByDistance(Camera cam, float distance)
    {
        Vector3[] corners = new Vector3[4];

        float halfFOV = (cam.fieldOfView * 0.5f) * Mathf.Deg2Rad;
        float aspect = cam.aspect;

        float height = distance * Mathf.Tan(halfFOV);
        float width = height * aspect;

        Transform tx = cam.transform;

        // 左上角
        corners[0] = tx.position - (tx.right * width);
        corners[0] += tx.up * height;
        corners[0] += tx.forward * distance;

        // 右上角
        corners[1] = tx.position + (tx.right * width);
        corners[1] += tx.up * height;
        corners[1] += tx.forward * distance;

        // 左下角
        corners[2] = tx.position - (tx.right * width);
        corners[2] -= tx.up * height;
        corners[2] += tx.forward * distance;

        // 右下角
        corners[3] = tx.position + (tx.right * width);
        corners[3] -= tx.up * height;
        corners[3] += tx.forward * distance;

        return corners;
    }

    public static string GetDataTime()
    {
        return DateTime.Now.ToString("yyyy MM dd HH:mm:ss");
    }
    /// <summary>
    /// 配置加载错误回调
    /// </summary>
    public static void ConfigLoadError(string name)
    {
        Debug.LogError("can not find xml" + name + "stop game");
        return;
    }
    /// <summary>
    /// toggle事件绑定并返回本身
    /// </summary>
    /// <param name="toggle"></param>
    /// <param name="fun"></param>
    public static void AddToggleEvent(Toggle toggle, UnityEngine.Events.UnityAction<bool> fun)
    {
        toggle.onValueChanged.AddListener((isOn) =>
        {
            fun(isOn);
        });
    }

    /// <summary>
    /// 移除所有子级
    /// </summary>
    /// <param name="trans">移除目标</param>
    public static void RemoveAllChild(Transform trans)
    {
        while (trans.childCount > 0)
        {
            var child = trans.GetChild(0);
            child.SetParent(null);
            GameObject.Destroy(child.gameObject);
        }
    }
    /// <summary>
    /// 移除所有子级
    /// </summary>
    /// <param name="go">目标</param>
    public static void RemoveAllChild(GameObject go)
    {
        RemoveAllChild(go.transform);
    }
    /// <summary>
    /// 移除所有子级
    /// </summary>
    /// <param name="compenont">目标</param>
    public static void RemoveAllChild(MonoBehaviour compenont)
    {
        RemoveAllChild(compenont.transform);
    }

    internal static void AddButtonEvent(GameObject obj, UnityEngine.Events.UnityAction<GameObject> unityAction)
    {
        Button btn = obj.GetComponent<Button>();
        if (btn == null) btn = obj.AddComponent<Button>();
        if (btn.onClick.GetPersistentEventCount() > 0) btn.onClick.RemoveAllListeners();
        btn.onClick.AddListener(delegate
        {
            unityAction(obj);
        });
    }
    public static void SetTextColor(UILabel text, int index)
    {
        switch (index)
        {
            case 1:
                text.color = Color.gray;
                break;
            case 2:
                text.color = Color.green;
                break;
            case 3:
                text.color = Color.blue;
                break;
            case 4:
                text.color = new Color(0.5F, 0.02F, 0.60F);
                break;
            case 5:
                text.color = new Color(0.9F, 0.88F, 0.28F);
                break;
            case 6:
                text.color = Color.red;
                break;
        }
    }
   
    public static float GetGroundHeightAt(Vector3 target)
    {
        RaycastHit hitdist;
        int mask = 1 << LayerMask.NameToLayer("Ground");
        Ray r = new Ray();
        r.origin = new Vector3(target.x, 50, target.z);
        r.direction = Vector3.down;

        if (Physics.Raycast(r, out hitdist, 60, mask))
        {
            return hitdist.point.y + 0.2f;
        }
        return 0f;
    }
    //2D：使目角度指向鼠
    public static void pointMouse(Transform target, int mod = 1)
    {
        Vector3 mouse = Input.mousePosition;

        Vector3 obj = Camera.main.WorldToScreenPoint(target.position);

        Vector3 direction = mouse - obj;

        direction.z = 0f;
        direction = direction.normalized;

        if (mod == 1)
        {

            target.right = direction;

        }
        else
        {

            target.up = direction;
        }
    }

    /// <summary>
    /// 格式化字符串 id,id,id,id,id
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static string[] FormatStringDot(string value)
    {
        if (!string.IsNullOrEmpty(value))
        {
            return value.Split(new char[] { ',' }, System.StringSplitOptions.RemoveEmptyEntries);
        }
        return new string[1] { string.Empty };
    }

    static string[] IntStrings = new string[]
   {
        "0","1","2","3","4","5","6","7","8","9",
        "10","11","12","13","14","15","16","17","18","19",
        "20","21","22","23","24","25","26","27","28","29",
        "30","31","32","33","34","35","36","37","38","39",
        "40","41","42","43","44","45","46","47","48","49",
        "50","51","52","53","54","55","56","57","58","59",
        "60","61","62","63","64","65","66","67","68","69",
        "70","71","72","73","74","75","76","77","78","79",
        "80","81","82","83","84","85","86","87","88","89",
        "90","91","92","93","94","95","96","97","98","99",
   };
    /// <summary>
    /// 适用于100以内（不含）的整数ToString
    /// </summary>
    /// <param name="num"></param>
    /// <param name="format"></param>
    /// <returns></returns>
    public static string Int2String(int num, string format = "#0")
    {
        if (num >= 0 && num < 100)
        {
            return IntStrings[num];
        }

        return num.ToString(format);
    }

    /// <summary>
    /// 转换数字 将大于10000的数 显示 1万  大于100000000 的数 显示为 1亿
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static string ConvertNumber(long value)
    {
        long hundredmillion = 100000000;
        long tenthousand = 10000;

        if (value >= hundredmillion)
        {
            return StringBuilder((value / hundredmillion), TextManager.GetUIString("UI230114"));
        }
        else if (value >= tenthousand)
        {
            return StringBuilder((value / tenthousand) + TextManager.GetUIString("UI230113"));
        }
        return value.ToString();
    }
    /// <summary>
    /// 格式化字符串"1.0,1.0,1.0"为Vector3
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static Vector3 FormatStringVector3(string value)
    {
        if (string.IsNullOrEmpty(value))
        {
            return Vector3.zero;
        }

        string[] values = value.Split(',');
        if (values == null || values.Length != 3)
        {
            return Vector3.zero;
        }

        float x = float.Parse(values[0]);
        float y = float.Parse(values[1]);
        float z = float.Parse(values[2]);

        return new Vector3(x, y, z);
    }

    /// <summary>
    /// 格式化秘籍道具字符串
    /// 格式 ： 编号:数量；编号:数量
    /// 例如 :  item0001:5;item0002:5
    /// </summary>
    /// <param name="value"></param>
    /// <param name="itemNo"></param>
    /// <param name="itemNum"></param>
    public static Dictionary<string, int> FormatKeyNumber(string value)
    {
        if (string.IsNullOrEmpty(value))
        {
            return new Dictionary<string, int>();
        }
        return FormatKeyNumber(value, new char[] { ',' }, new char[] { ':' });
    }

    /// <summary>
    /// 格式化装备数据字符串
    /// 格式 ： 编号,数量；编号,数量
    /// 例如 :  item0001,5;item0002,5
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static Dictionary<string, int> FormatKeyNumberDot(string value)
    {
        if (string.IsNullOrEmpty(value))
        {
            return new Dictionary<string, int>();
        }
        return FormatKeyNumber(value, new char[] { ';' }, new char[] { ',' });
    }

    /// <summary>
    /// 格式化装备数据字符串
    /// 格式 ： 编号,数量；编号,数量
    /// 例如 :  item0001:5,item0002:5
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static Dictionary<string, int> FormatKeyNumberDot2(string value)
    {
        if (string.IsNullOrEmpty(value))
        {
            return new Dictionary<string, int>();
        }
        return FormatKeyNumber(value, new char[] { ',' }, new char[] { ':' });
    }

    /// <summary>
    /// 格式化装备数据字符串
    /// 格式 ： 编号,数量；编号,数量
    /// 例如 :  item0001:5;item0002:5;
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static Dictionary<string, int> FormatKeyNumberDot3(string value)
    {
        if (string.IsNullOrEmpty(value))
        {
            return new Dictionary<string, int>();
        }
        return FormatKeyNumber(value, new char[] { ';' }, new char[] { ':' });
    }

    /// <summary>
    /// 格式化字符串数据
    /// </summary>
    /// <param name="value"></param>
    /// <param name="splt1"></param>
    /// <param name="splt2"></param>
    /// <returns> Dictionary<string, string> </returns>
    public static Dictionary<string, string> FormatKeyString(string value, char[] splt1, char[] splt2)
    {
        Dictionary<string, string> taskitems = new Dictionary<string, string>();
        //string[] ss = value.Split(new char[] { ',' }, System.StringSplitOptions.RemoveEmptyEntries);
        string[] ss = value.Split(splt1, System.StringSplitOptions.RemoveEmptyEntries);
        // string[] no = new string[] { };
        //string[] num = new string[] { };

        string item = string.Empty;
        string[] temp;
        for (int i = 0; i < ss.Length; i++)
        {
            item = ss[i];
            temp = item.Split(splt2, System.StringSplitOptions.RemoveEmptyEntries);
            if (temp.Length >= 2)
            {
                if (taskitems.ContainsKey(temp[0]))
                {
                    string key = temp[0];
                    int old = UtilTools.IntParse(taskitems[key]);
                    int newi = UtilTools.IntParse(temp[1]);
                    taskitems[key] = UtilTools.StringBuilder(old, newi);
                }
                else
                {
                    taskitems.Add(temp[0], temp[1]);
                }
            }
        }

        return taskitems;
    }

    /// <summary>
    /// 格式化字符串
    /// </summary>
    /// <param name="value"></param>
    /// <param name="first"></param>
    /// <param name="second"></param>
    /// <returns></returns>
    public static Dictionary<string, int> FormatKeyNumber(string value, char[] first, char[] second)
    {
        Dictionary<string, int> taskitems = new Dictionary<string, int>();
        //string[] ss = value.Split(new char[] { ',' }, System.StringSplitOptions.RemoveEmptyEntries);
        string[] ss = value.Split(first, System.StringSplitOptions.RemoveEmptyEntries);
        //         string[] no = new string[] { };
        //         string[] num = new string[] { };

        string item = string.Empty;
        string[] temp;
        for (int i = 0; i < ss.Length; i++)
        {
            item = ss[i];
            temp = item.Split(second, System.StringSplitOptions.RemoveEmptyEntries);
            if (temp.Length >= 2)
            {
                if (taskitems.ContainsKey(temp[0]))
                {
                    string key = temp[0];
                    int old = taskitems[key];
                    int newi = UtilTools.IntParse(temp[1]);
                    taskitems[key] = old + newi;
                }
                else
                {
                    taskitems.Add(temp[0], UtilTools.IntParse(temp[1]));
                }
            }
        }

        return taskitems;
    }

    /// <summary>
    /// String 强转 Int 时调用 默认返回 0
    /// 避免转换过程中包含空字符、以及非数字字符
    /// 导致程序报错
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static int IntParse(string value, int defaultValue = 0)
    {
        if (string.IsNullOrEmpty(value))
        {
            return defaultValue;
        }
        value = value.Trim();
        int result;
        if (int.TryParse(value, out result))
        {
            return result;
        }
        return defaultValue;
    }
    
    /// <summary>
    /// String强转Long
    /// </summary>
    /// <param name="value"></param>
    /// <param name="defaultValue"></param>
    /// <returns></returns>
    public static long LongParse(string value, long defaultValue = 0)
    {
        if (string.IsNullOrEmpty(value))
        {
            return defaultValue;
        }
        value = value.Trim();
        long result;
        if (long.TryParse(value, out result))
        {
            return result;
        }
        return defaultValue;
    }

    /// <summary>
    /// String 强转 Float 时调用 默认返回 0
    /// 避免转换过程中包含空字符、以及非数字字符
    /// 导致程序报错
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static float FloatParse(string value, float defaultValue = 0)
    {
        if (string.IsNullOrEmpty(value))
        {
            return defaultValue;
        }
        value = value.Trim();
        float result;
        if (float.TryParse(value, out result))
        {
            return result;
        }
        return defaultValue;
    }

    /// <summary>
    /// 保留小数
    /// </summary>
    /// <param name="f">值</param>
    /// <param name="count">保留位数</param>
    /// <returns></returns>
    public static float KeepFloat(float f, int count = 1)
    {
        double b = System.Math.Round(f, count);
        return (float)b;
    }

    /// <summary>
    /// String 强转 bool 时调用 默认返回 false
    /// 避免转换过程中包含空字符、以及非数字字符
    /// 导致程序报错
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static bool BoolParse(string value, bool defaultValue = false)
    {
        if (string.IsNullOrEmpty(value))
        {
            return defaultValue;
        }
        value = value.Trim();
        Boolean result;
        int iResult;
        if (Boolean.TryParse(value, out result))
        {
            return result;
        }
        else if (int.TryParse(value, out iResult))
        {
            return iResult == 1;
        }
        return defaultValue;
    }

    /// <summary>
    /// 检测文件加载完成后回调
    /// </summary>
    /// <param name="UIAsset"></param>
    /// <param name="NameAsset"></param>
    /// <param name="NumAsset"></param>
    public static void OnStringFileLoaded(System.Action completeCallback, int iTotal, bool[] args)
    {
        int iLoad = 0;
        for (int i = 0; i < args.Length; i++)
        {
            if (args[i] == true)
            {
                iLoad++;
            }
        }

        if (iLoad == args.Length)
        {
            ///完成回调
            if (completeCallback != null)
            {
                completeCallback();
            }
            return;
        }
    }

    public static string[] Split(string src, char p)
    {
        return src.Split(new char[] { p });
    }

    public static bool isEmpty(string src)
    {
        return src == null || src == string.Empty || src.Equals(string.Empty);
    }

    public static Vector4 ParseVector4(string str)
    {
        if (isEmpty(str)) return Vector4.zero;
        string[] strp = Split(str, ',');
        if (strp == null || strp.Length != 4) return Vector4.zero;
        return new Vector4(float.Parse(strp[0]), float.Parse(strp[1]), float.Parse(strp[2]), float.Parse(strp[3]));
    }

    public static Vector3 ParseVector3(string str)
    {
        if (isEmpty(str)) return Vector3.zero;
        string[] strp = Split(str, ',');
        if (strp == null || strp.Length != 3) return Vector3.zero;
        return new Vector3(float.Parse(strp[0]), float.Parse(strp[1]), float.Parse(strp[2]));
    }

    public static bool TryParseVector3(string str, out Vector3 vector)
    {
        vector = Vector3.zero;
        if (isEmpty(str)) return false;
        string[] strp = Split(str, ',');
        if (strp == null || strp.Length != 3) return false;
        vector = new Vector3(float.Parse(strp[0]), float.Parse(strp[1]), float.Parse(strp[2]));
        return true;
    }

    public static Vector2 ParseVector2(string str)
    {
        if (string.IsNullOrEmpty(str))
            return Vector2.zero;

        string[] strp = Split(str, ',');
        if (strp.Length != 2)
            return Vector2.zero;

        Vector2 vTemp2 = Vector2.zero;
        vTemp2.x = float.Parse(strp[0]);
        vTemp2.y = float.Parse(strp[1]);
        return vTemp2;
    }

    public static string Vector3String(Vector3 v)
    {
        return UtilTools.StringBuilder(v.x, ",", v.y, ",", v.z);
    }

    /// <summary>
    /// 转2维数据
    /// </summary>
    /// <param name="str"></param>
    /// <returns></returns>
    public static int[,] ParseInts(string str)
    {
        int[,] temp = null;
        if (!string.IsNullOrEmpty(str))
        {
            string[] strp = str.Split(',');
            if (strp.Length % 2 == 0)
            {
                int len = strp.Length / 2;
                temp = new int[len, 2];
                for (int i = 0; i < len; i++)
                {
                    temp[i, 0] = int.Parse(strp[2 * i]);
                    temp[i, 1] = int.Parse(strp[2 * i + 1]);
                }
            }
        }
        return temp;
    }

    private static System.Text.StringBuilder mstrbuilder = new System.Text.StringBuilder();
    /// <summary>
    /// 合并字符
    /// </summary>
    /// <param name="args"></param>
    /// <returns></returns>
    public static string StringBuilder(params object[] args)
    {
        mstrbuilder.Remove(0, mstrbuilder.Length);
        if (args != null)
        {
            int len = args.Length;
            for (int i = 0; i < len; ++i)
            {
                mstrbuilder.Append(args[i]);
            }
        }
        return mstrbuilder.ToString();
    }

    public delegate void OnWaitFrame();
    public static IEnumerator WaitForEndOfFrame(OnWaitFrame onWaitFrame)
    {
        yield return new WaitForEndOfFrame();
        if (onWaitFrame != null)
        {
            onWaitFrame();
        }
    }
    public delegate void OnCapture(Texture2D tex2d);
    /// <summary>
    /// 截屏
    /// </summary>
    /// <param name="rt">屏幕范围</param>
    /// <returns></returns>
    public static IEnumerator CaptureScreenshot(Rect rt, OnCapture onCapture)
    {
        yield return new WaitForEndOfFrame();
        Texture2D screenShot = new Texture2D((int)rt.width, (int)rt.height, TextureFormat.RGB24, false);
        screenShot.ReadPixels(rt, 0, 0);
        screenShot.Apply();
        if (onCapture != null)
        {
            onCapture(screenShot);
        }
    }
    /// <summary>
    /// 保存分享文件到指定路径
    /// </summary>
    /// <param name="strFileName">文件名</param>
    /// <param name="tex2d">图片信息</param>
    public static void SaveScreenShot(string strFileName, Texture2D tex2d)
    {
        byte[] bytes = tex2d.EncodeToPNG();
        if (bytes != null)
        {
            //System.IO.File.WriteAllBytes(strFileName, bytes);
        }
    }

    /// <summary>
    /// 获取字符串中的url参数
    /// </summary>
    /// <param name="text"></param>
    /// <returns></returns>
    public static string GetUrlValue(string text)
    {
        int linkStart = text.IndexOf("[url=", 0);
        if (linkStart != -1)
        {
            linkStart += 5;
            int linkEnd = text.IndexOf("]", linkStart);

            if (linkEnd != -1)
            {
                int closingStatement = text.IndexOf("[/url]", linkEnd);
                if (closingStatement != -1)
                    return text.Substring(linkStart, linkEnd - linkStart);
            }
        }
        return string.Empty;
    }

    /// <summary>
    /// 获取字符串中的url参数
    /// </summary>
    /// <param name="text"></param>
    /// <returns></returns>
    public static int GetTodayIndex()
    {
        string weekstr = DateTime.Now.DayOfWeek.ToString();
        switch (weekstr)
        {
            case "Monday":
                return  1;
            case "Tuesday":
                return 2;
            case "Wednesday":
                return 3;
            case "Thursday":
                return 4;
            case "Friday":
                return 5;
            case "Saturday":
                return 6;
            case "Sunday":
                return 7;
        }
        return 0;
    }
    /// <summary>
    /// 得到位置随机点
    /// </summary>
    /// <param name="pos"></param>
    /// <param name="dis"></param>
    /// <returns></returns>
    public static Vector3 GetRandomPos(Vector3 pos, float minDis, float maxDis)
    {
        float radius = UnityEngine.Random.Range(minDis, maxDis);
        Quaternion rot = Quaternion.Euler(0, UnityEngine.Random.Range(0, 359), 0);
        Vector3 _Pos = Vector3.forward * radius;
        pos += rot * _Pos;
        pos.y += 0.3f;
        return pos;
    }

    /// <summary>
    /// 掉落位置
    /// </summary>
    /// <param name="qua"></param>
    /// <param name="pos"></param>
    /// <param name="minZ"></param>
    /// <param name="maxZ"></param>
    /// <param name="minX"></param>
    /// <param name="maxX"></param>
    /// <returns></returns>
    /// 
    public static Vector3 GetBoxObjectPos(Vector3 pos, Quaternion qua, int z, int x)
    {
        Vector3 dir = new Vector3(x, 0, z);
        Vector3 p = qua * dir + pos;
        p.y += 0.3f;
        return p;
    }

    /// <summary>
    /// 随机位置
    /// </summary>
    /// <param name="pos"></param>
    /// <param name="qua"></param>
    /// <param name="z"></param>
    /// <param name="x"></param>
    /// <returns></returns>
    public static Vector3 GetBoxObjectRandomPos(Vector3 pos, Quaternion qua, float fminz, float fmaxz, float fminx, float fmaxx)
    {
        float x = UnityEngine.Random.Range(fminx, fmaxx);
        float z = UnityEngine.Random.Range(fminz, fmaxz);
        Vector3 dir = new Vector3(x, 0, z);
        Vector3 p = qua * dir + pos;
        p.y += 0.3f;
        return p;
    }

    /// <summary>
    /// 通过秒转换为时间格式
    /// </summary>
    /// <param name="sceond"></param>
    /// <returns></returns>
    public static string TimeFormat(int sceond)
    {
        DateTime me = new DateTime().AddSeconds(sceond);
        if (me.Hour.ToString("00") == "00")
        {
            return UtilTools.StringBuilder(me.Minute.ToString("00"), ":", me.Second.ToString("00"));
        }
        else if (me.Minute.ToString("00") == "00")
        {
            return UtilTools.StringBuilder(me.Second.ToString("00"));
        }
        return UtilTools.StringBuilder(me.Hour.ToString("00"), ":", me.Minute.ToString("00"), ":", me.Second.ToString("00"));
    }
    /// <summary>
    /// 通过秒转换为中文时间格式
    /// </summary>   
    public static String formatDuring(double mss)
    {
        int days = (int)(mss / (60 * 60 * 24));
        int hours = (int)((mss % (60 * 60 * 24)) / (60 * 60));
        int minutes = (int)((mss % (60 * 60)) / 60);
        int seconds = (int)(mss % 60);
        DictionaryEx<string, int> time = new DictionaryEx<string, int>();
        if (days != 0)
            time.Add("days", days);
        if (hours != 0)
            time.Add("hours", hours);
        if (minutes != 0)
            time.Add("minutes", minutes);
        if (seconds != 0)
            time.Add("seconds", seconds);
        string timeText = string.Empty;
        for (int i = 0; i < time.mList.Count; ++i)
        {
            timeText += string.Format(TextManager.GetUIString(time.mList[i].ToString()), time[time.mList[i]]);
        }
        time.Clear();
        return timeText;
    }
    //获取最大时间转换
    public static String GetMaxTimeFomat(double time)
    {
        int days = (int)(time / (60 * 60 * 24));
        int hours = (int)((time % (60 * 60 * 24)) / (60 * 60));
        int minutes = (int)((time % (60 * 60)) / 60);
        int seconds = (int)(time % 60);
        string timeText = string.Empty;

        if (days > 0)
        {
            return string.Format(TextManager.GetUIString("overDays"), days);
        }
        else if (hours > 0)
        {
            return string.Format(TextManager.GetUIString("hours"), hours);
        }
        else if (minutes > 0)
        {
            return string.Format(TextManager.GetUIString("minutes"), minutes);
        }
        else if (seconds > 0)
        {
            return string.Format(TextManager.GetUIString("seconds"), seconds);
        }
        else
            return "";
    }
    /// <summary>
    /// 秒数转日期
    /// </summary>
    /// <param name="Value">秒数</param>
    /// <returns>日期</returns>
    public static string GetGMTDateTime(long Value)
    {
        int Local_TimeZone = 8;
        DateTime time = new DateTime(1970, 1, 1).AddSeconds(Value);
        time = time.AddHours(Local_TimeZone);
        string content = time.ToString("yyyy-MM-dd HH:mm:ss");
        return content;
    }
    /// <summary>
    /// 秒数转日期不带具体时间
    /// </summary>
    /// <param name="Value">秒数</param>
    /// <returns>日期</returns>
    public static string GetDateTime(long Value)
    {
        int Local_TimeZone = 8;
        DateTime time = new DateTime(1970, 1, 1).AddSeconds(Value);
        time = time.AddHours(Local_TimeZone);
        string content = time.ToString("yyyy-MM-dd");
        return content;
    }
    //获取数字大写
    public static string GetUpperCaseNumber(int day)
    {
        switch (day)
        {
            case 1:
                return "一";
            case 2:
                return "二";
            case 3:
                return "三";
            case 4:
                return "四";
            case 5:
                return "五";
            case 6:
                return "六";
            case 7:
                return "七";
            case 8:
                return "八";
            case 9:
                return "九";
            case 0:
                return "零";
        }
        return "";
    }
    /// <summary>
    /// 随机数组
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="inputList"></param>
    /// <returns></returns>
    public static List<T> GetRandomList<T>(List<T> inputList)
    {
        //Copy to a array
        T[] copyArray = new T[inputList.Count];
        inputList.CopyTo(copyArray);

        //Add range
        List<T> copyList = new List<T>();
        copyList.AddRange(copyArray);

        //Set outputList and random
        List<T> outputList = new List<T>();
        System.Random rd = new System.Random(DateTime.Now.Millisecond);

        while (copyList.Count > 0)
        {
            //Select an index and item
            int rdIndex = rd.Next(0, copyList.Count - 1);
            T remove = copyList[rdIndex];

            //remove it from copyList and add it to output
            copyList.Remove(remove);
            outputList.Add(remove);
        }
        return outputList;
    }

    /// <summary>
    /// 随机 0到 count 重新排列 
    /// </summary>
    /// <param name="count"></param>
    /// <returns></returns>
    public static string GetRandomNumber(int count)
    {
        string number = string.Empty;
        List<int> numberList = new List<int>();
        for (int i = 0; i < count; i++)
            numberList.Add(i);
        for (int i = 0; i < count; ++i)
        {
            if (i == 3)
                number = number + GetNumber(numberList).ToString();
            else
                number = number + GetNumber(numberList) + ",";
        }
        return number;
    }

    static int GetNumber(List<int> numberList)
    {
        System.Random random = new System.Random();
        int index = random.Next(0, numberList.Count);
        int number = numberList[index];
        numberList.RemoveAt(index);
        return number;
    }
    public static List<string> GetStringSplit(string str, char split = ',')
    {
        if (string.IsNullOrEmpty(str))
        {
            return null;
        }

        List<string> list = new List<string>();
        string[] strs = str.Split(split);
        for (int i = 0; i < strs.Length; ++i)
        {
            list.Add(strs[i]);
        }

        return list;
    }
    /// <summary>
    /// 设置层级
    /// </summary>
    /// <param name="go"></param>
    /// <param name="layer"></param>
    public static void SetLayer(GameObject go, int layer, int ignoreLayer = -1)
    {
        if (go.layer == layer)
        {
            if (go.transform.childCount > 0)
            {
                int len = go.transform.childCount;
                for (int i = 0; i < len; i++)
                {
                    SetLayer(go.transform.GetChild(i).gameObject, layer, ignoreLayer);
                }
            }
        }
        else
        {
            if (ignoreLayer == -1)
            {
                go.layer = layer;
            }
            else if (go.layer != ignoreLayer)
            {
                go.layer = layer;
            }
            if (go.transform.childCount > 0)
            {
                int len = go.transform.childCount;
                for (int i = 0; i < len; i++)
                {
                    SetLayer(go.transform.GetChild(i).gameObject, layer, ignoreLayer);
                }
            }
        }
    }

    public static void DestroyGameObject(GameObject go)
    {
        if (go == null)
        {
            return;
        }

        GameObject.Destroy(go);
        go = null;
    }

    public static void DestroyGameObject(params UnityEngine.Object[] args)
    {
        if (args == null)
        {
            return;
        }

        int count = args.Length;
        if (count < 1)
        {
            return;
        }

        for (int i = 0; i < count; ++i)
        {
            GameObject go = args[i] as GameObject;

            GameObject.Destroy(go);
            go = null;
        }
    }

    /// <summary>
    /// 向量间的平面距离
    /// </summary>
    /// <param name="obj1"></param>
    /// <param name="obj2"></param>
    /// <returns></returns>
    public static float Vec2Distance(Vector3 obj1, Vector3 obj2)
    {
        if (obj1 == null || obj2 == null)
        {
            return 0.0f;
        }

        Vector2 v1 = new Vector2(obj1.x, obj1.z);
        Vector2 v2 = new Vector2(obj2.x, obj2.z);

        return Vector2.Distance(v1, v2);
    }

   
    public static Vector3 Vec3Direction(Vector3 target, Vector3 self)
    {
        if (target == null || self == null)
        {
            return Vector3.zero;
        }

        Vector3 targetPosition = target;
        Vector3 selfPosition = self;

        targetPosition.y = 0.0f;
        selfPosition.y = 0.0f;

        return (targetPosition - selfPosition).normalized;
    }

    public static void DestroyChild(GameObject go)
    {
        if (go == null)
        {
            return;
        }

        int count = go.transform.childCount;
        if (count < 1)
        {
            return;
        }

        for (int i = 0; i < count; ++i)
        {
            GameObject child = go.transform.GetChild(i).gameObject;
            if (child == null)
            {
                continue;
            }

            DestroyGameObject(child);
        }
    }
    /// <summary>
    /// 获取卡牌类型名称
    /// </summary>
    /// <param name="type"></param>
    public static string GetSKillTypeName(int type)
    {
        switch(type)
        {
            case 1: return TextManager.GetUIString("UI1020");
            case 2: return TextManager.GetUIString("UI1021");
            case 3: return TextManager.GetUIString("UI1022");
            case 4: return TextManager.GetUIString("UI1023");
        }
        return string.Empty;
    }
    /// <summary>
    /// 取浮点数小数部分
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static float GetFloatDot(float value)
    {
        if (value < 0.0f)
        {
            return 0.0f;
        }

        if (value < 1.0f)
        {
            return value;
        }

        while (value > 1.0f)
        {
            value -= 1.0f;
        }

        return value;
    }

    public static void SetParentWithPosition(Transform trans, Transform parent, Vector3 position,Vector3 size)
    {
        trans.gameObject.SetActive(true);
        trans.SetParent(parent);
        trans.localPosition = position;
        trans.localRotation = parent.localRotation;
        trans.localScale = size;
    }
    public static T GetComponentParent<T>(GameObject go)
    {
        T[] obj = go.GetComponentsInParent<T>();
        return obj[0];
    }
    public static T GetParent<T>(Transform trans)
    {
        T obj = default(T);
        obj = trans.GetComponentInParent<T>();
        return obj;
    }
    public static T GetChild<T>(Transform trans, string name)
    {
        T obj = default(T);
        obj = trans.FindChild(name).GetComponent<T>();
        return obj;
    }
    public static T[] GetChilds<T>(Transform trans, string name)
    {
        T[] obj;
        obj = trans.FindChild(name).GetComponentsInChildren<T>();
        return obj;
    }
   
    public static void SetMoneySprite(int type, UISprite money)
    {
        switch(type)
        {
            case 0:
                money.spriteName = "zuanshi";
                break;
            case 1:
                money.spriteName = "ouyuan";
                break;
            case 2:
                money.spriteName = "heishihuobi";
                break;
            case 3:
                money.spriteName = "gonghuibi";
                break;
            case 4:
                money.spriteName = "liansaihuobi";
                break;
        }
    }
    /// <summary>
    /// 设置ScroView参数
    /// </summary>
    /// <param name="view"></param>
    /// <param name="grid"></param>
    /// <param name="viewPosition"></param>
    /// <param name="clipPosition"></param>
    /// <param name="maxPerLine"></param>
    /// <param name="cellWidth"></param>
    /// <param name="cellHeight"></param>
    public static void UpdateScroViewPosition(UIScrollView view, UIGrid grid, Vector3 viewPosition, Vector4 clipPosition, int maxPerLine, int cellWidth, int cellHeight)
    {
        view.transform.localPosition = viewPosition;
        UIPanel uiPanel = view.GetComponent<UIPanel>();
        uiPanel.clipOffset = Vector2.zero;
        uiPanel.baseClipRegion = clipPosition;
        grid.maxPerLine = maxPerLine;
        grid.cellWidth = cellWidth;
        grid.cellHeight = cellHeight;
    }

  
    /// <summary>转化成Int List</summary>
    public static List<int> ToIntList(List<object> list)
    {
        List<int> lst = new List<int>();

        int cnt = list.Count;
        for (int i = 0; i < cnt; i++)
            lst.Add(int.Parse(list[i].ToString()));

        return lst;
    }
    
    public static void ClearMemory()
    {
        GC.Collect();
        Resources.UnloadUnusedAssets();
    }

    public static Color GetColorByLinkType(RichContent richcontent)
    {
        LinkType linkType = richcontent.linktype;
        Color color = Color.white;
        switch (linkType)
        {
            case LinkType.REQUEST:

                break;

            case LinkType.NAME:

                break;
            case LinkType.PROP:

                break;
            case LinkType.AUDIO:

                break;

        }
        return color;
    }
   
    public static T SafeAddComponent<T>(GameObject obj) where T : Component
    {
        T t = obj.GetComponent<T>();
        if (null == t)
            t = obj.AddComponent<T>();

        return t;
    }
}