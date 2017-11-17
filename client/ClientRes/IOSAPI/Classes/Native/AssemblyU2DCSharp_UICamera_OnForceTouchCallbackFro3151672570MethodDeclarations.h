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

// UICamera/OnForceTouchCallbackFromNativeDelegate
struct OnForceTouchCallbackFromNativeDelegate_t3151672570;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UICamera/OnForceTouchCallbackFromNativeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnForceTouchCallbackFromNativeDelegate__ctor_m2132859689 (OnForceTouchCallbackFromNativeDelegate_t3151672570 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnForceTouchCallbackFromNativeDelegate::Invoke(System.Int32,System.Single,System.Single,System.Single,System.Single,UnityEngine.TouchPhase)
extern "C"  void OnForceTouchCallbackFromNativeDelegate_Invoke_m1263454929 (OnForceTouchCallbackFromNativeDelegate_t3151672570 * __this, int32_t ___touchId0, float ___pressure1, float ___maximumPossiblePressure2, float ___pos_x3, float ___pos_y4, int32_t ___phase5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/OnForceTouchCallbackFromNativeDelegate::BeginInvoke(System.Int32,System.Single,System.Single,System.Single,System.Single,UnityEngine.TouchPhase,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnForceTouchCallbackFromNativeDelegate_BeginInvoke_m2898537292 (OnForceTouchCallbackFromNativeDelegate_t3151672570 * __this, int32_t ___touchId0, float ___pressure1, float ___maximumPossiblePressure2, float ___pos_x3, float ___pos_y4, int32_t ___phase5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnForceTouchCallbackFromNativeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnForceTouchCallbackFromNativeDelegate_EndInvoke_m3998426723 (OnForceTouchCallbackFromNativeDelegate_t3151672570 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
