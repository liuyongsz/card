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

// LuaFramework.ThreadManager/ThreadSyncEvent
struct ThreadSyncEvent_t2081187083;
// System.Object
struct Il2CppObject;
// NotiData
struct NotiData_t2904403400;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_NotiData2904403400.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void LuaFramework.ThreadManager/ThreadSyncEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void ThreadSyncEvent__ctor_m3240968452 (ThreadSyncEvent_t2081187083 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager/ThreadSyncEvent::Invoke(NotiData)
extern "C"  void ThreadSyncEvent_Invoke_m812724874 (ThreadSyncEvent_t2081187083 * __this, NotiData_t2904403400 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuaFramework.ThreadManager/ThreadSyncEvent::BeginInvoke(NotiData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ThreadSyncEvent_BeginInvoke_m149689801 (ThreadSyncEvent_t2081187083 * __this, NotiData_t2904403400 * ___data0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager/ThreadSyncEvent::EndInvoke(System.IAsyncResult)
extern "C"  void ThreadSyncEvent_EndInvoke_m1839403918 (ThreadSyncEvent_t2081187083 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
