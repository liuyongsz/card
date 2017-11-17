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

// AsyncTrigger
struct AsyncTrigger_t2868772296;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// AsyncTrigger/OnTrigger
struct OnTrigger_t3198001564;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_AsyncTrigger_OnTrigger3198001564.h"

// System.Void AsyncTrigger::.ctor()
extern "C"  void AsyncTrigger__ctor_m3625771865 (AsyncTrigger_t2868772296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger::.cctor()
extern "C"  void AsyncTrigger__cctor_m2050716026 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AsyncTrigger::IsTargetValid(System.Object)
extern "C"  bool AsyncTrigger_IsTargetValid_m3034800172 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___oFuncTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AsyncTrigger::CreateTimeTrigger(System.String,System.Single,AsyncTrigger/OnTrigger,System.Object[])
extern "C"  bool AsyncTrigger_CreateTimeTrigger_m3871311763 (Il2CppObject * __this /* static, unused */, String_t* ___strTriggerName0, float ___fDelayTime1, OnTrigger_t3198001564 * ___onTrigger2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger::OnTriggerTimer(System.Object[])
extern "C"  void AsyncTrigger_OnTriggerTimer_m682280243 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AsyncTrigger::CreateCountTrigger(System.String,System.Single,System.Int32,AsyncTrigger/OnTrigger,System.Object[])
extern "C"  bool AsyncTrigger_CreateCountTrigger_m581539092 (Il2CppObject * __this /* static, unused */, String_t* ___strTriggerName0, float ___fDelayTime1, int32_t ___iCount2, OnTrigger_t3198001564 * ___onTrigger3, ObjectU5BU5D_t3614634134* ___args4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger::OnTriggerCountTimer(System.Object[])
extern "C"  void AsyncTrigger_OnTriggerCountTimer_m3145082136 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger::CreateFrameTrigger(System.Int32,AsyncTrigger/OnTrigger,System.Object[])
extern "C"  void AsyncTrigger_CreateFrameTrigger_m669912405 (Il2CppObject * __this /* static, unused */, int32_t ___frameDelay0, OnTrigger_t3198001564 * ___onTrigger1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger::UpdateFrameTrigger()
extern "C"  void AsyncTrigger_UpdateFrameTrigger_m2267047437 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AsyncTrigger::CreateTrigger(System.String,System.Int32)
extern "C"  bool AsyncTrigger_CreateTrigger_m2228555936 (Il2CppObject * __this /* static, unused */, String_t* ___strTriggerName0, int32_t ___iTriggerCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger::Trigger(System.String,AsyncTrigger/OnTrigger,System.Object[])
extern "C"  void AsyncTrigger_Trigger_m318081419 (Il2CppObject * __this /* static, unused */, String_t* ___strTriggerName0, OnTrigger_t3198001564 * ___onTrigger1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
