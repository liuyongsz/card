using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class tuoweiTEST : MonoBehaviour {
	public Vector3 v;
	public Vector3 a1;
	public Vector3 a2;
	public Vector3 mudi=new Vector3 (10,6.8f,0);
	public float xian;
	float t=0.2f;
	float t2=0.94f;
	bool play=false;
	// Use this for initialization
	void Start () {
		v = Vector3.zero;
		float ls = Random.Range (0,Mathf.PI*2);
		a1 = new Vector3 (Mathf.Sin(ls)*t,Mathf.Cos(ls)*t,0 );
		a2 = Vector3.zero;
	
	}

	// Update is called once per frame
	void Update () {
		if(play){
			if (Mathf.Sqrt(a1.x*a1.x+a1.y*a1.y)<0.01f) {
				a1 = Vector3.zero;
			}
			xian += 0.3f*Time.deltaTime;
			Vector3 ls;
			ls=mudi - transform.localPosition;
			a2 = ls / Mathf.Sqrt (ls.x * ls.x + ls.y * ls.y) * xian;


			transform.localPosition += (a1+a2);
			a1*=t2;
		}
	
	}
	public void go(){
		play = true;
	}
}
