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

// ProtoBuf.Serializers.Int16Serializer
struct Int16Serializer_t318011532;
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

// System.Void ProtoBuf.Serializers.Int16Serializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void Int16Serializer__ctor_m3674842512 (Int16Serializer_t318011532 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int16Serializer::.cctor()
extern "C"  void Int16Serializer__cctor_m248006790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int16Serializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool Int16Serializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2828047469 (Int16Serializer_t318011532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int16Serializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool Int16Serializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4100645501 (Int16Serializer_t318011532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.Int16Serializer::get_ExpectedType()
extern "C"  Type_t * Int16Serializer_get_ExpectedType_m412964820 (Int16Serializer_t318011532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.Int16Serializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * Int16Serializer_Read_m1256647702 (Int16Serializer_t318011532 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int16Serializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void Int16Serializer_Write_m490351218 (Int16Serializer_t318011532 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
