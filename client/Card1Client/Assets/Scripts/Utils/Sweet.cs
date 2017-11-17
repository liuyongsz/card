using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;
using UnityEngine;


public static class Sweet
{
    public static bool IsNullOrEmpty(this string val)
    {
        return string.IsNullOrEmpty(val);
    }

    public static void InEditor_ResetShader(this UITexture target)
    {
#if UNITY_EDITOR
        Material mat = target.material; 
         Shader sdr = Shader.Find(mat.shader.name);
        mat.shader = sdr;
        target.material = mat;
#endif
    }

    public static List<string> ToStringList(this List<object> val)
    {
        List<string> lst = new List<string>();
        int cnt = val.Count;
        for (int i = 0; i < cnt; i++)
            lst.Add(val[i].ToString());

        return lst;
    }

    public static List<int> ToIntList(this List<object> val)
    {
        List<int> lst = new List<int>();
        int cnt = val.Count;
        for (int i = 0; i < cnt; i++)
            lst.Add(val[i].ToInt());

        return lst;
    }

    ///<summary>to int</summary>
    public static int ToInt(this object val)
    {
        string numstr = val.ToString();

        if (numstr.IsNullOrEmpty())
            return 0;

        return int.Parse(numstr);
    }

    public static float ToFloat(this object val)
    {
        string numstr = val.ToString();

        if (numstr.IsNullOrEmpty())
            return 0;

        return float.Parse(val.ToString());
    }

    ///<summary>去掉Y</summary>
    public static Vector2 IgnoreYXis(this Vector3 v3)
    {
        return new Vector2(v3.x,v3.z);
    }

    ///<summary>去掉Y</summary>
    public static Vector3 IgnoreY(this Vector3 v3)
    {
        return new Vector3(v3.x,0, v3.z);
    }

    /// <summary>
    /// 设置文本
    /// </summary>
    /// <param name="target"></param>
    /// <param name="val"></param>
    public static void SetText(this Text target, string val)
    {
        string lang = TextManager.GetUIString(val);

        if (target.text != lang)
        {
            target.text = TextManager.GetUIString(val);
        }
    }

    /// <summary>
    /// 克隆
    /// </summary>
    /// <param name="target"></param>
    /// <returns></returns>
    public static Vector3 Clone(this Vector3 target)
    {
        return new Vector3(target.x, target.y, target.z);
    }
}

