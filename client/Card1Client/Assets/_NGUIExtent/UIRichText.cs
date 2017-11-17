using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using LitJson;

public class UIRichText : MonoBehaviour {

	/// <summary>
	/// 初始容器y坐标位置
	/// </summary>
    //private float _widgetOffset_y;
	/// <summary>
	/// 容器sprite
	/// </summary>
	private UISprite mWidget;					
	/// <summary>
	/// 文本label模板
	/// </summary>
	private UILabel mLabel;
	/// <summary>
	/// 图片sprite模板
	/// </summary>
	private UISprite mIcon;

	private string mtext;
	private RichData mRichData;				//富文本数据

	private float mLabeltemp_x;				//模板文本初始位置
	private float mLabeltemp_y;				

	private float mWidth;						//当前宽度
	private float mPositionX;					//当前写到的x坐标
	private float mPositionY;					//当前写到的y坐标

	private float _mRichHeight;				//该组建物体高度
	private float _mRichWidth;			
	private int mreaderIndex = 0;					//读到的索引

    //private bool iswrap = false;				//是否有换行
	private float m_dy = 0;						//多出的高度
	private float msurplus = 5;						//出余量

	private Color _mTextColor = Color.white;		//字体颜色
    private object[] voice_args; 

	void Awake()
	{
        GetRichGameObject();
        //_widgetOffset_y = mWidget.transform.localPosition.y;
	}

    private void GetRichGameObject()
    {
        if (mWidget == null)
            mWidget = transform.GetComponent<UISprite>();
        if (mLabel == null)
        {
            mLabel = transform.FindChild("textlabel").GetComponent<UILabel>();
            mLabel.transform.localPosition = Vector3.zero;
            mLabel.gameObject.SetActive(false);
        }
           
        if (mIcon == null)
        {
            mIcon = transform.FindChild("icon").GetComponent<UISprite>();
            mIcon.transform.localPosition = Vector3.zero;
            mIcon.gameObject.SetActive(false);
        } 
    }

	/// <summary>
	/// 设置组建显示的文本内容
	/// </summary>
	public string text
	{
		set { Parse(value); }
		get { return mtext; }
	}

    public RichData richData
    {
        set { Parse(value); }
        get { return mRichData; }
    }
	/// <summary>
	/// 行间距
	/// </summary>
	public float cellHeight
	{
		set;
		get;
	}

	/// <summary>
	/// 字体颜色
	/// </summary>
	public Color textColor
	{
		set { _mTextColor = value; }
		get{return _mTextColor;}
	}

	/// <summary>
	/// 获取组建的本地坐标
	/// </summary>
	public Vector3 localPosition
	{
		set { mWidget.transform.localPosition = value; }
		get { return mWidget != null ? mWidget.transform.localPosition : Vector3.zero; }
	}

	/// <summary>
	/// 富文本最大宽度
	/// </summary>
	public float maxWidth
	{
		set;
		get;
	}

	/// <summary>
	/// 获取该组建的高度
	/// </summary>
	public float richHeight
	{
		get { return _mRichHeight; }
	}

	/// <summary>
	/// 获取组建宽度
	/// </summary>
	public float richWidth
	{
		get { return _mRichWidth; }
	}

	public OwnerType owerType
	{
		set;
		get;
	}

    private void Parse(RichData richdata)
    {
        GetRichGameObject();
        mRichData = richdata;
        mLabeltemp_x = mLabel.transform.localPosition.x;
        mLabeltemp_y = mLabel.transform.localPosition.y;

        if (owerType == OwnerType.USER)
        {
            mLabeltemp_x = msurplus;
            //mWidget.flip = UIBasicSprite.Flip.Horizontally;
        }
        mPositionX = mLabeltemp_x;
        mPositionY = mLabeltemp_y;

        AddContent(mRichData.richContentList[mreaderIndex]);

        mPositionY -= cellHeight;
        mPositionY -= m_dy;

        float dh = mPositionY + mLabeltemp_y;
        dh = Mathf.Abs(dh);

        _mRichHeight = dh;
        mWidget.height = (int)_mRichHeight;

        _mRichWidth = (int)mWidth;
        _mRichWidth += msurplus;
        if (owerType == OwnerType.USER)
        {
            _mRichWidth += mLabel.transform.localPosition.x * 0.5f;
        }
        mWidget.width = (int)_mRichWidth;

        CreateVoiceLink();
    }

	private void Parse(string value)
	{
		mtext = value;
        RichData data = null;
		try
		{
            data = JsonMapper.ToObject<RichData>(mtext);
		}
		catch (System.Exception ex)
		{

			Debug.LogException(ex);
		}

        if (data == null)
			return;

        if (data.richContentList.Count == 0)
			return;

		if (mLabel == null)
			return;

        Parse(data);
	}

	/// <summary>
	/// 添加内容
	/// </summary>
	/// <param name="content"></param>
	private void AddContent(RichContent content)
	{
		RichEnum richenum = content.richtype;
		switch(richenum)
		{
			case RichEnum.TEXT:
				AddTextContent(content);
				break;
			case RichEnum.ICON:
				AddIconContent(content);
				break;
			case RichEnum.HREF:
				AddHrefContent(content);
				break;
			case RichEnum.BTN:
				AddBtnContent(content);
				break;
			case RichEnum.VOICE:
				AddVoiceContent(content);
				break;
		}

		mreaderIndex++;
		if(mreaderIndex < mRichData.richContentList.Count)
		{
			AddContent(mRichData.richContentList[mreaderIndex]);
		}
	}

    private void CreateVoiceLink()
    {
        Transform voiceTrans = transform.FindChild("voiceobj");
        if (voiceTrans != null)
        {
            UIDragScrollView dragScrollview = UtilTools.SafeAddComponent<UIDragScrollView>(mWidget.gameObject);
            BoxCollider boxcollider = UtilTools.SafeAddComponent<BoxCollider>(mWidget.gameObject);
            boxcollider.size = new Vector3(mWidget.width, mWidget.height, 0);
            boxcollider.center = new Vector3(mWidget.width * 0.5f, -mWidget.height * 0.5f, 0);
            UIButtonColor btnColor = UtilTools.SafeAddComponent<UIButtonColor>(mWidget.gameObject);
            btnColor.duration = 0.1f;
            UILinkText linkText = UtilTools.SafeAddComponent<UILinkText>(mWidget.gameObject);
            linkText.args = voice_args;
            linkText.linktype = LinkType.AUDIO;
            linkText.voiceObject = voiceTrans.gameObject;
        }
    }

	/// <summary>
	/// 设置当前宽度
	/// </summary>
	/// <param name="value"></param>
	private void SetCurrWidth(float value)
	{
		if (value > mWidth)
			mWidth = value;
	}

	private void ParseWrapText(string value, RichContent richcontent)
	{
		mLabel.gameObject.SetActive(true);
		value = value.Replace("\n", "");
		
		NGUIText.fontSize = mLabel.fontSize;
		NGUIText.finalSize = mLabel.fontSize;
		NGUIText.dynamicFont = mLabel.trueTypeFont;
		NGUIText.rectWidth = (int)(maxWidth - mPositionX);
		NGUIText.maxLines = 10000;
		NGUIText.rectHeight = 10000;
		string sbstr = "";
		NGUIText.WrapText(value, out sbstr);

		if (string.IsNullOrEmpty(sbstr))
		{
			SetCurrWidth(mPositionX);
			mPositionX = mLabeltemp_x;
			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			m_dy = 0;
            //iswrap = true;
			ParseWrapText(value, richcontent);
			return;
		}

		GameObject labelgo = NGUITools.AddChild(mWidget.gameObject, mLabel.gameObject);
		labelgo.SetActive(true);
		UILabel label = labelgo.GetComponent<UILabel>();
		labelgo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
        label.color = textColor;

		int index = sbstr.IndexOf("\n");
		string str = "";
		if (index > -1)
		{
			str = sbstr.Substring(0, index);
			if (!string.IsNullOrEmpty(richcontent.color))
			{
				label.text = richcontent.color + str + "[-]";
			}
			else
			{
				label.text = str;
			}
            //iswrap = true;

			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			SetCurrWidth(mPositionX + label.width);
			mPositionX = mLabeltemp_x;
			m_dy = 0;
			sbstr = sbstr.Remove(0, str.Length);
			ParseWrapText(sbstr, richcontent);
		}
		else
		{
			str = sbstr;
			if (!string.IsNullOrEmpty(richcontent.color))
			{
				label.text = richcontent.color + str + "[-]";
			}
			else
			{
				label.text = str;
			}
			int lastLabelwidth = label.width;
			mPositionX += lastLabelwidth;
			SetCurrWidth(mPositionX);
		}
	}

	/// <summary>
	/// 添加纯文本
	/// </summary>
	private void AddTextContent(RichContent content)
	{
		string value = content.content;
		//if (content.linktype != LinkType.NAME && mRichData.ownerType != OwnerType.SYSTEM)
		//	value = XMLManager.filterLoader.FromatDirtyLanguage(value);
		if (string.IsNullOrEmpty(value))
			return;
		ParseWrapText(value, content);
	}

	/// <summary>
	/// 添加图片
	/// </summary>
	private void AddIconContent(RichContent content)
	{
		GameObject icongo = NGUITools.AddChild(mWidget.gameObject, mIcon.gameObject);
		icongo.SetActive(true);
		UISprite sprite = icongo.GetComponent<UISprite>();
		sprite.spriteName = content.content;
		sprite.MakePixelPerfect();
		int width = sprite.width;
		int height = sprite.height;

		float dy = height - cellHeight;

		float surplus = maxWidth - mPositionX;		//一行剩余空间
		if(surplus >= width)
		{
			icongo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
			if (dy > 0)
			{
				m_dy = m_dy > dy ? m_dy : dy;
			}
		}
		else
		{
			mPositionX = mLabeltemp_x;
			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			m_dy = dy > 0 ? dy : 0;

			icongo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
            //iswrap = true;
		}
		
		float iconwidth = width;
		mPositionX += iconwidth;
		SetCurrWidth(mPositionX);
	}

	/// <summary>
	/// 添加超链接文本
	/// </summary>
	private void AddHrefContent(RichContent content)
	{
		string value = content.content;
		//if(mRichData.ownerType != OwnerType.SYSTEM)
		//	value = XMLManager.filterLoader.FromatDirtyLanguage(value);
		if (string.IsNullOrEmpty(value))
			return;
		if (content.linktype == LinkType.NAME)
            value = "" + value + ":";
		else
            value = "[" + content.content + "]";
		ParseWrapHref(value,content);
	}

	private void ParseWrapHref(string value, RichContent content)
	{
		mLabel.gameObject.SetActive(true);
		value = value.Replace("\n", "");

		NGUIText.fontSize = mLabel.fontSize;
		NGUIText.finalSize = mLabel.fontSize;
		NGUIText.dynamicFont = mLabel.trueTypeFont;
		NGUIText.rectWidth = (int)(maxWidth - mPositionX);
		NGUIText.maxLines = 10000;
		NGUIText.rectHeight = 10000;
		string sbstr = "";
		NGUIText.WrapText(value, out sbstr);

		if(string.IsNullOrEmpty(sbstr))
		{
			SetCurrWidth(mPositionX);
			mPositionX = mLabeltemp_x;
			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			m_dy = 0;
            //iswrap = true;
			ParseWrapHref(value, content);
			return;
		}

		GameObject labelgo = NGUITools.AddChild(mWidget.gameObject, mLabel.gameObject);
		labelgo.SetActive(true);
		UILabel label = labelgo.GetComponent<UILabel>();
		labelgo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);

		UIDragScrollView dragScrollview = UtilTools.SafeAddComponent<UIDragScrollView>(labelgo);

		UIButtonColor btnColor = UtilTools.SafeAddComponent<UIButtonColor>(labelgo);
		btnColor.duration = 0.1f;
		btnColor.defaultColor = UtilTools.GetColorByLinkType(content);

		UILinkText linkText = UtilTools.SafeAddComponent<UILinkText>(labelgo);
		linkText.args = content.args;
		linkText.linktype = content.linktype;
		if (content.linktype == LinkType.AUDIO)
			label.color = textColor;
		else
			label.color = UtilTools.GetColorByLinkType(content);

		int index = sbstr.IndexOf("\n");
		string str = "";
		if (index > -1)
		{
			str = sbstr.Substring(0, index);
			label.text = str;

			BoxCollider boxcollider = UtilTools.SafeAddComponent<BoxCollider>(labelgo);
			boxcollider.size = new Vector3(label.width, label.height, 0);
			boxcollider.center = new Vector3(label.width * 0.5f, -label.height * 0.5f, 0);

			SetCurrWidth(mPositionX + label.width);
			mPositionX = mLabeltemp_x;
			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			m_dy = 0;
            //iswrap = true;
			sbstr = sbstr.Remove(0, str.Length);
			ParseWrapHref(sbstr, content);
		}
		else
		{
			str = sbstr;
			label.text = str;

			BoxCollider boxcollider = UtilTools.SafeAddComponent<BoxCollider>(labelgo);
			boxcollider.size = new Vector3(label.width, label.height, 0);
			boxcollider.center = new Vector3(label.width * 0.5f, -label.height * 0.5f, 0);

			int lastLabelwidth = label.width;
			mPositionX += lastLabelwidth;
			SetCurrWidth(mPositionX);
		}

	}

	/// <summary>
	/// 添加按钮
	/// </summary>
	private void AddBtnContent(RichContent content)
	{
		GameObject icongo = NGUITools.AddChild(mWidget.gameObject, mIcon.gameObject);
		icongo.SetActive(true);
		UISprite sprite = icongo.GetComponent<UISprite>();
		sprite.spriteName = content.content;
		sprite.MakePixelPerfect();
		int width = sprite.width;
		int height = sprite.height;

		BoxCollider boxcollider = UtilTools.SafeAddComponent<BoxCollider>(icongo);
		boxcollider.size = new Vector3(sprite.width, sprite.height, 0);
		boxcollider.center = new Vector3(sprite.width * 0.5f, -sprite.height * 0.5f, 0);

		UIButtonColor btnColor = UtilTools.SafeAddComponent<UIButtonColor>(icongo);
		btnColor.duration = 0.1f;

		UILinkText linkText = UtilTools.SafeAddComponent<UILinkText>(icongo);
		linkText.args = content.args;
		linkText.linktype = content.linktype;

		UIDragScrollView dragScrollview = UtilTools.SafeAddComponent<UIDragScrollView>(icongo);

		float dy = height - cellHeight;
		float surplus = maxWidth - mPositionX;		//一行剩余空间
		if (surplus >= width)
		{
			icongo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
			if (dy > 0)
			{
				m_dy = m_dy > dy ? m_dy : dy;
			}
		}
		else
		{
			mPositionX = mLabeltemp_x;
			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			m_dy = dy > 0 ? dy : 0;
            //iswrap = true;

			icongo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
		}

		float iconwidth = width;
		mPositionX += iconwidth;
		SetCurrWidth(mPositionX);
	}

	/// <summary>
	/// 添加语音
	/// </summary>
	private void AddVoiceContent(RichContent content)
	{
		GameObject icongo = NGUITools.AddChild(mWidget.gameObject, mIcon.gameObject);
		icongo.SetActive(true);
		UISprite sprite = icongo.GetComponent<UISprite>();
		sprite.spriteName = content.content;
        sprite.MakePixelPerfect();
		int width = sprite.width;
		int height = sprite.height;
        icongo.name = "voiceobj";

		BoxCollider boxcollider = UtilTools.SafeAddComponent<BoxCollider>(icongo);
		boxcollider.size = new Vector3(sprite.width, sprite.height, 0);
		boxcollider.center = new Vector3(sprite.width * 0.5f, -sprite.height * 0.5f, 0);

        //UISpriteAnimation anim = UtilTools.SafeAddComponent<UISpriteAnimation>(icongo);
        //anim.namePrefix = content.anim_namePrefix;
        //anim.loop = true;
        //anim.framesPerSecond = 30;

		UILinkText linkText = UtilTools.SafeAddComponent<UILinkText>(icongo);
		linkText.args = content.args;
		linkText.linktype = content.linktype;
        linkText.voiceObject = icongo;
        voice_args = content.args;

		UIDragScrollView dragScrollview = UtilTools.SafeAddComponent<UIDragScrollView>(icongo);

		float dy = height - cellHeight;
		float surplus = maxWidth - mPositionX;		//一行剩余空间
		if (surplus >= width)
		{
			icongo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
			if (dy > 0)
			{
				m_dy = m_dy > dy ? m_dy : dy;
			}
		}
		else
		{
			mPositionX = mLabeltemp_x;
			mPositionY = mPositionY - cellHeight - m_dy - cellHeight + NGUIText.fontSize;
			m_dy = dy > 0 ? dy : 0;
            //iswrap = true;
			
			icongo.transform.localPosition = new Vector3(mPositionX, mPositionY, 0);
		}
		float iconwidth = width;
		mPositionX += iconwidth;
		SetCurrWidth(mPositionX);
	}

    public static RichContent CreateRichContent(string content, RichEnum richEnum = RichEnum.TEXT, LinkType linkType = LinkType.NONE, params object[] args)
    {
        RichContent rc = new RichContent();
        rc.content = content;
        rc.richtype = richEnum;
        rc.linktype = linkType;
        rc.args = args;
        return rc;
    }
}

/// <summary>
///富文本数据
/// </summary>
public class RichData
{
	public RichData() { }
	public ChannelType channelType;
	public OwnerType ownerType;
	public List<RichContent> richContentList = new List<RichContent>();
}

/// <summary>
/// 一段富文本对象
/// </summary>
public class RichContent
{
	public RichEnum richtype = RichEnum.TEXT;
	public LinkType linktype = LinkType.NONE;
	public object[] args;
	public string content;
    //public string anim_namePrefix;
	public string color;
}

/// <summary>
/// 拥有着类型
/// </summary>
public enum OwnerType
{
	PLAYER,				//普通玩家
	USER,					//自己
	SYSTEM,				//系统
}

/// <summary>
/// 频道类型
/// </summary>
public enum ChannelType
{
	WHISPER = 3,						//密语
	RANKS = 4,							//队伍聊天
	GANGDOM = 6,					//帮会
	WORLD = 7,						//世界频道
	RANKS_INFO = 8,				//组队信息频道
	SYSTEM = 9,							//系统频道
}

/// <summary>
/// 可链接的类型
/// </summary>
public enum LinkType
{
	NONE,
	PROP,						//物品类型链接
	REQUEST,					//邀请类型链接
	AUDIO,						//声音类型链接
	NAME,						//玩家名
	MINEREQUEST,//挖宝请求
    ESCORT,                    //镖车定位链接
}

/// <summary>
/// 富文本类型
/// </summary>
public enum RichEnum
{
	ICON,							//图片
	TEXT,							//文字
	HREF,							//超链接
	BTN,								//按钮
	VOICE							//语音
}
