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

// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3683154451;
// System.Object
struct Il2CppObject;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3269688412;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_DownloadProgressChangedEventArgs3269688412.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.DownloadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DownloadProgressChangedEventHandler__ctor_m1332496739 (DownloadProgressChangedEventHandler_t3683154451 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::Invoke(System.Object,System.Net.DownloadProgressChangedEventArgs)
extern "C"  void DownloadProgressChangedEventHandler_Invoke_m689640799 (DownloadProgressChangedEventHandler_t3683154451 * __this, Il2CppObject * ___sender0, DownloadProgressChangedEventArgs_t3269688412 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.DownloadProgressChangedEventHandler::BeginInvoke(System.Object,System.Net.DownloadProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DownloadProgressChangedEventHandler_BeginInvoke_m3189378040 (DownloadProgressChangedEventHandler_t3683154451 * __this, Il2CppObject * ___sender0, DownloadProgressChangedEventArgs_t3269688412 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DownloadProgressChangedEventHandler_EndInvoke_m49450841 (DownloadProgressChangedEventHandler_t3683154451 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
