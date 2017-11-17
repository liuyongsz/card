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

// ProtoBuf.Serializers.SingleSerializer
struct SingleSerializer_t3552837902;
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

// System.Void ProtoBuf.Serializers.SingleSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void SingleSerializer__ctor_m3122815382 (SingleSerializer_t3552837902 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SingleSerializer::.cctor()
extern "C"  void SingleSerializer__cctor_m2204308344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SingleSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SingleSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1966068791 (SingleSerializer_t3552837902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SingleSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SingleSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m2247298091 (SingleSerializer_t3552837902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SingleSerializer::get_ExpectedType()
extern "C"  Type_t * SingleSerializer_get_ExpectedType_m3260688966 (SingleSerializer_t3552837902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SingleSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SingleSerializer_Read_m2577318294 (SingleSerializer_t3552837902 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SingleSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SingleSerializer_Write_m2690817392 (SingleSerializer_t3552837902 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
