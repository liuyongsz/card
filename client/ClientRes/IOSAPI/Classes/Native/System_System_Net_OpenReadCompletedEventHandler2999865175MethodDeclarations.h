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

// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_t2999865175;
// System.Object
struct Il2CppObject;
// System.Net.OpenReadCompletedEventArgs
struct OpenReadCompletedEventArgs_t3588930308;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_OpenReadCompletedEventArgs3588930308.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.OpenReadCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OpenReadCompletedEventHandler__ctor_m1104945035 (OpenReadCompletedEventHandler_t2999865175 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenReadCompletedEventHandler::Invoke(System.Object,System.Net.OpenReadCompletedEventArgs)
extern "C"  void OpenReadCompletedEventHandler_Invoke_m3975421247 (OpenReadCompletedEventHandler_t2999865175 * __this, Il2CppObject * ___sender0, OpenReadCompletedEventArgs_t3588930308 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.OpenReadCompletedEventHandler::BeginInvoke(System.Object,System.Net.OpenReadCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OpenReadCompletedEventHandler_BeginInvoke_m3399749240 (OpenReadCompletedEventHandler_t2999865175 * __this, Il2CppObject * ___sender0, OpenReadCompletedEventArgs_t3588930308 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenReadCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void OpenReadCompletedEventHandler_EndInvoke_m4008087077 (OpenReadCompletedEventHandler_t2999865175 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
