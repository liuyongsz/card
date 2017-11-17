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

// ProtoBuf.Serializers.DecimalSerializer
struct DecimalSerializer_t635566497;
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

// System.Void ProtoBuf.Serializers.DecimalSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void DecimalSerializer__ctor_m1566771173 (DecimalSerializer_t635566497 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DecimalSerializer::.cctor()
extern "C"  void DecimalSerializer__cctor_m2727190843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DecimalSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool DecimalSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m4048996442 (DecimalSerializer_t635566497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DecimalSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool DecimalSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m178160600 (DecimalSerializer_t635566497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.DecimalSerializer::get_ExpectedType()
extern "C"  Type_t * DecimalSerializer_get_ExpectedType_m4196759659 (DecimalSerializer_t635566497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DecimalSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DecimalSerializer_Read_m2816836375 (DecimalSerializer_t635566497 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DecimalSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DecimalSerializer_Write_m3838815091 (DecimalSerializer_t635566497 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
