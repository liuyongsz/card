using UnityEngine;
using System.Collections;
using DG.Tweening;

public class pointTEST : MonoBehaviour {
	public GameObject lineRender;
	public float lineLong;
    private Vector3 tragetV3;
    private Vector3 endPos;
    Material lineRenderMat;
    int ls1=3;
	float anl;
    bool canMove = false;
    float distance;
    Vector2 ls;
    // Use this for initialization
    void Start()
    {
        tragetV3 = Vector3.zero;
        lineRenderMat = this.transform.FindChild("Effect006").GetComponent<MeshRenderer>().material;
        lineLong = lineRender.transform.localScale.y;
    }

    void Update()
    {
        endPos = UICamera.currentCamera.ScreenToWorldPoint(Input.mousePosition);

        this.transform.DOMove(endPos, 0.1f, false);

        distance = Vector3.Distance(endPos, tragetV3);

        lineRender.transform.localScale = new Vector3(1, lineLong * (distance - 0.2f), 1);//0.2F是对距离的修正  和箭头图片长短相关

        lineRenderMat.SetTextureScale("_node_914", new Vector2(3 * (distance - 0.2f), 1));//0.2F是对距离的修正  和箭头图片长短相关

        ls = lineRenderMat.GetTextureOffset("_node_914");

        lineRenderMat.SetTextureOffset("_node_914", new Vector2(ls.x + 0.03f, ls.y));


        anl = Vector2.Angle(new Vector2(0, 100), new Vector2(transform.localPosition.x - tragetV3.x, transform.localPosition.y - tragetV3.y));

        if (transform.localPosition.x > tragetV3.x)
        {
            transform.localRotation = Quaternion.Euler(new Vector3(0, 0, -anl));

        }
        else
        {
            transform.localRotation = Quaternion.Euler(new Vector3(0, 0, anl));
        }

    }
}
