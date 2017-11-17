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

// TimerManager/Timer
struct Timer_t1674779990;
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
#include "AssemblyU2DCSharp_TimerManager_TIMER_MODE3322086008.h"
#include "AssemblyU2DCSharp_TimerManager_TimerManagerHandler3618852277.h"
#include "AssemblyU2DCSharp_TimerManager_TimerManagerHandler2673666506.h"
#include "AssemblyU2DCSharp_TimerManager_TimerManagerCountHa3148830105.h"

// System.Void TimerManager/Timer::.ctor(System.String,TimerManager/TIMER_MODE,System.Single,System.Single,TimerManager/TimerManagerHandler)
extern "C"  void Timer__ctor_m868709272 (Timer_t1674779990 * __this, String_t* ___name0, int32_t ___mode1, float ___startTime2, float ___duration3, TimerManagerHandler_t3618852277 * ___handler4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/Timer::.ctor(System.String,TimerManager/TIMER_MODE,System.Single,System.Single,TimerManager/TimerManagerHandlerArgs,System.Object[])
extern "C"  void Timer__ctor_m1314451985 (Timer_t1674779990 * __this, String_t* ___name0, int32_t ___mode1, float ___startTime2, float ___duration3, TimerManagerHandlerArgs_t2673666506 * ___handler4, ObjectU5BU5D_t3614634134* ___args5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/Timer::.ctor(System.String,TimerManager/TIMER_MODE,System.Single,System.Single,TimerManager/TimerManagerCountHandlerArgs,System.Object[])
extern "C"  void Timer__ctor_m3080197424 (Timer_t1674779990 * __this, String_t* ___name0, int32_t ___mode1, float ___startTime2, float ___duration3, TimerManagerCountHandlerArgs_t3148830105 * ___handler4, ObjectU5BU5D_t3614634134* ___args5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TimerManager/Timer::get_StartTime()
extern "C"  float Timer_get_StartTime_m882850621 (Timer_t1674779990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/Timer::set_StartTime(System.Single)
extern "C"  void Timer_set_StartTime_m1205472972 (Timer_t1674779990 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TimerManager/Timer::get_TimeLeft()
extern "C"  float Timer_get_TimeLeft_m2099351398 (Timer_t1674779990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/Timer::Run()
extern "C"  void Timer_Run_m12719500 (Timer_t1674779990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
