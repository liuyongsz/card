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

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t3259153605;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
extern "C"  void Bloom__ctor_m1865167582 (Bloom_t3259153605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C"  bool Bloom_CheckResources_m1363177885 (Bloom_t3259153605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m1185507218 (Bloom_t3259153605 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_AddTo_m1531939061 (Bloom_t3259153605 * __this, float ___intensity_0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BlendFlares_m238198298 (Bloom_t3259153605 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m1667744505 (Bloom_t3259153605 * __this, float ___thresh0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m2932110658 (Bloom_t3259153605 * __this, Color_t2020392075  ___threshColor0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_Vignette_m1114423573 (Bloom_t3259153605 * __this, float ___amount0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
