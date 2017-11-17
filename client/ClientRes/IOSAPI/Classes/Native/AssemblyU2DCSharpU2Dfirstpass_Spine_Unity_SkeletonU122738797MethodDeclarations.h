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

// Spine.Unity.SkeletonUtility
struct SkeletonUtility_t122738797;
// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t3188065966;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t3220183178;
// Spine.Skeleton
struct Skeleton_t1387859465;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// Spine.Slot
struct Slot_t306639170;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t1082253919;
// Spine.Unity.SkeletonUtilityConstraint
struct SkeletonUtilityConstraint_t1397591976;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// Spine.Bone
struct Bone_t4151268332;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton3188065966.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_BoundingBoxAtt1898929740.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Slot306639170.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_PolygonCollider2D3220183178.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2265953470.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton1082253919.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton1397591976.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton3330739987.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Bone4151268332.h"

// System.Void Spine.Unity.SkeletonUtility::.ctor()
extern "C"  void SkeletonUtility__ctor_m1552902404 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::add_OnReset(Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate)
extern "C"  void SkeletonUtility_add_OnReset_m3215945732 (SkeletonUtility_t122738797 * __this, SkeletonUtilityDelegate_t3188065966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::remove_OnReset(Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate)
extern "C"  void SkeletonUtility_remove_OnReset_m3511846109 (SkeletonUtility_t122738797 * __this, SkeletonUtilityDelegate_t3188065966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxGameObject(Spine.Skeleton,System.String,System.String,System.String,UnityEngine.Transform,System.Boolean)
extern "C"  PolygonCollider2D_t3220183178 * SkeletonUtility_AddBoundingBoxGameObject_m165795695 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, String_t* ___skinName1, String_t* ___slotName2, String_t* ___attachmentName3, Transform_t3275118058 * ___parent4, bool ___isTrigger5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxGameObject(System.String,Spine.BoundingBoxAttachment,Spine.Slot,UnityEngine.Transform,System.Boolean)
extern "C"  PolygonCollider2D_t3220183178 * SkeletonUtility_AddBoundingBoxGameObject_m2068530967 (Il2CppObject * __this /* static, unused */, String_t* ___name0, BoundingBoxAttachment_t1898929740 * ___box1, Slot_t306639170 * ___slot2, Transform_t3275118058 * ___parent3, bool ___isTrigger4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxAsComponent(Spine.BoundingBoxAttachment,Spine.Slot,UnityEngine.GameObject,System.Boolean,System.Boolean,System.Single)
extern "C"  PolygonCollider2D_t3220183178 * SkeletonUtility_AddBoundingBoxAsComponent_m627374878 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t1898929740 * ___box0, Slot_t306639170 * ___slot1, GameObject_t1756533147 * ___gameObject2, bool ___isTrigger3, bool ___isKinematic4, float ___gravityScale5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::SetColliderPointsLocal(UnityEngine.PolygonCollider2D,Spine.Slot,Spine.BoundingBoxAttachment)
extern "C"  void SkeletonUtility_SetColliderPointsLocal_m1461332641 (Il2CppObject * __this /* static, unused */, PolygonCollider2D_t3220183178 * ___collider0, Slot_t306639170 * ___slot1, BoundingBoxAttachment_t1898929740 * ___box2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Spine.Unity.SkeletonUtility::GetBoundingBoxBounds(Spine.BoundingBoxAttachment,System.Single)
extern "C"  Bounds_t3033363703  SkeletonUtility_GetBoundingBoxBounds_m664014719 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t1898929740 * ___boundingBox0, float ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::Update()
extern "C"  void SkeletonUtility_Update_m3346778855 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::OnEnable()
extern "C"  void SkeletonUtility_OnEnable_m3732708864 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::Start()
extern "C"  void SkeletonUtility_Start_m2765141856 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::OnDisable()
extern "C"  void SkeletonUtility_OnDisable_m141683751 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::HandleRendererReset(Spine.Unity.SkeletonRenderer)
extern "C"  void SkeletonUtility_HandleRendererReset_m2217095354 (SkeletonUtility_t122738797 * __this, SkeletonRenderer_t2265953470 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::RegisterBone(Spine.Unity.SkeletonUtilityBone)
extern "C"  void SkeletonUtility_RegisterBone_m1189956590 (SkeletonUtility_t122738797 * __this, SkeletonUtilityBone_t1082253919 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UnregisterBone(Spine.Unity.SkeletonUtilityBone)
extern "C"  void SkeletonUtility_UnregisterBone_m471783215 (SkeletonUtility_t122738797 * __this, SkeletonUtilityBone_t1082253919 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::RegisterConstraint(Spine.Unity.SkeletonUtilityConstraint)
extern "C"  void SkeletonUtility_RegisterConstraint_m1523852142 (SkeletonUtility_t122738797 * __this, SkeletonUtilityConstraint_t1397591976 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UnregisterConstraint(Spine.Unity.SkeletonUtilityConstraint)
extern "C"  void SkeletonUtility_UnregisterConstraint_m2722736175 (SkeletonUtility_t122738797 * __this, SkeletonUtilityConstraint_t1397591976 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::CollectBones()
extern "C"  void SkeletonUtility_CollectBones_m3626190281 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateLocal(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateLocal_m3630029548 (SkeletonUtility_t122738797 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateWorld(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateWorld_m3014906073 (SkeletonUtility_t122738797 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateComplete(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateComplete_m3027071040 (SkeletonUtility_t122738797 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateAllBones()
extern "C"  void SkeletonUtility_UpdateAllBones_m3109828295 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Spine.Unity.SkeletonUtility::GetBoneRoot()
extern "C"  Transform_t3275118058 * SkeletonUtility_GetBoneRoot_m1146909192 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnRoot(Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnRoot_m2012950386 (SkeletonUtility_t122738797 * __this, int32_t ___mode0, bool ___pos1, bool ___rot2, bool ___sca3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnHierarchy(Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnHierarchy_m4003322011 (SkeletonUtility_t122738797 * __this, int32_t ___mode0, bool ___pos1, bool ___rot2, bool ___sca3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnBoneRecursively(Spine.Bone,UnityEngine.Transform,Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnBoneRecursively_m2383184055 (SkeletonUtility_t122738797 * __this, Bone_t4151268332 * ___bone0, Transform_t3275118058 * ___parent1, int32_t ___mode2, bool ___pos3, bool ___rot4, bool ___sca5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnBone(Spine.Bone,UnityEngine.Transform,Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnBone_m3973609182 (SkeletonUtility_t122738797 * __this, Bone_t4151268332 * ___bone0, Transform_t3275118058 * ___parent1, int32_t ___mode2, bool ___pos3, bool ___rot4, bool ___sca5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
