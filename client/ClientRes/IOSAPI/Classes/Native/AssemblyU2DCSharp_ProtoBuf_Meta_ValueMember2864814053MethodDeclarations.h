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

// ProtoBuf.Meta.ValueMember
struct ValueMember_t2864814053;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_RuntimeTypeModel623319549.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ProtoBuf.Meta.ValueMember::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Type,System.Int32,System.Reflection.MemberInfo,System.Type,System.Type,System.Type,ProtoBuf.DataFormat,System.Object)
extern "C"  void ValueMember__ctor_m2949762420 (ValueMember_t2864814053 * __this, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___parentType1, int32_t ___fieldNumber2, MemberInfo_t * ___member3, Type_t * ___memberType4, Type_t * ___itemType5, Type_t * ___defaultType6, int32_t ___dataFormat7, Il2CppObject * ___defaultValue8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Int32,System.Type,System.Type,System.Type,ProtoBuf.DataFormat)
extern "C"  void ValueMember__ctor_m1586328615 (ValueMember_t2864814053 * __this, RuntimeTypeModel_t623319549 * ___model0, int32_t ___fieldNumber1, Type_t * ___memberType2, Type_t * ___itemType3, Type_t * ___defaultType4, int32_t ___dataFormat5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.ValueMember::get_FieldNumber()
extern "C"  int32_t ValueMember_get_FieldNumber_m1655214530 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo ProtoBuf.Meta.ValueMember::get_Member()
extern "C"  MemberInfo_t * ValueMember_get_Member_m2199405654 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.ValueMember::get_ItemType()
extern "C"  Type_t * ValueMember_get_ItemType_m1363599912 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.ValueMember::get_MemberType()
extern "C"  Type_t * ValueMember_get_MemberType_m1732318783 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.ValueMember::get_DefaultType()
extern "C"  Type_t * ValueMember_get_DefaultType_m1002569478 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.ValueMember::get_ParentType()
extern "C"  Type_t * ValueMember_get_ParentType_m786497279 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.ValueMember::get_DefaultValue()
extern "C"  Il2CppObject * ValueMember_get_DefaultValue_m1099086346 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_DefaultValue(System.Object)
extern "C"  void ValueMember_set_DefaultValue_m4162929981 (ValueMember_t2864814053 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.ValueMember::GetRawEnumValue()
extern "C"  Il2CppObject * ValueMember_GetRawEnumValue_m1042641353 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.ValueMember::ParseDefaultValue(System.Type,System.Object)
extern "C"  Il2CppObject * ValueMember_ParseDefaultValue_m4066144499 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::get_Serializer()
extern "C"  Il2CppObject * ValueMember_get_Serializer_m3352799687 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.DataFormat ProtoBuf.Meta.ValueMember::get_DataFormat()
extern "C"  int32_t ValueMember_get_DataFormat_m2886813965 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_DataFormat(ProtoBuf.DataFormat)
extern "C"  void ValueMember_set_DataFormat_m2433335852 (ValueMember_t2864814053 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_IsStrict()
extern "C"  bool ValueMember_get_IsStrict_m3009557442 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_IsStrict(System.Boolean)
extern "C"  void ValueMember_set_IsStrict_m1343465977 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_IsPacked()
extern "C"  bool ValueMember_get_IsPacked_m846406729 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_IsPacked(System.Boolean)
extern "C"  void ValueMember_set_IsPacked_m921690960 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_OverwriteList()
extern "C"  bool ValueMember_get_OverwriteList_m3252983218 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_OverwriteList(System.Boolean)
extern "C"  void ValueMember_set_OverwriteList_m883206469 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_IsRequired()
extern "C"  bool ValueMember_get_IsRequired_m1451829658 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_IsRequired(System.Boolean)
extern "C"  void ValueMember_set_IsRequired_m2412022251 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_AsReference()
extern "C"  bool ValueMember_get_AsReference_m1982871562 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_AsReference(System.Boolean)
extern "C"  void ValueMember_set_AsReference_m372845453 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_DynamicType()
extern "C"  bool ValueMember_get_DynamicType_m1618429886 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_DynamicType(System.Boolean)
extern "C"  void ValueMember_set_DynamicType_m3558971721 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::SetSpecified(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  void ValueMember_SetSpecified_m1904925838 (ValueMember_t2864814053 * __this, MethodInfo_t * ___getSpecified0, MethodInfo_t * ___setSpecified1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::ThrowIfFrozen()
extern "C"  void ValueMember_ThrowIfFrozen_m2077118861 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::BuildSerializer()
extern "C"  Il2CppObject * ValueMember_BuildSerializer_m594638800 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.Meta.ValueMember::GetIntWireType(ProtoBuf.DataFormat,System.Int32)
extern "C"  int32_t ValueMember_GetIntWireType_m1917764644 (Il2CppObject * __this /* static, unused */, int32_t ___format0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.Meta.ValueMember::GetDateTimeWireType(ProtoBuf.DataFormat)
extern "C"  int32_t ValueMember_GetDateTimeWireType_m1670179809 (Il2CppObject * __this /* static, unused */, int32_t ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::TryGetCoreSerializer(ProtoBuf.Meta.RuntimeTypeModel,ProtoBuf.DataFormat,System.Type,ProtoBuf.WireType&,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * ValueMember_TryGetCoreSerializer_m3233287664 (Il2CppObject * __this /* static, unused */, RuntimeTypeModel_t623319549 * ___model0, int32_t ___dataFormat1, Type_t * ___type2, int32_t* ___defaultWireType3, bool ___asReference4, bool ___dynamicType5, bool ___overwriteList6, bool ___allowComplexTypes7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::SetName(System.String)
extern "C"  void ValueMember_SetName_m2897640257 (ValueMember_t2864814053 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.ValueMember::get_Name()
extern "C"  String_t* ValueMember_get_Name_m500600769 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::HasFlag(System.Byte)
extern "C"  bool ValueMember_HasFlag_m37850293 (ValueMember_t2864814053 * __this, uint8_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::SetFlag(System.Byte,System.Boolean,System.Boolean)
extern "C"  void ValueMember_SetFlag_m3658823585 (ValueMember_t2864814053 * __this, uint8_t ___flag0, bool ___value1, bool ___throwIfFrozen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_SupportNull()
extern "C"  bool ValueMember_get_SupportNull_m379773175 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_SupportNull(System.Boolean)
extern "C"  void ValueMember_set_SupportNull_m1834706630 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.ValueMember::GetSchemaTypeName(System.Boolean,System.Boolean&)
extern "C"  String_t* ValueMember_GetSchemaTypeName_m2003492497 (ValueMember_t2864814053 * __this, bool ___applyNetObjectProxy0, bool* ___requiresBclImport1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
