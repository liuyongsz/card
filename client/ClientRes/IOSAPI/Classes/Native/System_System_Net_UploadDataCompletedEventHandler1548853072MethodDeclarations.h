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

// System.Net.UploadDataCompletedEventHandler
struct UploadDataCompletedEventHandler_t1548853072;
// System.Object
struct Il2CppObject;
// System.Net.UploadDataCompletedEventArgs
struct UploadDataCompletedEventArgs_t2368064285;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_UploadDataCompletedEventArgs2368064285.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.UploadDataCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UploadDataCompletedEventHandler__ctor_m1558682502 (UploadDataCompletedEventHandler_t1548853072 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadDataCompletedEventHandler::Invoke(System.Object,System.Net.UploadDataCompletedEventArgs)
extern "C"  void UploadDataCompletedEventHandler_Invoke_m3589577171 (UploadDataCompletedEventHandler_t1548853072 * __this, Il2CppObject * ___sender0, UploadDataCompletedEventArgs_t2368064285 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.UploadDataCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadDataCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UploadDataCompletedEventHandler_BeginInvoke_m3178316632 (UploadDataCompletedEventHandler_t1548853072 * __this, Il2CppObject * ___sender0, UploadDataCompletedEventArgs_t2368064285 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadDataCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UploadDataCompletedEventHandler_EndInvoke_m2518249352 (UploadDataCompletedEventHandler_t1548853072 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
