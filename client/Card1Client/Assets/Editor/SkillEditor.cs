using System;
using UnityEditor;
using UnityEngine;


public class SkillEditor : EditorWindow
{


    protected GameObject go;
    protected AnimationClip animationClip;
    protected float time = 0.0f;
    protected bool lockSelection = false;
    protected bool animationMode = false;


    [MenuItem("UGame/SkillEditor", false, 2000)]
    public static void DoWindow()
    {
        //var window = GetWindowWithRect<SkillEditor>(new Rect(0, 0, 800, 1000));
        //window.Show();
        SkillEditor window = EditorWindow.GetWindow<SkillEditor>(true, "", true);
        window.position = new Rect(Screen.currentResolution.width / 2 - 300, Mathf.Max(5, Screen.currentResolution.height / 3 - 150), 600, 400);
        window.titleContent = new GUIContent("技能编辑器");
    }
    public void OnSelectionChange()
    {
        if (!lockSelection)
        {
            go = Selection.activeGameObject;
            Repaint();
        }
    }


    public void OnGUI()
    {
        if (go == null)
        {
            EditorGUILayout.HelpBox("Please select a GameObject", MessageType.Info);
            return;
        }


        GUILayout.BeginHorizontal();
        EditorGUI.BeginChangeCheck();
        GUILayout.Toggle(AnimationMode.InAnimationMode(), "Animate");
        if (EditorGUI.EndChangeCheck())
            ToggleAnimationMode();


        GUILayout.FlexibleSpace();
        lockSelection = GUILayout.Toggle(lockSelection, "Lock");
        GUILayout.EndHorizontal();


        EditorGUILayout.BeginVertical();
        animationClip = EditorGUILayout.ObjectField(animationClip, typeof(AnimationClip), false) as AnimationClip;
        if (animationClip != null)
        {
            float startTime = 0.0f;
            float stopTime = animationClip.length;
            time = EditorGUILayout.Slider(time, startTime, stopTime);
        }
        else if (AnimationMode.InAnimationMode())
        {
            AnimationMode.StopAnimationMode();
        }
        EditorGUILayout.EndVertical();
    }


    void Update()
    {
        if (go == null)
            return;


        if (animationClip == null)
        {
            return;
        }


        Animator animator = go.GetComponent<Animator>();
        if (animator != null && animator.runtimeAnimatorController == null)
        {
            return;
        }
        if (animator == null)
        {
            Animation animation = go.GetComponent<Animation>();
            if (animation == null)
            {
                return;
            }
        }


        if (!EditorApplication.isPlaying && AnimationMode.InAnimationMode())
        {
            AnimationMode.BeginSampling();
            AnimationMode.SampleAnimationClip(go, animationClip, time);
            AnimationMode.EndSampling();


            SceneView.RepaintAll();
        }
    }


    void ToggleAnimationMode()
    {
        if (AnimationMode.InAnimationMode())
        {
            AnimationMode.StopAnimationMode();
        }
        else
        {
            AnimationMode.StartAnimationMode();
        }
    }
}