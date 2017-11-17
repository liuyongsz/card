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

// ProtoBuf.Serializers.UInt64Serializer
struct UInt64Serializer_t4112950704;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.UInt64Serializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void UInt64Serializer__ctor_m1214089960 (UInt64Serializer_t4112950704 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UInt64Serializer::.cctor()
extern "C"  void UInt64Serializer__cctor_m2728847110 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.UInt64Serializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool UInt64Serializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1595439441 (UInt64Serializer_t4112950704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.UInt64Serializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool UInt64Serializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m218276441 (UInt64Serializer_t4112950704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.UInt64Serializer::get_ExpectedType()
extern "C"  Type_t * UInt64Serializer_get_ExpectedType_m2994856380 (UInt64Serializer_t4112950704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.UInt64Serializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * UInt64Serializer_Read_m1462103136 (UInt64Serializer_t4112950704 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UInt64Serializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void UInt64Serializer_Write_m519640498 (UInt64Serializer_t4112950704 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
