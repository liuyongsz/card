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

// Lidgren.Network.NetQueue`1<System.Object>
struct NetQueue_1_t611172685;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Int32 Lidgren.Network.NetQueue`1<System.Object>::get_Count()
extern "C"  int32_t NetQueue_1_get_Count_m2640242704_gshared (NetQueue_1_t611172685 * __this, const MethodInfo* method);
#define NetQueue_1_get_Count_m2640242704(__this, method) ((  int32_t (*) (NetQueue_1_t611172685 *, const MethodInfo*))NetQueue_1_get_Count_m2640242704_gshared)(__this, method)
// System.Void Lidgren.Network.NetQueue`1<System.Object>::.ctor(System.Int32)
extern "C"  void NetQueue_1__ctor_m498633343_gshared (NetQueue_1_t611172685 * __this, int32_t ___initialCapacity0, const MethodInfo* method);
#define NetQueue_1__ctor_m498633343(__this, ___initialCapacity0, method) ((  void (*) (NetQueue_1_t611172685 *, int32_t, const MethodInfo*))NetQueue_1__ctor_m498633343_gshared)(__this, ___initialCapacity0, method)
// System.Void Lidgren.Network.NetQueue`1<System.Object>::Enqueue(T)
extern "C"  void NetQueue_1_Enqueue_m3578790220_gshared (NetQueue_1_t611172685 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define NetQueue_1_Enqueue_m3578790220(__this, ___item0, method) ((  void (*) (NetQueue_1_t611172685 *, Il2CppObject *, const MethodInfo*))NetQueue_1_Enqueue_m3578790220_gshared)(__this, ___item0, method)
// System.Void Lidgren.Network.NetQueue`1<System.Object>::SetCapacity(System.Int32)
extern "C"  void NetQueue_1_SetCapacity_m1797085805_gshared (NetQueue_1_t611172685 * __this, int32_t ___newCapacity0, const MethodInfo* method);
#define NetQueue_1_SetCapacity_m1797085805(__this, ___newCapacity0, method) ((  void (*) (NetQueue_1_t611172685 *, int32_t, const MethodInfo*))NetQueue_1_SetCapacity_m1797085805_gshared)(__this, ___newCapacity0, method)
// System.Boolean Lidgren.Network.NetQueue`1<System.Object>::TryDequeue(T&)
extern "C"  bool NetQueue_1_TryDequeue_m3564312879_gshared (NetQueue_1_t611172685 * __this, Il2CppObject ** ___item0, const MethodInfo* method);
#define NetQueue_1_TryDequeue_m3564312879(__this, ___item0, method) ((  bool (*) (NetQueue_1_t611172685 *, Il2CppObject **, const MethodInfo*))NetQueue_1_TryDequeue_m3564312879_gshared)(__this, ___item0, method)
// System.Boolean Lidgren.Network.NetQueue`1<System.Object>::Contains(T)
extern "C"  bool NetQueue_1_Contains_m2294900033_gshared (NetQueue_1_t611172685 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define NetQueue_1_Contains_m2294900033(__this, ___item0, method) ((  bool (*) (NetQueue_1_t611172685 *, Il2CppObject *, const MethodInfo*))NetQueue_1_Contains_m2294900033_gshared)(__this, ___item0, method)
// System.Void Lidgren.Network.NetQueue`1<System.Object>::Clear()
extern "C"  void NetQueue_1_Clear_m3064895851_gshared (NetQueue_1_t611172685 * __this, const MethodInfo* method);
#define NetQueue_1_Clear_m3064895851(__this, method) ((  void (*) (NetQueue_1_t611172685 *, const MethodInfo*))NetQueue_1_Clear_m3064895851_gshared)(__this, method)
