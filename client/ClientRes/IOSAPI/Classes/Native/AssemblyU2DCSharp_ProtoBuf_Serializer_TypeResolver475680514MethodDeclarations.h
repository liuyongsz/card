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

// ProtoBuf.Serializer/TypeResolver
struct TypeResolver_t475680514;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ProtoBuf.Serializer/TypeResolver::.ctor(System.Object,System.IntPtr)
extern "C"  void TypeResolver__ctor_m2112723191 (TypeResolver_t475680514 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializer/TypeResolver::Invoke(System.Int32)
extern "C"  Type_t * TypeResolver_Invoke_m1670511650 (TypeResolver_t475680514 * __this, int32_t ___fieldNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ProtoBuf.Serializer/TypeResolver::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TypeResolver_BeginInvoke_m353982841 (TypeResolver_t475680514 * __this, int32_t ___fieldNumber0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializer/TypeResolver::EndInvoke(System.IAsyncResult)
extern "C"  Type_t * TypeResolver_EndInvoke_m2434021105 (TypeResolver_t475680514 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
