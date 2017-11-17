using UnityEngine;
using System.Collections;
using DG.Tweening ;
public class btcack_mayshine : MonoBehaviour {
	public static  btcack_mayshine MY;
	public GameObject[] son;
	void Awake(){
		MY = this;
	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void chuxian(int index){
		transform.DOLocalMove (new Vector3 (0,-200,0),0.2f);
		if(index!=null){
			for(int a=0;a<6;a++){
				son [a].SetActive(true);
			}
			son [index].SetActive (false);
		}
	}
	public void xiaoshi(){
		transform.DOLocalMove (new Vector3 (0,-612,0),0.2f);

	}
}
