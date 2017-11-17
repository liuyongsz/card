using UnityEngine;

/***********************************************************************
 * 功能 ：观测目标摄像机
 ***********************************************************************/
public class LookAtTheCamera : MonoBehaviour
{
    public Transform cameraTra = null;
    private Transform selfTra = null;

    public void SetCamera(Camera camera)
    {
        if (camera != null)
        {
            this.cameraTra = camera.transform;
            selfTra = transform;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (cameraTra == null)
            return;
        selfTra.LookAt(cameraTra);
    }
}
