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

// DelegateProxy/GameDestoryDelegateProxy
struct GameDestoryDelegateProxy_t3536035773;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/GameDestoryDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void GameDestoryDelegateProxy__ctor_m3840664208 (GameDestoryDelegateProxy_t3536035773 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/GameDestoryDelegateProxy::Invoke(UnityEngine.Object)
extern "C"  void GameDestoryDelegateProxy_Invoke_m3442942810 (GameDestoryDelegateProxy_t3536035773 * __this, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/GameDestoryDelegateProxy::BeginInvoke(UnityEngine.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GameDestoryDelegateProxy_BeginInvoke_m362094757 (GameDestoryDelegateProxy_t3536035773 * __this, Object_t1021602117 * ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/GameDestoryDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void GameDestoryDelegateProxy_EndInvoke_m2678952306 (GameDestoryDelegateProxy_t3536035773 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
