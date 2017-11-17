using UnityEngine;
using System.Collections;

public class MoveArrow : MonoBehaviour
{
    public Transform EndFlagObject;
	public GameObject point;
	public float lon;
	float angle;

    private LineRenderer line;
    public Vector3 StartPoint;
    public Vector3 EndPoint;

    private Vector3 mOldStartPoint;
    private Vector3 mOldEndPoint;

    public Camera ArrowCamera;

	void Awake ()
    {
		lon=point.transform.localScale.y;

        line = transform.GetComponent<LineRenderer>();

        line.SetPosition(0, StartPoint);
        line.SetPosition(1,EndPoint);

        mOldEndPoint = EndPoint;
        mOldStartPoint = StartPoint;

        ArrowCamera = Camera.main;

        if (null != EndFlagObject)
        {
            EndFlagObject.SetParent(null);
            EndFlagObject.gameObject.SetActive(false);
        }
    }

    public void Hide()
    {
        if (null != EndFlagObject)
        {
            EndFlagObject.gameObject.SetActive(false);
        }

        gameObject.SetActive(false);
    }

    private void OnDestroy()
    {
        if (null != EndFlagObject)
            GameObject.DestroyObject(EndFlagObject.gameObject);
    }

    public void SetOrgPoint(Vector3 val)
    {
        EndPoint = val;
    }

	// Update is called once per frame
	void LateUpdate()
    {
        if (null == ArrowCamera)
            return;

        if (null != EndFlagObject)
            EndFlagObject.gameObject.SetActive(gameObject.activeSelf);

            if (StartPoint != mOldStartPoint || EndPoint != mOldEndPoint)
        {
            line.SetPosition(0, StartPoint);
            line.SetPosition(1, EndPoint);

            mOldEndPoint = EndPoint;
            mOldStartPoint = StartPoint;
        }

        if (null != EndFlagObject)
            EndFlagObject.position = EndPoint;

        Vector3 pos = ArrowCamera.ScreenToWorldPoint(Input.mousePosition);

        pos.z = transform.position.z;
        Vector3 dis = pos - EndPoint;

        //float juli = Mathf.Sqrt (Mathf.Pow(transform.localPosition.x-tragetV3.x,2)+Mathf.Pow(transform.localPosition.y-tragetV3.y,2));
        int juli = (int)dis.magnitude;
     
        point.transform.localScale=new Vector3 (1, lon * (juli-0.2f),1);//0.2F是对距离的修正  和箭头图片长短相关
        line.material.SetTextureScale("_node_914", new Vector2(3 * (juli - 0.2f), 1));//0.2F是对距离的修正  和箭头图片长短相关

        Vector2 ls = line.material.GetTextureOffset ("_node_914");
        line.material.SetTextureOffset ("_node_914", new Vector2 (ls.x + 0.03f, ls.y));

        Vector3 lookPos = new Vector2(transform.position.x - EndPoint.x, transform.position.y - EndPoint.y);
        Vector2 ogPoint = new Vector2(0, 1);
        angle = Vector2.Angle(ogPoint, lookPos);

        if (lookPos.x > 0)
            transform.localRotation = Quaternion.Euler(new Vector3(0, 0, -angle));
        else
            transform.localRotation = Quaternion.Euler(new Vector3(0, 0, angle));

        transform.position = pos;
        line.SetPosition(0, pos);
    }
}
