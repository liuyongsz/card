using UnityEngine;

/// <summary>
/// 贴图资源对象
/// </summary>
public class MaterialAsset : ScriptableObject
{
    public Material material;

    //add by chenfei 20150824
    void OnDestroy()
    {
        if (material != null)
        {
            material = null;
        }
    }
}