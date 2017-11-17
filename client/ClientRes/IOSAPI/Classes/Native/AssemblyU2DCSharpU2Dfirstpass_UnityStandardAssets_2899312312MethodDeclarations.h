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

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t2899312312;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"

// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
extern "C"  void NoiseAndGrain__ctor_m1782204299 (NoiseAndGrain_t2899312312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern "C"  void NoiseAndGrain__cctor_m3621263484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::Awake()
extern "C"  void NoiseAndGrain_Awake_m3669591654 (NoiseAndGrain_t2899312312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C"  bool NoiseAndGrain_CheckResources_m2210580422 (NoiseAndGrain_t2899312312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseAndGrain_OnRenderImage_m530087239 (NoiseAndGrain_t2899312312 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,UnityEngine.Mesh,System.Int32)
extern "C"  void NoiseAndGrain_DrawNoiseQuadGrid_m1312964343 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___fxMaterial2, Texture2D_t3542995729 * ___noise3, Mesh_t1356156583 * ___mesh4, int32_t ___passNr5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::BuildMesh(UnityEngine.Mesh,UnityEngine.RenderTexture,UnityEngine.Texture2D)
extern "C"  void NoiseAndGrain_BuildMesh_m3531264760 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, RenderTexture_t2666733923 * ___source1, Texture2D_t3542995729 * ___noise2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::BuildMeshUV0(UnityEngine.Mesh,System.Int32,System.Int32,System.Single,System.Int32)
extern "C"  void NoiseAndGrain_BuildMeshUV0_m1714065745 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, int32_t ___width1, int32_t ___height2, float ___noiseSize3, int32_t ___noiseWidth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
