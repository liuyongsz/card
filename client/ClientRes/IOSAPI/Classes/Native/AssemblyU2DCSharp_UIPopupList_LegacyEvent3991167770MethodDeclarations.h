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

// UIPopupList/LegacyEvent
struct LegacyEvent_t3991167770;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UIPopupList/LegacyEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void LegacyEvent__ctor_m1032384217 (LegacyEvent_t3991167770 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::Invoke(System.String)
extern "C"  void LegacyEvent_Invoke_m437229859 (LegacyEvent_t3991167770 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIPopupList/LegacyEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LegacyEvent_BeginInvoke_m1614669192 (LegacyEvent_t3991167770 * __this, String_t* ___val0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::EndInvoke(System.IAsyncResult)
extern "C"  void LegacyEvent_EndInvoke_m2138199459 (LegacyEvent_t3991167770 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
