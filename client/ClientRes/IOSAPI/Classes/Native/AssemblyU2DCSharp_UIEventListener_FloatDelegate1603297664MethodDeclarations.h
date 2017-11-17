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

// UIEventListener/FloatDelegate
struct FloatDelegate_t1603297664;
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

// System.Void UIEventListener/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FloatDelegate__ctor_m729815081 (FloatDelegate_t1603297664 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::Invoke(UnityEngine.GameObject,System.Single)
extern "C"  void FloatDelegate_Invoke_m303420650 (FloatDelegate_t1603297664 * __this, GameObject_t1756533147 * ___go0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIEventListener/FloatDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FloatDelegate_BeginInvoke_m3648076943 (FloatDelegate_t1603297664 * __this, GameObject_t1756533147 * ___go0, float ___delta1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FloatDelegate_EndInvoke_m1324274011 (FloatDelegate_t1603297664 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
