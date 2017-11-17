using UnityEngine;
/// <summary>
/// 模型资源对象
/// </summary>
public class UIAtlasAsset : ScriptableObject
{
    public UIAtlas uiAtlas;
 
    //add by chenfei 20150824
    void OnDestroy()
    {
        if (uiAtlas != null)
            uiAtlas = null;
    }
}