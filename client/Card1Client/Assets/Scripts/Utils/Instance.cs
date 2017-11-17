using System.Collections.Generic;
using UnityEngine;
using System;

public class Instance
{
    /// <summary>
    /// 对象单件列表
    /// </summary>


    public static bool IsHave<T>()
    {
        System.Type type = typeof(T);
        return ProxyInstance.InstanceProxy.mTables.ContainsKey(type);
    }

    public static T Get<T>()
    {
        System.Type type = typeof(T);
        T result = default(T);

        if (type.BaseType != null && type.BaseType == typeof(UnityEngine.MonoBehaviour))
        {
            if (ProxyInstance.InstanceProxy.mTables.ContainsKey(type))
            {
                object o = ProxyInstance.InstanceProxy.mTables[type];
                if (o is T)
                {
                    result = (T)(object)o;
                }
            }
        }
        else
        {
            if (ProxyInstance.InstanceProxy.mTables.ContainsKey(type))
            {
                object o = ProxyInstance.InstanceProxy.mTables[type];
                if (o is T)
                {
                    result = (T)(object)o;
                }
                else
                {
                    ///如果为空，生成实例
                    result = (T)System.Activator.CreateInstance(type);
                    ProxyInstance.InstanceProxy.mTables[type] = result;
                }
            }
            else
            {
                ///如果为空，生成实例
                result = (T)System.Activator.CreateInstance(type);
                ProxyInstance.InstanceProxy.mTables[type] = result;
            }
        }

        return result;
    }

    /// <summary>
    /// 设置单例
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="o"></param>
    public static void Set<T>(object o, bool bReWriter = true)
    {
        System.Type type = typeof(T);
        if (!ProxyInstance.InstanceProxy.mTables.ContainsKey(type) || bReWriter)
        {
            ProxyInstance.InstanceProxy.mTables[type] = o;
        }
    }

    /// <summary>
    /// 创建局部静态类,Instance.Create(new Game());
    /// </summary>
    /// <param name="o"></param>
    public static void Create(object o)
    {
        if (o == null)
            return;

        if (!ProxyInstance.InstanceProxy.mTables.ContainsKey(o.GetType()))
        {
            ProxyInstance.InstanceProxy.mTables[o.GetType()] = o;
        }
    }
    public static void Clean<T>()
    {
        System.Type type = typeof(T);
        if (ProxyInstance.InstanceProxy.mTables.ContainsKey(type))
        {
            ProxyInstance.InstanceProxy.mTables.Remove(type);
        }
    }
    /// <summary>
    /// 清除所有逻辑单件
    /// </summary>
    public static void CleanLogic()
    {
        List<System.Type> list = new List<System.Type>();
        foreach (System.Type type in ProxyInstance.InstanceProxy.mTables.Keys)
        {
            if (type.BaseType != null && type.BaseType == typeof(UnityEngine.MonoBehaviour))
                continue;

            list.Add(type);
        }
        for (int i = 0; i < list.Count; i++)
        {
            ProxyInstance.InstanceProxy.mTables.Remove(list[i]);
        }
    }
    /// <summary>
    /// 清空所有单件
    /// </summary>
    public static void ClearAll()
    {
        ProxyInstance.InstanceProxy.mTables.Clear();
    }
}

