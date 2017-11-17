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

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t2152133263;
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

// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m154078936 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t193706927 * PostEffectsBase_CheckShaderAndCreateMaterial_m1396976238 (PostEffectsBase_t2152133263 * __this, Shader_t2430389951 * ___s0, Material_t193706927 * ___m2Create1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t193706927 * PostEffectsBase_CreateMaterial_m4276295864 (PostEffectsBase_t2152133263 * __this, Shader_t2430389951 * ___s0, Material_t193706927 * ___m2Create1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern "C"  void PostEffectsBase_OnEnable_m2430438472 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnDestroy()
extern "C"  void PostEffectsBase_OnDestroy_m2991969835 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::RemoveCreatedMaterials()
extern "C"  void PostEffectsBase_RemoveCreatedMaterials_m3648892036 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern "C"  bool PostEffectsBase_CheckSupport_m1953254801 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern "C"  bool PostEffectsBase_CheckResources_m3232165183 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern "C"  void PostEffectsBase_Start_m3321895624 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m286341078 (PostEffectsBase_t2152133263 * __this, bool ___needDepth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m1834872057 (PostEffectsBase_t2152133263 * __this, bool ___needDepth0, bool ___needHdr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern "C"  bool PostEffectsBase_Dx11Support_m4161884587 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m2502513401 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C"  bool PostEffectsBase_CheckShader_m3354041777 (PostEffectsBase_t2152133263 * __this, Shader_t2430389951 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C"  void PostEffectsBase_NotSupported_m3628363867 (PostEffectsBase_t2152133263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsBase_DrawBorder_m1795230774 (PostEffectsBase_t2152133263 * __this, RenderTexture_t2666733923 * ___dest0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
