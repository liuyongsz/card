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

// ProtoBuf.Serializers.BooleanSerializer
struct BooleanSerializer_t279558814;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"

// System.Void ProtoBuf.Serializers.BooleanSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void BooleanSerializer__ctor_m1043130034 (BooleanSerializer_t279558814 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BooleanSerializer::.cctor()
extern "C"  void BooleanSerializer__cctor_m177169104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BooleanSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool BooleanSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1183028561 (BooleanSerializer_t279558814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BooleanSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool BooleanSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m668760985 (BooleanSerializer_t279558814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.BooleanSerializer::get_ExpectedType()
extern "C"  Type_t * BooleanSerializer_get_ExpectedType_m2491690658 (BooleanSerializer_t279558814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BooleanSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void BooleanSerializer_Write_m117430700 (BooleanSerializer_t279558814 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.BooleanSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * BooleanSerializer_Read_m703488936 (BooleanSerializer_t279558814 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
