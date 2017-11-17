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

// DelegateProxy/GameDestoryPoolDelegateProxy
struct GameDestoryPoolDelegateProxy_t391189485;
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

// System.Void DelegateProxy/GameDestoryPoolDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void GameDestoryPoolDelegateProxy__ctor_m1505649942 (GameDestoryPoolDelegateProxy_t391189485 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/GameDestoryPoolDelegateProxy::Invoke(UnityEngine.GameObject)
extern "C"  void GameDestoryPoolDelegateProxy_Invoke_m2831973978 (GameDestoryPoolDelegateProxy_t391189485 * __this, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/GameDestoryPoolDelegateProxy::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GameDestoryPoolDelegateProxy_BeginInvoke_m3157244403 (GameDestoryPoolDelegateProxy_t391189485 * __this, GameObject_t1756533147 * ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/GameDestoryPoolDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void GameDestoryPoolDelegateProxy_EndInvoke_m2981924908 (GameDestoryPoolDelegateProxy_t391189485 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
