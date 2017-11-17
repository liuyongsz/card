using UnityEngine;
using System.Collections;

public class gengsui_mayshine : MonoBehaviour {
	public  bool isDARP=false;
	Canvas canvas;
	RectTransform rectTranshform; 
	Vector2 mubiao;
	public GameObject clone;

	// Use this for initialization
	void Awake(){

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
				mubiao = pos;
				//print (rectTranshform.anchoredPosition);
				if(Mathf.Abs(mubiao.x-rectTranshform.anchoredPosition.x) < 200  ){
					clone.transform.localRotation = Quaternion.Euler ( clone.transform.rotation.eulerAngles.x,-(mubiao.x-rectTranshform.anchoredPosition.x)/4,clone.transform.rotation.eulerAngles.z);
					
				}
				if(Mathf.Abs(mubiao.y-rectTranshform.anchoredPosition.y) < 200  ){
					clone.transform.localRotation = Quaternion.Euler ( (mubiao.y-rectTranshform.anchoredPosition.y)/4,clone.transform.rotation.eulerAngles.y,clone.transform.rotation.eulerAngles.z);

				}
				rectTranshform.anchoredPosition+=(mubiao-rectTranshform.anchoredPosition)*0.2f;

			}
		}

	}

}
