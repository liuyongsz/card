//优化变量类型
//共享UV坐标
//减少处理的光源个数
//让Shader只工作在特定的渲染器上
//使用近似值代替精确值
//以及减少或压缩贴图
Shader "QiYou/MobileTest" {
	Properties {
		_Diffuse("Base (RGB) Specular Amount (A)", 2D) = "white" {}
		_NormalMap("Normal Map", 2D) = "bump"{}
		_SpecIntensity("Specular Width", Range(0.01, 1)) = 0.5
	}
	SubShader {
		Tags { "RenderType"="Opaque" }
		LOD 200
		
		CGPROGRAM

		//用一个介于光照方向和观察方向之间的half vector来代替真正的观察方向viewDir来计算光照函数
		#pragma surface surf MobileBlinnPhong exclude_path:prepass nolightmap noforwardadd halfasview

		// Use shader model 3.0 target, to get nicer looking lighting
		#pragma target 3.0

		struct Input
		{
			half2 uv_Diffuse;
		};

		sampler2D _Diffuse;
		sampler2D _NormalMap;
		fixed _SpecIntensity;

	

		inline fixed4 LightingMobileBlinnPhong(SurfaceOutput s, fixed3 lightDir, fixed3 halfDir, fixed atten)
		{
			fixed diff = max(0, dot(s.Normal, lightDir));
			fixed nh = max(0, dot(s.Normal, halfDir));
			fixed spec = pow(nh, s.Specular * 128) * s.Gloss;

			fixed4 c;
			c.rgb = (s.Albedo * _LightColor0.rgb * diff + _LightColor0.rgb * spec) * (atten * 2);
			c.a = 0.0;
			return c;
		}

		void surf(Input IN, inout SurfaceOutput o)
		{
			fixed4 diffuseTex = tex2D(_Diffuse, IN.uv_Diffuse);
			o.Albedo = diffuseTex.rgb;
			o.Gloss = diffuseTex.a;
			o.Alpha = 0.0;
			o.Specular = _SpecIntensity;
			o.Normal = UnpackNormal(tex2D(_NormalMap, IN.uv_Diffuse));
		}
		ENDCG
	}
	FallBack "Diffuse"
}
