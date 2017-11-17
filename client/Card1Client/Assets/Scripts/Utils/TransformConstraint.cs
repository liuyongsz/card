using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class TransformConstraint : MonoBehaviour {

	public Transform target;

	public bool position;
	public bool rotation;
//	public bool scale;
	
	// Update is called once per frame
	void Update () {
		if (target == null)
			return;

		if (position) {
			transform.position = target.position;
		}

		if (rotation) {
			transform.rotation = target.rotation;
		}
//		if (scale) {
//			transform.localScale = target.localScale;
//		}
	}
}
