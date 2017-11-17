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

// ProtoBuf.Serializers.TypeSerializer
struct TypeSerializer_t1635078390;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// ProtoBuf.Serializers.IProtoSerializer[]
struct IProtoSerializerU5BU5D_t634234844;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_CallbackSet2109955613.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel_Callback2841270245.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.TypeSerializer::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Int32[],ProtoBuf.Serializers.IProtoSerializer[],System.Reflection.MethodInfo[],System.Boolean,System.Boolean,ProtoBuf.Meta.CallbackSet,System.Type,System.Reflection.MethodInfo)
extern "C"  void TypeSerializer__ctor_m1699523247 (TypeSerializer_t1635078390 * __this, TypeModel_t653695305 * ___model0, Type_t * ___forType1, Int32U5BU5D_t3030399641* ___fieldNumbers2, IProtoSerializerU5BU5D_t634234844* ___serializers3, MethodInfoU5BU5D_t152480188* ___baseCtorCallbacks4, bool ___isRootType5, bool ___useConstructor6, CallbackSet_t2109955613 * ___callbacks7, Type_t * ___constructType8, MethodInfo_t * ___factory9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::.cctor()
extern "C"  void TypeSerializer__cctor_m3231603788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool TypeSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m4085051507 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TypeSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m73395734 (TypeSerializer_t1635078390 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool TypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2783312145 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool TypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4182087009 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool TypeSerializer_HasCallbacks_m2931142444 (TypeSerializer_t1635078390 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TypeSerializer::get_ExpectedType()
extern "C"  Type_t * TypeSerializer_get_ExpectedType_m285664382 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::get_CanHaveInheritance()
extern "C"  bool TypeSerializer_get_CanHaveInheritance_m2191045746 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void TypeSerializer_Callback_m3633493303 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Serializers.TypeSerializer::GetMoreSpecificSerializer(System.Object)
extern "C"  Il2CppObject * TypeSerializer_GetMoreSpecificSerializer_m2425571370 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void TypeSerializer_Write_m61173968 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TypeSerializer_Read_m3083145386 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::InvokeCallback(System.Reflection.MethodInfo,System.Object,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeSerializer_InvokeCallback_m387868128 (TypeSerializer_t1635078390 * __this, MethodInfo_t * ___method0, Il2CppObject * ___obj1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::CreateInstance(ProtoBuf.ProtoReader,System.Boolean)
extern "C"  Il2CppObject * TypeSerializer_CreateInstance_m2799386682 (TypeSerializer_t1635078390 * __this, ProtoReader_t3981212867 * ___source0, bool ___includeLocalCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
