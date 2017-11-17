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

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t2713047268;
// System.Object
struct Il2CppObject;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_WebHeaderCollection3028142837.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HttpContinueDelegate__ctor_m1263450672 (HttpContinueDelegate_t2713047268 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpContinueDelegate_Invoke_m3569872736 (HttpContinueDelegate_t2713047268 * __this, int32_t ___StatusCode0, WebHeaderCollection_t3028142837 * ___httpHeaders1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpContinueDelegate_BeginInvoke_m2566846579 (HttpContinueDelegate_t2713047268 * __this, int32_t ___StatusCode0, WebHeaderCollection_t3028142837 * ___httpHeaders1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HttpContinueDelegate_EndInvoke_m2445439486 (HttpContinueDelegate_t2713047268 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
