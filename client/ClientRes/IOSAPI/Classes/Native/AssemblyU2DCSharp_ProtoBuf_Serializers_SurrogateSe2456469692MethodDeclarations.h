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

// ProtoBuf.Serializers.SurrogateSerializer
struct SurrogateSerializer_t2456469692;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel_Callback2841270245.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.SurrogateSerializer::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Type,ProtoBuf.Serializers.IProtoTypeSerializer)
extern "C"  void SurrogateSerializer__ctor_m826957623 (SurrogateSerializer_t2456469692 * __this, TypeModel_t653695305 * ___model0, Type_t * ___forType1, Type_t * ___declaredType2, Il2CppObject * ___rootTail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_HasCallbacks_m740471107 (SurrogateSerializer_t2456469692 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m2214966965 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m3448780530 (SurrogateSerializer_t2456469692 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_Callback_m3621172916 (SurrogateSerializer_t2456469692 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::get_ReturnsValue()
extern "C"  bool SurrogateSerializer_get_ReturnsValue_m1045026128 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::get_RequiresOldValue()
extern "C"  bool SurrogateSerializer_get_RequiresOldValue_m2944718738 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SurrogateSerializer::get_ExpectedType()
extern "C"  Type_t * SurrogateSerializer_get_ExpectedType_m702944336 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::HasCast(ProtoBuf.Meta.TypeModel,System.Type,System.Type,System.Type,System.Reflection.MethodInfo&)
extern "C"  bool SurrogateSerializer_HasCast_m3696189533 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, Type_t * ___from2, Type_t * ___to3, MethodInfo_t ** ___op4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Serializers.SurrogateSerializer::GetConversion(ProtoBuf.Meta.TypeModel,System.Boolean)
extern "C"  MethodInfo_t * SurrogateSerializer_GetConversion_m476508401 (SurrogateSerializer_t2456469692 * __this, TypeModel_t653695305 * ___model0, bool ___toTail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SurrogateSerializer_Write_m1147633606 (SurrogateSerializer_t2456469692 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SurrogateSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SurrogateSerializer_Read_m2386443082 (SurrogateSerializer_t2456469692 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
