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

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t3313275655;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
extern "C"  void Blur__ctor_m3867513340 (Blur_t3313275655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
extern "C"  void Blur__cctor_m3569254027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
extern "C"  Material_t193706927 * Blur_get_material_m558356233 (Blur_t3313275655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
extern "C"  void Blur_OnDisable_m3653382605 (Blur_t3313275655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
extern "C"  void Blur_Start_m3670401716 (Blur_t3313275655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void Blur_FourTapCone_m2320768989 (Blur_t3313275655 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Blur_DownSample4x_m4159473394 (Blur_t3313275655 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Blur_OnRenderImage_m1818314892 (Blur_t3313275655 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
