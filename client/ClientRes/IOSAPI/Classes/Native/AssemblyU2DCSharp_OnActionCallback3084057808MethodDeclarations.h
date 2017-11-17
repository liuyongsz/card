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

// OnActionCallback
struct OnActionCallback_t3084057808;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void OnActionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnActionCallback__ctor_m2009773753 (OnActionCallback_t3084057808 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnActionCallback::Invoke()
extern "C"  void OnActionCallback_Invoke_m2418349977 (OnActionCallback_t3084057808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OnActionCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnActionCallback_BeginInvoke_m3376378654 (OnActionCallback_t3084057808 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnActionCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnActionCallback_EndInvoke_m2406783103 (OnActionCallback_t3084057808 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
