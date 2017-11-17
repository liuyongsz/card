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

// ProtoBuf.Serializers.TimeSpanSerializer
struct TimeSpanSerializer_t3638416759;
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

// System.Void ProtoBuf.Serializers.TimeSpanSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void TimeSpanSerializer__ctor_m795441563 (TimeSpanSerializer_t3638416759 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TimeSpanSerializer::.cctor()
extern "C"  void TimeSpanSerializer__cctor_m2223379821 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TimeSpanSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool TimeSpanSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m154282308 (TimeSpanSerializer_t3638416759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TimeSpanSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool TimeSpanSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4108396094 (TimeSpanSerializer_t3638416759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TimeSpanSerializer::get_ExpectedType()
extern "C"  Type_t * TimeSpanSerializer_get_ExpectedType_m760460957 (TimeSpanSerializer_t3638416759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TimeSpanSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TimeSpanSerializer_Read_m1839070257 (TimeSpanSerializer_t3638416759 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TimeSpanSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void TimeSpanSerializer_Write_m1034842473 (TimeSpanSerializer_t3638416759 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
