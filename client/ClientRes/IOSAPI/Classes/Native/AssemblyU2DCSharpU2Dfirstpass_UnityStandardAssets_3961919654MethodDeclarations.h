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

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t3961919654;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
extern "C"  void DepthOfField__ctor_m1597829995 (DepthOfField_t3961919654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
extern "C"  bool DepthOfField_CheckResources_m1290587016 (DepthOfField_t3961919654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
extern "C"  void DepthOfField_OnEnable_m1610048207 (DepthOfField_t3961919654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
extern "C"  void DepthOfField_OnDisable_m1530248112 (DepthOfField_t3961919654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
extern "C"  void DepthOfField_ReleaseComputeResources_m2132440968 (DepthOfField_t3961919654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
extern "C"  void DepthOfField_CreateComputeResources_m3618262879 (DepthOfField_t3961919654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
extern "C"  float DepthOfField_FocalDistance01_m4167199697 (DepthOfField_t3961919654 * __this, float ___worldDist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void DepthOfField_WriteCoc_m2932031918 (DepthOfField_t3961919654 * __this, RenderTexture_t2666733923 * ___fromTo0, bool ___fgDilate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField_OnRenderImage_m208386975 (DepthOfField_t3961919654 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
