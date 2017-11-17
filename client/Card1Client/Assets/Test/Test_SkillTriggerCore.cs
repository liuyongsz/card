using UnityEngine;
using System.Collections;

public class Test_SkillTriggerCore : MonoBehaviour {

	// Use this for initialization
	void Start () {

        SkillSystem.Instance.TriggerStay += test_fun;
	}
	
	// Update is called once per frame
	void Update () {

        SkillSystem.Instance.Update();
    }

    void test_fun()
    {

    }
}
