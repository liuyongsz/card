using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// 自定义数值
/// 根据对象名字进行排序
/// </summary>
/// <typeparam name="T"></typeparam>
public class CustomList<T> where T : Object
{
    private List<T> list;

    public CustomList()
    {
        list = new List<T>();
    }

    public CustomList(T[] items)
    {
        list = new List<T>(items);
    }

    public T this[int index]
    {
        get
        {
            if (index < 0) return null;
            if (index >= list.Count) return null;
            return list[index];
        }
    }

    [System.Obsolete("Count已经过时，请使用Length")]
    public int Count
    {
        get { return Length; }
    }

    public int Length
    {
        get
        {
            if (list == null) return 0;
            return list.Count;
        }
    }

    public void Add(T item)
    {
        list.Add(item);
    }

    public bool Remove(T item)
    {
        int len = list.Count;
        for (int i = 0; i < len; i++)
        {
            if (list[i] == item)
            {
                list.RemoveAt(i);
                return true;
            }
        }
        return false;
    }

    public bool RemoveAt(int index)
    {
        int len = list.Count;
        if (index >= 0 && index < len)
        {
            list.RemoveAt(index);
            return true;
        }
        return false;
    }

    public void Clear()
    {
        list.Clear();
    }

    /// <summary>
    /// 默认使用名字进行排序
    /// </summary>
    public void Sort()
    {
        DinoComparer<T> dc = new DinoComparer<T>();
        list.Sort(dc);
    }

    public void Sort(IComparer<T> dc)
    {
        list.Sort(dc);
    }

    public void Sort(System.Comparison<T> dc)
    {
        list.Sort(dc);
    }
}

public class PanelComparer<T> : IComparer<T> where T : UIPanel
{
    public int Compare(T x, T y)
    {
        if (x == null)
        {
            if (y == null)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            if (y == null)
            {
                return 1;
            }
            else
            {
                int depth1 = x.depth;
                int depth2 = y.depth;
                return depth1.CompareTo(depth2);
            }
        }
    }
}


public class DinoComparer<T> : IComparer<T> where T : Object
{
    public int Compare(T x, T y)
    {
        if (x == null)
        {
            if (y == null)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            if (y == null)
            {
                return 1;
            }
            else
            {
                string s1 = x.name;
                string s2 = y.name;
                int retval = s1.Length.CompareTo(s2.Length);

                if (retval != 0)
                {
                    return retval;
                }
                else
                {
                    return s1.CompareTo(s2);
                }
            }
        }
    }
}
