Shader "QiYou/CustomMask"
 
{
 
   Properties
 
   {
 
      _MainTex ("Base (RGB)", 2D) = "white" {}
 
      _Mask ("Mask", 2D) = "white" {}
 

 
   }
 
   SubShader
 
   {
 
      Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
 
      Lighting Off
 
      ZWrite Off
 
	  Blend SrcAlpha OneMinusSrcAlpha
 
      Pass
 
      {
 
         SetTexture [_Mask] {combine texture*previous }
 
		 SetTexture[_MainTex]{ combine texture,previous }
      }
 
   }
 
}