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

// ProtoBuf.ProtoException
struct ProtoException_t1712273663;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void ProtoBuf.ProtoException::.ctor()
extern "C"  void ProtoException__ctor_m2818520127 (ProtoException_t1712273663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoException::.ctor(System.String)
extern "C"  void ProtoException__ctor_m2986101801 (ProtoException_t1712273663 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoException::.ctor(System.String,System.Exception)
extern "C"  void ProtoException__ctor_m943289985 (ProtoException_t1712273663 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
