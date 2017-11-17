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

// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t1613893277;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.NetworkInformation.PhysicalAddress::.ctor(System.Byte[])
extern "C"  void PhysicalAddress__ctor_m3260893292 (PhysicalAddress_t1613893277 * __this, ByteU5BU5D_t3397334013* ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PhysicalAddress::.cctor()
extern "C"  void PhysicalAddress__cctor_m2138612856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.PhysicalAddress::Equals(System.Object)
extern "C"  bool PhysicalAddress_Equals_m1853614880 (PhysicalAddress_t1613893277 * __this, Il2CppObject * ___comparand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.PhysicalAddress::GetHashCode()
extern "C"  int32_t PhysicalAddress_GetHashCode_m228484884 (PhysicalAddress_t1613893277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::GetAddressBytes()
extern "C"  ByteU5BU5D_t3397334013* PhysicalAddress_GetAddressBytes_m3545084778 (PhysicalAddress_t1613893277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.PhysicalAddress::ToString()
extern "C"  String_t* PhysicalAddress_ToString_m3706599766 (PhysicalAddress_t1613893277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
