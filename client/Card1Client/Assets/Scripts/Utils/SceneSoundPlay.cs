/// changang1
/// 日期 20150422
/// 实现目标  场景声音播放
using UnityEngine;

public class SceneSoundPlay : MonoBehaviour
{
    public delegate bool PlayObjectAudioDelegate(GameObject oSource, string strAudioId);
    /// <summary>
    /// 声音播放
    /// </summary>
    public static PlayObjectAudioDelegate PlayObjectAudio;

    /// <summary>
    /// 声音ID
    /// </summary>
    public string mstrSoundID;

    public float mfDelay = 0f;
    void Awake()
    {

    }

    void StartSound()
    {
        if (PlayObjectAudio != null)
            PlayObjectAudio(gameObject, mstrSoundID);
    }

    void Update()
    {
        if (mfDelay > 0)
        {
            mfDelay -= Time.deltaTime;
            return;
        }
        StartSound();
        Destroy(this);
    }
}
