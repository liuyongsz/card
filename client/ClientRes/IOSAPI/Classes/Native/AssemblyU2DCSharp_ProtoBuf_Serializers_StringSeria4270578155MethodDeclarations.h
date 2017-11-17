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

// ProtoBuf.Serializers.StringSerializer
struct StringSerializer_t4270578155;
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

// System.Void ProtoBuf.Serializers.StringSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void StringSerializer__ctor_m2099530767 (StringSerializer_t4270578155 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.StringSerializer::.cctor()
extern "C"  void StringSerializer__cctor_m3859287497 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.StringSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool StringSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m692265896 (StringSerializer_t4270578155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.StringSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool StringSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4193606306 (StringSerializer_t4270578155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.StringSerializer::get_ExpectedType()
extern "C"  Type_t * StringSerializer_get_ExpectedType_m449898241 (StringSerializer_t4270578155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.StringSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void StringSerializer_Write_m1168652941 (StringSerializer_t4270578155 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.StringSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * StringSerializer_Read_m2852785181 (StringSerializer_t4270578155 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
