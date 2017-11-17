using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using AssetBundles;

public class LoadedAssetBundle
{
    public AssetBundle assetBundle;
    public int referencedCount;

    public LoadedAssetBundle(AssetBundle assetBundle)
    {
        this.assetBundle = assetBundle;
        this.referencedCount = 1;
    }
}

public class AssetBundleManager : ManagerTemplate<AssetBundleManager>
{
    public static bool SimulateAssetBundleInEditor = true;

    private static Dictionary<string, LoadedAssetBundle> m_loadedAssetBundles = new Dictionary<string, LoadedAssetBundle>();
    private static Dictionary<string, string> m_downloadingErrors = new Dictionary<string, string>();
    private static Dictionary<string, WWW> m_downloadingWWWs = new Dictionary<string, WWW>();
    public static string m_baseDownloadingURL;
    private static string m_baseLocalStorage;
    private static List<string> m_keysToRemove = new List<string>();
    private static List<AMLoadOperation> m_inProgressOperations = new List<AMLoadOperation>();
    private static Dictionary<string, string[]> m_dependencies = new Dictionary<string, string[]>();

    protected override void InitManager()
    {
//#if UNITY_ANDROID
//        m_baseDownloadingURL = string.Format("{0}/{1}/", Application.streamingAssetsPath, ResourceUtil.GetPlatformName());
//        m_baseDownloadingURL = AssetBundles.AssetManager.BaseDownloadingURL;

//#else
//        m_baseDownloadingURL = string.Format("File:///{0}/{1}/", Application.streamingAssetsPath, ResourceUtil.GetPlatformName());
//#endif

        m_baseDownloadingURL = AssetBundles.AssetManager.BaseDownloadingURL;

        //m_baseLocalStorage = string.Format("{0}/{1}/", Application.streamingAssetsPath, ResourceUtil.GetPlatformName());
        m_baseLocalStorage = ResourcePath.GetBaseURL() + ResourceUtil.GetPlatformName() + "/";

            //m_baseDownloadingURL = ResourcePath.GetBaseURL();
            //UnloadAssetBundle(ResourceUtil.GetPlatformName());

            //string manifestPath = string.Format("{0}/{1}/{1}", Application.streamingAssetsPath, ResourceUtil.GetPlatformName());

            //AssetBundle bundle = AssetBundle.LoadFromFile(manifestPath);
            //m_assetBundleManifest = (AssetBundleManifest)bundle.LoadAsset("AssetBundleManifest", typeof(AssetBundleManifest));
            //bundle.Unload(false);
    }


    // Load level from the given assetBundle.
    public static AMLoadOperation LoadLevelAsync(string assetBundleName, string levelName, bool isAdditive)
    {
        AMLoadOperation operation = null;
#if UNITY_EDITOR
        if (SimulateAssetBundleInEditor)
        {
            operation = new AssetBundleLoadLevelSimulationOperation(assetBundleName, levelName, isAdditive);
        }
        else
#endif
        {
            LoadAssetBundle(assetBundleName, false);
            operation = new AssetBundleLoadLevelOperation(assetBundleName, levelName, isAdditive);

            m_inProgressOperations.Add(operation);
        }

        return operation;
    }

    /// <summary>
    /// 异步从AssetBundle加载资源，加载完成后可以调用UnloadAssetBundle提前卸载AssetBundle
    /// </summary>
    /// <returns>可以使用协程等待结果或者检查IsDone</returns>
    public static AMLoadAssetOperation LoadAssetAsync(string assetBundleName, string assetName, System.Type type)
    {
        AMLoadAssetOperation operation = null;

#if UNITY_EDITOR
        if (SimulateAssetBundleInEditor)
        {
            string[] assetPaths = UnityEditor.AssetDatabase.GetAssetPathsFromAssetBundleAndAssetName(assetBundleName, assetName);
            if (assetPaths.Length == 0)
            {
                Debug.LogError("There is no asset with name \"" + assetName + "\" in " + assetBundleName);
                return null;
            }

            // @TODO: Now we only get the main object from the first asset. Should consider type also.
            Object target = UnityEditor.AssetDatabase.LoadAssetAtPath(assetPaths[0], type);
            operation = new AssetBundleLoadAssetOperationSimulation(target);
        }
        else
#endif
        {
            LoadAssetBundle(assetBundleName, false);
            operation = new AssetBundleLoadAssetOperationSecond(assetBundleName, assetName, type);
            m_inProgressOperations.Add(operation);
        }

        return operation;
    }

    public static T LoadAsset<T>(string assetBundleName, string assetName) where  T : Object
    {
        return LoadAsset(assetBundleName, assetName, typeof(T)) as T;
    }

    public static Object LoadAsset(string assetBundleName, string assetName, System.Type type)
    {
//#if UNITY_EDITOR
//        if (SimulateAssetBundleInEditor)
//        {
//            string[] assetPaths = UnityEditor.AssetDatabase.GetAssetPathsFromAssetBundleAndAssetName(assetBundleName, assetName);
//            if (assetPaths.Length == 0)
//            {
//                Debug.LogError("There is no asset with name \"" + assetName + "\" in " + assetBundleName);
//                return null;
//            }

//            // @TODO: Now we only get the main object from the first asset. Should consider type also.
//            Object target = UnityEditor.AssetDatabase.LoadAssetAtPath(assetPaths[0], type);
//            return target;
//        }
//        else
//#endif
        {
            LoadAssetBundle(assetBundleName, true);

            //string error;
            //LoadedAssetBundle loadedBundle = GetLoadedAssetBundle(assetBundleName, out error);
            AssetBundle cfgBundle = ConfigManager.Instance.CfgBundle;

            if (cfgBundle == null)
            {
               // Debug.LogErrorFormat("Failed to load assetbundle. {0}", error);
                return null;
            }

            return cfgBundle.LoadAsset(assetName, type);
        }
    }

    public static LoadedAssetBundle GetLoadedAssetBundle(string assetBundleName, out string error)
    {
        if (m_downloadingErrors.TryGetValue(assetBundleName, out error))
            return null;

        LoadedAssetBundle bundle = null;
        m_loadedAssetBundles.TryGetValue(assetBundleName, out bundle);
        if (bundle == null)
            return null;

        // No dependencies are recorded, only the bundle itself is required.
        string[] dependencies = null;
        if (!m_dependencies.TryGetValue(assetBundleName, out dependencies))
            return bundle;

        // Make sure all dependencies are loaded
        foreach (var dependency in dependencies)
        {
            if (m_downloadingErrors.TryGetValue(dependency, out error))
                return bundle;

            // Wait all the dependent assetBundles being loaded.
            LoadedAssetBundle dependentBundle;
            m_loadedAssetBundles.TryGetValue(dependency, out dependentBundle);
            if (dependentBundle == null)
                return null;
        }

        return bundle;
    }

    private static void LoadAssetBundle(string assetBundleName, bool sync)
    {
#if UNITY_EDITOR
        if (SimulateAssetBundleInEditor)
            return;
#endif

        // Check if the assetBundle has already been processed.
        bool isAlreadyProcessed = LoadAssetBundleInternal(assetBundleName, sync);

        // Load dependencies.
        if (!isAlreadyProcessed)
            LoadDependencies(assetBundleName, sync);
    }

    private static bool LoadAssetBundleInternal(string assetBundleName, bool sync)
    {
        return true;
        //屏蔽
        //LoadedAssetBundle bundle = null;
        //if (m_loadedAssetBundles.TryGetValue(assetBundleName, out bundle))
        //{
        //    bundle.referencedCount++;
        //    return true;
        //}

        //if (sync)
        //{
        //    string path = m_baseLocalStorage + assetBundleName;

        //    AssetBundle assetbundle = AssetBundle.LoadFromFile(path);

        //    m_loadedAssetBundles.Add(assetBundleName, new LoadedAssetBundle(assetbundle));

        //    return true;
        //}
        //else
        //{
        //    if (m_downloadingWWWs.ContainsKey(assetBundleName))
        //        return true;

        //    WWW download = null;
        //    string url = m_baseDownloadingURL + assetBundleName;

        //    // For manifest assetbundle, always download it as we don't have hash for it.
        //    //if (isLoadingAssetBundleManifest)
        //    //    download = new WWW(url);
        //    //else
        //    download = WWW.LoadFromCacheOrDownload(url, m_assetBundleManifest.GetAssetBundleHash(assetBundleName), 0);

        //    m_downloadingWWWs.Add(assetBundleName, download);

        //    return false;
        //}
    }

    // Where we get all the dependencies and load them all.
    private static void LoadDependencies(string assetBundleName, bool sync)
    {
        if (AssetManager.AssetBundleManifestObject == null)
        {
            Debug.LogError("Missing AssuetBundleManifest");
            return;
        }

        // Get dependecies from the AssetBundleManifest object..
        string[] dependencies = AssetManager.AssetBundleManifestObject.GetAllDependencies(assetBundleName);
        if (dependencies.Length == 0)
            return;

        //for (int i = 0; i < dependencies.Length; i++)
        //    dependencies[i] = RemapVariantName(dependencies[i]);

        // Record and load all dependencies.
        m_dependencies.Add(assetBundleName, dependencies);
        for (int i = 0; i < dependencies.Length; i++)
            LoadAssetBundleInternal(dependencies[i], sync);
    }

    public static void UnloadAssetBundle(string assetBundleName)
    {
#if UNITY_EDITOR
        // If we're in Editor simulation mode, we don't have to load the manifest assetBundle.
        if (SimulateAssetBundleInEditor)
            return;
#endif

        UnloadAssetBundleInternal(assetBundleName);
        UnloadDependencies(assetBundleName);
    }

    private static void UnloadAssetBundleInternal(string assetBundleName)
    {
        string error;
        LoadedAssetBundle bundle = GetLoadedAssetBundle(assetBundleName, out error);
        if (bundle == null)
        {
            WWW download;
            if (m_downloadingWWWs.TryGetValue(assetBundleName, out download))
            {
                download.Dispose();
                m_downloadingWWWs.Remove(assetBundleName);
            }

            return;
        }

        if (--bundle.referencedCount == 0)
        {
            bundle.assetBundle.Unload(false);
            m_loadedAssetBundles.Remove(assetBundleName);
        }
    }

    private static void UnloadDependencies(string assetBundleName)
    {
        string[] dependencies = null;
        if (!m_dependencies.TryGetValue(assetBundleName, out dependencies))
            return;

        // Loop dependencies.
        foreach (var dependency in dependencies)
        {
            UnloadAssetBundleInternal(dependency);
        }

        m_dependencies.Remove(assetBundleName);
    }

    //public static void UnloadAll()
    //{
    //    foreach (var bundle in m_loadedAssetBundles.Values)
    //        bundle.assetBundle.Unload(true);

    //    foreach (var download in m_downloadingWWWs.Values)
    //        download.Dispose();

    //    foreach (var op in m_inProgressOperations)
    //    {
    //        if (op is AssetBundleLoadAssetOperation)
    //            ((AssetBundleLoadAssetOperation)op).Cancel();
    //    }

    //    m_loadedAssetBundles.Clear();
    //    m_downloadingErrors.Clear();
    //    m_downloadingWWWs.Clear();
    //    m_inProgressOperations.Clear();
    //    m_dependencies.Clear();
    //}

    void Update()
    {
        m_keysToRemove.Clear();

        foreach (var keyValue in m_downloadingWWWs)
        {
            WWW download = keyValue.Value;

            if (download.error != null)
            {
                m_downloadingErrors.Add(keyValue.Key, string.Format("Failed to downloading bundle {0} from {1}: {2}", keyValue.Key, download.url, download.error));
                m_keysToRemove.Add(keyValue.Key);
                continue;
            }

            if (download.isDone)
            {
                AssetBundle bundle = download.assetBundle;
                if (bundle == null)
                {
                    m_downloadingErrors.Add(keyValue.Key, string.Format("{0} is not a valid asset bundle.", keyValue.Key));
                    m_keysToRemove.Add(keyValue.Key);
                    continue;
                }

                m_loadedAssetBundles.Add(keyValue.Key, new LoadedAssetBundle(download.assetBundle));
                m_keysToRemove.Add(keyValue.Key);
            }
        }

        // Remove the finished WWWs.
        foreach (var key in m_keysToRemove)
        {
            WWW download = m_downloadingWWWs[key];
            m_downloadingWWWs.Remove(key);
            download.Dispose();
        }

        // Update all in progress operations
        for (int i = 0; i < m_inProgressOperations.Count;)
        {
            if (!m_inProgressOperations[i].Update())
            {
                m_inProgressOperations.RemoveAt(i);
            }
            else
                i++;
        }

        m_keysToRemove.Clear();
    }
}
