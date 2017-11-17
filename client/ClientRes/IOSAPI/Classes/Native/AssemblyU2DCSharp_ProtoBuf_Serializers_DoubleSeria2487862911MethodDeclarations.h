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

// ProtoBuf.Serializers.DoubleSerializer
struct DoubleSerializer_t2487862911;
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

// System.Void ProtoBuf.Serializers.DoubleSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void DoubleSerializer__ctor_m2665533175 (DoubleSerializer_t2487862911 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DoubleSerializer::.cctor()
extern "C"  void DoubleSerializer__cctor_m3936220789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DoubleSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool DoubleSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3518618364 (DoubleSerializer_t2487862911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DoubleSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool DoubleSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m1443610062 (DoubleSerializer_t2487862911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.DoubleSerializer::get_ExpectedType()
extern "C"  Type_t * DoubleSerializer_get_ExpectedType_m873758509 (DoubleSerializer_t2487862911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DoubleSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DoubleSerializer_Read_m1482333009 (DoubleSerializer_t2487862911 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DoubleSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DoubleSerializer_Write_m1974370177 (DoubleSerializer_t2487862911 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
