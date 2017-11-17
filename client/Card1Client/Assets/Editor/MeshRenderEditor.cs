using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(MeshRenderer))]
public class MeshRenderEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        MeshRenderer render = target as MeshRenderer;

        render.sortingOrder = EditorGUILayout.IntField("Order Layer", render.sortingOrder);
    }
}
