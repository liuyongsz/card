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

// ProtoBuf.Serializers.TupleSerializer
struct TupleSerializer_t2208269372;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Object
struct Il2CppObject;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_RuntimeTypeModel623319549.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel_Callback2841270245.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.TupleSerializer::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Reflection.ConstructorInfo,System.Reflection.MemberInfo[])
extern "C"  void TupleSerializer__ctor_m2041281456 (TupleSerializer_t2208269372 * __this, RuntimeTypeModel_t623319549 * ___model0, ConstructorInfo_t2851816542 * ___ctor1, MemberInfoU5BU5D_t4238939941* ___members2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TupleSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void TupleSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_Callback_m2047381428 (TupleSerializer_t2208269372 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TupleSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TupleSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m1208928154 (TupleSerializer_t2208269372 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TupleSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool TupleSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m2252637291 (TupleSerializer_t2208269372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TupleSerializer::HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool TupleSerializer_HasCallbacks_m540205118 (TupleSerializer_t2208269372 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TupleSerializer::get_ExpectedType()
extern "C"  Type_t * TupleSerializer_get_ExpectedType_m2227817276 (TupleSerializer_t2208269372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TupleSerializer::GetValue(System.Object,System.Int32)
extern "C"  Il2CppObject * TupleSerializer_GetValue_m2006564510 (TupleSerializer_t2208269372 * __this, Il2CppObject * ___obj0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TupleSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TupleSerializer_Read_m1835908710 (TupleSerializer_t2208269372 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TupleSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void TupleSerializer_Write_m1599024330 (TupleSerializer_t2208269372 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TupleSerializer::get_RequiresOldValue()
extern "C"  bool TupleSerializer_get_RequiresOldValue_m3660113910 (TupleSerializer_t2208269372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TupleSerializer::get_ReturnsValue()
extern "C"  bool TupleSerializer_get_ReturnsValue_m3789231460 (TupleSerializer_t2208269372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TupleSerializer::GetMemberType(System.Int32)
extern "C"  Type_t * TupleSerializer_GetMemberType_m3723632282 (TupleSerializer_t2208269372 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
