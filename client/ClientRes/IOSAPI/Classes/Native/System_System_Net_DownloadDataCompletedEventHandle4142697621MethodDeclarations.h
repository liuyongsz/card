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

// System.Net.DownloadDataCompletedEventHandler
struct DownloadDataCompletedEventHandler_t4142697621;
// System.Object
struct Il2CppObject;
// System.Net.DownloadDataCompletedEventArgs
struct DownloadDataCompletedEventArgs_t2512484440;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_DownloadDataCompletedEventArgs2512484440.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.DownloadDataCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DownloadDataCompletedEventHandler__ctor_m625124629 (DownloadDataCompletedEventHandler_t4142697621 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadDataCompletedEventHandler::Invoke(System.Object,System.Net.DownloadDataCompletedEventArgs)
extern "C"  void DownloadDataCompletedEventHandler_Invoke_m1719180311 (DownloadDataCompletedEventHandler_t4142697621 * __this, Il2CppObject * ___sender0, DownloadDataCompletedEventArgs_t2512484440 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.DownloadDataCompletedEventHandler::BeginInvoke(System.Object,System.Net.DownloadDataCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DownloadDataCompletedEventHandler_BeginInvoke_m588379832 (DownloadDataCompletedEventHandler_t4142697621 * __this, Il2CppObject * ___sender0, DownloadDataCompletedEventArgs_t2512484440 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadDataCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DownloadDataCompletedEventHandler_EndInvoke_m3861411871 (DownloadDataCompletedEventHandler_t4142697621 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
