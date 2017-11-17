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

// Spine.TwoColorTimeline
struct TwoColorTimeline_t424347280;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.TwoColorTimeline::.ctor(System.Int32)
extern "C"  void TwoColorTimeline__ctor_m3049224941 (TwoColorTimeline_t424347280 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.TwoColorTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* TwoColorTimeline_get_Frames_m1851049667 (TwoColorTimeline_t424347280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TwoColorTimeline::get_SlotIndex()
extern "C"  int32_t TwoColorTimeline_get_SlotIndex_m474098617 (TwoColorTimeline_t424347280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TwoColorTimeline::set_SlotIndex(System.Int32)
extern "C"  void TwoColorTimeline_set_SlotIndex_m3507027108 (TwoColorTimeline_t424347280 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TwoColorTimeline::get_PropertyId()
extern "C"  int32_t TwoColorTimeline_get_PropertyId_m4036281265 (TwoColorTimeline_t424347280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TwoColorTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void TwoColorTimeline_SetFrame_m3178731508 (TwoColorTimeline_t424347280 * __this, int32_t ___frameIndex0, float ___time1, float ___r2, float ___g3, float ___b4, float ___a5, float ___r26, float ___g27, float ___b28, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TwoColorTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void TwoColorTimeline_Apply_m1293989898 (TwoColorTimeline_t424347280 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, int32_t ___pose5, int32_t ___direction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
