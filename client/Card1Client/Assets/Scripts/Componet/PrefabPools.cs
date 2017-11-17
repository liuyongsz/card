using UnityEngine;
using System.Collections.Generic;

public class PrefabPools : ObjectPools<GameObject>
{
    /// <summary>
    /// 对象池实例对象缓存
    /// </summary>
    protected GameObject mPrefab = null;

    /// <summary>
    /// 获得对象池中的数据
    /// </summary>
    /// <returns></returns>
    public override List<string> GetList()
    {
        GameObject[] array = mPools.ToArray() as GameObject[];
        List<string> list = new List<string>();

        for (int i = 0; i < array.Length; i++)
        {
            list.Add(array[i].name);
        }

        return list;
    }

    /// <summary>
    /// 创建对象池
    /// </summary>
    /// <param name="prefab">缓存的对象</param>
    /// <param name="destory">是否在切换场景时，释放缓存池</param>
    public void CreatePrefab(GameObject prefab, bool destory)
    {
        mPrefab = prefab;
        isdestory = destory;
        mPools = new Queue<GameObject>();
    }

    /// <summary>
    /// 设置Prefab对象
    /// </summary>
    /// <param name="prefab"></param>
    public void UpdatePrefab(GameObject prefab)
    {
        mPrefab = prefab;
    }

    /// <summary>
    /// 返回位于 对象池 开始处的对象但不将其移除。
    /// </summary>
    /// <returns></returns>
    public override GameObject PeekItem()
    {
        if (mPools == null)
        {
            LogSystem.LogWarning("Pools is not Create");
            return null;
        }
        else
        {
            if (mPools.Count > 0)
            {
                return mPools.Peek();
            }
            else
            {
                return null;
            }
        }
    }

    /// <summary>
    /// 返回位于 对象池 开始处的对象并将其移除对象池。
    /// </summary>
    /// <returns></returns>
    public override GameObject PopItem()
    {
        if (mPools == null)
        {
            LogSystem.LogWarning("Pools is not Create");
            return null;
        }
        else
        {
            if (mPools.Count > 0)
            {
                return mPools.Dequeue();
            }
            else
            {
                return InstantiateItem();
            }
        }
    }

    /// <summary>
    /// 实例化prefab
    /// </summary>
    /// <returns></returns>
    override public GameObject InstantiateItem()
    {
        GameObject item = GameObject.Instantiate(mPrefab) as GameObject;
        if (item != null && PoolManager.poolmanager != null)
        {
            Transform t = item.transform;
            t.parent = PoolManager.poolmanager.transform;
            t.localPosition = Vector3.zero;
            t.localRotation = Quaternion.identity;
            t.localScale = Vector3.one;
        }
        if (item != null)
            item.gameObject.SetActive(true);
        return item;
    }

    /// <summary>
    /// 释放池对象
    /// </summary>
    override public void Dispose()
    {
        mPrefab = null;
        GameObject temp;
        while (mPools.Count > 0)
        {
            temp = mPools.Dequeue();
            GameObject.Destroy(temp);
        }

        base.Dispose();
    }
    #region 释放
    //add by chenfei 20150825
    ~PrefabPools()
    {
         mPrefab=null;
        GameObject temp;
        while (mPools.Count > 0)
        {
            temp = mPools.Dequeue();
            // Destroy 只能在Unity主线程调用
            //GameObject.Destroy(temp);
        }
    }
    #endregion;


}
