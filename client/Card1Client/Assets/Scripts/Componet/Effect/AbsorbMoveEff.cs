using System;
using UnityEngine;
using System.Collections;
using DG.Tweening;

/// <summary>
/// 吸收特效
/// </summary>
public class AbsorbMoveEff : MonoBehaviour {

    /// <summary>初始点</summary>
    public Vector3 BombPoint;
    /// <summary>初始速度</summary>
    public float BombSpeed;
    /// <summary>初始加速度</summary>
    public float BombAcc;
    /// <summary>吸收加速度</summary>
    public float AbsorbAcc;
    /// <summary>吸收点</summary>
    public Vector3 AbsorbPoint;
    // Use this for initialization

    private Vector3 mMDir;

    private bool mIsMove;
    private float mEcuteTime = 0;
    private Vector3 mAbsorbVec;
    private Vector3 mBmobDir;
    private Vector3 mExcutePoint;

    private Vector3 mAddV;

    public Ease DoEase;

    void Start ()
    {
       
    }

    private void MyCallback()
    {

    }

    public void Init()
    {
        mIsMove = true;
        BombPoint = transform.localPosition;
        mMDir = (AbsorbPoint - BombPoint).normalized;
        mAbsorbVec = Vector3.zero;
        Execute();
    }

    public void Execute()
    {
        mIsMove = true;
        mEcuteTime = 0;
        mAddV = Vector3.zero;
        Vector3 sDir = -mMDir;
        mExcutePoint = transform.position;

        if (UnityEngine.Random.Range(0f,1f) >= 0.5f)
            mBmobDir = RotationMatrix(mMDir, UnityEngine.Random.Range(15f, 60f));
        else
            mBmobDir = RotationMatrix(-mMDir, UnityEngine.Random.Range(-60f, -15f));

       // transform.DOMoveX(AbsorbPoint.x, 1).SetDelay(2).SetEase(Ease.InBack).OnComplete(MyCallback);
       // transform.DOMoveY(AbsorbPoint.y, 1).SetDelay(2).SetEase(Ease.InBack).OnComplete(MyCallback);
       // transform.DOMove(AbsorbPoint,1).SetEase(DoEase);

      
        //Vector3 myVector = transform.position;
        //DOTween.To(() => myVector, x => myVector = x, AbsorbPoint, 1).SetEase(DoEase);
    }

    public Vector3 RotationMatrix(Vector3 v, float angle)
    {
        angle += 90;
        var x = v.x;
        var y = v.y;
        var sin = Math.Sin(Math.PI * angle / 180);
        var cos = Math.Cos(Math.PI * angle / 180);
        var newX = x * cos + y * sin;
        var newZ = x * -sin + y * cos;
        return new Vector3((float)newX, (float)newZ, transform.position.z);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
	    if(mIsMove)
        {
           

            Vector3 bombSp = Vector3.zero;

            //if (BombSpeed > 0)
            //{
            //    BombSpeed -= Time.deltaTime * BombAcc;

            //    mAbsorbVec += Time.deltaTime * BombSpeed * (mMDir + mBmobDir).normalized;
            //}
            //else
            //{
            //    mMDir = (AbsorbPoint - transform.position).normalized;
            //    mAbsorbVec += Time.deltaTime * AbsorbAcc * mMDir;
            //}

            Vector3 disV = AbsorbPoint - transform.position;
            
            mAddV.x += Time.deltaTime * AbsorbAcc * mMDir.x;
            mAddV.y += Time.deltaTime * AbsorbAcc * mMDir.y;

            mEcuteTime += Time.deltaTime;
           
            mMDir = disV.normalized;

            Vector3 addB = BombSpeed * mBmobDir;
            //Vector3 addV = AbsorbAcc * mMDir;

            float xxx = addB.x * mEcuteTime + mAddV.x;
            float yyy = addB.y * mEcuteTime + mAddV.y;


            //mAbsorbVec += Time.deltaTime * AbsorbAcc * mMDir;
            Vector3 newA = new Vector3(xxx, yyy, transform.position.z);
            Vector3 newPos = mExcutePoint + newA;

            mBmobDir = newA.normalized;

            

           //transform.position = newPos;
        }
	}
}
