//using UnityEngine;
//using System.Collections;
//using UnityEditor;
//using System.IO;

//public class GameAssetImportProcessor : AssetPostprocessor
//{
//    public static void OnPostprocessAllAssets(string str)
//    {
//        const string UI_PATH = "Assets/Res/Export/Prefab/UI/";
//        const string ICON_PATH = "Assets/Arts/Sprites/";
//        const string CONFIG_PATH = "Assets/Res/Config/ConfigXML/";
//        const string EFFECT_PATH = "Assets/Res/Arts/Prefab/Effects/";
//        const string AUDIO_PATH = "Assets/Res/Arts/Audio/";
//        const string WEAPON_PATH = "Assets/Arts/Objects/Act/Weapon/";
//        const string SHAKE_ANIM_PATH = "Assets/Arts/Animation/Camera/";
//        const string CONTROLLER_PATH = "Assets/Prefabs/Controllers/";
//        const string SPLASH_PATH = "Assets/Arts/Textures/Splash/";
//        const string SCENE_PATH = "Assets/Res/Export/Scene/"; ;

//        string ext = Path.GetExtension(str).ToLower();
//        var importer = AssetImporter.GetAtPath(str);
//        if (importer == null)
//            return;

//        if (str.Contains(UI_PATH) && ext == ".prefab")
//        {
//            importer.assetBundleName = string.Format("ui/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(ICON_PATH) && ext == ".png")
//        {
//            importer.assetBundleName = string.Format("sprites/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(SCENE_PATH) && ext == ".unity")
//        {
//            importer.assetBundleName = string.Format("scene/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(CONTROLLER_PATH) && ext == ".controller")
//        {
//            importer.assetBundleName = string.Format("controllers/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(EFFECT_PATH) && ext == ".prefab")
//        {
//            importer.assetBundleName = string.Format("effects/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(AUDIO_PATH))
//        {
//            importer.assetBundleName = string.Format("audio/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(SHAKE_ANIM_PATH) && ext == ".anim")
//        {
//            importer.assetBundleName = string.Format("animations/shaking/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else if (str.Contains(SPLASH_PATH))
//        {
//            importer.assetBundleName = string.Format("textures/splash/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//        else
//        {
//            importer.assetBundleName = string.Format("other/{0}.bundle", Path.GetFileNameWithoutExtension(str));
//        }
//    }

//}
