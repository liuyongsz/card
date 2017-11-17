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

// EventDelegate
struct EventDelegate_t3496309181;
// EventDelegate/Callback
struct Callback_t2100910411;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EventDelegate_Callback2100910411.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_EventDelegate3496309181.h"

// System.Void EventDelegate::.ctor()
extern "C"  void EventDelegate__ctor_m2299761462 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(EventDelegate/Callback)
extern "C"  void EventDelegate__ctor_m411819485 (EventDelegate_t3496309181 * __this, Callback_t2100910411 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(UnityEngine.MonoBehaviour,System.String)
extern "C"  void EventDelegate__ctor_m2888970243 (EventDelegate_t3496309181 * __this, MonoBehaviour_t1158329972 * ___target0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.cctor()
extern "C"  void EventDelegate__cctor_m653694455 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour EventDelegate::get_target()
extern "C"  MonoBehaviour_t1158329972 * EventDelegate_get_target_m3861111904 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_target(UnityEngine.MonoBehaviour)
extern "C"  void EventDelegate_set_target_m1286255617 (EventDelegate_t3496309181 * __this, MonoBehaviour_t1158329972 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::get_methodName()
extern "C"  String_t* EventDelegate_get_methodName_m763391736 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_methodName(System.String)
extern "C"  void EventDelegate_set_methodName_m192248011 (EventDelegate_t3496309181 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isValid()
extern "C"  bool EventDelegate_get_isValid_m1178029433 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isEnabled()
extern "C"  bool EventDelegate_get_isEnabled_m2583839878 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::GetMethodName(EventDelegate/Callback)
extern "C"  String_t* EventDelegate_GetMethodName_m3597393048 (Il2CppObject * __this /* static, unused */, Callback_t2100910411 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(EventDelegate/Callback)
extern "C"  bool EventDelegate_IsValid_m3229982457 (Il2CppObject * __this /* static, unused */, Callback_t2100910411 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Equals(System.Object)
extern "C"  bool EventDelegate_Equals_m758127873 (EventDelegate_t3496309181 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EventDelegate::GetHashCode()
extern "C"  int32_t EventDelegate_GetHashCode_m3027540415 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate/Callback EventDelegate::Get()
extern "C"  Callback_t2100910411 * EventDelegate_Get_m2644479628 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(EventDelegate/Callback)
extern "C"  void EventDelegate_Set_m2083814623 (EventDelegate_t3496309181 * __this, Callback_t2100910411 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(UnityEngine.MonoBehaviour,System.String)
extern "C"  void EventDelegate_Set_m2269586457 (EventDelegate_t3496309181 * __this, MonoBehaviour_t1158329972 * ___target0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Execute()
extern "C"  bool EventDelegate_Execute_m1523559931 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Clear()
extern "C"  void EventDelegate_Clear_m4274405105 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::ToString()
extern "C"  String_t* EventDelegate_ToString_m4047749251 (EventDelegate_t3496309181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Execute(System.Collections.Generic.List`1<EventDelegate>)
extern "C"  void EventDelegate_Execute_m2619747658 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(System.Collections.Generic.List`1<EventDelegate>)
extern "C"  bool EventDelegate_IsValid_m3028331449 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C"  void EventDelegate_Set_m2610520740 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, Callback_t2100910411 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C"  void EventDelegate_Set_m1144085276 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, EventDelegate_t3496309181 * ___del1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C"  void EventDelegate_Add_m518413049 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, Callback_t2100910411 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback,System.Boolean)
extern "C"  void EventDelegate_Add_m3746244636 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, Callback_t2100910411 * ___callback1, bool ___oneShot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C"  void EventDelegate_Add_m861600403 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, EventDelegate_t3496309181 * ___ev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate,System.Boolean)
extern "C"  void EventDelegate_Add_m2489558498 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, EventDelegate_t3496309181 * ___ev1, bool ___oneShot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C"  bool EventDelegate_Remove_m1436672136 (Il2CppObject * __this /* static, unused */, List_1_t2865430313 * ___list0, Callback_t2100910411 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
