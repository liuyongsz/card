using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 基于NGUI的UI特效自适应
/// 特效总显示在UI上(相对同一个UIPanel而言)
/// zhangrj
/// 20151016
/// </summary>
public class AdaptiveRenderQueue : MonoBehaviour {

    GameObject mGameObject = null;
    /// <summary>
    /// 最近父节点Panel
    /// </summary>
    UIPanel mPanel = null;

    /// <summary>
    /// 特效深度
    /// 基于相同Panel下的特效比较（值大的显示在上面）
    /// </summary>
    public int mEffectDepth = 0;

    /// <summary>
    /// Panel下的DrawCalls
    /// </summary>
    int mDrawCalls = 0;

    /// <summary>
    /// Panel的起始RenderQueue
    /// </summary>
    int mRenderQueue = 0;

	/// <summary>
	/// 设置层级到最底层
	/// </summary>
	bool mUnderUI = false;

    List<Renderer> rendererList = new List<Renderer>();

    /// <summary>
    /// 特效加载器
    /// </summary>
    ModelLoadEffect[] effects;

    public int GetDrawCalls
    {
        get { return rendererList.Count; }
    }

    void Awake()
    {
        mGameObject = this.gameObject;
    }

    void OnEnable()
    {
        effects = mGameObject.GetComponentsInChildren<ModelLoadEffect>(true);
        Init();
    }

    void OnDisable()
    {
        if (mPanel != null)
        {
            mPanel.RemoveRenderQuene(this);
            rendererList.Clear();
        }
        if (effects != null)
        {
            int len = effects.Length;
            for (int i = 0; i < len; ++i)
            {
                if (effects[i] != null)
                {
                    effects[i].gameObjectActiveCallBack = null;
                }
            }
        }
    }

    void Init()
    {
        if (mPanel != null)
            mPanel.RemoveRenderQuene(this);

        mPanel = GetRootPanel(mGameObject);

        if (mPanel != null)
        {
            mPanel.AddRenderQuene(this);
            RefreshRenderer();
        }

        if (effects != null)
        {
            int len = effects.Length;
            for (int i = 0; i < len; ++i)
            {
                if (effects[i] != null)
                {
                    effects[i].gameObjectActiveCallBack = RefreshRenderer;
                }
            }
        }
    }

    /// <summary>
    /// 刷新
    /// </summary>
    public void RefreshRenderer()
    {
        if (mPanel != null)
        {
            rendererList.Clear();
            Renderer[] rens = mGameObject.GetComponentsInChildren<Renderer>(true);
            int len = rens.Length;
            for (int i = 0; i < len; ++i)
            {
                if (rens[i] != null && rens[i].material != null && !rendererList.Contains(rens[i]))
                {
                    rendererList.Add(rens[i]);
                }
            }

            ParticleSystem[] ps = mGameObject.GetComponentsInChildren<ParticleSystem>(true);
            len = ps.Length;
            for (int i = 0; i < len; ++i)
            {
                if (ps[i].GetComponent<Renderer>() != null && ps[i].GetComponent<Renderer>().material != null && !rendererList.Contains(ps[i].GetComponent<Renderer>()))
                {
                    rendererList.Add(ps[i].GetComponent<Renderer>());
                }
            }

            rendererList.Sort(RendererCompareFunc);

            OnUpdate(mPanel.startingRenderQueue, mPanel.drawCalls.size, true);
        }
    }

	/// <summary>
	/// 设置层级到面板背景
	/// </summary>
	public void setUnderUI(bool under)
	{
		mUnderUI = under;
	}

    /// <summary>
    /// 更新显示层
    /// </summary>
    /// <param name="renderQuene"></param>
    /// <param name="drawCalls"></param>
    /// <param name="bnow"></param>
    public void OnUpdate(int renderQuene, int drawCalls, bool bnow = false)
    {
        if (bnow)
        {
            mRenderQueue = renderQuene;
            mDrawCalls = drawCalls;
            SetRenderQuene();
        }
        else
        {
			if (renderQuene != mRenderQueue || drawCalls != mDrawCalls || mUnderUI)
            {
                mRenderQueue = renderQuene;
                mDrawCalls = drawCalls;
                SetRenderQuene();
            }
        }
    }

    void OnDestroy()
    {
        if (mPanel != null)
        {
            mPanel.RemoveRenderQuene(this);
            rendererList.Clear();
        }
        if (effects != null)
        {
            int len = effects.Length;
            if (len <= 0) return;
            for (int i = len - 1; i >= 0; --i)
            {
                if (effects[i] != null)
                {
                    effects[i].gameObjectActiveCallBack = null;
                }
            }
        }
    }

    /// <summary>
    /// 获取父节点Panel
    /// </summary>
    /// <param name="root"></param>
    /// <returns></returns>
    UIPanel GetRootPanel(GameObject root)
    {
        if (root == null)
            return null;
        UIPanel panel = root.GetComponent<UIPanel>();
        if (panel == null)
        {
            Transform parent = root.transform.parent;
            if (parent == null)
                return null;
            if (parent.tag == "UIEvent")
            {
                return parent.GetComponent<UIPanel>();
            }
            else
                return GetRootPanel(parent.gameObject);
        }
        else
            return panel;
    }

    /// <summary>
    /// 设置渲染队列
    /// </summary>
    void SetRenderQuene()
    {
        //1000.Background这个队列被最先渲染。它被用于skyboxes等。
        //2000.Geometry这是默认的渲染队列。它被用于绝大多数对象。不透明几何体使用该队列。
        //2450.AlphaTest通道检查的几何体使用该队列。它和Geometry队列不同，对于在所有立体物体绘制后渲染的通道检查的对象，它更有效。
        //3000.Transparent该渲染队列在Geometry和AlphaTest队列后被渲染。任何通道混合的（也就是说，那些不写入深度缓存的Shaders）对象使用该队列，例如玻璃和粒子效果。
        //4000.Overlay该渲染队列是为覆盖物效果服务的。任何最后被渲染的对象使用该队列，例如镜头光晕。

        //NGUI默认RenenderQuene为3000
        if (rendererList != null && rendererList.Count > 0)
        {
            int queue = 3000;
            int index = 0;
            for (int i = 0; i < rendererList.Count; ++i)
            {
				if (mUnderUI) 
				{
					rendererList [i].material.renderQueue = 3001;
				} 
				else 
				{
					if (rendererList[i].material.renderQueue >= 3000)
					{
						if (rendererList[i].material.renderQueue > queue)
						{
							queue = rendererList[i].material.renderQueue;
							index++;
							//rendererList[i].material.renderQueue = mRenderQueue + mDrawCalls + mEffectDepth + index + 1;
						}
						rendererList[i].material.renderQueue = mRenderQueue + mDrawCalls + mEffectDepth + index + 1;
					}
					//rendererList[i].material.renderQueue = mRenderQueue + mDrawCalls + mEffectDepth + i + 1;//将特效显示在最上层
				}
            }
        }
    }

    /// <summary>
    /// 比较函数
    /// </summary>
    /// <param name="left"></param>
    /// <param name="right"></param>
    /// <returns></returns>
    static public int RenderQueueCompareFunc(AdaptiveRenderQueue left, AdaptiveRenderQueue right)
    {
        if (left.mEffectDepth < right.mEffectDepth) return -1;
        if (left.mEffectDepth > right.mEffectDepth) return 1;
        return 0;
    }

    /// <summary>
    /// Renderer比较
    /// </summary>
    /// <param name="renA"></param>
    /// <param name="renB"></param>
    /// <returns></returns>
    int RendererCompareFunc(Renderer renA, Renderer renB)
    {
        //if (mGameObject == null) return 0;
        ////计算出A,B 分别相对Root的坐标Z的偏差
        //float az = mGameObject.transform.InverseTransformPoint(renA.transform.position).z;
        //float bz = mGameObject.transform.InverseTransformPoint(renB.transform.position).z;
        //return bz.CompareTo(az);

        return renA.material.renderQueue.CompareTo(renB.material.renderQueue);

        ////优先特效粒子
        //ParticleSystem aParticle = renA.GetComponent<ParticleSystem>();
        //ParticleSystem bParticle = renB.GetComponent<ParticleSystem>();
        //if (aParticle == null)
        //{
        //    if (bParticle != null)
        //        return -1;
        //}
        //else
        //{
        //    if (bParticle == null)
        //        return 1;
        //}

        //if (mGameObject == null) return 0;
        //float az = 0;
        //float bz = 0;
        //bool find = false;
        //if (renA.gameObject != mGameObject && renB.gameObject != mGameObject)
        //{
        //    if (renA.transform.parent == renB.transform.parent)
        //    {
        //        az = renA.transform.localPosition.z;
        //        bz = renB.transform.localPosition.z;
        //        find = true;
        //    }
        //}
        //if (!find)
        //{
        //    az = renA.transform.position.z;
        //    bz = renB.transform.position.z;
        //}

        //return bz.CompareTo(az);
    }
}
