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

// DelegateProxy/OnSendMessageCallbackDelegateProxy
struct OnSendMessageCallbackDelegateProxy_t1053888144;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/OnSendMessageCallbackDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void OnSendMessageCallbackDelegateProxy__ctor_m2657817527 (OnSendMessageCallbackDelegateProxy_t1053888144 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DelegateProxy/OnSendMessageCallbackDelegateProxy::Invoke(System.Int32,System.Object[])
extern "C"  bool OnSendMessageCallbackDelegateProxy_Invoke_m18110150 (OnSendMessageCallbackDelegateProxy_t1053888144 * __this, int32_t ___iMSG0, ObjectU5BU5D_t3614634134* ___objects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/OnSendMessageCallbackDelegateProxy::BeginInvoke(System.Int32,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnSendMessageCallbackDelegateProxy_BeginInvoke_m3177018477 (OnSendMessageCallbackDelegateProxy_t1053888144 * __this, int32_t ___iMSG0, ObjectU5BU5D_t3614634134* ___objects1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DelegateProxy/OnSendMessageCallbackDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  bool OnSendMessageCallbackDelegateProxy_EndInvoke_m3485420221 (OnSendMessageCallbackDelegateProxy_t1053888144 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
