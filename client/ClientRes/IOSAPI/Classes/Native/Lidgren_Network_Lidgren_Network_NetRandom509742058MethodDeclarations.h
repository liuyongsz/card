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

// Lidgren.Network.NetRandom
struct NetRandom_t509742058;

#include "codegen/il2cpp-codegen.h"

// System.Void Lidgren.Network.NetRandom::.ctor()
extern "C"  void NetRandom__ctor_m1930519285 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetRandom::Initialize(System.UInt32)
extern "C"  void NetRandom_Initialize_m3538796821 (NetRandom_t509742058 * __this, uint32_t ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Lidgren.Network.NetRandom::NextUInt32()
extern "C"  uint32_t NetRandom_NextUInt32_m1563057962 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetRandom::Next()
extern "C"  int32_t NetRandom_Next_m3515987696 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetRandom::NextInt32()
extern "C"  int32_t NetRandom_NextInt32_m3600204010 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Lidgren.Network.NetRandom::NextDouble()
extern "C"  double NetRandom_NextDouble_m193002282 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Lidgren.Network.NetRandom::Sample()
extern "C"  double NetRandom_Sample_m1013401964 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lidgren.Network.NetRandom::NextSingle()
extern "C"  float NetRandom_NextSingle_m2975933834 (NetRandom_t509742058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetRandom::Next(System.Int32)
extern "C"  int32_t NetRandom_Next_m2445239325 (NetRandom_t509742058 * __this, int32_t ___maxValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetRandom::Next(System.Int32,System.Int32)
extern "C"  int32_t NetRandom_Next_m2869914940 (NetRandom_t509742058 * __this, int32_t ___minValue0, int32_t ___maxValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetRandom::.cctor()
extern "C"  void NetRandom__cctor_m2811150516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
