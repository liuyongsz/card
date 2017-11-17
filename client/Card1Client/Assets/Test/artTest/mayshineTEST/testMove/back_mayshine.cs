using UnityEngine;
using System.Collections;
using UnityEngine.UI; 

public class back_mayshine : MonoBehaviour {
	public static back_mayshine MY;
	public GameObject choose = null;
	// Use this for initialization
	public GameObject[] son;
	public GameObject direnmianban;


	void Awake(){
		MY = this;
	}
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void setColor(){
		if(son.Length>0 ){
			for(int a=0;a<son.Length;a++){
				son [a].GetComponent<Image> ().color = new Color (255,255,255,255);
			}
		}
	}
}
