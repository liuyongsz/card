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

// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// ProtoBuf.Meta.LockContentedEventHandler
struct LockContentedEventHandler_t2250551053;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// System.Object
struct Il2CppObject;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_LockContentedEvent2250551053.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList2284403912.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_MetaType4127688095.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void ProtoBuf.Meta.RuntimeTypeModel::.ctor(System.Boolean)
extern "C"  void RuntimeTypeModel__ctor_m1042050761 (RuntimeTypeModel_t623319549 * __this, bool ___isDefault0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::.cctor()
extern "C"  void RuntimeTypeModel__cctor_m3305877209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::add_LockContended(ProtoBuf.Meta.LockContentedEventHandler)
extern "C"  void RuntimeTypeModel_add_LockContended_m4111440618 (RuntimeTypeModel_t623319549 * __this, LockContentedEventHandler_t2250551053 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::remove_LockContended(ProtoBuf.Meta.LockContentedEventHandler)
extern "C"  void RuntimeTypeModel_remove_LockContended_m2694385337 (RuntimeTypeModel_t623319549 * __this, LockContentedEventHandler_t2250551053 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::GetOption(System.Byte)
extern "C"  bool RuntimeTypeModel_GetOption_m2995765774 (RuntimeTypeModel_t623319549 * __this, uint8_t ___option0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::SetOption(System.Byte,System.Boolean)
extern "C"  void RuntimeTypeModel_SetOption_m552901161 (RuntimeTypeModel_t623319549 * __this, uint8_t ___option0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_InferTagFromNameDefault()
extern "C"  bool RuntimeTypeModel_get_InferTagFromNameDefault_m95857617 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_InferTagFromNameDefault(System.Boolean)
extern "C"  void RuntimeTypeModel_set_InferTagFromNameDefault_m3950365238 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AutoAddProtoContractTypesOnly()
extern "C"  bool RuntimeTypeModel_get_AutoAddProtoContractTypesOnly_m52140228 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_AutoAddProtoContractTypesOnly(System.Boolean)
extern "C"  void RuntimeTypeModel_set_AutoAddProtoContractTypesOnly_m645233169 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_UseImplicitZeroDefaults()
extern "C"  bool RuntimeTypeModel_get_UseImplicitZeroDefaults_m1020023949 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_UseImplicitZeroDefaults(System.Boolean)
extern "C"  void RuntimeTypeModel_set_UseImplicitZeroDefaults_m3898764358 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AllowParseableTypes()
extern "C"  bool RuntimeTypeModel_get_AllowParseableTypes_m1003262604 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_AllowParseableTypes(System.Boolean)
extern "C"  void RuntimeTypeModel_set_AllowParseableTypes_m1150953913 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.RuntimeTypeModel::get_Default()
extern "C"  RuntimeTypeModel_t623319549 * RuntimeTypeModel_get_Default_m2502055990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable ProtoBuf.Meta.RuntimeTypeModel::GetTypes()
extern "C"  Il2CppObject * RuntimeTypeModel_GetTypes_m1748662859 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.RuntimeTypeModel::GetSchema(System.Type)
extern "C"  String_t* RuntimeTypeModel_GetSchema_m2048289347 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::CascadeDependents(ProtoBuf.Meta.BasicList,ProtoBuf.Meta.MetaType)
extern "C"  void RuntimeTypeModel_CascadeDependents_m531611047 (RuntimeTypeModel_t623319549 * __this, BasicList_t2284403912 * ___list0, MetaType_t4127688095 * ___metaType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::get_Item(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_get_Item_m3333229405 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::FindWithoutAdd(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_FindWithoutAdd_m67887737 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::MetaTypeFinderImpl(System.Object,System.Object)
extern "C"  bool RuntimeTypeModel_MetaTypeFinderImpl_m152344301 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::BasicTypeFinderImpl(System.Object,System.Object)
extern "C"  bool RuntimeTypeModel_BasicTypeFinderImpl_m1317472604 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::WaitOnLock(ProtoBuf.Meta.MetaType)
extern "C"  void RuntimeTypeModel_WaitOnLock_m2506870370 (RuntimeTypeModel_t623319549 * __this, MetaType_t4127688095 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.RuntimeTypeModel::TryGetBasicTypeSerializer(System.Type)
extern "C"  Il2CppObject * RuntimeTypeModel_TryGetBasicTypeSerializer_m2262933490 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::FindOrAddAuto(System.Type,System.Boolean,System.Boolean,System.Boolean)
extern "C"  int32_t RuntimeTypeModel_FindOrAddAuto_m900888090 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, bool ___demand1, bool ___addWithContractOnly2, bool ___addEvenIfAutoDisabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::RecogniseCommonTypes(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_RecogniseCommonTypes_m1179753896 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::Create(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_Create_m3741688025 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::Add(System.Type,System.Boolean)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_Add_m2001756899 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, bool ___applyDefaultBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AutoAddMissingTypes()
extern "C"  bool RuntimeTypeModel_get_AutoAddMissingTypes_m1652416778 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_AutoAddMissingTypes(System.Boolean)
extern "C"  void RuntimeTypeModel_set_AutoAddMissingTypes_m3807419241 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::ThrowIfFrozen()
extern "C"  void RuntimeTypeModel_ThrowIfFrozen_m3509782689 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::Freeze()
extern "C"  void RuntimeTypeModel_Freeze_m2397816549 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::GetKeyImpl(System.Type)
extern "C"  int32_t RuntimeTypeModel_GetKeyImpl_m503879142 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::GetKey(System.Type,System.Boolean,System.Boolean)
extern "C"  int32_t RuntimeTypeModel_GetKey_m3995341670 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, bool ___demand1, bool ___getBaseKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter)
extern "C"  void RuntimeTypeModel_Serialize_m1482348655 (RuntimeTypeModel_t623319549 * __this, int32_t ___key0, Il2CppObject * ___value1, ProtoWriter_t2800220307 * ___dest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.RuntimeTypeModel::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * RuntimeTypeModel_Deserialize_m615174405 (RuntimeTypeModel_t623319549 * __this, int32_t ___key0, Il2CppObject * ___value1, ProtoReader_t3981212867 * ___source2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::IsPrepared(System.Type)
extern "C"  bool RuntimeTypeModel_IsPrepared_m498380510 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[] ProtoBuf.Meta.RuntimeTypeModel::GetEnumMap(System.Type)
extern "C"  EnumPairU5BU5D_t121134586* RuntimeTypeModel_GetEnumMap_m4211064608 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::get_MetadataTimeoutMilliseconds()
extern "C"  int32_t RuntimeTypeModel_get_MetadataTimeoutMilliseconds_m2707809209 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_MetadataTimeoutMilliseconds(System.Int32)
extern "C"  void RuntimeTypeModel_set_MetadataTimeoutMilliseconds_m3701542028 (RuntimeTypeModel_t623319549 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::TakeLock(System.Int32&)
extern "C"  void RuntimeTypeModel_TakeLock_m1445965185 (RuntimeTypeModel_t623319549 * __this, int32_t* ___opaqueToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::GetContention()
extern "C"  int32_t RuntimeTypeModel_GetContention_m1781710419 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::AddContention()
extern "C"  void RuntimeTypeModel_AddContention_m2019413986 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::ReleaseLock(System.Int32)
extern "C"  void RuntimeTypeModel_ReleaseLock_m1429830357 (RuntimeTypeModel_t623319549 * __this, int32_t ___opaqueToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::ResolveListTypes(System.Type,System.Type&,System.Type&)
extern "C"  void RuntimeTypeModel_ResolveListTypes_m3821183342 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, Type_t ** ___itemType1, Type_t ** ___defaultType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.RuntimeTypeModel::GetSchemaTypeName(System.Type,ProtoBuf.DataFormat,System.Boolean,System.Boolean,System.Boolean&)
extern "C"  String_t* RuntimeTypeModel_GetSchemaTypeName_m4229096595 (RuntimeTypeModel_t623319549 * __this, Type_t * ___effectiveType0, int32_t ___dataFormat1, bool ___asReference2, bool ___dynamicType3, bool* ___requiresBclImport4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::SetDefaultFactory(System.Reflection.MethodInfo)
extern "C"  void RuntimeTypeModel_SetDefaultFactory_m136373100 (RuntimeTypeModel_t623319549 * __this, MethodInfo_t * ___methodInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::VerifyFactory(System.Reflection.MethodInfo,System.Type)
extern "C"  void RuntimeTypeModel_VerifyFactory_m3832473821 (RuntimeTypeModel_t623319549 * __this, MethodInfo_t * ___factory0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
