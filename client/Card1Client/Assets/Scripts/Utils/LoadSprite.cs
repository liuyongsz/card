using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine.UI;
using UnityEngine;

public class LoadSprite
{
    /// <summary>切换图集中的Sprite</summary>
    /// <param name="spriteName">名字</param>
    public static void Change(string spriteName, Image img)
    {
        Texture2D mainTxt = img.mainTexture as Texture2D;
        ResourceManager.Instance.LoadAB(mainTxt.name + ".png", delegate (AssetBundle ab)
        {
            if (img.IsDestroyed()) return;

            Sprite[] sp = ab.LoadAllAssets<Sprite>();
            int count = sp.Length;
            for (int i = 0; i < count; i++)
            {
                if (sp[i].name == spriteName)
                {
                    img.sprite = sp[i];
                    break;
                }
            }

            ab.Unload(false);
        },
         delegate (string errorString)
         {
             Debug.LogError(errorString);
         });
    }
    public static void LoaderBGTexture(Material target, string url, bool autoNativeSize = false)
    {
        ResourceManager.Instance.LoadTexture("bg/" + url + ".png", delegate (AssetBundles.NormalRes res)
        {

            AssetBundles.TextureRes tex = res as AssetBundles.TextureRes;

            target.mainTexture = tex.m_texture;
        },
         delegate (string errorString)
         { 
             Debug.LogError(errorString);
         });
    }
    public static void LoaderBGTexture(UITexture target, string url, bool autoNativeSize = false)
    {
        ResourceManager.Instance.LoadTexture("bg/" + url + ".png", delegate (AssetBundles.NormalRes res)
        {

            AssetBundles.TextureRes tex = res as AssetBundles.TextureRes;

            target.mainTexture = tex.m_texture;
        },
         delegate (string errorString)
         {
             Debug.LogError(errorString);
         });
    }
    public static void LoaderImage(UITexture target, string url, bool autoNativeSize = false)
    {
        //if(Define.ChannelSeparationImage)
        //{
        //    LoadChannelSeparationImage(target, url);
        //}
        ResourceManager.Instance.LoadTexture(url + ".png", delegate (AssetBundles.NormalRes res)
        {

            AssetBundles.TextureRes tex = res as AssetBundles.TextureRes;

            target.mainTexture = tex.m_texture;
        },
     delegate (string errorString)
     {
         Debug.LogError(errorString);
     });
    }

    public static void LoaderItem(UITexture target, string url, bool autoNativeSize = false)
    {
        LoaderImage(target,"item/" + url);
    }

    public static void LoaderHero(UITexture target, string url, bool autoNativeSize = false)
    {
        LoaderImage(target, "hero/" + url);
    }

    public static void LoaderHead(UITexture target, string url, bool autoNativeSize = false)
    {
        LoaderImage(target, "head/" + url);
    }

    public static void LoaderCard(UITexture target, string url, bool autoNativeSize = false)
    {
        LoaderImage(target, "card/" + url);
    }

    public static void LoaderPlayerSkin(UITexture target, string url, bool autoNativeSize = false)
    {
        LoaderImage(target, "playerskin/" + url);
    }
    public static void LoaderSkill(UITexture target, string url, bool autoNativeSize = false)
    {
        LoaderImage(target, "skill/" + url);
    }


    /// <summary>加载通道分离图片</summary>
    /// <param name="target"></param>
    /// <param name="url"></param>
    public static void LoadChannelSeparationImage(UITexture target,string url)
    {
        Texture texture_rgb;
        Texture texture_alpha;

        ResourceManager.Instance.LoadTexture(url + "_rgb.png", delegate (AssetBundles.NormalRes res)
        {

            AssetBundles.TextureRes tex = res as AssetBundles.TextureRes;

            texture_rgb = tex.m_texture as Texture;

            ResourceManager.Instance.LoadTexture(url + "_alpha.png", delegate (AssetBundles.NormalRes res2)
            {
                AssetBundles.TextureRes tex2 = res2 as AssetBundles.TextureRes;

                texture_alpha = tex2.m_texture as Texture;

                Shader sder = Shader.Find("Custom/Unlit - Transparent Colored Grayed (SoftClip)");

                Material mat = new Material(sder);
                mat.SetTexture("_MainTex", texture_rgb);
                mat.SetTexture("_AlphaTex", texture_alpha);

                target.mainTexture = null;
                target.material = mat;
            },
            OnLoader_Error);
        },
       OnLoader_Error);
    }

    private static void OnLoader_Error(string error)
    {
        Debug.LogError(error);
    }
}
