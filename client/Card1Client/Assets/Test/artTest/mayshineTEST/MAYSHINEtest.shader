Shader "Custom/Transparent"   
{  
    Properties   
    {  
        _MainTex ("Base (RGB)", 2D) = "white" {}  
        _Color("MainColor",Color)=(1.0,1.0,1.0,1.0)  
    }  
    SubShader   
    {  
        Tags { "RenderType"="Transparent" }  
        LOD 200  
          
        CGPROGRAM  
        #pragma surface surf Lambert  
          
        fixed4 _Color;  
        sampler2D _MainTex;  
  
        struct Input   
        {  
            float2 uv_MainTex;  
        };        
          
        void surf (Input IN, inout SurfaceOutput o)   
        {  
            half4 c = tex2D (_MainTex, IN.uv_MainTex)*_Color;  
            o.Albedo = c.rgb;  
            o.Alpha = c.a;  
        }  
        ENDCG  
    }   
    FallBack "Diffuse"  
}  