using UnityEngine;
using System.Collections;
using DG.Tweening;
public class mayshineMovTest : MonoBehaviour {
	public GameObject a;
	public GameObject b;
	// Use this for initialization
	void Start () {
		//transform.DOMove(new Vector3 (-2.98f,0,0),0.4f);
		//a.transform.DOMove(new Vector3 (-2.98f,0,-11.1f),0.4f);
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void meTest(){
		a.transform.DOMove(new Vector3 (-2.98f,0,-11.1f),0.4f);
		b.transform.DOMove(new Vector3 (-2.98f,0,-11.1f),0.4f);
		
	}
	public void diTest(){
		a.transform.DOMove(new Vector3 (2.98f,0,-11.1f),0.4f);
		b.transform.DOMove(new Vector3 (2.98f,0,-11.1f),0.4f);


	}
	public void overTest(){
		a.transform.DOMove(new Vector3 (0,0,-13.4f),0.4f);
		b.transform.DOMove(new Vector3 (0,0,-13.4f),0.4f);

	}
}
