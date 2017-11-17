using UnityEngine;
using System.Collections;

public class LabelBlingEffect : UITweener
{
    public int timers = 3;
    [Range(0f, 1f)]
    public float from = 1f;
    [Range(0f, 1f)]
    public float to = 1f;
    public Color effectColor;

    UILabel mLabel;
    Color originalEffectColor;
    Color originalColor;
    int originalTimes;
    UILabel.Effect originalEffect;

    public UILabel cachedLabel
    {
        get
        {
            if (mLabel == null)
            {
                mLabel = GetComponent<UILabel>();
                if (mLabel == null) mLabel = GetComponentInChildren<UILabel>();
            }
            return mLabel;
        }
    }

    [System.Obsolete("Use 'value' instead")]
    public float alpha { get { return this.value; } set { this.value = value; } }

    /// <summary>
    /// Tween's current value.
    /// </summary>

    public float value
    {
        get { return cachedLabel.effectColor.a; }
        set
        {
            Color c = cachedLabel.effectColor;
            c.a = value;
            cachedLabel.effectColor = c;
        }
    }

    void Awake()
    {
        originalTimes = timers;
        timers *= 2;

        originalEffectColor = cachedLabel.effectColor;
        originalEffect = mLabel.effectStyle;
        originalColor = cachedLabel.color;
    }

    /// <summary>
    /// Tween the value.
    /// </summary>

    protected override void OnUpdate(float factor, bool isFinished)
    {
        value = Mathf.Lerp(from, to, factor);
        if (isFinished)
        {
            timers -= 1;
            enabled = true;
            Toggle();
        }

        if (timers < 1)
        {
            enabled = false;
            StopEffect();
        }
    }

    /// <summary>
    /// Start the tweening operation.
    /// </summary>

    static public TweenAlpha Begin(GameObject go, float duration, float alpha)
    {
        TweenAlpha comp = UITweener.Begin<TweenAlpha>(go, duration);
        comp.from = comp.value;
        comp.to = alpha;

        if (duration <= 0f)
        {
            comp.Sample(1f, true);
            comp.enabled = false;
        }
        return comp;
    }

    public void PlayEffect()
    {
        cachedLabel.effectStyle = UILabel.Effect.Outline;
        cachedLabel.effectColor = effectColor;
        cachedLabel.color = Color.yellow;
        timers = originalTimes * 2;
        enabled = true;
        base.PlayForward();
    }

    public void StopEffect()
    {
        mLabel.effectStyle = originalEffect;
        cachedLabel.effectColor = originalEffectColor;
        cachedLabel.color = originalColor;
    }

    public override void SetStartToCurrentValue() { from = value; }
    public override void SetEndToCurrentValue() { to = value; }
}
