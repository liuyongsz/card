namespace AssetBundles
{
    using System;
    using UnityEditor;
    using UnityEngine;

    public class UUtility
    {
        public const string AssetBundlesOutputPath = "../ClientRes";

        /// <summary>xml路径</summary>
        public string XMLPath
        {
            get
            {
              return Application.dataPath + "/Config/";
            }
        }

        private static string GetPlatformForAssetBundles(BuildTarget target)
        {
            if (target <= BuildTarget.Android)
            {
                switch (target)
                {
                    case BuildTarget.StandaloneOSXUniversal:
                    case BuildTarget.StandaloneOSXIntel:
                        goto Label_0063;

                    case BuildTarget.StandaloneWindows:
                        goto Label_005D;

                    case BuildTarget.WebPlayer:
                        return "WebPlayer";

                    case BuildTarget.iOS:
                        return "IOS";

                    case BuildTarget.Android:
                        return "Android";
                }
                goto Label_0069;
            }
            if (target != BuildTarget.StandaloneWindows64)
            {
                if (target == BuildTarget.WebGL)
                {
                    return "WebGL";
                }
                if (target == BuildTarget.StandaloneOSXIntel64)
                {
                    goto Label_0063;
                }
                goto Label_0069;
            }
        Label_005D:
            return "Windows";
        Label_0063:
            return "OSX";
        Label_0069:
            return null;
        }

        private static string GetPlatformForAssetBundles(RuntimePlatform platform)
        {
            switch (platform)
            {
                case RuntimePlatform.OSXPlayer:
                    return "OSX";

                case RuntimePlatform.WindowsPlayer:
                    return "Windows";

                case RuntimePlatform.OSXWebPlayer:
                case RuntimePlatform.WindowsWebPlayer:
                    return "WebPlayer";

                case RuntimePlatform.IPhonePlayer:
                    return "iOS";

                case RuntimePlatform.Android:
                    return "Android";

                case ((RuntimePlatform) 0x11):
                    return "WebGL";
            }
            return null;
        }

        public static string GetPlatformName()
        {
            return GetPlatformForAssetBundles(EditorUserBuildSettings.activeBuildTarget);
        }
    }
}

