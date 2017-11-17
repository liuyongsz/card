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

// Spine.Unity.BoundingBoxFollower
struct BoundingBoxFollower_t2558310961;
// Spine.Slot
struct Slot_t306639170;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// System.String
struct String_t;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t3220183178;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Skin
struct Skin_t730126667;
// Spine.Attachment
struct Attachment_t2584075367;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton2265953470.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skin730126667.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"

// System.Void Spine.Unity.BoundingBoxFollower::.ctor()
extern "C"  void BoundingBoxFollower__ctor_m3597119262 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::.cctor()
extern "C"  void BoundingBoxFollower__cctor_m2949713197 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.Unity.BoundingBoxFollower::get_Slot()
extern "C"  Slot_t306639170 * BoundingBoxFollower_get_Slot_m3492348987 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.Unity.BoundingBoxFollower::get_CurrentAttachment()
extern "C"  BoundingBoxAttachment_t1898929740 * BoundingBoxFollower_get_CurrentAttachment_m396372225 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Unity.BoundingBoxFollower::get_CurrentAttachmentName()
extern "C"  String_t* BoundingBoxFollower_get_CurrentAttachmentName_m1758665029 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.BoundingBoxFollower::get_CurrentCollider()
extern "C"  PolygonCollider2D_t3220183178 * BoundingBoxFollower_get_CurrentCollider_m3353342614 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.BoundingBoxFollower::get_IsTrigger()
extern "C"  bool BoundingBoxFollower_get_IsTrigger_m4063584789 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::Start()
extern "C"  void BoundingBoxFollower_Start_m3263962554 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::OnEnable()
extern "C"  void BoundingBoxFollower_OnEnable_m1636162426 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::HandleRebuild(Spine.Unity.SkeletonRenderer)
extern "C"  void BoundingBoxFollower_HandleRebuild_m2597065311 (BoundingBoxFollower_t2558310961 * __this, SkeletonRenderer_t2265953470 * ___sr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::Initialize(System.Boolean)
extern "C"  void BoundingBoxFollower_Initialize_m1131734845 (BoundingBoxFollower_t2558310961 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::AddSkin(Spine.Skin,System.Int32)
extern "C"  void BoundingBoxFollower_AddSkin_m2236656825 (BoundingBoxFollower_t2558310961 * __this, Skin_t730126667 * ___skin0, int32_t ___slotIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::OnDisable()
extern "C"  void BoundingBoxFollower_OnDisable_m3518564331 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::ClearState()
extern "C"  void BoundingBoxFollower_ClearState_m722835530 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::DisposeColliders()
extern "C"  void BoundingBoxFollower_DisposeColliders_m1981775694 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::LateUpdate()
extern "C"  void BoundingBoxFollower_LateUpdate_m1389694487 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::MatchAttachment(Spine.Attachment)
extern "C"  void BoundingBoxFollower_MatchAttachment_m3203006052 (BoundingBoxFollower_t2558310961 * __this, Attachment_t2584075367 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
