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

// ProtoBuf.Serializers.SystemTypeSerializer
struct SystemTypeSerializer_t2220468495;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"

// System.Void ProtoBuf.Serializers.SystemTypeSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void SystemTypeSerializer__ctor_m4230176791 (SystemTypeSerializer_t2220468495 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SystemTypeSerializer::.cctor()
extern "C"  void SystemTypeSerializer__cctor_m2140360541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_Write_m4040036400 (SystemTypeSerializer_t2220468495 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_Read_m1420534218 (SystemTypeSerializer_t2220468495 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m599561684 (SystemTypeSerializer_t2220468495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m3494175590 (SystemTypeSerializer_t2220468495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SystemTypeSerializer::get_ExpectedType()
extern "C"  Type_t * SystemTypeSerializer_get_ExpectedType_m1721243917 (SystemTypeSerializer_t2220468495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
