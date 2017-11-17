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

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t2913820361;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C"  void BloomAndFlares__ctor_m3958772920 (BloomAndFlares_t2913820361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C"  bool BloomAndFlares_CheckResources_m2032558133 (BloomAndFlares_t2913820361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_OnRenderImage_m195660476 (BloomAndFlares_t2913820361 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_AddTo_m1774733021 (BloomAndFlares_t2913820361 * __this, float ___intensity_0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_BlendFlares_m540501892 (BloomAndFlares_t2913820361 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_BrightFilter_m1564178514 (BloomAndFlares_t2913820361 * __this, float ___thresh0, float ___useAlphaAsMask1, RenderTexture_t2666733923 * ___from2, RenderTexture_t2666733923 * ___to3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_Vignette_m1126753941 (BloomAndFlares_t2913820361 * __this, float ___amount0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
