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

// System.Net.UploadValuesCompletedEventHandler
struct UploadValuesCompletedEventHandler_t563858374;
// System.Object
struct Il2CppObject;
// System.Net.UploadValuesCompletedEventArgs
struct UploadValuesCompletedEventArgs_t3564452537;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_UploadValuesCompletedEventArgs3564452537.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.UploadValuesCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UploadValuesCompletedEventHandler__ctor_m143504748 (UploadValuesCompletedEventHandler_t563858374 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadValuesCompletedEventHandler::Invoke(System.Object,System.Net.UploadValuesCompletedEventArgs)
extern "C"  void UploadValuesCompletedEventHandler_Invoke_m933196899 (UploadValuesCompletedEventHandler_t563858374 * __this, Il2CppObject * ___sender0, UploadValuesCompletedEventArgs_t3564452537 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.UploadValuesCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadValuesCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UploadValuesCompletedEventHandler_BeginInvoke_m3365612728 (UploadValuesCompletedEventHandler_t563858374 * __this, Il2CppObject * ___sender0, UploadValuesCompletedEventArgs_t3564452537 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadValuesCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UploadValuesCompletedEventHandler_EndInvoke_m160174954 (UploadValuesCompletedEventHandler_t563858374 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
