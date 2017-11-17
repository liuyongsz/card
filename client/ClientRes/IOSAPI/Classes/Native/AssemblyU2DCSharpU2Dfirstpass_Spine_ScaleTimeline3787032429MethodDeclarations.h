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

// Spine.ScaleTimeline
struct ScaleTimeline_t3787032429;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.ScaleTimeline::.ctor(System.Int32)
extern "C"  void ScaleTimeline__ctor_m3378382048 (ScaleTimeline_t3787032429 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.ScaleTimeline::get_PropertyId()
extern "C"  int32_t ScaleTimeline_get_PropertyId_m519851838 (ScaleTimeline_t3787032429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ScaleTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void ScaleTimeline_Apply_m3121892783 (ScaleTimeline_t3787032429 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, int32_t ___pose5, int32_t ___direction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
