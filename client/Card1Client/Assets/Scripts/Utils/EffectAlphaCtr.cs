using UnityEngine;
using System.Collections;

//[RequireComponent(typeof(Renderer))]
public class EffectAlphaCtr : MonoBehaviour
{
    public bool alphaGradient; //启用alpha渐变
    public float Delay;    //延迟时间
    public float Duration;         //周期
    public AnimationCurve alphaAnimCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));
	public GameObject go = null;

    private float alphaTime;
    private int nameID;

 //   public float alphaValue = 1.0f;

	void setObjectToTransparent()
	{
		//将物件设为透明
		mat.EnableKeyword("_ALPHACTR_ON");
        mat.SetOverrideTag("RenderType", "Transparent");
        mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
        mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        mat.SetInt("_ZWrite", 0);
        mat.DisableKeyword("_ALPHATEST_ON");
        mat.DisableKeyword("_ALPHABLEND_ON");
        mat.EnableKeyword("_ALPHAPREMULTIPLY_ON");
        mat.renderQueue = 3000;
	}
 
	void setObjectToOpaque()
	{
		//将物件设为不透明
        mat.SetOverrideTag("RenderType", "");
        mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
        mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
        mat.SetInt("_ZWrite", 1);
        mat.DisableKeyword("_ALPHATEST_ON");
        mat.DisableKeyword("_ALPHABLEND_ON");
        mat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        mat.renderQueue = -1;

        mat.DisableKeyword("_ALPHACTR_ON");
	}
 
    // Use this for initialization
    void Start()
    {
        alphaTime = -Delay;
        nameID = Shader.PropertyToID("AlphaCtr");

		if (go == null)
			return;
		
		mat = go.GetComponent<MeshRenderer>().sharedMaterial;
	
		setToTransparent = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (go == null)
			return;
		
		if (alphaGradient)
        {
            alphaTime += Time.deltaTime;
            if (alphaTime >= 0)
            {
				if (setToTransparent)
				{
					setObjectToTransparent(); 
					setToTransparent = false;
				}

				mat.SetFloat(nameID, alphaAnimCurve.Evaluate(alphaTime / Duration));
            }
        }
    }

    void OnDestroy()
    {
		setObjectToOpaque();
    }

//    private MeshRenderer mr = null;
	private bool setToTransparent;
    private Material mat = null;
}
