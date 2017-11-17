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

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t2855702160;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t3815339587;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t3836706226;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t1972914032;
// Spine.Skeleton
struct Skeleton_t1387859465;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2855702160.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_MeshGene3815339587.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton3836706226.h"

// System.Void Spine.Unity.SkeletonRenderer::.ctor()
extern "C"  void SkeletonRenderer__ctor_m3197696519 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_OnRebuild(Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate)
extern "C"  void SkeletonRenderer_add_OnRebuild_m1354197599 (SkeletonRenderer_t2265953470 * __this, SkeletonRendererDelegate_t2855702160 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_OnRebuild(Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate)
extern "C"  void SkeletonRenderer_remove_OnRebuild_m386169742 (SkeletonRenderer_t2265953470 * __this, SkeletonRendererDelegate_t2855702160 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_OnPostProcessVertices(Spine.Unity.MeshGeneratorDelegate)
extern "C"  void SkeletonRenderer_add_OnPostProcessVertices_m4209740971 (SkeletonRenderer_t2265953470 * __this, MeshGeneratorDelegate_t3815339587 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_OnPostProcessVertices(Spine.Unity.MeshGeneratorDelegate)
extern "C"  void SkeletonRenderer_remove_OnPostProcessVertices_m3831806038 (SkeletonRenderer_t2265953470 * __this, MeshGeneratorDelegate_t3815339587 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_generateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_add_generateMeshOverride_m100240239 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_generateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_remove_generateMeshOverride_m2999425090 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_GenerateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_add_GenerateMeshOverride_m1317281551 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_GenerateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_remove_GenerateMeshOverride_m1855698530 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::get_SkeletonDataAsset()
extern "C"  SkeletonDataAsset_t901153269 * SkeletonRenderer_get_SkeletonDataAsset_m2466038815 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::get_CustomMaterialOverride()
extern "C"  Dictionary_2_t3590089903 * SkeletonRenderer_get_CustomMaterialOverride_m278729078 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::get_CustomSlotMaterials()
extern "C"  Dictionary_2_t1972914032 * SkeletonRenderer_get_CustomSlotMaterials_m1452844512 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skeleton Spine.Unity.SkeletonRenderer::get_Skeleton()
extern "C"  Skeleton_t1387859465 * SkeletonRenderer_get_Skeleton_m1240139142 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::Awake()
extern "C"  void SkeletonRenderer_Awake_m3824125956 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::OnDisable()
extern "C"  void SkeletonRenderer_OnDisable_m1653065048 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::OnDestroy()
extern "C"  void SkeletonRenderer_OnDestroy_m2303387818 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::ClearState()
extern "C"  void SkeletonRenderer_ClearState_m1168370221 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::Initialize(System.Boolean)
extern "C"  void SkeletonRenderer_Initialize_m2629824684 (SkeletonRenderer_t2265953470 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::LateUpdate()
extern "C"  void SkeletonRenderer_LateUpdate_m3714174978 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
