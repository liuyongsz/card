using UnityEngine;
using System.Collections;

/// <summary>
/// 特效控制Shader:Effect/TweenScaleRotation变化
/// </summary>
[RequireComponent(typeof(Renderer))]
[ExecuteInEditMode]
public class EffectScaleRotationCtr : MonoBehaviour {

	public bool ScaleRtTween;	//是否启用渐变
	public float ScaleRtDelay;
	public AnimationCurve scaleAnimCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
	public AnimationCurve rtAnimCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

    [Range(0.01f,2)]
    public float Scale = 1.0f;
    public float Rotation = 0f;

	private Material mat;
	private float ScaleRtTime;
	private float ScaleRtEndTime;
    private float currentRotation;
    private int RotationAndScaleID;
    private Vector3 RotationAndScale;
    private void Start()
	{
		mat = GetComponent<Renderer>().sharedMaterial;
        ScaleRtTime = -ScaleRtDelay;
        ScaleRtEndTime = scaleAnimCurve[scaleAnimCurve.length - 1].time;
        RotationAndScaleID = Shader.PropertyToID("_ScaleAndRotation");
    }

	private void Update()
	{
		if (ScaleRtTween)
		{
            ScaleRtTime += Time.deltaTime;
			if (ScaleRtTime >= 0)
			{
                if (ScaleRtTime <= ScaleRtEndTime)
                {
                    currentRotation = rtAnimCurve.Evaluate(ScaleRtTime) + Rotation;
                    RotationAndScale.x = 1 / (scaleAnimCurve.Evaluate(ScaleRtTime) * Scale);
                    RotationAndScale.y = Mathf.Sin(currentRotation);
                    RotationAndScale.z = Mathf.Cos(currentRotation);
                    mat.SetVector(RotationAndScaleID, RotationAndScale);
                }
                else
                    ScaleRtTween = false;
			}
		}

		if (!ScaleRtTween)
			this.enabled = false;
	}
}
