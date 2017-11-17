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

// Spine.Unity.Modules.SkeletonRenderSeparator
struct SkeletonRenderSeparator_t1604422724;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t1881716398;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2265953470.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton1881716398.h"

// System.Void Spine.Unity.Modules.SkeletonRenderSeparator::.ctor()
extern "C"  void SkeletonRenderSeparator__ctor_m3987858148 (SkeletonRenderSeparator_t1604422724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonRenderer Spine.Unity.Modules.SkeletonRenderSeparator::get_SkeletonRenderer()
extern "C"  SkeletonRenderer_t2265953470 * SkeletonRenderSeparator_get_SkeletonRenderer_m113273600 (SkeletonRenderSeparator_t1604422724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRenderSeparator::set_SkeletonRenderer(Spine.Unity.SkeletonRenderer)
extern "C"  void SkeletonRenderSeparator_set_SkeletonRenderer_m1791013081 (SkeletonRenderSeparator_t1604422724 * __this, SkeletonRenderer_t2265953470 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.Modules.SkeletonRenderSeparator Spine.Unity.Modules.SkeletonRenderSeparator::AddToSkeletonRenderer(Spine.Unity.SkeletonRenderer,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  SkeletonRenderSeparator_t1604422724 * SkeletonRenderSeparator_AddToSkeletonRenderer_m1749828429 (Il2CppObject * __this /* static, unused */, SkeletonRenderer_t2265953470 * ___skeletonRenderer0, int32_t ___sortingLayerID1, int32_t ___extraPartsRenderers2, int32_t ___sortingOrderIncrement3, int32_t ___baseSortingOrder4, bool ___addMinimumPartsRenderers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRenderSeparator::OnEnable()
extern "C"  void SkeletonRenderSeparator_OnEnable_m554830840 (SkeletonRenderSeparator_t1604422724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRenderSeparator::OnDisable()
extern "C"  void SkeletonRenderSeparator_OnDisable_m2529165671 (SkeletonRenderSeparator_t1604422724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRenderSeparator::HandleRender(Spine.Unity.SkeletonRendererInstruction)
extern "C"  void SkeletonRenderSeparator_HandleRender_m3497448348 (SkeletonRenderSeparator_t1604422724 * __this, SkeletonRendererInstruction_t1881716398 * ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
