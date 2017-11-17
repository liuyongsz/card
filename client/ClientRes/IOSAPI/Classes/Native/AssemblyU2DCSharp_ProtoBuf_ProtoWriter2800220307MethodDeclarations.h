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

// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// System.IO.Stream
struct Stream_t3255436806;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "AssemblyU2DCSharp_ProtoBuf_SerializationContext3878296411.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "AssemblyU2DCSharp_ProtoBuf_SubItemToken3722101296.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ProtoBuf.ProtoWriter::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext)
extern "C"  void ProtoWriter__ctor_m1221077309 (ProtoWriter_t2800220307 * __this, Stream_t3255436806 * ___dest0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::.cctor()
extern "C"  void ProtoWriter__cctor_m3291621286 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::System.IDisposable.Dispose()
extern "C"  void ProtoWriter_System_IDisposable_Dispose_m493048746 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteObject(System.Object,System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteObject_m1421048066 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteRecursionSafeObject(System.Object,System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteRecursionSafeObject_m3072943937 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteObject(System.Object,System.Int32,ProtoBuf.ProtoWriter,ProtoBuf.PrefixStyle,System.Int32)
extern "C"  void ProtoWriter_WriteObject_m2023177787 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoWriter_t2800220307 * ___writer2, int32_t ___style3, int32_t ___fieldNumber4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoWriter::GetTypeKey(System.Type&)
extern "C"  int32_t ProtoWriter_GetTypeKey_m4134116321 (ProtoWriter_t2800220307 * __this, Type_t ** ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.NetObjectCache ProtoBuf.ProtoWriter::get_NetCache()
extern "C"  NetObjectCache_t2620415644 * ProtoWriter_get_NetCache_m2310571197 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.ProtoWriter::get_WireType()
extern "C"  int32_t ProtoWriter_get_WireType_m2100846636 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteFieldHeader(System.Int32,ProtoBuf.WireType,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteFieldHeader_m1235557042 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___wireType1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteHeaderCore(System.Int32,ProtoBuf.WireType,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteHeaderCore_m2618745183 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___wireType1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteBytes(System.Byte[],ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteBytes_m161071186 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteBytes(System.Byte[],System.Int32,System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteBytes_m4012803196 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___length2, ProtoWriter_t2800220307 * ___writer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::CopyRawFromStream(System.IO.Stream,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_CopyRawFromStream_m3867505079 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::IncrementedAndReset(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_IncrementedAndReset_m4288559912 (Il2CppObject * __this /* static, unused */, int32_t ___length0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SubItemToken ProtoBuf.ProtoWriter::StartSubItem(System.Object,ProtoBuf.ProtoWriter)
extern "C"  SubItemToken_t3722101296  ProtoWriter_StartSubItem_m893538882 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::CheckRecursionStackAndPush(System.Object)
extern "C"  void ProtoWriter_CheckRecursionStackAndPush_m693655266 (ProtoWriter_t2800220307 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::PopRecursionStack()
extern "C"  void ProtoWriter_PopRecursionStack_m1801729672 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SubItemToken ProtoBuf.ProtoWriter::StartSubItem(System.Object,ProtoBuf.ProtoWriter,System.Boolean)
extern "C"  SubItemToken_t3722101296  ProtoWriter_StartSubItem_m1052420519 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, bool ___allowFixed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_EndSubItem_m900625936 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoWriter,ProtoBuf.PrefixStyle)
extern "C"  void ProtoWriter_EndSubItem_m1869822646 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoWriter_t2800220307 * ___writer1, int32_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SerializationContext ProtoBuf.ProtoWriter::get_Context()
extern "C"  SerializationContext_t3878296411 * ProtoWriter_get_Context_m1522464408 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::Dispose()
extern "C"  void ProtoWriter_Dispose_m971221610 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoWriter::GetPosition(ProtoBuf.ProtoWriter)
extern "C"  int32_t ProtoWriter_GetPosition_m2778343826 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::DemandSpace(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_DemandSpace_m3954650437 (Il2CppObject * __this /* static, unused */, int32_t ___required0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::Close()
extern "C"  void ProtoWriter_Close_m3671700917 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::CheckDepthFlushlock()
extern "C"  void ProtoWriter_CheckDepthFlushlock_m2266443511 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoWriter::get_Model()
extern "C"  TypeModel_t653695305 * ProtoWriter_get_Model_m1143052483 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::Flush(ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_Flush_m2160116591 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt32Variant(System.UInt32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt32Variant_m2287025628 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ProtoBuf.ProtoWriter::Zig(System.Int32)
extern "C"  uint32_t ProtoWriter_Zig_m1199263817 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ProtoBuf.ProtoWriter::Zig(System.Int64)
extern "C"  uint64_t ProtoWriter_Zig_m279791297 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt64Variant(System.UInt64,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt64Variant_m3209761294 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteString(System.String,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteString_m276195849 (Il2CppObject * __this /* static, unused */, String_t* ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt64(System.UInt64,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt64_m2086455081 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt64(System.Int64,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteInt64_m195348957 (Il2CppObject * __this /* static, unused */, int64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt32(System.UInt32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt32_m3442141513 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt16(System.Int16,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteInt16_m3395026289 (Il2CppObject * __this /* static, unused */, int16_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt16(System.UInt16,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt16_m706121481 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteByte(System.Byte,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteByte_m2870573193 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteSByte(System.SByte,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteSByte_m1459813693 (Il2CppObject * __this /* static, unused */, int8_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt32ToBuffer(System.Int32,System.Byte[],System.Int32)
extern "C"  void ProtoWriter_WriteInt32ToBuffer_m3219081032 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt32(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteInt32_m3842626533 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteDouble(System.Double,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteDouble_m2869768713 (Il2CppObject * __this /* static, unused */, double ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteSingle(System.Single,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteSingle_m2119812009 (Il2CppObject * __this /* static, unused */, float ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::ThrowEnumException(ProtoBuf.ProtoWriter,System.Object)
extern "C"  void ProtoWriter_ThrowEnumException_m700755915 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, Il2CppObject * ___enumValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoWriter::CreateException(ProtoBuf.ProtoWriter)
extern "C"  Exception_t1927440687 * ProtoWriter_CreateException_m3171316895 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteBoolean(System.Boolean,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteBoolean_m2112024945 (Il2CppObject * __this /* static, unused */, bool ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::AppendExtensionData(ProtoBuf.IExtensible,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_AppendExtensionData_m2026598211 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::SetPackedField(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_SetPackedField_m4189814028 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoWriter::SerializeType(System.Type)
extern "C"  String_t* ProtoWriter_SerializeType_m2177009727 (ProtoWriter_t2800220307 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::SetRootObject(System.Object)
extern "C"  void ProtoWriter_SetRootObject_m171320632 (ProtoWriter_t2800220307 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteType(System.Type,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteType_m2681599881 (Il2CppObject * __this /* static, unused */, Type_t * ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
