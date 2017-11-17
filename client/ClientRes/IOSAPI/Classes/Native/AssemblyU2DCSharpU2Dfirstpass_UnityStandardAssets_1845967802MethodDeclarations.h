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

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t1845967802;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
extern "C"  void PostEffectsHelper__ctor_m2923551651 (PostEffectsHelper_t1845967802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void PostEffectsHelper_OnRenderImage_m3279810143 (PostEffectsHelper_t1845967802 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C"  void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m3544702975 (Il2CppObject * __this /* static, unused */, float ___dist0, RenderTexture_t2666733923 * ___source1, RenderTexture_t2666733923 * ___dest2, Material_t193706927 * ___material3, Camera_t189460977 * ___cameraForProjectionMatrix4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawBorder_m2048598613 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___dest0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawLowLevelQuad_m335766524 (Il2CppObject * __this /* static, unused */, float ___x10, float ___x21, float ___y12, float ___y23, RenderTexture_t2666733923 * ___source4, RenderTexture_t2666733923 * ___dest5, Material_t193706927 * ___material6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
