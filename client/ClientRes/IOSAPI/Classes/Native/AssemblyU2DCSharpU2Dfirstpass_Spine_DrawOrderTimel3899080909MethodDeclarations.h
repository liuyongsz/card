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

// Spine.DrawOrderTimeline
struct DrawOrderTimeline_t3899080909;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3750818532;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.DrawOrderTimeline::.ctor(System.Int32)
extern "C"  void DrawOrderTimeline__ctor_m1575582384 (DrawOrderTimeline_t3899080909 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.DrawOrderTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* DrawOrderTimeline_get_Frames_m3616739552 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::set_Frames(System.Single[])
extern "C"  void DrawOrderTimeline_set_Frames_m2004441251 (DrawOrderTimeline_t3899080909 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[][] Spine.DrawOrderTimeline::get_DrawOrders()
extern "C"  Int32U5BU5DU5BU5D_t3750818532* DrawOrderTimeline_get_DrawOrders_m3329005725 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::set_DrawOrders(System.Int32[][])
extern "C"  void DrawOrderTimeline_set_DrawOrders_m3267728278 (DrawOrderTimeline_t3899080909 * __this, Int32U5BU5DU5BU5D_t3750818532* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DrawOrderTimeline::get_FrameCount()
extern "C"  int32_t DrawOrderTimeline_get_FrameCount_m328622030 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DrawOrderTimeline::get_PropertyId()
extern "C"  int32_t DrawOrderTimeline_get_PropertyId_m3144755354 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::SetFrame(System.Int32,System.Single,System.Int32[])
extern "C"  void DrawOrderTimeline_SetFrame_m2189908899 (DrawOrderTimeline_t3899080909 * __this, int32_t ___frameIndex0, float ___time1, Int32U5BU5D_t3030399641* ___drawOrder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void DrawOrderTimeline_Apply_m3655270229 (DrawOrderTimeline_t3899080909 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, int32_t ___pose5, int32_t ___direction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
