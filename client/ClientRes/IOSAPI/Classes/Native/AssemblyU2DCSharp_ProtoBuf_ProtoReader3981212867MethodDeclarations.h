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

// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.IO.Stream
struct Stream_t3255436806;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_SubItemToken3722101296.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.ProtoReader::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext)
extern "C"  void ProtoReader__ctor_m1713095587 (ProtoReader_t3981212867 * __this, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern "C"  void ProtoReader__ctor_m2943785986 (ProtoReader_t3981212867 * __this, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::.cctor()
extern "C"  void ProtoReader__cctor_m1782913614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::get_FieldNumber()
extern "C"  int32_t ProtoReader_get_FieldNumber_m2491885967 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.ProtoReader::get_WireType()
extern "C"  int32_t ProtoReader_get_WireType_m452302244 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::get_InternStrings()
extern "C"  bool ProtoReader_get_InternStrings_m2158149272 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::set_InternStrings(System.Boolean)
extern "C"  void ProtoReader_set_InternStrings_m3831588115 (ProtoReader_t3981212867 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Init(ProtoBuf.ProtoReader,System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern "C"  void ProtoReader_Init_m357825328 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, Stream_t3255436806 * ___source1, TypeModel_t653695305 * ___model2, SerializationContext_t3878296411 * ___context3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SerializationContext ProtoBuf.ProtoReader::get_Context()
extern "C"  SerializationContext_t3878296411 * ProtoReader_get_Context_m374834920 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Dispose()
extern "C"  void ProtoReader_Dispose_m3408394710 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt32VariantWithoutMoving(System.Boolean,System.UInt32&)
extern "C"  int32_t ProtoReader_TryReadUInt32VariantWithoutMoving_m3059885295 (ProtoReader_t3981212867 * __this, bool ___trimNegative0, uint32_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ProtoBuf.ProtoReader::ReadUInt32Variant(System.Boolean)
extern "C"  uint32_t ProtoReader_ReadUInt32Variant_m596001787 (ProtoReader_t3981212867 * __this, bool ___trimNegative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::TryReadUInt32Variant(System.UInt32&)
extern "C"  bool ProtoReader_TryReadUInt32Variant_m2793047902 (ProtoReader_t3981212867 * __this, uint32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ProtoBuf.ProtoReader::ReadUInt32()
extern "C"  uint32_t ProtoReader_ReadUInt32_m4204984831 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::get_Position()
extern "C"  int32_t ProtoReader_get_Position_m4130440403 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Ensure(System.Int32,System.Boolean)
extern "C"  void ProtoReader_Ensure_m4200321925 (ProtoReader_t3981212867 * __this, int32_t ___count0, bool ___strict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ProtoBuf.ProtoReader::ReadInt16()
extern "C"  int16_t ProtoReader_ReadInt16_m2463847963 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ProtoBuf.ProtoReader::ReadUInt16()
extern "C"  uint16_t ProtoReader_ReadUInt16_m3382806295 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ProtoBuf.ProtoReader::ReadByte()
extern "C"  uint8_t ProtoReader_ReadByte_m398863507 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte ProtoBuf.ProtoReader::ReadSByte()
extern "C"  int8_t ProtoReader_ReadSByte_m1677766939 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadInt32()
extern "C"  int32_t ProtoReader_ReadInt32_m3000567963 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::Zag(System.UInt32)
extern "C"  int32_t ProtoReader_Zag_m1310058523 (Il2CppObject * __this /* static, unused */, uint32_t ___ziggedValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ProtoBuf.ProtoReader::Zag(System.UInt64)
extern "C"  int64_t ProtoReader_Zag_m3343604955 (Il2CppObject * __this /* static, unused */, uint64_t ___ziggedValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ProtoBuf.ProtoReader::ReadInt64()
extern "C"  int64_t ProtoReader_ReadInt64_m1082309595 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt64VariantWithoutMoving(System.UInt64&)
extern "C"  int32_t ProtoReader_TryReadUInt64VariantWithoutMoving_m1240843298 (ProtoReader_t3981212867 * __this, uint64_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ProtoBuf.ProtoReader::ReadUInt64Variant()
extern "C"  uint64_t ProtoReader_ReadUInt64Variant_m1021348320 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoReader::Intern(System.String)
extern "C"  String_t* ProtoReader_Intern_m2385743804 (ProtoReader_t3981212867 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoReader::ReadString()
extern "C"  String_t* ProtoReader_ReadString_m1042532391 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::ThrowEnumException(System.Type,System.Int32)
extern "C"  void ProtoReader_ThrowEnumException_m2451638569 (ProtoReader_t3981212867 * __this, Type_t * ___type0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::CreateWireTypeException()
extern "C"  Exception_t1927440687 * ProtoReader_CreateWireTypeException_m982042210 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::CreateException(System.String)
extern "C"  Exception_t1927440687 * ProtoReader_CreateException_m790092319 (ProtoReader_t3981212867 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ProtoBuf.ProtoReader::ReadDouble()
extern "C"  double ProtoReader_ReadDouble_m669578087 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.ProtoReader::ReadObject(System.Object,System.Int32,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ProtoReader_ReadObject_m4101448418 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoReader_t3981212867 * ___reader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.ProtoReader::ReadTypedObject(System.Object,System.Int32,ProtoBuf.ProtoReader,System.Type)
extern "C"  Il2CppObject * ProtoReader_ReadTypedObject_m2879937261 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoReader_t3981212867 * ___reader2, Type_t * ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoReader)
extern "C"  void ProtoReader_EndSubItem_m3444316904 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SubItemToken ProtoBuf.ProtoReader::StartSubItem(ProtoBuf.ProtoReader)
extern "C"  SubItemToken_t3722101296  ProtoReader_StartSubItem_m3121033468 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadFieldHeader()
extern "C"  int32_t ProtoReader_ReadFieldHeader_m4225133048 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::TryReadFieldHeader(System.Int32)
extern "C"  bool ProtoReader_TryReadFieldHeader_m3697571318 (ProtoReader_t3981212867 * __this, int32_t ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoReader::get_Model()
extern "C"  TypeModel_t653695305 * ProtoReader_get_Model_m95965373 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Hint(ProtoBuf.WireType)
extern "C"  void ProtoReader_Hint_m3484319034 (ProtoReader_t3981212867 * __this, int32_t ___wireType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Assert(ProtoBuf.WireType)
extern "C"  void ProtoReader_Assert_m151307495 (ProtoReader_t3981212867 * __this, int32_t ___wireType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::SkipField()
extern "C"  void ProtoReader_SkipField_m435078202 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ProtoBuf.ProtoReader::ReadUInt64()
extern "C"  uint64_t ProtoReader_ReadUInt64_m1389345419 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProtoBuf.ProtoReader::ReadSingle()
extern "C"  float ProtoReader_ReadSingle_m3342110771 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::ReadBoolean()
extern "C"  bool ProtoReader_ReadBoolean_m1030066139 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ProtoBuf.ProtoReader::AppendBytes(System.Byte[],ProtoBuf.ProtoReader)
extern "C"  ByteU5BU5D_t3397334013* ProtoReader_AppendBytes_m1997159891 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadByteOrThrow(System.IO.Stream)
extern "C"  int32_t ProtoReader_ReadByteOrThrow_m737004235 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadLengthPrefix(System.IO.Stream,System.Boolean,ProtoBuf.PrefixStyle,System.Int32&)
extern "C"  int32_t ProtoReader_ReadLengthPrefix_m2066980636 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, bool ___expectHeader1, int32_t ___style2, int32_t* ___fieldNumber3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::DirectReadLittleEndianInt32(System.IO.Stream)
extern "C"  int32_t ProtoReader_DirectReadLittleEndianInt32_m347898612 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::DirectReadBigEndianInt32(System.IO.Stream)
extern "C"  int32_t ProtoReader_DirectReadBigEndianInt32_m1833849740 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::DirectReadVarintInt32(System.IO.Stream)
extern "C"  int32_t ProtoReader_DirectReadVarintInt32_m3556842675 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::DirectReadBytes(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void ProtoReader_DirectReadBytes_m3954418767 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ProtoBuf.ProtoReader::DirectReadBytes(System.IO.Stream,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* ProtoReader_DirectReadBytes_m2596604157 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoReader::DirectReadString(System.IO.Stream,System.Int32)
extern "C"  String_t* ProtoReader_DirectReadString_m2392119888 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadLengthPrefix(System.IO.Stream,System.Boolean,ProtoBuf.PrefixStyle,System.Int32&,System.Int32&)
extern "C"  int32_t ProtoReader_ReadLengthPrefix_m1640252655 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, bool ___expectHeader1, int32_t ___style2, int32_t* ___fieldNumber3, int32_t* ___bytesRead4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt32Variant(System.IO.Stream,System.UInt32&)
extern "C"  int32_t ProtoReader_TryReadUInt32Variant_m141269759 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, uint32_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Seek(System.IO.Stream,System.Int32,System.Byte[])
extern "C"  void ProtoReader_Seek_m3054814146 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___count1, ByteU5BU5D_t3397334013* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::AddErrorData(System.Exception,ProtoBuf.ProtoReader)
extern "C"  Exception_t1927440687 * ProtoReader_AddErrorData_m466887009 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::EoF(ProtoBuf.ProtoReader)
extern "C"  Exception_t1927440687 * ProtoReader_EoF_m3450231042 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::AppendExtensionData(ProtoBuf.IExtensible)
extern "C"  void ProtoReader_AppendExtensionData_m3650103513 (ProtoReader_t3981212867 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::AppendExtensionField(ProtoBuf.ProtoWriter)
extern "C"  void ProtoReader_AppendExtensionField_m3425114460 (ProtoReader_t3981212867 * __this, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::HasSubValue(ProtoBuf.WireType,ProtoBuf.ProtoReader)
extern "C"  bool ProtoReader_HasSubValue_m3468739392 (Il2CppObject * __this /* static, unused */, int32_t ___wireType0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::GetTypeKey(System.Type&)
extern "C"  int32_t ProtoReader_GetTypeKey_m3464667963 (ProtoReader_t3981212867 * __this, Type_t ** ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.NetObjectCache ProtoBuf.ProtoReader::get_NetCache()
extern "C"  NetObjectCache_t2620415644 * ProtoReader_get_NetCache_m3222260787 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.ProtoReader::DeserializeType(System.String)
extern "C"  Type_t * ProtoReader_DeserializeType_m142836064 (ProtoReader_t3981212867 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::SetRootObject(System.Object)
extern "C"  void ProtoReader_SetRootObject_m2654444988 (ProtoReader_t3981212867 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::NoteObject(System.Object,ProtoBuf.ProtoReader)
extern "C"  void ProtoReader_NoteObject_m2135823894 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.ProtoReader::ReadType()
extern "C"  Type_t * ProtoReader_ReadType_m1019698843 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::TrapNextObject(System.Int32)
extern "C"  void ProtoReader_TrapNextObject_m912894149 (ProtoReader_t3981212867 * __this, int32_t ___newObjectKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::CheckFullyConsumed()
extern "C"  void ProtoReader_CheckFullyConsumed_m547878317 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.ProtoReader::Merge(ProtoBuf.ProtoReader,System.Object,System.Object)
extern "C"  Il2CppObject * ProtoReader_Merge_m1660633250 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___parent0, Il2CppObject * ___from1, Il2CppObject * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::Create(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern "C"  ProtoReader_t3981212867 * ProtoReader_Create_m2568729087 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::GetRecycled()
extern "C"  ProtoReader_t3981212867 * ProtoReader_GetRecycled_m2195829045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Recycle(ProtoBuf.ProtoReader)
extern "C"  void ProtoReader_Recycle_m4233900426 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
