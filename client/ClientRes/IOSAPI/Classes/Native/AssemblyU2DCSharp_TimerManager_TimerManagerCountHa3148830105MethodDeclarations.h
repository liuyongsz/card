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

// TimerManager/TimerManagerCountHandlerArgs
struct TimerManagerCountHandlerArgs_t3148830105;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void TimerManager/TimerManagerCountHandlerArgs::.ctor(System.Object,System.IntPtr)
extern "C"  void TimerManagerCountHandlerArgs__ctor_m1430832524 (TimerManagerCountHandlerArgs_t3148830105 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/TimerManagerCountHandlerArgs::Invoke(System.Int32,System.Object[])
extern "C"  void TimerManagerCountHandlerArgs_Invoke_m583845037 (TimerManagerCountHandlerArgs_t3148830105 * __this, int32_t ___count0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TimerManager/TimerManagerCountHandlerArgs::BeginInvoke(System.Int32,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TimerManagerCountHandlerArgs_BeginInvoke_m504736760 (TimerManagerCountHandlerArgs_t3148830105 * __this, int32_t ___count0, ObjectU5BU5D_t3614634134* ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/TimerManagerCountHandlerArgs::EndInvoke(System.IAsyncResult)
extern "C"  void TimerManagerCountHandlerArgs_EndInvoke_m3517793682 (TimerManagerCountHandlerArgs_t3148830105 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
