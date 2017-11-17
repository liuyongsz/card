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

// Spine.Unity.Modules.SkeletonGhostRenderer
struct SkeletonGhostRenderer_t1788769279;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::.ctor()
extern "C"  void SkeletonGhostRenderer__ctor_m1158608143 (SkeletonGhostRenderer_t1788769279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::Awake()
extern "C"  void SkeletonGhostRenderer_Awake_m2455663926 (SkeletonGhostRenderer_t1788769279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::Initialize(UnityEngine.Mesh,UnityEngine.Material[],UnityEngine.Color32,System.Boolean,System.Single,System.Int32,System.Int32)
extern "C"  void SkeletonGhostRenderer_Initialize_m1005023016 (SkeletonGhostRenderer_t1788769279 * __this, Mesh_t1356156583 * ___mesh0, MaterialU5BU5D_t3123989686* ___materials1, Color32_t874517518  ___color2, bool ___additive3, float ___speed4, int32_t ___sortingLayerID5, int32_t ___sortingOrder6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonGhostRenderer::Fade()
extern "C"  Il2CppObject * SkeletonGhostRenderer_Fade_m4268728347 (SkeletonGhostRenderer_t1788769279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonGhostRenderer::FadeAdditive()
extern "C"  Il2CppObject * SkeletonGhostRenderer_FadeAdditive_m2346628637 (SkeletonGhostRenderer_t1788769279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhostRenderer::Cleanup()
extern "C"  void SkeletonGhostRenderer_Cleanup_m2925531827 (SkeletonGhostRenderer_t1788769279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
