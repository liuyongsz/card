#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<NetProtocal.Respone,NetParam>
struct Dictionary_2_t3819049693;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen585152707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetDataMgr
struct  NetDataMgr_t3952396205  : public Proxy_1_t585152707
{
public:
	// System.Collections.Generic.Dictionary`2<NetProtocal.Respone,NetParam> NetDataMgr::Mrgs
	Dictionary_2_t3819049693 * ___Mrgs_4;
	// System.Boolean NetDataMgr::isGetInfo
	bool ___isGetInfo_5;

public:
	inline static int32_t get_offset_of_Mrgs_4() { return static_cast<int32_t>(offsetof(NetDataMgr_t3952396205, ___Mrgs_4)); }
	inline Dictionary_2_t3819049693 * get_Mrgs_4() const { return ___Mrgs_4; }
	inline Dictionary_2_t3819049693 ** get_address_of_Mrgs_4() { return &___Mrgs_4; }
	inline void set_Mrgs_4(Dictionary_2_t3819049693 * value)
	{
		___Mrgs_4 = value;
		Il2CppCodeGenWriteBarrier(&___Mrgs_4, value);
	}

	inline static int32_t get_offset_of_isGetInfo_5() { return static_cast<int32_t>(offsetof(NetDataMgr_t3952396205, ___isGetInfo_5)); }
	inline bool get_isGetInfo_5() const { return ___isGetInfo_5; }
	inline bool* get_address_of_isGetInfo_5() { return &___isGetInfo_5; }
	inline void set_isGetInfo_5(bool value)
	{
		___isGetInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
