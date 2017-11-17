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

// Lidgren.Network.NetException
struct NetException_t2452891498;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Lidgren.Network.NetException::.ctor()
extern "C"  void NetException__ctor_m407345561 (NetException_t2452891498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetException::.ctor(System.String)
extern "C"  void NetException__ctor_m2724322251 (NetException_t2452891498 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetException::Assert(System.Boolean,System.String)
extern "C"  void NetException_Assert_m1067120882 (Il2CppObject * __this /* static, unused */, bool ___isOk0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetException::Assert(System.Boolean)
extern "C"  void NetException_Assert_m1426298558 (Il2CppObject * __this /* static, unused */, bool ___isOk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
