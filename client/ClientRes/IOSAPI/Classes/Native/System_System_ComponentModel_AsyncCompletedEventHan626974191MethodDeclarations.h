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

// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_t626974191;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t83270938;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_AsyncCompletedEventArgs83270938.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.AsyncCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCompletedEventHandler__ctor_m1431495954 (AsyncCompletedEventHandler_t626974191 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::Invoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs)
extern "C"  void AsyncCompletedEventHandler_Invoke_m1464136859 (AsyncCompletedEventHandler_t626974191 * __this, Il2CppObject * ___sender0, AsyncCompletedEventArgs_t83270938 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.AsyncCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncCompletedEventHandler_BeginInvoke_m2721626936 (AsyncCompletedEventHandler_t626974191 * __this, Il2CppObject * ___sender0, AsyncCompletedEventArgs_t83270938 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncCompletedEventHandler_EndInvoke_m2977356228 (AsyncCompletedEventHandler_t626974191 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
