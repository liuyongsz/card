using UnityEngine;
using System.Collections;

public class banddi : MonoBehaviour {
	public Color me;
	private GameObject son;
	// Use this for initialization
	void Start () {
		if (transform.GetChild (0)) {
			
			son = transform.GetChild (0).gameObject;
		}
	
	}
	
	// Update is called once per frame
	void Update () {
		if(me!=null&&son!=null){
			if (son.GetComponent<SpriteRenderer>()){
				son.GetComponent<SpriteRenderer> ().color = me;
			}
			
			
		}
	}
}
