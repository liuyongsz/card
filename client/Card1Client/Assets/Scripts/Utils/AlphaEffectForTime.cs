using UnityEngine;

public class AlphaEffectForTime : MonoBehaviour
{
    public float mfDelayTime = 0.0f;
    public float mfDuration = 0.0f;
    public float mfAlpha = 1.0f;

    public float mfTime = 0.0f;
    public bool mbPlay = false;
    public void Start()
    {
        mfTime = Time.time;
    }

    public void LateUpdate()
    {
        if (Time.time - mfTime < mfDelayTime)
        {
            return;
        }
        else
        {
            if (!mbPlay)
            {
                TweenAlpha tweenAlpha = TweenAlpha.Begin(this.gameObject, mfDuration, mfAlpha);
                tweenAlpha.PlayForward();
                mbPlay = true;
            }
            else if (Time.time - mfTime > mfDelayTime + mfDuration)
            {
                Destroy(this);
            }
        }
    }
}
