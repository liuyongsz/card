using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MeshAlpha : MonoBehaviour {

    public float alpha_1 = 1;

    /// <summary>
    /// 上一次的alpha值 用于比较alpha值是否改变
    /// </summary>
    private float prevAlpha_1 = 1;

    public float alpha_2 = 1;

    private float prevAlpha_2 = 1;

    /// <summary>
    /// 需要改变alpha值的mesh
    /// </summary>
    public List<Material> mMaterials = new List<Material>();

    //private Color mColor = Color.white;
    
	// Use this for initialization
    void Start()
    {
        prevAlpha_1 = alpha_1;
        prevAlpha_2 = alpha_2;

        Renderer[] renderers = transform.GetComponents<Renderer>();
        Renderer renderer;
        for (int i = 0; i < renderers.Length; i++)
        {
            renderer = renderers[i];
            if (renderer.material != null)
            {
                mMaterials.Add(renderer.material);
            }
        }
    }
	
	// Update is called once per frame
	void Update () 
    {
        alpha_1 = Mathf.Min(1, alpha_1);
        alpha_1 = Mathf.Max(alpha_1, 0);

        float d = Mathf.Abs(prevAlpha_1 - alpha_1);

        if (d > 0.001f)
        {
			SetAlpha(alpha_1, prevAlpha_1, "_Color1");

            prevAlpha_1 = alpha_1;
        }

        alpha_2 = Mathf.Min(1, alpha_2);
        alpha_2 = Mathf.Max(alpha_2, 0);

        d = Mathf.Abs(prevAlpha_2 - alpha_2);

        if (d > 0.001f)
        {
			SetAlpha(alpha_2, prevAlpha_2, "_Color2");

            prevAlpha_2 = alpha_2;
        }
	}

    private void SetAlpha(float alpha, float prealpha, string colorName)
    {
        alpha = Mathf.Min(1, alpha);
        alpha = Mathf.Max(alpha, 0);


        Material material;
        Color color;
        for (int i = 0; i < mMaterials.Count; i++)
        {
            material = mMaterials[i];
            if (material != null)
            {
                color = material.GetColor(colorName);
				//LogSystem.LogError(color);
                color.a = alpha;
                material.SetColor(colorName, color);   
            }
        }

    }
}
