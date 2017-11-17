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

// ProtoBuf.Meta.TypeFormatEventHandler
struct TypeFormatEventHandler_t3452100977;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.TypeFormatEventArgs
struct TypeFormatEventArgs_t4044138402;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeFormatEventArg4044138402.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ProtoBuf.Meta.TypeFormatEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TypeFormatEventHandler__ctor_m785036526 (TypeFormatEventHandler_t3452100977 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventHandler::Invoke(System.Object,ProtoBuf.Meta.TypeFormatEventArgs)
extern "C"  void TypeFormatEventHandler_Invoke_m4195715716 (TypeFormatEventHandler_t3452100977 * __this, Il2CppObject * ___sender0, TypeFormatEventArgs_t4044138402 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ProtoBuf.Meta.TypeFormatEventHandler::BeginInvoke(System.Object,ProtoBuf.Meta.TypeFormatEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TypeFormatEventHandler_BeginInvoke_m523089121 (TypeFormatEventHandler_t3452100977 * __this, Il2CppObject * ___sender0, TypeFormatEventArgs_t4044138402 * ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TypeFormatEventHandler_EndInvoke_m77697076 (TypeFormatEventHandler_t3452100977 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
