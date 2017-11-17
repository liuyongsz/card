using UnityEngine;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.EventSystems;
#if UNITY_EDITOR
using UnityEditor;
#endif


public class DisplayUtil
{
    private static Material m_grayMat;

   

    public static void Play(Animation ani, string aniName = null, WrapMode type = WrapMode.Loop, float acc = -1)
    {
        if (string.IsNullOrEmpty(aniName))
        {
            ani.Stop();
            return;
        }

        ani.CrossFade(aniName, 0.1f);
        ani.wrapMode = type;

        if (acc != -1)
            ani[aniName].speed += acc;
    }

    /// <summary>获取当前动做名字</summary>
    public static string CurrentAnimationName(Animation ani)
    {
        foreach (AnimationState anim in ani)
        {
            if (ani.IsPlaying(anim.name))
            {
                return anim.name;
            }
        }

        return null;
    }

    /// <summary>设置灰色</summary>
    /// <param name="target"></param>
    /// <param name="val"></param>
    public static void SetGrayFiter(GameObject target, bool val = true)
    {
        UITexture img = target.GetComponent<UITexture>();
        if (null != img)
        {
            SetGrayFiter(img, val);
            return;
        }

        //RawImage rawImg = target.GetComponent<RawImage>();
        //if(null != rawImg)
        //{
        //    SetGrayFiter(rawImg,val);
        //    return;
        //}
    }

    /// <summary>设置灰色</summary>
    /// <param name="target"></param>
    /// <param name="val"></param>
    public static void SetGrayFiter(Image target, bool val = true)
    {
        if (null == m_grayMat)
        {
            Shader sader = Shader.Find("UI/Gray");
            m_grayMat = new Material(sader);
        }

        if (val)
            target.material = m_grayMat;
        else
            target.material = null;

    }

    /// <summary>设置灰色</summary>
    /// <param name="target"></param>
    /// <param name="val"></param>
    public static void SetGrayFiter(UITexture target, bool val = true)
    {
        if (null == m_grayMat)
        {
            Shader sader = Shader.Find("UI/Gray");
            m_grayMat = new Material(sader);
        }

        if (val)
            target.material = m_grayMat;
        else
            target.material = null;

    }

    /// <summary>设置灰色</summary>
    /// <param name="target"></param>
    /// <param name="val"></param>
    public static void SetGrayFiter(UISprite target, bool val = true)
    {
        if (null == m_grayMat)
        {
            Shader sader = Shader.Find("UI/Gray");
            m_grayMat = new Material(sader);
        }

        if (val)
            target.material = m_grayMat;
        else
            target.material = null;

    }

    /// <summary>设置灰色</summary>
    /// <param name="target"></param>
    /// <param name="val"></param>
    public static void SetGrayFiter(RawImage target, bool val = true)
    {
        if (null == m_grayMat)
        {
            Shader sader = Shader.Find("UI/Gray");
            m_grayMat = new Material(sader);
        }

        if (val)
            target.material = m_grayMat;
        else
            target.material = null;

    }

    /// <summary>
    /// 判断是否点击到了UI
    /// </summary>
    /// <returns></returns>
    public static bool CheckClickedUI()
    {
        return EventSystem.current.IsPointerOverGameObject();
    }
    public static void removeChild(GameObject child)
    {
        GameObject.Destroy(child);

        child = null;
    }

    public static void addChild(GameObject pan, GameObject target)
    {
        target.transform.parent = pan.transform;

        pan = null;
        target = null;
    }

    /// <summary>
    /// 移除所有子级
    /// </summary>
    /// <param name="trans">移除目标</param>
    public static void RemoveChildren(Transform trans)
    {
        while (trans.childCount > 0)
        {
            var child = trans.GetChild(0);
            child.SetParent(null);
            GameObject.Destroy(child.gameObject);
        }
    }
    /// <summary>
    /// 移除所有子级
    /// </summary>
    /// <param name="go">目标</param>
    public static void RemoveChildren(GameObject go)
    {
        RemoveChildren(go.transform);
    }
    /// <summary>
    /// 移除所有子级
    /// </summary>
    /// <param name="compenont">目标</param>
    public static void RemoveChildren(MonoBehaviour compenont)
    {
        RemoveChildren(compenont.transform);
    }

    /// <summary>
    /// 搜索骨骼层次
    /// </summary>
    /// <param name="current"></param>
    /// <param name="name"></param>
    /// <returns></returns>
    public static Transform SearchHierarchyForBone(Transform current, string name)
    {
        // check if the current bone is the bone we're looking for, if so return it
        if (current.name == name)
        {
            return current;
        }

        // search through child bones for the bone we're looking for
        for (int i = 0; i < current.childCount; ++i)
        {
            // the recursive step; repeat the search one step deeper in the hierarchy
            Transform found = SearchHierarchyForBone(current.GetChild(i), name);

            // a transform was returned by the search above that is not null,
            // it must be the bone we're looking for
            if (found != null)
            {
                return found;
            }
        }

        // bone with name was not found
        return null;
    }

    public static bool IsVisible(Vector3 testPoint, Camera camera)
    {
        Vector3 screenPt = camera.WorldToScreenPoint(testPoint);
        if (screenPt.x > 0 && screenPt.x < Screen.width && screenPt.y > 0 && screenPt.y < Screen.height)
        {
            return true;
        }
        else
            return false;
    }

    /// <summary>重置Shader</summary>
    /// <param name="target"></param>
    /// <param name="includeChild"></param>
    public static void ResetSkinedMeshShader(Transform target, bool isChild = false)
    {
        int cnt;
        SkinnedMeshRenderer skinM;
        SkinnedMeshRenderer[] skins;
        if (isChild)
        {
            skins = target.GetComponentsInChildren<SkinnedMeshRenderer>();
            cnt = skins.Length;
            for (int i = 0; i < cnt; i++)
            {
                skinM = skins[i];

                Material mat = skinM.material;
                Shader sar = mat.shader;
                sar = Shader.Find(sar.name);

                mat.shader = null;
                mat.shader = sar;

                skinM.material = null;
                skinM.material = mat;
            }
        }
        else
        {
            skins = target.GetComponents<SkinnedMeshRenderer>();
            cnt = skins.Length;
            for (int i = 0; i < cnt; i++)
            {
                skinM = skins[i];

                Material mat = skinM.material;
                Shader sar = mat.shader;
                sar = Shader.Find(sar.name);

                mat.shader = null;
                mat.shader = sar;

                skinM.material = null;
                skinM.material = mat;
            }
        }
    }

    /// <summary>重置Shader</summary>
    /// <param name="target"></param>
    /// <param name="includeChild"></param>
    public static void ResetMeshShader(Transform target, bool isChild = false)
    {
        int cnt;
        MeshRenderer skinM;
        MeshRenderer[] skins;
        if (isChild)
        {
            skins = target.GetComponentsInChildren<MeshRenderer>();
            cnt = skins.Length;
            for (int i = 0; i < cnt; i++)
            {
                skinM = skins[i];

                Material mat = skinM.material;
                Shader sar = mat.shader;
                sar = Shader.Find(sar.name);

                mat.shader = null;
                mat.shader = sar;

                skinM.material = null;
                skinM.material = mat;
            }
        }
        else
        {
            skins = target.GetComponents<MeshRenderer>();
            cnt = skins.Length;
            for (int i = 0; i < cnt; i++)
            {
                skinM = skins[i];

                Material mat = skinM.material;
                Shader sar = mat.shader;
                sar = Shader.Find(sar.name);

                mat.shader = null;
                mat.shader = sar;

                skinM.material = null;
                skinM.material = mat;
            }
        }
    }
}