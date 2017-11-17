using UnityEngine;
using System.Collections;

public static class TransformUtil {
    public static void ResetPRS(this Transform trans)
    {
        trans.localPosition = Vector3.zero;
        trans.localRotation = Quaternion.identity;
        trans.localScale = Vector3.one;
    }

    public static Transform Search(this Transform trans, string name)
    {
        if (trans.name == name)
            return trans;

        int count = trans.childCount;

        for (int i = 0; i < count; i++)
        {
            Transform child = trans.GetChild(i);

            Transform found = Search(child, name);
            if (found != null)
                return found;
        }

        return null;
    }
}
