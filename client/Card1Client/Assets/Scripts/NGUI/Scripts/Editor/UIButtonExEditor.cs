//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using UnityEditor;

[CanEditMultipleObjects]
#if UNITY_3_5
[CustomEditor(typeof(UIButtonEx))]
#else
[CustomEditor(typeof(UIButtonEx), true)]
#endif
public class UIButtonExEditor : UIButtonEditor
{
	enum Highlight
	{
		DoNothing,
		Press,
	}

	protected override void DrawProperties ()
	{
        NGUIEditorTools.DrawProperty("uiSprite", serializedObject, "mUIForeSprite");
        NGUIEditorTools.DrawProperty("NormalName", serializedObject, "mstrNormalName");
        NGUIEditorTools.DrawProperty("PressName", serializedObject, "mstrPressName");
        NGUIEditorTools.DrawProperty("DisableName", serializedObject, "mstrDisableName");
        base.DrawProperties();
	}
}
