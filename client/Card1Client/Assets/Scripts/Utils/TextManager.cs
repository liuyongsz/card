using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// ���ʻ�����
/// </summary>
public class TextManager
{
    /// <summary>
    /// �����ֵ��
    /// </summary>
    private static Dictionary<string, string> mNameStringDict = new Dictionary<string, string>();
    /// <summary>
    /// ����ӳ���ֵ��
    /// </summary>
    private static Dictionary<string, string> mUIStringDict = new Dictionary<string, string>();

    /// <summary>
    /// ���������ֵ��
    /// </summary>
    private static Dictionary<string, string> mPropsStringDict = new Dictionary<string, string>();

    /// <summary>
    /// ϵͳ��ʾ�ֵ��
    /// </summary>
    private static Dictionary<string, string> mSystemStringDict = new Dictionary<string, string>();


    /// <summary>
    /// ���ñ�ǩ��ѯ����
    /// </summary>
    public static void SetQueryString()
    {
        UILabel.moQuery = GetString;
        UILabel.intConvertFunc = ConvertInt;  
    }

    private static UnityEngine.Events.UnityAction m_callBack;
    private static int totalNum;
    public static bool Inited;
    /// <summary>
    /// ��ʼ�����԰�
    /// </summary>
    /// <param name="completeCallback">���԰���ʼ����ɻص�</param>
    public static void Init(UnityEngine.Events.UnityAction callBack)
    {
        totalNum = 4;
        m_callBack = callBack;

        //mNameStringDict.Clear();
        //mUIStringDict.Clear();
        //mPropsStringDict.Clear();
        //mSystemStringDict.Clear();
        ///���������ֵ�
        ResourceManager.Instance.LoadAsset("ItemString", AssetBundles.EResType.E_TXT, CompleteCallback);
        ResourceManager.Instance.LoadAsset("UIString", AssetBundles.EResType.E_TXT, CompleteCallback);
        ResourceManager.Instance.LoadAsset("PropString", AssetBundles.EResType.E_TXT, CompleteCallback);
        ResourceManager.Instance.LoadAsset("SystemString", AssetBundles.EResType.E_TXT, CompleteCallback);
    }

    public static void CompleteCallback(AssetBundles.NormalRes data)
    {
        string asset = (data as AssetBundles.TxtRes).m_txt;
        if (asset == string.Empty)
            return;
        if (mNameStringDict.Count == 0)
        {
            ReadString(asset, ref mNameStringDict);
            return;
        }
        if (mUIStringDict.Count == 0)
        {
            ReadString(asset, ref mUIStringDict);
            return;
        }
        if (mPropsStringDict.Count == 0)
        {
            ReadString(asset, ref mPropsStringDict);
            return;
        }
        if (mSystemStringDict.Count == 0)
        {
            ReadString(asset, ref mSystemStringDict);
            return;
        }
    }
    
    public static void ReadString(string strText, ref Dictionary<string, string> DictMap)
    {
        if (string.IsNullOrEmpty(strText))
            return;

        string[] strLines = strText.Split(new string[] { "\r\n" }, System.StringSplitOptions.RemoveEmptyEntries); ;
        for (int i = 0; i < strLines.Length; i++)
        {
            string[] split = strLines[i].Split(new string[] { "=" }, 2, System.StringSplitOptions.RemoveEmptyEntries);
            if (split.Length == 2)
            {
                if (DictMap.ContainsKey(split[0]))
                {
                    //Debug.Log("the key is echo in local file!!! please check the key = " + split[0]);
                    DictMap[split[0]] = split[1];
                }
                else
                {
                    split[1] = split[1].Replace("[n]", "\n");
                    //DictMap[split[0]] = split[1];
                    DictMap.Add(split[0], split[1]);
                }
            }
        }

        CheckOver();
    }

    /// <summary>
    /// ת��Ϊ 1W
    /// </summary>
    /// <param name="value"></param>
    /// <returns></returns>
    public static string ConvertInt(string value)
    {
        return UtilTools.ConvertNumber(UtilTools.IntParse(value));
    }

    /// <summary>
    /// ��ȡ���ʻ��ı������ı� ��: name = ���ƣ�
    /// </summary>
    /// <param name="key">�ؼ���</param>
    /// <returns>ӳ���ı�</returns>
    public static string GetString(string key)
    {
        if (string.IsNullOrEmpty(key))
            return key;

        string value;

        string str = key;
        if (str.Contains("-"))
        {
            str = str.Split('-')[0];
        }

        if (mNameStringDict.TryGetValue(str, out value))
        {
            return value;
        }

        if (mPropsStringDict.TryGetValue(key, out value))
        {
            return value;
        }

        if (mUIStringDict.TryGetValue(key, out value))
        {
            return value;
        }
        return key;
    }

    /// <summary>
    /// ��ȡ���ʻ��ı������ı� ��: name = ���ƣ�
    /// </summary>
    /// <param name="key">�ؼ���</param>
    /// <returns>ӳ���ı�</returns>
    public static string GetString(string key, params object[] args)
    {
        if (string.IsNullOrEmpty(key))
            return key;

        string value;
        if (mNameStringDict.TryGetValue(key, out value))
        {
            return value;
        }

        if (mUIStringDict.TryGetValue(key, out value))
        {
            if (args == null || args.Length == 0)
            {
                return value;
            }
            else
            {
                for (int i = 0; i < args.Length; i++)
                {
                    ///����Ӧ�Ŀ��Ƿ���Ҫר�����
                    if (value.Contains(UtilTools.StringBuilder("{", UtilTools.Int2String(i), ":>")))
                    {
                        args[i] = TextManager.GetString(args[i] + string.Empty) as object;
                    }
                }
                ///1,�ȼ�������в����Ƿ���Ҫר��

                try
                {
                    return string.Format(value, args);
                }
                catch (System.Exception e)
                {
                    Debug.LogError(key + args.Length + e.ToString());
                    return string.Empty;
                }
            }
        }       

        if (mPropsStringDict.TryGetValue(key, out value))
        {
            return value;
        }

        return key;
    }

    /// <summary>
    /// ��ȡϵͳ��ʾ�ֵ�
    /// </summary>
    /// <param name="key">�����ؼ���</param>
    /// <returns></returns>
    public static string GetSystemString(string key)
    {
        if (string.IsNullOrEmpty(key))
            return key;

        if (key.Contains("-"))
        {
            key = key.Split('-')[0];
        }

        string value;
        if (mSystemStringDict.TryGetValue(key, out value))
        {
            return value;
        }

        return key;
    }

    /// <summary>
    /// ��ȡ�����ֵ�
    /// </summary>
    /// <param name="key">�����ؼ���</param>
    /// <returns></returns>
    public static string GetItemString(string key)
    {
        if (string.IsNullOrEmpty(key))
            return key;

        if (key.Contains("-"))
        {
            key = key.Split('-')[0];
        }
        
        string value;
        if (mNameStringDict.TryGetValue(key, out value))
        {
            return value;
        }

        return key;
    }


    public static string GetUIString(string key)
    {
        if (string.IsNullOrEmpty(key))
            return key;

        string value;
        if (mUIStringDict.TryGetValue(key, out value))
        {
            return value;
        }

        return key;
    }


    /// <summary>
    /// ����������Ϣ�ֵ��ѯ��
    /// </summary>
    /// <param name="key">�����ؼ���</param>
    /// <returns></returns>
    public static string GetPropsString(string key)
    {
        if (string.IsNullOrEmpty(key))
            return key;

        string value;
        if (mPropsStringDict.TryGetValue(key, out value))
        {
            return value;
        }
        return key;
    }

    private static void CheckOver()
    {
        totalNum--;

        if(totalNum <= 0)
        {
            totalNum = 0;
            if (null != m_callBack)
                m_callBack();

            m_callBack = null;
            Inited = true;
        }
    }

    /// <summary>
    /// ������ݻ���(����UIEditor)
    /// </summary>
    public static void clearAllData()
    {
        mNameStringDict.Clear();
        mUIStringDict.Clear();
        mPropsStringDict.Clear();
        mSystemStringDict.Clear();
    }
}
