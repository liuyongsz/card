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

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t3904103385;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1921949650.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
extern "C"  void DepthOfFieldDeprecated__ctor_m841702888 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
extern "C"  void DepthOfFieldDeprecated__cctor_m3710233213 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
extern "C"  void DepthOfFieldDeprecated_CreateMaterials_m2422625202 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
extern "C"  bool DepthOfFieldDeprecated_CheckResources_m300688241 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
extern "C"  void DepthOfFieldDeprecated_OnDisable_m2054654835 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
extern "C"  void DepthOfFieldDeprecated_OnEnable_m1806340052 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
extern "C"  float DepthOfFieldDeprecated_FocalDistance01_m3119655596 (DepthOfFieldDeprecated_t3904103385 * __this, float ___worldDist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
extern "C"  int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m1029203290 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C"  int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m745424125 (DepthOfFieldDeprecated_t3904103385 * __this, int32_t ___baseDivider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_OnRenderImage_m3035210980 (DepthOfFieldDeprecated_t3904103385 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfFieldDeprecated_Blur_m3245089251 (DepthOfFieldDeprecated_t3904103385 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfFieldDeprecated_BlurFg_m781261820 (DepthOfFieldDeprecated_t3904103385 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_BlurHex_m969497294 (DepthOfFieldDeprecated_t3904103385 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, int32_t ___blurPass2, float ___spread3, RenderTexture_t2666733923 * ___tmp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_Downsample_m111394270 (DepthOfFieldDeprecated_t3904103385 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_AddBokeh_m1306128414 (DepthOfFieldDeprecated_t3904103385 * __this, RenderTexture_t2666733923 * ___bokehInfo0, RenderTexture_t2666733923 * ___tempTex1, RenderTexture_t2666733923 * ___finalTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
extern "C"  void DepthOfFieldDeprecated_ReleaseTextures_m2072123983 (DepthOfFieldDeprecated_t3904103385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C"  void DepthOfFieldDeprecated_AllocateTextures_m614128492 (DepthOfFieldDeprecated_t3904103385 * __this, bool ___blurForeground0, RenderTexture_t2666733923 * ___source1, int32_t ___divider2, int32_t ___lowTexDivider3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
