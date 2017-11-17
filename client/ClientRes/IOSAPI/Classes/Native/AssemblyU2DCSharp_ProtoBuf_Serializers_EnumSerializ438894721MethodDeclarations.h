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

// ProtoBuf.Serializers.EnumSerializer
struct EnumSerializer_t438894721;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoTypeCode3296822465.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.EnumSerializer::.ctor(System.Type,ProtoBuf.Serializers.EnumSerializer/EnumPair[])
extern "C"  void EnumSerializer__ctor_m3066101364 (EnumSerializer_t438894721 * __this, Type_t * ___enumType0, EnumPairU5BU5D_t121134586* ___map1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.EnumSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool EnumSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m4122917456 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.EnumSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool EnumSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m1190771778 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoTypeCode ProtoBuf.Serializers.EnumSerializer::GetTypeCode()
extern "C"  int32_t EnumSerializer_GetTypeCode_m1718807690 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.EnumSerializer::get_ExpectedType()
extern "C"  Type_t * EnumSerializer_get_ExpectedType_m1672276755 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Serializers.EnumSerializer::EnumToWire(System.Object)
extern "C"  int32_t EnumSerializer_EnumToWire_m4192134877 (EnumSerializer_t438894721 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.EnumSerializer::WireToEnum(System.Int32)
extern "C"  Il2CppObject * EnumSerializer_WireToEnum_m2088738557 (EnumSerializer_t438894721 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.EnumSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * EnumSerializer_Read_m3576247459 (EnumSerializer_t438894721 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.EnumSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void EnumSerializer_Write_m1992780275 (EnumSerializer_t438894721 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
