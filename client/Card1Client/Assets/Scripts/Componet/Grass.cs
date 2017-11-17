using UnityEngine;
using System.Collections;

public class Grass : MonoBehaviour
{
    public bool StartRandomParams;
    public float MinY = 0.5f;
    public float TimeScale = 0.5f;

    private float mOldMiny;
    private float mOldTimeScale;

    private MeshRenderer mRender;
    // Use this for initialization
    void Start () {

        if(StartRandomParams)
        {
            MinY = UnityEngine.Random.Range(0.1f,0.8f);
            TimeScale = UnityEngine.Random.Range(0.1f, 0.6f);
        }

        mOldMiny = MinY;
        mOldTimeScale = TimeScale;

        mRender = GetComponent<MeshRenderer>();
        mRender.material.SetFloat("_MinY",MinY);
        mRender.material.SetFloat("_TimeScale", TimeScale);
    }
	
	// Update is called once per frame
	void Update ()
    {
	    if(mOldMiny != MinY)
        {
            mOldMiny = MinY;
            mRender.material.SetFloat("_MinY", MinY);
        }

        if (mOldTimeScale != TimeScale)
        {
            mOldTimeScale = TimeScale;
            mRender.material.SetFloat("_TimeScale", TimeScale);
        }
    }
}
