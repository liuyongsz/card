#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Text.UTF8Encoding
struct UTF8Encoding_t111055448;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoReader
struct  ProtoReader_t3981212867  : public Il2CppObject
{
public:
	// System.IO.Stream ProtoBuf.ProtoReader::source
	Stream_t3255436806 * ___source_3;
	// System.Byte[] ProtoBuf.ProtoReader::ioBuffer
	ByteU5BU5D_t3397334013* ___ioBuffer_4;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoReader::model
	TypeModel_t653695305 * ___model_5;
	// System.Int32 ProtoBuf.ProtoReader::fieldNumber
	int32_t ___fieldNumber_6;
	// System.Int32 ProtoBuf.ProtoReader::depth
	int32_t ___depth_7;
	// System.Int32 ProtoBuf.ProtoReader::dataRemaining
	int32_t ___dataRemaining_8;
	// System.Int32 ProtoBuf.ProtoReader::ioIndex
	int32_t ___ioIndex_9;
	// System.Int32 ProtoBuf.ProtoReader::position
	int32_t ___position_10;
	// System.Int32 ProtoBuf.ProtoReader::available
	int32_t ___available_11;
	// System.Int32 ProtoBuf.ProtoReader::blockEnd
	int32_t ___blockEnd_12;
	// ProtoBuf.WireType ProtoBuf.ProtoReader::wireType
	int32_t ___wireType_13;
	// System.Boolean ProtoBuf.ProtoReader::isFixedLength
	bool ___isFixedLength_14;
	// System.Boolean ProtoBuf.ProtoReader::internStrings
	bool ___internStrings_15;
	// ProtoBuf.NetObjectCache ProtoBuf.ProtoReader::netCache
	NetObjectCache_t2620415644 * ___netCache_16;
	// System.UInt32 ProtoBuf.ProtoReader::trapCount
	uint32_t ___trapCount_17;
	// ProtoBuf.SerializationContext ProtoBuf.ProtoReader::context
	SerializationContext_t3878296411 * ___context_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ProtoBuf.ProtoReader::stringInterner
	Dictionary_2_t3943999495 * ___stringInterner_19;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___source_3)); }
	inline Stream_t3255436806 * get_source_3() const { return ___source_3; }
	inline Stream_t3255436806 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Stream_t3255436806 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_ioBuffer_4() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___ioBuffer_4)); }
	inline ByteU5BU5D_t3397334013* get_ioBuffer_4() const { return ___ioBuffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_ioBuffer_4() { return &___ioBuffer_4; }
	inline void set_ioBuffer_4(ByteU5BU5D_t3397334013* value)
	{
		___ioBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___ioBuffer_4, value);
	}

	inline static int32_t get_offset_of_model_5() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___model_5)); }
	inline TypeModel_t653695305 * get_model_5() const { return ___model_5; }
	inline TypeModel_t653695305 ** get_address_of_model_5() { return &___model_5; }
	inline void set_model_5(TypeModel_t653695305 * value)
	{
		___model_5 = value;
		Il2CppCodeGenWriteBarrier(&___model_5, value);
	}

	inline static int32_t get_offset_of_fieldNumber_6() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___fieldNumber_6)); }
	inline int32_t get_fieldNumber_6() const { return ___fieldNumber_6; }
	inline int32_t* get_address_of_fieldNumber_6() { return &___fieldNumber_6; }
	inline void set_fieldNumber_6(int32_t value)
	{
		___fieldNumber_6 = value;
	}

	inline static int32_t get_offset_of_depth_7() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___depth_7)); }
	inline int32_t get_depth_7() const { return ___depth_7; }
	inline int32_t* get_address_of_depth_7() { return &___depth_7; }
	inline void set_depth_7(int32_t value)
	{
		___depth_7 = value;
	}

	inline static int32_t get_offset_of_dataRemaining_8() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___dataRemaining_8)); }
	inline int32_t get_dataRemaining_8() const { return ___dataRemaining_8; }
	inline int32_t* get_address_of_dataRemaining_8() { return &___dataRemaining_8; }
	inline void set_dataRemaining_8(int32_t value)
	{
		___dataRemaining_8 = value;
	}

	inline static int32_t get_offset_of_ioIndex_9() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___ioIndex_9)); }
	inline int32_t get_ioIndex_9() const { return ___ioIndex_9; }
	inline int32_t* get_address_of_ioIndex_9() { return &___ioIndex_9; }
	inline void set_ioIndex_9(int32_t value)
	{
		___ioIndex_9 = value;
	}

	inline static int32_t get_offset_of_position_10() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___position_10)); }
	inline int32_t get_position_10() const { return ___position_10; }
	inline int32_t* get_address_of_position_10() { return &___position_10; }
	inline void set_position_10(int32_t value)
	{
		___position_10 = value;
	}

	inline static int32_t get_offset_of_available_11() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___available_11)); }
	inline int32_t get_available_11() const { return ___available_11; }
	inline int32_t* get_address_of_available_11() { return &___available_11; }
	inline void set_available_11(int32_t value)
	{
		___available_11 = value;
	}

	inline static int32_t get_offset_of_blockEnd_12() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___blockEnd_12)); }
	inline int32_t get_blockEnd_12() const { return ___blockEnd_12; }
	inline int32_t* get_address_of_blockEnd_12() { return &___blockEnd_12; }
	inline void set_blockEnd_12(int32_t value)
	{
		___blockEnd_12 = value;
	}

	inline static int32_t get_offset_of_wireType_13() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___wireType_13)); }
	inline int32_t get_wireType_13() const { return ___wireType_13; }
	inline int32_t* get_address_of_wireType_13() { return &___wireType_13; }
	inline void set_wireType_13(int32_t value)
	{
		___wireType_13 = value;
	}

	inline static int32_t get_offset_of_isFixedLength_14() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___isFixedLength_14)); }
	inline bool get_isFixedLength_14() const { return ___isFixedLength_14; }
	inline bool* get_address_of_isFixedLength_14() { return &___isFixedLength_14; }
	inline void set_isFixedLength_14(bool value)
	{
		___isFixedLength_14 = value;
	}

	inline static int32_t get_offset_of_internStrings_15() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___internStrings_15)); }
	inline bool get_internStrings_15() const { return ___internStrings_15; }
	inline bool* get_address_of_internStrings_15() { return &___internStrings_15; }
	inline void set_internStrings_15(bool value)
	{
		___internStrings_15 = value;
	}

	inline static int32_t get_offset_of_netCache_16() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___netCache_16)); }
	inline NetObjectCache_t2620415644 * get_netCache_16() const { return ___netCache_16; }
	inline NetObjectCache_t2620415644 ** get_address_of_netCache_16() { return &___netCache_16; }
	inline void set_netCache_16(NetObjectCache_t2620415644 * value)
	{
		___netCache_16 = value;
		Il2CppCodeGenWriteBarrier(&___netCache_16, value);
	}

	inline static int32_t get_offset_of_trapCount_17() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___trapCount_17)); }
	inline uint32_t get_trapCount_17() const { return ___trapCount_17; }
	inline uint32_t* get_address_of_trapCount_17() { return &___trapCount_17; }
	inline void set_trapCount_17(uint32_t value)
	{
		___trapCount_17 = value;
	}

	inline static int32_t get_offset_of_context_18() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___context_18)); }
	inline SerializationContext_t3878296411 * get_context_18() const { return ___context_18; }
	inline SerializationContext_t3878296411 ** get_address_of_context_18() { return &___context_18; }
	inline void set_context_18(SerializationContext_t3878296411 * value)
	{
		___context_18 = value;
		Il2CppCodeGenWriteBarrier(&___context_18, value);
	}

	inline static int32_t get_offset_of_stringInterner_19() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867, ___stringInterner_19)); }
	inline Dictionary_2_t3943999495 * get_stringInterner_19() const { return ___stringInterner_19; }
	inline Dictionary_2_t3943999495 ** get_address_of_stringInterner_19() { return &___stringInterner_19; }
	inline void set_stringInterner_19(Dictionary_2_t3943999495 * value)
	{
		___stringInterner_19 = value;
		Il2CppCodeGenWriteBarrier(&___stringInterner_19, value);
	}
};

struct ProtoReader_t3981212867_StaticFields
{
public:
	// System.Text.UTF8Encoding ProtoBuf.ProtoReader::encoding
	UTF8Encoding_t111055448 * ___encoding_20;
	// System.Byte[] ProtoBuf.ProtoReader::EmptyBlob
	ByteU5BU5D_t3397334013* ___EmptyBlob_21;

public:
	inline static int32_t get_offset_of_encoding_20() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867_StaticFields, ___encoding_20)); }
	inline UTF8Encoding_t111055448 * get_encoding_20() const { return ___encoding_20; }
	inline UTF8Encoding_t111055448 ** get_address_of_encoding_20() { return &___encoding_20; }
	inline void set_encoding_20(UTF8Encoding_t111055448 * value)
	{
		___encoding_20 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_20, value);
	}

	inline static int32_t get_offset_of_EmptyBlob_21() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867_StaticFields, ___EmptyBlob_21)); }
	inline ByteU5BU5D_t3397334013* get_EmptyBlob_21() const { return ___EmptyBlob_21; }
	inline ByteU5BU5D_t3397334013** get_address_of_EmptyBlob_21() { return &___EmptyBlob_21; }
	inline void set_EmptyBlob_21(ByteU5BU5D_t3397334013* value)
	{
		___EmptyBlob_21 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBlob_21, value);
	}
};

struct ProtoReader_t3981212867_ThreadStaticFields
{
public:
	// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::lastReader
	ProtoReader_t3981212867 * ___lastReader_22;

public:
	inline static int32_t get_offset_of_lastReader_22() { return static_cast<int32_t>(offsetof(ProtoReader_t3981212867_ThreadStaticFields, ___lastReader_22)); }
	inline ProtoReader_t3981212867 * get_lastReader_22() const { return ___lastReader_22; }
	inline ProtoReader_t3981212867 ** get_address_of_lastReader_22() { return &___lastReader_22; }
	inline void set_lastReader_22(ProtoReader_t3981212867 * value)
	{
		___lastReader_22 = value;
		Il2CppCodeGenWriteBarrier(&___lastReader_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
