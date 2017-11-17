using UnityEngine;
using System.Collections;

public class CardEntity : CardBase
{

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update ()
    {

        SkillSystem.Instance.Update();
	
	}
}
