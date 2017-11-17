Shader "QiYou/Snow" {
	Properties{
		_MainTex("Base (RGB)", 2D) = "white" {}
	_Bump("Bump", 2D) = "bump" {}
	_Snow("Snow Level", Range(0,1)) = 0
		_SnowColor("Snow Color", Color) = (1.0,1.0,1.0,1.0)
		_SnowDirection("Snow Direction", Vector) = (0,1,0)
		_SnowDepth("Snow Depth", Range(0,0.3)) = 0.1
	}
		SubShader{
		Tags{ "RenderType" = "Opaque" }
		LOD 200

		CGPROGRAM
#pragma surface surf Lambert vertex:vert

		sampler2D _MainTex;
	sampler2D _Bump;
	float _Snow;
	float4 _SnowColor;
	float4 _SnowDirection;
	float _SnowDepth;

	struct Input {
		float2 uv_MainTex;
		float2 uv_Bump;
		float3 worldNormal;
		INTERNAL_DATA
	};

	void surf(Input IN, inout SurfaceOutput o) {

		//该像素的真实颜色值
		half4 c = tex2D(_MainTex, IN.uv_MainTex);

		//从凹凸贴图中得到该像素的法向量
		o.Normal = UnpackNormal(tex2D(_Bump, IN.uv_Bump));

		//得到世界坐标系下的真正法向量（而非凹凸贴图产生的法向量）和雪落
		//下相反方向的点乘结果，即两者余弦值，并和_Snow（积雪程度）比较
		if (dot(WorldNormalVector(IN, o.Normal), _SnowDirection.xyz)>lerp(1,-1,_Snow))
			//此处我们可以看出_Snow参数只是一个插值项，当上述夹角余弦值大于
			//lerp(1,-1,_Snow)=1-2*_Snow时，即表示此处积雪覆盖，所以此值越大，
			//积雪程度程度越大。此时给覆盖积雪的区域填充雪的颜色
			o.Albedo = _SnowColor.rgb;
		else
			//否则使用物体原先颜色，表示未覆盖积雪 
			o.Albedo = c.rgb;
		o.Alpha = 1;
	}

	void vert(inout appdata_full v) {
		//将_SnowDirection转化到模型的局部坐标系下
		float4 sn = mul(UNITY_MATRIX_IT_MV, _SnowDirection);

		if (dot(v.normal, sn.xyz) >= lerp(1,-1, (_Snow * 2) / 3))
		{
			v.vertex.xyz += (sn.xyz + v.normal) * _SnowDepth * _Snow;
		}
	}
	ENDCG
	}
		FallBack "Diffuse"
}