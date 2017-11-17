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

// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.Meta.TypeFormatEventHandler
struct TypeFormatEventHandler_t3452100977;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.Serializer/TypeResolver
struct TypeResolver_t475680514;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeFormatEventHan3452100977.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoTypeCode3296822465.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"
#include "AssemblyU2DCSharp_ProtoBuf_Serializer_TypeResolver475680514.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList2284403912.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"

// System.Void ProtoBuf.Meta.TypeModel::.ctor()
extern "C"  void TypeModel__ctor_m2354292664 (TypeModel_t653695305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::.cctor()
extern "C"  void TypeModel__cctor_m2393005449 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::add_DynamicTypeFormatting(ProtoBuf.Meta.TypeFormatEventHandler)
extern "C"  void TypeModel_add_DynamicTypeFormatting_m1341533807 (TypeModel_t653695305 * __this, TypeFormatEventHandler_t3452100977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::remove_DynamicTypeFormatting(ProtoBuf.Meta.TypeFormatEventHandler)
extern "C"  void TypeModel_remove_DynamicTypeFormatting_m2571489886 (TypeModel_t653695305 * __this, TypeFormatEventHandler_t3452100977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type)
extern "C"  Type_t * TypeModel_MapType_m2576192277 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type,System.Boolean)
extern "C"  Type_t * TypeModel_MapType_m2178298996 (TypeModel_t653695305 * __this, Type_t * ___type0, bool ___demand1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.Meta.TypeModel::GetWireType(ProtoBuf.ProtoTypeCode,ProtoBuf.DataFormat,System.Type&,System.Int32&)
extern "C"  int32_t TypeModel_GetWireType_m1650497436 (TypeModel_t653695305 * __this, int32_t ___code0, int32_t ___format1, Type_t ** ___type2, int32_t* ___modelKey3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::TrySerializeAuxiliaryType(ProtoBuf.ProtoWriter,System.Type,ProtoBuf.DataFormat,System.Int32,System.Object,System.Boolean)
extern "C"  bool TypeModel_TrySerializeAuxiliaryType_m2238698142 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___writer0, Type_t * ___type1, int32_t ___format2, int32_t ___tag3, Il2CppObject * ___value4, bool ___isInsideList5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::SerializeCore(ProtoBuf.ProtoWriter,System.Object)
extern "C"  void TypeModel_SerializeCore_m263598453 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::Serialize(System.IO.Stream,System.Object)
extern "C"  void TypeModel_Serialize_m3313248217 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::Serialize(System.IO.Stream,System.Object,ProtoBuf.SerializationContext)
extern "C"  void TypeModel_Serialize_m1336148689 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::Serialize(ProtoBuf.ProtoWriter,System.Object)
extern "C"  void TypeModel_Serialize_m1170075048 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___dest0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeserializeWithLengthPrefix(System.IO.Stream,System.Object,System.Type,ProtoBuf.PrefixStyle,System.Int32)
extern "C"  Il2CppObject * TypeModel_DeserializeWithLengthPrefix_m2822133539 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___style3, int32_t ___fieldNumber4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeserializeWithLengthPrefix(System.IO.Stream,System.Object,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.Serializer/TypeResolver)
extern "C"  Il2CppObject * TypeModel_DeserializeWithLengthPrefix_m3417924243 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___style3, int32_t ___expectedField4, TypeResolver_t475680514 * ___resolver5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeserializeWithLengthPrefix(System.IO.Stream,System.Object,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.Serializer/TypeResolver,System.Int32&)
extern "C"  Il2CppObject * TypeModel_DeserializeWithLengthPrefix_m1931766788 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___style3, int32_t ___expectedField4, TypeResolver_t475680514 * ___resolver5, int32_t* ___bytesRead6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeserializeWithLengthPrefix(System.IO.Stream,System.Object,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.Serializer/TypeResolver,System.Int32&,System.Boolean&,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeModel_DeserializeWithLengthPrefix_m1213578121 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___style3, int32_t ___expectedField4, TypeResolver_t475680514 * ___resolver5, int32_t* ___bytesRead6, bool* ___haveObject7, SerializationContext_t3878296411 * ___context8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable ProtoBuf.Meta.TypeModel::DeserializeItems(System.IO.Stream,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.Serializer/TypeResolver)
extern "C"  Il2CppObject * TypeModel_DeserializeItems_m2187381358 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Type_t * ___type1, int32_t ___style2, int32_t ___expectedField3, TypeResolver_t475680514 * ___resolver4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable ProtoBuf.Meta.TypeModel::DeserializeItems(System.IO.Stream,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.Serializer/TypeResolver,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeModel_DeserializeItems_m488128758 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Type_t * ___type1, int32_t ___style2, int32_t ___expectedField3, TypeResolver_t475680514 * ___resolver4, SerializationContext_t3878296411 * ___context5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::SerializeWithLengthPrefix(System.IO.Stream,System.Object,System.Type,ProtoBuf.PrefixStyle,System.Int32)
extern "C"  void TypeModel_SerializeWithLengthPrefix_m4037993135 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___style3, int32_t ___fieldNumber4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::SerializeWithLengthPrefix(System.IO.Stream,System.Object,System.Type,ProtoBuf.PrefixStyle,System.Int32,ProtoBuf.SerializationContext)
extern "C"  void TypeModel_SerializeWithLengthPrefix_m33740387 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___style3, int32_t ___fieldNumber4, SerializationContext_t3878296411 * ___context5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type)
extern "C"  Il2CppObject * TypeModel_Deserialize_m2787903682 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeModel_Deserialize_m3612564438 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, SerializationContext_t3878296411 * ___context3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::PrepareDeserialize(System.Object,System.Type&)
extern "C"  bool TypeModel_PrepareDeserialize_m306006543 (TypeModel_t653695305 * __this, Il2CppObject * ___value0, Type_t ** ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type,System.Int32)
extern "C"  Il2CppObject * TypeModel_Deserialize_m2516886263 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type,System.Int32,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeModel_Deserialize_m1681169355 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, int32_t ___length3, SerializationContext_t3878296411 * ___context4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(ProtoBuf.ProtoReader,System.Object,System.Type)
extern "C"  Il2CppObject * TypeModel_Deserialize_m1271904507 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeserializeCore(ProtoBuf.ProtoReader,System.Type,System.Object,System.Boolean)
extern "C"  Il2CppObject * TypeModel_DeserializeCore_m3402306495 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___reader0, Type_t * ___type1, Il2CppObject * ___value2, bool ___noAutoCreate3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.TypeModel::ResolveListAdd(ProtoBuf.Meta.TypeModel,System.Type,System.Type,System.Boolean&)
extern "C"  MethodInfo_t * TypeModel_ResolveListAdd_m1549774893 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___listType1, Type_t * ___itemType2, bool* ___isList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::GetListItemType(ProtoBuf.Meta.TypeModel,System.Type)
extern "C"  Type_t * TypeModel_GetListItemType_m2555340505 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___listType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::TestEnumerableListPatterns(ProtoBuf.Meta.TypeModel,ProtoBuf.Meta.BasicList,System.Type)
extern "C"  void TypeModel_TestEnumerableListPatterns_m867114199 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, BasicList_t2284403912 * ___candidates1, Type_t * ___iType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::CheckDictionaryAccessors(ProtoBuf.Meta.TypeModel,System.Type,System.Type)
extern "C"  bool TypeModel_CheckDictionaryAccessors_m3255887959 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___pair1, Type_t * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::TryDeserializeList(ProtoBuf.Meta.TypeModel,ProtoBuf.ProtoReader,ProtoBuf.DataFormat,System.Int32,System.Type,System.Type,System.Object&)
extern "C"  bool TypeModel_TryDeserializeList_m3384258390 (TypeModel_t653695305 * __this, TypeModel_t653695305 * ___model0, ProtoReader_t3981212867 * ___reader1, int32_t ___format2, int32_t ___tag3, Type_t * ___listType4, Type_t * ___itemType5, Il2CppObject ** ___value6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::CreateListInstance(System.Type,System.Type)
extern "C"  Il2CppObject * TypeModel_CreateListInstance_m4195360286 (Il2CppObject * __this /* static, unused */, Type_t * ___listType0, Type_t * ___itemType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::TryDeserializeAuxiliaryType(ProtoBuf.ProtoReader,ProtoBuf.DataFormat,System.Int32,System.Type,System.Object&,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool TypeModel_TryDeserializeAuxiliaryType_m605962652 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___reader0, int32_t ___format1, int32_t ___tag2, Type_t * ___type3, Il2CppObject ** ___value4, bool ___skipOtherFields5, bool ___asListItem6, bool ___autoCreate7, bool ___insideList8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.TypeModel::Create()
extern "C"  RuntimeTypeModel_t623319549 * TypeModel_Create_m2676944342 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::ResolveProxies(System.Type)
extern "C"  Type_t * TypeModel_ResolveProxies_m2687505211 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::IsDefined(System.Type)
extern "C"  bool TypeModel_IsDefined_m2075555932 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.TypeModel::GetKey(System.Type&)
extern "C"  int32_t TypeModel_GetKey_m733520216 (TypeModel_t653695305 * __this, Type_t ** ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeepClone(System.Object)
extern "C"  Il2CppObject * TypeModel_DeepClone_m4148333948 (TypeModel_t653695305 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::ThrowUnexpectedSubtype(System.Type,System.Type)
extern "C"  void TypeModel_ThrowUnexpectedSubtype_m2654175261 (Il2CppObject * __this /* static, unused */, Type_t * ___expected0, Type_t * ___actual1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::ThrowUnexpectedType(System.Type)
extern "C"  void TypeModel_ThrowUnexpectedType_m1973118148 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.Meta.TypeModel::CreateNestedListsNotSupported()
extern "C"  Exception_t1927440687 * TypeModel_CreateNestedListsNotSupported_m949590828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::ThrowCannotCreateInstance(System.Type)
extern "C"  void TypeModel_ThrowCannotCreateInstance_m997642719 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.TypeModel::SerializeType(ProtoBuf.Meta.TypeModel,System.Type)
extern "C"  String_t* TypeModel_SerializeType_m3114247391 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::DeserializeType(ProtoBuf.Meta.TypeModel,System.String)
extern "C"  Type_t * TypeModel_DeserializeType_m2792626698 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::CanSerializeContractType(System.Type)
extern "C"  bool TypeModel_CanSerializeContractType_m3244384793 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::CanSerialize(System.Type)
extern "C"  bool TypeModel_CanSerialize_m307736391 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::CanSerializeBasicType(System.Type)
extern "C"  bool TypeModel_CanSerializeBasicType_m1088100881 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::CanSerialize(System.Type,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool TypeModel_CanSerialize_m243394678 (TypeModel_t653695305 * __this, Type_t * ___type0, bool ___allowBasic1, bool ___allowContract2, bool ___allowLists3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.TypeModel::GetSchema(System.Type)
extern "C"  String_t* TypeModel_GetSchema_m912424639 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::GetType(System.String,System.Reflection.Assembly)
extern "C"  Type_t * TypeModel_GetType_m335470320 (TypeModel_t653695305 * __this, String_t* ___fullName0, Assembly_t4268412390 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::ResolveKnownType(System.String,ProtoBuf.Meta.TypeModel,System.Reflection.Assembly)
extern "C" IL2CPP_NO_INLINE Type_t * TypeModel_ResolveKnownType_m707320744 (Il2CppObject * __this /* static, unused */, String_t* ___name0, TypeModel_t653695305 * ___model1, Assembly_t4268412390 * ___assembly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
