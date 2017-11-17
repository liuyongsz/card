#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.BReader
struct  BReader_t585071643  : public Il2CppObject
{
public:
	// System.IO.BinaryReader live2d.BReader::bin
	BinaryReader_t2491843768 * ___bin_0;
	// System.Byte[] live2d.BReader::tmp
	ByteU5BU5D_t3397334013* ___tmp_1;
	// System.Byte[] live2d.BReader::buf8
	ByteU5BU5D_t3397334013* ___buf8_2;
	// System.Byte[] live2d.BReader::buf4
	ByteU5BU5D_t3397334013* ___buf4_3;
	// System.Byte[] live2d.BReader::buf2
	ByteU5BU5D_t3397334013* ___buf2_4;
	// System.Byte[] live2d.BReader::cache
	ByteU5BU5D_t3397334013* ___cache_5;
	// System.Int32 live2d.BReader::bitCount
	int32_t ___bitCount_6;
	// System.Int32 live2d.BReader::bitBuff
	int32_t ___bitBuff_7;
	// System.Int32 live2d.BReader::formatVersion
	int32_t ___formatVersion_8;
	// System.Collections.Generic.List`1<System.Object> live2d.BReader::loadObjects
	List_1_t2058570427 * ___loadObjects_9;

public:
	inline static int32_t get_offset_of_bin_0() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___bin_0)); }
	inline BinaryReader_t2491843768 * get_bin_0() const { return ___bin_0; }
	inline BinaryReader_t2491843768 ** get_address_of_bin_0() { return &___bin_0; }
	inline void set_bin_0(BinaryReader_t2491843768 * value)
	{
		___bin_0 = value;
		Il2CppCodeGenWriteBarrier(&___bin_0, value);
	}

	inline static int32_t get_offset_of_tmp_1() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___tmp_1)); }
	inline ByteU5BU5D_t3397334013* get_tmp_1() const { return ___tmp_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_tmp_1() { return &___tmp_1; }
	inline void set_tmp_1(ByteU5BU5D_t3397334013* value)
	{
		___tmp_1 = value;
		Il2CppCodeGenWriteBarrier(&___tmp_1, value);
	}

	inline static int32_t get_offset_of_buf8_2() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___buf8_2)); }
	inline ByteU5BU5D_t3397334013* get_buf8_2() const { return ___buf8_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buf8_2() { return &___buf8_2; }
	inline void set_buf8_2(ByteU5BU5D_t3397334013* value)
	{
		___buf8_2 = value;
		Il2CppCodeGenWriteBarrier(&___buf8_2, value);
	}

	inline static int32_t get_offset_of_buf4_3() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___buf4_3)); }
	inline ByteU5BU5D_t3397334013* get_buf4_3() const { return ___buf4_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_buf4_3() { return &___buf4_3; }
	inline void set_buf4_3(ByteU5BU5D_t3397334013* value)
	{
		___buf4_3 = value;
		Il2CppCodeGenWriteBarrier(&___buf4_3, value);
	}

	inline static int32_t get_offset_of_buf2_4() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___buf2_4)); }
	inline ByteU5BU5D_t3397334013* get_buf2_4() const { return ___buf2_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_buf2_4() { return &___buf2_4; }
	inline void set_buf2_4(ByteU5BU5D_t3397334013* value)
	{
		___buf2_4 = value;
		Il2CppCodeGenWriteBarrier(&___buf2_4, value);
	}

	inline static int32_t get_offset_of_cache_5() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___cache_5)); }
	inline ByteU5BU5D_t3397334013* get_cache_5() const { return ___cache_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_cache_5() { return &___cache_5; }
	inline void set_cache_5(ByteU5BU5D_t3397334013* value)
	{
		___cache_5 = value;
		Il2CppCodeGenWriteBarrier(&___cache_5, value);
	}

	inline static int32_t get_offset_of_bitCount_6() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___bitCount_6)); }
	inline int32_t get_bitCount_6() const { return ___bitCount_6; }
	inline int32_t* get_address_of_bitCount_6() { return &___bitCount_6; }
	inline void set_bitCount_6(int32_t value)
	{
		___bitCount_6 = value;
	}

	inline static int32_t get_offset_of_bitBuff_7() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___bitBuff_7)); }
	inline int32_t get_bitBuff_7() const { return ___bitBuff_7; }
	inline int32_t* get_address_of_bitBuff_7() { return &___bitBuff_7; }
	inline void set_bitBuff_7(int32_t value)
	{
		___bitBuff_7 = value;
	}

	inline static int32_t get_offset_of_formatVersion_8() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___formatVersion_8)); }
	inline int32_t get_formatVersion_8() const { return ___formatVersion_8; }
	inline int32_t* get_address_of_formatVersion_8() { return &___formatVersion_8; }
	inline void set_formatVersion_8(int32_t value)
	{
		___formatVersion_8 = value;
	}

	inline static int32_t get_offset_of_loadObjects_9() { return static_cast<int32_t>(offsetof(BReader_t585071643, ___loadObjects_9)); }
	inline List_1_t2058570427 * get_loadObjects_9() const { return ___loadObjects_9; }
	inline List_1_t2058570427 ** get_address_of_loadObjects_9() { return &___loadObjects_9; }
	inline void set_loadObjects_9(List_1_t2058570427 * value)
	{
		___loadObjects_9 = value;
		Il2CppCodeGenWriteBarrier(&___loadObjects_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
