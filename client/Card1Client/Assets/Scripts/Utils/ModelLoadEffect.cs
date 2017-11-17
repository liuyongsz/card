using UnityEngine;
using System.Collections;

/// <summary>
/// 加载特效脚本
/// </summary>
public class ModelLoadEffect : EffectLevel
{

    /// <summary>
    /// 对象加载完成回调
    /// </summary>
    /// <param name="odata">已加载对象</param>
    public delegate void LoadFuncDelegate(string strFileName, AssetCallBack callback);

    public static LoadFuncDelegate LoadFunc = null;

    /// <summary>
    /// 加载模型完成回调
    /// </summary>
    public System.Action<GameObject> LoadModelComplete;

    public string mstrPath = string.Empty;

    public Vector3 mvecPos = Vector3.zero;

    public Vector3 mvecRot = Vector3.zero;

    public Vector3 mvecScale = Vector3.one;

    /// <summary>
    /// 渲染层级
    /// </summary>
    public int miRenderQ = 3050;

    private GameObject mGoEffect = null;

    private bool bLoaded = false;

    private GameObject mGo;

    /// <summary>
    /// 对象显示改变
    /// </summary>
    public System.Action gameObjectActiveCallBack;

    void Awake()
    {
        mGo = gameObject;
    }

    void OnDestroy()
    {
        if (gameObjectActiveCallBack != null)
            gameObjectActiveCallBack = null;
    }

    protected override void SetActive(bool bShow)
    {
        if (bShow)
        {
            if (mGoEffect != null)
            {
                mGoEffect.SetActive(true);
                if (gameObjectActiveCallBack != null)
                    gameObjectActiveCallBack();
            }
            else
            {
                if (!string.IsNullOrEmpty(mstrPath) && ModelLoadEffect.LoadFunc != null && !bLoaded)
                {
                    bLoaded = true;
                    ModelLoadEffect.LoadFunc(mstrPath, ResLoadComplete);
                }
            }
        }
        else
        {
            if (mGoEffect != null)
            {
                mGoEffect.SetActive(false);
                if (gameObjectActiveCallBack != null)
                    gameObjectActiveCallBack();
            }
        }
    }

    protected override void DestoryELevel()
    {
        mGoEffect = null;
        mGo = null;
        gameObjectActiveCallBack = null;
    }
	
    void ResLoadComplete(params object[] args)
    {
        bLoaded = false;
        if (mGo == null)
            return;
        GameObject o = args[0] as GameObject;
        if (o != null)
        {
            UnityEngine.GameObject go = Instantiate(o, Vector3.zero, Quaternion.identity) as UnityEngine.GameObject;
            if (go != null)
            {
                go.transform.parent = transform;
                go.transform.localPosition = mvecPos;
                go.transform.localRotation = Quaternion.Euler(mvecRot);
                go.transform.localScale = mvecScale;
                mGoEffect = go;
                NGUITools.SetLayer(mGoEffect, mGo.layer);
                //if (mGo.layer == LayerMask.NameToLayer("UI"))
                //    DelegateProxy.SetObjRenderQ(mGoEffect, LayerMask.NameToLayer("UI"), miRenderQ);
                mGoEffect.SetActive(mbCurActive);
            }
        }
        if (LoadModelComplete != null)
            LoadModelComplete(mGoEffect);
        if (gameObjectActiveCallBack != null)
            gameObjectActiveCallBack();
    }
}
