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

// Lidgren.Network.MWCRandom
struct MWCRandom_t315011312;

#include "codegen/il2cpp-codegen.h"

// System.Void Lidgren.Network.MWCRandom::.ctor()
extern "C"  void MWCRandom__ctor_m14555459 (MWCRandom_t315011312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.MWCRandom::Initialize(System.UInt32)
extern "C"  void MWCRandom_Initialize_m3019558407 (MWCRandom_t315011312 * __this, uint32_t ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.MWCRandom::Initialize(System.UInt64)
extern "C"  void MWCRandom_Initialize_m3443045912 (MWCRandom_t315011312 * __this, uint64_t ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Lidgren.Network.MWCRandom::NextUInt32()
extern "C"  uint32_t MWCRandom_NextUInt32_m737568528 (MWCRandom_t315011312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.MWCRandom::.cctor()
extern "C"  void MWCRandom__cctor_m540302958 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
