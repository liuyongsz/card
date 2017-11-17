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

// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t2028984527;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t3815339587;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Texture
struct Texture_t2243626319;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t3385794548;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_UpdateBo2937009411.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_MeshGene3815339587.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_SkeletonD901153269.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"

// System.Void Spine.Unity.SkeletonGraphic::.ctor()
extern "C"  void SkeletonGraphic__ctor_m3789257084 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateLocal_m3562144827 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateLocal_m2878750190 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateWorld(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateWorld_m1874746704 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateWorld(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateWorld_m2198331075 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateComplete(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateComplete_m1537250371 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateComplete(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateComplete_m2232649020 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_OnPostProcessVertices(Spine.Unity.MeshGeneratorDelegate)
extern "C"  void SkeletonGraphic_add_OnPostProcessVertices_m1212692970 (SkeletonGraphic_t2028984527 * __this, MeshGeneratorDelegate_t3815339587 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_OnPostProcessVertices(Spine.Unity.MeshGeneratorDelegate)
extern "C"  void SkeletonGraphic_remove_OnPostProcessVertices_m1264523627 (SkeletonGraphic_t2028984527 * __this, MeshGeneratorDelegate_t3815339587 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::get_SkeletonDataAsset()
extern "C"  SkeletonDataAsset_t901153269 * SkeletonGraphic_get_SkeletonDataAsset_m2863352998 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonGraphic Spine.Unity.SkeletonGraphic::NewSkeletonGraphicGameObject(Spine.Unity.SkeletonDataAsset,UnityEngine.Transform)
extern "C"  SkeletonGraphic_t2028984527 * SkeletonGraphic_NewSkeletonGraphicGameObject_m4090657256 (Il2CppObject * __this /* static, unused */, SkeletonDataAsset_t901153269 * ___skeletonDataAsset0, Transform_t3275118058 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonGraphic Spine.Unity.SkeletonGraphic::AddSkeletonGraphicComponent(UnityEngine.GameObject,Spine.Unity.SkeletonDataAsset)
extern "C"  SkeletonGraphic_t2028984527 * SkeletonGraphic_AddSkeletonGraphicComponent_m3678164964 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, SkeletonDataAsset_t901153269 * ___skeletonDataAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Spine.Unity.SkeletonGraphic::get_OverrideTexture()
extern "C"  Texture_t2243626319 * SkeletonGraphic_get_OverrideTexture_m891981349 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::set_OverrideTexture(UnityEngine.Texture)
extern "C"  void SkeletonGraphic_set_OverrideTexture_m2818250040 (SkeletonGraphic_t2028984527 * __this, Texture_t2243626319 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Spine.Unity.SkeletonGraphic::get_mainTexture()
extern "C"  Texture_t2243626319 * SkeletonGraphic_get_mainTexture_m34805668 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Awake()
extern "C"  void SkeletonGraphic_Awake_m2595666101 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void SkeletonGraphic_Rebuild_m2238448045 (SkeletonGraphic_t2028984527 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Update()
extern "C"  void SkeletonGraphic_Update_m2318996313 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Update(System.Single)
extern "C"  void SkeletonGraphic_Update_m3802414920 (SkeletonGraphic_t2028984527 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::LateUpdate()
extern "C"  void SkeletonGraphic_LateUpdate_m3222712205 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skeleton Spine.Unity.SkeletonGraphic::get_Skeleton()
extern "C"  Skeleton_t1387859465 * SkeletonGraphic_get_Skeleton_m2166365825 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Unity.SkeletonGraphic::get_SkeletonData()
extern "C"  SkeletonData_t548167897 * SkeletonGraphic_get_SkeletonData_m4019289281 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.SkeletonGraphic::get_IsValid()
extern "C"  bool SkeletonGraphic_get_IsValid_m1174122317 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationState Spine.Unity.SkeletonGraphic::get_AnimationState()
extern "C"  AnimationState_t1491536497 * SkeletonGraphic_get_AnimationState_m2621217505 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGenerator Spine.Unity.SkeletonGraphic::get_MeshGenerator()
extern "C"  MeshGenerator_t3385794548 * SkeletonGraphic_get_MeshGenerator_m4265788320 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Spine.Unity.SkeletonGraphic::GetLastMesh()
extern "C"  Mesh_t1356156583 * SkeletonGraphic_GetLastMesh_m1699377888 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Clear()
extern "C"  void SkeletonGraphic_Clear_m922604817 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Initialize(System.Boolean)
extern "C"  void SkeletonGraphic_Initialize_m1124407387 (SkeletonGraphic_t2028984527 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::UpdateMesh()
extern "C"  void SkeletonGraphic_UpdateMesh_m783050830 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
