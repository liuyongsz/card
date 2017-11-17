using UnityEngine;
using System.Collections;
using DG.Tweening ;
using UnityEngine.UI;
public class card_mayshine : MonoBehaviour {
	public int index;
	public bool isIn=false;
	public bool isEvent = false;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}
	public void myClick(){
		isEvent = true;
		back_mayshine.MY.choose = gameObject;
		transform.DOLocalMove  (new Vector3 (transform.localPosition.x, 20, 0), 0.2f);
		clone2_mayshine.MY.chuxian (transform.localPosition);

		
	}
	public void myClickUp(){
		isEvent = false;
		transform.DOLocalMove  (new Vector3 (transform.localPosition.x,0, 0), 0.2f);
		if(!isIn){
			clone_mayshine.MY.movExitDRAP(transform.position);
		}
		clone2_mayshine.MY.xiaoshi  ();
		btcack_mayshine.MY.xiaoshi (); 
		clone_mayshine.MY.yong (false);
		back_mayshine.MY.choose = null;
		back_mayshine.MY.direnmianban.transform.DOLocalMove (new Vector3(0,676,0),0.2f );


	}
	public void enterIn(){
		isIn=true;
		if(isEvent){

			GetComponent<Image> ().color = new Color (255, 255, 255,255);
			clone_mayshine.MY.exitDRAP ();
			btcack_mayshine.MY.xiaoshi (); 

		}else {
			if (back_mayshine.MY.choose != null) {
				clone_mayshine.MY.yong (true);
				transform.DOScale (1.2f,0.1f).OnComplete(rest) ;
				clone2_mayshine.MY.chuxian (transform.localPosition);

			}
			
		}

	}
	public void exitOut(){
		isIn=false;
		clone2_mayshine.MY.xiaoshi ( );
		clone_mayshine.MY.yong (false);
		if(isEvent){
			//print ("55");
			GetComponent<Image> ().color = new Color (255, 255, 255, 0);
			clone_mayshine.MY.startDRAP (); 
			btcack_mayshine.MY.chuxian (index); 
			back_mayshine.MY.direnmianban.transform.DOLocalMove (new Vector3(0,407,0),0.2f );
		}

	}
	public void rest(){
		transform.DOScale (1,0.1f);
	}
}
