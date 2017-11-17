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

// DestroyForTime/OnDestroyEffect
struct OnDestroyEffect_t2892655133;
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

// System.Void DestroyForTime/OnDestroyEffect::.ctor(System.Object,System.IntPtr)
extern "C"  void OnDestroyEffect__ctor_m153406018 (OnDestroyEffect_t2892655133 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyForTime/OnDestroyEffect::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C"  void OnDestroyEffect_Invoke_m1165309363 (OnDestroyEffect_t2892655133 * __this, GameObject_t1756533147 * ___o0, bool ___forceDistroy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DestroyForTime/OnDestroyEffect::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnDestroyEffect_BeginInvoke_m1726671326 (OnDestroyEffect_t2892655133 * __this, GameObject_t1756533147 * ___o0, bool ___forceDistroy1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DestroyForTime/OnDestroyEffect::EndInvoke(System.IAsyncResult)
extern "C"  void OnDestroyEffect_EndInvoke_m2521043580 (OnDestroyEffect_t2892655133 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
