using UnityEngine;
using System.Collections;
using DG.Tweening ;
using UnityEngine.UI;


public class clone_mayshine1 : MonoBehaviour {

	bool isDARP=false;
	public static  clone_mayshine1 MY;
	public GameObject bt;
	//public Sprite[] tex;
	Canvas canvas;
	RectTransform rectTranshform; 

	public Vector3 yuanshi;

	// Use this for initialization
	void Awake(){
		MY = this;
	}
	void Start () {
		rectTranshform = transform as RectTransform;
		canvas = GameObject.Find ("Canvas").GetComponent<Canvas> ();
	}

	// Update is called once per frame
	void Update () {
		if(isDARP){
			Vector2 pos;
			if(RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas.transform as RectTransform ,Input.mousePosition,canvas.worldCamera,out pos)){
				rectTranshform.anchoredPosition = pos;
			}
		}

	}
	public void startDRAP(){

		isDARP = true;
	}
	public void choose(bool isKai,Vector3 pos){
		if(isKai ){
			isDARP = false;
			transform.DOLocalMove (Vector3.zero,0.2f);
			bt.SetActive (true);
			yuanshi = pos;
			back_mayshine1.MY.direnmianban.transform.DOLocalMove (new Vector3 (0,412,0),0.2f);
		}else{
			
		}
		
	}
	public void exitDRAP(){

		transform.localPosition = new Vector3 (1264, 0, 0);
	}

	public void movExitDRAP(){

		transform.DOMove (yuanshi, 0.2f).OnComplete (moveComplete); 
		bt.SetActive (false);
	}
	public void moveComplete(){
		isDARP = false;
		back_mayshine1.MY.direnmianban.transform.DOLocalMove (new Vector3 (0,685,0),0.2f);
		back_mayshine1.MY.setColor ();
		exitDRAP ();
	}
	/*public void chi(bool bl){
		if(bl){
			GetComponent<Image> ().sprite = tex [1];
		}else{
			GetComponent<Image> ().sprite = tex [0];
		}
	}
	public void yong(bool bl){
		if(bl){
			GetComponent<Image> ().sprite = tex [2];
		}else{
			GetComponent<Image> ().sprite = tex [0];
		}
	}*/
}
