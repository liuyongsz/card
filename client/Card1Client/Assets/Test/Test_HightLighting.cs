using UnityEngine;
using System.Collections;
using HighlightingSystem;

public class Test_HightLighting : MonoBehaviour {

    public Highlighter hlighter;
    // Use this for initialization
    public bool Show;
	void Start () {

        hlighter = gameObject.GetComponent<Highlighter>();

        //   hlighter.On(Color.red);
        //hlighter.FlashingOn(100);
        

    }
	
	// Update is called once per frame
	void Update () {

        if (Show)
            hlighter.ConstantOn(Color.white);
        else
            hlighter.ConstantOff();
    }
}
