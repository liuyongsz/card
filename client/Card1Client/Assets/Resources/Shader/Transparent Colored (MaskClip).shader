﻿Shader "Unlit/Transparent Colored (MaskClip)"
{
	Properties
	{
		_MainTex("Base (RGB), Alpha (A)", 2D) = "black" {}
	_PanelMaskTex("Mask (A)", 2D) = "white" {}
	}

		SubShader
	{
		LOD 200

		Tags
	{
		"Queue" = "Transparent"
		"IgnoreProjector" = "True"
		"RenderType" = "Transparent"
	}

		Pass
	{
		Cull Off
		Lighting Off
		ZWrite Off
		Offset -1, -1
		Fog{ Mode Off }
		ColorMask RGB
		Blend SrcAlpha OneMinusSrcAlpha

		CGPROGRAM
#pragma vertex vert  
#pragma fragment frag  
#include "UnityCG.cginc"  

		sampler2D _MainTex;
	sampler2D _PanelMaskTex;
	float4 _MainTex_ST;

	struct appdata_t
	{
		float4 vertex : POSITION;
		half4 color : COLOR;
		float2 texcoord : TEXCOORD0;
	};

	struct v2f
	{
		float4 vertex : POSITION;
		half4 color : COLOR;
		float2 texcoord : TEXCOORD0;
		float2 worldPos : TEXCOORD1;
	};

	v2f vert(appdata_t v)
	{
		v2f o;
		o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
		o.color = v.color;
		o.texcoord = v.texcoord;
		o.worldPos = TRANSFORM_TEX(v.vertex.xy, _MainTex);
		return o;
	}

	half4 frag(v2f IN) : COLOR
	{
		// calculate uv of mask texture in panel coordination  
		float2 panelUV = (1 - IN.worldPos) * 0.5f;

		// Sample the texture  
		half4 col = tex2D(_MainTex, IN.texcoord) * IN.color;
		col.a *= tex2D(_PanelMaskTex, panelUV).a;
		return col;
	}
		ENDCG
	}
	}
}