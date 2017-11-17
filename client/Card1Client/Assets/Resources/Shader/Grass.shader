Shader "Custom/Grass" {
	Properties{
		_MainTex("Grass Texture", 2D) = "white" {}
		_TimeScale("Time Scale", float) = 1
		_MinY("MinY",float) = 0.5
	}

		SubShader{
		Tags{ "Queue" = "Transparent" "RenderType" = "Opaque" "IgnoreProject" = "True" }
		Pass{
		Tags{ "LightMode" = "ForwardBase" }

		ZWrite Off
		Blend SrcAlpha OneMinusSrcAlpha
		Cull Off

		CGPROGRAM
#pragma vertex vert  
#pragma fragment frag  
#include "UnityCG.cginc"   

		sampler2D _MainTex;
		half _TimeScale;
		half _MinY;

	struct a2v {
		float4 vertex : POSITION;
		float4 texcoord : TEXCOORD0;
	};

	struct v2f {
		float4 pos : SV_POSITION;
		float2 uv : TEXCOORD0;
	};


	v2f vert(a2v v) {
		v2f o;
		float4 offset = float4(0,0,0,0);
		float ty = _Time.y;
		

		float dis = 3.1416 * ty * clamp(v.texcoord.y - _MinY, 0, 1);
		
		offset.x = sin(dis)  * _TimeScale;

		o.pos = mul(UNITY_MATRIX_MVP, v.vertex + offset);
		o.uv = v.texcoord.xy;
		return o;
	}

	fixed4 frag(v2f i) : SV_Target{
		return tex2D(_MainTex, i.uv);
	}

		ENDCG
	}
	}
		FallBack Off
}