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

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t2806915419;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C"  void ScreenSpaceAmbientOcclusion__ctor_m1396293022 (ScreenSpaceAmbientOcclusion_t2806915419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C"  Material_t193706927 * ScreenSpaceAmbientOcclusion_CreateMaterial_m2734699998 (Il2CppObject * __this /* static, unused */, Shader_t2430389951 * ___shader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C"  void ScreenSpaceAmbientOcclusion_DestroyMaterial_m248713313 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C"  void ScreenSpaceAmbientOcclusion_OnDisable_m3890992241 (ScreenSpaceAmbientOcclusion_t2806915419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C"  void ScreenSpaceAmbientOcclusion_Start_m978530734 (ScreenSpaceAmbientOcclusion_t2806915419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C"  void ScreenSpaceAmbientOcclusion_OnEnable_m31980366 (ScreenSpaceAmbientOcclusion_t2806915419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C"  void ScreenSpaceAmbientOcclusion_CreateMaterials_m2065620540 (ScreenSpaceAmbientOcclusion_t2806915419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ScreenSpaceAmbientOcclusion_OnRenderImage_m3458025086 (ScreenSpaceAmbientOcclusion_t2806915419 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
