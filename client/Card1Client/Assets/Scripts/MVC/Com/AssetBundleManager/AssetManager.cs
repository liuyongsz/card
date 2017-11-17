using UnityEngine;
#if UNITY_EDITOR	
using UnityEditor;
#endif
using System.Collections;
using System.Collections.Generic;

/*
 	In this demo, we demonstrate:
	1.	Automatic asset bundle dependency resolving & loading.
		It shows how to use the manifest assetbundle like how to get the dependencies etc.
	2.	Automatic unloading of asset bundles (When an asset bundle or a dependency thereof is no longer needed, the asset bundle is unloaded)
	3.	Editor simulation. A bool defines if we load asset bundles from the project or are actually using asset bundles(doesn't work with assetbundle variants for now.)
		With this, you can player in editor mode without actually building the assetBundles.
	4.	Optional setup where to download all asset bundles
	5.	Build pipeline build postprocessor, integration so that building a player builds the asset bundles and puts them into the player data (Default implmenetation for loading assetbundles from disk on any platform)
	6.	Use WWW.LoadFromCacheOrDownload and feed 128 bit hash to it when downloading via web
		You can get the hash from the manifest assetbundle.
	7.	AssetBundle variants. A prioritized list of variants that should be used if the asset bundle with that variant exists, first variant in the list is the most preferred etc.
*/

namespace AssetBundles
{	
	// Loaded assetBundle contains the references count which can be used to unload dependent assetBundles automatically.
	public class LoadedWWW
	{
		public AssetBundle m_AssetBundle;

        public NormalRes m_normalres;

        public int m_ReferencedCount;
      
		public LoadedWWW(AssetBundle assetBundle)
		{
			m_AssetBundle = assetBundle;
			m_ReferencedCount = 1;
		}

       public LoadedWWW(NormalRes normalres)
        {
            m_normalres = normalres;
        }
	}

    public class NormalRes
    {
        public NormalRes(EResType t)
        {
            m_type = t;
        }
       public EResType m_type;

        public virtual void Distory()
        {

        }
    }

    public class TextureRes:NormalRes
    {
        public override void Distory()
        {
            base.Distory();
            if (null != m_texture)
            {
                //Debug.Log("--------------------"); 测试没有用
                //Resources.UnloadAsset(m_texture);
            }
            m_texture = null;
        }
        public TextureRes(Texture2D texture):base(EResType.E_TEXTURE)
        {
            m_texture = texture;
        }  
      public  Texture2D m_texture;
    }

    public class BytesRes : NormalRes
    {
        public override void Distory()
        {
            base.Distory();
            
            m_bytes = null;
        }
        public BytesRes(byte[] bytes) :base(EResType.E_BYTE)
        {
            m_bytes = bytes;
        }

        public byte[] m_bytes;
    }


    public class AudioClipRes : NormalRes
    {
        public override void Distory()
        {
            base.Distory();

            m_clip = null;
        }
        public AudioClipRes(AudioClip clip) :base(EResType.E_AudioClip)
        {
            m_clip = clip;
        }

        public AudioClip m_clip;
    }

    public class TxtRes : NormalRes
    {
        public override void Distory()
        {
            base.Distory();

            m_txt = null;
        }
        public TxtRes(string txt) : base(EResType.E_TXT)
        {
            m_txt = txt;
        }

        public string m_txt;
    }


    /// <summary>
    /// 资源类型
    /// </summary>
    public enum EResType
    {
        E_AssetBundle,
        E_TEXTURE,
        E_BYTE,
        E_AudioClip,
        E_TXT,
        E_UIAtlas,
    }

    public  class WWWLoadInfo
    {
        public WWWLoadInfo (WWW www,EResType t)
        {
            m_www = www;
            m_type = t;
        }
       public WWW m_www;
        public EResType m_type;
    }




	// Class takes care of loading assetBundle and its dependencies automatically, loading variants automatically.
	public class AssetManager : MonoBehaviour
	{
		public enum LogMode { All, JustErrors };
		public enum LogType { Info, Warning, Error };
	
		static LogMode m_LogMode = LogMode.All;
		static string m_BaseDownloadingURL = "";
		static string[] m_ActiveVariants =  {  };
		static AssetBundleManifest m_AssetBundleManifest = null;

	
		static Dictionary<string, LoadedWWW> m_LoadedAssetBundles = new Dictionary<string, LoadedWWW> ();
		static Dictionary<string, WWWLoadInfo> m_DownloadingWWWs = new Dictionary<string, WWWLoadInfo> ();
        static Dictionary<string, string> m_urls = new Dictionary<string, string>();
        static Dictionary<string, EResType> m_types = new Dictionary<string, EResType>();
		static Dictionary<string, string> m_DownloadingErrors = new Dictionary<string, string> ();
		static List<AssetLoadOperation> m_InProgressOperations = new List<AssetLoadOperation> ();
		static Dictionary<string, string[]> m_Dependencies = new Dictionary<string, string[]> ();
	
		public static LogMode logMode
		{
			get { return m_LogMode; }
			set { m_LogMode = value; }
		}
	
		// The base downloading url which is used to generate the full downloading url with the assetBundle names.
		public static string BaseDownloadingURL
		{
			get { return m_BaseDownloadingURL; }
			set { m_BaseDownloadingURL = value; }
		}
	
		// Variants which is used to define the active variants.
		public static string[] ActiveVariants
		{
			get { return m_ActiveVariants; }
			set { m_ActiveVariants = value; }
		}
	
		// AssetBundleManifest object which can be used to load the dependecies and check suitable assetBundle variants.
		public static AssetBundleManifest AssetBundleManifestObject
        {
            set { m_AssetBundleManifest = value; }
            get { return m_AssetBundleManifest; }

        }

        private static void Log(LogType logType, string text)
		{
			//if (logType == LogType.Error)
   //             KBEngine.Dbg.ERROR_MSG("[AssetBundleManager] " + text);
            
			//else if (m_LogMode == LogMode.All)
   //             KBEngine.Dbg.DEBUG_MSG("[AssetBundleManager] " + text);
        }
	

	
		private static string GetStreamingAssetsPath()
		{
			if (Application.isEditor)
				return "file://" +  System.Environment.CurrentDirectory.Replace("\\", "/"); // Use the build output folder directly.
			else if (Application.isWebPlayer)
				return System.IO.Path.GetDirectoryName(Application.absoluteURL).Replace("\\", "/")+ "/StreamingAssets";
			else if (Application.isMobilePlatform || Application.isConsolePlatform)
				return Application.streamingAssetsPath;
			else // For standalone player.
				return "file://" +  Application.streamingAssetsPath;
		}
	
		public static void SetSourceAssetBundleDirectory(string relativePath)
		{
			BaseDownloadingURL = GetStreamingAssetsPath() + relativePath;
		}
		
		public static void SetSourceAssetBundleURL(string absolutePath)
		{
            if (Define.WaiWangDebug)
            {
                BaseDownloadingURL = Define.WaiWangURL + UtilTools.GetPlatformName();
            }
            else
            {
                BaseDownloadingURL = absolutePath + UtilTools.GetPlatformName();
            }
		}
	
		public static void SetDevelopmentAssetBundleServer()
		{
            if (Define.WaiWangDebug)
            {
                AssetManager.SetSourceAssetBundleURL(Define.WaiWangURL);
            }
            else
            {
                TextAsset urlFile = Resources.Load("AssetBundleServerURL") as TextAsset;
                string url = (urlFile != null) ? urlFile.text.Trim() : null;
                if (url == null || url.Length == 0)
                {
                    Debug.LogError("Development Server URL could not be found.");
                    //AssetBundleManager.SetSourceAssetBundleURL("http://localhost:7888/" + UnityHelper.GetPlatformName() + "/");
                }
                else
                {
                    AssetManager.SetSourceAssetBundleURL(url);
                }
            }
		}
		
		// Get loaded AssetBundle, only return vaild object when all the dependencies are downloaded successfully.
		static public LoadedWWW GetLoadedAssetBundle (string assetBundleName, out string error)
		{
			if (m_DownloadingErrors.TryGetValue(assetBundleName, out error) )
				return null;
		
			LoadedWWW bundle = null;
			m_LoadedAssetBundles.TryGetValue(assetBundleName, out bundle);
			if (bundle == null)
				return null;
			
			// No dependencies are recorded, only the bundle itself is required.
			string[] dependencies = null;
			if (!m_Dependencies.TryGetValue(assetBundleName, out dependencies) )
				return bundle;
			
			// Make sure all dependencies are loaded
			foreach(var dependency in dependencies)
			{
				if (m_DownloadingErrors.TryGetValue(assetBundleName, out error) )
					return bundle;
	
				// Wait all the dependent assetBundles being loaded.
				LoadedWWW dependentBundle;
				m_LoadedAssetBundles.TryGetValue(dependency, out dependentBundle);
				if (dependentBundle == null)
					return null;
			}
	
			return bundle;
		}




     

	
		static public AssetBundleLoadManifestOperation Initialize ( GameObject go=null)
		{
			return Initialize("assetbundle", go);
		}
			
	
		// Load AssetBundleManifest.
		static public AssetBundleLoadManifestOperation Initialize (string manifestAssetBundleName,GameObject go)
		{
	
            if (go == null)
            {
                go = new GameObject("AssetBundleManager", typeof(AssetManager));
                DontDestroyOnLoad(go);
            }
            else
            {
                go.AddComponent<AssetManager>();
            }
			LoadAssetBundle(manifestAssetBundleName, true);
			var operation = new AssetBundleLoadManifestOperation (manifestAssetBundleName, "AssetBundleManifest", typeof(AssetBundleManifest));
			m_InProgressOperations.Add (operation);
			return operation;
		}
		
        static protected void LoadNormalRes(string resname,EResType t)
        {
            LoadResInternal(resname, t,false);
        }



		// Load AssetBundle and its dependencies.
		static protected void LoadAssetBundle(string assetBundleName, bool isLoadingAssetBundleManifest = false)
		{
			Log(LogType.Info, "Loading Asset Bundle " + (isLoadingAssetBundleManifest ? "Manifest: " : ": ") + assetBundleName);
	
			if (!isLoadingAssetBundleManifest)
			{
				if (m_AssetBundleManifest == null)
				{
					Debug.LogError("Please initialize AssetBundleManifest by calling AssetBundleManager.Initialize()");
					return;
				}
			}
	
			// Check if the assetBundle has already been processed.
			bool isAlreadyProcessed = LoadResInternal(assetBundleName, EResType.E_AssetBundle, isLoadingAssetBundleManifest);
	
			// Load dependencies.
			if (!isAlreadyProcessed && !isLoadingAssetBundleManifest)
				LoadDependencies(assetBundleName);
		}
		
		// Remaps the asset bundle name to the best fitting asset bundle variant.
		static protected string RemapVariantName(string assetBundleName)
		{
            return assetBundleName;//yadou 去掉多分辨率资源
			//string[] bundlesWithVariant = m_AssetBundleManifest.GetAllAssetBundlesWithVariant();

			//string[] split = assetBundleName.Split('.');

			//int bestFit = int.MaxValue;
			//int bestFitIndex = -1;
			//// Loop all the assetBundles with variant to find the best fit variant assetBundle.
			//for (int i = 0; i < bundlesWithVariant.Length; i++)
			//{
			//	string[] curSplit = bundlesWithVariant[i].Split('.');
			//	if (curSplit[0] != split[0])
			//		continue;
				
			//	int found = System.Array.IndexOf(m_ActiveVariants, curSplit[1]);
				
			//	// If there is no active variant found. We still want to use the first 
			//	if (found == -1)
			//		found = int.MaxValue-1;
						
			//	if (found < bestFit)
			//	{
			//		bestFit = found;
			//		bestFitIndex = i;
			//	}
			//}
			
			//if (bestFit == int.MaxValue-1)
			//{
			//	Debug.LogWarning("Ambigious asset bundle variant chosen because there was no matching active variant: " + bundlesWithVariant[bestFitIndex]);
			//}
			
			//if (bestFitIndex != -1)
			//{
			//	return bundlesWithVariant[bestFitIndex];
			//}
			//else
			//{
			//	return assetBundleName;
			//}
		}
	
		// Where we actuall call WWW to download the assetBundle.
		static protected bool LoadResInternal (string assetBundleName, EResType t, bool isLoadingAssetBundleManifest)
		{
			// Already loaded.
			LoadedWWW bundle = null;
			m_LoadedAssetBundles.TryGetValue(assetBundleName, out bundle);
			if (bundle != null)
			{
				bundle.m_ReferencedCount++;
				return true;
			}
	
			// @TODO: Do we need to consider the referenced count of WWWs?
			// In the demo, we never have duplicate WWWs as we wait LoadAssetAsync()/LoadLevelAsync() to be finished before calling another LoadAssetAsync()/LoadLevelAsync().
			// But in the real case, users can call LoadAssetAsync()/LoadLevelAsync() several times then wait them to be finished which might have duplicate WWWs.
			if (m_DownloadingWWWs.ContainsKey(assetBundleName) )
				return true;

            string url = null;
            switch (t)
            {
                case EResType.E_AssetBundle:
                  url =   m_BaseDownloadingURL + "/assetbundle/" +assetBundleName;
                    break;
                case EResType.E_TEXTURE:
                    url = m_BaseDownloadingURL + "/texture/" +assetBundleName;
                    break;
                case EResType.E_BYTE:
                    url = m_BaseDownloadingURL + "/config/" + assetBundleName;
                    break;
                case EResType.E_TXT:
                    url = m_BaseDownloadingURL + "/config/" + assetBundleName;
                    break;
                case EResType.E_AudioClip:
                    url = m_BaseDownloadingURL + "/sound/" + assetBundleName;
                    break;
                default:
                    break;
            }

            //Debug.Log(url);
            // For manifest assetbundle, always download it as we don't have hash for it.

            //if (isLoadingAssetBundleManifest)
            //    download = new WWW(url);
            //else
            //{
            //    //yadoutodo
            //    //   download = WWW.LoadFromCacheOrDownload(url, m_AssetBundleManifest.GetAssetBundleHash(assetBundleName), 0);
            //    download = new WWW(url);
            //}

            m_types[assetBundleName] = t;
            m_urls[assetBundleName] = url;

            MoveToURLLoading();

            return false;
		}
	
		// Where we get all the dependencies and load them all.
		static protected void LoadDependencies(string assetBundleName)
		{
			if (m_AssetBundleManifest == null)
			{
				Debug.LogError("Please initialize AssetBundleManifest by calling AssetBundleManager.Initialize()");
				return;
			}

            string[] havearr;
            if (m_Dependencies.TryGetValue(assetBundleName,out havearr))
            {
                return;
            }
	
			// Get dependecies from the AssetBundleManifest object..
			string[] dependencies = m_AssetBundleManifest.GetAllDependencies(assetBundleName);
			if (dependencies.Length == 0)
				return;
				
			for (int i=0;i<dependencies.Length;i++)
				dependencies[i] = RemapVariantName (dependencies[i]);
				
			// Record and load all dependencies.
			m_Dependencies.Add(assetBundleName, dependencies);
			for (int i=0;i<dependencies.Length;i++)
				LoadResInternal(dependencies[i], EResType.E_AssetBundle, false);
		}
	
		// Unload assetbundle and its dependencies.
		static public void UnloadAssetBundle(string assetBundleName)
		{
     
			//Debug.Log(m_LoadedAssetBundles.Count + " assetbundle(s) in memory before unloading " + assetBundleName);
	
			UnloadAssetBundleInternal(assetBundleName);
			UnloadDependencies(assetBundleName);
	
			//Debug.Log(m_LoadedAssetBundles.Count + " assetbundle(s) in memory after unloading " + assetBundleName);
		}
	
		static protected void UnloadDependencies(string assetBundleName)
		{
			string[] dependencies = null;
			if (!m_Dependencies.TryGetValue(assetBundleName, out dependencies) )
				return;
	
			// Loop dependencies.
			for(int i=0;i<dependencies.Length;++i)
			{
				UnloadAssetBundleInternal(dependencies[i]);
			}
	
			m_Dependencies.Remove(assetBundleName);
		}
	
        static public void UnloadNormalRes(string resname)
        {
            LoadedWWW load = null;
           if(m_LoadedAssetBundles.TryGetValue(resname,out load))
           {
                if (null != load.m_normalres)
                {
                    load.m_normalres.Distory();                        
                }
                m_LoadedAssetBundles.Remove(resname);
           }
        }

        static public void UnloadAllCacheRes(bool isdestory)
        {
            foreach (var v in m_LoadedAssetBundles)
            {
                if (null != v.Value.m_AssetBundle)
                {
                    v.Value.m_AssetBundle.Unload(isdestory);
                }
                else if(null!= v.Value.m_normalres)
                {
                    if (isdestory)
                    {
                        v.Value.m_normalres.Distory();
                    }
                    v.Value.m_normalres = null;
                }
            }
            m_LoadedAssetBundles.Clear();
            m_Dependencies.Clear();
            Resources.UnloadUnusedAssets();
        }


		static protected void UnloadAssetBundleInternal(string assetBundleName)
		{
			string error;
			LoadedWWW bundle = GetLoadedAssetBundle(assetBundleName, out error);
			if (bundle == null)
				return;
	
			if (--bundle.m_ReferencedCount == 0)
			{
                if (bundle.m_AssetBundle != null)
                {
                    bundle.m_AssetBundle.Unload(false);
                }
                else
                {
                    bundle.m_normalres = null;
                    Debug.LogError("LLLLLLLLLLLLLLLLLLLLLLL");
                    //普通资源清掉
                }
				m_LoadedAssetBundles.Remove(assetBundleName);
	
				Log(LogType.Info, assetBundleName + " has been unloaded successfully");
			}
		}
	
		void Update()
		{

            if (m_DownloadingWWWs.Count > 0)
            {
                // Collect all the finished WWWs.
                var keysToRemove = new List<string>();
                foreach (var keyValue in m_DownloadingWWWs)
                {
                    WWW download = keyValue.Value.m_www;

                    // If downloading fails.
                    if (download.error != null)
                    {
                        if (!m_DownloadingErrors.ContainsKey(keyValue.Key))
                        {
                            m_DownloadingErrors.Add(keyValue.Key, string.Format("Failed downloading bundle {0} from {1}: {2}", keyValue.Key, download.url, download.error));
                        }
                        keysToRemove.Add(keyValue.Key);
                        continue;
                    }

                    // If downloading succeeds.
                    if (download.isDone)
                    {
                        if (EResType.E_AssetBundle == keyValue.Value.m_type)
                        {
                            AssetBundle bundle = download.assetBundle;
                            if (bundle == null)
                            {
                                if (!m_DownloadingErrors.ContainsKey(keyValue.Key))
                                {
                                    m_DownloadingErrors.Add(keyValue.Key, string.Format("{0} is not a valid asset bundle.", keyValue.Key));
                                }
                                keysToRemove.Add(keyValue.Key);
                                continue;
                            }
                            //Debug.Log("Downloading " + keyValue.Key + " is done at frame " + Time.frameCount);
                            m_LoadedAssetBundles.Add(keyValue.Key, new LoadedWWW(download.assetBundle));
                            keysToRemove.Add(keyValue.Key);
                        }
                        else if (EResType.E_TEXTURE == keyValue.Value.m_type)
                        {
                            Texture texture = download.texture;
                            if (null == texture)
                            {
                                m_DownloadingErrors.Add(keyValue.Key, string.Format("{0} is not a valid Texture.", keyValue.Key));
                                keysToRemove.Add(keyValue.Key);
                                continue;
                            }
                            m_LoadedAssetBundles.Add(keyValue.Key, new LoadedWWW(new TextureRes(download.texture)));
                            keysToRemove.Add(keyValue.Key);
                        }
                        else if (EResType.E_BYTE == keyValue.Value.m_type)
                        {
                            byte[] bytes = download.bytes;
                            if (null == bytes)
                            {
                                m_DownloadingErrors.Add(keyValue.Key, string.Format("{0} is not a valid Txt.", keyValue.Key));
                                keysToRemove.Add(keyValue.Key);
                                continue;
                            }

                            m_LoadedAssetBundles.Add(keyValue.Key, new LoadedWWW(new BytesRes(bytes)));
                            keysToRemove.Add(keyValue.Key);
                        }
                        else if (EResType.E_AudioClip == keyValue.Value.m_type)
                        {
                            AudioClip clip = download.audioClip;

                            if (null == clip)
                            {
                                m_DownloadingErrors.Add(keyValue.Key, string.Format("{0} is not a valid audioClip.", keyValue.Key));
                                keysToRemove.Add(keyValue.Key);
                                continue;
                            }

                            m_LoadedAssetBundles.Add(keyValue.Key, new LoadedWWW(new AudioClipRes(clip)));
                            keysToRemove.Add(keyValue.Key);
                        }
                        else if (EResType.E_TXT == keyValue.Value.m_type)
                        {
                            string txt = download.text;

                            if (null == txt)
                            {
                                m_DownloadingErrors.Add(keyValue.Key, string.Format("{0} is not a valid text.", keyValue.Key));
                                keysToRemove.Add(keyValue.Key);
                                continue;
                            }

                            m_LoadedAssetBundles.Add(keyValue.Key, new LoadedWWW(new TxtRes(txt)));
                            keysToRemove.Add(keyValue.Key);
                        }
                    }
                    else
                    {
                        switch (keyValue.Value.m_type)
                        {
                            case EResType.E_AssetBundle: break;
                            case EResType.E_AudioClip: break;
                            case EResType.E_BYTE: break;
                            case EResType.E_TEXTURE: break;
                            case EResType.E_TXT: break;
                        }
                    }
                }

                // Remove the finished WWWs.
                foreach (var key in keysToRemove)
                {
                    WWW download = m_DownloadingWWWs[key].m_www;
                    m_DownloadingWWWs.Remove(key);
                }

                MoveToURLLoading();
            }
			// Update all in progress operations
			for (int i=0;i<m_InProgressOperations.Count;)
			{
				if (!m_InProgressOperations[i].Update())
				{
					m_InProgressOperations.RemoveAt(i);
				}
				else
					i++;
			}
		}

        static public void MoveToURLLoading()
        {
            if (m_DownloadingWWWs.Count < 10 && m_urls.Count > 0)
            {
                foreach (var item in m_urls)
                {
                    string assetBundleName = item.Key;
                    string url = item.Value;

                    WWW download = new WWW(url);
                    m_DownloadingWWWs.Add(assetBundleName, new WWWLoadInfo(download, m_types[item.Key]));

                    m_urls.Remove(item.Key);
                    m_types.Remove(item.Key);

                    break;
                }
            }
        }

        /// <summary>
        /// Load Texture 
        /// </summary>
        /// <param name="name"></param>
        /// <param name="t"></param>
        /// <returns></returns>
        static public NoramlResOperation LoadNormalAssetAsync(string name, EResType t)
        {
            NoramlResOperation operation = new NoramlResOperation(name);
            m_InProgressOperations.Add(operation);
            LoadNormalRes(name, t);
            return operation;
        }

        // Load asset from the given assetBundle.
        static public AssetBundleLoadAssetOperationFull LoadAssetAsync (string assetBundleName, string assetName, System.Type type,bool loadall)
		{
			Log(LogType.Info, "Loading " + assetName + " from " + assetBundleName + " bundle");

            AssetBundleLoadAssetOperationFull operation = null;

				assetBundleName = RemapVariantName (assetBundleName); 
				LoadAssetBundle (assetBundleName);
				operation = new AssetBundleLoadAssetOperationFull (assetBundleName, assetName, type,loadall);
	
				m_InProgressOperations.Add (operation);
	
			return operation;
		}
	
		// Load level from the given assetBundle.
		static public AssetLoadOperation LoadLevelAsync (string assetBundleName, string levelName, bool isAdditive)
		{
			Log(LogType.Info, "Loading " + levelName + " from " + assetBundleName + " bundle");
	
			AssetLoadOperation operation = null;
	
				assetBundleName = RemapVariantName(assetBundleName);
				LoadAssetBundle (assetBundleName);
				operation = new AssetBundleLoadLevelOperation (assetBundleName, levelName, isAdditive);
	
				m_InProgressOperations.Add (operation);
			
	
			return operation;
		}
	} // End of AssetBundleManager.
}