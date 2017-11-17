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

// GameEventCallback
struct GameEventCallback_t1976771161;
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
#include "AssemblyU2DCSharp_GameEventTypes243168119.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GameEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GameEventCallback__ctor_m2409527928 (GameEventCallback_t1976771161 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventCallback::Invoke(GameEventTypes,System.Object[])
extern "C"  void GameEventCallback_Invoke_m3918666617 (GameEventCallback_t1976771161 * __this, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameEventCallback::BeginInvoke(GameEventTypes,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GameEventCallback_BeginInvoke_m149263280 (GameEventCallback_t1976771161 * __this, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GameEventCallback_EndInvoke_m3516064514 (GameEventCallback_t1976771161 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
