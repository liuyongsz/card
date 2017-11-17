//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using System.Collections.Generic;


/// <summary>
/// Sprite is a textured element in the UI hierarchy.
/// </summary>

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/NGUI Sprite")]
public class UISprite : UIWidget
{
    public enum Type
    {
        Simple,
        Sliced,
        Tiled,
        Filled,
        Advanced,
        Custom,
    }

    public enum FillDirection
    {
        Horizontal,
        Vertical,
        Radial90,
        Radial180,
        Radial360,
    }

    public enum AdvancedType
    {
        Invisible,
        Sliced,
        Tiled,
    }

    public enum Flip
    {
        Nothing,
        Horizontally,
        Vertically,
        Both,
    }

    public enum CustomType
    {
        Sliced,
        Tiled,
    }
    // Cached and saved values
	[HideInInspector][SerializeField] UIAtlas mAtlas;
	[HideInInspector][SerializeField] string mSpriteName;
	[HideInInspector][SerializeField] Type mType = Type.Simple;
	[HideInInspector][SerializeField] FillDirection mFillDirection = FillDirection.Radial360;
#if !UNITY_3_5
	[Range(0f, 1f)]
#endif
	[HideInInspector][SerializeField] float mFillAmount = 1.0f;
	[HideInInspector][SerializeField] bool mInvert = false;
    [HideInInspector][SerializeField] Flip mFlip = Flip.Nothing;
    [HideInInspector][SerializeField] bool mUseCircle = false;
    [HideInInspector][SerializeField] int mCircleRadius = 0;
    [HideInInspector][SerializeField] bool mMirrorHorizontal = false;
    [HideInInspector][SerializeField] bool mMirrorVertical =  false;

	// Deprecated, no longer used
	[HideInInspector][SerializeField] bool mFillCenter = true;

    protected UISpriteData mSprite;
    protected Rect mInnerUV = new Rect();
    protected Rect mOuterUV = new Rect();

    bool mSpriteSet = false;

    /// <summary>
    /// When the sprite type is advanced, this determines whether the center is tiled or sliced.
    /// </summary>

    public AdvancedType centerType = AdvancedType.Sliced;

    /// <summary>
    /// When the sprite type is advanced, this determines whether the left edge is tiled or sliced.
    /// </summary>

    public AdvancedType leftType = AdvancedType.Sliced;

    /// <summary>
    /// When the sprite type is advanced, this determines whether the right edge is tiled or sliced.
    /// </summary>

    public AdvancedType rightType = AdvancedType.Sliced;

    /// <summary>
    /// When the sprite type is advanced, this determines whether the bottom edge is tiled or sliced.
    /// </summary>

    public AdvancedType bottomType = AdvancedType.Sliced;

    /// <summary>
    /// When the sprite type is advanced, this determines whether the top edge is tiled or sliced.
    /// </summary>

    public AdvancedType topType = AdvancedType.Sliced;

    /// <summary>
    /// How the sprite is drawn.
    /// </summary>

    public virtual Type type
    {
        get
        {
            return mType;
        }
        set
        {
            if (mType != value)
            {
                mType = value;
                MarkAsChanged();
            }
        }
    }

    public bool MirrorHorizontal
    {
        get
        {
            return mMirrorHorizontal;
        }
        set
        {
            mMirrorHorizontal = value;
            MarkAsChanged();
        }
    }

    public bool MirrorVertical
    {
        get
        {
            return mMirrorVertical;
        }
        set
        {
            mMirrorVertical = value;
            MarkAsChanged();
        }
    }

    /// <summary>
    /// Retrieve the material used by the font.
    /// </summary>

    public override Material material 
    { 
        get 
        {
            return (mAtlas != null) ? mAtlas.spriteMaterial : null;
        } 
    }

    public bool Additive = false;
    private static Shader mAppointShader = null;
    override public Shader shader
    {
        get
        {
            if(Additive)
            {
                if (mAppointShader == null)
                    mAppointShader = Resources.Load<Shader>("Shaders/Unlit - Additive Colored");

                return mAppointShader;
            }
                
            Material mat = material;
            return (mat != null) ? mat.shader : null;
        }
        set
        {
            throw new System.NotImplementedException(GetType() + " has no shader setter");
        }
    }

    /// <summary>
    /// Atlas used by this widget.
    /// </summary>

    public UIAtlas atlas
    {
        get
        {
            return mAtlas;
        }
        set
        {
            if (mAtlas != value)
            {
                RemoveFromPanel();

                mAtlas = value;
                mSpriteSet = false;
                mSprite = null;

                // Automatically choose the first sprite
                if (string.IsNullOrEmpty(mSpriteName))
                {
                    if (mAtlas != null && mAtlas.spriteList.Count > 0)
                    {
                        SetAtlasSprite(mAtlas.spriteList[0]);
                        mSpriteName = mSprite.name;
                    }
                }

                // Re-link the sprite
                if (!string.IsNullOrEmpty(mSpriteName))
                {
                    string sprite = mSpriteName;
                    mSpriteName = string.Empty;
                    spriteName = sprite;
                    MarkAsChanged();
                }
            }
        }
    }

    /// <summary>
    /// Sprite within the atlas used to draw this widget.
    /// </summary>

    public string spriteName
    {
        get
        {
            return mSpriteName;
        }
        set
        {
            if (string.IsNullOrEmpty(value))
            {
                // If the sprite name hasn't been set yet, no need to do anything
                if (string.IsNullOrEmpty(mSpriteName))
                    return;

                // Clear the sprite name and the sprite reference
                mSpriteName = string.Empty;
                mSprite = null;
                mChanged = true;
                mSpriteSet = false;
            }
            else if (mSpriteName != value)
            {
                // If the sprite name changes, the sprite reference should also be updated
                mSpriteName = value;
                mSprite = null;
                mChanged = true;
                mSpriteSet = false;
            }
        }
    }

    /// <summary>
    /// Is there a valid sprite to work with?
    /// </summary>

    public bool isValid { get { return GetAtlasSprite() != null; } }

    /// <summary>
    /// Whether the center part of the sprite will be filled or not. Turn it off if you want only to borders to show up.
    /// </summary>

    [System.Obsolete("Use 'centerType' instead")]
    public bool fillCenter
    {
        get
        {
            return centerType != AdvancedType.Invisible;
        }
        set
        {
            if (value != (centerType != AdvancedType.Invisible))
            {
                centerType = value ? AdvancedType.Sliced : AdvancedType.Invisible;
                MarkAsChanged();
            }
        }
    }

    /// <summary>
    /// Direction of the cut procedure.
    /// </summary>

    public FillDirection fillDirection
    {
        get
        {
            return mFillDirection;
        }
        set
        {
            if (mFillDirection != value)
            {
                mFillDirection = value;
                mChanged = true;
            }
        }
    }

    /// <summary>
    /// Amount of the sprite shown. 0-1 range with 0 being nothing shown, and 1 being the full sprite.
    /// </summary>

    public float fillAmount
    {
        get
        {
            return mFillAmount;
        }
        set
        {
            float val = Mathf.Clamp01(value);

            if (mFillAmount != val)
            {
                mFillAmount = val;
                mChanged = true;
            }
        }
    }

    /*******************************************************/
    /// <summary>
    /// 遮罩数量（最多两个）
    /// </summary>
    int maskCount = 1;

    public int MaskCount
    {
        get { return maskCount; }
        set
        {
            if (value < 0 || value > 2)
                return;
            if (maskCount != value)
            {
                maskCount = value;
                mChanged = true;
            }
        }
    }

    /// <summary>
    /// 自定义填充值1
    /// x,y表示position，z,w表示size
    /// </summary>
    [HideInInspector]
    [SerializeField]
    Vector4 customValue1 = Vector4.zero;

    public Vector4 CustomValue1
    {
        get { return customValue1; }
        set
        {
            if (value.z < 0) value.z = 0;
            if (value.w < 0) value.w = 0;

            if (customValue1 != value)
            {
                customValue1 = value;
                mChanged = true;
            }
        }
    }

    /// <summary>
    /// 自定义填充值1
    /// </summary>
    [HideInInspector]
    [SerializeField]
    Vector4 customValue2 = Vector4.zero;

    public Vector4 CustomValue2
    {
        get { return customValue2; }
        set
        {
            if (value.z < 0) value.z = 0;
            if (value.w < 0) value.w = 0;

            if (customValue2 != value)
            {
                customValue2 = value;
                mChanged = true;
            }
        }
    }

    /// <summary>
    /// Whether the sprite should be filled in the opposite direction.
    /// </summary>

    public bool invert
    {
        get
        {
            return mInvert;
        }
        set
        {
            if (mInvert != value)
            {
                mInvert = value;
                mChanged = true;
            }
        }
    }

    /// <summary>
    /// Sliced sprites generally have a border. X = left, Y = bottom, Z = right, W = top.
    /// </summary>

    public override Vector4 border
    {
        get
        {
            if (type == Type.Sliced || type == Type.Advanced || type == Type.Custom)
            {
                UISpriteData sp = GetAtlasSprite();
                if (sp == null) return Vector2.zero;
                Vector4 vTemp = Vector4.zero;
                vTemp.x = sp.borderLeft;
                vTemp.y = sp.borderBottom;
                vTemp.z = sp.borderRight;
                vTemp.w = sp.borderTop;
                return vTemp;
            }
            return base.border;
        }
    }

    /// <summary>
    /// Minimum allowed width for this widget.
    /// </summary>

    override public int minWidth
    {
        get
        {
            if (type == Type.Sliced || type == Type.Advanced)
            {
                Vector4 b = border;
                if (atlas != null) b *= atlas.pixelSize;
                int min = Mathf.RoundToInt(b.x + b.z);

                UISpriteData sp = GetAtlasSprite();
                if (sp != null) min += sp.paddingLeft + sp.paddingRight;

                return Mathf.Max(base.minWidth, ((min & 1) == 1) ? min + 1 : min);
            }
            return base.minWidth;
        }
    }

    /// <summary>
    /// Minimum allowed height for this widget.
    /// </summary>

    override public int minHeight
    {
        get
        {
            if (type == Type.Sliced || type == Type.Advanced)
            {
                Vector4 b = border;
                if (atlas != null) b *= atlas.pixelSize;
                int min = Mathf.RoundToInt(b.y + b.w);

                UISpriteData sp = GetAtlasSprite();
                if (sp != null) min += sp.paddingTop + sp.paddingBottom;

                return Mathf.Max(base.minHeight, ((min & 1) == 1) ? min + 1 : min);
            }
            return base.minHeight;
        }
    }

#if UNITY_EDITOR
    /// <summary>
    /// Keep sane values.
    /// </summary>

    protected override void OnValidate()
    {
        base.OnValidate();
        mFillAmount = Mathf.Clamp01(mFillAmount);
    }
#endif

    /// <summary>
    /// Retrieve the atlas sprite referenced by the spriteName field.
    /// </summary>

    public UISpriteData GetAtlasSprite()
    {
        if (!mSpriteSet) mSprite = null;

        if (mSprite == null && mAtlas != null)
        {
            if (!string.IsNullOrEmpty(mSpriteName))
            {
                UISpriteData sp = mAtlas.GetSprite(mSpriteName);
                if (sp == null) return null;
                SetAtlasSprite(sp);
            }

            if (mSprite == null && mAtlas.spriteList.Count > 0)
            {
                UISpriteData sp = mAtlas.spriteList[0];
                if (sp == null) return null;
                SetAtlasSprite(sp);

                if (mSprite == null)
                {
                    LogSystem.LogWarning(mAtlas.name, " seems to have a null sprite!");
                    return null;
                }
                mSpriteName = mSprite.name;
            }
        }
        return mSprite;
    }

    /// <summary>
    /// Set the atlas sprite directly.
    /// </summary>

    protected void SetAtlasSprite(UISpriteData sp)
    {
        mChanged = true;
        mSpriteSet = true;

        if (sp != null)
        {
            mSprite = sp;
            mSpriteName = mSprite.name;
        }
        else
        {
            mSpriteName = (mSprite != null) ? mSprite.name : string.Empty;
            mSprite = sp;
        }
    }

    /// <summary>
    /// Adjust the scale of the widget to make it pixel-perfect.
    /// </summary>

    public override void MakePixelPerfect()
    {
        if (!isValid)
            return;
        base.MakePixelPerfect();

        UISpriteData sp = GetAtlasSprite();
        if (sp == null)
            return;

        UISprite.Type t = type;

        if (t == Type.Simple || t == Type.Filled || !sp.hasBorder)
        {
            Texture tex = mainTexture;

            if (tex != null && sp != null)
            {
                int x = Mathf.RoundToInt(atlas.pixelSize * (sp.width + sp.paddingLeft + sp.paddingRight));
                int y = Mathf.RoundToInt(atlas.pixelSize * (sp.height + sp.paddingTop + sp.paddingBottom));

                if ((x & 1) == 1) ++x;
                if ((y & 1) == 1) ++y;

                width = x;
                height = y;
            }
        }
    }
    public delegate void CallLoadAsset(string strFileName, AssetCallBack callback);
    public static CallLoadAsset monLoadAsset = null;
    public static void SetLoadAssetCall(CallLoadAsset call)
    {
        monLoadAsset = call;
    }
    private void LoadAtlas(string strAtlasName)
    {
        if (Application.isPlaying)
        {
            string strFileName = "Parts/Atlas/" + strAtlasName;
            if (monLoadAsset != null)
            {
                monLoadAsset(strFileName, OnFileLoaded);
            }
            else
            {
                ///编辑器模式
                Object oAsset = Resources.Load(strFileName);
                OnFileLoaded(oAsset);
            }
        }
#if UNITY_EDITOR
        else
        {
            string strFileName = "Assets/Resources/Parts/Atlas/" + strAtlasName+".asset";
            Object oAsset = UnityEditor.AssetDatabase.LoadMainAssetAtPath(strFileName) as Object;
            OnFileLoaded(oAsset);
        }
#endif   
    }
#if UNITY_EDITOR 
    /// <summary>
    /// 链接对象列表，图集，字体，图集字体
    /// </summary>
    static List<Object> mLoadedObject = new List<Object>();
    /// <summary>
    /// 添加链接对象
    /// </summary>
    /// <param name="atlas"></param>
    private static void AppendLinkObject(Object atlas)
    {
        if (!Application.isPlaying)
            return;

        if (atlas == null)
            return;

        if (!mLoadedObject.Contains(atlas))
        {
            mLoadedObject.Add(atlas);
        }
    }
    /// <summary>
    /// 停止运行释放所有链接对象
    /// </summary>
    public static void ClearLinkObjects()
    {
        if (!Application.isPlaying)
            return;

        for (int i = 0; i < mLoadedObject.Count; i++)
        {
            Object obj = mLoadedObject[i];
            if (obj == null)
                continue;

            if (obj is UIAtlas)
            {
                ((UIAtlas)obj).spriteMaterial = null;
            }
        }
        mLoadedObject.Clear();
    }
#endif
    /// <summary>
    /// 网格加载结束
    /// </summary>
    /// <param name="args"></param>
    private void OnFileLoaded(params object[] args)
    {
        AtlasAsset atlasAsset = args[0] as AtlasAsset;
        if (atlasAsset == null)
            return;

        if (atlas != null)
        {
#if UNITY_EDITOR
            AppendLinkObject(atlas);
#endif
            atlas.spriteMaterial = atlasAsset.material;
        }
    }
    /// <summary>
    /// Auto-upgrade.
    /// </summary>

    protected override void OnInit()
    {
        if (atlas != null && atlas.spriteMaterial == null)
        {
            ///加载对应的材质球
            LoadAtlas(atlas.name);
        }

        if (!mFillCenter)
        {
            mFillCenter = true;
            centerType = AdvancedType.Invisible;
#if UNITY_EDITOR
            NGUITools.SetDirty(this);
#endif
        }
        base.OnInit();
    }

    /// <summary>
    /// Update the UV coordinates.
    /// </summary>

    protected override void OnUpdate()
    {
        base.OnUpdate();

        if (mChanged || !mSpriteSet)
        {
            mSpriteSet = true;
            mSprite = null;
            mChanged = true;
        }
    }

    /// <summary>
    /// Virtual function called by the UIPanel that fills the buffers.
    /// </summary>

    public override void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        Texture tex = mainTexture;

        if (tex != null)
        {
            if (mSprite == null) mSprite = atlas.GetSprite(spriteName);
            if (mSprite == null)
                return;

            mOuterUV.Set(mSprite.x, mSprite.y, mSprite.width, mSprite.height);
            mInnerUV.Set(mSprite.x + mSprite.borderLeft, mSprite.y + mSprite.borderTop,
                mSprite.width - mSprite.borderLeft - mSprite.borderRight,
                mSprite.height - mSprite.borderBottom - mSprite.borderTop);

            mOuterUV = NGUIMath.ConvertToTexCoords(mOuterUV, tex.width, tex.height);
            mInnerUV = NGUIMath.ConvertToTexCoords(mInnerUV, tex.width, tex.height);
        }

        switch (type)
        {
            case Type.Simple:
                SimpleFill(verts, uvs, cols);
                break;

            case Type.Sliced:
                SlicedFill(verts, uvs, cols);
                break;

            case Type.Filled:
                FilledFill(verts, uvs, cols);
                break;

            case Type.Tiled:
                TiledFill(verts, uvs, cols);
                break;

            case Type.Advanced:
                AdvancedFill(verts, uvs, cols);
                break;

            case Type.Custom:
                CustomFill(verts, uvs, cols);
                break;

        }
    }

    #region Various fill functions

    // Static variables to reduce garbage collection
    static Vector2[] mTempPos = new Vector2[4];
    static Vector2[] mTempUVs = new Vector2[4];

    /// <summary>
    /// Sprite's dimensions used for drawing. X = left, Y = bottom, Z = right, W = top.
    /// This function automatically adds 1 pixel on the edge if the sprite's dimensions are not even.
    /// It's used to achieve pixel-perfect sprites even when an odd dimension sprite happens to be centered.
    /// </summary>

    public override Vector4 drawingDimensions
    {
        get
        {
            Vector2 offset = pivotOffset;

            float x0 = -offset.x * mWidth;
            float y0 = -offset.y * mHeight;
            float x1 = x0 + mWidth;
            float y1 = y0 + mHeight;

            if (GetAtlasSprite() != null && mType != Type.Tiled)
            {
                int padLeft = mSprite.paddingLeft;
                int padBottom = mSprite.paddingBottom;
                int padRight = mSprite.paddingRight;
                int padTop = mSprite.paddingTop;

                int w = mSprite.width + padLeft + padRight;
                int h = mSprite.height + padBottom + padTop;
                float px = 1f;
                float py = 1f;

                if (w > 0 && h > 0 && (mType == Type.Simple || mType == Type.Filled))
                {
                    if ((w & 1) != 0) ++padRight;
                    if ((h & 1) != 0) ++padTop;

                    px = (1f / w) * mWidth;
                    py = (1f / h) * mHeight;
                }

                if (mFlip == Flip.Horizontally || mFlip == Flip.Both)
                {
                    x0 += padRight * px;
                    x1 -= padLeft * px;
                }
                else
                {
                    x0 += padLeft * px;
                    x1 -= padRight * px;
                }

                if (mFlip == Flip.Vertically || mFlip == Flip.Both)
                {
                    y0 += padTop * py;
                    y1 -= padBottom * py;
                }
                else
                {
                    y0 += padBottom * py;
                    y1 -= padTop * py;
                }
            }

            Vector4 br = border * atlas.pixelSize;

            float fw = br.x + br.z;
            float fh = br.y + br.w;

            float vx = Mathf.Lerp(x0, x1 - fw, mDrawRegion.x);
            float vy = Mathf.Lerp(y0, y1 - fh, mDrawRegion.y);
            float vz = Mathf.Lerp(x0 + fw, x1, mDrawRegion.z);
            float vw = Mathf.Lerp(y0 + fh, y1, mDrawRegion.w);
            Vector4 vTemp = Vector4.zero;
            vTemp.x =vx ;
            vTemp.y =vy ;
            vTemp.z = vz;
            vTemp.w = vw;
            return vTemp;
        }
    }

    /// <summary>
    /// Convenience function that returns the drawn UVs after flipping gets considered.
    /// X = left, Y = bottom, Z = right, W = top.
    /// </summary>

    protected virtual Vector4 drawingUVs
    {
        get
        {
            Vector4 vTemp = Vector4.zero;
            switch (mFlip)
            {
                case Flip.Horizontally:
                    {
                        vTemp.x =mOuterUV.xMax ;
                        vTemp.y =mOuterUV.yMin ;
                        vTemp.z =mOuterUV.xMin ;
                        vTemp.w = mOuterUV.yMax;
                    }
                    return vTemp;
                case Flip.Vertically: 
                      {
                          vTemp.x = mOuterUV.xMin;
                          vTemp.y = mOuterUV.yMax;
                          vTemp.z = mOuterUV.xMax;
                          vTemp.w = mOuterUV.yMin;
                    }
                    return vTemp;
                    
                case Flip.Both: 
                    {
                        vTemp.x = mOuterUV.xMax;
                        vTemp.y = mOuterUV.yMax;
                        vTemp.z = mOuterUV.xMin;
                        vTemp.w = mOuterUV.yMin;
                    }
                    return vTemp;
                default: 
                     {
                         vTemp.x = mOuterUV.xMin;
                         vTemp.y = mOuterUV.yMin;
                         vTemp.z = mOuterUV.xMax;
                         vTemp.w = mOuterUV.yMax;
                    }
                    return vTemp;
            }
        }
    }

    /// <summary>
    /// Regular sprite fill function is quite simple.
    /// </summary>

    protected void SimpleFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        Vector4 v = drawingDimensions;
        Vector4 u = drawingUVs;
        Vector3 vTemp = Vector3.zero;

        if (mUseCircle)
        {
            int splitCount = 36;
            float angle = 0;
            Color colF2;
            Color col2;
            Vector2 uvMid = new Vector2((u.x + u.z) / 2, (u.y + u.w) / 2);
            Vector2 uvLen = new Vector2((u.z - u.x) / 2, (u.w - u.y) / 2);
            uvLen.x *= 2 * mCircleRadius / (v.z - v.x);
            uvLen.y *= 2 * mCircleRadius / (v.z - v.y);
            int count = 0;
            for (int i = 0; i < splitCount / 2; i++)
            {
                verts.Add(Vector2.zero);
                uvs.Add(uvMid);

                angle = 2 * Mathf.PI / splitCount * count;
                vTemp.x = mCircleRadius * Mathf.Cos(angle);
                vTemp.y = mCircleRadius * Mathf.Sin(angle);
                verts.Add(vTemp);

                vTemp.x = uvLen.x * Mathf.Cos(angle) + uvMid.x;
                vTemp.y = uvLen.y * Mathf.Sin(angle) + uvMid.y;
                uvs.Add(vTemp);

                count++;
                angle = 2 * Mathf.PI / splitCount * count;
                vTemp.x = mCircleRadius * Mathf.Cos(angle);
                vTemp.y = mCircleRadius * Mathf.Sin(angle);
                verts.Add(vTemp);

                vTemp.x = uvLen.x * Mathf.Cos(angle) + uvMid.x;
                vTemp.y = uvLen.y * Mathf.Sin(angle) + uvMid.y;
                uvs.Add(vTemp);

                count++;
                angle = 2 * Mathf.PI / splitCount * count;
                vTemp.x = mCircleRadius * Mathf.Cos(angle);
                vTemp.y = mCircleRadius * Mathf.Sin(angle);
                verts.Add(vTemp);

                vTemp.x = uvLen.x * Mathf.Cos(angle) + uvMid.x;
                vTemp.y = uvLen.y * Mathf.Sin(angle) + uvMid.y;
                uvs.Add(vTemp);

                colF2 = color;
                colF2.a = finalAlpha;
                col2 = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF2) : colF2;
                cols.Add(col2);
                cols.Add(col2);
                cols.Add(col2);
                cols.Add(col2);
            }
            return;
        }

        if(mMirrorHorizontal)
            u.z = u.z - (u.z - u.x) * 1.0f / mSprite.width;
        if(mMirrorVertical)
            u.y = u.y + (u.w - u.y) * 1.0f / mSprite.height;
        
        vTemp.x = v.x;
        vTemp.y = v.y;
        verts.Add(vTemp);
        vTemp.x = v.x;
        vTemp.y = v.w;
        verts.Add(vTemp);
        vTemp.x = v.z;
        vTemp.y = v.w;
        verts.Add(vTemp);
        vTemp.x = v.z;
        vTemp.y = v.y;
        verts.Add(vTemp);

        vTemp.x = u.x;
        vTemp.y = u.y;
        uvs.Add(vTemp);
        vTemp.x = u.x;
        vTemp.y = u.w;
        uvs.Add(vTemp);
        vTemp.x = u.z;
        vTemp.y = u.w;
        uvs.Add(vTemp);
        vTemp.x = u.z;
        vTemp.y = u.y;
        uvs.Add(vTemp);
     
        Color colF = color;
        colF.a = finalAlpha;
        Color32 col = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;

        cols.Add(col);
        cols.Add(col);
        cols.Add(col);
        cols.Add(col);

        #region 镜像处理
        if (mMirrorHorizontal)
        {
            //水平镜像
            vTemp.x = v.z + v.z - v.x;
            vTemp.y = v.y;
            verts.Add(vTemp);
            vTemp.x = v.z + v.z - v.x;
            vTemp.y = v.w;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.w;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y;
            verts.Add(vTemp);

            vTemp.x = u.x;
            vTemp.y = u.y;
            uvs.Add(vTemp);
            vTemp.x = u.x;
            vTemp.y = u.w;
            uvs.Add(vTemp);
            vTemp.x = u.z;
            vTemp.y = u.w;
            uvs.Add(vTemp);
            vTemp.x = u.z;
            vTemp.y = u.y;
            uvs.Add(vTemp);

            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
        }

        if (mMirrorVertical)
        {
            //垂直镜像
            vTemp.x = v.x;
            vTemp.y = v.y;
            verts.Add(vTemp);
            vTemp.x = v.x;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y;
            verts.Add(vTemp);

            vTemp.x = u.x;
            vTemp.y = u.y;
            uvs.Add(vTemp);
            vTemp.x = u.x;
            vTemp.y = u.w;
            uvs.Add(vTemp);
            vTemp.x = u.z;
            vTemp.y = u.w;
            uvs.Add(vTemp);
            vTemp.x = u.z;
            vTemp.y = u.y;
            uvs.Add(vTemp);

            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
        }

        if (mMirrorVertical && mMirrorHorizontal)
        {
            //对角镜像
            vTemp.x = v.z + v.z - v.x;
            vTemp.y = v.y;
            verts.Add(vTemp);
            vTemp.x = v.z +v.z - v.x;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y;
            verts.Add(vTemp);

            vTemp.x = u.x;
            vTemp.y = u.y;
            uvs.Add(vTemp);
            vTemp.x = u.x;
            vTemp.y = u.w;
            uvs.Add(vTemp);
            vTemp.x = u.z;
            vTemp.y = u.w;
            uvs.Add(vTemp);
            vTemp.x = u.z;
            vTemp.y = u.y;
            uvs.Add(vTemp);

            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
        }
        #endregion
    }

    /// <summary>
    /// Sliced sprite fill function is more complicated as it generates 9 quads instead of 1.
    /// </summary>

    protected void SlicedFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        if (!mSprite.hasBorder)
        {
            SimpleFill(verts, uvs, cols);
            return;
        }

        Vector4 dr = drawingDimensions;
        Vector4 br = border * atlas.pixelSize;

        mTempPos[0].x = dr.x;
        mTempPos[0].y = dr.y;
        mTempPos[3].x = dr.z;
        mTempPos[3].y = dr.w;

        if (mFlip == Flip.Horizontally || mFlip == Flip.Both)
        {
            mTempPos[1].x = mTempPos[0].x + br.z;
            mTempPos[2].x = mTempPos[3].x - br.x;

            mTempUVs[3].x = mOuterUV.xMin;
            mTempUVs[2].x = mInnerUV.xMin;
            mTempUVs[1].x = mInnerUV.xMax;
            mTempUVs[0].x = mOuterUV.xMax;
        }
        else
        {
            mTempPos[1].x = mTempPos[0].x + br.x;
            mTempPos[2].x = mTempPos[3].x - br.z;

            mTempUVs[0].x = mOuterUV.xMin;
            mTempUVs[1].x = mInnerUV.xMin;
            mTempUVs[2].x = mInnerUV.xMax;
            mTempUVs[3].x = mOuterUV.xMax;
        }

        if (mFlip == Flip.Vertically || mFlip == Flip.Both)
        {
            mTempPos[1].y = mTempPos[0].y + br.w;
            mTempPos[2].y = mTempPos[3].y - br.y;

            mTempUVs[3].y = mOuterUV.yMin;
            mTempUVs[2].y = mInnerUV.yMin;
            mTempUVs[1].y = mInnerUV.yMax;
            mTempUVs[0].y = mOuterUV.yMax;
        }
        else
        {
            mTempPos[1].y = mTempPos[0].y + br.y;
            mTempPos[2].y = mTempPos[3].y - br.w;

            mTempUVs[0].y = mOuterUV.yMin;
            mTempUVs[1].y = mInnerUV.yMin;
            mTempUVs[2].y = mInnerUV.yMax;
            mTempUVs[3].y = mOuterUV.yMax;
        }

        if (mMirrorHorizontal)
        {
            float temp = 1.0f / mSprite.width;
            for (int i = 1; i < 4; i++)
                mTempUVs[i].x = mTempUVs[i].x - (mTempUVs[i].x - mTempUVs[0].x) * temp;
        }
        if (mMirrorVertical)
        {
            float temp = 1.0f / mSprite.height;
            for (int i = 0; i < 3; i++)
                mTempUVs[i].y = mTempUVs[i].y + (mTempUVs[3].y - mTempUVs[i].y) * temp;
        }

        Color colF = color;
        colF.a = finalAlpha;
        Color32 col = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;

        for (int x = 0; x < 3; ++x)
        {
            int x2 = x + 1;

            for (int y = 0; y < 3; ++y)
            {
                if (centerType == AdvancedType.Invisible && x == 1 && y == 1) continue;

                int y2 = y + 1;
                Vector3 vTemp = Vector3.zero;
                vTemp.x = mTempPos[x].x;
                vTemp.y = mTempPos[y].y;
                verts.Add(vTemp);
                vTemp.x = mTempPos[x].x;
                vTemp.y = mTempPos[y2].y;
                verts.Add(vTemp);
                vTemp.x = mTempPos[x2].x;
                vTemp.y = mTempPos[y2].y;
                verts.Add(vTemp);
                vTemp.x = mTempPos[x2].x;
                vTemp.y = mTempPos[y].y;
                verts.Add(vTemp);

                vTemp.x = mTempUVs[x].x;
                vTemp.y = mTempUVs[y].y;
                uvs.Add(vTemp);
                vTemp.x = mTempUVs[x].x;
                vTemp.y = mTempUVs[y2].y;
                uvs.Add(vTemp);
                vTemp.x = mTempUVs[x2].x;
                vTemp.y = mTempUVs[y2].y;
                uvs.Add(vTemp);
                vTemp.x = mTempUVs[x2].x;
                vTemp.y = mTempUVs[y].y;
                uvs.Add(vTemp);

                cols.Add(col);
                cols.Add(col);
                cols.Add(col);
                cols.Add(col);
            }
        }

        #region 镜像处理
        if (mMirrorHorizontal)
        {
            //水平镜像
            for (int x = 3; x > 0; --x)
            {
                int x2 = x - 1;

                for (int y = 0; y < 3; ++y)
                {
                    if (centerType == AdvancedType.Invisible && x == 1 && y == 1) continue;

                    int y2 = y + 1;
                    Vector3 vTemp = Vector3.zero;
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x].x;
                    vTemp.y = mTempPos[y].y;
                    verts.Add(vTemp);
                    vTemp.x =  mTempPos[3].x + mTempPos[3].x - mTempPos[x].x;
                    vTemp.y = mTempPos[y2].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x2].x;
                    vTemp.y = mTempPos[y2].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x2].x;
                    vTemp.y = mTempPos[y].y;
                    verts.Add(vTemp);

                    vTemp.x = mTempUVs[x].x;
                    vTemp.y = mTempUVs[y].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x].x;
                    vTemp.y = mTempUVs[y2].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x2].x;
                    vTemp.y = mTempUVs[y2].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x2].x;
                    vTemp.y = mTempUVs[y].y;
                    uvs.Add(vTemp);

                    cols.Add(col);
                    cols.Add(col);
                    cols.Add(col);
                    cols.Add(col);
                }
            }
        }

        if (mMirrorVertical)
        {
            //垂直镜像
            for (int x = 0; x < 3; ++x)
            {
                int x2 = x + 1;

                for (int y = 3; y > 0; --y)
                {
                    if (centerType == AdvancedType.Invisible && x == 1 && y == 1) continue;

                    int y2 = y - 1;
                    Vector3 vTemp = Vector3.zero;
                    vTemp.x = mTempPos[x].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[x].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y2].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[x2].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y2].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[x2].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y].y;
                    verts.Add(vTemp);

                    vTemp.x = mTempUVs[x].x;
                    vTemp.y = mTempUVs[y].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x].x;
                    vTemp.y = mTempUVs[y2].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x2].x;
                    vTemp.y = mTempUVs[y2].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x2].x;
                    vTemp.y = mTempUVs[y].y;
                    uvs.Add(vTemp);

                    cols.Add(col);
                    cols.Add(col);
                    cols.Add(col);
                    cols.Add(col);
                }
            }
        }

        if (mMirrorVertical && mMirrorHorizontal)
        {
            //对角镜像
            for (int x = 3; x > 0; --x)
            {
                int x2 = x - 1;

                for (int y = 3; y > 0; --y)
                {
                    if (centerType == AdvancedType.Invisible && x == 1 && y == 1) continue;

                    int y2 = y - 1;
                    Vector3 vTemp = Vector3.zero;
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y2].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x2].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y2].y;
                    verts.Add(vTemp);
                    vTemp.x = mTempPos[3].x + mTempPos[3].x - mTempPos[x2].x;
                    vTemp.y = mTempPos[0].y + mTempPos[0].y - mTempPos[y].y;
                    verts.Add(vTemp);

                    vTemp.x = mTempUVs[x].x;
                    vTemp.y = mTempUVs[y].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x].x;
                    vTemp.y = mTempUVs[y2].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x2].x;
                    vTemp.y = mTempUVs[y2].y;
                    uvs.Add(vTemp);
                    vTemp.x = mTempUVs[x2].x;
                    vTemp.y = mTempUVs[y].y;
                    uvs.Add(vTemp);

                    cols.Add(col);
                    cols.Add(col);
                    cols.Add(col);
                    cols.Add(col);
                }
            }
        }
        #endregion
    }

    /// <summary>
    /// Tiled sprite fill function.
    /// </summary>

    protected void TiledFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        Texture tex = material.mainTexture;
        if (tex == null)
            return;

        Vector4 v = drawingDimensions;
        Vector4 u;

        if (mFlip == Flip.Horizontally || mFlip == Flip.Both)
        {
            u.x = mInnerUV.xMax;
            u.z = mInnerUV.xMin;
        }
        else
        {
            u.x = mInnerUV.xMin;
            u.z = mInnerUV.xMax;
        }

        if (mFlip == Flip.Vertically || mFlip == Flip.Both)
        {
            u.y = mInnerUV.yMax;
            u.w = mInnerUV.yMin;
        }
        else
        {
            u.y = mInnerUV.yMin;
            u.w = mInnerUV.yMax;
        }

        Vector2 size = Vector2.zero;
        size.x = mInnerUV.width * tex.width;
        size.x = mInnerUV.height * tex.height;
        size *= atlas.pixelSize;

        Color colF = color;
        colF.a = finalAlpha;
        Color32 col = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;

        float x0 = v.x;
        float y0 = v.y;

        float u0 = u.x;
        float v0 = u.y;

        while (y0 < v.w)
        {
            x0 = v.x;
            float y1 = y0 + size.y;
            float v1 = u.w;

            if (y1 > v.w)
            {
                v1 = Mathf.Lerp(u.y, u.w, (v.w - y0) / size.y);
                y1 = v.w;
            }

            while (x0 < v.z)
            {
                float x1 = x0 + size.x;
                float u1 = u.z;

                if (x1 > v.z)
                {
                    u1 = Mathf.Lerp(u.x, u.z, (v.z - x0) / size.x);
                    x1 = v.z;
                }
                Vector3 vTemp = Vector3.zero;
                vTemp.x = x0;
                vTemp.y= y0;
                verts.Add(vTemp);
                vTemp.x = x0;
                vTemp.y = y1;
                verts.Add(vTemp);
                vTemp.x = x1;
                vTemp.y = y1;
                verts.Add(vTemp);
                vTemp.x = x1;
                vTemp.y = y0;
                verts.Add(vTemp);

                vTemp.x = u0;
                vTemp.y = v0;
                uvs.Add(vTemp);
                vTemp.x = u0;
                vTemp.y = v1;
                uvs.Add(vTemp);
                vTemp.x = u1;
                vTemp.y = v1;
                uvs.Add(vTemp);
                vTemp.x = u1;
                vTemp.y = v0;
                uvs.Add(vTemp);

                cols.Add(col);
                cols.Add(col);
                cols.Add(col);
                cols.Add(col);

                x0 += size.x;
            }
            y0 += size.y;
        }
    }

    /// <summary>
    /// Filled sprite fill function.
    /// </summary>

    protected void FilledFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        if (mFillAmount < 0.001f)
            return;

        Color colF = color;
        colF.a = finalAlpha;
        Color32 col = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;
        Vector4 v = drawingDimensions;
        Vector4 u = drawingUVs;

        // Horizontal and vertical filled sprites are simple -- just end the sprite prematurely
        if (mFillDirection == FillDirection.Horizontal || mFillDirection == FillDirection.Vertical)
        {
            if (mFillDirection == FillDirection.Horizontal)
            {
                float fill = (u.z - u.x) * mFillAmount;

                if (mInvert)
                {
                    v.x = v.z - (v.z - v.x) * mFillAmount;
                    u.x = u.z - fill;
                }
                else
                {
                    v.z = v.x + (v.z - v.x) * mFillAmount;
                    u.z = u.x + fill;
                }
            }
            else if (mFillDirection == FillDirection.Vertical)
            {
                float fill = (u.w - u.y) * mFillAmount;

                if (mInvert)
                {
                    v.y = v.w - (v.w - v.y) * mFillAmount;
                    u.y = u.w - fill;
                }
                else
                {
                    v.w = v.y + (v.w - v.y) * mFillAmount;
                    u.w = u.y + fill;
                }
            }
        }
        Vector2 vTemp = Vector2.zero;
        vTemp.x =v.x ;
        vTemp.y = v.y;
        mTempPos[0] = vTemp;
        vTemp.x = v.x;
        vTemp.y = v.w;
        mTempPos[1] = vTemp;
        vTemp.x = v.z;
        vTemp.y = v.w;
        mTempPos[2] = vTemp;
        vTemp.x = v.z;
        vTemp.y = v.y;
        mTempPos[3] = vTemp;

        vTemp.x = u.x;
        vTemp.y = u.y;
        mTempUVs[0] = vTemp;
        vTemp.x = u.x;
        vTemp.y = u.w;
        mTempUVs[1] = vTemp;
        vTemp.x = u.z;
        vTemp.y = u.w;
        mTempUVs[2] = vTemp;
        vTemp.x = u.z;
        vTemp.y = u.y;
        mTempUVs[3] = vTemp;

        if (mFillAmount < 1f)
        {
            if (mFillDirection == FillDirection.Radial90)
            {
                if (RadialCut(mTempPos, mTempUVs, mFillAmount, mInvert, 0))
                {
                    for (int i = 0; i < 4; ++i)
                    {
                        verts.Add(mTempPos[i]);
                        uvs.Add(mTempUVs[i]);
                        cols.Add(col);
                    }
                }
                return;
            }

            if (mFillDirection == FillDirection.Radial180)
            {
                for (int side = 0; side < 2; ++side)
                {
                    float fx0, fx1, fy0, fy1;

                    fy0 = 0f;
                    fy1 = 1f;

                    if (side == 0) 
                    { 
                        fx0 = 0f; 
                        fx1 = 0.5f; 
                    }
                    else 
                    { 
                        fx0 = 0.5f; 
                        fx1 = 1f;
                    }

                    mTempPos[0].x = Mathf.Lerp(v.x, v.z, fx0);
                    mTempPos[1].x = mTempPos[0].x;
                    mTempPos[2].x = Mathf.Lerp(v.x, v.z, fx1);
                    mTempPos[3].x = mTempPos[2].x;

                    mTempPos[0].y = Mathf.Lerp(v.y, v.w, fy0);
                    mTempPos[1].y = Mathf.Lerp(v.y, v.w, fy1);
                    mTempPos[2].y = mTempPos[1].y;
                    mTempPos[3].y = mTempPos[0].y;

                    mTempUVs[0].x = Mathf.Lerp(u.x, u.z, fx0);
                    mTempUVs[1].x = mTempUVs[0].x;
                    mTempUVs[2].x = Mathf.Lerp(u.x, u.z, fx1);
                    mTempUVs[3].x = mTempUVs[2].x;

                    mTempUVs[0].y = Mathf.Lerp(u.y, u.w, fy0);
                    mTempUVs[1].y = Mathf.Lerp(u.y, u.w, fy1);
                    mTempUVs[2].y = mTempUVs[1].y;
                    mTempUVs[3].y = mTempUVs[0].y;

                    float val = !mInvert ? fillAmount * 2f - side : mFillAmount * 2f - (1 - side);

                    if (RadialCut(mTempPos, mTempUVs, Mathf.Clamp01(val), !mInvert, NGUIMath.RepeatIndex(side + 3, 4)))
                    {
                        for (int i = 0; i < 4; ++i)
                        {
                            verts.Add(mTempPos[i]);
                            uvs.Add(mTempUVs[i]);
                            cols.Add(col);
                        }
                    }
                }
                return;
            }

            if (mFillDirection == FillDirection.Radial360)
            {
                for (int corner = 0; corner < 4; ++corner)
                {
                    float fx0, fx1, fy0, fy1;

                    if (corner < 2) 
                    { 
                        fx0 = 0f; 
                        fx1 = 0.5f; 
                    }
                    else 
                    { 
                        fx0 = 0.5f; 
                        fx1 = 1f; 
                    }

                    if (corner == 0 || corner == 3) 
                    { 
                        fy0 = 0f; 
                        fy1 = 0.5f; 
                    }
                    else 
                    { 
                        fy0 = 0.5f; 
                        fy1 = 1f; 
                    }

                    mTempPos[0].x = Mathf.Lerp(v.x, v.z, fx0);
                    mTempPos[1].x = mTempPos[0].x;
                    mTempPos[2].x = Mathf.Lerp(v.x, v.z, fx1);
                    mTempPos[3].x = mTempPos[2].x;

                    mTempPos[0].y = Mathf.Lerp(v.y, v.w, fy0);
                    mTempPos[1].y = Mathf.Lerp(v.y, v.w, fy1);
                    mTempPos[2].y = mTempPos[1].y;
                    mTempPos[3].y = mTempPos[0].y;

                    mTempUVs[0].x = Mathf.Lerp(u.x, u.z, fx0);
                    mTempUVs[1].x = mTempUVs[0].x;
                    mTempUVs[2].x = Mathf.Lerp(u.x, u.z, fx1);
                    mTempUVs[3].x = mTempUVs[2].x;

                    mTempUVs[0].y = Mathf.Lerp(u.y, u.w, fy0);
                    mTempUVs[1].y = Mathf.Lerp(u.y, u.w, fy1);
                    mTempUVs[2].y = mTempUVs[1].y;
                    mTempUVs[3].y = mTempUVs[0].y;

                    float val = mInvert ?
                        mFillAmount * 4f - NGUIMath.RepeatIndex(corner + 2, 4) :
                        mFillAmount * 4f - (3 - NGUIMath.RepeatIndex(corner + 2, 4));

                    if (RadialCut(mTempPos, mTempUVs, Mathf.Clamp01(val), mInvert, NGUIMath.RepeatIndex(corner + 2, 4)))
                    {
                        for (int i = 0; i < 4; ++i)
                        {
                            verts.Add(mTempPos[i]);
                            uvs.Add(mTempUVs[i]);
                            cols.Add(col);
                        }
                    }
                }
                return;
            }
        }

        // Fill the buffer with the quad for the sprite
        for (int i = 0; i < 4; ++i)
        {
            verts.Add(mTempPos[i]);
            uvs.Add(mTempUVs[i]);
            cols.Add(col);
        }
    }

    /// <summary>
    /// Adjust the specified quad, making it be radially filled instead.
    /// </summary>

    static bool RadialCut(Vector2[] xy, Vector2[] uv, float fill, bool invert, int corner)
    {
        // Nothing to fill
        if (fill < 0.001f) return false;

        // Even corners invert the fill direction
        if ((corner & 1) == 1) invert = !invert;

        // Nothing to adjust
        if (!invert && fill > 0.999f) return true;

        // Convert 0-1 value into 0 to 90 degrees angle in radians
        float angle = Mathf.Clamp01(fill);
        if (invert) angle = 1f - angle;
        angle *= 90f * Mathf.Deg2Rad;

        // Calculate the effective X and Y factors
        float cos = Mathf.Cos(angle);
        float sin = Mathf.Sin(angle);

        RadialCut(xy, cos, sin, invert, corner);
        RadialCut(uv, cos, sin, invert, corner);
        return true;
    }

    /// <summary>
    /// Adjust the specified quad, making it be radially filled instead.
    /// </summary>

    static void RadialCut(Vector2[] xy, float cos, float sin, bool invert, int corner)
    {
        int i0 = corner;
        int i1 = NGUIMath.RepeatIndex(corner + 1, 4);
        int i2 = NGUIMath.RepeatIndex(corner + 2, 4);
        int i3 = NGUIMath.RepeatIndex(corner + 3, 4);

        if ((corner & 1) == 1)
        {
            if (sin > cos)
            {
                cos /= sin;
                sin = 1f;

                if (invert)
                {
                    xy[i1].x = Mathf.Lerp(xy[i0].x, xy[i2].x, cos);
                    xy[i2].x = xy[i1].x;
                }
            }
            else if (cos > sin)
            {
                sin /= cos;
                cos = 1f;

                if (!invert)
                {
                    xy[i2].y = Mathf.Lerp(xy[i0].y, xy[i2].y, sin);
                    xy[i3].y = xy[i2].y;
                }
            }
            else
            {
                cos = 1f;
                sin = 1f;
            }

            if (!invert) xy[i3].x = Mathf.Lerp(xy[i0].x, xy[i2].x, cos);
            else xy[i1].y = Mathf.Lerp(xy[i0].y, xy[i2].y, sin);
        }
        else
        {
            if (cos > sin)
            {
                sin /= cos;
                cos = 1f;

                if (!invert)
                {
                    xy[i1].y = Mathf.Lerp(xy[i0].y, xy[i2].y, sin);
                    xy[i2].y = xy[i1].y;
                }
            }
            else if (sin > cos)
            {
                cos /= sin;
                sin = 1f;

                if (invert)
                {
                    xy[i2].x = Mathf.Lerp(xy[i0].x, xy[i2].x, cos);
                    xy[i3].x = xy[i2].x;
                }
            }
            else
            {
                cos = 1f;
                sin = 1f;
            }

            if (invert) xy[i3].y = Mathf.Lerp(xy[i0].y, xy[i2].y, sin);
            else xy[i1].x = Mathf.Lerp(xy[i0].x, xy[i2].x, cos);
        }
    }

    /// <summary>
    /// Advanced sprite fill function. Contributed by Nicki Hansen.
    /// </summary>

    protected void AdvancedFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        if (!mSprite.hasBorder)
        {
            SimpleFill(verts, uvs, cols);
            return;
        }

        Texture tex = material.mainTexture;
        if (tex == null)
            return;

        Vector4 dr = drawingDimensions;
        Vector4 br = border * atlas.pixelSize;

        Vector2 tileSize = Vector2.zero;
        tileSize.x = mInnerUV.width * tex.width;
        tileSize.y = mInnerUV.height * tex.height;
        tileSize *= atlas.pixelSize;

        if (tileSize.x < 1f) tileSize.x = 1f;
        if (tileSize.y < 1f) tileSize.y = 1f;

        mTempPos[0].x = dr.x;
        mTempPos[0].y = dr.y;
        mTempPos[3].x = dr.z;
        mTempPos[3].y = dr.w;

        if (mFlip == Flip.Horizontally || mFlip == Flip.Both)
        {
            mTempPos[1].x = mTempPos[0].x + br.z;
            mTempPos[2].x = mTempPos[3].x - br.x;

            mTempUVs[3].x = mOuterUV.xMin;
            mTempUVs[2].x = mInnerUV.xMin;
            mTempUVs[1].x = mInnerUV.xMax;
            mTempUVs[0].x = mOuterUV.xMax;
        }
        else
        {
            mTempPos[1].x = mTempPos[0].x + br.x;
            mTempPos[2].x = mTempPos[3].x - br.z;

            mTempUVs[0].x = mOuterUV.xMin;
            mTempUVs[1].x = mInnerUV.xMin;
            mTempUVs[2].x = mInnerUV.xMax;
            mTempUVs[3].x = mOuterUV.xMax;
        }

        if (mFlip == Flip.Vertically || mFlip == Flip.Both)
        {
            mTempPos[1].y = mTempPos[0].y + br.w;
            mTempPos[2].y = mTempPos[3].y - br.y;

            mTempUVs[3].y = mOuterUV.yMin;
            mTempUVs[2].y = mInnerUV.yMin;
            mTempUVs[1].y = mInnerUV.yMax;
            mTempUVs[0].y = mOuterUV.yMax;
        }
        else
        {
            mTempPos[1].y = mTempPos[0].y + br.y;
            mTempPos[2].y = mTempPos[3].y - br.w;

            mTempUVs[0].y = mOuterUV.yMin;
            mTempUVs[1].y = mInnerUV.yMin;
            mTempUVs[2].y = mInnerUV.yMax;
            mTempUVs[3].y = mOuterUV.yMax;
        }

        Color colF = color;
        colF.a = finalAlpha;
        Color32 col = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;

        for (int x = 0; x < 3; ++x)
        {
            int x2 = x + 1;

            for (int y = 0; y < 3; ++y)
            {
                if (centerType == AdvancedType.Invisible && x == 1 && y == 1) continue;
                int y2 = y + 1;

                if (x == 1 && y == 1) // Center
                {
                    if (centerType == AdvancedType.Tiled)
                    {
                        float startPositionX = mTempPos[x].x;
                        float endPositionX = mTempPos[x2].x;
                        float startPositionY = mTempPos[y].y;
                        float endPositionY = mTempPos[y2].y;
                        float textureStartX = mTempUVs[x].x;
                        float textureStartY = mTempUVs[y].y;
                        float tileStartY = startPositionY;

                        while (tileStartY < endPositionY)
                        {
                            float tileStartX = startPositionX;
                            float textureEndY = mTempUVs[y2].y;
                            float tileEndY = tileStartY + tileSize.y;

                            if (tileEndY > endPositionY)
                            {
                                textureEndY = Mathf.Lerp(textureStartY, textureEndY, (endPositionY - tileStartY) / tileSize.y);
                                tileEndY = endPositionY;
                            }

                            while (tileStartX < endPositionX)
                            {
                                float tileEndX = tileStartX + tileSize.x;
                                float textureEndX = mTempUVs[x2].x;

                                if (tileEndX > endPositionX)
                                {
                                    textureEndX = Mathf.Lerp(textureStartX, textureEndX, (endPositionX - tileStartX) / tileSize.x);
                                    tileEndX = endPositionX;
                                }

                                FillBuffers(tileStartX, tileEndX, tileStartY, tileEndY, textureStartX,
                                    textureEndX, textureStartY, textureEndY, col, verts, uvs, cols);

                                tileStartX += tileSize.x;
                            }
                            tileStartY += tileSize.y;
                        }
                    }
                    else if (centerType == AdvancedType.Sliced)
                    {
                        FillBuffers(mTempPos[x].x, mTempPos[x2].x, mTempPos[y].y, mTempPos[y2].y,
                            mTempUVs[x].x, mTempUVs[x2].x, mTempUVs[y].y, mTempUVs[y2].y, col, verts, uvs, cols);
                    }
                }
                else if (x == 1) // Top or bottom
                {
                    if ((y == 0 && bottomType == AdvancedType.Tiled) || (y == 2 && topType == AdvancedType.Tiled))
                    {
                        float startPositionX = mTempPos[x].x;
                        float endPositionX = mTempPos[x2].x;
                        float startPositionY = mTempPos[y].y;
                        float endPositionY = mTempPos[y2].y;
                        float textureStartX = mTempUVs[x].x;
                        float textureStartY = mTempUVs[y].y;
                        float textureEndY = mTempUVs[y2].y;
                        float tileStartX = startPositionX;

                        while (tileStartX < endPositionX)
                        {
                            float tileEndX = tileStartX + tileSize.x;
                            float textureEndX = mTempUVs[x2].x;

                            if (tileEndX > endPositionX)
                            {
                                textureEndX = Mathf.Lerp(textureStartX, textureEndX, (endPositionX - tileStartX) / tileSize.x);
                                tileEndX = endPositionX;
                            }

                            FillBuffers(tileStartX, tileEndX, startPositionY, endPositionY, textureStartX,
                                textureEndX, textureStartY, textureEndY, col, verts, uvs, cols);

                            tileStartX += tileSize.x;
                        }
                    }
                    else if ((y == 0 && bottomType == AdvancedType.Sliced) || (y == 2 && topType == AdvancedType.Sliced))
                    {
                        FillBuffers(mTempPos[x].x, mTempPos[x2].x, mTempPos[y].y, mTempPos[y2].y,
                            mTempUVs[x].x, mTempUVs[x2].x, mTempUVs[y].y, mTempUVs[y2].y, col, verts, uvs, cols);
                    }
                }
                else if (y == 1) // Left or right
                {
                    if ((x == 0 && leftType == AdvancedType.Tiled) || (x == 2 && rightType == AdvancedType.Tiled))
                    {
                        float startPositionX = mTempPos[x].x;
                        float endPositionX = mTempPos[x2].x;
                        float startPositionY = mTempPos[y].y;
                        float endPositionY = mTempPos[y2].y;
                        float textureStartX = mTempUVs[x].x;
                        float textureEndX = mTempUVs[x2].x;
                        float textureStartY = mTempUVs[y].y;
                        float tileStartY = startPositionY;

                        while (tileStartY < endPositionY)
                        {
                            float textureEndY = mTempUVs[y2].y;
                            float tileEndY = tileStartY + tileSize.y;

                            if (tileEndY > endPositionY)
                            {
                                textureEndY = Mathf.Lerp(textureStartY, textureEndY, (endPositionY - tileStartY) / tileSize.y);
                                tileEndY = endPositionY;
                            }

                            FillBuffers(startPositionX, endPositionX, tileStartY, tileEndY, textureStartX,
                                textureEndX, textureStartY, textureEndY, col, verts, uvs, cols);

                            tileStartY += tileSize.y;
                        }
                    }
                    else if ((x == 0 && leftType == AdvancedType.Sliced) || (x == 2 && rightType == AdvancedType.Sliced))
                    {
                        FillBuffers(mTempPos[x].x, mTempPos[x2].x, mTempPos[y].y, mTempPos[y2].y,
                            mTempUVs[x].x, mTempUVs[x2].x, mTempUVs[y].y, mTempUVs[y2].y, col, verts, uvs, cols);
                    }
                }
                else // Corner
                {
                    FillBuffers(mTempPos[x].x, mTempPos[x2].x, mTempPos[y].y, mTempPos[y2].y,
                        mTempUVs[x].x, mTempUVs[x2].x, mTempUVs[y].y, mTempUVs[y2].y, col, verts, uvs, cols);
                }
            }
        }
    }

    /// <summary>
    /// 自定义填充
    /// zhangrj
    /// 20141230
    /// 功能 解决挖空遮罩
    /// </summary>
    protected void CustomFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        Texture tex = material.mainTexture;
        if (tex == null)
            return;

        Vector4 v = drawingDimensions;
        Vector4 u;

        u.x = mInnerUV.xMin;
        u.z = mInnerUV.xMax;

        u.y = mInnerUV.yMin;
        u.w = mInnerUV.yMax;

        Vector2 size = Vector2.zero;
        size.x = mInnerUV.width * tex.width;
        size.y = mInnerUV.height * tex.height;
        
        size *= atlas.pixelSize;

        Color colF = color;
        colF.a = finalAlpha;
        Color32 col = atlas.premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;

        float x0 = v.x;
        float y0 = v.y;

        float u0 = u.x;
        float v0 = u.y;
        float v1 = u.w;
        float u1 = u.z;

        if (maskCount == 1)  //一个遮罩
        {
            float cx1 = customValue1.x;
            if (cx1 < v.x) cx1 = v.x;
            else if (cx1 > v.z) cx1 = v.z;

            float cx2 = cx1 + customValue1.z;
            if (cx2 > v.z) cx2 = v.z;

            float cy1 = customValue1.y;
            if (cy1 < v.y) cy1 = v.y;
            else if (cy1 > v.w) cy1 = v.w;

            float cy2 = cy1 + customValue1.w;
            if (cy2 > v.w) cy2 = v.w;
            SetUVandVert(x0, v.z, y0, cy1, u0, v0, u1, v1, col, verts, uvs, cols);//bottom
            SetUVandVert(x0, v.z, cy2, v.w, u0, v0, u1, v1, col, verts, uvs, cols);//top
            SetUVandVert(x0, cx1, cy1, cy2, u0, v0, u1, v1, col, verts, uvs, cols);//left
            SetUVandVert(cx2, v.z, cy1, cy2, u0, v0, u1, v1, col, verts, uvs, cols);//right
        }
        else
        {
            float cx1_1 = customValue1.x;       //挖空值1
            if (cx1_1 < v.x) cx1_1 = v.x;
            else if (cx1_1 > v.z) cx1_1 = v.z;
            float cx1_2 = cx1_1 + customValue1.z;
            if (cx1_2 > v.z) cx1_2 = v.z;
            float cy1_1 = customValue1.y;
            if (cy1_1 < v.y) cy1_1 = v.y;
            else if (cy1_1 > v.w) cy1_1 = v.w;
            float cy1_2 = cy1_1 + customValue1.w;
            if (cy1_2 > v.w) cy1_2 = v.w;

            float cx2_1 = customValue2.x;       //挖空值2
            if (cx2_1 < v.x) cx2_1 = v.x;
            else if (cx2_1 > v.z) cx2_1 = v.z;
            float cx2_2 = cx2_1 + customValue2.z;
            if (cx2_2 > v.z) cx2_2 = v.z;
            float cy2_1 = customValue2.y;
            if (cy2_1 < v.y) cy2_1 = v.y;
            else if (cy2_1 > v.w) cy2_1 = v.w;
            float cy2_2 = cy2_1 + customValue2.w;
            if (cy2_2 > v.w) cy2_2 = v.w;

            float left = cx1_1 < cx2_1 ? cx1_1 : cx2_1;
            float right = cx1_2 < cx2_2 ? cx2_2 : cx1_2;
            float bottom = cy1_1 < cy2_1 ? cy1_1 : cy2_1;
            float top = cy1_2 < cy2_2 ? cy2_2 : cy1_2;

            //先对外圈进行设置
            SetUVandVert(x0, v.z, y0, bottom, u0, v0, u1, v1, col, verts, uvs, cols);//bottom
            SetUVandVert(x0, v.z, top, v.w, u0, v0, u1, v1, col, verts, uvs, cols);//top
            SetUVandVert(x0, left, bottom, top, u0, v0, u1, v1, col, verts, uvs, cols);//left
            SetUVandVert(right, v.z, bottom, top, u0, v0, u1, v1, col, verts, uvs, cols);//right

            Vector2 center1 = Vector2.zero;   //挖空的中心点
            center1.x = (cx1_1 + cx1_2) / 2;
            center1.y = (cy1_1 + cy1_2) / 2;
            Vector2 center2 = Vector2.zero;   //挖空的中心点
            center2.x = (cx2_1 + cx2_2) / 2;
            center2.y = (cy2_1 + cy2_2) / 2;   

            float left2 = cx1_1 < cx2_1 ? cx2_1 : cx1_1;
            float right2 = cx1_2 < cx2_2 ? cx1_2 : cx2_2;
            float bottom2 = cy1_1 < cy2_1 ? cy2_1 : cy1_1;
            float top2 = cy1_2 < cy2_2 ? cy1_2 : cy2_2;

            if (center1.y > center2.y)   //判断上下关系
            {
                SetUVandVert(left, left2, bottom, bottom2, u0, v0, u1, v1, col, verts, uvs, cols);
                if (left2 > right2)
                {
                    if (top2 < bottom2)
                    {
                        SetUVandVert(right2, left2, bottom2, top, u0, v0, u1, v1, col, verts, uvs, cols);
                        SetUVandVert(left2, right, top2, top, u0, v0, u1, v1, col, verts, uvs, cols);
                    }
                    else
                    {
                        SetUVandVert(right2, right, top2, top, u0, v0, u1, v1, col, verts, uvs, cols);
                        SetUVandVert(right2, left2, bottom2, top2, u0, v0, u1, v1, col, verts, uvs, cols);
                    }
                }
                else
                {
                    SetUVandVert(right2, right, top2, top, u0, v0, u1, v1, col, verts, uvs, cols);
                    if (top2 < bottom2)
                    {
                        SetUVandVert(left2, right2, top2, bottom2, u0, v0, u1, v1, col, verts, uvs, cols);
                    }

                }
            }
            else
            {
                SetUVandVert(left, left2, top2, top, u0, v0, u1, v1, col, verts, uvs, cols);
                if (left2 > right2)
                {
                    if (top2 < bottom2)
                    {
                        SetUVandVert(left2, right, bottom, bottom2, u0, v0, u1, v1, col, verts, uvs, cols);
                        SetUVandVert(right2, left2, bottom, top2, u0, v0, u1, v1, col, verts, uvs, cols);
                    }
                    else
                    {
                        SetUVandVert(right2, right, bottom, bottom2, u0, v0, u1, v1, col, verts, uvs, cols);
                        SetUVandVert(right2, left2, bottom2, top2, u0, v0, u1, v1, col, verts, uvs, cols);
                    }
                }
                else
                {
                    SetUVandVert(right2, right, bottom, bottom2, u0, v0, u1, v1, col, verts, uvs, cols);
                    if (top2 < bottom2)
                    {
                        SetUVandVert(left2, right2, top2, bottom2, u0, v0, u1, v1, col, verts, uvs, cols);
                    }
                }
            }
        }
    }

    /// <summary>
    /// 设置顶点及UV
    /// </summary>
    /// <param name="left"></param>
    /// <param name="right"></param>
    /// <param name="bottom"></param>
    /// <param name="top"></param>
    /// <param name="u0"></param>
    /// <param name="v0"></param>
    /// <param name="u1"></param>
    /// <param name="v1"></param>
    /// <param name="col"></param>
    /// <param name="verts"></param>
    /// <param name="uvs"></param>
    /// <param name="cols"></param>
    void SetUVandVert(float left, float right, float bottom, float top, float u0, float v0, float u1, float v1, Color32 col, BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        Vector3 vTemp = Vector3.zero;
        vTemp.x = left;
        vTemp.y = bottom;
        verts.Add(vTemp);
        vTemp.x = left;
        vTemp.y = top;
        verts.Add(vTemp);
        vTemp.x = right;
        vTemp.y = top;
        verts.Add(vTemp);
        vTemp.x = right;
        vTemp.y = bottom;
        verts.Add(vTemp);
        vTemp.x = u0;
        vTemp.y = v0;
        uvs.Add(vTemp);
        vTemp.x = u0;
        vTemp.y = v1;
        uvs.Add(vTemp);
        vTemp.x = u1;
        vTemp.y = v1;
        uvs.Add(vTemp);
        vTemp.x = u1;
        vTemp.y = v0;
        uvs.Add(vTemp);

        cols.Add(col);
        cols.Add(col);
        cols.Add(col);
        cols.Add(col);
    }

    /// <summary>
    /// Helper function used in AdvancedFill, above. Contributed by Nicki Hansen.
    /// </summary>

    void FillBuffers(float v0x, float v1x, float v0y, float v1y, float u0x, float u1x, float u0y, float u1y, Color col,
        BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
    {
        Vector3 vTemp = Vector3.zero;
        vTemp.x = v0x;
        vTemp.y = v0y;
        verts.Add(vTemp);
        vTemp.x = v0x;
        vTemp.y = v1y;
        verts.Add(vTemp);
        vTemp.x = v1x;
        vTemp.y = v1y;
        verts.Add(vTemp);
        vTemp.x = v1x;
        vTemp.y = v0y;
        verts.Add(vTemp);

        vTemp.x = u0x;
        vTemp.y = u0y;
        uvs.Add(vTemp);
        vTemp.x = u0x;
        vTemp.y = u1y;
        uvs.Add(vTemp);
        vTemp.x = u1x;
        vTemp.y = u1y;
        uvs.Add(vTemp);
        vTemp.x = u1x;
        vTemp.y = u0y;
        uvs.Add(vTemp);

        cols.Add(col);
        cols.Add(col);
        cols.Add(col);
        cols.Add(col);
    }
    #endregion
}
