using UnityEngine;
using System.Collections.Generic;

public class ObjectPools<T> : Pools
{
    /// <summary>
    /// 缓存队列池
    /// </summary>
    protected Queue<T> mPools;

    /// <summary>
    /// 获得对象池中的数据
    /// </summary>
    /// <returns></returns>
    public override List<string> GetList()
    {
        object[] array = mPools.ToArray() as object[];
        List<string> list = new List<string>();

        System.Type type;
        for (int i = 0; i < array.Length; i++)
        {
            type = array[i].GetType();
            list.Add(type.ToString());
        }

        return list;
    }

    /// <summary>
    /// 创建对象池
    /// </summary>
    /// <param name="prefab">缓存的对象</param>
    /// <param name="destory">是否在切换场景时，释放缓存池</param>
    public virtual void Create(bool destory)
    {
        isdestory = destory;
        mPools = new Queue<T>();
    }

    /// <summary>
    /// 返回位于 对象池 开始处的对象但不将其移除。
    /// </summary>
    /// <returns></returns>
    public virtual T PeekItem()
    {
        if (mPools == null)
        {
            LogSystem.LogWarning("Pools is not Create");
            return default(T);
        }
        else
        {
            if (mPools.Count > 0)
            {
                T o = mPools.Peek();
                return (T)o;
            }
            else
            {
                return default(T);
            }
        }
    }

    /// <summary>
    /// 返回位于 对象池 开始处的对象并将其移除对象池。
    /// </summary>
    /// <returns></returns>
    public virtual T PopItem()
    {
        if (mPools == null)
        {
            LogSystem.LogWarning("Pools is not Create");
            return default(T);
        }
        else
        {
            if (mPools.Count > 0)
            {
                T o = mPools.Dequeue();
                if (o is GameObject)
                {
                    return (T)o;
                }
                else if (o is IObject)
                {
                    (o as IObject).Reset();
                }

                return (T)o;
            }
            else
            {
                return InstantiateItem();
            }
        }
    }

    public virtual void PushItem(T value)
    {
        if (mPools != null)
        {
            if (value != null)
            {
                if (!mPools.Contains(value))
                {
                    mPools.Enqueue(value);
                }
                else
                {
                    LogSystem.Log(this, " already exists : ", value.ToString());
                }
            }
        }
    }

    /// <summary>
    /// 获得对象池当前大小
    /// </summary>
    /// <returns></returns>
    override public int GetSize()
    {
        if (mPools != null)
        {
            return mPools.Count;
        }
        return 0;
    }

    public virtual T InstantiateItem()
    {
        return System.Activator.CreateInstance<T>();
    }

    /// <summary>
    /// 释放池对象
    /// </summary>
    override public void Dispose()
    {
        mPools.Clear();
        mPools = null;
    }

    /// <summary>
    /// 清理
    /// </summary>
    public override void Clear()
    {
        mPools.Clear();
    }
}
