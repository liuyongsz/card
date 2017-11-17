using UnityEngine;
using System.Collections;

public class BlureLayer : MonoBehaviour {

    private static BlureLayer Ins;
	// Use this for initialization
	void Start ()
    {
        Ins = this;
        gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}

    public static void Show(bool visible)
    {
        Ins.gameObject.SetActive(visible);
    }
}
