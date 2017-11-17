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

// TimerManager/TimerManagerHandler
struct TimerManagerHandler_t3618852277;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void TimerManager/TimerManagerHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TimerManagerHandler__ctor_m145821662 (TimerManagerHandler_t3618852277 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/TimerManagerHandler::Invoke()
extern "C"  void TimerManagerHandler_Invoke_m3848493908 (TimerManagerHandler_t3618852277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TimerManager/TimerManagerHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TimerManagerHandler_BeginInvoke_m2290944195 (TimerManagerHandler_t3618852277 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerManager/TimerManagerHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TimerManagerHandler_EndInvoke_m1516860196 (TimerManagerHandler_t3618852277 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
