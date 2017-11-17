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

// ProtoBuf.Meta.LockContentedEventHandler
struct LockContentedEventHandler_t2250551053;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.LockContentedEventArgs
struct LockContentedEventArgs_t564711064;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_LockContentedEventA564711064.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ProtoBuf.Meta.LockContentedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void LockContentedEventHandler__ctor_m2428211796 (LockContentedEventHandler_t2250551053 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.LockContentedEventHandler::Invoke(System.Object,ProtoBuf.Meta.LockContentedEventArgs)
extern "C"  void LockContentedEventHandler_Invoke_m1778981590 (LockContentedEventHandler_t2250551053 * __this, Il2CppObject * ___sender0, LockContentedEventArgs_t564711064 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ProtoBuf.Meta.LockContentedEventHandler::BeginInvoke(System.Object,ProtoBuf.Meta.LockContentedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LockContentedEventHandler_BeginInvoke_m602045409 (LockContentedEventHandler_t2250551053 * __this, Il2CppObject * ___sender0, LockContentedEventArgs_t564711064 * ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.LockContentedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void LockContentedEventHandler_EndInvoke_m516644978 (LockContentedEventHandler_t2250551053 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
