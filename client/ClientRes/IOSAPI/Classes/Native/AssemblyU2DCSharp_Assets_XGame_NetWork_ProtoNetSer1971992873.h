#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Type>
struct Dictionary_2_t311628861;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t4009235345;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.XGame.NetWork.ProtoNetSerialize
struct  ProtoNetSerialize_t1971992873  : public Il2CppObject
{
public:

public:
};

struct ProtoNetSerialize_t1971992873_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Assets.XGame.NetWork.ProtoNetSerialize::s_DicIDName
	Dictionary_2_t4009235345 * ___s_DicIDName_2;
	// System.Boolean Assets.XGame.NetWork.ProtoNetSerialize::s_Inited
	bool ___s_Inited_3;
	// System.Int32 Assets.XGame.NetWork.ProtoNetSerialize::readBodyLength
	int32_t ___readBodyLength_4;
	// System.Int32 Assets.XGame.NetWork.ProtoNetSerialize::readId
	int32_t ___readId_5;

public:
	inline static int32_t get_offset_of_s_DicIDName_2() { return static_cast<int32_t>(offsetof(ProtoNetSerialize_t1971992873_StaticFields, ___s_DicIDName_2)); }
	inline Dictionary_2_t4009235345 * get_s_DicIDName_2() const { return ___s_DicIDName_2; }
	inline Dictionary_2_t4009235345 ** get_address_of_s_DicIDName_2() { return &___s_DicIDName_2; }
	inline void set_s_DicIDName_2(Dictionary_2_t4009235345 * value)
	{
		___s_DicIDName_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_DicIDName_2, value);
	}

	inline static int32_t get_offset_of_s_Inited_3() { return static_cast<int32_t>(offsetof(ProtoNetSerialize_t1971992873_StaticFields, ___s_Inited_3)); }
	inline bool get_s_Inited_3() const { return ___s_Inited_3; }
	inline bool* get_address_of_s_Inited_3() { return &___s_Inited_3; }
	inline void set_s_Inited_3(bool value)
	{
		___s_Inited_3 = value;
	}

	inline static int32_t get_offset_of_readBodyLength_4() { return static_cast<int32_t>(offsetof(ProtoNetSerialize_t1971992873_StaticFields, ___readBodyLength_4)); }
	inline int32_t get_readBodyLength_4() const { return ___readBodyLength_4; }
	inline int32_t* get_address_of_readBodyLength_4() { return &___readBodyLength_4; }
	inline void set_readBodyLength_4(int32_t value)
	{
		___readBodyLength_4 = value;
	}

	inline static int32_t get_offset_of_readId_5() { return static_cast<int32_t>(offsetof(ProtoNetSerialize_t1971992873_StaticFields, ___readId_5)); }
	inline int32_t get_readId_5() const { return ___readId_5; }
	inline int32_t* get_address_of_readId_5() { return &___readId_5; }
	inline void set_readId_5(int32_t value)
	{
		___readId_5 = value;
	}
};

struct ProtoNetSerialize_t1971992873_ThreadStaticFields
{
public:
	// System.IO.MemoryStream Assets.XGame.NetWork.ProtoNetSerialize::s_Stream
	MemoryStream_t743994179 * ___s_Stream_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Type> Assets.XGame.NetWork.ProtoNetSerialize::s_DicIDMsg
	Dictionary_2_t311628861 * ___s_DicIDMsg_1;

public:
	inline static int32_t get_offset_of_s_Stream_0() { return static_cast<int32_t>(offsetof(ProtoNetSerialize_t1971992873_ThreadStaticFields, ___s_Stream_0)); }
	inline MemoryStream_t743994179 * get_s_Stream_0() const { return ___s_Stream_0; }
	inline MemoryStream_t743994179 ** get_address_of_s_Stream_0() { return &___s_Stream_0; }
	inline void set_s_Stream_0(MemoryStream_t743994179 * value)
	{
		___s_Stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Stream_0, value);
	}

	inline static int32_t get_offset_of_s_DicIDMsg_1() { return static_cast<int32_t>(offsetof(ProtoNetSerialize_t1971992873_ThreadStaticFields, ___s_DicIDMsg_1)); }
	inline Dictionary_2_t311628861 * get_s_DicIDMsg_1() const { return ___s_DicIDMsg_1; }
	inline Dictionary_2_t311628861 ** get_address_of_s_DicIDMsg_1() { return &___s_DicIDMsg_1; }
	inline void set_s_DicIDMsg_1(Dictionary_2_t311628861 * value)
	{
		___s_DicIDMsg_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_DicIDMsg_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
