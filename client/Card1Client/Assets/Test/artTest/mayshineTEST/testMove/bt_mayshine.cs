using UnityEngine;
using System.Collections;

public class bt_mayshine : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	// Update is called once per frame
	void Update () {
	
	}
	public void enter(){
		clone_mayshine.MY.chi (true);
	}
	public void exit(){
		clone_mayshine.MY.chi (false);
	}
}
