using UnityEngine;
using System.Collections;

public class EffectObject
{
    #region EffectTarget
    struct EffectTarget
    {
        public bool hasTransform;

        public Transform root;
        public Transform bpTrans;

        public Vector3 position;
        public Quaternion rotation;

        public void Clear()
        {
            hasTransform = false;
            root = null;
            bpTrans = null;
            position = Vector3.zero;
            rotation = Quaternion.identity;
        }

        public void SetTransform(Transform root, string bp)
        {
            this.hasTransform = true;
            this.root = root;

            if (!string.IsNullOrEmpty(bp))
                this.bpTrans = root.Search(bp);

            if (this.bpTrans == null)
                this.bpTrans = root;

            this.position = bpTrans.position;
            this.rotation = bpTrans.rotation;
        }

        public void SetPosition(Vector3 position, Quaternion rotation)
        {
            this.hasTransform = false;

            this.root = null;
            this.bpTrans = null;

            this.position = position;
            this.rotation = rotation;
        }

        public Vector3 TransformPoint(Vector3 point)
        {
            if (hasTransform && bpTrans != null)
            {
                return bpTrans.TransformPoint(point);
            }
            else
            {
                return position + point;
            }
        }

        public Quaternion TransformRotation(Quaternion localRotation)
        {
            if (hasTransform && bpTrans != null)
            {
                return localRotation * bpTrans.rotation;
            }
            else
            {
                return localRotation * this.rotation;
            }
        }

        public Vector3 TransformScale(Vector3 localScale)
        {
            if (hasTransform && bpTrans != null)
            {
                Vector3 lossyScale = bpTrans.lossyScale;
                lossyScale.x *= localScale.x;
                lossyScale.y *= localScale.y;
                lossyScale.z *= localScale.z;
                return lossyScale;
            }
            else
            {
                return localScale;
            }
        }

        public bool IsValid()
        {
            return !hasTransform || bpTrans != null;
        }
    }
    #endregion

    enum EffectStates
    {
        Initial,
        Delay,
        Playing,
        FadeOut,
        Expired,
    }


    // -------------
    EffectCfg config;
    GameObject gameObject;
    Transform transform;
    GameObject modelGo;
    Transform modelTrans;

    AMLoadAssetOperation asyncLoadOp;
    string assetBundlePath;

    // -------------
    public int EffectID { protected set; get; }
    public bool Expired { get { return state == EffectStates.Expired; } }
    public bool IsLoaded { get { return modelGo != null; } }
    public GameObject Model { get { return modelGo; } }
    public bool IsLoop
    {
        get
        {
            if(config == null)
            {
                return false;
            }
            return config.Lifetime <= 0;
        }
    }

    EffectTarget target;
    int stateElapsed;
    EffectStates state;

    AudioObject audioObject;

    public EffectObject(EffectCfg config, Transform root)
    {
        this.config = config;
        this.EffectID = config.ID;
        this.gameObject = new GameObject(config.ID.ToString());
        this.gameObject.SetActive(false);
        this.transform = gameObject.transform;
        this.transform.SetParent(root);
        this.assetBundlePath = string.Format("effects/{0}.bundle", config.AssetName.ToLower());

        LoadAsset();
    }

    private void LoadAsset()
    {
        EffectObject instance = EffectManager.Find(EffectID);
        if (instance != null && instance.modelGo != null)
        {
            // 有实例从实例复制
            InstantiateModel(instance.modelGo);
        }
        else
        {
            // 没有实例从资源加载
            asyncLoadOp = AssetBundleManager.LoadAssetAsync(assetBundlePath, config.AssetName, typeof(GameObject));
        }
    }

    public void Start(Transform trans)
    {
        target.Clear();
        target.SetTransform(trans, config.BindPoint);
        StartInternal();
    }

    public void Start(Vector3 position, Quaternion rotation)
    {
        target.Clear();
        target.SetPosition(position, rotation);
        StartInternal();
    }

    private void StartInternal()
    {
        ResetState();

        UpdatePosition();
        UpdateRotation();
        UpdateScale();
    }

    public void Stop()
    {
        if (this.state == EffectStates.Playing)
            MoveToNextState();
        else
            StopImmediate();
    }

    public void StopImmediate()
    {
        state = EffectStates.Expired;
        Hide();
    }

    public void Destroy()
    {
        ResetState();

        if (asyncLoadOp != null)
        {
            asyncLoadOp.UnloadAssetBundle();
            asyncLoadOp = null;
        }

        if (gameObject != null)
        {
            Object.Destroy(gameObject);
            gameObject = null;
        }
    }
    
    private void ResetState()
    {
        if (state == EffectStates.Initial)
            return;

        stateElapsed = 0;
        state = EffectStates.Initial;
        Hide();
        StopAudio();
    }

    private void MoveToNextState()
    {
        EffectStates curState = this.state;
        this.stateElapsed = 0;

        switch (curState)
        {
            case EffectStates.Initial:
                if (config.Delay > 0)
                {
                    this.state = EffectStates.Delay;
                }
                else
                {
                    this.state = EffectStates.Playing;
                    Show();
                    OnBeginPlay();
                    PlayAudio();
                }

                break;
            case EffectStates.Delay:
                this.state = EffectStates.Playing;
                Show();
                OnBeginPlay();
                PlayAudio();

                break;
            case EffectStates.Playing:
                if (config.FadeOutTime > 0)
                {
                    this.state = EffectStates.FadeOut;
                }
                else
                {
                    this.state = EffectStates.Expired;
                    Hide();
                }

                OnEndPlay();
                StopAudio();

                break;
            case EffectStates.FadeOut:
                this.state = EffectStates.Expired;
                Hide();

                break;
        }
    }

    private void UpdateState()
    {
        if (!target.IsValid())
        {
            StopImmediate();
            return;
        }

        stateElapsed += (int)(Time.deltaTime * 1000);

        switch (state)
        {
            case EffectStates.Initial:
                MoveToNextState();
                break;

            case EffectStates.Delay:
                if (stateElapsed > config.Delay)
                    MoveToNextState();
                break;

            case EffectStates.Playing:
                if (config.Lifetime > 0 && stateElapsed > config.Lifetime)
                    MoveToNextState();
                break;

            case EffectStates.FadeOut:
                if (stateElapsed > config.FadeOutTime)
                    MoveToNextState();
                break;
        }
    }

    private void Show()
    {
        gameObject.SetActive(true);
    }

    private void Hide()
    {
        gameObject.SetActive(false);
    }

    private void PlayAudio()
    {
        if (audioObject == null && config.Audio != 0)
        {
            if (target.hasTransform && target.bpTrans != null)
            {
                audioObject = AudioManager.PlayAudio(config.Audio, target.bpTrans);
            }
            else
            {
                audioObject = AudioManager.PlayAudio(config.Audio, target.position);
            }
        }
    }

    private void StopAudio()
    {
        if (audioObject != null)
        {
            if (audioObject.IsLoop)
            {
                audioObject.Stop();
            }

            audioObject = null;
        }
    }

    private void OnBeginPlay()
    {
        if (config.OnBeginPlayArray != null)
        {
            for (int i = 0; i < config.OnBeginPlayArray.Length; i++)
            {
                int effID = config.OnBeginPlayArray[i];

                PlayEffectOnSameTarget(effID);
            }
        }
    }

    private void OnEndPlay()
    {
        if (config.OnEndPlayArray != null)
        {
            for (int i = 0; i < config.OnEndPlayArray.Length; i++)
            {
                int effID = config.OnEndPlayArray[i];

                PlayEffectOnSameTarget(effID);
            }
        }
    }

    private void PlayEffectOnSameTarget(int effID)
    {
        if (target.hasTransform && target.root != null)
        {
            EffectManager.Play(effID, target.root);
        }
        else
        {
            EffectManager.Play(effID, target.position, target.rotation);
        }
    }

    public void Update()
    {
        if (modelGo == null)
        {
            CheckLoading();
            return;
        }

        UpdateState();

        if (state == EffectStates.Expired)
            return;

        if (config.FollowPosition)
            UpdatePosition();

        if (config.FollowRotation)
            UpdateRotation();

        if (config.FollowScale)
            UpdateScale();
    }

    private void CheckLoading()
    {
        if (asyncLoadOp != null)
        {
            if (asyncLoadOp.IsDone())
            {
                GameObject prefab = asyncLoadOp.GetAsset<GameObject>();
                if (prefab != null)
                {
                    InstantiateModel(prefab);
                }
                else
                {
                    StopImmediate();
                }

                asyncLoadOp.UnloadAssetBundle();
                asyncLoadOp = null;
            }
        }
    }

    private void UpdatePosition()
    {
        transform.position = target.TransformPoint(config.LocalPositionVec3);
    }

    private void UpdateRotation()
    {
        transform.rotation = target.TransformRotation(config.LocalRotationQuaternion);
    }

    private void UpdateScale()
    {
        transform.localScale = target.TransformScale(config.LocalScaleVec3);
    }

    private void InstantiateModel(GameObject prefab)
    {
        modelGo = Object.Instantiate<GameObject>(prefab);
        modelTrans = modelGo.transform;
        modelTrans.SetParent(transform);
        modelTrans.ResetPRS();
        
    }
}
