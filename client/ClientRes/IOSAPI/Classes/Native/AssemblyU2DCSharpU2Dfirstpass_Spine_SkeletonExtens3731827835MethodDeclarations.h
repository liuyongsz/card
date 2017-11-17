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

// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.Slot
struct Slot_t306639170;
// System.String
struct String_t;
// Spine.Animation
struct Animation_t4237671184;
// Spine.Skin
struct Skin_t730126667;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_t1953196499;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_VertexAttachme2755655897.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_TransformMode1744404211.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Slot306639170.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Animation4237671184.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skin730126667.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_SkeletonData548167897.h"

// System.Boolean Spine.SkeletonExtensions::IsWeighted(Spine.VertexAttachment)
extern "C"  bool SkeletonExtensions_IsWeighted_m1815396612 (Il2CppObject * __this /* static, unused */, VertexAttachment_t2755655897 * ___va0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonExtensions::InheritsRotation(Spine.TransformMode)
extern "C"  bool SkeletonExtensions_InheritsRotation_m751689231 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonExtensions::InheritsScale(Spine.TransformMode)
extern "C"  bool SkeletonExtensions_InheritsScale_m881994551 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetPropertyToSetupPose(Spine.Skeleton,System.Int32)
extern "C"  void SkeletonExtensions_SetPropertyToSetupPose_m3366713098 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, int32_t ___propertyID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetDrawOrderToSetupPose(Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetDrawOrderToSetupPose_m1708264222 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetColorToSetupPose(Spine.Slot)
extern "C"  void SkeletonExtensions_SetColorToSetupPose_m2562814244 (Il2CppObject * __this /* static, unused */, Slot_t306639170 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetAttachmentToSetupPose(Spine.Slot)
extern "C"  void SkeletonExtensions_SetAttachmentToSetupPose_m2659398506 (Il2CppObject * __this /* static, unused */, Slot_t306639170 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetSlotAttachmentToSetupPose(Spine.Skeleton,System.Int32)
extern "C"  void SkeletonExtensions_SetSlotAttachmentToSetupPose_m392037722 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, int32_t ___slotIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::PoseWithAnimation(Spine.Skeleton,System.String,System.Single,System.Boolean)
extern "C"  void SkeletonExtensions_PoseWithAnimation_m662145460 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, String_t* ___animationName1, float ___time2, bool ___loop3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::PoseSkeleton(Spine.Animation,Spine.Skeleton,System.Single,System.Boolean)
extern "C"  void SkeletonExtensions_PoseSkeleton_m1330209228 (Il2CppObject * __this /* static, unused */, Animation_t4237671184 * ___animation0, Skeleton_t1387859465 * ___skeleton1, float ___time2, bool ___loop3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::SetKeyedItemsToSetupPose(Spine.Animation,Spine.Skeleton)
extern "C"  void SkeletonExtensions_SetKeyedItemsToSetupPose_m66811369 (Il2CppObject * __this /* static, unused */, Animation_t4237671184 * ___animation0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::FindNamesForSlot(Spine.Skin,System.String,Spine.SkeletonData,System.Collections.Generic.List`1<System.String>)
extern "C"  void SkeletonExtensions_FindNamesForSlot_m1704807783 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, String_t* ___slotName1, SkeletonData_t548167897 * ___skeletonData2, List_1_t1398341365 * ___results3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonExtensions::FindAttachmentsForSlot(Spine.Skin,System.String,Spine.SkeletonData,System.Collections.Generic.List`1<Spine.Attachment>)
extern "C"  void SkeletonExtensions_FindAttachmentsForSlot_m3244776809 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, String_t* ___slotName1, SkeletonData_t548167897 * ___skeletonData2, List_1_t1953196499 * ___results3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
