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

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_t1171761296;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
extern "C"  void Tonemapping__ctor_m3980320865 (Tonemapping_t1171761296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
extern "C"  bool Tonemapping_CheckResources_m1211792666 (Tonemapping_t1171761296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
extern "C"  float Tonemapping_UpdateCurve_m1038168945 (Tonemapping_t1171761296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
extern "C"  void Tonemapping_OnDisable_m1763928686 (Tonemapping_t1171761296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
extern "C"  bool Tonemapping_CreateInternalRenderTexture_m3134250051 (Tonemapping_t1171761296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Tonemapping_OnRenderImage_m3226543009 (Tonemapping_t1171761296 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
