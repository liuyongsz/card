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

// ProtoBuf.Serializers.SubItemSerializer
struct SubItemSerializer_t2189434847;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.ISerializerProxy
struct ISerializerProxy_t4116334411;
// System.Object
struct Il2CppObject;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel_Callback2841270245.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.SubItemSerializer::.ctor(System.Type,System.Int32,ProtoBuf.Serializers.ISerializerProxy,System.Boolean)
extern "C"  void SubItemSerializer__ctor_m1198071002 (SubItemSerializer_t2189434847 * __this, Type_t * ___type0, int32_t ___key1, Il2CppObject * ___proxy2, bool ___recursionCheck3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_HasCallbacks_m3945332196 (SubItemSerializer_t2189434847 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m102544114 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_Callback_m2942588455 (SubItemSerializer_t2189434847 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m3492802973 (SubItemSerializer_t2189434847 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ExpectedType()
extern "C"  Type_t * SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ExpectedType_m1966585166 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3665209772 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m67408486 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_Write_m3169571768 (SubItemSerializer_t2189434847 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_Read_m2530577660 (SubItemSerializer_t2189434847 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
