using UnityEngine;

/***********************************************************************
 * 功能 ：观测摄像机， 创造公告板效果
 ***********************************************************************/
public class LookAtCamera : MonoBehaviour
{


    // Update is called once per frame
    void Update()
    {
        transform.LookAt(Camera.main.transform.position);
    }
}
