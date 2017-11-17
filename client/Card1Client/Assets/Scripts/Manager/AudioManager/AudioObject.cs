using UnityEngine;
using System.Collections;


public class AudioObject
{
    class AudioTarget
    {
        public bool hasTransform;

        public Transform target;
        public Vector3 targetPos;

        public void Clear()
        {
            hasTransform = false;
            target = null;
            targetPos = Vector3.zero;
        }

        public void SetTransform(Transform target)
        {
            this.hasTransform = true;
            this.target = target;
            this.targetPos = target.position;
        }

        public void SetPosition(Vector3 position)
        {
            this.hasTransform = false;
            this.target = null;
            this.targetPos = position;
        }

        public Vector3 GetPosition()
        {
            if (hasTransform && target != null)
                return target.position;
            else
                return targetPos;
        }

        public bool IsValid()
        {
            return !hasTransform || target != null;
        }
    }

    enum AudioStates
    {
        Initial,
        FadeIn,
        Playing,
        FadeOut,
        Expired,
    }

    public int AudioID { protected set; get; }
    public bool Expired { get { return state == AudioStates.Expired; } }
    public bool IsLoop { get { return config != null && config.Loop==1; } }

    AudioCfg config;
    GameObject gameObject;
    Transform transform;
    AudioSource audioSource;
    AudioClip audioClip;

    AudioTarget target = new AudioTarget();

    AMLoadAssetOperation asyncLoadOp;
    string assetBundlePath;

    
    int stateElapsed;
    AudioStates state;

    public AudioObject(AudioCfg config, Transform root)
    {
        this.config = config;
        AudioID = config.ID;
        gameObject = new GameObject(config.ID.ToString());
        Disable();
        transform = gameObject.transform;
        transform.SetParent(root);
        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.outputAudioMixerGroup = AudioManager.GetMixerGroup((AudioGroupTypes)config.Priority);
        audioSource.volume = config.Volume;
        audioSource.loop = config.Loop==1;
        audioSource.dopplerLevel = 0;
        assetBundlePath = string.Format("audio/{0}.bundle", config.AssetName.ToLower());

        LoadAsset();
    }

    private void LoadAsset()
    {
        AudioObject instance = AudioManager.Find(AudioID);
        if (instance != null && instance.audioClip != null)
        {
            // 有实例从实例复制
            audioClip = instance.audioClip;
            audioSource.clip = audioClip;
        }
        else
        {
            // 没有实例从资源加载
            asyncLoadOp = AssetBundleManager.LoadAssetAsync(assetBundlePath, config.AssetName, typeof(AudioClip));
            if(asyncLoadOp == null)
            {
                Debug.LogError("Audo------"+ assetBundlePath);

            }
        }
    }

    public void Play(Transform trans)
    {
        target.Clear();
        target.SetTransform(trans);
        PlayInternal();
    }

    public void Play(Vector3 position)
    {
        target.Clear();
        target.SetPosition(position);
        PlayInternal();
    }

    public void Stop()
    {
        if (state == AudioStates.Playing)
        {
            MoveToNextState();
        }
        else
        {
            StopImmediate();
        }
    }

    public void StopImmediate()
    {
        state = AudioStates.Expired;
        Disable();
    }

    public void Destroy()
    {
        if (asyncLoadOp != null)
        {
            asyncLoadOp.UnloadAssetBundle();
            asyncLoadOp = null;
        }

        if (gameObject != null)
        {
            UnityEngine.Object.Destroy(gameObject);
            gameObject = null;
        }
    }

    private void PlayInternal()
    {
        Enable();
        ResetState();
        UpdatePosition();
    }

    public void Update()
    {
        if (audioClip == null)
        {
            CheckLoading();
            return;
        }

        UpdateState();

        if (state == AudioStates.Expired)
            return;

        UpdatePosition();
    }

    void ResetState()
    {
        state = AudioStates.Initial;
        stateElapsed = 0;
        audioSource.volume = config.Volume;
    }

    private void MoveToNextState()
    {
        AudioStates curState = this.state;
        stateElapsed = 0;

        switch (curState)
        {
            case AudioStates.Initial:
                if (config.FadeIn > 0)
                {
                    state = AudioStates.FadeIn;
                    audioSource.volume = 0;
                }
                else
                {
                    state = AudioStates.Playing;
                    audioSource.volume = 1;
                }
                break;

            case AudioStates.FadeIn:
                state = AudioStates.Playing;
                audioSource.volume = 1;

                break;

            case AudioStates.Playing:
                if (config.FadeOut > 0)
                {
                    state = AudioStates.FadeOut;
                }
                else
                {
                    state = AudioStates.Expired;
                    Disable();
                }

                break;

            case AudioStates.FadeOut:
                state = AudioStates.Expired;
                Disable();
                break;
        }
    }

    void Enable()
    {
        gameObject.SetActive(true);
    }

    void Disable()
    {
        gameObject.SetActive(false);
    }

    void UpdateState()
    {
        if (!target.IsValid())
        {
            StopImmediate();
            return;
        }

        stateElapsed += (int)(Time.deltaTime * 1000);

        switch (state)
        {
            case AudioStates.Initial:
                MoveToNextState();
                break;
            case AudioStates.FadeIn:
                audioSource.volume = Mathf.Lerp(0, config.Volume, (float)stateElapsed / config.FadeIn);
                if (stateElapsed > config.FadeIn)
                    MoveToNextState();
                break;

            case AudioStates.Playing:
                if (!(config.Loop==1))
                {
                    if (!audioSource.isPlaying || (audioClip.length - audioSource.time) < config.FadeOut * 0.001f)
                    {
                        MoveToNextState();
                    }
                }
                break;

            case AudioStates.FadeOut:
                audioSource.volume = Mathf.Lerp(config.Volume, 0, (float)stateElapsed / config.FadeOut);
                if (stateElapsed > config.FadeOut)
                    MoveToNextState();
                break;
        }
    }

    void UpdatePosition()
    {
        if (target.hasTransform)
            transform.position = target.GetPosition();
    }

    private void CheckLoading()
    {
        if (asyncLoadOp != null)
        {
            if (asyncLoadOp.IsDone())
            {
                audioClip = asyncLoadOp.GetAsset<AudioClip>();
                audioSource.clip = audioClip;

                AssetBundleManager.UnloadAssetBundle(assetBundlePath);
                asyncLoadOp = null;

                if (audioClip == null)
                    Stop();
                else
                    audioSource.Play();
            }
        }
    }
}
