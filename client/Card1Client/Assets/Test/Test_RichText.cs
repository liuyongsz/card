using UnityEngine;
using System.Collections;

public class Test_RichText : MonoBehaviour {

    public UIRichText RichTxt;
    // Use this for initialization
    void Start ()
    {
        RichTxt.maxWidth = 100;
        RichTxt.cellHeight = 50;

        RichTxt.text = "{'channelType':1," +
            "'ownerType':1," +
            "'richContentList':[" +
            "{'richtype':1,'linktype':0,'content':'hahahaha','color':'[00ff00]','args':['7']}," +
            "{'richtype':0,'linktype':0,'content':'101402','color':'[00ff00]','args':['0']}," +
            "{'richtype':1,'linktype':0,'content':'uuuu','color':'[00ff00]','args':['0']}]}";

       // RichTxt.richData.richContentList.Add(UIRichText.CreateRichContent("444",RichEnum.TEXT,LinkType.NONE));
        
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
