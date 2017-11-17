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

// UICamera/OnNotifyUIEvent
struct OnNotifyUIEvent_t3025032372;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UICamera/OnNotifyUIEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnNotifyUIEvent__ctor_m1205878519 (OnNotifyUIEvent_t3025032372 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnNotifyUIEvent::Invoke(UnityEngine.GameObject,System.String,System.Object)
extern "C"  void OnNotifyUIEvent_Invoke_m1735555343 (OnNotifyUIEvent_t3025032372 * __this, GameObject_t1756533147 * ___go0, String_t* ___funcName1, Il2CppObject * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICamera/OnNotifyUIEvent::BeginInvoke(UnityEngine.GameObject,System.String,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnNotifyUIEvent_BeginInvoke_m2342718728 (OnNotifyUIEvent_t3025032372 * __this, GameObject_t1756533147 * ___go0, String_t* ___funcName1, Il2CppObject * ___obj2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnNotifyUIEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnNotifyUIEvent_EndInvoke_m2594573637 (OnNotifyUIEvent_t3025032372 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
