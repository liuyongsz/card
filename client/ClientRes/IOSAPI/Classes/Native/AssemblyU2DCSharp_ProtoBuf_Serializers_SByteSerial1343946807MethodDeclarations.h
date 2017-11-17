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

// ProtoBuf.Serializers.SByteSerializer
struct SByteSerializer_t1343946807;
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

// System.Void ProtoBuf.Serializers.SByteSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void SByteSerializer__ctor_m3637289099 (SByteSerializer_t1343946807 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SByteSerializer::.cctor()
extern "C"  void SByteSerializer__cctor_m1320259665 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3154744950 (SByteSerializer_t1343946807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4003321660 (SByteSerializer_t1343946807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SByteSerializer::get_ExpectedType()
extern "C"  Type_t * SByteSerializer_get_ExpectedType_m3742578905 (SByteSerializer_t1343946807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SByteSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SByteSerializer_Read_m3714403577 (SByteSerializer_t1343946807 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SByteSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SByteSerializer_Write_m517078453 (SByteSerializer_t1343946807 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
