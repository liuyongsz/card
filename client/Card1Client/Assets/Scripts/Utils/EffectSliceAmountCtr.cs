using UnityEngine;
using System.Collections;

/// <summary>
/// 特效控制Shader._SliceAmount值
/// </summary>
[RequireComponent(typeof(Renderer))]
public class EffectSliceAmountCtr : MonoBehaviour {

	public float delay;
	public AnimationCurve animCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

	private Material mat;
	private float time;
	private float endTime;

	private void Start()
	{
		mat = GetComponent<Renderer>().material;
		time = -delay;
		endTime = animCurve[animCurve.length - 1].time;
	}

	private void Update()
	{
		time += Time.deltaTime;
		if (time < 0)
			return;
		if (time >= endTime)
			this.enabled = false;

		mat.SetFloat("_SliceAmount", animCurve.Evaluate(time));
	}
}
