using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TweenLayerUtil
{
    private Vector3 mOldScale;
    private Vector3 mOldPosition;

    public Transform Target;

    public float AdaptScale = 1.4f;//0.58f

    private Vector3 scaleB;
    private Vector3 tweenB;


    private Tweener mTweenMove;
    private Tweener mTweenScale;
    private bool mBTweenScaleComplete;
    private bool mBTweenPositionComplete;
    public Vector3 EndScale = Vector3.one;

    private Tweener mTweenBMove;
    private Tweener mTweenBScale;
    private bool mBBackTweenScaleComplete;
    private bool mBBackTweenPositionComplete;

    public int FaceX = 1;

    private TD_SkillPrefabInfo mCfgItem;

    public bool TweenOutIsComplete = false;
    public bool TweenBackIsComplete = false;

    public UnityEngine.Events.UnityAction OnTweenOutComplete;
    public UnityEngine.Events.UnityAction OnTweenBackComplete;

    public bool IsMirror;

    public void ResetBool()
    {
        IsMirror = false;
        TweenOutIsComplete = false;
        TweenBackIsComplete = false;

        mBBackTweenScaleComplete = false;
        mBBackTweenPositionComplete = false;

        mBTweenScaleComplete = false;
        mBTweenPositionComplete = false;
    }

    public void Update()
    {
        if(mBTweenScaleComplete && mBTweenPositionComplete)
        {
            TweenOutIsComplete = true;
            mBTweenScaleComplete = false;
            mBTweenPositionComplete = false;

            if (null != OnTweenOutComplete)
                OnTweenOutComplete();
        }

        if (mBBackTweenScaleComplete && mBBackTweenPositionComplete)
        {
            TweenBackIsComplete = true;
            mBBackTweenScaleComplete = false;
            mBBackTweenPositionComplete = false;

            if (null != OnTweenBackComplete)
                OnTweenBackComplete();
        }
    }


    public void TweenToFightLayer(Vector3 starPoint,bool toEnemyPos = false)
    {
        Target.position = starPoint;
        TweenToFightLayer(toEnemyPos);
    }

    public void AdaptMapObjectPosition(Vector3 MapLayerPosition)
    {
        if (IsMirror)
        {
            scaleB.x *= -1;
           // MapLayerPosition.x *= -1;
        }

        Vector3 viewPos = PVPManager.Instance.AvatarCamera.WorldToViewportPoint(MapLayerPosition);
        Vector3 wordPos = PVPManager.Instance.FightCamera.ViewportToWorldPoint(viewPos);
        
        Target.localScale = scaleB;
        Target.position = wordPos;

        tweenB = wordPos;
    }


    public void TweenToFightLayer(bool toEnemyPos = false)
    {
        if (null != mTweenBMove && mTweenBMove.IsPlaying())
            mTweenBMove.Kill();

        if (null != mTweenBScale && mTweenBScale.IsPlaying())
            mTweenBScale.Kill();

        if (null != mTweenMove && mTweenMove.IsPlaying())
            mTweenMove.Kill();

        if (null != mTweenScale && mTweenScale.IsPlaying())
            mTweenScale.Kill();

        TweenOutIsComplete = false;
        TweenBackIsComplete = false;
        mBTweenScaleComplete = false;
        mBTweenPositionComplete = false;

        Target.gameObject.SetActive(true);
        Target.gameObject.layer = LayerMask.NameToLayer("FightLayer");

        mOldScale = Target.localScale;
        mOldPosition = Target.position;

        //float per = AdaptScale / Mathf.Abs(mOldScale.x);
        //Target.localScale *= per;


        scaleB = Target.localScale;
        tweenB = Target.transform.position;

        Vector3 scale = mCfgItem.ToScale.Clone();
        scale.x *= FaceX;

        int mirrorX = IsMirror ? -1 : 1;

        scale.x *= mirrorX;

        mTweenScale = Target.DOScale(scale, 0.5f).OnComplete(()=> {

            mBTweenScaleComplete = true;
        });

        EndScale = scale;

        Vector3 toPos;

        if (!toEnemyPos)
        {
            toPos = mCfgItem.SelfPosition;
            toPos.x *= mirrorX;
            mTweenMove = Target.transform.DOMove(toPos, 0.5f).OnComplete(() =>
            {
                mBTweenPositionComplete = true;
            });
        }
        else
        {
            toPos = mCfgItem.EnemyPosition;
            toPos.x *= mirrorX;
            mTweenMove = Target.transform.DOMove(toPos, 0.5f).OnComplete(() =>
            {
                mBTweenPositionComplete = true;
            });
        }
    }

    public void TweenToFightLayer_ToPoint(Vector3 toScale,Vector3 toPoint)
    {
        if (mTweenMove != null || mTweenScale != null)
        {
            Debug.Log("TweenToFightLayer not complete!");
            return;
        }

        mOldScale = Target.localScale;
        mOldPosition = Target.position;
        mTweenScale = Target.DOScale(toScale, 0.5f);
        mTweenMove = Target.transform.DOMove(toPoint, 0.5f);
    }

    public void InitParams(string resId)
    {
        Vector3 scale = Target.localScale;
        scale.x *= FaceX;

        Target.localScale = scale;

        mOldScale = Target.localScale;
        mOldPosition = Target.position;

        float per = AdaptScale / Mathf.Abs(mOldScale.x);

        scaleB = Target.localScale * per;

        mCfgItem = ProxyInstance.InstanceProxy.Get<SkillPrefabInfoConfig>().GetItem(resId);
        PVPManager.Instance.TweenOut_IsSng = mCfgItem.haveEnemy;
    }

    public void TweenToMapLayer()
    {
        if (mTweenBMove != null || mTweenBScale != null || Target == null)
        {
            return;
        }

        Target.gameObject.SetActive(true);

        mTweenBScale = Target.DOScale(scaleB, 0.5f).OnComplete(OnTweenBack_ScaleComplete);

        mTweenBMove = Target.DOMove(tweenB, 0.5f).OnComplete(OnTweenBack_MoveComplete);
    }

    private void OnTweenBack_MoveComplete()
    {
        mTweenBMove = null;
        mBBackTweenPositionComplete = true;
    }

    private void OnTweenBack_ScaleComplete()
    {
        mTweenBScale = null;
        mBBackTweenScaleComplete = true;
    }

    private void OnTween_MoveComplete()
    {
        Target.gameObject.layer = LayerMask.NameToLayer("MapLayer");
        Target.position = mOldPosition;
        Target.localScale = mOldScale;

        mTweenMove = null;
        mTweenMove = null;
        mTweenBMove = null;
        mTweenBScale = null;

        OnTweenOutComplete = null;
        OnTweenBackComplete = null;

    }
}
