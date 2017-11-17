using UnityEngine;
using UnityEngine.Audio;
using System.Collections.Generic;
using System;

public enum AudioGroupTypes
{
    Default = 0,
    Voice = 1,
    Fight = 2,
    Environment = 3,
    Music = 4,
}

public class AudioManager : ManagerTemplate<AudioManager> {

    public static int AUDIO_POOL_SIZE = 30;

    private static Transform listenerTarget;
    private static Transform listenerTrans;

    static LinkedList<AudioObject> pool = new LinkedList<AudioObject>();
    static LinkedList<AudioObject> activeAudio = new LinkedList<AudioObject>();

    static AudioMixer defaultMixer;
    static Dictionary<int, AudioMixerGroup> audioMixerGroups = new Dictionary<int, AudioMixerGroup>();

    protected override void InitManager()
    {
        defaultMixer = Resources.Load<AudioMixer>("System/AudioMixer");
        if (defaultMixer != null)
        {
            var audioGroupVals = System.Enum.GetValues(typeof(AudioGroupTypes));
            var audioGroupNames = System.Enum.GetNames(typeof(AudioGroupTypes));
            for (int i = 0; i < audioGroupVals.Length; i++)
            {
                audioMixerGroups[(int)audioGroupVals.GetValue(i)] = defaultMixer.FindMatchingGroups((string)audioGroupNames.GetValue(i))[0];
            }
        }

        DestroyExistingListener();

        GameObject listenerGo = new GameObject("AudioListener");
        listenerGo.transform.parent = transform;
        listenerTrans = listenerGo.transform;
        listenerGo.AddComponent<AudioListener>();

        GameEventManager.RegisterEvent(GameEventTypes.EnterScene, OnEnterScene);
    }

    private static void OnEnterScene(GameEventTypes eventType, object[] args)
    {
        DestroyExistingListener();
    }

    private static void DestroyExistingListener()
    {
        var mainCamera = Camera.main;

        if (mainCamera!= null)
        {
            var audioListener = mainCamera.GetComponent<AudioListener>();

            if (audioListener != null)
            {
                DestroyImmediate(audioListener);
            }
        }
    }

    public static void SetListener(Transform target)
    {
        listenerTarget = target;
    }

    public static AudioObject PlayAudio(int id, Vector3 position)
    {
        AudioObject audioObj = FetchAudioObject(id);
        if (audioObj == null)
            return null;

        activeAudio.AddLast(audioObj);

        audioObj.Play(position);

        return audioObj;
    }

    public static AudioObject PlayAudio(int id, Transform target)
    {
        AudioObject audioObj = FetchAudioObject(id);
        if (audioObj == null)
            return null;

        activeAudio.AddLast(audioObj);

        audioObj.Play(target);

        return audioObj;
    }

    private static AudioObject FetchAudioObject(int id)
    {
        AudioObject audioObj = FetchFromPool(id);

        if (audioObj == null)
            audioObj = CreateAudioObject(id);

        return audioObj;
    }

    private static AudioObject CreateAudioObject(int id)
    {
        AudioCfg config = AudioConfig.GetConfig(id);

        if (config == null)
        {
            Debug.LogErrorFormat("Failed to find config of audio {0}", id);
            return null;
        }

        AudioObject audioObj = new AudioObject(config, Instance.transform);

        return audioObj;
    }

    private static AudioObject FetchFromPool(int id)
    {
        LinkedListNode<AudioObject> curNode = pool.First;
        int count = pool.Count;

        for (int i = 0; i < count; i++)
        {
            LinkedListNode<AudioObject> next = curNode.Next;

            if (curNode.Value.AudioID == id)
            {
                pool.Remove(curNode);
                return curNode.Value;
            }

            curNode = next;
        }

        return null;
    }

    void Update()
    {
        if (activeAudio.Count == 0)
            return;

        if (listenerTarget != null)
        {
            listenerTrans.position = listenerTarget.position;
        }

        LinkedListNode<AudioObject> curNode = activeAudio.First;

        for (int i = 0; i < activeAudio.Count; i++)
        {
            LinkedListNode<AudioObject> next = curNode.Next;

            curNode.Value.Update();

            if (curNode.Value.Expired)
            {
                ProcessExpiredEffect(curNode.Value);
                activeAudio.Remove(curNode);
            }

            curNode = next;
        }
    }

    private static void ProcessExpiredEffect(AudioObject audioObj)
    {
        if (pool.Count < AUDIO_POOL_SIZE)
        {
            pool.AddLast(audioObj);
        }
        else
        {
            var first = pool.First;
            pool.RemoveFirst();
            first.Value.Destroy();
        }
    }

    public static AudioObject Find(int audioID)
    {
        LinkedListNode<AudioObject> curNode = activeAudio.First;

        for (int i = 0; i < activeAudio.Count; i++)
        {
            if (curNode.Value.AudioID == audioID)
            {
                return curNode.Value;
            }

            curNode = curNode.Next;
        }

        return null;
    }

    public static AudioMixerGroup GetMixerGroup(AudioGroupTypes type)
    {
        AudioMixerGroup group;
        audioMixerGroups.TryGetValue((int)type, out group);
        return group;
    }
}
