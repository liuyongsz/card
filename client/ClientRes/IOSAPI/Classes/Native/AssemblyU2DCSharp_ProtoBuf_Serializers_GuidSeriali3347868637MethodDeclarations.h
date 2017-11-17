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

// ProtoBuf.Serializers.GuidSerializer
struct GuidSerializer_t3347868637;
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

// System.Void ProtoBuf.Serializers.GuidSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void GuidSerializer__ctor_m3944154049 (GuidSerializer_t3347868637 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.GuidSerializer::.cctor()
extern "C"  void GuidSerializer__cctor_m529151871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.GuidSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool GuidSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3400909884 (GuidSerializer_t3347868637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.GuidSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool GuidSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4234158398 (GuidSerializer_t3347868637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.GuidSerializer::get_ExpectedType()
extern "C"  Type_t * GuidSerializer_get_ExpectedType_m3552209487 (GuidSerializer_t3347868637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.GuidSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void GuidSerializer_Write_m2419991407 (GuidSerializer_t3347868637 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.GuidSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * GuidSerializer_Read_m2662204935 (GuidSerializer_t3347868637 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
