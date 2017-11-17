using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// 通用对象池管理器
/// </summary>
public class PoolManager
{
    public enum PoolKey
    {
        Prefab_LeftChatItem,
        Prefab_RightChatItem,
        Prefab_SystemChatItem,
        Perfab_FBMatchingChatItem,
        Prefab_JumpText,
        Prefab_PlayerCard,
        Prefab_Conditions,
    }

    /// <summary>
    /// 缓存池集合
    /// </summary>
    public static Dictionary<PoolKey, Pools> mPools = new Dictionary<PoolKey, Pools>();

    public static GameObject poolmanager=null;

    /// <summary>
    /// 初始化全局对象池
    /// </summary>
    public static void Init()
    {
        CreatePoolGameObject();     
    }

    /// <summary>
    /// 创建PoolManager
    /// </summary>
    private static void CreatePoolGameObject()
    {
        poolmanager = new GameObject("PoolManager");
        poolmanager.SetActive(false);
        GameObject.DontDestroyOnLoad(poolmanager);
    }

    /// <summary>
    /// 创建对象池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="key"></param>
    /// <param name="destory"></param>
    public static void CreateObjectPools<T>(PoolKey key, bool destory)
    {
        ObjectPools<T> pool = GetPools<T>(key);

        if (pool == null)
        {
            pool = new ObjectPools<T>();
            pool.Create(destory);

            if (mPools.ContainsKey(key))
            {
                mPools[key] = pool;
            }
            else
            {
                mPools.Add(key, pool);
            }
        }
    }

    /// <summary>
    /// 创建Prefab对象池
    /// </summary>
    /// <param name="key"></param>
    /// <param name="prefab"></paramm>
    /// <param name="destory"></para>
    public static void CreatePrefabPools(PoolKey key, GameObject prefab, bool destory)
    {
        PrefabPools pool = GetPools(key);

        if (pool == null)
        {
            pool = new PrefabPools();
            pool.CreatePrefab(prefab, destory);
            if (mPools.ContainsKey(key))
            {
                mPools[key] = pool;
            }
            else
            {
                mPools.Add(key, pool);
            }
        }
        else
        {
            //由于某些界面关闭 导致prefab被销毁，所以再次创建则更新prefab
            pool.UpdatePrefab(prefab);
        }
    }

    /// <summary>
    /// 重置对象池，切换场景时候调用，判断是否需要释放 需要释放则释放掉对象池
    /// </summary>
    public static void ResetPools()
    {
        List<PoolKey> pools = new List<PoolKey>();

        foreach (KeyValuePair<PoolKey, Pools> p in mPools)
        {
            if (p.Value != null)
            {
                if (p.Value.isdestory)
                {
                    p.Value.Dispose();
                    pools.Add(p.Key);
                }
            }
            else
            {
                pools.Add(p.Key);
            }
        }

        for (int i = 0; i < pools.Count; i++)
        {
            mPools.Remove(pools[i]);
        }
    }

    /// <summary>
    /// 清空对象池数据
    /// </summary>
    public static void Clear()
    {
        foreach (KeyValuePair<PoolKey, Pools> p in mPools)
        {
            if (p.Value != null)
            {
                p.Value.Clear();
            }
        }
    }

    /// <summary>
    /// 清空指定对象池中数据
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="key"></param>
    public static void ClearPools<T>(PoolKey key)
    {
        ObjectPools<T> pool = GetPools<T>(key);
        if (pool != null)
        {
            pool.Clear();
        }
    }

    /// <summary>
    /// 释放所有对象池
    /// </summary>
    public static void Dispose()
    {
        foreach (KeyValuePair<PoolKey, Pools> p in mPools)
        {
            if (p.Value != null)
            {
                p.Value.Dispose();
            }
        }
        mPools.Clear();
    }

    /// <summary>
    /// 释放对象池
    /// </summary>
    /// <param name="key"></param>
    public static void DestoryPools(PoolKey key)
    {
        if (mPools.ContainsKey(key))
        {
            Pools pool = mPools[key];
            pool.Dispose();
            mPools.Remove(key);
        }
    }

    /// <summary>
    /// 是否存在对象池
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    public static bool Contains(PoolKey key)
    {
        return mPools.ContainsKey(key);
    }

    /// <summary>
    /// 获得对象池
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    public static List<string> GetPoolList(PoolKey key)
    {
        if (mPools.ContainsKey(key))
        {
            Pools pool = mPools[key];
            return pool.GetList();
        }
        return new List<string>();
    }

    /// <summary>
    /// 获得对象池
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    public static PrefabPools GetPools(PoolKey key)
    {
        if (mPools.ContainsKey(key))
        {
            return mPools[key] as PrefabPools;
        }
        return null;
    }

    /// <summary>
    /// 获得对象池
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    public static ObjectPools<T> GetPools<T>(PoolKey key)
    {
        if (mPools.ContainsKey(key))
        {
            return mPools[key] as ObjectPools<T>;
        }
        return null;
    }

    /// <summary>
    /// 获取对象池中对象数量
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    public static int GetSize<T>(PoolKey key)
    {
        ObjectPools<T> pool = GetPools<T>(key);
        if (pool != null)
        {
            return pool.GetSize();
        }
        return 0;
    }

    /// <summary>
    /// 从对象池中弹出对象
    /// </summary>
    /// <param name="key"></param>
    public static T PopObject<T>(PoolKey key)
    {
        ObjectPools<T> pool = GetPools<T>(key);
        if (pool != null)
        {
            return pool.PopItem();
        }
        else
        {
            return default(T);
        }
    }

    /// <summary>
    /// 从对象池中取出开始处对象，但不弹出对象池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="key"></param>
    /// <returns></returns>
    public static T PeekObject<T>(PoolKey key)
    {
        ObjectPools<T> pool = GetPools<T>(key);
        if (pool != null)
        {
            return pool.PeekItem();
        }
        else
        {
            return default(T);
        }
    }

    /// <summary>
    /// 将普通对象压入对象池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="key"></param>
    /// <param name="value"></param>
    public static void PushObject<T>(PoolKey key, T value)
    {
        ObjectPools<T> pool = GetPools<T>(key);
        if (pool != null)
        {
            pool.PushItem(value);

            GameObject go = (value as GameObject);
            if (go != null)
            {
                if (poolmanager == null)
                {
                    CreatePoolGameObject();
                }
                go.SetActive(false);
                go.transform.parent = poolmanager.transform;
            }
        }

    }

    /// <summary>
    /// 从对象池中取出开始处对象，但不弹出对象池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="key"></param>
    /// <returns></returns>
    public static GameObject PeekPrefab(PoolKey key)
    {
        PrefabPools pool = GetPools<GameObject>(key) as PrefabPools;
        if (pool != null)
        {
            return pool.PeekItem();
        }
        else
        {
            return null;
        }
    }

    /// <summary>
    /// 重对象池中弹出对象
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    public static GameObject PopPrefab(PoolKey key)
    {
        PrefabPools pool = GetPools<GameObject>(key) as PrefabPools;
        if (pool != null)
        {
            return pool.PopItem();
        }
        return null;
    }

    /// <summary>
    /// 将GameObject 压入到对象池
    /// </summary>
    /// <param name="key"></param>
    /// <param name="value"></param>
    public static void PushPrefab(PoolKey key, GameObject value)
    {
        PrefabPools pool = GetPools<GameObject>(key) as PrefabPools;
        if (pool != null)
        {
            pool.PushItem(value);

            GameObject go = (value as GameObject);
            if (go != null)
            {
                if (poolmanager == null)
                {
                    CreatePoolGameObject();
                }
                go.SetActive(false);
                go.transform.parent = poolmanager.transform;
            }
        }
        else
        {
            LogSystem.Log("PushPrefab : ", key.ToString());
        }
    }

    /// <summary>
    /// 将对象压入对象池
    /// </summary>
    /// <param name="key"></param>
    /// <param name="value"></param>
    //public static void PushItem<T>(PoolKey key, T value)
    //{
    //    if (value is GameObject)
    //    {
    //        PushPrefab(key, value as GameObject);
    //    }
    //    else
    //    {
    //        PushObject<T>(key, value);
    //    }
    //}
}
