using UnityEngine;
using System.Collections;
using DG.Tweening;
using UnityEngine.UI;
public class clone2_mayshine : MonoBehaviour {
	public static clone2_mayshine MY;
	// Use this for initialization
	void Awake(){
		MY = this;
	}
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void chuxian(Vector3 pos){
		transform.localPosition = new Vector3 (pos.x,transform.localPosition.y,transform.localPosition.z);

		GetComponent<Image> ().color = new Color (255, 255, 255, 255);
		
	}
	public void xiaoshi(){
		GetComponent<Image> ().color = new Color (255, 255, 255, 0);
		transform.localPosition = new Vector3 (-1201,0,0);
		
	}
}
