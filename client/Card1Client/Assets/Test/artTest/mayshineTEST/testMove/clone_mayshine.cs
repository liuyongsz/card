using UnityEngine;
using System.Collections;
using DG.Tweening;
using UnityEngine.UI;

public class clone_mayshine : MonoBehaviour {

	bool isDARP=false;
	public static  clone_mayshine MY;
	public Sprite[] tex;
	Canvas canvas;
	RectTransform rectTranshform; 

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
	public void exitDRAP(){

		isDARP = false;
		transform.localPosition = new Vector3 (1264, 0, 0);
	}

	public void movExitDRAP(Vector3 pos){
		
		transform.DOMove (pos, 0.2f).OnComplete (moveComplete); 
	}
	public void moveComplete(){
		back_mayshine.MY.setColor ();
		exitDRAP ();
	}
	public void chi(bool bl){
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
	}
}
