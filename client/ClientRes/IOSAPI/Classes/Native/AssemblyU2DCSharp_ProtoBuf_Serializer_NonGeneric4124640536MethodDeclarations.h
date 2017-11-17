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

// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.Type
struct Type_t;
// ProtoBuf.Serializer/TypeResolver
struct TypeResolver_t475680514;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"
#include "AssemblyU2DCSharp_ProtoBuf_Serializer_TypeResolver475680514.h"

// System.Object ProtoBuf.Serializer/NonGeneric::DeepClone(System.Object)
extern "C"  Il2CppObject * NonGeneric_DeepClone_m2796629495 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializer/NonGeneric::Serialize(System.IO.Stream,System.Object)
extern "C"  void NonGeneric_Serialize_m19332624 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___dest0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializer/NonGeneric::Deserialize(System.Type,System.IO.Stream)
extern "C"  Il2CppObject * NonGeneric_Deserialize_m2740320245 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Stream_t3255436806 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializer/NonGeneric::Merge(System.IO.Stream,System.Object)
extern "C"  Il2CppObject * NonGeneric_Merge_m855068783 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializer/NonGeneric::SerializeWithLengthPrefix(System.IO.Stream,System.Object,ProtoBuf.PrefixStyle,System.Int32)
extern "C"  void NonGeneric_SerializeWithLengthPrefix_m1155406605 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___destination0, Il2CppObject * ___instance1, int32_t ___style2, int32_t ___fieldNumber3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializer/NonGeneric::TryDeserializeWithLengthPrefix(System.IO.Stream,ProtoBuf.PrefixStyle,ProtoBuf.Serializer/TypeResolver,System.Object&)
extern "C"  bool NonGeneric_TryDeserializeWithLengthPrefix_m3275687266 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___style1, TypeResolver_t475680514 * ___resolver2, Il2CppObject ** ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializer/NonGeneric::CanSerialize(System.Type)
extern "C"  bool NonGeneric_CanSerialize_m2496705878 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
