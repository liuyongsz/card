using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class UIGridTest : MonoBehaviour {

    public UIGrid MyGrid;
	// Use this for initialization
	void Start () {

        List<object> lst = new List<object>() { 1,2,3,4,5,6};
        MyGrid.BindCustomCallBack(delegate(UIGridItem item) {


        });
        MyGrid.AddCustomDataList(lst);
        MyGrid.UpdateCustomView();


    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
