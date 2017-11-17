using UnityEngine;
using System.Collections;

public class ScaleBuffEffect : MonoBehaviour {

    private TweenScale ts;

    private Transform mTrans;

    private bool bPlaying;

    public bool Playing
    {
        get { return bPlaying; }
    }

    void Awake()
    {
        mTrans = transform;
    }


    public void Play(float _time, float _scale)
    {
        if (mTrans == null)
        {
            mTrans = transform;
        }
        if (mTrans == null)
            return;
        float curScale = mTrans.localScale.x;
        //已经达到当前缩放
        if (MathUtils.FloatEquals(curScale, _scale))
        {
            MonoBehaviour.Destroy(this);
            return;
        }
        bPlaying = true;
        ts = TweenScale.Begin(mTrans.gameObject, _time, Vector3.one * _scale);
        ts.method = UITweener.Method.EaseInOut;
        ts.SetOnFinished(Finish);
    }

    /// <summary>
    /// 完成
    /// </summary>
    void Finish()
    {
        bPlaying = false;
        MonoBehaviour.Destroy(this);
        LogSystem.Log("Finish");
    }

    void OnDestroy()
    {
        if (ts != null)
            MonoBehaviour.Destroy(ts);
        ts = null;
        mTrans = null;
    }
}
