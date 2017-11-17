namespace AssetBundles
{
    using System;
    using System.Collections.Generic;
    using System.IO;
    using System.Net;
    using System.Net.Sockets;
    using UnityEditor;
    using UnityEngine;

    public class UBuildScript
    {
        public static string overloadedDevelopmentServerURL = "";

        public static void BuildAssetBundles()
        {
            string path = Path.Combine(Path.Combine("../ClientRes", UUtility.GetPlatformName()), "assetbundle");
            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
            }
            BuildPipeline.BuildAssetBundles(path, BuildAssetBundleOptions.None, EditorUserBuildSettings.activeBuildTarget);
        }

        public static void BuildPlayer()
        {
            string str = EditorUtility.SaveFolderPanel("Choose Location of the Built Game", "", "");
            if (str.Length != 0)
            {
                string[] levelsFromBuildSettings = GetLevelsFromBuildSettings();
                if (levelsFromBuildSettings.Length == 0)
                {
                    Debug.Log("Nothing to build.");
                }
                else
                {
                    string buildTargetName = GetBuildTargetName(EditorUserBuildSettings.activeBuildTarget);
                    if (buildTargetName != null)
                    {
                        BuildAssetBundles();
                        WriteServerURL();
                        BuildOptions options = EditorUserBuildSettings.development ? BuildOptions.Development : BuildOptions.CompressTextures;
                        BuildPipeline.BuildPlayer(levelsFromBuildSettings, str + buildTargetName, EditorUserBuildSettings.activeBuildTarget, options);
                    }
                }
            }
        }

        public static void BuildStandalonePlayer()
        {
            string str = EditorUtility.SaveFolderPanel("Choose Location of the Built Game", "", "");
            if (str.Length != 0)
            {
                string[] levelsFromBuildSettings = GetLevelsFromBuildSettings();
                if (levelsFromBuildSettings.Length == 0)
                {
                    Debug.Log("Nothing to build.");
                }
                else
                {
                    string buildTargetName = GetBuildTargetName(EditorUserBuildSettings.activeBuildTarget);
                    if (buildTargetName != null)
                    {
                        BuildAssetBundles();
                        CopyAssetBundlesTo(Path.Combine(Application.streamingAssetsPath, "../ClientRes"));
                        AssetDatabase.Refresh();
                        BuildOptions options = EditorUserBuildSettings.development ? BuildOptions.Development : BuildOptions.CompressTextures;
                        BuildPipeline.BuildPlayer(levelsFromBuildSettings, str + buildTargetName, EditorUserBuildSettings.activeBuildTarget, options);
                    }
                }
            }
        }

        private static void CopyAssetBundlesTo(string outputPath)
        {
            FileUtil.DeleteFileOrDirectory(Application.streamingAssetsPath);
            Directory.CreateDirectory(outputPath);
            string platformName = UUtility.GetPlatformName();
            string path = Path.Combine(Path.Combine(Environment.CurrentDirectory, "../ClientRes"), platformName);
            if (!Directory.Exists(path))
            {
                Debug.Log("No assetBundle output folder, try to build the assetBundles first.");
            }
            string str2 = Path.Combine(outputPath, platformName);
            if (Directory.Exists(str2))
            {
                FileUtil.DeleteFileOrDirectory(str2);
            }
            FileUtil.CopyFileOrDirectory(path, str2);
        }

        public static string GetBuildTargetName(BuildTarget target)
        {
            if (target <= BuildTarget.Android)
            {
                switch (target)
                {
                    case BuildTarget.StandaloneOSXUniversal:
                    case BuildTarget.StandaloneOSXIntel:
                        goto Label_0049;

                    case BuildTarget.StandaloneWindows:
                        goto Label_0043;

                    case BuildTarget.WebPlayer:
                    case BuildTarget.WebPlayerStreamed:
                        goto Label_004F;

                    case BuildTarget.Android:
                        return "/test.apk";
                }
                goto Label_0055;
            }
            if (target != BuildTarget.StandaloneWindows64)
            {
                if (target == BuildTarget.WebGL)
                {
                    goto Label_004F;
                }
                if (target == BuildTarget.StandaloneOSXIntel64)
                {
                    goto Label_0049;
                }
                goto Label_0055;
            }
        Label_0043:
            return "/test.exe";
        Label_0049:
            return "/test.app";
        Label_004F:
            return "";
        Label_0055:
            Debug.Log("Target not implemented.");
            return null;
        }

        private static string[] GetLevelsFromBuildSettings()
        {
            List<string> list = new List<string>();
            for (int i = 0; i < EditorBuildSettings.scenes.Length; i++)
            {
                if (EditorBuildSettings.scenes[i].enabled)
                {
                    list.Add(EditorBuildSettings.scenes[i].path);
                }
            }
            return list.ToArray();
        }

        public static void WriteServerURL()
        {
            string overloadedDevelopmentServerURL;
            if (!string.IsNullOrEmpty(UBuildScript.overloadedDevelopmentServerURL))
            {
                overloadedDevelopmentServerURL = UBuildScript.overloadedDevelopmentServerURL;
            }
            else
            {
                string str3 = "";
                foreach (IPAddress address in Dns.GetHostEntry(Dns.GetHostName()).AddressList)
                {
                    if (address.AddressFamily == AddressFamily.InterNetwork)
                    {
                        str3 = address.ToString();
                        break;
                    }
                }
                overloadedDevelopmentServerURL = "http://" + str3 + ":7888/";
            }
            string path = Path.Combine("Assets/AssetBundleManager/Resources", "AssetBundleServerURL.bytes");
            Directory.CreateDirectory("Assets/AssetBundleManager/Resources");
            System.IO.File.WriteAllText(path, overloadedDevelopmentServerURL);
            AssetDatabase.Refresh();
        }
    }
}

