using UnityEngine;
using System.Collections;
/// <summary>
/// 控制材质球消隐系数工具类
/// </summary>
public class AlphaCutoffControler : MonoBehaviour 
{
    /// <summary>
    /// 变化参数曲线
    /// </summary>
    public AnimationCurve mAnimationCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
    /// <summary>
    /// 曲线表现的总时间
    /// </summary>
    public float mCurveTimes = 1.0f;
    /// <summary>
    /// 当前的alpha cutoff的值
    /// </summary>
    //private float mfAlphaCutoff = 0.0f;
    /// <summary>
    /// 当前系统的累计增量
    /// </summary>
    private float mFactor = 0.0f;
    /// <summary>
    /// 对应的渲染对象
    /// </summary>
    private Renderer mRender = null;

    void Awake()
    {
       mRender =  this.transform.GetComponent<Renderer>();
    }
    
    // Use this for initialization
	void Start ()
    {
        ///启动前先寻找材质当前的alpha cutoff值
        //mfAlphaCutoff = GetAlphaCutoff(mRender.sharedMaterial);
	}

    /// <summary>
    /// 设置材质球 alpha cutoff值
    /// </summary>
    /// <param name="mat"></param>
    /// <param name="fAlphaCutoff"></param>
    void SetAlphaCutoff(Material mat, float fAlphaCutoff)
    {
        if (mat.HasProperty("_Cutoff"))
        {
            mat.SetFloat("_Cutoff", fAlphaCutoff);
        }  
    }

    /// <summary>
    /// 获取材质球的alpha Cutoff 值
    /// </summary>
    /// <param name="mat"></param>
    /// <returns></returns>
    float GetAlphaCutoff(Material mat)
    {
        if (mat.HasProperty("_Cutoff"))
        {
            return mat.GetFloat("_Cutoff");
        }
        return 0.0f;
    }

	// Update is called once per frame
	void Update () 
    {
        if (mRender == null)
            return;

        //累计时间
        mFactor += Time.deltaTime;

        ///与总时间比较，取出比率
        float fFactor = mFactor / mCurveTimes;

        ///比率规约化
        fFactor = Mathf.Clamp01(fFactor);
        if (fFactor < 1.0f)
        {
            ///调整值域
            float fEval = mAnimationCurve.Evaluate(fFactor);
            SetAlphaCutoff(mRender.sharedMaterial, fEval);
        }
        else 
        {
            ///调整值域
            float fEval = mAnimationCurve.Evaluate(fFactor);
            SetAlphaCutoff(mRender.sharedMaterial, fEval);

            ///当前对象隐藏
            this.gameObject.SetActive(false);
            ///自我卸载
            GameObject.DestroyObject(this);
        } 
    }

    void OnDestroy()
    {
        mFactor = 0.0f;
        //mfAlphaCutoff = 0.0f;
        ///释放对象
        mRender = null;
    }
}
