Shader "Custom/Unlit - Transparent Colored Grayed (SoftClip)"
 {
	     Properties
		     {
		         _MainTex("Base (RGB)", 2D) = "white" {}
				 _AlphaTex("AlphaTex",2D) = "white"{}
		     }
	
		     SubShader{
		         LOD 100
		
		         Tags
		         {
		             "Queue" = "Transparent"
			             "IgnoreProjector" = "True"
			             "RenderType" = "Transparent"
			         }
	
		         pass
		         {
		             Cull Off
			             Lighting Off
			             ZWrite Off
			
			             Offset -1, -1
			             Fog
			             {
			                 Mode Off
				             }
		             ColorMask RGB
			             AlphaTest Greater .01
			             Blend SrcAlpha OneMinusSrcAlpha
			             ColorMaterial AmbientAndDiffuse
			
			             CGPROGRAM
			             #pragma vertex vert
			             #pragma fragment frag
			             #include "UnityCG.cginc"
			
			             sampler2D _MainTex;
		             float4 _MainTex_ST;

					 sampler2D _AlphaTex;
					 float4 _AlphaTex_ST;

		             float2 _ClipSharpness = float2(20.0, 20.0);
		
			             struct v2f
			             {
			                 //float4 vertex : POSITION;
			                 float4  pos : SV_POSITION;
			                 float2  uv : TEXCOORD0;
			                 float2 worldPos : TEXCOORD1;
			             };
		
			             v2f vert(appdata_base v)
			             {
			                 v2f o;
			                 o.pos = mul(UNITY_MATRIX_MVP, v.vertex);
			                 o.uv = v.texcoord;
			                 o.worldPos = TRANSFORM_TEX(v.vertex.xy, _MainTex);
			                 return o;
			             };
		
			             half4 frag(v2f i) : COLOR
			             {
			                 float2 factor = (float2(1.0, 1.0) - abs(i.worldPos)) * _ClipSharpness;
			                 half4 texcol = tex2D(_MainTex, i.uv);
							 float2 mula = tex2D(_AlphaTex, i.uv) * texcol.a;

			                 //texcol.rgb = (texcol.r + texcol.g + texcol.b) / 3;
							 texcol.a *= clamp(min(factor.x, factor.y), 0.0, 1.0) * mula;
			                 return texcol;
			             };
		             ENDCG
			         }
	 }
		     FallBack "Diffuse"
}