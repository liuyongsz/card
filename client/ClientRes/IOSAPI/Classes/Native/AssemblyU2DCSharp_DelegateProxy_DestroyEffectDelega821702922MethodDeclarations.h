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

// DelegateProxy/DestroyEffectDelegateProxy
struct DestroyEffectDelegateProxy_t821702922;
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

// System.Void DelegateProxy/DestroyEffectDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void DestroyEffectDelegateProxy__ctor_m4161418397 (DestroyEffectDelegateProxy_t821702922 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/DestroyEffectDelegateProxy::Invoke(UnityEngine.GameObject,System.Int32)
extern "C"  void DestroyEffectDelegateProxy_Invoke_m1777893442 (DestroyEffectDelegateProxy_t821702922 * __this, GameObject_t1756533147 * ___obj0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/DestroyEffectDelegateProxy::BeginInvoke(UnityEngine.GameObject,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DestroyEffectDelegateProxy_BeginInvoke_m1699258071 (DestroyEffectDelegateProxy_t821702922 * __this, GameObject_t1756533147 * ___obj0, int32_t ___layer1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/DestroyEffectDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void DestroyEffectDelegateProxy_EndInvoke_m3434582223 (DestroyEffectDelegateProxy_t821702922 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
