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

// ProtoBuf.Serializers.CharSerializer
struct CharSerializer_t3525094994;
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

// System.Void ProtoBuf.Serializers.CharSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void CharSerializer__ctor_m4127701254 (CharSerializer_t3525094994 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CharSerializer::.cctor()
extern "C"  void CharSerializer__cctor_m4038903528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.CharSerializer::get_ExpectedType()
extern "C"  Type_t * CharSerializer_get_ExpectedType_m3840843522 (CharSerializer_t3525094994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CharSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void CharSerializer_Write_m2947375476 (CharSerializer_t3525094994 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.CharSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * CharSerializer_Read_m2221351526 (CharSerializer_t3525094994 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
