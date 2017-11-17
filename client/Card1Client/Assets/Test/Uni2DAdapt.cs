using UnityEngine;
using System.Collections;

[ExecuteInEditMode]
public class Uni2DAdapt : MonoBehaviour {

    public Camera MainCamera;
    public float DevHeight = 6.98f;
    public float DevWidth = 11.36f;

    private float mOldScreenW = 0;
    private float mOldScreenH = 0;
    // Use this for initialization
    void Start ()
    {
        UpdateSize();
    }
	
 
	// Update is called once per frame
	void Update ()
    {
	    if(mOldScreenW != Screen.width || mOldScreenH != Screen.height)
        {
            UpdateSize();
        }
        else if(mOldScreenW == 0 && null != MainCamera)
        {
            UpdateSize();
        }
	}

    public void UpdateSize()
    {
        if (null == MainCamera)
            return;

        mOldScreenW = Screen.width;
        mOldScreenH = Screen.height;

        Camera thisCamera = MainCamera;


        if (!thisCamera.orthographic)
            return;

        float screenHeight = Screen.height;

        float orthographicSize = thisCamera.orthographicSize;

        float aspectRatio = Screen.width * 1.0f / Screen.height;

        float cameraWidth = orthographicSize * 2 * aspectRatio;

        //Debug.Log("cameraWidth = " + cameraWidth);

        if (cameraWidth < DevWidth)
        {
            orthographicSize = DevWidth / (2 * aspectRatio);
            //Debug.Log("new orthographicSize = " + orthographicSize);
            this.GetComponent<Camera>().orthographicSize = orthographicSize;
        }

    }
}
