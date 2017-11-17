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

// Spine.Skin
struct Skin_t730126667;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.AnimationState
struct AnimationState_t1491536497;
// System.String
struct String_t;
// Spine.Attachment
struct Attachment_t2584075367;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState1491536497.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skin730126667.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"

// Spine.Skin Spine.Unity.Modules.AttachmentTools.SkinExtensions::UnshareSkin(Spine.Skeleton,System.Boolean,System.Boolean,Spine.AnimationState)
extern "C"  Skin_t730126667 * SkinExtensions_UnshareSkin_m250080191 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, bool ___includeDefaultSkin1, bool ___unshareAttachments2, AnimationState_t1491536497 * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SkinExtensions::GetClonedSkin(Spine.Skeleton,System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  Skin_t730126667 * SkinExtensions_GetClonedSkin_m4261856271 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, String_t* ___newSkinName1, bool ___includeDefaultSkin2, bool ___cloneAttachments3, bool ___cloneMeshesAsLinked4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SkinExtensions::GetClone(Spine.Skin)
extern "C"  Skin_t730126667 * SkinExtensions_GetClone_m1656309543 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SkinExtensions::SetAttachment(Spine.Skin,System.String,System.String,Spine.Attachment,Spine.Skeleton)
extern "C"  void SkinExtensions_SetAttachment_m362702230 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, String_t* ___slotName1, String_t* ___keyName2, Attachment_t2584075367 * ___attachment3, Skeleton_t1387859465 * ___skeleton4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.Modules.AttachmentTools.SkinExtensions::GetAttachment(Spine.Skin,System.String,System.String,Spine.Skeleton)
extern "C"  Attachment_t2584075367 * SkinExtensions_GetAttachment_m215839461 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, String_t* ___slotName1, String_t* ___keyName2, Skeleton_t1387859465 * ___skeleton3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SkinExtensions::SetAttachment(Spine.Skin,System.Int32,System.String,Spine.Attachment)
extern "C"  void SkinExtensions_SetAttachment_m1774263139 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, int32_t ___slotIndex1, String_t* ___keyName2, Attachment_t2584075367 * ___attachment3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.AttachmentTools.SkinExtensions::RemoveAttachment(Spine.Skin,System.String,System.String,Spine.Skeleton)
extern "C"  bool SkinExtensions_RemoveAttachment_m635449856 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, String_t* ___slotName1, String_t* ___keyName2, Skeleton_t1387859465 * ___skeleton3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.AttachmentTools.SkinExtensions::RemoveAttachment(Spine.Skin,System.Int32,System.String)
extern "C"  bool SkinExtensions_RemoveAttachment_m1453179385 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, int32_t ___slotIndex1, String_t* ___keyName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SkinExtensions::Clear(Spine.Skin)
extern "C"  void SkinExtensions_Clear_m241594584 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___skin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SkinExtensions::Append(Spine.Skin,Spine.Skin)
extern "C"  void SkinExtensions_Append_m2889199811 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___destination0, Skin_t730126667 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SkinExtensions::CopyTo(Spine.Skin,Spine.Skin,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void SkinExtensions_CopyTo_m573995540 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___source0, Skin_t730126667 * ___destination1, bool ___overwrite2, bool ___cloneAttachments3, bool ___cloneMeshesAsLinked4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
