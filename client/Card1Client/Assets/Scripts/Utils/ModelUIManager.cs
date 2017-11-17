using System;
using System.Collections.Generic;
using UnityEngine;

public class ModelUIInfo
{
    public string mModelId;
    public string mWeaponId;
}

public class ModelUIManager
{
    public const string MODEL_UI_SHADER = "Custom/StandarSpecular_IndependentCharLit_NoFog";

    /// <summary>
    /// 界面3D模型管理器
    /// </summary>
    public class UIModelInfo
    {
        /// <summary>
        /// 自定义数据消息 比如：TaskDialoguePanel
        /// </summary>
        public object oCustomDataObject = null;
        public GameObject oRoot = null;
        public Camera camera = null;            ///摄像机
        public RenderTexture rtexture = null;   ///模型渲染纹理
        public GameObject oModel = null;        ///当前模型
        public string strModelRes = string.Empty;// 模型资源path
        public Light oLight = null;             ///模型灯光
        public UIViewport vp = null;
        public Transform bg1 = null;
        public Transform bg2 = null;

        /// <summary>
        /// goRoot offset for separate
        /// </summary>
        public Vector3 localOffsetForGoRoot = Vector3.zero; 

        /// <summary>
        /// １是创建角色　２游戏内
        /// </summary>
        public int iState = 1;

        #region 释放
        //add by chenfei 20150825
        ~UIModelInfo()
        {
            oRoot = null;
            camera = null;
            bg1 = null;
            bg2 = null;
        }
        #endregion;
    }

    public delegate void LoadHighUiModelComplete(UIModelInfo info);

    /// <summary>
    /// 界面3D模型管理器 （多个模型）
    /// </summary>
    public class UIModelsInfo : UIModelInfo
    {
        public List<GameObject> mModels;

        public void Clear()
        {
            if (mModels != null)
            {
                mModels.Clear();
            }
        }

        public void AddModel(GameObject model)
        {
            if (model == null)
                return;

            if (mModels == null)
            {
                mModels = new List<GameObject>();
            }

            int iLayerMask = LayerMask.NameToLayer("UIModel");
            UtilTools.SetLayer(model, iLayerMask);

            if (camera != null)
            {
                model.transform.parent = camera.transform;
            }
            Vector3 vTemp = Vector3.zero;
            vTemp.x = 0;
            vTemp.y = 180f;
            vTemp.z = 0;
            model.transform.localRotation = Quaternion.Euler(vTemp);
            //model.transform.localScale = Vector3.one;

            //ChangeShader(model, "Snail/Bumped Specular Point Light2", "Snail/Bumped Specular Point Light");

            mModels.Add(model);
        }

        //public void Repostion(float x , float y , float z , float spacingW)
        //{
        //    GameObject model;
        //    for (int i = 0; i < mModels.Count; i++)
        //    {
        //        model = mModels[i];
        //        if (model != null)
        //        {
        //            model.transform.parent = oRoot.transform;
        //            Vector3 vTemp = Vector3.zero;
        //            vTemp.x = x + (spacingW * i);
        //            vTemp.y =  y;
        //            vTemp.z =  z;
        //            model.transform.localPosition = vTemp; ;
        //        }
        //    }
        //}
    }

    /// <summary>
    /// 所有界面模型列表
    /// </summary>
    public static List<UIModelInfo> mUIModels = new List<UIModelInfo>();
    static int miIndex = 0;
    /// <summary>
    /// 启动清空
    /// </summary>
    public static void Clear()
    {
        mUIModels.Clear();
        miIndex = 0;
    }

    /// <summary>
    /// 切场景的时候 清除一下，确保模型没有残留
    /// </summary>
    public static void ClearModels()
    {
        if (mUIModels == null || mUIModels.Count < 1)
        {
            return;
        }

        for (int i = mUIModels.Count - 1; i >= 0; --i)
        {
            UIModelInfo uInfo = mUIModels[i];
            if (uInfo == null)
            {
                continue;
            }

            mUIModels.Remove(uInfo);

            if (uInfo.oModel != null)
            {
                uInfo.oModel.transform.parent = null;
                MonoBehaviour.Destroy(uInfo.oModel);
            }
            if (uInfo.camera != null)
            {
                uInfo.camera.targetTexture = null;
                MonoBehaviour.Destroy(uInfo.camera.gameObject);
            }
            if (uInfo.oRoot != null)
            {
                MonoBehaviour.Destroy(uInfo.oRoot.gameObject);
            }
            if (uInfo.rtexture != null)
            {
                RenderTexture.ReleaseTemporary(uInfo.rtexture);
                uInfo.rtexture = null;
            }

            uInfo.oModel = null;
            uInfo = null;
        }
    }    
   
    /// <summary>
    /// 创建模型
    /// </summary>
    /// <param name="modelId"></param>
    /// <returns></returns>
	private static DictionaryEx<int, GameObject> mSceneLights = new DictionaryEx<int, GameObject>();

    /// <summary>
    /// 创建模型
    /// </summary>
    /// <param name="modelId"></param>
    /// <returns></returns>
    public static void CreateModel(string modelId, string path, LoadHighUiModelComplete call)
    {
        if (string.IsNullOrEmpty(modelId))
        {
            return;
        }
        ClearModels();
        ResourceManager.Instance.LoadLocalPrefab(modelId, path, (name, obj) =>
          {
              if (obj == null)
              {
                  return;
              }

              UIModelInfo info = new UIModelInfo();
              miIndex = (miIndex + 1) % 1000;

              int iLayerMask = LayerMask.NameToLayer("UIModel");
              info.oModel = obj;
              info.oModel.name = modelId;
              GameObject goRoot = new GameObject(UtilTools.StringBuilder("goRoot", miIndex));
              if (goRoot != null)
              {
                  goRoot.transform.parent = UICamera.mainCamera.transform;
                  goRoot.transform.localScale = Vector3.one;

                  GameObject gocCamera = new GameObject(UtilTools.StringBuilder("Camera", miIndex));

                  // 添加模型照射摄像机
                  Camera cCamera = gocCamera.gameObject.AddComponent<Camera>();
                  cCamera.transform.parent = goRoot.transform;

                  cCamera.clearFlags = CameraClearFlags.SolidColor;
                  cCamera.orthographic = true;
                  cCamera.orthographicSize = 1.1f;
                  cCamera.nearClipPlane = -10;
                  cCamera.farClipPlane = 60;
                  cCamera.fieldOfView = 35;
                  cCamera.depth = 1;
                  cCamera.cullingMask = 1 << 8;

                  ///设置模型相对摄像机位置
                  info.oModel.transform.parent = goRoot.transform;
                  Vector3 pos = Vector3.zero;
                  pos = new Vector3(76.9f, -311f, -500);
                  info.oModel.transform.localPosition = pos;
                  info.oModel.transform.localRotation = Quaternion.Euler(0.0f, 180.0f, 0.0f);
                  info.oModel.transform.localScale = new Vector3(380, 380, 380);
                  ///设置渲染贴图参数
                  info.camera = cCamera;
                  gocCamera.transform.localPosition = new Vector3(0, -70, 0); ;
                  gocCamera.transform.localRotation = Quaternion.Euler(6.7f, 0, 0);
                  info.oRoot = goRoot;
                  //GameObject light = new GameObject("light");
                  //light.gameObject.AddComponent<Light>();
                  //light.transform.parent = goRoot.transform;
                  //light.gameObject.GetComponent<Light>().type = LightType.Directional;
                  //info.oLight = light.gameObject.GetComponent<Light>();
                  info.rtexture = RenderTexture.GetTemporary(1024, 1024, 16);
                  info.rtexture.isPowerOfTwo = true;
                  //info.rtexture.antiAliasing = 2;
                  //info.rtexture.depth = 24;
                  info.rtexture.filterMode = FilterMode.Bilinear;
                  info.rtexture.wrapMode = TextureWrapMode.Clamp;
                  //info.rtexture.anisoLevel = 16;
                  info.rtexture.MarkRestoreExpected();
                  info.camera.targetTexture = info.rtexture;
                  UtilTools.SetLayer(goRoot.gameObject, iLayerMask);
                  mUIModels.Add(info);
                  goRoot.transform.localPosition = new Vector3(-271, -89, 707);
                  if (call != null)
                  {
                      call(info);
                  }
              }
          });
    }
   
    /// <summary>
    /// 创建模型
    /// </summary>
    /// <param name="modelId"></param>
    /// <returns></returns>
    public static void CreatePlayerModel(string modelId,string path, LoadHighUiModelComplete call)
    {
        if (string.IsNullOrEmpty(modelId))
        {
            return;
        }
        ClearModels();
        ResourceManager.Instance.LoadLocalPrefab(modelId, path, (name, obj) =>
        {
            if (obj == null)
            {
                return;
            }

            UIModelInfo info = new UIModelInfo();
            miIndex = (miIndex + 1) % 1000;

            int iLayerMask = LayerMask.NameToLayer("UIModel");
            info.oModel = obj;
            info.oModel.name = modelId;
            GameObject goRoot = new GameObject(UtilTools.StringBuilder("goRoot", miIndex));
            if (goRoot != null)
            {
                goRoot.transform.parent = UICamera.mainCamera.transform;
                goRoot.transform.localScale = Vector3.one;

                GameObject gocCamera = new GameObject(UtilTools.StringBuilder("Camera", miIndex));

                // 添加模型照射摄像机
                Camera cCamera = gocCamera.gameObject.AddComponent<Camera>();
                cCamera.transform.parent = goRoot.transform;


                cCamera.clearFlags = CameraClearFlags.SolidColor;
                cCamera.orthographic = false;
                cCamera.nearClipPlane = 0.01f;
                cCamera.farClipPlane = 90;
                cCamera.fieldOfView = 22;
                cCamera.depth = 1;
                cCamera.cullingMask = 1 << 8;

                ///设置模型相对摄像机位置
                info.oModel.transform.parent = goRoot.transform;
                Vector3 pos = Vector3.zero;
                pos = new Vector3(-3, -16.5f, 100);
                info.oModel.transform.localPosition = pos;
                info.oModel.transform.localRotation = Quaternion.Euler(0.0f, 180.0f, 0.0f);
                info.oModel.transform.localScale = new Vector3(18, 18, 18);
               
                ///设置渲染贴图参数
                info.camera = cCamera;
                gocCamera.transform.localPosition = new Vector3(0, 12, 0); ;
                gocCamera.transform.localRotation = Quaternion.Euler(6.7f, 0,0);
                info.oRoot = goRoot;
                GameObject light = new GameObject("light");
                light.gameObject.AddComponent<Light>();
                light.transform.parent = goRoot.transform;
                light.gameObject.GetComponent<Light>().type = LightType.Directional;
                info.oLight = light.gameObject.GetComponent<Light>();
                info.rtexture = RenderTexture.GetTemporary(1024, 1024, 16);
                info.rtexture.isPowerOfTwo = true;
                //info.rtexture.antiAliasing = 2;
                //info.rtexture.depth = 24;
                info.rtexture.filterMode = FilterMode.Bilinear;
                info.rtexture.wrapMode = TextureWrapMode.Clamp;
                //info.rtexture.anisoLevel = 16;
                info.rtexture.MarkRestoreExpected();
                info.camera.targetTexture = info.rtexture;
                UtilTools.SetLayer(goRoot.gameObject, iLayerMask);
                mUIModels.Add(info);
                goRoot.transform.localPosition = new Vector3(-271, -105, 707);
                if (call != null)
                {
                    call(info);
                }
            }
        });
    }
    public static Transform CreateModelBgPlane(UITexture uiTex, Transform parent, int layer)
    {
        GameObject bg = new GameObject("Bg");
        MeshFilter mf = bg.AddComponent<MeshFilter>();
        MeshRenderer mr = bg.AddComponent<MeshRenderer>();
        Mesh mesh = new Mesh();
        mesh.vertices = new Vector3[4]{ new Vector3(-0.5f, -0.5f, 0), new Vector3(0.5f, -0.5f, 0), new Vector3(-0.5f, 0.5f, 0), new Vector3(0.5f, 0.5f, 0) };
        mesh.uv = new Vector2[4]{ new Vector3(0, 0), new Vector3(1, 0), new Vector3(0, 1), new Vector3(1, 1) };
        mesh.triangles = new int[6]{ 0, 1, 2, 1, 3, 2 };
        mf.mesh = mesh;
        //Material mat = new Material(Shader.Find("Unlit/Transparent Colored"));
        mr.material = uiTex.material;
        bg.transform.parent = parent;
        bg.layer = layer;
        return bg.transform;
    }
    
  
    

    private static void AddLight(GameObject root, Vector3 pos, Vector3 rot)
    {
        if (root == null)
            return;
        GameObject lightGo = new GameObject("Directional");
        lightGo.transform.parent = root.transform;
        Light light = lightGo.AddComponent<Light>();
        light.type = LightType.Directional;
        light.transform.position = pos;
        light.transform.rotation = Quaternion.Euler(rot);
        Color color = new Color();
        color.r = 108f / 255f;
        color.g = 108 / 255f;
        color.b = 131 / 255f;
        color.a = 255;
        light.color = color;
        light.intensity = 1.14f;
        light.cookieSize = 10;
        light.renderMode = LightRenderMode.Auto;
    }

   
    /// <summary>
    /// 换shader
    /// </summary>
    /// <param name="role"></param>
    /// <param name="shader"></param>
    public static void ChangeShader(GameObject role, string strShaderPath, string strPrefix = "",string tag = "")
    {
        if (role == null)
            return;
        Shader shader = null;
        if (!string.IsNullOrEmpty(strShaderPath))
        {
            shader = Shader.Find(strShaderPath);
        }
        if (shader == null)
        {
            Debug.LogError("shader is none");
        }
        Renderer[] mSkinnedMeshRender = role.GetComponentsInChildren<Renderer>(true);
        if (mSkinnedMeshRender == null)
        {
            Debug.LogError("mSkinnedMeshRender is none");
            return;
        }

        for (int i = 0; i < mSkinnedMeshRender.Length; i++)
        {
            if (mSkinnedMeshRender[i].tag != tag)
            {
                if (mSkinnedMeshRender[i] != null && mSkinnedMeshRender[i].material != null)
                {
                    if (string.IsNullOrEmpty(strPrefix)
                        || (mSkinnedMeshRender[i].material.shader.name.StartsWith(strPrefix)
                        && !mSkinnedMeshRender[i].material.shader.name.Contains("UV Anima")))
                    {
                        mSkinnedMeshRender[i].material.shader = shader;
                    }
                }
            }
        }
    }

    public static void AttachModel(GameObject oGo, GameObject oChild)
    {
        UtilTools.SetLayer(oChild, LayerMask.NameToLayer("UIModel"));
        oChild.transform.parent = oGo.transform;
    }
    /// <summary>
    /// 改变灯光效果
    /// </summary>
    /// <param name="uInfo"></param>
    /// <param name="fPosX"></param>
    /// <param name="fPosY"></param>
    /// <param name="fPosZ"></param>
    /// <param name="fIntensity"></param>
    public static void SetLight(UIModelInfo uInfo, bool bLight = true, float fIntensity = 1.75f, float fPosX = 0.0f, float fPosY = 8.8f, float fPosZ = -3.5f)
    {
        if (uInfo.oLight == null)
            return;

        if (bLight != uInfo.oLight.gameObject.activeSelf)
        {
            uInfo.oLight.gameObject.SetActive(bLight);
        }
        ///设置灯光位置
        Vector3 vTemp = Vector3.zero;
        vTemp.x = fPosX;
        vTemp.y = fPosY;
        vTemp.z = fPosZ;
        uInfo.oLight.gameObject.transform.localPosition = vTemp;

        ///设置灯光强度
        uInfo.oLight.intensity = fIntensity;
    }
    /// <summary>
    /// 清除所有界面模型，专治疑难杂症
    /// </summary>
    public static void ClearAll()
    {
        if (mUIModels == null)
            return;

        for(int i=mUIModels.Count-1;i>=0;--i)
        {
            DestroryUIModel(mUIModels[i]);
        }
    }
    /// <summary>
    /// 删除界面模型
    /// </summary>
    /// <param name="uInfo">界面模型信息</param>
    public static void DestroryUIModel(UIModelInfo uInfo, bool isCached = false)
    {
        //Debug.LogError("[Destroy] " + uInfo.strModelRes + " at " + Time.frameCount);
        if (mUIModels.Contains(uInfo))
        {
            mUIModels.Remove(uInfo);

            if (isCached && uInfo.oModel != null)
            {
                uInfo.oModel.transform.parent = null;
                // 这里创建并没有使用pool，回收也不应该使用。
                //ObjectManager.mSpawnPool.Despawn(uInfo.oModel.transform);
               MonoBehaviour.Destroy(uInfo.oModel);
            }
            if (uInfo.camera != null)
            {
                uInfo.camera.targetTexture = null;
                MonoBehaviour.Destroy(uInfo.camera.gameObject);
            }
            if (uInfo.oRoot != null)
            {
                MonoBehaviour.Destroy(uInfo.oRoot.gameObject);
            }
            if (uInfo.rtexture != null)
            {
                RenderTexture.ReleaseTemporary(uInfo.rtexture);
                uInfo.rtexture = null;
            }

            uInfo.oModel = null;
            uInfo = null;
        }
    }

    /// <summary>
    /// 设置对象层级
    /// </summary>
    /// <param name="go">对象</param>
    /// <param name="layer">层级</param>
    static void SetLayer(GameObject go, int layer)
    {
        go.layer = layer;
        if (go.transform.childCount > 0)
        {
            int len = go.transform.childCount;
            for (int i = 0; i < len; i++)
            {
                SetLayer(go.transform.GetChild(i).gameObject, layer);
            }
        }
    } 

}

