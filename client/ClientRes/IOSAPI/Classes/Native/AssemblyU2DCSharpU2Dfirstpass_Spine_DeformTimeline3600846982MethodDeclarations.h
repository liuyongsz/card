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

// Spine.DeformTimeline
struct DeformTimeline_t3600846982;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t2115305192;
// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_VertexAttachme2755655897.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.DeformTimeline::.ctor(System.Int32)
extern "C"  void DeformTimeline__ctor_m2873167071 (DeformTimeline_t3600846982 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::.cctor()
extern "C"  void DeformTimeline__cctor_m704431493 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DeformTimeline::get_SlotIndex()
extern "C"  int32_t DeformTimeline_get_SlotIndex_m458666379 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_SlotIndex(System.Int32)
extern "C"  void DeformTimeline_set_SlotIndex_m326471920 (DeformTimeline_t3600846982 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.DeformTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* DeformTimeline_get_Frames_m2581918921 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Frames(System.Single[])
extern "C"  void DeformTimeline_set_Frames_m1827776264 (DeformTimeline_t3600846982 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[][] Spine.DeformTimeline::get_Vertices()
extern "C"  SingleU5BU5DU5BU5D_t2115305192* DeformTimeline_get_Vertices_m1575983340 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Vertices(System.Single[][])
extern "C"  void DeformTimeline_set_Vertices_m2867368487 (DeformTimeline_t3600846982 * __this, SingleU5BU5DU5BU5D_t2115305192* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.VertexAttachment Spine.DeformTimeline::get_Attachment()
extern "C"  VertexAttachment_t2755655897 * DeformTimeline_get_Attachment_m3877340443 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::set_Attachment(Spine.VertexAttachment)
extern "C"  void DeformTimeline_set_Attachment_m829863000 (DeformTimeline_t3600846982 * __this, VertexAttachment_t2755655897 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DeformTimeline::get_PropertyId()
extern "C"  int32_t DeformTimeline_get_PropertyId_m2799214207 (DeformTimeline_t3600846982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::SetFrame(System.Int32,System.Single,System.Single[])
extern "C"  void DeformTimeline_SetFrame_m3620649212 (DeformTimeline_t3600846982 * __this, int32_t ___frameIndex0, float ___time1, SingleU5BU5D_t577127397* ___vertices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DeformTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void DeformTimeline_Apply_m2123664738 (DeformTimeline_t3600846982 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, int32_t ___pose5, int32_t ___direction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
