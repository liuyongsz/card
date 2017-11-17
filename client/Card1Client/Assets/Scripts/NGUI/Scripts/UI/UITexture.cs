//----------------------------------------------
//            NGUI: Next-Gen UI kit
// Copyright © 2011-2014 Tasharen Entertainment
//----------------------------------------------

using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// If you don't have or don't wish to create an atlas, you can simply use this script to draw a texture.
/// Keep in mind though that this will create an extra draw call with each UITexture present, so it's
/// best to use it only for backgrounds or temporary visible widgets.
/// </summary>

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/NGUI Texture")]
public class UITexture : UIWidget
{
	[HideInInspector][SerializeField] Rect mRect = new Rect(0f, 0f, 1f, 1f);
	[HideInInspector][SerializeField] Texture mTexture;
	[HideInInspector][SerializeField] Material mMat;
    [HideInInspector][SerializeField] Shader mShader;
    [HideInInspector][SerializeField] bool mMirrorHorizontal = false;
    [HideInInspector][SerializeField] bool mMirrorVertical =  false;

	int mPMA = -1;

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

    void OnDestroy()
    {
        if (mainTexture != null)
        {
            DelegateProxy.PopCache(mainTexture);
        }
        if (mMat != null)
        {
            DelegateProxy.PopCache(mMat.mainTexture);
            DelegateProxy.PopCache(mMat);
        }
    }
	/// <summary>
	/// Texture used by the UITexture. You can set it directly, without the need to specify a material.
	/// </summary>

	public override Texture mainTexture
	{
		get
		{
			return mTexture;
		}
		set
		{
			if (mTexture != value)
			{
				RemoveFromPanel();
                DelegateProxy.PopCache(mTexture);
				mTexture = value;
				MarkAsChanged();
			}
		}
	}

	/// <summary>
	/// Material used by the widget.
	/// </summary>

	public override Material material
	{
		get
		{
			return mMat;
		}
		set
		{
			if (mMat != value)
			{
				RemoveFromPanel();
                DelegateProxy.PopCache(mTexture);
                if (mMat != null)
                {
                    DelegateProxy.PopCache(mMat.mainTexture);
                    DelegateProxy.PopCache(mMat);
                }
				mMat = value;
				mPMA = -1;
				MarkAsChanged();
			}
		}
	}

	/// <summary>
	/// Shader used by the texture when creating a dynamic material (when the texture was specified, but the material was not).
	/// </summary>

	public override Shader shader
	{
		get
		{
			if (mMat != null) return mMat.shader;
			if (mShader == null) mShader = Shader.Find("Unlit/Transparent Colored");
			return mShader;
		}
		set
		{
			if (mShader != value)
			{
				mShader = value;

				if (mMat == null)
				{
					mPMA = -1;
					MarkAsChanged();
				}
			}
		}
	}

	/// <summary>
	/// Whether the texture is using a premultiplied alpha material.
	/// </summary>

	public bool premultipliedAlpha
	{
		get
		{
			if (mPMA == -1)
			{
				Material mat = material;
				mPMA = (mat != null && mat.shader != null && mat.shader.name.Contains("Premultiplied")) ? 1 : 0;
			}
			return (mPMA == 1);
		}
	}

	/// <summary>
	/// UV rectangle used by the texture.
	/// </summary>

	public Rect uvRect
	{
		get
		{
			return mRect;
		}
		set
		{
			if (mRect != value)
			{
				mRect = value;
				MarkAsChanged();
			}
		}
	}

	/// <summary>
	/// Widget's dimensions used for drawing. X = left, Y = bottom, Z = right, W = top.
	/// This function automatically adds 1 pixel on the edge if the texture's dimensions are not even.
	/// It's used to achieve pixel-perfect sprites even when an odd dimension widget happens to be centered.
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

			Texture tex = mainTexture;
			int w = (tex != null) ? tex.width : mWidth;
			int h = (tex != null) ? tex.height : mHeight;

			if ((w & 1) != 0) x1 -= (1f / w) * mWidth;
			if ((h & 1) != 0) y1 -= (1f / h) * mHeight;

			return new Vector4(
				mDrawRegion.x == 0f ? x0 : Mathf.Lerp(x0, x1, mDrawRegion.x),
				mDrawRegion.y == 0f ? y0 : Mathf.Lerp(y0, y1, mDrawRegion.y),
				mDrawRegion.z == 1f ? x1 : Mathf.Lerp(x0, x1, mDrawRegion.z),
				mDrawRegion.w == 1f ? y1 : Mathf.Lerp(y0, y1, mDrawRegion.w));
		}
	}

	/// <summary>
	/// Adjust the scale of the widget to make it pixel-perfect.
	/// </summary>

	public override void MakePixelPerfect ()
	{
		Texture tex = mainTexture;

		if (tex != null)
		{
			int x = tex.width;
			if ((x & 1) == 1) ++x;

			int y = tex.height;
			if ((y & 1) == 1) ++y;

			width = x;
			height = y;
		}
		base.MakePixelPerfect();
	}

	/// <summary>
	/// Virtual function called by the UIPanel that fills the buffers.
	/// </summary>

	public override void OnFill (BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
	{
		Color colF = color;
		colF.a = finalAlpha;
		Color32 col = premultipliedAlpha ? NGUITools.ApplyPMA(colF) : colF;

        Vector4 v = drawingDimensions;

        Rect saveRect = new Rect(mRect);
        if(mMirrorHorizontal)
            mRect.xMax *= 1.0f - 1.0f / (v.z - v.x);
        if(mMirrorVertical)
            mRect.yMin = 1.0f / (v.w - v.y);

        Vector3 vTemp = Vector3.zero;
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

        Vector2 vTemp2 = Vector2.zero;
        vTemp2.x = mRect.xMin;
        vTemp2.y = mRect.yMin;
        uvs.Add(vTemp2);
        vTemp2.x = mRect.xMin;
        vTemp2.y = mRect.yMax;
        uvs.Add(vTemp2);
        vTemp2.x = mRect.xMax;
        vTemp2.y = mRect.yMax;
        uvs.Add(vTemp2);
        vTemp2.x = mRect.xMax;
        vTemp2.y = mRect.yMin;
        uvs.Add(vTemp2);

        cols.Add(col);
        cols.Add(col);
        cols.Add(col);
        cols.Add(col);

        #region 镜像处理
        if (mMirrorHorizontal)
        {
            //水平镜像
            vTemp.x = v.z;
            vTemp.y = v.y;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.w;
            verts.Add(vTemp);
            vTemp.x = v.z + v.z - v.x;
            vTemp.y = v.w;
            verts.Add(vTemp);
            vTemp.x = v.z + v.z - v.x;
            vTemp.y = v.y;
            verts.Add(vTemp);

            vTemp2.x = mRect.xMax;
            vTemp2.y = mRect.yMin;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMax;
            vTemp2.y = mRect.yMax;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMin;
            vTemp2.y = mRect.yMax;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMin;
            vTemp2.y = mRect.yMin;
            uvs.Add(vTemp2);

            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
        }

        if (mMirrorVertical)
        {
            //垂直镜像
            vTemp.x = v.z;
            vTemp.y = v.y;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.x;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.x;
            vTemp.y = v.y;
            verts.Add(vTemp);

            vTemp2.x = mRect.xMax;
            vTemp2.y = mRect.yMin;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMax;
            vTemp2.y = mRect.yMax;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMin;
            vTemp2.y = mRect.yMax;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMin;
            vTemp2.y = mRect.yMin;
            uvs.Add(vTemp2);

            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
        }

        if (mMirrorVertical && mMirrorHorizontal)
        {
            //对角镜像
            vTemp.x = v.z;
            vTemp.y = v.y;
            verts.Add(vTemp);
            vTemp.x = v.z;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.z +v.z - v.x;
            vTemp.y = v.y + v.y - v.w;
            verts.Add(vTemp);
            vTemp.x = v.z + v.z - v.x;
            vTemp.y = v.y;
            verts.Add(vTemp);

            vTemp2.x = mRect.xMax;
            vTemp2.y = mRect.yMin;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMax;
            vTemp2.y = mRect.yMax;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMin;
            vTemp2.y = mRect.yMax;
            uvs.Add(vTemp2);
            vTemp2.x = mRect.xMin;
            vTemp2.y = mRect.yMin;
            uvs.Add(vTemp2);

            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
            cols.Add(col);
        }
        #endregion

        mRect = saveRect;
	}
}
