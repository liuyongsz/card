using UnityEngine;
using System.Collections;
using System;

public abstract class AMLoadOperation : IEnumerator
{
    public object Current
    {
        get
        {
            return null;
        }
    }
    public bool MoveNext()
    {
        return !IsDone();
    }

    public void Reset()
    {
    }

    abstract public bool Update();

    abstract public bool IsDone();

    public abstract void UnloadAssetBundle();
}

public abstract class AMLoadAssetOperation : AMLoadOperation
{
    public abstract T GetAsset<T>() where T : UnityEngine.Object;
}

public class AssetBundleLoadAssetOperationSecond : AMLoadAssetOperation
{
    protected string assetBundleName;
    protected string assetName;
    protected string downloadingError;
    protected System.Type type;
    protected AssetBundleRequest request = null;
    protected bool cancelled = false;
    protected bool unloaded = false;

    public AssetBundleLoadAssetOperationSecond(string assetBundleName, string assetName, System.Type type)
    {
        this.assetBundleName = assetBundleName;
        this.assetName = assetName;
        this.type = type;
    }

    public override T GetAsset<T>()
    {
        if (request != null && request.isDone)
            return request.asset as T;
        else
            return null;
    }

    public override bool IsDone()
    {
        if (cancelled)
        {
            Debug.LogError(downloadingError);
            return true;
        }
            
        // Return if meeting downloading error.
        // m_DownloadingError might come from the dependency downloading.
        if (request == null && downloadingError != null)
        {
            Debug.LogError(downloadingError);
            return true;
        }

        return request != null && request.isDone;
    }

    // Returns true if more Update calls are required.
    public override bool Update()
    {
        if (cancelled)
            return false;

        if (request == null)
        {
            LoadedAssetBundle bundle = AssetBundleManager.GetLoadedAssetBundle(assetBundleName, out downloadingError);
            if (bundle != null)
            {
                request = bundle.assetBundle.LoadAssetAsync(assetName, type);
                return false;
            }
            else
            {
                return true;
            }
        }

        return false;
    }

    public void Cancel()
    {
        cancelled = true;
        downloadingError = "cancelled";
    }

    public override void UnloadAssetBundle()
    {
        if (!unloaded)
        {
            AssetBundleManager.UnloadAssetBundle(assetBundleName);
            unloaded = true;
        }
    }
}

public class AssetBundleLoadAssetOperationSimulation : AMLoadAssetOperation
{
    UnityEngine.Object simulatedObject;

    public AssetBundleLoadAssetOperationSimulation(UnityEngine.Object simulatedObject)
    {
        this.simulatedObject = simulatedObject;
    }

    public override T GetAsset<T>()
    {
        return simulatedObject as T;
    }

    public override bool Update()
    {
        return false;
    }

    public override bool IsDone()
    {
        return true;
    }

    public override void UnloadAssetBundle()
    {
        return;
    }
}

public class AssetBundleLoadLevelOperation : AMLoadOperation
{
    protected string assetBundleName;
    protected string levelName;
    protected bool isAdditive;
    protected string downloadError;
    protected AsyncOperation request;
    protected bool unloaded = false;

    public AssetBundleLoadLevelOperation(string assetbundleName, string levelName, bool isAdditive)
    {
        this.assetBundleName = assetbundleName;
        this.levelName = levelName;
        this.isAdditive = isAdditive;
    }

    public override bool Update()
    {
        if (request != null)
            return false;

        LoadedAssetBundle bundle = AssetBundleManager.GetLoadedAssetBundle(assetBundleName, out downloadError);
        if (bundle != null)
        {
            if (isAdditive)
                request = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(levelName, UnityEngine.SceneManagement.LoadSceneMode.Additive);
            else
                request = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(levelName, UnityEngine.SceneManagement.LoadSceneMode.Single);
            return false;
        }
        else
            return true;
    }

    public override bool IsDone()
    {
        // Return if meeting downloading error.
        // downloadingError might come from the dependency downloading.
        if (request == null && downloadError != null)
        {
            Debug.LogError(downloadError);
            return true;
        }

        return request != null && request.isDone;
    }

    public override void UnloadAssetBundle()
    {
        if (!unloaded)
        {
            AssetBundleManager.UnloadAssetBundle(assetBundleName);
            unloaded = true;
        }
    }
}

#if UNITY_EDITOR
public class AssetBundleLoadLevelSimulationOperation : AMLoadOperation
{
    AsyncOperation operation = null;

    public AssetBundleLoadLevelSimulationOperation(string assetBundleName, string levelName, bool isAdditive)
    {
        string[] levelPaths = UnityEditor.AssetDatabase.GetAssetPathsFromAssetBundleAndAssetName(assetBundleName, levelName);
        if (levelPaths.Length == 0)
        {
            ///@TODO: The error needs to differentiate that an asset bundle name doesn't exist
            //        from that there right scene does not exist in the asset bundle...

            Debug.LogError("There is no scene with name \"" + levelName + "\" in " + assetBundleName);
            return;
        }

        if (isAdditive)
            operation = UnityEditor.EditorApplication.LoadLevelAdditiveAsyncInPlayMode(levelPaths[0]);
        else
            operation = UnityEditor.EditorApplication.LoadLevelAsyncInPlayMode(levelPaths[0]);
    }

    public override bool Update()
    {
        return false;
    }

    public override bool IsDone()
    {
        return operation == null || operation.isDone;
    }

    public override void UnloadAssetBundle()
    {
        return;
    }
}

#endif
