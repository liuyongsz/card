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

// Spine.Unity.Modules.SkeletonPartsRenderer
struct SkeletonPartsRenderer_t2858800350;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t3385794548;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t2002718615;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock3303648957.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::.ctor()
extern "C"  void SkeletonPartsRenderer__ctor_m3949782542 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGenerator Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshGenerator()
extern "C"  MeshGenerator_t3385794548 * SkeletonPartsRenderer_get_MeshGenerator_m891237378 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshRenderer()
extern "C"  MeshRenderer_t1268241104 * SkeletonPartsRenderer_get_MeshRenderer_m391035729 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshFilter()
extern "C"  MeshFilter_t3026937449 * SkeletonPartsRenderer_get_MeshFilter_m2933133873 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::LazyIntialize()
extern "C"  void SkeletonPartsRenderer_LazyIntialize_m1894462743 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::ClearMesh()
extern "C"  void SkeletonPartsRenderer_ClearMesh_m3907691902 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::RenderParts(Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>,System.Int32,System.Int32)
extern "C"  void SkeletonPartsRenderer_RenderParts_m3382300277 (SkeletonPartsRenderer_t2858800350 * __this, ExposedList_1_t2002718615 * ___instructions0, int32_t ___startSubmesh1, int32_t ___endSubmesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
extern "C"  void SkeletonPartsRenderer_SetPropertyBlock_m1588428960 (SkeletonPartsRenderer_t2858800350 * __this, MaterialPropertyBlock_t3303648957 * ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.Modules.SkeletonPartsRenderer Spine.Unity.Modules.SkeletonPartsRenderer::NewPartsRendererGameObject(UnityEngine.Transform,System.String)
extern "C"  SkeletonPartsRenderer_t2858800350 * SkeletonPartsRenderer_NewPartsRendererGameObject_m37928965 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
