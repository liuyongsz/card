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

// System.Net.UploadStringCompletedEventHandler
struct UploadStringCompletedEventHandler_t495871123;
// System.Object
struct Il2CppObject;
// System.Net.UploadStringCompletedEventArgs
struct UploadStringCompletedEventArgs_t3898926532;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_UploadStringCompletedEventArgs3898926532.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.UploadStringCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UploadStringCompletedEventHandler__ctor_m2184289787 (UploadStringCompletedEventHandler_t495871123 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadStringCompletedEventHandler::Invoke(System.Object,System.Net.UploadStringCompletedEventArgs)
extern "C"  void UploadStringCompletedEventHandler_Invoke_m2820582783 (UploadStringCompletedEventHandler_t495871123 * __this, Il2CppObject * ___sender0, UploadStringCompletedEventArgs_t3898926532 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.UploadStringCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadStringCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UploadStringCompletedEventHandler_BeginInvoke_m1186535288 (UploadStringCompletedEventHandler_t495871123 * __this, Il2CppObject * ___sender0, UploadStringCompletedEventArgs_t3898926532 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadStringCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UploadStringCompletedEventHandler_EndInvoke_m1713313505 (UploadStringCompletedEventHandler_t495871123 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
