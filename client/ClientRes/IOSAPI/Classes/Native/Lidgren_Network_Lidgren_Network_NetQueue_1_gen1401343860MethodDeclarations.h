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

// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>
struct NetQueue_1_t1401343860;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3479620470.h"

// System.Int32 Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::get_Count()
extern "C"  int32_t NetQueue_1_get_Count_m2498635486_gshared (NetQueue_1_t1401343860 * __this, const MethodInfo* method);
#define NetQueue_1_get_Count_m2498635486(__this, method) ((  int32_t (*) (NetQueue_1_t1401343860 *, const MethodInfo*))NetQueue_1_get_Count_m2498635486_gshared)(__this, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C"  void NetQueue_1__ctor_m2998017111_gshared (NetQueue_1_t1401343860 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define NetQueue_1__ctor_m2998017111(__this, ___initialCapacity0, method) ((  void (*) (NetQueue_1_t1401343860 *, int32_t, const MethodInfo*))NetQueue_1__ctor_m2998017111_gshared)(__this, ___initialCapacity0, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::Enqueue(T)
extern "C"  void NetQueue_1_Enqueue_m1789242354_gshared (NetQueue_1_t1401343860 * __this, NetTuple_2_t3479620470  ___item0, const MethodInfo* method);
#define NetQueue_1_Enqueue_m1789242354(__this, ___item0, method) ((  void (*) (NetQueue_1_t1401343860 *, NetTuple_2_t3479620470 , const MethodInfo*))NetQueue_1_Enqueue_m1789242354_gshared)(__this, ___item0, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::SetCapacity(System.Int32)
extern "C"  void NetQueue_1_SetCapacity_m357544625_gshared (NetQueue_1_t1401343860 * __this, int32_t ___newCapacity0, const MethodInfo* method);
#define NetQueue_1_SetCapacity_m357544625(__this, ___newCapacity0, method) ((  void (*) (NetQueue_1_t1401343860 *, int32_t, const MethodInfo*))NetQueue_1_SetCapacity_m357544625_gshared)(__this, ___newCapacity0, method)
// System.Boolean Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::TryDequeue(T&)
extern "C"  bool NetQueue_1_TryDequeue_m3867228191_gshared (NetQueue_1_t1401343860 * __this, NetTuple_2_t3479620470 * ___item0, const MethodInfo* method);
#define NetQueue_1_TryDequeue_m3867228191(__this, ___item0, method) ((  bool (*) (NetQueue_1_t1401343860 *, NetTuple_2_t3479620470 *, const MethodInfo*))NetQueue_1_TryDequeue_m3867228191_gshared)(__this, ___item0, method)
// System.Boolean Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::Contains(T)
extern "C"  bool NetQueue_1_Contains_m1134499013_gshared (NetQueue_1_t1401343860 * __this, NetTuple_2_t3479620470  ___item0, const MethodInfo* method);
#define NetQueue_1_Contains_m1134499013(__this, ___item0, method) ((  bool (*) (NetQueue_1_t1401343860 *, NetTuple_2_t3479620470 , const MethodInfo*))NetQueue_1_Contains_m1134499013_gshared)(__this, ___item0, method)
// System.Void Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>::Clear()
extern "C"  void NetQueue_1_Clear_m4235103475_gshared (NetQueue_1_t1401343860 * __this, const MethodInfo* method);
#define NetQueue_1_Clear_m4235103475(__this, method) ((  void (*) (NetQueue_1_t1401343860 *, const MethodInfo*))NetQueue_1_Clear_m4235103475_gshared)(__this, method)
