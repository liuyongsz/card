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

// System.Threading.LockRecursionException
struct LockRecursionException_t2514728202;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Threading.LockRecursionException::.ctor()
extern "C"  void LockRecursionException__ctor_m3577462678 (LockRecursionException_t2514728202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.String)
extern "C"  void LockRecursionException__ctor_m4077209508 (LockRecursionException_t2514728202 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LockRecursionException__ctor_m3894815819 (LockRecursionException_t2514728202 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
