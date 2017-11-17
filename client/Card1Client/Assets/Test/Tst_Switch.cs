using UnityEngine;
using System.Collections;
using DG.Tweening;

public class Tst_Switch : MonoBehaviour {

    public Camera camera3D;
    public Camera camera2D;

    private Vector3 mOldScale;
    private Vector3 mOldPosition;

    public Transform testTarget;

    public float AdaptScale = 1.45f;//0.58f

    private Vector3 scaleB;
    private Vector3 tweenB;
    // Use this for initialization

    private TweenLayerUtil mTween;

    void Start ()
    {
        Trigger_AddHP hp = new Trigger_AddHP();
        hp.Start(new SkillInstance());

        SkillSystem.Instance.CreateInstance(1,1);

        mTween = new TweenLayerUtil();
        mTween.Target = testTarget;
        mTween.AdaptScale = AdaptScale;
    }
	
	// Update is called once per frame
	void Update ()
    {
	
	}

    private void OnGUI()
    {
      
    }
}
