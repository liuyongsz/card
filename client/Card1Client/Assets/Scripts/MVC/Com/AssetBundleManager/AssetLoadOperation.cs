using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

namespace AssetBundles
{
	public abstract class AssetLoadOperation : IEnumerator
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
		
		abstract public bool Update ();
		
		abstract public bool IsDone ();
	}
	
    public class NoramlResOperation: AssetLoadOperation
    {
        protected string m_texturename;
        protected string m_DownloadingError;
        protected AsyncOperation m_Request;
        public LoadedWWW m_loaded = null;

        

        
        public NoramlResOperation( string texturename)
        {
            m_texturename = texturename;
        }

        public override bool Update()
        {
             m_loaded = AssetManager.GetLoadedAssetBundle(m_texturename, out m_DownloadingError);
            if (m_loaded != null)
            {
                return false;
            }
            else
            {
                return !IsDone();
            }
        }

        public override bool IsDone()
        {
            // Return if meeting downloading error.
            // m_DownloadingError might come from the dependency downloading.
            if (m_loaded == null && m_DownloadingError != null)
            {
                Debug.LogError(m_DownloadingError);
                return true;
            }
            return m_loaded != null;

        }
    }




    public class AssetBundleLoadLevelOperation : AssetLoadOperation
	{
		protected string 				m_AssetBundleName;
		protected string 				m_LevelName;
		protected bool 					m_IsAdditive;
		protected string 				m_DownloadingError;
		protected AsyncOperation		m_Request;
	
		public AssetBundleLoadLevelOperation (string assetbundleName, string levelName, bool isAdditive)
		{
			m_AssetBundleName = assetbundleName;
			m_LevelName = levelName;
			m_IsAdditive = isAdditive;
		}
	
		public override bool Update ()
		{
			if (m_Request != null)
				return false;
			
			LoadedWWW bundle = AssetManager.GetLoadedAssetBundle (m_AssetBundleName, out m_DownloadingError);
            if (bundle != null)
            {
                if (m_IsAdditive)
                {
                    m_Request = SceneManager.LoadSceneAsync(m_LevelName, LoadSceneMode.Additive);
                }
                else
                {
                    m_Request = SceneManager.LoadSceneAsync(m_LevelName, LoadSceneMode.Single);
                }
                // AssetBundleManager.UnloadAssetBundle(m_AssetBundleName);
                return false;


            }
            else
            {
                return !IsDone();
            }
		}
		
		public override bool IsDone ()
		{
			// Return if meeting downloading error.
			// m_DownloadingError might come from the dependency downloading.
			if (m_Request == null && m_DownloadingError != null)
			{
				Debug.LogError(m_DownloadingError);
				return true;
			}
			
			return m_Request != null && m_Request.isDone;
		}
	}
	
	public abstract class AssetBundleLoadAssetOperation : AssetLoadOperation
	{
		public abstract T GetAsset<T>() where T : UnityEngine.Object;
	}
	
	public class AssetBundleLoadAssetOperationSimulation : AssetBundleLoadAssetOperation
	{
		Object							m_SimulatedObject;
		
		public AssetBundleLoadAssetOperationSimulation (Object simulatedObject)
		{
			m_SimulatedObject = simulatedObject;
		}
		
		public override T GetAsset<T>()
		{
			return m_SimulatedObject as T;
		}
		
		public override bool Update ()
		{
			return false;
		}
		
		public override bool IsDone ()
		{
			return true;
		}
	}
	



    public class AssetBundleLoadAssetOperationFull : AssetBundleLoadAssetOperation
	{
		protected string 				m_AssetBundleName;
		protected string 				m_AssetName;
		protected string 				m_DownloadingError;
		protected System.Type 			m_Type;
		protected AssetBundleRequest	m_Request = null;
        protected bool m_loadall = false;
        public AssetBundleLoadAssetOperationFull (string bundleName, string assetName, System.Type type,bool loadall =false)
		{
			m_AssetBundleName = bundleName;
			m_AssetName = assetName;
			m_Type = type;
            m_loadall = loadall;
		}
		
		public override T GetAsset<T>()
		{
			if (m_Request != null && m_Request.isDone)
				return m_Request.asset as T;
			else
				return null;
		}
		
        public   T GetAsset<T>(string name) where T : UnityEngine.Object
        {
            if(m_Request!=null && m_Request.isDone)
            {
                for(int i=0;i<m_Request.allAssets.Length;++i)
                {
                    if(name == m_Request.allAssets[i].name)
                    {
                        return m_Request.allAssets[i] as T;
                    }
                }
               
            }


            return null;
        }


        // Returns true if more Update calls are required.
        public override bool Update ()
		{
			if (m_Request != null)
				return false;
	
			LoadedWWW bundle = AssetManager.GetLoadedAssetBundle (m_AssetBundleName, out m_DownloadingError);
			if (bundle != null)
			{
				///@TODO: When asset bundle download fails this throws an exception...
                if (m_loadall)
                {

                    m_Request = bundle.m_AssetBundle.LoadAllAssetsAsync();
                }
                else
                {
                    m_Request = bundle.m_AssetBundle.LoadAssetAsync(m_AssetName, m_Type);
                }
				return false;
			}
			else
			{
				return !IsDone();
			}
		}
		
		public override bool IsDone ()
		{
			// Return if meeting downloading error.
			// m_DownloadingError might come from the dependency downloading.
			if (m_Request == null && m_DownloadingError != null)
			{
				Debug.LogError(m_DownloadingError);
				return true;
			}
	
			return m_Request != null && m_Request.isDone;
		}
	}
	
	public class AssetBundleLoadManifestOperation : AssetBundleLoadAssetOperationFull
	{
		public AssetBundleLoadManifestOperation (string bundleName, string assetName, System.Type type)
			: base(bundleName, assetName, type)
		{
		}
	
		public override bool Update ()
		{
			base.Update();
			
			if (m_Request != null && m_Request.isDone)
			{
				AssetManager.AssetBundleManifestObject = GetAsset<AssetBundleManifest>();
                AssetManager.UnloadAssetBundle(m_AssetBundleName);
				return false;
			}
			else
				return true;
		}
	}
	
	
}
