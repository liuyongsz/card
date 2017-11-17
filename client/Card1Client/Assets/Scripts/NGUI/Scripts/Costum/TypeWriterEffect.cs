//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;

/// <summary>
/// Trivial script that fills the label's contents gradually, as if someone was typing.
/// </summary>

///修改人：zhangrj
///修改功能： 分发事件，鼠标点击响应
[RequireComponent(typeof(UILabel))]
[AddComponentMenu("NGUI/TypeWriterEffect")]
public class TypeWriterEffect : MonoBehaviour
{
    public System.Action WriteComplete;
    public int charsPerSecond = 20;
    /// <summary>
    /// 是否等待
    /// </summary>
    public bool wait = false;

    UILabel mLabel;
    string[] mText;
    int mOffset = 0;
    float mNextChar = 0f;

    /// <summary>
    /// 当前文字索引
    /// </summary>
    int index = 0;
    /// <summary>
    /// 最大数量
    /// </summary>
    int maxCount = 1;


    void Awake()
    {

    }
    /// <summary>
    /// 初使化
    /// </summary>
    /// <param name="text"></param>
    /// <param name="WriteComplete"></param>
    public void Init(string text, System.Action WriteComplete, bool wait = false)
    {
        index = 0;
        maxCount = 1;
        this.wait = wait;
        mText = new string[1];
        mText[index] = text;
        this.WriteComplete = WriteComplete;
        mLabel = GetComponent<UILabel>();
        if (mLabel == null)
            mLabel = gameObject.AddComponent<UILabel>();
    }

    /// <summary>
    /// 初使化
    /// </summary>
    /// <param name="text"></param>
    /// <param name="WriteComplete"></param>
    public void Init(string[] text, System.Action WriteComplete, bool wait = false)
    {
        index = 0;
        maxCount = text.Length;
        this.wait = wait;
        mText = text;
        this.WriteComplete = WriteComplete;
        mLabel = GetComponent<UILabel>();
        if (mLabel == null)
            mLabel = gameObject.AddComponent<UILabel>();
    }

    void Update()
    {
        if (mLabel == null)
        {
            mLabel = GetComponent<UILabel>();
            index = 0;
            maxCount = 1;
            this.wait = false;
            mText = new string[1];
            mText[index] = mLabel.processedText;

        }

        if (mOffset < mText[index].Length)
        {
            if (mNextChar <= RealTime.time)
            {
                charsPerSecond = Mathf.Max(1, charsPerSecond);

                // Periods and end-of-line characters should pause for a longer time.
                float delay = 1f / charsPerSecond;
                char c = mText[index][mOffset];
                if (c == '.' || c == '\n' || c == '!' || c == '?') delay *= 4f;

                // Automatically skip all symbols
                NGUIText.ParseSymbol(mText[index], ref mOffset);

                mNextChar = RealTime.time + delay;
                mLabel.text = mText[index].Substring(0, ++mOffset);
            }
        }
        else
        {
            if (!wait)
            {
                index++;
                if (index >= maxCount)
                {
                    if (WriteComplete != null)
                    {
                        WriteComplete();
                    }
                    Destroy(this);
                }
                else
                {
                    mOffset = 0;
                }
            }
        }

        if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
        {
            if (mOffset < mText[index].Length)
            {
                mLabel.text = mText[index];
                mOffset = mText[index].Length;
            }
            else
            {
                index++;
                if (index >= maxCount)
                {
                    if (WriteComplete != null)
                    {
                        WriteComplete();
                    }
                    Destroy(this);
                }
                else
                {
                    mOffset = 0;
                }
            }
        }
    }
}
