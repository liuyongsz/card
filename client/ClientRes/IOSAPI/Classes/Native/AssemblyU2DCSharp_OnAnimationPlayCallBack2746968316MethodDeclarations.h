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

// OnAnimationPlayCallBack
struct OnAnimationPlayCallBack_t2746968316;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// AnimationProxy
struct AnimationProxy_t128404306;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_AnimationProxy128404306.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void OnAnimationPlayCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAnimationPlayCallBack__ctor_m3731190921 (OnAnimationPlayCallBack_t2746968316 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnAnimationPlayCallBack::Invoke(System.String,AnimationProxy)
extern "C"  void OnAnimationPlayCallBack_Invoke_m3268755237 (OnAnimationPlayCallBack_t2746968316 * __this, String_t* ___strAnimationName0, AnimationProxy_t128404306 * ___aProxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OnAnimationPlayCallBack::BeginInvoke(System.String,AnimationProxy,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAnimationPlayCallBack_BeginInvoke_m2712680990 (OnAnimationPlayCallBack_t2746968316 * __this, String_t* ___strAnimationName0, AnimationProxy_t128404306 * ___aProxy1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnAnimationPlayCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void OnAnimationPlayCallBack_EndInvoke_m217447311 (OnAnimationPlayCallBack_t2746968316 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
