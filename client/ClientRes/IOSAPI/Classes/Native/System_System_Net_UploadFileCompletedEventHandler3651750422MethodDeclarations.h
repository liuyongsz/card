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

// System.Net.UploadFileCompletedEventHandler
struct UploadFileCompletedEventHandler_t3651750422;
// System.Object
struct Il2CppObject;
// System.Net.UploadFileCompletedEventArgs
struct UploadFileCompletedEventArgs_t674814687;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_UploadFileCompletedEventArgs674814687.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.UploadFileCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UploadFileCompletedEventHandler__ctor_m4009505592 (UploadFileCompletedEventHandler_t3651750422 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadFileCompletedEventHandler::Invoke(System.Object,System.Net.UploadFileCompletedEventArgs)
extern "C"  void UploadFileCompletedEventHandler_Invoke_m1256282419 (UploadFileCompletedEventHandler_t3651750422 * __this, Il2CppObject * ___sender0, UploadFileCompletedEventArgs_t674814687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.UploadFileCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadFileCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UploadFileCompletedEventHandler_BeginInvoke_m2168216472 (UploadFileCompletedEventHandler_t3651750422 * __this, Il2CppObject * ___sender0, UploadFileCompletedEventArgs_t674814687 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadFileCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UploadFileCompletedEventHandler_EndInvoke_m992747778 (UploadFileCompletedEventHandler_t3651750422 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
