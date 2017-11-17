using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using System.IO;
using System.Reflection;
using AssetBundles;

public class MaterialTextureForETC1_Old
{
    public static float sizeScale = 0.5f;   //the size decrease scale for alphaTexture  
    private static string texPath = string.Empty;
    private static string assetPath = string.Empty;

    //private static string m_prePath = "../ClinentRes";
    private static string m_orgPath = "texture";
    private static string m_newPath = "seq_texture";
    static List<string> paths = new List<string>();
    static List<string> files = new List<string>();

    private static string m_seqPath;
    private static bool m_inCreate;
    private static List<string> m_seqFileList;

    private static string string_rgb = "RGB";
    private static string string_alpha = "Alpha";

    [MenuItem("UGame/批量通道分离")]
    public static void CreateSeqImage()
    {
        string_rgb = "rgb";
        string_alpha = "alpha";

        m_inCreate = false;
        string path = (ResourcePath.GetBaseURL() + AssetBundles.UUtility.GetPlatformName() + "/").Remove(0, 7);
        //if (AssetBundles.AssetManager.BaseDownloadingURL.IsNullOrEmpty())
        //{
        //    ResourceManager.Instance.Init(null);
        //}

        m_seqFileList = new List<string>();
        path += m_orgPath;
        m_seqPath = path.Replace(m_orgPath, m_newPath);
        path += "/";
        Recursive(path);
    }

    /// <summary>遍历目录及其子目录</summary>
    static void Recursive(string path)
    {
        if (path.IndexOf("texture/")  != -1)
        {
            string newPath = path.Replace(m_orgPath, m_newPath);

            if (!Directory.Exists(newPath))
            {
                Directory.CreateDirectory(newPath);
            }
        }

        string[] names = Directory.GetFiles(path);
        string[] dirs = Directory.GetDirectories(path);
        foreach (string filename in names)
        {
            string ext = Path.GetExtension(filename);
            if (ext.Equals(".meta")) continue;

            m_seqFileList.Add(filename);

            if (m_seqFileList.Count > 0 && !m_inCreate)
            {
                m_inCreate = true;
                string nextFile = m_seqFileList[0];
                m_seqFileList.RemoveAt(0);
                CreateSngWithFileName(nextFile);
            }
        }
        foreach (string dir in dirs)
        {
            paths.Add(dir.Replace('\\', '/'));
            Recursive(dir);
        }
    }

    static void CreateSngWithFileName(string filename)
    {
        if (filename.IndexOf(".jpg") >= 0)
        {
            Debug.Log("JPG格式不分离 : " + filename);
            return;
        }

        string ext = Path.GetExtension(filename);

        string extFName = Path.GetFileName(filename);
        string dirName = Path.GetDirectoryName(filename);

        string newDirName = dirName.Replace(m_orgPath, m_newPath);
        string dirN = newDirName.Replace(m_seqPath, "");

        dirN = dirN.Replace("/", "");
        if (!dirN.IsNullOrEmpty())
            dirN += "/";


        WWW www = new WWW("file://" + filename);

        while (!www.isDone)
        {
            if (!www.error.IsNullOrEmpty())
            {
                Debug.LogError(www.error);
            }
        }

        string noextName = Path.GetFileNameWithoutExtension(filename);
        string newDirName2 = Path.GetDirectoryName(filename).Replace(m_orgPath, m_newPath);

        texPath = newDirName2 + "/" + noextName + "_";
        assetPath = texPath;

        Texture2D texture = www.texture;
        if (texture != null && !texture.name.Contains(string_rgb) && !texture.name.Contains(string_alpha))
        {
            SeperateRGBAandlphaChannel(texture);
        }

        //ResourceManager.Instance.LoadTexture(dirN + extFName, delegate (AssetBundles.NormalRes res)
        //{
        //    string noextName = Path.GetFileNameWithoutExtension(filename);
        //    string newDirName2 = Path.GetDirectoryName(filename).Replace(m_orgPath, m_newPath);

        //    texPath = newDirName2 + "/" + noextName + "_";
        //    assetPath = texPath;

        //    AssetBundles.TextureRes tex = res as AssetBundles.TextureRes;

        //    Texture2D texture = tex.m_texture;
        //    if (texture != null && !texture.name.Contains(string_rgb) && !texture.name.Contains(string_alpha))
        //    {
        //        SeperateRGBAandlphaChannel(texture);
        //    }

        //}, delegate (string errorString)
        //{
        //    Debug.LogError(errorString);
        //});

        files.Add(filename.Replace('\\', '/'));
    }


    [MenuItem("Assets/设置Alpha通道")]
    static void SeperateAllTexturesRGBandAlphaChannel()
    {
        string_rgb = "_rgb";
        string_alpha = "_alpha";

        m_seqPath = null;
        //如果鼠标没有选中物体则返回
        if (Selection.objects == null || Selection.objects.Length == 0)
            return;
        texPath = (Application.dataPath.Substring(0, Application.dataPath.LastIndexOf('/')) + "/" + AssetDatabase.GetAssetPath(Selection.objects[0])).Replace(".png", "");
        assetPath = texPath.Replace(Application.dataPath + "/", "Assets/");
        //获取点中对象(包括子目录)Texture
        for (int i = 0; i < Selection.objects.Length; ++i)
        {
            Texture2D texture = Selection.objects[i] as Texture2D;
            if (texture == null || texture.name.Contains(string_rgb) || texture.name.Contains(string_alpha))
                continue;
            SeperateRGBAandlphaChannel(texture);
        }
    }

    #region process texture  

    static void SeperateRGBAandlphaChannel(Texture2D sourcetex)
    {
        if (!sourcetex)
        {
            Debug.Log("Load Texture Failed : " + sourcetex.name);
            return;
        }
        if (!HasAlphaChannel(sourcetex))
        {
            Debug.Log("Texture does not have Alpha channel : ");
            return;
        }

        Texture2D rgbTex = new Texture2D(sourcetex.width, sourcetex.height, TextureFormat.RGB24, true);
        Texture2D alphaTex = new Texture2D((int)(sourcetex.width * sizeScale), (int)(sourcetex.height * sizeScale), TextureFormat.RGB24, true);

        for (int i = 0; i < sourcetex.width; ++i)
            for (int j = 0; j < sourcetex.height; ++j)
            {
                Color color = sourcetex.GetPixel(i, j);
                Color rgbColor = color;
                Color alphaColor = color;
                alphaColor.r = color.a;
                alphaColor.g = color.a;
                alphaColor.b = color.a;
                rgbTex.SetPixel(i, j, rgbColor);
                alphaTex.SetPixel((int)(i * sizeScale), (int)(j * sizeScale), alphaColor);
            }

        rgbTex.Apply();
        alphaTex.Apply();

        byte[] bytes = rgbTex.EncodeToPNG();
        assetPath = assetPath.Replace("AtlasRes", "Res/UIAtlas");
        File.WriteAllBytes(assetPath + string_rgb + ".png", bytes);
        bytes = alphaTex.EncodeToPNG();
        File.WriteAllBytes(assetPath + string_alpha + ".png", bytes);

        if (!m_seqPath.IsNullOrEmpty())
        {
            m_inCreate = false;
            if (m_seqFileList.Count > 0)
            {
                string nextFile = m_seqFileList[0];
                m_seqFileList.RemoveAt(0);
                CreateSngWithFileName(nextFile);
            }
            return;
        }
            
        AssetDatabase.Refresh();

        Material material = new Material(Shader.Find("Unlit/Transparent Colored ETC1"));
        Texture mainTexture = AssetDatabase.LoadAssetAtPath(assetPath + "_rgb.png", typeof(Texture2D)) as Texture2D;
        Texture alphaTexture = AssetDatabase.LoadAssetAtPath(assetPath + "_alpha.png", typeof(Texture2D)) as Texture2D;

        
        AssetDatabase.CreateAsset(material, assetPath + ".mat");
        material.SetTexture("_MainTex", mainTexture);
        material.SetTexture("_AlphaTex", alphaTexture);
        
        AssetDatabase.Refresh();

        GameObject prefab = AssetDatabase.LoadAssetAtPath(assetPath + ".prefab", typeof(GameObject)) as GameObject;
        prefab.GetComponent<UIAtlas>().spriteMaterial = material;
        Debug.Log("Succeed to seperate RGB and Alpha channel for texture : ");
    }

    static bool HasAlphaChannel(Texture2D _tex)
    {
        for (int i = 0; i < _tex.width; ++i)
            for (int j = 0; j < _tex.height; ++j)
            {
                Color color = _tex.GetPixel(i, j);
                float alpha = color.a;
                if (alpha < 1.0f - 0.001f)
                {
                    return true;
                }
            }
        return false;
    }


    #endregion

}