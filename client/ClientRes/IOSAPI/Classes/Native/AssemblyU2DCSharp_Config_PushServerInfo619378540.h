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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Config/PushServerInfo
struct  PushServerInfo_t619378540  : public Il2CppObject
{
public:
	// System.String Config/PushServerInfo::strServerID
	String_t* ___strServerID_0;
	// System.String Config/PushServerInfo::strServerName
	String_t* ___strServerName_1;
	// System.String Config/PushServerInfo::strServerIP
	String_t* ___strServerIP_2;
	// System.String Config/PushServerInfo::strServerPort
	String_t* ___strServerPort_3;
	// System.String Config/PushServerInfo::strApiKey
	String_t* ___strApiKey_4;

public:
	inline static int32_t get_offset_of_strServerID_0() { return static_cast<int32_t>(offsetof(PushServerInfo_t619378540, ___strServerID_0)); }
	inline String_t* get_strServerID_0() const { return ___strServerID_0; }
	inline String_t** get_address_of_strServerID_0() { return &___strServerID_0; }
	inline void set_strServerID_0(String_t* value)
	{
		___strServerID_0 = value;
		Il2CppCodeGenWriteBarrier(&___strServerID_0, value);
	}

	inline static int32_t get_offset_of_strServerName_1() { return static_cast<int32_t>(offsetof(PushServerInfo_t619378540, ___strServerName_1)); }
	inline String_t* get_strServerName_1() const { return ___strServerName_1; }
	inline String_t** get_address_of_strServerName_1() { return &___strServerName_1; }
	inline void set_strServerName_1(String_t* value)
	{
		___strServerName_1 = value;
		Il2CppCodeGenWriteBarrier(&___strServerName_1, value);
	}

	inline static int32_t get_offset_of_strServerIP_2() { return static_cast<int32_t>(offsetof(PushServerInfo_t619378540, ___strServerIP_2)); }
	inline String_t* get_strServerIP_2() const { return ___strServerIP_2; }
	inline String_t** get_address_of_strServerIP_2() { return &___strServerIP_2; }
	inline void set_strServerIP_2(String_t* value)
	{
		___strServerIP_2 = value;
		Il2CppCodeGenWriteBarrier(&___strServerIP_2, value);
	}

	inline static int32_t get_offset_of_strServerPort_3() { return static_cast<int32_t>(offsetof(PushServerInfo_t619378540, ___strServerPort_3)); }
	inline String_t* get_strServerPort_3() const { return ___strServerPort_3; }
	inline String_t** get_address_of_strServerPort_3() { return &___strServerPort_3; }
	inline void set_strServerPort_3(String_t* value)
	{
		___strServerPort_3 = value;
		Il2CppCodeGenWriteBarrier(&___strServerPort_3, value);
	}

	inline static int32_t get_offset_of_strApiKey_4() { return static_cast<int32_t>(offsetof(PushServerInfo_t619378540, ___strApiKey_4)); }
	inline String_t* get_strApiKey_4() const { return ___strApiKey_4; }
	inline String_t** get_address_of_strApiKey_4() { return &___strApiKey_4; }
	inline void set_strApiKey_4(String_t* value)
	{
		___strApiKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___strApiKey_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
