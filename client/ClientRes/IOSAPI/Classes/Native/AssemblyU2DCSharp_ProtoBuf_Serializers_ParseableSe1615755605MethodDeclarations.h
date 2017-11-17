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

// ProtoBuf.Serializers.ParseableSerializer
struct ParseableSerializer_t1615755605;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.ParseableSerializer::.ctor(System.Reflection.MethodInfo)
extern "C"  void ParseableSerializer__ctor_m4083371567 (ParseableSerializer_t1615755605 * __this, MethodInfo_t * ___parse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ParseableSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool ParseableSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2725840294 (ParseableSerializer_t1615755605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ParseableSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool ParseableSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m2324349684 (ParseableSerializer_t1615755605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.ParseableSerializer ProtoBuf.Serializers.ParseableSerializer::TryCreate(System.Type,ProtoBuf.Meta.TypeModel)
extern "C"  ParseableSerializer_t1615755605 * ParseableSerializer_TryCreate_m3815546373 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeModel_t653695305 * ___model1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Serializers.ParseableSerializer::GetCustomToString(System.Type)
extern "C"  MethodInfo_t * ParseableSerializer_GetCustomToString_m2904061826 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.ParseableSerializer::get_ExpectedType()
extern "C"  Type_t * ParseableSerializer_get_ExpectedType_m3646874727 (ParseableSerializer_t1615755605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.ParseableSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ParseableSerializer_Read_m545720675 (ParseableSerializer_t1615755605 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ParseableSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ParseableSerializer_Write_m3461927615 (ParseableSerializer_t1615755605 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
