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

// Lidgren.Network.NetBitVector
struct NetBitVector_t1774780753;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Lidgren.Network.NetBitVector::.ctor(System.Int32)
extern "C"  void NetBitVector__ctor_m1517128273 (NetBitVector_t1774780753 * __this, int32_t ___bitsCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetBitVector::IsEmpty()
extern "C"  bool NetBitVector_IsEmpty_m1960092019 (NetBitVector_t1774780753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBitVector::Count()
extern "C"  int32_t NetBitVector_Count_m179947577 (NetBitVector_t1774780753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetBitVector::Get(System.Int32)
extern "C"  bool NetBitVector_Get_m2410185427 (NetBitVector_t1774780753 * __this, int32_t ___bitIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBitVector::Set(System.Int32,System.Boolean)
extern "C"  void NetBitVector_Set_m2669921130 (NetBitVector_t1774780753 * __this, int32_t ___bitIndex0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetBitVector::get_Bit(System.Int32)
extern "C"  bool NetBitVector_get_Bit_m3575907859 (NetBitVector_t1774780753 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBitVector::set_Bit(System.Int32,System.Boolean)
extern "C"  void NetBitVector_set_Bit_m3149930918 (NetBitVector_t1774780753 * __this, int32_t ___index0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBitVector::Clear()
extern "C"  void NetBitVector_Clear_m3351354433 (NetBitVector_t1774780753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetBitVector::ToString()
extern "C"  String_t* NetBitVector_ToString_m1952006343 (NetBitVector_t1774780753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
