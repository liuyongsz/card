using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ConfigManager : ManagerTemplate<ConfigManager>
{
    private static Dictionary<System.Type, ConfigLoaderBase> m_configLoaders = new Dictionary<System.Type, ConfigLoaderBase>();

    public AssetBundle CfgBundle;
    public static T Get<T>() where T : ConfigLoaderBase
    {
        ConfigLoaderBase loader = null;
        if (!m_configLoaders.TryGetValue(typeof(T), out loader))
            return null;

        return loader as T;
    }

    protected override void InitManager()
    {
        const string XmlConfigBundle = "configxml.bundle";

        ResourceManager.Instance.LoadAB(XmlConfigBundle, OnLoad_CfgBundleComplete, OnLoad_CfgBundleError);
    }

    private void OnLoad_CfgBundleComplete(AssetBundle cfgAB)
    {
        CfgBundle = cfgAB;
        var types = System.Reflection.Assembly.GetCallingAssembly().GetTypes();

        for (int i = 0; i < types.Length; i++)
        {
            var type = types[i];
            if (type.IsSubclassOf(typeof(ConfigLoaderBase)))
            {
                var loader = System.Activator.CreateInstance(type) as ConfigLoaderBase;
                if (loader == null)
                    continue;

                m_configLoaders.Add(types[i], loader);
                loader.Load();
            }
        }
    }

    private void OnLoad_CfgBundleError(string error)
    {
        Debug.LogError("loader configxml ab error");
    }
}
