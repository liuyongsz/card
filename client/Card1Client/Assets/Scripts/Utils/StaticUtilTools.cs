using UnityEngine;
using System;
using System.Collections.Generic;
using System.Collections;

/// <summary>
/// UtilTools在静态代码中的精简版本
/// </summary>
public class StaticUtilTools
{
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
}