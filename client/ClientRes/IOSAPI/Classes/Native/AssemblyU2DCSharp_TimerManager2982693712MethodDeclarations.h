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

// TimerManager
struct TimerManager_t2982693712;
// System.String
struct String_t;
// TimerManager/TimerManagerHandler
struct TimerManagerHandler_t3618852277;
// TimerManager/TimerManagerHandlerArgs
struct TimerManagerHandlerArgs_t2673666506;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// TimerManager/TimerManagerCountHandlerArgs
struct TimerManagerCountHandlerArgs_t3148830105;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_TimerManager_TimerManagerHandler3618852277.h"
#include "AssemblyU2DCSharp_TimerManager_TimerManagerHandler2673666506.h"
#include "AssemblyU2DCSharp_TimerManager_TimerManagerCountHa3148830105.h"
#include "AssemblyU2DCSharp_TimerManager_TIMER_MODE3322086008.h"

// System.Void TimerManager::.ctor()
extern "C"  void TimerManager__ctor_m1403743927 (TimerManager_t2982693712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager::.cctor()
extern "C"  void TimerManager__cctor_m57534666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager::ClearTimer()
extern "C"  void TimerManager_ClearTimer_m1770716321 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager::Update()
extern "C"  void TimerManager_Update_m40428590 (TimerManager_t2982693712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddTimer(System.String,System.Single,TimerManager/TimerManagerHandler)
extern "C"  bool TimerManager_AddTimer_m2723790293 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerHandler_t3618852277 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddTimer(System.String,System.Single,TimerManager/TimerManagerHandlerArgs,System.Object[])
extern "C"  bool TimerManager_AddTimer_m2896988368 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerHandlerArgs_t2673666506 * ___handler2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddTimerRepeat(System.String,System.Single,TimerManager/TimerManagerHandler)
extern "C"  bool TimerManager_AddTimerRepeat_m1267378374 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerHandler_t3618852277 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddTimerRepeat(System.String,System.Single,TimerManager/TimerManagerHandlerArgs,System.Object[])
extern "C"  bool TimerManager_AddTimerRepeat_m1542665321 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerHandlerArgs_t2673666506 * ___handler2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddTimerCount(System.String,System.Single,TimerManager/TimerManagerCountHandlerArgs,System.Object[])
extern "C"  bool TimerManager_AddTimerCount_m2154328594 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerCountHandlerArgs_t3148830105 * ___handler2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddDelayTimer(System.String,System.Single,TimerManager/TimerManagerHandler)
extern "C"  bool TimerManager_AddDelayTimer_m1708788654 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerHandler_t3618852277 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::AddDelayTimer(System.String,System.Single,TimerManager/TimerManagerHandlerArgs,System.Object[])
extern "C"  bool TimerManager_AddDelayTimer_m2542809727 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___duration1, TimerManagerHandlerArgs_t2673666506 * ___handler2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager::ClearTimerWithPrefix(System.String)
extern "C"  void TimerManager_ClearTimerWithPrefix_m2763704697 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::Destroy(System.String,System.Boolean)
extern "C"  bool TimerManager_Destroy_m476770154 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___cleanAddList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::IsHaveTimer(System.String)
extern "C"  bool TimerManager_IsHaveTimer_m2979347212 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::Internal_AddTimer(System.String,TimerManager/TIMER_MODE,System.Single,TimerManager/TimerManagerHandler)
extern "C"  bool TimerManager_Internal_AddTimer_m1544140989 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___mode1, float ___duration2, TimerManagerHandler_t3618852277 * ___handler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::Internal_AddTimer(System.String,TimerManager/TIMER_MODE,System.Single,TimerManager/TimerManagerHandlerArgs,System.Object[])
extern "C"  bool TimerManager_Internal_AddTimer_m1605071534 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___mode1, float ___duration2, TimerManagerHandlerArgs_t2673666506 * ___handler3, ObjectU5BU5D_t3614634134* ___args4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::Internal_AddTimer(System.String,TimerManager/TIMER_MODE,System.Single,TimerManager/TimerManagerCountHandlerArgs,System.Object[])
extern "C"  bool TimerManager_Internal_AddTimer_m2272159389 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___mode1, float ___duration2, TimerManagerCountHandlerArgs_t3148830105 * ___handler3, ObjectU5BU5D_t3614634134* ___args4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TimerManager::IsRunning(System.String)
extern "C"  bool TimerManager_IsRunning_m3654130676 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
