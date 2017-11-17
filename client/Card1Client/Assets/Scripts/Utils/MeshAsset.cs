using UnityEngine;
/// <summary>
/// 模型资源对象
/// </summary>
public class MeshAsset : ScriptableObject
{
    public Mesh mesh;

    //add by chenfei 20150824
    void OnDestroy()
    {
        if( mesh != null)
            mesh = null;
    }
}