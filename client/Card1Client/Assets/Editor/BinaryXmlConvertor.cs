using UnityEngine;
using UnityEditor;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Text;
using TinyBinaryXml;
using AssetBundles;

public class BinaryXmlConvertor : EditorWindow
{

    private BuildTarget buildTarget = BuildTarget.iOS;

    [MenuItem("Tools/XML格式转换")]
    public static void CreateWizard()
    {
        bool flag = false;
        DirectoryInfo dirInfo = new DirectoryInfo(Application.dataPath + "/Config/");
        FileInfo[] fileInfos = dirInfo.GetFiles();
        foreach (var fileInfo in fileInfos)
        {
            string path = fileInfo.FullName;
            if (ConvertToBinaryXml(fileInfo.Name))
            {
                flag = true;
            }
        }
        EditorUtility.DisplayDialog("Message", "转换完成", "ok");
        if (flag)
        {
            AssetDatabase.Refresh();
        }
    }

    public static void SaveSngXML(string xmlName)
    {
        AssetDatabase.Refresh();

        ConvertToBinaryXml(xmlName + ".xml");

        EditorUtility.DisplayDialog("Message", xmlName + "保存成功", "ok");
    }

    private string ReplaceValueString(string line, string typeLower, string typeUpper, string typeConvert)
    {
        string pattern = typeLower + ".Parse(";

        bool flag = false;
        if (line.Contains(pattern))
        {
            flag = true;
            line = line.Replace(pattern, "");
        }

        pattern = "Convert." + typeConvert + "(";
        if (!flag && line.Contains(pattern))
        {
            flag = true;
            line = line.Replace(pattern, "");
        }

        if (flag)
        {
            pattern = ".GetValue(\"@";
            if (line.Contains(pattern))
            {
                line = line.Replace(pattern, ".Get" + typeUpper + "Value(\"");

                pattern = "));";
                if (line.Contains(pattern))
                {
                    line = line.Replace(pattern, ");");
                }
            }

            pattern = ".Trim()";
            if (line.Contains(pattern))
            {
                line = line.Replace(pattern, "");
            }
        }

        return line;
    }

    public static bool ConvertToBinaryXml(string path)
    {
        //if (path.StartsWith(Application.dataPath))
        {
            string saveToDir =ResourcePath.GetLocalConfigPath();
           
            if (!Directory.Exists(saveToDir))
            {
                Directory.CreateDirectory(saveToDir);
            }

            if (path.ToLower().EndsWith(".xml"))
            {
                try
                {
                    FileInfo fileInfo = new FileInfo(path);
                    string fileName = fileInfo.Name.Substring(0, fileInfo.Name.Length - fileInfo.Extension.Length);
                    TbXmlSerializer serializer = new TbXmlSerializer();

                    path = path.Replace(Application.dataPath,"");
                    path = "Assets/Config/" + path;
                    byte[] bytes = serializer.SerializeXmlString((AssetDatabase.LoadMainAssetAtPath(path) as TextAsset).text);

                    string topath = Path.Combine(Path.Combine("../ClientRes", UUtility.GetPlatformName() + "/config/"), "");
                    topath = topath+ fileName + ".bytes";
                    File.WriteAllBytes(topath, bytes);

                    return true;
                }
                catch (System.Exception exception)
                {
                   Debug.LogError("Error:" + path);
                    //Debug.LogError(exception.Message);
                    //Debug.LogError(exception.StackTrace);
                    //Debug.LogError("");
                }
            }
            else
            {
                if (!path.ToLower().EndsWith(".meta"))
                {
                    FileInfo fileInfo = new FileInfo(path);
                    File.Copy(path, saveToDir + "/" + fileInfo.Name, true);
                    return true;
                }
            }
        }
        return false;
    }
}
