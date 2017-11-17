using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class ConfigBase
{
    public UnityEngine.Events.UnityAction m_onLoaded;

    public void LoadData(string name,UnityEngine.Events.UnityAction loadedFun = null)
    {
        m_onLoaded = null;
        ResourceManager.Instance.LoadBytes(name, AssetBundles.EResType.E_BYTE, onloaded, errorload);
    }

    public virtual void onloaded(AssetBundles.NormalRes normalRes)
    {
        if(null != m_onLoaded)
        {
            m_onLoaded();
            m_onLoaded = null;
        }
    }

    public virtual void errorload(string error)
    {

    }
}
