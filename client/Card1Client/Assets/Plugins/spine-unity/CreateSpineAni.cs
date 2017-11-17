using UnityEngine;
using System.Collections;
using Spine;
using Spine.Unity;
using Spine.Unity.Modules;
using System.Collections.Generic;

[ExecuteInEditMode]
public class CreateSpineAni : MonoBehaviour
{
    public Texture2D texture;
    public TextAsset atlasText;
    public TextAsset jsonText;
    public int MeshSortingOrder;
    public string DefaultAnimationName = "idle";

    public Vector3 SpineScale = Vector3.one;

    public bool IsLoaded;

    MeshRenderer meshRenderer;
    int oldMesRendererSortingOrder;

    // Use this for initialization
    void Start ()
    {
        //gameObject.SetActive(false);

        CreateSpineObject();
    }

    public void CreateSpineObject()
    {
        Material material = new Material(Resources.Load("spine/Shaders/Spine-Skeleton") as Shader);
        material.mainTexture = texture;

        Spine.Unity.AtlasAsset atlasAsset = Spine.Unity.AtlasAsset.CreateInstance<Spine.Unity.AtlasAsset>();
        atlasAsset.atlasFile = atlasText;
        atlasAsset.materials = new Material[1];
        atlasAsset.materials[0] = material;

        SkeletonDataAsset dataAsset = SkeletonDataAsset.CreateInstance<SkeletonDataAsset>();
        dataAsset.atlasAssets = new Spine.Unity.AtlasAsset[1];
        dataAsset.atlasAssets[0] = atlasAsset;
        dataAsset.skeletonJSON = jsonText;
        dataAsset.fromAnimation = new string[0];
        dataAsset.toAnimation = new string[0];
        dataAsset.duration = new float[0];
        dataAsset.defaultMix = 0.2f;
        dataAsset.scale = 1.0f;

        GameObject obj = gameObject;
        SkeletonAnimation anim = obj.GetComponent<SkeletonAnimation>();
       
        if(null == anim)
            anim = obj.AddComponent<SkeletonAnimation>();

        meshRenderer = obj.GetComponent<MeshRenderer>();

        if (null == meshRenderer)
            meshRenderer = obj.AddComponent<MeshRenderer>();

        // meshRenderer.sortingLayerName = "spine";
        meshRenderer.sortingOrder = MeshSortingOrder;
        anim.skeletonDataAsset = dataAsset;
        oldMesRendererSortingOrder = MeshSortingOrder;

        anim.initialSkinName = "default";

        //anim.Reset();
        anim.loop = true;
        anim.AnimationName = DefaultAnimationName;

        //anim.state.Complete += OnCompleteSpineAnim;

        //obj.transform.SetParent(this.gameObject.transform);
        //obj.transform.localPosition = Vector3.zero;
        obj.transform.localScale = SpineScale;

        List<Transform> childrens = new List<Transform>();
        childrens.AddRange(obj.transform.GetComponentsInChildren<Transform>());

        //for (int i = 0; i < childrens.Count; ++i){

        //    childrens[i].gameObject.layer = LayerMask.NameToLayer("UI");
        //}

         anim.Awake();

        //gameObject.SetActive(true);

        IsLoaded = true;
    }

    public void Update()
    {
        //gameObject.SetActive(true);

        if(this.SpineScale != transform.localScale)
        {
            transform.localScale = this.SpineScale;
        }

        if(oldMesRendererSortingOrder != MeshSortingOrder)
        {
            meshRenderer.sortingOrder = MeshSortingOrder;
            oldMesRendererSortingOrder = MeshSortingOrder;
        }
    }

    private void OnCompleteSpineAnim(Spine.AnimationState state, int trackIndex, int loopCount)
    {
        Debug.Log(string.Format("state : {0} , trackIndex : {1} , loopCount : {2}", state, trackIndex, loopCount));
    }
}
