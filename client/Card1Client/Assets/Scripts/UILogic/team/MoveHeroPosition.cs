using UnityEngine;
using System.Collections;
using DG.Tweening;

public class MoveHeroPosition : MonoBehaviour
{
    public GameObject point;
    public float lon;
    public Vector3 tragetV3;
    public Vector3 endPos;
    public Material lineRender;
    Camera camera;
    int ls1 = 10;
    float anl;
    public bool canMove = false;
    Vector2 ls;

    private void Awake()
    {
        lineRender = this.transform.FindChild("lineRender/Effect006").GetComponent<MeshRenderer>().material;
    }
    void Start()
    {
        DontDestroyOnLoad(gameObject);
        camera = Main.Ins.Camera3D;
        lineRender.shader = null;
        lineRender.shader = Resources.Load("Shader/TransparentAddtive") as Shader;
        lon = point.transform.localScale.y;
    }
    
    void Update()
    {
        if (!canMove)
            return;
        endPos = camera.ScreenToWorldPoint(Input.mousePosition);

        this.transform.position = new Vector3(endPos.x, endPos.y, 0);
        float juli = Mathf.Sqrt(Mathf.Pow(transform.localPosition.x - tragetV3.x, 2) + Mathf.Pow(transform.localPosition.y - tragetV3.y, 2));

        point.transform.localScale = new Vector3(1, lon * (juli - 0.2f) * (10 / (transform.localScale.y * 10)), 1);//0.2F是对距离的修正  和箭头图片长短相关
        lineRender.SetTextureScale("_node_914", new Vector2(3 * (10 / (transform.localScale.y * 10)) * (juli - 0.2f), 1));

        ls = lineRender.GetTextureOffset("_node_914");
        lineRender.SetTextureOffset("_node_914", new Vector2(ls.x + 0.03f, ls.y));

        //计算鼠标与起始点向量之间的角度
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
    void OnDestroy()
    {
        lineRender = null;
        canMove = false;
    }
}
