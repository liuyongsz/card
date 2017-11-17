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

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t3437478891;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t1711883181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern "C"  Il2CppObject * OrderedDictionaryEnumerator_get_Current_m102887795 (OrderedDictionaryEnumerator_t3437478891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C"  DictionaryEntry_t3048875398  OrderedDictionaryEnumerator_get_Entry_m1980611600 (OrderedDictionaryEnumerator_t3437478891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern "C"  Il2CppObject * OrderedDictionaryEnumerator_get_Key_m3464040817 (OrderedDictionaryEnumerator_t3437478891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern "C"  Il2CppObject * OrderedDictionaryEnumerator_get_Value_m586044585 (OrderedDictionaryEnumerator_t3437478891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C"  void OrderedDictionaryEnumerator__ctor_m3696192419 (OrderedDictionaryEnumerator_t3437478891 * __this, Il2CppObject* ___enumerator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern "C"  bool OrderedDictionaryEnumerator_MoveNext_m3642505436 (OrderedDictionaryEnumerator_t3437478891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern "C"  void OrderedDictionaryEnumerator_Reset_m3625818235 (OrderedDictionaryEnumerator_t3437478891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
