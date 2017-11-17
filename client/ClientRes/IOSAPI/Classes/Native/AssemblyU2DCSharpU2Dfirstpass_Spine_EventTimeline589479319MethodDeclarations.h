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

// Spine.EventTimeline
struct EventTimeline_t589479319;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Event[]
struct EventU5BU5D_t182593839;
// Spine.Event
struct Event_t1819867114;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Event1819867114.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.EventTimeline::.ctor(System.Int32)
extern "C"  void EventTimeline__ctor_m1362550646 (EventTimeline_t589479319 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.EventTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* EventTimeline_get_Frames_m2803755674 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::set_Frames(System.Single[])
extern "C"  void EventTimeline_set_Frames_m2648913817 (EventTimeline_t589479319 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Event[] Spine.EventTimeline::get_Events()
extern "C"  EventU5BU5D_t182593839* EventTimeline_get_Events_m3859461757 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::set_Events(Spine.Event[])
extern "C"  void EventTimeline_set_Events_m583737184 (EventTimeline_t589479319 * __this, EventU5BU5D_t182593839* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.EventTimeline::get_FrameCount()
extern "C"  int32_t EventTimeline_get_FrameCount_m3579250444 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.EventTimeline::get_PropertyId()
extern "C"  int32_t EventTimeline_get_PropertyId_m3207206296 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::SetFrame(System.Int32,Spine.Event)
extern "C"  void EventTimeline_SetFrame_m3804289712 (EventTimeline_t589479319 * __this, int32_t ___frameIndex0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void EventTimeline_Apply_m3280337455 (EventTimeline_t589479319 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, int32_t ___pose5, int32_t ___direction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
