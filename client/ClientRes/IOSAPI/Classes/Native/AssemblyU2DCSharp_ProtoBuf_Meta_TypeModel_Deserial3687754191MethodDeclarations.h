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

// ProtoBuf.Meta.TypeModel/DeserializeItemsIterator
struct DeserializeItemsIterator_t3687754191;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.IO.Stream
struct Stream_t3255436806;
// System.Type
struct Type_t;
// ProtoBuf.Serializer/TypeResolver
struct TypeResolver_t475680514;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"
#include "AssemblyU2DCSharp_ProtoBuf_Serializer_TypeResolver475680514.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"

// System.Void ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::.ctor(ProtoBuf.Meta.TypeModel,System.IO.Stream,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.Serializer/TypeResolver,ProtoBuf.SerializationContext)
extern "C"  void DeserializeItemsIterator__ctor_m1396343456 (DeserializeItemsIterator_t3687754191 * __this, TypeModel_t653695305 * ___model0, Stream_t3255436806 * ___source1, Type_t * ___type2, int32_t ___style3, int32_t ___expectedField4, TypeResolver_t475680514 * ___resolver5, SerializationContext_t3878296411 * ___context6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * DeserializeItemsIterator_System_Collections_IEnumerable_GetEnumerator_m3557096503 (DeserializeItemsIterator_t3687754191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::System.Collections.IEnumerator.Reset()
extern "C"  void DeserializeItemsIterator_System_Collections_IEnumerator_Reset_m954096066 (DeserializeItemsIterator_t3687754191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::MoveNext()
extern "C"  bool DeserializeItemsIterator_MoveNext_m1900111492 (DeserializeItemsIterator_t3687754191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel/DeserializeItemsIterator::get_Current()
extern "C"  Il2CppObject * DeserializeItemsIterator_get_Current_m3292323383 (DeserializeItemsIterator_t3687754191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
