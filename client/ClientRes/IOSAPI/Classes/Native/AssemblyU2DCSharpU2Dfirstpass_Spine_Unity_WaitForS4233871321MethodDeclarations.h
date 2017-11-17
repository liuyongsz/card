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

// Spine.Unity.WaitForSpineEvent
struct WaitForSpineEvent_t4233871321;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.EventData
struct EventData_t937912058;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationState1491536497.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_EventData937912058.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton1845683983.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Event1819867114.h"

// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,Spine.EventData,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m2635809890 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, EventData_t937912058 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,Spine.EventData,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m159767747 (WaitForSpineEvent_t4233871321 * __this, SkeletonAnimation_t1845683983 * ___skeletonAnimation0, EventData_t937912058 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,System.String,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m2160807181 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,System.String,System.Boolean)
extern "C"  void WaitForSpineEvent__ctor_m254650040 (WaitForSpineEvent_t4233871321 * __this, SkeletonAnimation_t1845683983 * ___skeletonAnimation0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.MoveNext()
extern "C"  bool WaitForSpineEvent_System_Collections_IEnumerator_MoveNext_m4095031695 (WaitForSpineEvent_t4233871321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.Reset()
extern "C"  void WaitForSpineEvent_System_Collections_IEnumerator_Reset_m772049866 (WaitForSpineEvent_t4233871321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * WaitForSpineEvent_System_Collections_IEnumerator_get_Current_m3833557362 (WaitForSpineEvent_t4233871321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::Subscribe(Spine.AnimationState,Spine.EventData,System.Boolean)
extern "C"  void WaitForSpineEvent_Subscribe_m1087038066 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, EventData_t937912058 * ___eventDataReference1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::SubscribeByName(Spine.AnimationState,System.String,System.Boolean)
extern "C"  void WaitForSpineEvent_SubscribeByName_m1126951693 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, String_t* ___eventName1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEventByName(Spine.TrackEntry,Spine.Event)
extern "C"  void WaitForSpineEvent_HandleAnimationStateEventByName_m994365564 (WaitForSpineEvent_t4233871321 * __this, TrackEntry_t4106063311 * ___trackEntry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEvent(Spine.TrackEntry,Spine.Event)
extern "C"  void WaitForSpineEvent_HandleAnimationStateEvent_m681559954 (WaitForSpineEvent_t4233871321 * __this, TrackEntry_t4106063311 * ___trackEntry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.WaitForSpineEvent::get_WillUnsubscribeAfterFiring()
extern "C"  bool WaitForSpineEvent_get_WillUnsubscribeAfterFiring_m647840299 (WaitForSpineEvent_t4233871321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::set_WillUnsubscribeAfterFiring(System.Boolean)
extern "C"  void WaitForSpineEvent_set_WillUnsubscribeAfterFiring_m3178890840 (WaitForSpineEvent_t4233871321 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,Spine.EventData,System.Boolean)
extern "C"  WaitForSpineEvent_t4233871321 * WaitForSpineEvent_NowWaitFor_m1117763236 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, EventData_t937912058 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,System.String,System.Boolean)
extern "C"  WaitForSpineEvent_t4233871321 * WaitForSpineEvent_NowWaitFor_m2037835495 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.WaitForSpineEvent::Clear(Spine.AnimationState)
extern "C"  void WaitForSpineEvent_Clear_m1078220449 (WaitForSpineEvent_t4233871321 * __this, AnimationState_t1491536497 * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
