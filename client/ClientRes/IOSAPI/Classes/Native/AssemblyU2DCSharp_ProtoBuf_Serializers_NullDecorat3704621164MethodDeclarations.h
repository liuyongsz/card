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

// ProtoBuf.Serializers.NullDecorator
struct NullDecorator_t3704621164;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
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

// System.Void ProtoBuf.Serializers.NullDecorator::.ctor(ProtoBuf.Meta.TypeModel,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void NullDecorator__ctor_m265675813 (NullDecorator_t3704621164 * __this, TypeModel_t653695305 * ___model0, Il2CppObject * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.NullDecorator::get_ExpectedType()
extern "C"  Type_t * NullDecorator_get_ExpectedType_m1694084492 (NullDecorator_t3704621164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.NullDecorator::get_ReturnsValue()
extern "C"  bool NullDecorator_get_ReturnsValue_m143783876 (NullDecorator_t3704621164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.NullDecorator::get_RequiresOldValue()
extern "C"  bool NullDecorator_get_RequiresOldValue_m2366742806 (NullDecorator_t3704621164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.NullDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * NullDecorator_Read_m98473478 (NullDecorator_t3704621164 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.NullDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void NullDecorator_Write_m749329386 (NullDecorator_t3704621164 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
