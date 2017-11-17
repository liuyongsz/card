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

// ProtoBuf.Serializers.ByteSerializer
struct ByteSerializer_t798786928;
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

// System.Void ProtoBuf.Serializers.ByteSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void ByteSerializer__ctor_m2112338276 (ByteSerializer_t798786928 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::.cctor()
extern "C"  void ByteSerializer__cctor_m2374600306 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool ByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1448827875 (ByteSerializer_t798786928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool ByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m294078383 (ByteSerializer_t798786928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.ByteSerializer::get_ExpectedType()
extern "C"  Type_t * ByteSerializer_get_ExpectedType_m1569613828 (ByteSerializer_t798786928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ByteSerializer_Write_m318511210 (ByteSerializer_t798786928 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.ByteSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ByteSerializer_Read_m2316425060 (ByteSerializer_t798786928 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
