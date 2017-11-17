
using UnityEngine;

/// <summary>
/// Tween the custom value
/// @author yangdan
/// </summary>

public class TweenValue : UITweener
{
    public float from = 0;
    public float to = 1;
    public bool updateTable = false;

    private static TweenValueAdapter mTarget;

    public float value { get { return mTarget.value; } set { mTarget.value = value; } }

    protected override void OnUpdate(float factor, bool isFinished)
    {
        value = Mathf.Lerp(from, to, factor);
    }

    /// <summary>
    /// Start the tweening operation.
    /// </summary>

    static public TweenValue Begin(GameObject widget, TweenValueAdapter target, float duration, float value)
    {
        mTarget = target;

        TweenValue comp = UITweener.Begin<TweenValue>(widget, duration);
        comp.from = target.value;
        comp.to = value;

        if (duration <= 0f)
        {
            comp.Sample(1f, true);
            comp.enabled = false;
        }
        return comp;
    }

    [ContextMenu("Set 'From' to current value")]
    public override void SetStartToCurrentValue() { from = value; }

    [ContextMenu("Set 'To' to current value")]
    public override void SetEndToCurrentValue() { to = value; }

    [ContextMenu("Assume value of 'From'")]
    void SetCurrentValueToStart() { value = from; }

    [ContextMenu("Assume value of 'To'")]
    void SetCurrentValueToEnd() { value = to; }
}

/// <summary>
/// TweenValue 适配器
/// </summary>
public interface TweenValueAdapter
{
    float value { get; set; }
}