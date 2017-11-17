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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t3133742431;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C"  void ContrastStretch__ctor_m978085810 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C"  Material_t193706927 * ContrastStretch_get_materialLum_m2454572189 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C"  Material_t193706927 * ContrastStretch_get_materialReduce_m1160236341 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C"  Material_t193706927 * ContrastStretch_get_materialAdapt_m4233200373 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C"  Material_t193706927 * ContrastStretch_get_materialApply_m4119574793 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C"  void ContrastStretch_Start_m1559844706 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C"  void ContrastStretch_OnEnable_m4265764290 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C"  void ContrastStretch_OnDisable_m2309819453 (ContrastStretch_t3133742431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretch_OnRenderImage_m978658482 (ContrastStretch_t3133742431 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretch_CalculateAdaptation_m884799509 (ContrastStretch_t3133742431 * __this, Texture_t2243626319 * ___curTexture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
