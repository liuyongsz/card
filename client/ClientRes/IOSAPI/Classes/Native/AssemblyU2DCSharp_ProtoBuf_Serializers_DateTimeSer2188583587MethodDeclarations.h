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

// ProtoBuf.Serializers.DateTimeSerializer
struct DateTimeSerializer_t2188583587;
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

// System.Void ProtoBuf.Serializers.DateTimeSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void DateTimeSerializer__ctor_m1649244059 (DateTimeSerializer_t2188583587 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::.cctor()
extern "C"  void DateTimeSerializer__cctor_m692442417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DateTimeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool DateTimeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3070901744 (DateTimeSerializer_t2188583587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DateTimeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool DateTimeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m517777090 (DateTimeSerializer_t2188583587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.DateTimeSerializer::get_ExpectedType()
extern "C"  Type_t * DateTimeSerializer_get_ExpectedType_m3182687281 (DateTimeSerializer_t2188583587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DateTimeSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DateTimeSerializer_Read_m3623245677 (DateTimeSerializer_t2188583587 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DateTimeSerializer_Write_m3983501637 (DateTimeSerializer_t2188583587 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
