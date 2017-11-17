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

// FinishedCallback
struct FinishedCallback_t3837312389;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void FinishedCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FinishedCallback__ctor_m1182826856 (FinishedCallback_t3837312389 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FinishedCallback::Invoke(UnityEngine.GameObject)
extern "C"  void FinishedCallback_Invoke_m911475996 (FinishedCallback_t3837312389 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FinishedCallback::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FinishedCallback_BeginInvoke_m4155845315 (FinishedCallback_t3837312389 * __this, GameObject_t1756533147 * ___go0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FinishedCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FinishedCallback_EndInvoke_m3714739914 (FinishedCallback_t3837312389 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
