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

// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3162965251;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// Spine.Animation
struct Animation_t4237671184;
// Spine.Event
struct Event_t1819867114;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState_737668607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState_818460179.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Event1819867114.h"

// System.Void Spine.TrackEntry::.ctor()
extern "C"  void TrackEntry__ctor_m2022550197 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Start_m4048921386 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Start_m631637385 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Interrupt_m2500972273 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Interrupt_m261936010 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_End_m4119846977 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_End_m1521084152 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Dispose_m1824618441 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Dispose_m2393216664 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_add_Complete_m105912879 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void TrackEntry_remove_Complete_m2816907392 (TrackEntry_t4106063311 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void TrackEntry_add_Event_m3878662578 (TrackEntry_t4106063311 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::remove_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void TrackEntry_remove_Event_m3521130713 (TrackEntry_t4106063311 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::Reset()
extern "C"  void TrackEntry_Reset_m2821990948 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.TrackEntry::SetTimelineData(Spine.TrackEntry,Spine.ExposedList`1<Spine.TrackEntry>,System.Collections.Generic.HashSet`1<System.Int32>)
extern "C"  TrackEntry_t4106063311 * TrackEntry_SetTimelineData_m2634935242 (TrackEntry_t4106063311 * __this, TrackEntry_t4106063311 * ___to0, ExposedList_1_t3162965251 * ___mixingToArray1, HashSet_1_t405338302 * ___propertyIDs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.TrackEntry::HasTimeline(System.Int32)
extern "C"  bool TrackEntry_HasTimeline_m318872757 (TrackEntry_t4106063311 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TrackEntry::get_TrackIndex()
extern "C"  int32_t TrackEntry_get_TrackIndex_m3686927687 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Animation Spine.TrackEntry::get_Animation()
extern "C"  Animation_t4237671184 * TrackEntry_get_Animation_m252347886 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.TrackEntry::get_Loop()
extern "C"  bool TrackEntry_get_Loop_m3729739802 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Loop(System.Boolean)
extern "C"  void TrackEntry_set_Loop_m2866285795 (TrackEntry_t4106063311 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Delay()
extern "C"  float TrackEntry_get_Delay_m108547083 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Delay(System.Single)
extern "C"  void TrackEntry_set_Delay_m1398305428 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TrackTime()
extern "C"  float TrackEntry_get_TrackTime_m4239711788 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TrackTime(System.Single)
extern "C"  void TrackEntry_set_TrackTime_m1559631583 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TrackEnd()
extern "C"  float TrackEntry_get_TrackEnd_m3919970892 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TrackEnd(System.Single)
extern "C"  void TrackEntry_set_TrackEnd_m2195138457 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationStart()
extern "C"  float TrackEntry_get_AnimationStart_m739412874 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AnimationStart(System.Single)
extern "C"  void TrackEntry_set_AnimationStart_m1426141995 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationEnd()
extern "C"  float TrackEntry_get_AnimationEnd_m2769268815 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AnimationEnd(System.Single)
extern "C"  void TrackEntry_set_AnimationEnd_m2797698726 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationLast()
extern "C"  float TrackEntry_get_AnimationLast_m177523056 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AnimationLast(System.Single)
extern "C"  void TrackEntry_set_AnimationLast_m3749886165 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AnimationTime()
extern "C"  float TrackEntry_get_AnimationTime_m1847645385 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_TimeScale()
extern "C"  float TrackEntry_get_TimeScale_m1012110887 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_TimeScale(System.Single)
extern "C"  void TrackEntry_set_TimeScale_m2177726942 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_Alpha()
extern "C"  float TrackEntry_get_Alpha_m663665098 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_Alpha(System.Single)
extern "C"  void TrackEntry_set_Alpha_m414235285 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_EventThreshold()
extern "C"  float TrackEntry_get_EventThreshold_m1889493837 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_EventThreshold(System.Single)
extern "C"  void TrackEntry_set_EventThreshold_m1698711638 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_AttachmentThreshold()
extern "C"  float TrackEntry_get_AttachmentThreshold_m1928200470 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_AttachmentThreshold(System.Single)
extern "C"  void TrackEntry_set_AttachmentThreshold_m4070022831 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_DrawOrderThreshold()
extern "C"  float TrackEntry_get_DrawOrderThreshold_m1968670979 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_DrawOrderThreshold(System.Single)
extern "C"  void TrackEntry_set_DrawOrderThreshold_m2569528144 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.TrackEntry::get_Next()
extern "C"  TrackEntry_t4106063311 * TrackEntry_get_Next_m2791182070 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.TrackEntry::get_IsComplete()
extern "C"  bool TrackEntry_get_IsComplete_m4068597047 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_MixTime()
extern "C"  float TrackEntry_get_MixTime_m4054820767 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_MixTime(System.Single)
extern "C"  void TrackEntry_set_MixTime_m1711006784 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TrackEntry::get_MixDuration()
extern "C"  float TrackEntry_get_MixDuration_m3695038900 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::set_MixDuration(System.Single)
extern "C"  void TrackEntry_set_MixDuration_m1706752423 (TrackEntry_t4106063311 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.TrackEntry::get_MixingFrom()
extern "C"  TrackEntry_t4106063311 * TrackEntry_get_MixingFrom_m926554817 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnStart()
extern "C"  void TrackEntry_OnStart_m3160081672 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnInterrupt()
extern "C"  void TrackEntry_OnInterrupt_m687090291 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnEnd()
extern "C"  void TrackEntry_OnEnd_m1527300719 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnDispose()
extern "C"  void TrackEntry_OnDispose_m1956392951 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnComplete()
extern "C"  void TrackEntry_OnComplete_m3074833553 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::OnEvent(Spine.Event)
extern "C"  void TrackEntry_OnEvent_m1264942763 (TrackEntry_t4106063311 * __this, Event_t1819867114 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TrackEntry::ResetRotationDirections()
extern "C"  void TrackEntry_ResetRotationDirections_m1938626068 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.TrackEntry::ToString()
extern "C"  String_t* TrackEntry_ToString_m68541854 (TrackEntry_t4106063311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
