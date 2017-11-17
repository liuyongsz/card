using System;
using System.Collections.Generic;

/// <summary>
/// 字典替代类,简化了遍历操作
/// Author：chengang1
/// 修改人 zhangrj
/// 修改原因：mList（存储的键值暴露出来，容易被人修改）
/// 修改时间：20160630
/// 修改原因：每次取数据都会去判断空值或越界保护，去除这些逻辑保护！（逻辑端自己保护）
/// 修改时间：20160718
/// </summary>
/// <typeparam name="TKey"></typeparam>
/// <typeparam name="TValue"></typeparam>
public class DictionaryEx<TKey, TValue> : Dictionary<TKey, TValue>
{
    /// <summary>
    /// 字典键值
    /// </summary>
    public List<TKey> mList = new List<TKey>();

    public DictionaryEx()
    { }
    public DictionaryEx(IEqualityComparer<TKey> comparer)
        : base(comparer)
    {
    }

    /// <summary>
    /// 增加
    /// </summary>
    /// <param name="tkey"></param>
    /// <param name="tvalue"></param>
    public new void Add(TKey tkey, TValue tvalue)
    {
        mList.Add(tkey);
        base.Add(tkey, tvalue);
    }
    /// <summary>
    /// 移除
    /// </summary>
    /// <param name="tkey"></param>
    /// <returns></returns>
    public new bool Remove(TKey tkey)
    {
        mList.Remove(tkey);
        return base.Remove(tkey);
    }

    /// <summary>
    /// 移除
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public bool RemoveAt(int index)
    {
        if (index >= 0 && index < mList.Count)
        {
            TKey key = GetKey(index);
            if (key != null)
            {
                if (mList.Remove(key))
                    return base.Remove(key);
            }
        }
        return false;
    }

    public void Sort()
    {
        mList.Sort();
    }
    public void Sort(Comparison<TKey> comparison)
    {
        mList.Sort(comparison);
    }
    public void Sort(IComparer<TKey> comparer)
    {
        mList.Sort(comparer);
    }
    public void Sort(int index, int count, IComparer<TKey> comparer)
    {
        mList.Sort(index, count, comparer);
    }

    /// <summary>
    /// 方便取存值,get需要预防空值,set会自动选择set还是add.
    /// </summary>
    /// <param name="tkey"></param>
    /// <returns></returns>
    public new TValue this[TKey tkey]
    {
        get
        {
            return base[tkey];
        }
        set
        {
            if (ContainsKey(tkey))
            {
                base[tkey] = value;
            }
            else
            {
                Add(tkey, value);
            }
        }
    }

    public bool GetTryValue(int index, out TValue value)
    {
        if (index >= 0 && index < mList.Count)
        {
            TKey key = default(TKey);
            GetTryKey(index, out key);
            if (key == null)
            {
                value = default(TValue);
                return false;
            }
            value = this[key];
            return true;
        }
        value = default(TValue);
        return false;
    }

    public bool GetTryKey(int index, out TKey value)
    {
        if (index >= 0 && index < mList.Count)
        {
            value = mList[index];
            return true;
        }
        value = default(TKey);
        return false;
    }

    /// <summary>
    /// 通过索引获取Value
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public TValue GetValue(int index)
    {
        return base[mList[index]];
    }

    /// <summary>
    /// 安全的取得Value，否则取得null
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public TValue GetValueSafe(int index)
    {
        if (mList != null)
        {
            if (mList[index] != null)
            {
                if(base.ContainsKey(mList[index]))
                {
                    return base[mList[index]];
                }
            }
        }

        return default(TValue);
    }

    /// <summary>
    /// 通过索引获取键值
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public TKey GetKey(int index)
    {
        return mList[index];
    }

    /// <summary>
    /// 清除数据
    /// </summary>
    public new void Clear()
    {
        mList.Clear();
        base.Clear();
    }
}