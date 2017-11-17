using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using AssetBundles;
using UnityEngine.Events;


/// <summary>皮肤项</summary>
public class SkinManagerItem
{
    /// <summary>拥有者</summary>
    public Transform owner;
    /// <summary>身体肤色</summary>
    public Transform skin;
    /// <summary>衣服</summary>
    public Transform cloth;
    /// <summary>头发</summary>
    public Transform hair;

    public SkinManagerLoaderItem loaderItem;
}

/// <summary>皮肤加载项</summary>
public class SkinManagerLoaderItem
{
    public string ownerName;
    public string skinId;
    public E_SkinPart part;
    public Transform target;
    public Transform owner;
}

public class SkinManager
{
    private Dictionary<Transform, SkinManagerItem> m_dic;

    public string SkinName_Cloth = "yifu";
    public string SkinName_Skin = "shenti";
    public string SkinName_Hair = "toufa";

    private bool inLoading = false;
    private List<SkinManagerLoaderItem> m_currentLoaders;

    public UnityAction LoaderCompleteCallBack;

    private static SkinManager m_ins;
    public static SkinManager Instance {

        get{
            if (null == m_ins){
                m_ins = new SkinManager();
            }
            return m_ins;
        }
    }

    /// <summary>设置皮肤  isMain是否是主场</summary>
    public void SetGKSkin(bool isMain,Transform target)
    {
       
    }


    /// <summary>设置皮肤</summary>
    public void SetSkin(int cfgId,Transform target)
    {
       
    }

    /// <summary>设置皮肤</summary>
    public void SetSkin(Transform target,string skinId,E_SkinPart part)
    {
        if(null == m_currentLoaders) m_currentLoaders = new List<SkinManagerLoaderItem>();

        SkinManagerItem skinItem = GetItem(target);

        SkinManagerLoaderItem item = new SkinManagerLoaderItem();
        item.skinId = "playerskin/" + skinId + ".png";
        item.part = part;
        item.ownerName = target.name;
        item.owner = target;
        m_currentLoaders.Add(item);

        switch (part)
        {
            case E_SkinPart.Cloth: item.target = skinItem.cloth; break;
            case E_SkinPart.Hair: item.target = skinItem.hair; break;
            case E_SkinPart.Skin: item.target = skinItem.skin; break;
        }

        if(!inLoading)
            ResourceManager.Instance.LoadTexture(item.skinId, OnLoader_Complete,OnLoader_Error);

        inLoading = true;

        target = null;
        skinId = null;
    }

    /// <summary>加载完成</summary>
    /// <param name="res"></param>
    private void OnLoader_Complete(NormalRes res)
    {
            TextureRes imgRes = res as TextureRes;

            SkinManagerLoaderItem loaderItem = m_currentLoaders[0];

            Transform target = loaderItem.target;

            E_SkinPart part = loaderItem.part;

            //GoalKeeper keeper = target.GetComponent<GoalKeeper>();
            //if(null != keeper && )
            m_currentLoaders.RemoveAt(0);
            if (m_currentLoaders.Count > 0)
            {
                ResourceManager.Instance.LoadTexture(m_currentLoaders[0].skinId, OnLoader_Complete, OnLoader_Error);

             
            }
            else
            {
                if (null != LoaderCompleteCallBack)
                    LoaderCompleteCallBack();

                inLoading = false;
                Clear();
            }

        if (null != target)
        {
            SkinnedMeshRenderer render = target.GetComponent<SkinnedMeshRenderer>();

            Material mat = render.material;
            mat.mainTexture = imgRes.m_texture;
            render.material = mat;
        }

        res = null;
    }

    /// <summary>加载失败</summary>
    /// <param name="res"></param>
    private void OnLoader_Error(string error)
    {

    }

    /// <summary>
    /// 获取皮肤项
    /// </summary>
    /// <param name="target"></param>
    /// <returns></returns>
    public SkinManagerItem GetItem(Transform target)
    {
        if (null == m_dic) m_dic = new Dictionary<Transform, SkinManagerItem>();

        SkinManagerItem item;

        try
        {
            if (!m_dic.TryGetValue(target, out item))
            {
                item = new SkinManagerItem();

                item.owner = target;
                item.skin = DisplayUtil.SearchHierarchyForBone(target.transform, SkinName_Skin);
                item.hair = DisplayUtil.SearchHierarchyForBone(target.transform, SkinName_Hair);
                item.cloth = DisplayUtil.SearchHierarchyForBone(target.transform, SkinName_Cloth);

                m_dic[target] = item;
            }

            return item;
        }
        catch
        {
            Debug.Log("is destory : " + target);
        }

        target = null;
        return null;
    }

    public void RemoveItem(Transform target)
    {
        SkinManagerItem item;

        if (null != m_dic && m_dic.TryGetValue(target, out item))
        {
            m_dic.Remove(target);
        }
    }

    public void Clear()
    {
        inLoading = false;
        m_dic = null;
        m_currentLoaders = null;
        LoaderCompleteCallBack = null;
    }
}
