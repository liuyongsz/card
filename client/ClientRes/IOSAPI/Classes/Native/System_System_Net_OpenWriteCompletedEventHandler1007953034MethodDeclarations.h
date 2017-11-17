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

// System.Net.OpenWriteCompletedEventHandler
struct OpenWriteCompletedEventHandler_t1007953034;
// System.Object
struct Il2CppObject;
// System.Net.OpenWriteCompletedEventArgs
struct OpenWriteCompletedEventArgs_t2397124231;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_OpenWriteCompletedEventArgs2397124231.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.OpenWriteCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OpenWriteCompletedEventHandler__ctor_m759789326 (OpenWriteCompletedEventHandler_t1007953034 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenWriteCompletedEventHandler::Invoke(System.Object,System.Net.OpenWriteCompletedEventArgs)
extern "C"  void OpenWriteCompletedEventHandler_Invoke_m1743929179 (OpenWriteCompletedEventHandler_t1007953034 * __this, Il2CppObject * ___sender0, OpenWriteCompletedEventArgs_t2397124231 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.OpenWriteCompletedEventHandler::BeginInvoke(System.Object,System.Net.OpenWriteCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OpenWriteCompletedEventHandler_BeginInvoke_m1538811298 (OpenWriteCompletedEventHandler_t1007953034 * __this, Il2CppObject * ___sender0, OpenWriteCompletedEventArgs_t2397124231 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenWriteCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void OpenWriteCompletedEventHandler_EndInvoke_m844553892 (OpenWriteCompletedEventHandler_t1007953034 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
