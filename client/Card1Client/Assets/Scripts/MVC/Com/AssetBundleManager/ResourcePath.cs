using UnityEngine;
using System.Collections;

public class ResourcePath
{
    //自定义特殊路径
    public static string customParentPath = "";

    public static string configPath = null;
    public static string imgPath = null;
    public static string baseUrl = null;
    public static string URL(string fileName)
    {
        string filePath = "";
        switch (Application.platform)
        {
            case RuntimePlatform.IPhonePlayer:
                filePath = "file://" + Application.dataPath + "/ClientRes/";
                break;
            case RuntimePlatform.Android:
                filePath = "jar:file://" + Application.dataPath + "!/assets/ClientRes/";
                break;
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.OSXEditor:
                filePath = "file://" + Application.dataPath + "/../../ClientRes/";
                break;
            default:
                filePath = "file://" + Application.dataPath + "/ClientRes/";
                break;
        }
        return filePath + fileName;
    }
    public static string ReLocatePath(string path)
    {
        string filePath = "";

        if (!string.IsNullOrEmpty(customParentPath))
        {
            filePath = customParentPath;
        }
        else
        {
            switch (Application.platform)
            {
                case RuntimePlatform.IPhonePlayer:
                    filePath = "IOS/";
                    break;
                case RuntimePlatform.Android:
                    filePath = "Android/";
                    break;
                case RuntimePlatform.WindowsWebPlayer:
                    filePath = "WebPlayer/";
                    break;
                case RuntimePlatform.WindowsEditor:
                    filePath = "Windows/";
                    break;
                case RuntimePlatform.OSXEditor:
                    filePath = "IOS/";
                    break;
                default: filePath = "Windows/";
                    break;
            }
        }


        return filePath + path;
    }




  
    public static string GetBaseURL()
    {
        if (null == baseUrl)
        {
            baseUrl = URL("");
        }
        return baseUrl;
    }
    public static string GetLocalConfigPath()
    {
        if(null==configPath)
        {
            configPath = (GetBaseURL()+ReLocatePath("config/")).Remove(0, 7);
        }
        return configPath;
    }

    public static string GetLocalImgPath()
    {
        if(null==imgPath)
        {
            imgPath = (GetBaseURL() + ReLocatePath("texture/")).Remove(0,7);
        }
        return imgPath;
    }

}
