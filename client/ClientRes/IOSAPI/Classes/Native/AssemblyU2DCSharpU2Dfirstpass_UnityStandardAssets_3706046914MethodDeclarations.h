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

// UnityStandardAssets.ImageEffects.Antialiasing
struct Antialiasing_t3706046914;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.Antialiasing::.ctor()
extern "C"  void Antialiasing__ctor_m2255685329 (Antialiasing_t3706046914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::CurrentAAMaterial()
extern "C"  Material_t193706927 * Antialiasing_CurrentAAMaterial_m2139030664 (Antialiasing_t3706046914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::CheckResources()
extern "C"  bool Antialiasing_CheckResources_m1311726984 (Antialiasing_t3706046914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Antialiasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Antialiasing_OnRenderImage_m1082391353 (Antialiasing_t3706046914 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
