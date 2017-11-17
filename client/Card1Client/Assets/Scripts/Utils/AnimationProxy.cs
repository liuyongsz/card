using UnityEngine;
using System.Collections.Generic;
using System;

public enum ActionPlayType
{
    APT_PLAY = 0,
    APT_CROSSFADE = 1,
}
/// <summary>
/// 动作代理
/// </summary>
[System.Serializable]
public class AnimationProxy : MonoBehaviour
{
    public static Dictionary<int, Dictionary<string, AnimationClip>> CacheDic = null;    //动作缓存
    public static string CacheDicModel;    //谁的动作缓存

    [System.Serializable]
    public class AnimationInfo
    {
        public string strName = string.Empty;
        public string strPath = string.Empty;
    }
    [SerializeField]
    public AnimationInfo[] mAnimations;
    [SerializeField]
    public AnimationInfo mMainClip;
   
    /// <summary>
    /// 动作映身表
    /// </summary>
    private Dictionary<string, string> mAnimationMaps = new Dictionary<string, string>();

    /// <summary>
    /// 动画剪辑
    /// </summary>
    public Animation mAnimation;
    /// <summary>
    /// 除主动作之外的动作播放列表，用于一次性动作的退栈使用
    /// </summary>
    public List<string> mActionControlList = new List<string>();
    /// <summary>
    /// 所有动作的播放列表，用于动作索引
    /// </summary>
    public Dictionary<string, AnimationClip> mActionLoadedDict = new Dictionary<string, AnimationClip>();
    /// <summary>
    /// 最大动画数
    /// </summary>
    public const int miActionListMaxCount = 15;
    /// <summary>
    /// 之前暂停的动作
    /// </summary>
    private string lastAnimName;
    /// <summary>
    /// 之前暂停动作的速度
    /// </summary>
    private float lastAnimSpeed;
    /// <summary>
    /// 当前对象的武器类型
    /// </summary>
    private int weaponType;

    public void SetWeaponTpe(int weaponType)
    {
        this.weaponType = weaponType;
    }

    void Awake()
    {
        mAnimation = gameObject.GetComponent<Animation>();
        if (mAnimation == null)
        {
            mAnimation = gameObject.AddComponent<Animation>();
        }
      
        if (mAnimation == null)
        {
            return;
        }
      
        ///禁用再启用恢复动作开始可能未播放的bug
        mAnimation.playAutomatically = true;
        mAnimation.enabled = false;
        mAnimation.enabled = true;
       
        if (mAnimations == null)
        {
//            LogSystem.LogWarning("mAnimations is NULL " + gameObject.name);
            return;
        }

        for (int i = 0; i < mAnimations.Length; i++)
        {
            AnimationProxy.AnimationInfo aInfo = mAnimations[i];
            if (aInfo == null)
                continue;

            if (!mAnimationMaps.ContainsKey(aInfo.strName))
            {
                mAnimationMaps.Add(aInfo.strName, aInfo.strPath);
            }
        }

        if (!mAnimationMaps.ContainsKey(mMainClip.strName))
        {
            mAnimationMaps.Add(mMainClip.strName, mMainClip.strPath);
        }
    }
    public delegate void CallLoadAsset(string strFileName, AssetCallBack callback);
    public static CallLoadAsset monLoadAsset = null;
    public static void SetLoadAssetCall(CallLoadAsset call)
    {
        monLoadAsset = call;
    }
    public void LoadAnimationClip(string strAnimationName)
    {
        string strFile = GetAnimationPath(strAnimationName);
        if (string.IsNullOrEmpty(strFile))
        {
            return;
        }

        if (IsAnimationClipLoaded(strAnimationName))
        {
            CheckAnimationPlay();
            return;
        }

        if (AnimationProxy.CacheDic != null && AnimationProxy.CacheDic.ContainsKey(weaponType))
        {
            if (AnimationProxy.CacheDic[weaponType].ContainsKey((strAnimationName)))
            {
                //缓存中是否有对应动画                                 
                AddAnimationClip(AnimationProxy.CacheDic[weaponType][strAnimationName]);
                CheckAnimationPlay();
                return;
            }
        }

        //LogSystem.LogError("LoadAnimationClip -> " ,strAnimationName);
        if (monLoadAsset != null)
        {
            monLoadAsset(strFile, (object [] args) =>
                {
                    AnimationClip aClip = args[0] as AnimationClip;
                    if (aClip != null)
                    {
                        AddAnimationClip(aClip);
                    }

                    ///开始检查并播放最佳一个可播放动作
                    CheckAnimationPlay();
                });
        }
    }
   
    void Start()
    {
        if (mMainClip != null && !string.IsNullOrEmpty(mMainClip.strName))
        {
            ///如果没有播放过任何动作，播放主动作
            if (string.IsNullOrEmpty(GetPlayingAnimationName()) && mActionWaitQueue.Count == 0 )
            {
                PlayAnimation(mMainClip.strName,ActionPlayType.APT_PLAY,-1.0f,-1.0f,null);
                ///先加载默认动作
                LoadAnimationClip(mMainClip.strName);
            }
        }
    }
    
    /// <summary>
    /// 当前动作的播放队列
    /// </summary>
    List<object[]> mActionWaitQueue = new List<object[]>();
    public bool PlayAnimation(params object[] args)
    {
        if( args == null || args.Length== 0 )
            return false;
        
        string strAnimation = args[0] as string;
        if (!mAnimationMaps.ContainsKey(strAnimation))
        {
            return false;
        }

        for (int i = 0; i < mActionWaitQueue.Count;i++ )
        {
            object[] list = mActionWaitQueue[i];
            if (strAnimation.Equals(list[0]))
            {
                mActionWaitQueue.RemoveAt(i);
                break;
            }
        }
          
        mActionWaitQueue.Add(args);
        return true;
    }

    public void CheckAnimationPlay()
    {
        //LogSystem.LogError("CheckAnimationPlay ");
        ///如果动作播放队列中有动作需要播放，检查对应的动作是否加载完毕,从后先前检查
        if (mActionWaitQueue.Count == 0)
            return;
        
        int iIndex = mActionWaitQueue.Count-1;
        while (iIndex >= 0)
        {
            object[] args = mActionWaitQueue[iIndex];
            string strAnimation = args[0] as string;
            ///此动作已经加载完毕，可以播放
            if (mActionLoadedDict.ContainsKey(strAnimation))
            {
                mActionWaitQueue.RemoveRange(0, iIndex+1);
                PlayClip(args);
                ///删除之前的播放列表
                break;
            }

            iIndex--;
        }
    }
    void PlayClip(object[] args)
    {
        string strAnimationName = args[0] as string;
        ActionPlayType aType = (ActionPlayType)args[1];
        if (aType == ActionPlayType.APT_PLAY)
        {
            float fSpeed = (float)args[2];
            float fNormalized = (float)args[3];
           
            PlayAnimationClip(strAnimationName,fSpeed,fNormalized);
            if( args.Length > 4)
            {
                OnAnimationPlayCallBack onCallback = args[4] as OnAnimationPlayCallBack;
                if( onCallback != null )
                {
                    onCallback(strAnimationName,this);
                }
            }
        }
        else
        {
            float fFade = (float)args[2];
            float fSpeed = (float)args[3];
            CrossFadeClip(strAnimationName,fFade, fSpeed);
            if (args.Length > 4)
            {
                OnAnimationPlayCallBack onCallback = args[4] as OnAnimationPlayCallBack;
                if (onCallback != null)
                {
                    onCallback(strAnimationName, this);
                }
            }
        }

    }
    /// <summary>
    /// 获取动作名
    /// </summary>
    /// <param name="strName"></param>
    /// <returns></returns>
    public string GetAnimationPath(string strName)
    {
        if (mAnimations == null || mAnimationMaps == null)
            return string.Empty;

        string strPath;
        mAnimationMaps.TryGetValue(strName, out strPath);
        return strPath;
    }

    /// <summary>
    /// 获取动作路径
    /// </summary>
    /// <param name="strName"></param>
    /// <returns></returns>
    public string GetEditorAnimationPath(string strName)
    {
        if (mAnimations == null)
        {
            return string.Empty;
        }
        for (int i = 0; i < mAnimations.Length; i++)
        {
            if (mAnimations[i] != null && mAnimations[i].strName == strName)
            {
                return mAnimations[i].strPath;
            }
        }
        return string.Empty;
    }

	/// <summary>
	/// 添加动画及对应路径
	/// </summary>
	public void AddAnimation(string strName, string strpath)
	{
		AnimationInfo[] newInfo = new AnimationInfo[mAnimations.Length+1];
		for (int i = 0; i < mAnimations.Length; i++)
			newInfo[i] = mAnimations[i];
		AnimationInfo info = new AnimationInfo();
		info.strName = strName;
		info.strPath = strpath;
		newInfo[newInfo.Length - 1] = info;
		if (!mAnimationMaps.ContainsKey (strName))
			mAnimationMaps.Add (strName, strpath);
	}


    /// <summary>
    /// 是否有动画剪辑
    /// </summary>
    /// <param name="strAnimation"></param>
    public bool IsAnimationClipLoaded(string strAnimation)
    {
        if (mActionLoadedDict.ContainsKey(strAnimation))
            return true;

        return false;
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="aClip"></param>
    private void AddAnimationClip(AnimationClip aClip)
    {
        if (mAnimation == null || aClip == null)
            return;

        string strClipName = aClip.name;
        ///已经添加过动作列表地不用处理
        if (IsAnimationClipLoaded(strClipName))
            return;
        //LogSystem.LogError("AddAnimationClip -> ", strClipName);
        if (mMainClip != null && mMainClip.strName == strClipName )
        {
            ///做一次保护性判读
            if (!mActionLoadedDict.ContainsKey(strClipName))
            {
                mActionLoadedDict.Add(strClipName, aClip);
            }

            mAnimation.clip = aClip;
            ///添加到动作组件中
            mAnimation.AddClip(aClip, strClipName);
        }
        else
        {
            mActionControlList.Add(strClipName);
            ///做一次保护性判读
            if (!mActionLoadedDict.ContainsKey(strClipName))
            {
                mActionLoadedDict.Add(strClipName, aClip);
            }

            ///添加到动作组件中
            mAnimation.AddClip(aClip, strClipName);

            ///弹出最早播放的动作
            PopAnimationControl();
        }
    }

    /// <summary>
    /// 移出动画
    /// </summary>
    void PopAnimationControl()
    {
        if (mActionControlList == null || mAnimation == null)
            return;

        if (mActionControlList.Count > miActionListMaxCount)
        {
            string strClipName = mActionControlList[0];
            //LogSystem.LogError("PopAnimation -> ", strClipName);
            mActionControlList.RemoveAt(0);
            if (mActionLoadedDict.ContainsKey(strClipName))
            {
                mActionLoadedDict.Remove(strClipName);
            }
            AnimationClip aClip = mAnimation.GetClip(strClipName);
            mAnimation.RemoveClip(strClipName);
            DelegateProxy.PopCache(aClip);
            aClip = null;
        }
    }

    public bool IsPlaying(string strAnimation)
    {
        if (mAnimation == null)
            return false;
		
        return mAnimation.IsPlaying(strAnimation);
    }

	/// <summary>
	/// 是否正在播放animPrefix开头的动画
	/// </summary>
	public bool IsPlayingThese(string  animPrefix)
	{
		if (mAnimation == null)
			return false;

		foreach (AnimationState state in mAnimation)
		{
			if (state.name.Contains(animPrefix) && mAnimation.IsPlaying(state.name))
				return true;
		}
		return false;
	}

    /// <summary>
    /// 排序 播动作 放到数组后面
    /// </summary>
    /// <param name="strAnimation"></param>
    public void SequenceList(string strAnimation)
    {
        if (mActionControlList == null)
            return;

        int index = mActionControlList.IndexOf(strAnimation);
        if (index != -1 && index != mActionControlList.Count - 1)
        {
            mActionControlList.RemoveAt(index);
            mActionControlList.Add(strAnimation);
        }
    }

    /// <summary>
    /// 播放动画
    /// </summary>
    /// <param name="strAnimation"></param>
    /// <param name="fSpeed"></param>
    private void PlayAnimationClip(string strAnimation, float fSpeed =-1.0f ,float fNormalized= -1.0f)
    {
        //LogSystem.LogError("PlayAnimationClip -> ", strAnimation," <-> ", fSpeed, " <-> ", fNormalized);
        if (mAnimation == null ||!mActionLoadedDict.ContainsKey(strAnimation) )
            return;

        SequenceList(strAnimation);
        mAnimation.enabled = false;
        mAnimation.enabled = true;
        //正在播放当前动作时，先停止后再播放当前动作
        if (mAnimation.IsPlaying(strAnimation))
        {
            mAnimation.Stop(strAnimation);
        }
        mAnimation.Play(strAnimation);
        
        if (fSpeed >= 0)
        {
            mAnimation[strAnimation].speed = fSpeed;
        }
        if (fNormalized >= 0)
        {
            mAnimation[strAnimation].normalizedTime = fNormalized;
        }
        mAnimation.enabled = false;
        mAnimation.enabled = true;
    }

    private void CrossFadeClip(string strAnimation, float fFade, float fSpeed = -1.0f)
    {
        //LogSystem.LogError("CrossFadeClip -> ", strAnimation, " <-> ", fFade, " <-> ", fSpeed);
        if (mAnimation == null || !mActionLoadedDict.ContainsKey(strAnimation) )
            return;

        SequenceList(strAnimation);

        mAnimation.enabled = false;
        mAnimation.enabled = true;
        mAnimation.CrossFade(strAnimation, fFade);

        if (fSpeed >= 0)
        {
            mAnimation[strAnimation].speed = fSpeed;
        }
        mAnimation.enabled = false;
        mAnimation.enabled = true;
    }

    public void StopClip()
    {
        if (mAnimation == null)
            return;

        mAnimation.Stop();
    }
   

    public void SetAnimationSpeed(string strAnimation, float fSpeed)
    {
        if (mAnimation == null)
            return;

        if (!mActionLoadedDict.ContainsKey(strAnimation))
            return;

        SequenceList(strAnimation);
        mAnimation[strAnimation].speed = fSpeed;
    }

    /// <summary>
    /// 得到当前正在播放的动作
    /// </summary
    /// <param name="aGroup"></param>
    /// <returns></returns>
    public static string GetPlayingAnimationName(AnimationProxy aGroup)
    {
        if (aGroup == null )
            return string.Empty;

        return aGroup.GetPlayingAnimationName();
    }

    public string GetPlayingAnimationName()
    {
        if (mAnimation == null)
            return string.Empty;

        if (!mAnimation.isPlaying)
            return string.Empty;

        ///检查主动作是否正在播放
        if( mMainClip != null && !string.IsNullOrEmpty(mMainClip.strName))
        {
            if (mAnimation.IsPlaying(mMainClip.strName))
                return mMainClip.strName;
        }

        ///检查一次性动作是否正在播放
        for( int i = 0 ; i<mActionControlList.Count;i++)
        {
            string strActionName = mActionControlList[i];
            if( mAnimation.IsPlaying(strActionName))
            {
                return strActionName;
            }
        }
        return string.Empty;
    }
  
    void OnDestroy()
    {
        ClearAnimationClips();

        mAnimationMaps.Clear();
        mActionControlList.Clear();
        mActionLoadedDict.Clear();
        mActionWaitQueue.Clear();
        if (mAnimation != null)
        {
			GameObject.Destroy(mAnimation);
        }
    }

    /// <summary>
    /// 清除所有动作引用
    /// </summary>
    public void ClearAnimationClips()
    {
        if (mAnimation == null || mActionControlList.Count == 0)
            return;
        
        ///清除所有一次性动作
        for( int i = 0 ;i < mActionControlList.Count; i++)
        {
            string strActionName = mActionControlList[i];
            if(mActionLoadedDict.ContainsKey(strActionName) )
            {
                AnimationClip aClip = mActionLoadedDict[strActionName];
                mAnimation.RemoveClip(aClip);
                mActionLoadedDict.Remove(strActionName);
                DelegateProxy.PopCache(aClip);
            }
        }

        ///清除主动作
        if( mAnimation.clip != null )
        {
            mAnimation.RemoveClip(mAnimation.clip);
            DelegateProxy.PopCache(mAnimation.clip);
            mAnimation.clip = null;
        }
    }

    /// <summary>
    /// 方便取存值
    /// </summary>
    /// <param name="tkey"></param>
    /// <returns></returns>
    public AnimationState this[string tkey]
    {
        get
        {
            if (mAnimation == null)
                return null;

            return mAnimation[tkey];
        }
    }

	/// <summary>
	/// 根据当前出战武学的武器类型重置角色动作
	/// </summary>
	public static AnimationProxy ResetAllActions(GameObject go, List<string> actionNameList, List<string> actionPathList)
	{
		AnimationProxy animProxy = go.GetComponent<AnimationProxy>();
		if (animProxy)
		{
			if(animProxy.mAnimation)
				DestroyImmediate(animProxy.mAnimation);
			DestroyImmediate(animProxy);
		}

		animProxy = go.AddComponent<AnimationProxy>();
		animProxy.mAnimations = new AnimationInfo[actionNameList.Count];
		AnimationInfo animInfo;
		AnimationInfo mainAnimInfo = null;
		for (int i = 0; i < actionNameList.Count; i++)
		{
			animInfo = new AnimationInfo();
			animInfo.strName = actionNameList[i];
			animInfo.strPath = actionPathList[i];
			if (animInfo.strName.Equals("idle"))
			{
				mainAnimInfo = new AnimationInfo();
				mainAnimInfo.strName = actionNameList[i];
				mainAnimInfo.strPath = actionPathList[i];
			}
			animProxy.mAnimations[i] = animInfo;
		}
		animProxy.mMainClip = mainAnimInfo;
		animProxy.Awake();	//AddComponent的时候会执行Awake，但没事数据，现在有数据后，需要再次执行下

		return animProxy;
	}

    /// <summary>
    /// 暂停当前正在播的动作
    /// </summary>
    public void PauseAnim()
    {
        lastAnimName = GetPlayingAnimationName();
        lastAnimSpeed = this[lastAnimName].speed;
        this[lastAnimName].speed = 0;
    }

    /// <summary>
    /// 继续播放之前暂停的动作
    /// </summary>
    public void ContinueAnim()
    {
        this[lastAnimName].speed = lastAnimSpeed;
    }
}