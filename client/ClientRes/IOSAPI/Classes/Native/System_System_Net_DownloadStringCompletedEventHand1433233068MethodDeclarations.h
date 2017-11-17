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

// System.Net.DownloadStringCompletedEventHandler
struct DownloadStringCompletedEventHandler_t1433233068;
// System.Object
struct Il2CppObject;
// System.Net.DownloadStringCompletedEventArgs
struct DownloadStringCompletedEventArgs_t661276395;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_DownloadStringCompletedEventArgs661276395.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.DownloadStringCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DownloadStringCompletedEventHandler__ctor_m1553347798 (DownloadStringCompletedEventHandler_t1433233068 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadStringCompletedEventHandler::Invoke(System.Object,System.Net.DownloadStringCompletedEventArgs)
extern "C"  void DownloadStringCompletedEventHandler_Invoke_m2303078635 (DownloadStringCompletedEventHandler_t1433233068 * __this, Il2CppObject * ___sender0, DownloadStringCompletedEventArgs_t661276395 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.DownloadStringCompletedEventHandler::BeginInvoke(System.Object,System.Net.DownloadStringCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DownloadStringCompletedEventHandler_BeginInvoke_m359605400 (DownloadStringCompletedEventHandler_t1433233068 * __this, Il2CppObject * ___sender0, DownloadStringCompletedEventArgs_t661276395 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadStringCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DownloadStringCompletedEventHandler_EndInvoke_m3398846772 (DownloadStringCompletedEventHandler_t1433233068 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
