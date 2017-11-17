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

// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.AnimationStateData
struct AnimationStateData_t3672895841;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3162965251;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.RotateTimeline
struct RotateTimeline_t2591156164;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.String
struct String_t;
// Spine.Animation
struct Animation_t4237671184;
// Spine.Event
struct Event_t1819867114;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState3672895841.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState_737668607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState_818460179.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_RotateTimeline2591156164.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Animation4237671184.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Event1819867114.h"

// System.Void Spine.AnimationState::.ctor(Spine.AnimationStateData)
extern "C"  void AnimationState__ctor_m3360698309 (AnimationState_t1491536497 * __this, AnimationStateData_t3672895841 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::.cctor()
extern "C"  void AnimationState__cctor_m1361024840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Start_m543767616 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Start(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Start_m3029402567 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Interrupt_m3856879667 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Interrupt(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Interrupt_m4175788976 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_End_m2300613599 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_End(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_End_m3018372322 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Dispose_m2732274039 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Dispose(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Dispose_m2685521266 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_add_Complete_m3102395157 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Complete(Spine.AnimationState/TrackEntryDelegate)
extern "C"  void AnimationState_remove_Complete_m3939217326 (AnimationState_t1491536497 * __this, TrackEntryDelegate_t737668607 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void AnimationState_add_Event_m93904328 (AnimationState_t1491536497 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::remove_Event(Spine.AnimationState/TrackEntryEventDelegate)
extern "C"  void AnimationState_remove_Event_m3801300999 (AnimationState_t1491536497 * __this, TrackEntryEventDelegate_t818460179 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationStateData Spine.AnimationState::get_Data()
extern "C"  AnimationStateData_t3672895841 * AnimationState_get_Data_m1046702135 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::get_Tracks()
extern "C"  ExposedList_1_t3162965251 * AnimationState_get_Tracks_m1713808915 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationState::get_TimeScale()
extern "C"  float AnimationState_get_TimeScale_m926257837 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::set_TimeScale(System.Single)
extern "C"  void AnimationState_set_TimeScale_m1023491608 (AnimationState_t1491536497 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::Update(System.Single)
extern "C"  void AnimationState_Update_m1336038603 (AnimationState_t1491536497 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.AnimationState::UpdateMixingFrom(Spine.TrackEntry,System.Single)
extern "C"  bool AnimationState_UpdateMixingFrom_m260299353 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___to0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.AnimationState::Apply(Spine.Skeleton)
extern "C"  bool AnimationState_Apply_m3334071849 (AnimationState_t1491536497 * __this, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationState::ApplyMixingFrom(Spine.TrackEntry,Spine.Skeleton,Spine.MixPose)
extern "C"  float AnimationState_ApplyMixingFrom_m1617766399 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___to0, Skeleton_t1387859465 * ___skeleton1, int32_t ___currentPose2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ApplyRotateTimeline(Spine.RotateTimeline,Spine.Skeleton,System.Single,System.Single,Spine.MixPose,System.Single[],System.Int32,System.Boolean)
extern "C"  void AnimationState_ApplyRotateTimeline_m3720692289 (Il2CppObject * __this /* static, unused */, RotateTimeline_t2591156164 * ___rotateTimeline0, Skeleton_t1387859465 * ___skeleton1, float ___time2, float ___alpha3, int32_t ___pose4, SingleU5BU5D_t577127397* ___timelinesRotation5, int32_t ___i6, bool ___firstFrame7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::QueueEvents(Spine.TrackEntry,System.Single)
extern "C"  void AnimationState_QueueEvents_m3051432238 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, float ___animationTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ClearTracks()
extern "C"  void AnimationState_ClearTracks_m939007732 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::ClearTrack(System.Int32)
extern "C"  void AnimationState_ClearTrack_m969578224 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::SetCurrent(System.Int32,Spine.TrackEntry,System.Boolean)
extern "C"  void AnimationState_SetCurrent_m4010312538 (AnimationState_t1491536497 * __this, int32_t ___index0, TrackEntry_t4106063311 * ___current1, bool ___interrupt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,System.String,System.Boolean)
extern "C"  TrackEntry_t4106063311 * AnimationState_SetAnimation_m2039957262 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, String_t* ___animationName1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,Spine.Animation,System.Boolean)
extern "C"  TrackEntry_t4106063311 * AnimationState_SetAnimation_m4045602247 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, Animation_t4237671184 * ___animation1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,System.String,System.Boolean,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_AddAnimation_m716041834 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, String_t* ___animationName1, bool ___loop2, float ___delay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,Spine.Animation,System.Boolean,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_AddAnimation_m1993469029 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, Animation_t4237671184 * ___animation1, bool ___loop2, float ___delay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::SetEmptyAnimation(System.Int32,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_SetEmptyAnimation_m4150217397 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, float ___mixDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::AddEmptyAnimation(System.Int32,System.Single,System.Single)
extern "C"  TrackEntry_t4106063311 * AnimationState_AddEmptyAnimation_m1550980607 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, float ___mixDuration1, float ___delay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::SetEmptyAnimations(System.Single)
extern "C"  void AnimationState_SetEmptyAnimations_m3464828136 (AnimationState_t1491536497 * __this, float ___mixDuration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::ExpandToIndex(System.Int32)
extern "C"  TrackEntry_t4106063311 * AnimationState_ExpandToIndex_m835223456 (AnimationState_t1491536497 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::NewTrackEntry(System.Int32,Spine.Animation,System.Boolean,Spine.TrackEntry)
extern "C"  TrackEntry_t4106063311 * AnimationState_NewTrackEntry_m118674164 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, Animation_t4237671184 * ___animation1, bool ___loop2, TrackEntry_t4106063311 * ___last3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::DisposeNext(Spine.TrackEntry)
extern "C"  void AnimationState_DisposeNext_m3729693483 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::AnimationsChanged()
extern "C"  void AnimationState_AnimationsChanged_m3865843576 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TrackEntry Spine.AnimationState::GetCurrent(System.Int32)
extern "C"  TrackEntry_t4106063311 * AnimationState_GetCurrent_m4168120644 (AnimationState_t1491536497 * __this, int32_t ___trackIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.AnimationState::ToString()
extern "C"  String_t* AnimationState_ToString_m3421784208 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnStart(Spine.TrackEntry)
extern "C"  void AnimationState_OnStart_m245376044 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnInterrupt(Spine.TrackEntry)
extern "C"  void AnimationState_OnInterrupt_m3440358417 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnEnd(Spine.TrackEntry)
extern "C"  void AnimationState_OnEnd_m3201301825 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnDispose(Spine.TrackEntry)
extern "C"  void AnimationState_OnDispose_m1721630161 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnComplete(Spine.TrackEntry)
extern "C"  void AnimationState_OnComplete_m2374590771 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::OnEvent(Spine.TrackEntry,Spine.Event)
extern "C"  void AnimationState_OnEvent_m3722816697 (AnimationState_t1491536497 * __this, TrackEntry_t4106063311 * ___entry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState::<AnimationState>m__0()
extern "C"  void AnimationState_U3CAnimationStateU3Em__0_m1708464261 (AnimationState_t1491536497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
