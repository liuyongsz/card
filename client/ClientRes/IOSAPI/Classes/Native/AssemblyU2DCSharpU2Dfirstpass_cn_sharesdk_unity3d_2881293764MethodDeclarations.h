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

// cn.sharesdk.unity3d.ShareSDK/EventHandler
struct EventHandler_t2881293764;
// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_1764492110.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3178320575.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void cn.sharesdk.unity3d.ShareSDK/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler__ctor_m2980709965 (EventHandler_t2881293764 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK/EventHandler::Invoke(System.Int32,cn.sharesdk.unity3d.ResponseState,cn.sharesdk.unity3d.PlatformType,System.Collections.Hashtable)
extern "C"  void EventHandler_Invoke_m1868089619 (EventHandler_t2881293764 * __this, int32_t ___reqID0, int32_t ___state1, int32_t ___type2, Hashtable_t909839986 * ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult cn.sharesdk.unity3d.ShareSDK/EventHandler::BeginInvoke(System.Int32,cn.sharesdk.unity3d.ResponseState,cn.sharesdk.unity3d.PlatformType,System.Collections.Hashtable,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_BeginInvoke_m2966148516 (EventHandler_t2881293764 * __this, int32_t ___reqID0, int32_t ___state1, int32_t ___type2, Hashtable_t909839986 * ___data3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK/EventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_EndInvoke_m2082753231 (EventHandler_t2881293764 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
