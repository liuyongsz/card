using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class SpineIdTest : MonoBehaviour {

    public Animator anitor;
	// Use this for initialization
	void Start ()
    {
        anitor = gameObject.GetComponent<Animator>();
        
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
