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

// TimerManager/TimerManagerHandlerArgs
struct TimerManagerHandlerArgs_t2673666506;
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

// System.Void TimerManager/TimerManagerHandlerArgs::.ctor(System.Object,System.IntPtr)
extern "C"  void TimerManagerHandlerArgs__ctor_m842815539 (TimerManagerHandlerArgs_t2673666506 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/TimerManagerHandlerArgs::Invoke(System.Object[])
extern "C"  void TimerManagerHandlerArgs_Invoke_m2041808343 (TimerManagerHandlerArgs_t2673666506 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TimerManager/TimerManagerHandlerArgs::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TimerManagerHandlerArgs_BeginInvoke_m3826709110 (TimerManagerHandlerArgs_t2673666506 * __this, ObjectU5BU5D_t3614634134* ___args0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/TimerManagerHandlerArgs::EndInvoke(System.IAsyncResult)
extern "C"  void TimerManagerHandlerArgs_EndInvoke_m4192553861 (TimerManagerHandlerArgs_t2673666506 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
