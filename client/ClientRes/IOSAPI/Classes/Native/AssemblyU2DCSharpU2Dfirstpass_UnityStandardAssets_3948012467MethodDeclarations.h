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

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t3948012467;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
extern "C"  void GlobalFog__ctor_m2176678068 (GlobalFog_t3948012467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C"  bool GlobalFog_CheckResources_m3808611923 (GlobalFog_t3948012467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlobalFog_OnRenderImage_m125621316 (GlobalFog_t3948012467 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void GlobalFog_CustomGraphicsBlit_m3746634560 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___fxMaterial2, int32_t ___passNr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
