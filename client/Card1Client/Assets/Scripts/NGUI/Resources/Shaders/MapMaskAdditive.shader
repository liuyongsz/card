Shader "Transparent/Mask_Additive"
{
	Properties
	{
		_TintColor ("Tint Color", Color) = (0.5,0.5,0.5,0.5)
		_MainTex ("Particle Texture", 2D) = "white" {}
		_TransparentMask("Transparent Texture(A)", 2D) = "white" {}
		_AlphaMask ("Alpha Texture", 2D) = "white" {}
	}

	Category
	{
			Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
			Blend SrcAlpha OneMinusSrcAlpha
			AlphaTest Greater .01
			ColorMask RGB
			Cull Off Lighting Off ZWrite Off Fog { Color (0,0,0,0) }
	
			// ---- Fragment program cards
			SubShader
			{
				Pass
				{
				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#pragma fragmentoption ARB_precision_hint_fastest
	
				#include "UnityCG.cginc"
				
				sampler2D _MainTex;
				sampler2D _TransparentMask;
				sampler2D _AlphaMask;
				fixed4 _TintColor;
				
				struct appdata_t {
					float4 vertex : POSITION;
					float2 texcoord : TEXCOORD0;
					float2 texcoord2 : TEXCOORD1;
				};
	
				struct v2f {
					float4 vertex : POSITION;
					float2 texcoord : TEXCOORD0;
					float2 texcoord2 : TEXCOORD1;
				};
				
				float4 _MainTex_ST;
				float4 _TransparentMask_ST;
				float4 _AlphaMask_ST;
				
				v2f vert (appdata_t v)
				{
					v2f o;
					o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
					o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
					o.texcoord2 = TRANSFORM_TEX(v.texcoord2, _TransparentMask);
					
					return o;
				}
				
				fixed4 frag (v2f i) : COLOR
				{
					fixed4 mainTex = tex2D(_MainTex, i.texcoord);
					fixed4 maskTex = tex2D(_TransparentMask, i.texcoord2);
					fixed4 alphaTex = tex2D(_AlphaMask, i.texcoord);
 					
					fixed4 final;
					final.rgb = mainTex.rgb;
					final.a = maskTex.r * mainTex.a * alphaTex.r;
					
					return final;
				}
				ENDCG 
			}
		}
	}
}
