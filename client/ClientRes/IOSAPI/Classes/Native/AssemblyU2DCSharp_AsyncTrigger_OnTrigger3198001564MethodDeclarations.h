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

// AsyncTrigger/OnTrigger
struct OnTrigger_t3198001564;
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

// System.Void AsyncTrigger/OnTrigger::.ctor(System.Object,System.IntPtr)
extern "C"  void OnTrigger__ctor_m2482210415 (OnTrigger_t3198001564 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger/OnTrigger::Invoke(System.Object[])
extern "C"  void OnTrigger_Invoke_m1382924251 (OnTrigger_t3198001564 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult AsyncTrigger/OnTrigger::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnTrigger_BeginInvoke_m4002861420 (OnTrigger_t3198001564 * __this, ObjectU5BU5D_t3614634134* ___args0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncTrigger/OnTrigger::EndInvoke(System.IAsyncResult)
extern "C"  void OnTrigger_EndInvoke_m2602656029 (OnTrigger_t3198001564 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
