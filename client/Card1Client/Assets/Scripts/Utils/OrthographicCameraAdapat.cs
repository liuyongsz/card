using UnityEngine;
using System.Collections;

public class OrthographicCameraAdapat : MonoBehaviour
{

    public float DevHeight = 6.98f;
    public float DevWidth = 11.36f;

    // Use this for initialization
    void Start()
    {
        Camera thisCamera = this.GetComponent<Camera>();


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