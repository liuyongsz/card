#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.IO.FileStream
struct FileStream_t1695958676;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSLog
struct  FPSLog_t295374623  : public Il2CppObject
{
public:

public:
};

struct FPSLog_t295374623_StaticFields
{
public:
	// System.String FPSLog::strLogPath
	String_t* ___strLogPath_1;
	// System.IO.StreamWriter FPSLog::mStreamFileWtiter
	StreamWriter_t3858580635 * ___mStreamFileWtiter_2;
	// System.IO.FileStream FPSLog::mfstream
	FileStream_t1695958676 * ___mfstream_3;
	// System.Single FPSLog::time
	float ___time_4;
	// System.Int32 FPSLog::miLogCount
	int32_t ___miLogCount_5;
	// System.Text.StringBuilder FPSLog::sb
	StringBuilder_t1221177846 * ___sb_6;

public:
	inline static int32_t get_offset_of_strLogPath_1() { return static_cast<int32_t>(offsetof(FPSLog_t295374623_StaticFields, ___strLogPath_1)); }
	inline String_t* get_strLogPath_1() const { return ___strLogPath_1; }
	inline String_t** get_address_of_strLogPath_1() { return &___strLogPath_1; }
	inline void set_strLogPath_1(String_t* value)
	{
		___strLogPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___strLogPath_1, value);
	}

	inline static int32_t get_offset_of_mStreamFileWtiter_2() { return static_cast<int32_t>(offsetof(FPSLog_t295374623_StaticFields, ___mStreamFileWtiter_2)); }
	inline StreamWriter_t3858580635 * get_mStreamFileWtiter_2() const { return ___mStreamFileWtiter_2; }
	inline StreamWriter_t3858580635 ** get_address_of_mStreamFileWtiter_2() { return &___mStreamFileWtiter_2; }
	inline void set_mStreamFileWtiter_2(StreamWriter_t3858580635 * value)
	{
		___mStreamFileWtiter_2 = value;
		Il2CppCodeGenWriteBarrier(&___mStreamFileWtiter_2, value);
	}

	inline static int32_t get_offset_of_mfstream_3() { return static_cast<int32_t>(offsetof(FPSLog_t295374623_StaticFields, ___mfstream_3)); }
	inline FileStream_t1695958676 * get_mfstream_3() const { return ___mfstream_3; }
	inline FileStream_t1695958676 ** get_address_of_mfstream_3() { return &___mfstream_3; }
	inline void set_mfstream_3(FileStream_t1695958676 * value)
	{
		___mfstream_3 = value;
		Il2CppCodeGenWriteBarrier(&___mfstream_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(FPSLog_t295374623_StaticFields, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_miLogCount_5() { return static_cast<int32_t>(offsetof(FPSLog_t295374623_StaticFields, ___miLogCount_5)); }
	inline int32_t get_miLogCount_5() const { return ___miLogCount_5; }
	inline int32_t* get_address_of_miLogCount_5() { return &___miLogCount_5; }
	inline void set_miLogCount_5(int32_t value)
	{
		___miLogCount_5 = value;
	}

	inline static int32_t get_offset_of_sb_6() { return static_cast<int32_t>(offsetof(FPSLog_t295374623_StaticFields, ___sb_6)); }
	inline StringBuilder_t1221177846 * get_sb_6() const { return ___sb_6; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_6() { return &___sb_6; }
	inline void set_sb_6(StringBuilder_t1221177846 * value)
	{
		___sb_6 = value;
		Il2CppCodeGenWriteBarrier(&___sb_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
