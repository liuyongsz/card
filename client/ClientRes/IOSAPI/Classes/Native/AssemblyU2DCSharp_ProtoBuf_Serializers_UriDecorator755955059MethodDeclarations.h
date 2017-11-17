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

// ProtoBuf.Serializers.UriDecorator
struct UriDecorator_t755955059;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
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

// System.Void ProtoBuf.Serializers.UriDecorator::.ctor(ProtoBuf.Meta.TypeModel,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void UriDecorator__ctor_m4132029974 (UriDecorator_t755955059 * __this, TypeModel_t653695305 * ___model0, Il2CppObject * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UriDecorator::.cctor()
extern "C"  void UriDecorator__cctor_m2082729705 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.UriDecorator::get_ExpectedType()
extern "C"  Type_t * UriDecorator_get_ExpectedType_m86844473 (UriDecorator_t755955059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.UriDecorator::get_RequiresOldValue()
extern "C"  bool UriDecorator_get_RequiresOldValue_m372587789 (UriDecorator_t755955059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.UriDecorator::get_ReturnsValue()
extern "C"  bool UriDecorator_get_ReturnsValue_m1297850197 (UriDecorator_t755955059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UriDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void UriDecorator_Write_m443463381 (UriDecorator_t755955059 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.UriDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * UriDecorator_Read_m3917320397 (UriDecorator_t755955059 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
