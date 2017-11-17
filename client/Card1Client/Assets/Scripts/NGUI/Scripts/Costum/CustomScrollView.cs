///作者  zhangrj
///日期  2014112
///功能  自定义滚动视窗  
///继承于UIScrollView  增加drag（vector3）
using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
[RequireComponent(typeof(UIPanel))]
[AddComponentMenu("NGUI/Custom/ScrollView")]
public class CustomScrollView : UIScrollView
{
    /// <summary>
    /// 重载水平移动判断
    /// </summary>
    public override bool shouldMoveHorizontally
    {
        get
        {
            float size = bounds.size.x;
            if (mPanel.clipping == UIDrawCall.Clipping.SoftClip) size += mPanel.clipSoftness.x * 2f;
            bool result =size > mPanel.width;
            if (!result)
            {
                mCalculatedBounds = false;
            }
            return result;
        }
    }

    /// <summary>
    /// 重载垂直移动判断
    /// </summary>
    public override bool shouldMoveVertically
    {
        get
        {
            float size = bounds.size.y;
            if (mPanel.clipping == UIDrawCall.Clipping.SoftClip) size += mPanel.clipSoftness.y * 2f;
            bool result =size > mPanel.height;
            if (!result)
            {
                mCalculatedBounds = false;
            }
            return result;
        }
    }

    /// <summary>
    /// 自定义拖动
    /// </summary>
    /// <param name="offset"></param>
    public void Drag(Vector3 offset)
    {
        if (enabled && NGUITools.GetActive(gameObject) && mShouldMove)
        {
            if (offset.x != 0f || offset.y != 0f)
            {
                offset = mTrans.InverseTransformDirection(offset);

                if (movement == Movement.Horizontal)
                {
                    offset.y = 0f;
                    offset.z = 0f;
                }
                else if (movement == Movement.Vertical)
                {
                    offset.x = 0f;
                    offset.z = 0f;
                }
                else if (movement == Movement.Unrestricted)
                {
                    offset.z = 0f;
                }
                else
                {
                    offset.Scale((Vector3)customMovement);
                }
                offset = mTrans.TransformDirection(offset);
            }

            // Adjust the momentum
            mMomentum = Vector3.Lerp(mMomentum, mMomentum + offset * (0.01f * momentumAmount), 0.67f);

            // Move the scroll view
            if (!iOSDragEmulation || dragEffect != DragEffect.MomentumAndSpring)
            {
                MoveAbsolute(offset);
            }
            else
            {
                Vector3 constraint = mPanel.CalculateConstrainOffset(bounds.min, bounds.max);

                if (constraint.magnitude > 1f)
                {
                    MoveAbsolute(offset * 0.5f);
                    mMomentum *= 0.5f;
                }
                else
                {
                    MoveAbsolute(offset);
                }
            }

            // We want to constrain the UI to be within bounds
            if (restrictWithinPanel &&
                mPanel.clipping != UIDrawCall.Clipping.None &&
                dragEffect != DragEffect.MomentumAndSpring)
            {
                RestrictWithinBounds(true, canMoveHorizontally, canMoveVertically);
            }
        }
    }
}
