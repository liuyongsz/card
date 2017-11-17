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
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// ProtoBuf.Meta.MutableList
struct MutableList_t1161363740;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.UTF8Encoding
struct UTF8Encoding_t111055448;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoWriter
struct  ProtoWriter_t2800220307  : public Il2CppObject
{
public:
	// System.IO.Stream ProtoBuf.ProtoWriter::dest
	Stream_t3255436806 * ___dest_1;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoWriter::model
	TypeModel_t653695305 * ___model_2;
	// ProtoBuf.NetObjectCache ProtoBuf.ProtoWriter::netCache
	NetObjectCache_t2620415644 * ___netCache_3;
	// System.Int32 ProtoBuf.ProtoWriter::fieldNumber
	int32_t ___fieldNumber_4;
	// System.Int32 ProtoBuf.ProtoWriter::flushLock
	int32_t ___flushLock_5;
	// ProtoBuf.WireType ProtoBuf.ProtoWriter::wireType
	int32_t ___wireType_6;
	// System.Int32 ProtoBuf.ProtoWriter::depth
	int32_t ___depth_7;
	// ProtoBuf.Meta.MutableList ProtoBuf.ProtoWriter::recursionStack
	MutableList_t1161363740 * ___recursionStack_8;
	// ProtoBuf.SerializationContext ProtoBuf.ProtoWriter::context
	SerializationContext_t3878296411 * ___context_9;
	// System.Byte[] ProtoBuf.ProtoWriter::ioBuffer
	ByteU5BU5D_t3397334013* ___ioBuffer_10;
	// System.Int32 ProtoBuf.ProtoWriter::ioIndex
	int32_t ___ioIndex_11;
	// System.Int32 ProtoBuf.ProtoWriter::position
	int32_t ___position_12;
	// System.Int32 ProtoBuf.ProtoWriter::packedFieldNumber
	int32_t ___packedFieldNumber_14;

public:
	inline static int32_t get_offset_of_dest_1() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___dest_1)); }
	inline Stream_t3255436806 * get_dest_1() const { return ___dest_1; }
	inline Stream_t3255436806 ** get_address_of_dest_1() { return &___dest_1; }
	inline void set_dest_1(Stream_t3255436806 * value)
	{
		___dest_1 = value;
		Il2CppCodeGenWriteBarrier(&___dest_1, value);
	}

	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___model_2)); }
	inline TypeModel_t653695305 * get_model_2() const { return ___model_2; }
	inline TypeModel_t653695305 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(TypeModel_t653695305 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_netCache_3() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___netCache_3)); }
	inline NetObjectCache_t2620415644 * get_netCache_3() const { return ___netCache_3; }
	inline NetObjectCache_t2620415644 ** get_address_of_netCache_3() { return &___netCache_3; }
	inline void set_netCache_3(NetObjectCache_t2620415644 * value)
	{
		___netCache_3 = value;
		Il2CppCodeGenWriteBarrier(&___netCache_3, value);
	}

	inline static int32_t get_offset_of_fieldNumber_4() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___fieldNumber_4)); }
	inline int32_t get_fieldNumber_4() const { return ___fieldNumber_4; }
	inline int32_t* get_address_of_fieldNumber_4() { return &___fieldNumber_4; }
	inline void set_fieldNumber_4(int32_t value)
	{
		___fieldNumber_4 = value;
	}

	inline static int32_t get_offset_of_flushLock_5() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___flushLock_5)); }
	inline int32_t get_flushLock_5() const { return ___flushLock_5; }
	inline int32_t* get_address_of_flushLock_5() { return &___flushLock_5; }
	inline void set_flushLock_5(int32_t value)
	{
		___flushLock_5 = value;
	}

	inline static int32_t get_offset_of_wireType_6() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___wireType_6)); }
	inline int32_t get_wireType_6() const { return ___wireType_6; }
	inline int32_t* get_address_of_wireType_6() { return &___wireType_6; }
	inline void set_wireType_6(int32_t value)
	{
		___wireType_6 = value;
	}

	inline static int32_t get_offset_of_depth_7() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___depth_7)); }
	inline int32_t get_depth_7() const { return ___depth_7; }
	inline int32_t* get_address_of_depth_7() { return &___depth_7; }
	inline void set_depth_7(int32_t value)
	{
		___depth_7 = value;
	}

	inline static int32_t get_offset_of_recursionStack_8() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___recursionStack_8)); }
	inline MutableList_t1161363740 * get_recursionStack_8() const { return ___recursionStack_8; }
	inline MutableList_t1161363740 ** get_address_of_recursionStack_8() { return &___recursionStack_8; }
	inline void set_recursionStack_8(MutableList_t1161363740 * value)
	{
		___recursionStack_8 = value;
		Il2CppCodeGenWriteBarrier(&___recursionStack_8, value);
	}

	inline static int32_t get_offset_of_context_9() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___context_9)); }
	inline SerializationContext_t3878296411 * get_context_9() const { return ___context_9; }
	inline SerializationContext_t3878296411 ** get_address_of_context_9() { return &___context_9; }
	inline void set_context_9(SerializationContext_t3878296411 * value)
	{
		___context_9 = value;
		Il2CppCodeGenWriteBarrier(&___context_9, value);
	}

	inline static int32_t get_offset_of_ioBuffer_10() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___ioBuffer_10)); }
	inline ByteU5BU5D_t3397334013* get_ioBuffer_10() const { return ___ioBuffer_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_ioBuffer_10() { return &___ioBuffer_10; }
	inline void set_ioBuffer_10(ByteU5BU5D_t3397334013* value)
	{
		___ioBuffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___ioBuffer_10, value);
	}

	inline static int32_t get_offset_of_ioIndex_11() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___ioIndex_11)); }
	inline int32_t get_ioIndex_11() const { return ___ioIndex_11; }
	inline int32_t* get_address_of_ioIndex_11() { return &___ioIndex_11; }
	inline void set_ioIndex_11(int32_t value)
	{
		___ioIndex_11 = value;
	}

	inline static int32_t get_offset_of_position_12() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___position_12)); }
	inline int32_t get_position_12() const { return ___position_12; }
	inline int32_t* get_address_of_position_12() { return &___position_12; }
	inline void set_position_12(int32_t value)
	{
		___position_12 = value;
	}

	inline static int32_t get_offset_of_packedFieldNumber_14() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___packedFieldNumber_14)); }
	inline int32_t get_packedFieldNumber_14() const { return ___packedFieldNumber_14; }
	inline int32_t* get_address_of_packedFieldNumber_14() { return &___packedFieldNumber_14; }
	inline void set_packedFieldNumber_14(int32_t value)
	{
		___packedFieldNumber_14 = value;
	}
};

struct ProtoWriter_t2800220307_StaticFields
{
public:
	// System.Text.UTF8Encoding ProtoBuf.ProtoWriter::encoding
	UTF8Encoding_t111055448 * ___encoding_13;

public:
	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307_StaticFields, ___encoding_13)); }
	inline UTF8Encoding_t111055448 * get_encoding_13() const { return ___encoding_13; }
	inline UTF8Encoding_t111055448 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(UTF8Encoding_t111055448 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
