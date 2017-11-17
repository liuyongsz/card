using UnityEngine;
/// <summary>
/// 模型资源对象
/// </summary>
public class AtlasAsset : ScriptableObject
{
    public Material material;
 
    //add by chenfei 20150824
    void OnDestroy()
    {
        if (material != null)
            material = null;
    }
}