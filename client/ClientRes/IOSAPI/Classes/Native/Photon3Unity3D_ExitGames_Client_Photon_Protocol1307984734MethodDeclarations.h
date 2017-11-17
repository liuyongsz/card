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

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t3015313336;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.EventData
struct EventData_t126381822;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_GpType1441393025.h"
#include "mscorlib_System_Type1303803226.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3015313336.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData126381822.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Array3829468939.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"

// System.Boolean ExitGames.Client.Photon.Protocol::SerializeCustom(System.IO.MemoryStream,System.Object)
extern "C"  bool Protocol_SerializeCustom_m1381320181 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, Il2CppObject * ___serObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::DeserializeCustom(System.IO.MemoryStream,System.Byte)
extern "C"  Il2CppObject * Protocol_DeserializeCustom_m1063904160 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, uint8_t ___customTypeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::GetTypeOfCode(System.Byte)
extern "C"  Type_t * Protocol_GetTypeOfCode_m3823232967 (Il2CppObject * __this /* static, unused */, uint8_t ___typeCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.GpType ExitGames.Client.Photon.Protocol::GetCodeOfType(System.Type)
extern "C"  uint8_t Protocol_GetCodeOfType_m1959578745 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::CreateArrayByType(System.Byte,System.Int16)
extern "C"  Il2CppArray * Protocol_CreateArrayByType_m2655799737 (Il2CppObject * __this /* static, unused */, uint8_t ___arrayType0, int16_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C"  void Protocol_SerializeOperationRequest_m4094205887 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memStream0, OperationRequest_t3015313336 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  void Protocol_SerializeOperationRequest_m3749515876 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memStream0, uint8_t ___operationCode1, Dictionary_2_t2064209302 * ___parameters2, bool ___setType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol::DeserializeOperationRequest(System.IO.MemoryStream)
extern "C"  OperationRequest_t3015313336 * Protocol_DeserializeOperationRequest_m1713016170 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationResponse(System.IO.MemoryStream,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C"  void Protocol_SerializeOperationResponse_m719049447 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memStream0, OperationResponse_t3648537128 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol::DeserializeOperationResponse(System.IO.MemoryStream)
extern "C"  OperationResponse_t3648537128 * Protocol_DeserializeOperationResponse_m2514126608 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memoryStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeEventData(System.IO.MemoryStream,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C"  void Protocol_SerializeEventData_m3320457823 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memStream0, EventData_t126381822 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol::DeserializeEventData(System.IO.MemoryStream)
extern "C"  EventData_t126381822 * Protocol_DeserializeEventData_m2932036040 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeParameterTable(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void Protocol_SerializeParameterTable_m3938896631 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memStream0, Dictionary_2_t2064209302 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol::DeserializeParameterTable(System.IO.MemoryStream)
extern "C"  Dictionary_2_t2064209302 * Protocol_DeserializeParameterTable_m3678055373 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___memoryStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.IO.MemoryStream,System.Object,System.Boolean)
extern "C"  void Protocol_Serialize_m121794613 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, Il2CppObject * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByte(System.IO.MemoryStream,System.Byte,System.Boolean)
extern "C"  void Protocol_SerializeByte_m1116886112 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, uint8_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeBoolean(System.IO.MemoryStream,System.Boolean,System.Boolean)
extern "C"  void Protocol_SerializeBoolean_m910200034 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, bool ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeShort(System.IO.MemoryStream,System.Int16,System.Boolean)
extern "C"  void Protocol_SerializeShort_m3513518478 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, int16_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m2684343985 (Il2CppObject * __this /* static, unused */, int16_t ___value0, ByteU5BU5D_t3397334013* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeInteger(System.IO.MemoryStream,System.Int32,System.Boolean)
extern "C"  void Protocol_SerializeInteger_m940949444 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, int32_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m1727463231 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t3397334013* ___target1, int32_t* ___targetOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeLong(System.IO.MemoryStream,System.Int64,System.Boolean)
extern "C"  void Protocol_SerializeLong_m3218261279 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, int64_t ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeFloat(System.IO.MemoryStream,System.Single,System.Boolean)
extern "C"  void Protocol_SerializeFloat_m3137223440 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, float ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDouble(System.IO.MemoryStream,System.Double,System.Boolean)
extern "C"  void Protocol_SerializeDouble_m4286268922 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, double ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeString(System.IO.MemoryStream,System.String,System.Boolean)
extern "C"  void Protocol_SerializeString_m3612878010 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, String_t* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeArray(System.IO.MemoryStream,System.Array,System.Boolean)
extern "C"  void Protocol_SerializeArray_m2739232962 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, Il2CppArray * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByteArray(System.IO.MemoryStream,System.Byte[],System.Boolean)
extern "C"  void Protocol_SerializeByteArray_m3842883835 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, ByteU5BU5D_t3397334013* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeIntArrayOptimized(System.IO.MemoryStream,System.Int32[],System.Boolean)
extern "C"  void Protocol_SerializeIntArrayOptimized_m1524985195 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___inWriter0, Int32U5BU5D_t3030399641* ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeObjectArray(System.IO.MemoryStream,System.Object[],System.Boolean)
extern "C"  void Protocol_SerializeObjectArray_m2124926619 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, ObjectU5BU5D_t3614634134* ___objects1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeHashTable(System.IO.MemoryStream,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Protocol_SerializeHashTable_m791075999 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, Hashtable_t995404622 * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionary(System.IO.MemoryStream,System.Collections.IDictionary,System.Boolean)
extern "C"  void Protocol_SerializeDictionary_m2836232480 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___dout0, Il2CppObject * ___serObject1, bool ___setType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Type)
extern "C"  void Protocol_SerializeDictionaryHeader_m3029475692 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___writer0, Type_t * ___dictType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Object,System.Boolean&,System.Boolean&)
extern "C"  void Protocol_SerializeDictionaryHeader_m147543765 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___writer0, Il2CppObject * ___dict1, bool* ___setKeyType2, bool* ___setValueType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryElements(System.IO.MemoryStream,System.Object,System.Boolean,System.Boolean)
extern "C"  void Protocol_SerializeDictionaryElements_m651361051 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___writer0, Il2CppObject * ___dict1, bool ___setKeyType2, bool ___setValueType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::Deserialize(System.IO.MemoryStream,System.Byte)
extern "C"  Il2CppObject * Protocol_Deserialize_m3656612921 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, uint8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol::DeserializeByte(System.IO.MemoryStream)
extern "C"  uint8_t Protocol_DeserializeByte_m751075693 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeBoolean(System.IO.MemoryStream)
extern "C"  bool Protocol_DeserializeBoolean_m3714524377 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol::DeserializeShort(System.IO.MemoryStream)
extern "C"  int16_t Protocol_DeserializeShort_m2762467015 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m1042189978 (Il2CppObject * __this /* static, unused */, int16_t* ___value0, ByteU5BU5D_t3397334013* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol::DeserializeInteger(System.IO.MemoryStream)
extern "C"  int32_t Protocol_DeserializeInteger_m2165237601 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m1562500108 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, ByteU5BU5D_t3397334013* ___source1, int32_t* ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol::DeserializeLong(System.IO.MemoryStream)
extern "C"  int64_t Protocol_DeserializeLong_m1821612458 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol::DeserializeFloat(System.IO.MemoryStream)
extern "C"  float Protocol_DeserializeFloat_m262258855 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol::DeserializeDouble(System.IO.MemoryStream)
extern "C"  double Protocol_DeserializeDouble_m2173220813 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol::DeserializeString(System.IO.MemoryStream)
extern "C"  String_t* Protocol_DeserializeString_m3182919821 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::DeserializeArray(System.IO.MemoryStream)
extern "C"  Il2CppArray * Protocol_DeserializeArray_m1937698541 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::DeserializeByteArray(System.IO.MemoryStream)
extern "C"  ByteU5BU5D_t3397334013* Protocol_DeserializeByteArray_m2526413628 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol::DeserializeIntArray(System.IO.MemoryStream)
extern "C"  Int32U5BU5D_t3030399641* Protocol_DeserializeIntArray_m1547892383 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol::DeserializeStringArray(System.IO.MemoryStream)
extern "C"  StringU5BU5D_t1642385972* Protocol_DeserializeStringArray_m120824188 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol::DeserializeObjectArray(System.IO.MemoryStream)
extern "C"  ObjectU5BU5D_t3614634134* Protocol_DeserializeObjectArray_m3369882044 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol::DeserializeHashTable(System.IO.MemoryStream)
extern "C"  Hashtable_t995404622 * Protocol_DeserializeHashTable_m1684922600 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol::DeserializeDictionary(System.IO.MemoryStream)
extern "C"  Il2CppObject * Protocol_DeserializeDictionary_m3783531919 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeDictionaryArray(System.IO.MemoryStream,System.Int16,System.Array&)
extern "C"  bool Protocol_DeserializeDictionaryArray_m302991587 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___din0, int16_t ___size1, Il2CppArray ** ___arrayResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::DeserializeDictionaryType(System.IO.MemoryStream,System.Byte&,System.Byte&)
extern "C"  Type_t * Protocol_DeserializeDictionaryType_m3739012505 (Il2CppObject * __this /* static, unused */, MemoryStream_t743994179 * ___reader0, uint8_t* ___keyTypeCode1, uint8_t* ___valTypeCode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
extern "C"  void Protocol__cctor_m745332547 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
