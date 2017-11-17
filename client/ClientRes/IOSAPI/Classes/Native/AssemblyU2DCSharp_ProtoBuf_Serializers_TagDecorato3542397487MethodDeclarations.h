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

// ProtoBuf.Serializers.TagDecorator
struct TagDecorator_t3542397487;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel_Callback2841270245.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.TagDecorator::.ctor(System.Int32,ProtoBuf.WireType,System.Boolean,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void TagDecorator__ctor_m653230615 (TagDecorator_t3542397487 * __this, int32_t ___fieldNumber0, int32_t ___wireType1, bool ___strict2, Il2CppObject * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool TagDecorator_HasCallbacks_m3882848801 (TagDecorator_t3542397487 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::CanCreateInstance()
extern "C"  bool TagDecorator_CanCreateInstance_m2242357767 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TagDecorator::CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TagDecorator_CreateInstance_m720909526 (TagDecorator_t3542397487 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void TagDecorator_Callback_m2101418090 (TagDecorator_t3542397487 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TagDecorator::get_ExpectedType()
extern "C"  Type_t * TagDecorator_get_ExpectedType_m3496863397 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::get_RequiresOldValue()
extern "C"  bool TagDecorator_get_RequiresOldValue_m862236729 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::get_ReturnsValue()
extern "C"  bool TagDecorator_get_ReturnsValue_m2742862833 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::get_NeedsHint()
extern "C"  bool TagDecorator_get_NeedsHint_m4100231225 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TagDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TagDecorator_Read_m3998083769 (TagDecorator_t3542397487 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void TagDecorator_Write_m4127828977 (TagDecorator_t3542397487 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
