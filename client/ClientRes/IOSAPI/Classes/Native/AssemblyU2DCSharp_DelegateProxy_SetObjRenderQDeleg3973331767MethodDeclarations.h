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

// DelegateProxy/SetObjRenderQDelegateProxy
struct SetObjRenderQDelegateProxy_t3973331767;
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

// System.Void DelegateProxy/SetObjRenderQDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void SetObjRenderQDelegateProxy__ctor_m606066954 (SetObjRenderQDelegateProxy_t3973331767 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/SetObjRenderQDelegateProxy::Invoke(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void SetObjRenderQDelegateProxy_Invoke_m2840351836 (SetObjRenderQDelegateProxy_t3973331767 * __this, GameObject_t1756533147 * ___oModel0, int32_t ___iLayer1, int32_t ___iRenderQueue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/SetObjRenderQDelegateProxy::BeginInvoke(UnityEngine.GameObject,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SetObjRenderQDelegateProxy_BeginInvoke_m869247629 (SetObjRenderQDelegateProxy_t3973331767 * __this, GameObject_t1756533147 * ___oModel0, int32_t ___iLayer1, int32_t ___iRenderQueue2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/SetObjRenderQDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void SetObjRenderQDelegateProxy_EndInvoke_m2816438040 (SetObjRenderQDelegateProxy_t3973331767 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
