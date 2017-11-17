using UnityEngine;
using System.Collections;

public class SimpleSprite : MonoBehaviour
{

    //标准摄像头的高度//
    public float standardCameraSize;

    //标准屏幕的高度//
    public float standardHeight;


    private float glTopixelRatio;



    //素材求//
    public Material spriteMaterial;

    //顶点数//
    private int verticesCount = 4;




    // Use this for initialization
    void Start()
    {
        spriteMaterial = this.gameObject.GetComponent<SpriteRenderer>().material;
        //计算像素和世界单位的比值//
        glTopixelRatio = standardCameraSize * 2.0f / standardHeight;
        initSprite();
    }

    // Update is called once per frame
    void Update() { }

    //根据宽高生成对应的面//
    private void initSprite()
    {

        //获取图片的像素宽高//
        int pixelHeight = spriteMaterial.mainTexture.height;
        int pixelWidth = spriteMaterial.mainTexture.width;

        Debug.Log("pixeW:" + pixelWidth + ",pixeH:" + pixelHeight);

        //得到MeshFilter对象//
        //MeshFilter meshFilter = gameObject.GetComponent<MeshFilter>();
        //if (meshFilter == null)
        //{
        //    //为null时，自动添加//
        //    meshFilter = gameObject.AddComponent<MeshFilter>();
        //    MeshRenderer meshRenderer = gameObject.AddComponent<MeshRenderer>();
        //    meshRenderer.sharedMaterial = spriteMaterial;
        //}
        //得到对应的网格对象//
        //Mesh mesh = meshFilter.mesh;

        float glWidth = pixelWidth * glTopixelRatio;
        float glHeight = pixelHeight * glTopixelRatio;
        spriteMaterial.mainTextureScale = new Vector3(glTopixelRatio, glTopixelRatio,0);

        return;
      //  //三角形顶点的坐标数组//
      //  Vector3[] vertices = new Vector3[verticesCount];

      //  //得到三角形的数量//
      //  int trianglesCount = verticesCount - 2;

      //  //三角形顶点数组//
      //  int[] triangles = new int[verticesCount * 3];


      //  float glWidth = pixelWidth * glTopixelRatio;
      //  float glHeight = pixelHeight * glTopixelRatio;



      //  //以当前对象的中心坐标为标准//
      //  vertices[0] = new Vector3(0, 0, 0);
      //  vertices[1] = new Vector3(0, glHeight, 0);
      //  vertices[2] = new Vector3(glWidth, 0, 0);
      //  vertices[3] = new Vector3(glWidth, glHeight, 0);

      ////  mesh.vertices = vertices;


      //  //绑定顶点顺序//
      //  triangles[0] = 0;
      //  triangles[1] = 1;
      //  triangles[2] = 2;
      //  triangles[3] = 1;
      //  triangles[4] = 3;
      //  triangles[5] = 2;


      //  mesh.triangles = triangles;

      //  mesh.uv = new Vector2[] { new Vector2(0, 0), new Vector2(0, 1), new Vector2(1, 0), new Vector2(1, 1) };


    }

}
