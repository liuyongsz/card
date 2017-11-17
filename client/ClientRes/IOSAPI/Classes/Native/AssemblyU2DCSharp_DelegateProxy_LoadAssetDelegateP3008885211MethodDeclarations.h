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

// DelegateProxy/LoadAssetDelegateProxy
struct LoadAssetDelegateProxy_t3008885211;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// AssetCallBack
struct AssetCallBack_t726168895;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_AssetCallBack726168895.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/LoadAssetDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadAssetDelegateProxy__ctor_m1033241666 (LoadAssetDelegateProxy_t3008885211 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/LoadAssetDelegateProxy::Invoke(System.String,AssetCallBack)
extern "C"  void LoadAssetDelegateProxy_Invoke_m214278697 (LoadAssetDelegateProxy_t3008885211 * __this, String_t* ___strFileName0, AssetCallBack_t726168895 * ___back1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/LoadAssetDelegateProxy::BeginInvoke(System.String,AssetCallBack,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadAssetDelegateProxy_BeginInvoke_m581480132 (LoadAssetDelegateProxy_t3008885211 * __this, String_t* ___strFileName0, AssetCallBack_t726168895 * ___back1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/LoadAssetDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void LoadAssetDelegateProxy_EndInvoke_m3022556148 (LoadAssetDelegateProxy_t3008885211 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
