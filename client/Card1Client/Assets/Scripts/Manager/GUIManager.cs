using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using PureMVC.Interfaces;
using PureMVC.Patterns;

public class GUIManager : MonoBehaviour
{
    public static NetState CurrentNetState;

    private static int index = 0;
    private static Transform uiLayer1;
    private static Vector3 pos = new Vector3(0, 100, 0);
    public static List<GameObject> jumpList = new List<GameObject>();
    public static DictionaryEx<string, GameObject> m_panelList = new DictionaryEx<string, GameObject>();
    public static DictionaryEx<string, GameObject> m_panelExitList = new DictionaryEx<string, GameObject>();
    private static List<string> jumpContentList = new List<string>();

    public static bool AlertBrokenNetWork;
    void Start()
    {
        TimerManager.AddTimerRepeat("jumpText", 0.3f, AddJumpList);
    }

    private void Update()
    {
        if(AlertBrokenNetWork)
        {
            AlertBrokenNetWork = false;
        }
    }

    public static void SetLoadingProgress(float progress)
    {
        LoadingScenePer = progress;
    }

    void Destroy()
    {
        TimerManager.Destroy("jumpText");
    }
    public static void CloseAllUI(bool useForce = false,bool exceptLoading = false)
    {
        Facade.Instance.SendNotification(NotificationID.CloseAll);
    }

    /// <summary>显示加载进度条</summary>
    public static void ShowLoadingUI()
    {
        CloseAllUI();
    }

    /// <summary>隐藏界面</summary>
    public static void HidePanel(string name)
    {
        if (m_panelList.ContainsKey(name))
        {
            m_panelList[name].SetActive(false);
        }
    }

    /// <summary>显示隐藏的界面</summary>
    public static void ShowPanel(string name)
    {
        if (m_panelList.ContainsKey(name))
        {
            m_panelList[name].SetActive(true);
        }
    }

    public static bool HasView(string name)
    {

        if (m_panelList.ContainsKey(name) || m_panelExitList.ContainsKey(name))
            return true;

        return false;
    }
    void AddJumpList()
    {
        if (jumpContentList.Count <= 0)
            return;
        string content = jumpContentList[0];
        jumpContentList.RemoveAt(0);
        ResourceManager.Instance.LoadPrefab("jumpLabel", (name, obj) =>
        {
            obj.AddComponent<TextDestroy>();
            obj.GetComponent<UILabel>().text = content;
            Transform tparent = UICamera.mainCamera.transform;
            obj.transform.SetParent(tparent);
            obj.transform.localScale = Vector3.one;
            jumpList.Insert(0, obj);
            TweenScale.Begin(obj, 0.1f, new Vector3(1.16f, 1.16f, 1.16f));
            index++;
            TimerManager.AddTimer("index" + index, 0.1f, OnScaleFinished, obj);
            if (jumpList.Count > 1)
            {
                TweenPosition.Begin(jumpList[1].gameObject, 0.2f, jumpList[1].transform.localPosition + pos);
                TweenScale.Begin(jumpList[1].gameObject, 0.1f, new Vector3(0.9f, 0.9f, 0.9f));
            }
            if (jumpList.Count > 2)
            {
                TweenPosition.Begin(jumpList[2].gameObject, 0.2f, jumpList[2].transform.localPosition + pos);
                TweenScale.Begin(jumpList[2].gameObject, 0.1f, new Vector3(0.8f, 0.8f, 0.8f));
            }
            if (jumpList.Count > 3)
            {
                MonoBehaviour.Destroy(jumpList[3].gameObject);
                jumpList.RemoveAt(3);
            }
        });
    }
    /// <summary>
    /// 设置跳字 
    /// </summary>
    public static void SetJumpText(string content)
    {
        if (jumpContentList.Count >= 4)
            return;
        jumpContentList.Add(content);
    }
    public static void ShowPlayerInfo(int dbid)
    {
      
    }
    static void OnScaleFinished(params object[] arg)
    {
        GameObject obj = arg[0] as GameObject;
        TweenScale tween1 = TweenScale.Begin(obj, 0, new Vector3(1, 1, 1));
    }

    public static void ChangeAtlas(string atlasName, string spriteName, UISprite sprite)
    {
        ResourceManager.Instance.LoadAtlas(atlasName, spriteName, sprite, LoadAtlasSucess, null);
    }
    static void LoadAtlasSucess(string spriteName, UISprite sprite, AssetBundle data)
    {
        UIAtlas atlas = (data.LoadAsset(data.name) as GameObject).GetComponent<UIAtlas>();
        sprite.atlas = atlas;
        sprite.spriteName = spriteName;
    }

    public static void ShowPromptPanel(string title, string context, PromtType type, Confirm confirm = null, CreateTeam createTeam = null,CopyTeam copyTeam = null )
    {
        PromtInfo info = new PromtInfo();
        info.title = title;
        info.context = context;
        info.promtType = type;
        info.confirm = confirm;
        info.createTeam = createTeam;
        info.copyTeam = copyTeam;
        info.promtType = type;
        Facade.Instance.SendNotification(NotificationID.PromptOpen, info);
    }
    /// <summary>
    /// 设置物体层级 
    /// </summary>
    public static void ChangeLayer(GameObject obj, string layer)
    {
        List<Transform> childrens = GetAllChildTransforms(obj.transform);

        for (int i = 0; i < childrens.Count; ++i)
        {
            childrens[i].gameObject.layer = LayerMask.NameToLayer(layer);
        }
    }
    public static List<Transform> GetAllChildTransforms(Transform trs)
    {
        List<Transform> list = new List<Transform>();
        list.AddRange(trs.GetComponentsInChildren<Transform>());
        return list;
    }

   
  
    /// <summary>
    /// 设置层级
    /// </summary>
    /// <param name="go"></param>
    /// <param name="layer"></param>
    public static void SetLayer(GameObject go, int layer)
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

    /// <summary>
    /// 换shader
    /// </summary>
    /// <param name="role"></param>
    /// <param name="shader"></param>
    public static void ChangeShader(GameObject role, params string[] args)
    {
        if (args == null || args.Length == 0)
            return;

        Shader[] shaders = new Shader[args.Length];
        for (int i = 0; i < args.Length; i++)
        {
            shaders[i] = Shader.Find(args[i]);
            if (shaders[i] == null)
            {
                Debug.LogError("shader not found");
            }
        }

        Renderer[] mSkinnedMeshRender = role.GetComponentsInChildren<Renderer>(true);
        if (mSkinnedMeshRender == null)
        {
            return;
        }

        for (int i = 0; i < mSkinnedMeshRender.Length; i++)
        {
            if (mSkinnedMeshRender[i] != null && mSkinnedMeshRender[i].material != null)
            {
                for (int j = 0; j < args.Length; j++)
                {
                    if (shaders[j] == null)
                        continue;

                    string strPrefix = args[j].Substring(0, args[j].Length - 1);
                    if (mSkinnedMeshRender[i].material.shader.name.Equals(strPrefix))
                    {
                        mSkinnedMeshRender[i].material.shader = shaders[j];
                    }
                }
            }
        }
    }

    /// <summary>
    /// 更新shader
    /// </summary>
    /// <param name="role"></param>
    /// <param name="strShader"></param>
    /// <param name="strPrefix"></param>
    public static void ChangeShader(GameObject role, Shader shader, string strPrefix, string strPrefix2)
    {
        if (shader == null)
        {
            Debug.LogError("ChangeShader::LoadError");
        }
        Renderer[] mSkinnedMeshRender = role.GetComponentsInChildren<Renderer>(true);
        if (mSkinnedMeshRender == null)
        {
            return;
        }

        for (int i = 0; i < mSkinnedMeshRender.Length; i++)
        {
            if (mSkinnedMeshRender[i] != null && mSkinnedMeshRender[i].material != null)
            {
                if (mSkinnedMeshRender[i].material.shader.name.Equals(strPrefix)
                    || mSkinnedMeshRender[i].material.shader.name.Equals(strPrefix2))
                {
                    mSkinnedMeshRender[i].material.shader = shader;
                }
            }
        }
    }
    /// <summary>
    /// 设置RenderQ
    /// </summary>
    /// <param name="oModel"></param>
    public static void SetUIModelRenderQ(GameObject oModel, int renderQueue = 3100)
    {
        if (oModel == null)
            return;
        int effect = LayerMask.NameToLayer("Effect");
        Renderer[] rens = oModel.GetComponentsInChildren<Renderer>(true);
        if (rens != null)
        {
            for (int i = 0; i < rens.Length; i++)
            {
                Renderer rend = rens[i];
                if (rend != null && rend.gameObject.layer == effect)// 
                {
                    rend.material.renderQueue = renderQueue;//将特效显示在最上层
                }
            }
        }

        ParticleSystemRenderer[] particles = oModel.GetComponentsInChildren<ParticleSystemRenderer>(true);
        if (particles != null)
        {
            for (int i = 0; i < rens.Length; i++)
            {
                Renderer rend = rens[i];
                if (rend != null && rend.gameObject.layer == effect)// && 
                {
                    rend.material.renderQueue = renderQueue;//将特效显示在最上层
                }
            }
        }
    }

    /// <summary>
    /// 隐藏粒子特效
    /// </summary>
    /// <param name="oModel"></param>
    public static void HideParticles(GameObject oModel)
    {
        if (oModel == null)
            return;

        ParticleSystem[] particles = oModel.GetComponentsInChildren<ParticleSystem>(true);
        if (particles != null)
        {
            for (int i = 0; i < particles.Length; i++)
            {
                particles[i].enableEmission = false;
                particles[i].GetComponent<Renderer>().enabled = false;
            }
        }
    }

    /// <summary>
    /// 粒子特效适应界面模型
    /// </summary>
    /// <param name="oModel"></param>
    public static void AdjustParticlesToUI(GameObject oModel, float modelScale, float uiScale)
    {
        if (oModel == null)
            return;

        if (modelScale == 0f)
        {
            return;
        }

        ParticleSystem[] particles = oModel.GetComponentsInChildren<ParticleSystem>(true);
        if (particles != null)
        {
            float scaleRate = uiScale * modelScale;
            for (int i = 0; i < particles.Length; i++)
            {
                ParticleSystem particleSystem = particles[i];
                particleSystem.startSize *= scaleRate;
                particleSystem.startSpeed *= scaleRate;
                float maxParticles = particleSystem.maxParticles;
                maxParticles *= scaleRate;
                particleSystem.maxParticles = (int)maxParticles;
                ParticleSystemRenderer render = particleSystem.GetComponent<ParticleSystemRenderer>();
                if (render)
                {
                    render.maxParticleSize *= scaleRate;
                }
            }
        }
    }

    public static void SetObjRenderQ(GameObject oModel, int iLayer, int iRenderQueue)
    {
        if (oModel == null)
            return;
        Renderer[] rens = oModel.GetComponentsInChildren<Renderer>(true);
        if (rens != null)
        {
            for (int i = 0; i < rens.Length; i++)
            {
                Renderer rend = rens[i];
                if (rend != null && rend.gameObject.layer == iLayer)
                {
                    rend.material.renderQueue = iRenderQueue;//将特效显示在最上层
                }
            }
        }
    }

    /// <summary>
    /// 渲染层级
    /// </summary>
    /// <param name="oModel"></param>
    public static void SetObjRenderQ(GameObject oModel, int iRenderQueue)
    {
        if (oModel == null)
            return;
        Renderer[] rens = oModel.GetComponentsInChildren<Renderer>(true);
        if (rens != null)
        {
            for (int i = 0; i < rens.Length; i++)
            {
                Renderer rend = rens[i];
                if (rend != null)
                {
                    rend.material.renderQueue = iRenderQueue;//将特效显示在最上层
                }
            }
        }
    }
    /// <summary>
    /// Lua打开界面
    /// </summary>
    public static void OpenPanel(NotificationID notificationName)
    {
        Facade.Instance.SendNotification(notificationName);
    }

    public static float LoadingScenePer;
    public void OnGUI()
    {
      //  verticalValue = GUI.HorizontalSlider(new Rect(10, Screen.height - 30, Screen.width - 20,25), verticalValue, 0, 100);
    }
}



