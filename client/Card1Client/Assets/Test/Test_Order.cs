using UnityEngine;
using System.Collections;

public class Test_Order : MonoBehaviour {

    public TrailRenderer Render;
	// Use this for initialization
	void Start () {

        Render = gameObject.GetComponent<TrailRenderer>();

        Render.sortingOrder = 300;

    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
