using System;
using System.Collections;
using System.Reflection;
using UnityEditor;
using UnityEngine;
public class ImportTagAndLayer
{
    private static string[] myTags = {"Ball",
        "PlayerTeam1",
        "OponentTeam",
        "Scenary",
        "Bip001 Head",
        "Bip001 R Hand",
        "GoalKeeper",
        "GoalKeeper_Opponent",
        "joystick",
        "PlayerSelected",
        "GoalVisit",
        "GoalLocal",
        "ShadowBall",
        "ground"};
    private static string[] myLayers = {};

    [MenuItem("UGame/Reset Tag")]
    public static void OnPostprocessAllAssets()
    {
        int i = 0;
        foreach (string tag in myTags)
        {
            AddTag(tag,i);
            i++;
        }

        foreach (string layer in myLayers)
        {
            AddLayer(layer);
        }
    }

    public static void AddTag(string tag,int index)
    {
        SerializedObject tagManager = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
        SerializedProperty it = tagManager.GetIterator();

        while (it.NextVisible(true))
        {
            if (it.name == "tags")
            {
                if (index >= it.arraySize)
                {
                    it.InsertArrayElementAtIndex(it.arraySize);
                }

                for (int i = 0; i < it.arraySize; i++)
                {
                    SerializedProperty dataPoint = it.GetArrayElementAtIndex(i);
                    if (index == i)
                    {
                        dataPoint.stringValue = tag;
                        tagManager.ApplyModifiedProperties();
                        return;
                    }
                }
            }
        }
    }

    static void AddLayer(string layer)
    {
        if (!isHasLayer(layer))
        {
            SerializedObject tagManager = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
            SerializedProperty it = tagManager.GetIterator();
            while (it.NextVisible(true))
            {
                if (it.name.StartsWith("User Layer"))
                {
                    if (it.type == "string")
                    {
                        if (string.IsNullOrEmpty(it.stringValue))
                        {
                            it.stringValue = layer;
                            tagManager.ApplyModifiedProperties();
                            return;
                        }
                    }
                }
            }
        }
    }

    static bool isHasTag(string tag)
    {
        for (int i = 0; i < UnityEditorInternal.InternalEditorUtility.tags.Length; i++)
        {
            if (UnityEditorInternal.InternalEditorUtility.tags[i].Contains(tag))
                return true;
        }
        return false;
    }

    static bool isHasLayer(string layer)
    {
        for (int i = 0; i < UnityEditorInternal.InternalEditorUtility.layers.Length; i++)
        {
            if (UnityEditorInternal.InternalEditorUtility.layers[i].Contains(layer))
                return true;
        }
        return false;
    }
}
