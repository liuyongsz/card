using UnityEngine;
using System.Collections;

public class Test_Absorb : MonoBehaviour {

    public float BombSpeed = 6f;
    public AbsorbMoveEff Eff;
    public Transform EndPoint;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        

    }

    private void OnGUI()
    {
        if( GUI.Button(new Rect(0,0,100,40),"Excute") )
        {
            Eff.BombSpeed = BombSpeed;

            Eff.transform.position = Vector3.zero;
            Eff.AbsorbPoint = EndPoint.position;
           
            
            Eff.Init();
        }
    }
}
