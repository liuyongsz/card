using UnityEngine;
using System.Collections;
using Spine;
using Spine.Unity;

public class ResetSpineMat : MonoBehaviour {

    public Texture texture2D;
    private SkeletonAnimator mAni;
    MeshRenderer mesh;
   Material mat;
   void Start()
    {
        mesh = transform.GetComponent<MeshRenderer>();
        mesh.material = null;

        mAni = transform.GetComponent<SkeletonAnimator>();

        StartCoroutine(RestMat());
    }

    IEnumerator RestMat()
    {
        if (!mAni.skeletonDataAsset.IsLoaded)
            yield return mAni;

        //Shader sar = Shader.Find("Unlit/Transparent Colored");
        //mat = mAni.SkeletonDataAsset.atlasAssets[0].materials[0];

        //mat.shader = null;
        //mat.shader = sar;
        //mat.SetTexture("_MainTex", texture2D);
        //mesh.material = mat;
    }

    public void OnRenderObject()
    {
        //if(!initedSet)
        //{
        //mesh.material = mat;
        //}

        //mesh.sharedMaterial = mat;
    }
}
