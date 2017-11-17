#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_t2385315007;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
extern "C"  void ColorCorrectionLookup__ctor_m4122754856 (ColorCorrectionLookup_t2385315007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
extern "C"  bool ColorCorrectionLookup_CheckResources_m3110598415 (ColorCorrectionLookup_t2385315007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
extern "C"  void ColorCorrectionLookup_OnDisable_m3140290877 (ColorCorrectionLookup_t2385315007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C"  void ColorCorrectionLookup_OnDestroy_m4258511571 (ColorCorrectionLookup_t2385315007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
extern "C"  void ColorCorrectionLookup_SetIdentityLut_m1059134669 (ColorCorrectionLookup_t2385315007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
extern "C"  bool ColorCorrectionLookup_ValidDimensions_m2993190419 (ColorCorrectionLookup_t2385315007 * __this, Texture2D_t3542995729 * ___tex2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
extern "C"  void ColorCorrectionLookup_Convert_m2446822723 (ColorCorrectionLookup_t2385315007 * __this, Texture2D_t3542995729 * ___temp2DTex0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorCorrectionLookup_OnRenderImage_m1666458312 (ColorCorrectionLookup_t2385315007 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
