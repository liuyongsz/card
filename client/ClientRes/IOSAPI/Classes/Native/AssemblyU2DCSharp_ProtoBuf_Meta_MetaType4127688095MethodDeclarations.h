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

// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.String
struct String_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// System.Exception
struct Exception_t1927440687;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// ProtoBuf.Meta.AttributeMap[]
struct AttributeMapU5BU5D_t1124678505;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// ProtoBuf.ProtoMemberAttribute
struct ProtoMemberAttribute_t3383080044;
// ProtoBuf.Meta.ValueMember
struct ValueMember_t2864814053;
// ProtoBuf.Meta.AttributeMap
struct AttributeMap_t748219064;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.ValueMember[]
struct ValueMemberU5BU5D_t4150123240;
// ProtoBuf.Meta.SubType[]
struct SubTypeU5BU5D_t3443997125;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_RuntimeTypeModel623319549.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_MetaType4127688095.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_MetaType_AttributeF456994498.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList2284403912.h"
#include "AssemblyU2DCSharp_ProtoBuf_ImplicitFields2119185212.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoMemberAttribute3383080044.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_AttributeMap748219064.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_ValueMember2864814053.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void ProtoBuf.Meta.MetaType::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Type,System.Reflection.MethodInfo)
extern "C"  void MetaType__ctor_m2952342157 (MetaType_t4127688095 * __this, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___type1, MethodInfo_t * ___factory2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::.cctor()
extern "C"  void MetaType__cctor_m3688627835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.MetaType::ProtoBuf.Serializers.ISerializerProxy.get_Serializer()
extern "C"  Il2CppObject * MetaType_ProtoBuf_Serializers_ISerializerProxy_get_Serializer_m3136924986 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.MetaType::ToString()
extern "C"  String_t* MetaType_ToString_m4088155395 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::get_BaseType()
extern "C"  MetaType_t4127688095 * MetaType_get_BaseType_m1585550498 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.TypeModel ProtoBuf.Meta.MetaType::get_Model()
extern "C"  TypeModel_t653695305 * MetaType_get_Model_m3514419624 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IncludeSerializerMethod()
extern "C"  bool MetaType_get_IncludeSerializerMethod_m2675198864 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_IncludeSerializerMethod(System.Boolean)
extern "C"  void MetaType_set_IncludeSerializerMethod_m3175140993 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_AsReferenceDefault()
extern "C"  bool MetaType_get_AsReferenceDefault_m132947995 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_AsReferenceDefault(System.Boolean)
extern "C"  void MetaType_set_AsReferenceDefault_m2172066300 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::IsValidSubType(System.Type)
extern "C"  bool MetaType_IsValidSubType_m1790902131 (MetaType_t4127688095 * __this, Type_t * ___subType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::AddSubType(System.Int32,System.Type)
extern "C"  MetaType_t4127688095 * MetaType_AddSubType_m2617500299 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, Type_t * ___derivedType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::AddSubType(System.Int32,System.Type,ProtoBuf.DataFormat)
extern "C"  MetaType_t4127688095 * MetaType_AddSubType_m3708731441 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, Type_t * ___derivedType1, int32_t ___dataFormat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::SetBaseType(ProtoBuf.Meta.MetaType)
extern "C"  void MetaType_SetBaseType_m2294158546 (MetaType_t4127688095 * __this, MetaType_t4127688095 * ___baseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_HasCallbacks()
extern "C"  bool MetaType_get_HasCallbacks_m363674777 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_HasSubtypes()
extern "C"  bool MetaType_get_HasSubtypes_m2482017686 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.CallbackSet ProtoBuf.Meta.MetaType::get_Callbacks()
extern "C"  CallbackSet_t2109955613 * MetaType_get_Callbacks_m1351729653 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IsValueType()
extern "C"  bool MetaType_get_IsValueType_m1218750392 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::SetCallbacks(System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  MetaType_t4127688095 * MetaType_SetCallbacks_m2887276032 (MetaType_t4127688095 * __this, MethodInfo_t * ___beforeSerialize0, MethodInfo_t * ___afterSerialize1, MethodInfo_t * ___beforeDeserialize2, MethodInfo_t * ___afterDeserialize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::SetCallbacks(System.String,System.String,System.String,System.String)
extern "C"  MetaType_t4127688095 * MetaType_SetCallbacks_m3897968576 (MetaType_t4127688095 * __this, String_t* ___beforeSerialize0, String_t* ___afterSerialize1, String_t* ___beforeDeserialize2, String_t* ___afterDeserialize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.MetaType::GetSchemaTypeName()
extern "C"  String_t* MetaType_GetSchemaTypeName_m3519415317 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.MetaType::get_Name()
extern "C"  String_t* MetaType_get_Name_m1586893087 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_Name(System.String)
extern "C"  void MetaType_set_Name_m3587203722 (MetaType_t4127688095 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::SetFactory(System.Reflection.MethodInfo)
extern "C"  MetaType_t4127688095 * MetaType_SetFactory_m3362191573 (MetaType_t4127688095 * __this, MethodInfo_t * ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::SetFactory(System.String)
extern "C"  MetaType_t4127688095 * MetaType_SetFactory_m11036886 (MetaType_t4127688095 * __this, String_t* ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.MetaType::ResolveMethod(System.String,System.Boolean)
extern "C"  MethodInfo_t * MetaType_ResolveMethod_m2785841526 (MetaType_t4127688095 * __this, String_t* ___name0, bool ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.Meta.MetaType::InbuiltType(System.Type)
extern "C"  Exception_t1927440687 * MetaType_InbuiltType_m504840613 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ThrowIfFrozen()
extern "C"  void MetaType_ThrowIfFrozen_m3782069095 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.MetaType::get_Type()
extern "C"  Type_t * MetaType_get_Type_m4110509473 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Meta.MetaType::get_Serializer()
extern "C"  Il2CppObject * MetaType_get_Serializer_m1385012521 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IsList()
extern "C"  bool MetaType_get_IsList_m3079490813 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Meta.MetaType::BuildSerializer()
extern "C"  Il2CppObject * MetaType_BuildSerializer_m94191850 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.MetaType::GetBaseType(ProtoBuf.Meta.MetaType)
extern "C"  Type_t * MetaType_GetBaseType_m3230310160 (Il2CppObject * __this /* static, unused */, MetaType_t4127688095 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::GetAsReferenceDefault(ProtoBuf.Meta.RuntimeTypeModel,System.Type)
extern "C"  bool MetaType_GetAsReferenceDefault_m461180180 (Il2CppObject * __this /* static, unused */, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ApplyDefaultBehaviour()
extern "C"  void MetaType_ApplyDefaultBehaviour_m2491979336 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ApplyDefaultBehaviour_AddMembers(ProtoBuf.Meta.TypeModel,ProtoBuf.Meta.MetaType/AttributeFamily,System.Boolean,ProtoBuf.Meta.BasicList,System.Int32,System.Boolean,ProtoBuf.ImplicitFields,ProtoBuf.Meta.BasicList,System.Reflection.MemberInfo,System.Boolean&,System.Boolean,System.Boolean,System.Type&)
extern "C"  void MetaType_ApplyDefaultBehaviour_AddMembers_m3147668942 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, int32_t ___family1, bool ___isEnum2, BasicList_t2284403912 * ___partialMembers3, int32_t ___dataMemberOffset4, bool ___inferTagByName5, int32_t ___implicitMode6, BasicList_t2284403912 * ___members7, MemberInfo_t * ___member8, bool* ___forced9, bool ___isPublic10, bool ___isField11, Type_t ** ___effectiveType12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.MetaType::Coalesce(System.Reflection.MethodInfo[],System.Int32,System.Int32)
extern "C"  MethodInfo_t * MetaType_Coalesce_m704901492 (Il2CppObject * __this /* static, unused */, MethodInfoU5BU5D_t152480188* ___arr0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType/AttributeFamily ProtoBuf.Meta.MetaType::GetContractFamily(ProtoBuf.Meta.RuntimeTypeModel,System.Type,ProtoBuf.Meta.AttributeMap[])
extern "C"  int32_t MetaType_GetContractFamily_m442844021 (Il2CppObject * __this /* static, unused */, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___type1, AttributeMapU5BU5D_t1124678505* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo ProtoBuf.Meta.MetaType::ResolveTupleConstructor(System.Type,System.Reflection.MemberInfo[]&)
extern "C"  ConstructorInfo_t2851816542 * MetaType_ResolveTupleConstructor_m2214612726 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MemberInfoU5BU5D_t4238939941** ___mappedMembers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::CheckForCallback(System.Reflection.MethodInfo,ProtoBuf.Meta.AttributeMap[],System.String,System.Reflection.MethodInfo[]&,System.Int32)
extern "C"  void MetaType_CheckForCallback_m4238543731 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, AttributeMapU5BU5D_t1124678505* ___attributes1, String_t* ___callbackTypeName2, MethodInfoU5BU5D_t152480188** ___callbacks3, int32_t ___index4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::HasFamily(ProtoBuf.Meta.MetaType/AttributeFamily,ProtoBuf.Meta.MetaType/AttributeFamily)
extern "C"  bool MetaType_HasFamily_m3630166120 (Il2CppObject * __this /* static, unused */, int32_t ___value0, int32_t ___required1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoMemberAttribute ProtoBuf.Meta.MetaType::NormalizeProtoMember(ProtoBuf.Meta.TypeModel,System.Reflection.MemberInfo,ProtoBuf.Meta.MetaType/AttributeFamily,System.Boolean,System.Boolean,ProtoBuf.Meta.BasicList,System.Int32,System.Boolean)
extern "C"  ProtoMemberAttribute_t3383080044 * MetaType_NormalizeProtoMember_m648650888 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, MemberInfo_t * ___member1, int32_t ___family2, bool ___forced3, bool ___isEnum4, BasicList_t2284403912 * ___partialMembers5, int32_t ___dataMemberOffset6, bool ___inferByTagName7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::ApplyDefaultBehaviour(System.Boolean,ProtoBuf.ProtoMemberAttribute)
extern "C"  ValueMember_t2864814053 * MetaType_ApplyDefaultBehaviour_m381240896 (MetaType_t4127688095 * __this, bool ___isEnum0, ProtoMemberAttribute_t3383080044 * ___normalizedAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetDataFormat(ProtoBuf.DataFormat&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetDataFormat_m3322781629 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetIgnore(System.Boolean&,ProtoBuf.Meta.AttributeMap,ProtoBuf.Meta.AttributeMap[],System.String)
extern "C"  void MetaType_GetIgnore_m3421288515 (Il2CppObject * __this /* static, unused */, bool* ___ignore0, AttributeMap_t748219064 * ___attrib1, AttributeMapU5BU5D_t1124678505* ___attribs2, String_t* ___fullName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetFieldBoolean(System.Boolean&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetFieldBoolean_m1755240665 (Il2CppObject * __this /* static, unused */, bool* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::GetFieldBoolean(System.Boolean&,ProtoBuf.Meta.AttributeMap,System.String,System.Boolean)
extern "C"  bool MetaType_GetFieldBoolean_m1662201202 (Il2CppObject * __this /* static, unused */, bool* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, bool ___publicOnly3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetFieldNumber(System.Int32&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetFieldNumber_m1968664082 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetFieldName(System.String&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetFieldName_m2606578387 (Il2CppObject * __this /* static, unused */, String_t** ___name0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.AttributeMap ProtoBuf.Meta.MetaType::GetAttribute(ProtoBuf.Meta.AttributeMap[],System.String)
extern "C"  AttributeMap_t748219064 * MetaType_GetAttribute_m2799962573 (Il2CppObject * __this /* static, unused */, AttributeMapU5BU5D_t1124678505* ___attribs0, String_t* ___fullName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::Add(System.Int32,System.String)
extern "C"  MetaType_t4127688095 * MetaType_Add_m4088198326 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, String_t* ___memberName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::AddField(System.Int32,System.String)
extern "C"  ValueMember_t2864814053 * MetaType_AddField_m2718248906 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, String_t* ___memberName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_UseConstructor()
extern "C"  bool MetaType_get_UseConstructor_m3055504796 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_UseConstructor(System.Boolean)
extern "C"  void MetaType_set_UseConstructor_m1588103749 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.MetaType::get_ConstructType()
extern "C"  Type_t * MetaType_get_ConstructType_m3289083748 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_ConstructType(System.Type)
extern "C"  void MetaType_set_ConstructType_m3047733991 (MetaType_t4127688095 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::Add(System.String)
extern "C"  MetaType_t4127688095 * MetaType_Add_m3621898351 (MetaType_t4127688095 * __this, String_t* ___memberName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::SetSurrogate(System.Type)
extern "C"  void MetaType_SetSurrogate_m2546218491 (MetaType_t4127688095 * __this, Type_t * ___surrogateType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::GetSurrogateOrSelf()
extern "C"  MetaType_t4127688095 * MetaType_GetSurrogateOrSelf_m3333084209 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::GetSurrogateOrBaseOrSelf(System.Boolean)
extern "C"  MetaType_t4127688095 * MetaType_GetSurrogateOrBaseOrSelf_m4086927490 (MetaType_t4127688095 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.MetaType::GetNextFieldNumber()
extern "C"  int32_t MetaType_GetNextFieldNumber_m1348191922 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::Add(System.String[])
extern "C"  MetaType_t4127688095 * MetaType_Add_m2536887941 (MetaType_t4127688095 * __this, StringU5BU5D_t1642385972* ___memberNames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::Add(System.Int32,System.String,System.Object)
extern "C"  MetaType_t4127688095 * MetaType_Add_m461464992 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, String_t* ___memberName1, Il2CppObject * ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::Add(System.Int32,System.String,System.Type,System.Type)
extern "C"  MetaType_t4127688095 * MetaType_Add_m1686230454 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, String_t* ___memberName1, Type_t * ___itemType2, Type_t * ___defaultType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::AddField(System.Int32,System.String,System.Type,System.Type)
extern "C"  ValueMember_t2864814053 * MetaType_AddField_m944075082 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, String_t* ___memberName1, Type_t * ___itemType2, Type_t * ___defaultType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::AddField(System.Int32,System.String,System.Type,System.Type,System.Object)
extern "C"  ValueMember_t2864814053 * MetaType_AddField_m772150436 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, String_t* ___memberName1, Type_t * ___itemType2, Type_t * ___defaultType3, Il2CppObject * ___defaultValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ResolveListTypes(ProtoBuf.Meta.TypeModel,System.Type,System.Type&,System.Type&)
extern "C"  void MetaType_ResolveListTypes_m3810323443 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, Type_t ** ___itemType2, Type_t ** ___defaultType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::Add(ProtoBuf.Meta.ValueMember)
extern "C"  void MetaType_Add_m1221232082 (MetaType_t4127688095 * __this, ValueMember_t2864814053 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::get_Item(System.Int32)
extern "C"  ValueMember_t2864814053 * MetaType_get_Item_m3287518227 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::get_Item(System.Reflection.MemberInfo)
extern "C"  ValueMember_t2864814053 * MetaType_get_Item_m1488854872 (MetaType_t4127688095 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember[] ProtoBuf.Meta.MetaType::GetFields()
extern "C"  ValueMemberU5BU5D_t4150123240* MetaType_GetFields_m151799635 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.SubType[] ProtoBuf.Meta.MetaType::GetSubtypes()
extern "C"  SubTypeU5BU5D_t3443997125* MetaType_GetSubtypes_m1230475890 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::IsDefined(System.Int32)
extern "C"  bool MetaType_IsDefined_m1147273790 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.MetaType::GetKey(System.Boolean,System.Boolean)
extern "C"  int32_t MetaType_GetKey_m182497187 (MetaType_t4127688095 * __this, bool ___demand0, bool ___getBaseKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[] ProtoBuf.Meta.MetaType::GetEnumMap()
extern "C"  EnumPairU5BU5D_t121134586* MetaType_GetEnumMap_m1914250441 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_EnumPassthru()
extern "C"  bool MetaType_get_EnumPassthru_m2357608972 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_EnumPassthru(System.Boolean)
extern "C"  void MetaType_set_EnumPassthru_m3749508127 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IgnoreListHandling()
extern "C"  bool MetaType_get_IgnoreListHandling_m3930450490 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_IgnoreListHandling(System.Boolean)
extern "C"  void MetaType_set_IgnoreListHandling_m247513079 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_Pending()
extern "C"  bool MetaType_get_Pending_m889232314 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_Pending(System.Boolean)
extern "C"  void MetaType_set_Pending_m3863437673 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::HasFlag(System.Byte)
extern "C"  bool MetaType_HasFlag_m757733879 (MetaType_t4127688095 * __this, uint8_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::SetFlag(System.Byte,System.Boolean,System.Boolean)
extern "C"  void MetaType_SetFlag_m1945486715 (MetaType_t4127688095 * __this, uint8_t ___flag0, bool ___value1, bool ___throwIfFrozen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::GetRootType(ProtoBuf.Meta.MetaType)
extern "C"  MetaType_t4127688095 * MetaType_GetRootType_m3564731819 (Il2CppObject * __this /* static, unused */, MetaType_t4127688095 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::IsPrepared()
extern "C"  bool MetaType_IsPrepared_m3461117723 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable ProtoBuf.Meta.MetaType::get_Fields()
extern "C"  Il2CppObject * MetaType_get_Fields_m1669130706 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder ProtoBuf.Meta.MetaType::NewLine(System.Text.StringBuilder,System.Int32)
extern "C"  StringBuilder_t1221177846 * MetaType_NewLine_m90953382 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, int32_t ___indent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IsAutoTuple()
extern "C"  bool MetaType_get_IsAutoTuple_m3392849670 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::WriteSchema(System.Text.StringBuilder,System.Int32,System.Boolean&)
extern "C"  void MetaType_WriteSchema_m4094338268 (MetaType_t4127688095 * __this, StringBuilder_t1221177846 * ___builder0, int32_t ___indent1, bool* ___requiresBclImport2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
