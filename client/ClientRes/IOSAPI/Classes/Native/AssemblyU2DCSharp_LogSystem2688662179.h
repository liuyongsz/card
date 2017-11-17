#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.IO.FileStream
struct FileStream_t1695958676;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogSystem
struct  LogSystem_t2688662179  : public Il2CppObject
{
public:

public:
};

struct LogSystem_t2688662179_StaticFields
{
public:
	// System.Boolean LogSystem::mbFileLog
	bool ___mbFileLog_0;
	// System.Boolean LogSystem::mbDebugLog
	bool ___mbDebugLog_1;
	// System.IO.StreamWriter LogSystem::mStreamFileWtiter
	StreamWriter_t3858580635 * ___mStreamFileWtiter_2;
	// System.IO.FileStream LogSystem::mfstream
	FileStream_t1695958676 * ___mfstream_3;
	// System.Collections.Generic.List`1<System.String> LogSystem::mLines
	List_1_t1398341365 * ___mLines_4;
	// System.Int32 LogSystem::miLogCount
	int32_t ___miLogCount_5;
	// System.Int32 LogSystem::miLogCountMax
	int32_t ___miLogCountMax_6;
	// System.String LogSystem::mstrLastFileLog
	String_t* ___mstrLastFileLog_7;
	// System.Text.StringBuilder LogSystem::sb
	StringBuilder_t1221177846 * ___sb_8;
	// System.String LogSystem::strInfo1
	String_t* ___strInfo1_9;
	// System.String LogSystem::strInfo2
	String_t* ___strInfo2_10;
	// System.String LogSystem::strInfo3
	String_t* ___strInfo3_11;
	// System.String LogSystem::strInfo4
	String_t* ___strInfo4_12;

public:
	inline static int32_t get_offset_of_mbFileLog_0() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___mbFileLog_0)); }
	inline bool get_mbFileLog_0() const { return ___mbFileLog_0; }
	inline bool* get_address_of_mbFileLog_0() { return &___mbFileLog_0; }
	inline void set_mbFileLog_0(bool value)
	{
		___mbFileLog_0 = value;
	}

	inline static int32_t get_offset_of_mbDebugLog_1() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___mbDebugLog_1)); }
	inline bool get_mbDebugLog_1() const { return ___mbDebugLog_1; }
	inline bool* get_address_of_mbDebugLog_1() { return &___mbDebugLog_1; }
	inline void set_mbDebugLog_1(bool value)
	{
		___mbDebugLog_1 = value;
	}

	inline static int32_t get_offset_of_mStreamFileWtiter_2() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___mStreamFileWtiter_2)); }
	inline StreamWriter_t3858580635 * get_mStreamFileWtiter_2() const { return ___mStreamFileWtiter_2; }
	inline StreamWriter_t3858580635 ** get_address_of_mStreamFileWtiter_2() { return &___mStreamFileWtiter_2; }
	inline void set_mStreamFileWtiter_2(StreamWriter_t3858580635 * value)
	{
		___mStreamFileWtiter_2 = value;
		Il2CppCodeGenWriteBarrier(&___mStreamFileWtiter_2, value);
	}

	inline static int32_t get_offset_of_mfstream_3() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___mfstream_3)); }
	inline FileStream_t1695958676 * get_mfstream_3() const { return ___mfstream_3; }
	inline FileStream_t1695958676 ** get_address_of_mfstream_3() { return &___mfstream_3; }
	inline void set_mfstream_3(FileStream_t1695958676 * value)
	{
		___mfstream_3 = value;
		Il2CppCodeGenWriteBarrier(&___mfstream_3, value);
	}

	inline static int32_t get_offset_of_mLines_4() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___mLines_4)); }
	inline List_1_t1398341365 * get_mLines_4() const { return ___mLines_4; }
	inline List_1_t1398341365 ** get_address_of_mLines_4() { return &___mLines_4; }
	inline void set_mLines_4(List_1_t1398341365 * value)
	{
		___mLines_4 = value;
		Il2CppCodeGenWriteBarrier(&___mLines_4, value);
	}

	inline static int32_t get_offset_of_miLogCount_5() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___miLogCount_5)); }
	inline int32_t get_miLogCount_5() const { return ___miLogCount_5; }
	inline int32_t* get_address_of_miLogCount_5() { return &___miLogCount_5; }
	inline void set_miLogCount_5(int32_t value)
	{
		___miLogCount_5 = value;
	}

	inline static int32_t get_offset_of_miLogCountMax_6() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___miLogCountMax_6)); }
	inline int32_t get_miLogCountMax_6() const { return ___miLogCountMax_6; }
	inline int32_t* get_address_of_miLogCountMax_6() { return &___miLogCountMax_6; }
	inline void set_miLogCountMax_6(int32_t value)
	{
		___miLogCountMax_6 = value;
	}

	inline static int32_t get_offset_of_mstrLastFileLog_7() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___mstrLastFileLog_7)); }
	inline String_t* get_mstrLastFileLog_7() const { return ___mstrLastFileLog_7; }
	inline String_t** get_address_of_mstrLastFileLog_7() { return &___mstrLastFileLog_7; }
	inline void set_mstrLastFileLog_7(String_t* value)
	{
		___mstrLastFileLog_7 = value;
		Il2CppCodeGenWriteBarrier(&___mstrLastFileLog_7, value);
	}

	inline static int32_t get_offset_of_sb_8() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___sb_8)); }
	inline StringBuilder_t1221177846 * get_sb_8() const { return ___sb_8; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_8() { return &___sb_8; }
	inline void set_sb_8(StringBuilder_t1221177846 * value)
	{
		___sb_8 = value;
		Il2CppCodeGenWriteBarrier(&___sb_8, value);
	}

	inline static int32_t get_offset_of_strInfo1_9() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___strInfo1_9)); }
	inline String_t* get_strInfo1_9() const { return ___strInfo1_9; }
	inline String_t** get_address_of_strInfo1_9() { return &___strInfo1_9; }
	inline void set_strInfo1_9(String_t* value)
	{
		___strInfo1_9 = value;
		Il2CppCodeGenWriteBarrier(&___strInfo1_9, value);
	}

	inline static int32_t get_offset_of_strInfo2_10() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___strInfo2_10)); }
	inline String_t* get_strInfo2_10() const { return ___strInfo2_10; }
	inline String_t** get_address_of_strInfo2_10() { return &___strInfo2_10; }
	inline void set_strInfo2_10(String_t* value)
	{
		___strInfo2_10 = value;
		Il2CppCodeGenWriteBarrier(&___strInfo2_10, value);
	}

	inline static int32_t get_offset_of_strInfo3_11() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___strInfo3_11)); }
	inline String_t* get_strInfo3_11() const { return ___strInfo3_11; }
	inline String_t** get_address_of_strInfo3_11() { return &___strInfo3_11; }
	inline void set_strInfo3_11(String_t* value)
	{
		___strInfo3_11 = value;
		Il2CppCodeGenWriteBarrier(&___strInfo3_11, value);
	}

	inline static int32_t get_offset_of_strInfo4_12() { return static_cast<int32_t>(offsetof(LogSystem_t2688662179_StaticFields, ___strInfo4_12)); }
	inline String_t* get_strInfo4_12() const { return ___strInfo4_12; }
	inline String_t** get_address_of_strInfo4_12() { return &___strInfo4_12; }
	inline void set_strInfo4_12(String_t* value)
	{
		___strInfo4_12 = value;
		Il2CppCodeGenWriteBarrier(&___strInfo4_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
