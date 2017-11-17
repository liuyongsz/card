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

// ProtoBuf.Serializers.DefaultValueDecorator
struct DefaultValueDecorator_t3822837873;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Object
struct Il2CppObject;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"

// System.Void ProtoBuf.Serializers.DefaultValueDecorator::.ctor(ProtoBuf.Meta.TypeModel,System.Object,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void DefaultValueDecorator__ctor_m1445976604 (DefaultValueDecorator_t3822837873 * __this, TypeModel_t653695305 * ___model0, Il2CppObject * ___defaultValue1, Il2CppObject * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.DefaultValueDecorator::get_ExpectedType()
extern "C"  Type_t * DefaultValueDecorator_get_ExpectedType_m2345589083 (DefaultValueDecorator_t3822837873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DefaultValueDecorator::get_RequiresOldValue()
extern "C"  bool DefaultValueDecorator_get_RequiresOldValue_m3650932451 (DefaultValueDecorator_t3822837873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DefaultValueDecorator::get_ReturnsValue()
extern "C"  bool DefaultValueDecorator_get_ReturnsValue_m3372247207 (DefaultValueDecorator_t3822837873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DefaultValueDecorator_Write_m337894563 (DefaultValueDecorator_t3822837873 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DefaultValueDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DefaultValueDecorator_Read_m1820468583 (DefaultValueDecorator_t3822837873 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
