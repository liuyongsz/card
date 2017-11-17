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

// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>
struct NetQueue_1_t1156019562;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3234296172.h"

// System.Int32 Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::get_Count()
extern "C"  int32_t NetQueue_1_get_Count_m440124770_gshared (NetQueue_1_t1156019562 * __this, const MethodInfo* method);
#define NetQueue_1_get_Count_m440124770(__this, method) ((  int32_t (*) (NetQueue_1_t1156019562 *, const MethodInfo*))NetQueue_1_get_Count_m440124770_gshared)(__this, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::.ctor(System.Int32)
extern "C"  void NetQueue_1__ctor_m2256563907_gshared (NetQueue_1_t1156019562 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define NetQueue_1__ctor_m2256563907(__this, ___initialCapacity0, method) ((  void (*) (NetQueue_1_t1156019562 *, int32_t, const MethodInfo*))NetQueue_1__ctor_m2256563907_gshared)(__this, ___initialCapacity0, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::Enqueue(T)
extern "C"  void NetQueue_1_Enqueue_m2553464330_gshared (NetQueue_1_t1156019562 * __this, NetTuple_2_t3234296172  ___item0, const MethodInfo* method);
#define NetQueue_1_Enqueue_m2553464330(__this, ___item0, method) ((  void (*) (NetQueue_1_t1156019562 *, NetTuple_2_t3234296172 , const MethodInfo*))NetQueue_1_Enqueue_m2553464330_gshared)(__this, ___item0, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::SetCapacity(System.Int32)
extern "C"  void NetQueue_1_SetCapacity_m604410889_gshared (NetQueue_1_t1156019562 * __this, int32_t ___newCapacity0, const MethodInfo* method);
#define NetQueue_1_SetCapacity_m604410889(__this, ___newCapacity0, method) ((  void (*) (NetQueue_1_t1156019562 *, int32_t, const MethodInfo*))NetQueue_1_SetCapacity_m604410889_gshared)(__this, ___newCapacity0, method)
// System.Boolean Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::TryDequeue(T&)
extern "C"  bool NetQueue_1_TryDequeue_m2063198819_gshared (NetQueue_1_t1156019562 * __this, NetTuple_2_t3234296172 * ___item0, const MethodInfo* method);
#define NetQueue_1_TryDequeue_m2063198819(__this, ___item0, method) ((  bool (*) (NetQueue_1_t1156019562 *, NetTuple_2_t3234296172 *, const MethodInfo*))NetQueue_1_TryDequeue_m2063198819_gshared)(__this, ___item0, method)
// System.Boolean Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::Contains(T)
extern "C"  bool NetQueue_1_Contains_m3119908125_gshared (NetQueue_1_t1156019562 * __this, NetTuple_2_t3234296172  ___item0, const MethodInfo* method);
#define NetQueue_1_Contains_m3119908125(__this, ___item0, method) ((  bool (*) (NetQueue_1_t1156019562 *, NetTuple_2_t3234296172 , const MethodInfo*))NetQueue_1_Contains_m3119908125_gshared)(__this, ___item0, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>::Clear()
extern "C"  void NetQueue_1_Clear_m3660254823_gshared (NetQueue_1_t1156019562 * __this, const MethodInfo* method);
#define NetQueue_1_Clear_m3660254823(__this, method) ((  void (*) (NetQueue_1_t1156019562 *, const MethodInfo*))NetQueue_1_Clear_m3660254823_gshared)(__this, method)
