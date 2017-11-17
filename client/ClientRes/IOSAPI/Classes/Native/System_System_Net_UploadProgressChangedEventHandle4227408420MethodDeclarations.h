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

// System.Net.UploadProgressChangedEventHandler
struct UploadProgressChangedEventHandler_t4227408420;
// System.Object
struct Il2CppObject;
// System.Net.UploadProgressChangedEventArgs
struct UploadProgressChangedEventArgs_t4213021259;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_UploadProgressChangedEventArgs4213021259.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.UploadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UploadProgressChangedEventHandler__ctor_m1034551062 (UploadProgressChangedEventHandler_t4227408420 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadProgressChangedEventHandler::Invoke(System.Object,System.Net.UploadProgressChangedEventArgs)
extern "C"  void UploadProgressChangedEventHandler_Invoke_m2820255019 (UploadProgressChangedEventHandler_t4227408420 * __this, Il2CppObject * ___sender0, UploadProgressChangedEventArgs_t4213021259 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.UploadProgressChangedEventHandler::BeginInvoke(System.Object,System.Net.UploadProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UploadProgressChangedEventHandler_BeginInvoke_m2822995384 (UploadProgressChangedEventHandler_t4227408420 * __this, Il2CppObject * ___sender0, UploadProgressChangedEventArgs_t4213021259 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UploadProgressChangedEventHandler_EndInvoke_m116325268 (UploadProgressChangedEventHandler_t4227408420 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
