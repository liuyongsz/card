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

#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3603979713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.WechatSeries
struct  WechatSeries_t1479005583  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.WechatSeries::app_id
	String_t* ___app_id_2;
	// System.String cn.sharesdk.unity3d.WechatSeries::app_secret
	String_t* ___app_secret_3;

public:
	inline static int32_t get_offset_of_app_id_2() { return static_cast<int32_t>(offsetof(WechatSeries_t1479005583, ___app_id_2)); }
	inline String_t* get_app_id_2() const { return ___app_id_2; }
	inline String_t** get_address_of_app_id_2() { return &___app_id_2; }
	inline void set_app_id_2(String_t* value)
	{
		___app_id_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_id_2, value);
	}

	inline static int32_t get_offset_of_app_secret_3() { return static_cast<int32_t>(offsetof(WechatSeries_t1479005583, ___app_secret_3)); }
	inline String_t* get_app_secret_3() const { return ___app_secret_3; }
	inline String_t** get_address_of_app_secret_3() { return &___app_secret_3; }
	inline void set_app_secret_3(String_t* value)
	{
		___app_secret_3 = value;
		Il2CppCodeGenWriteBarrier(&___app_secret_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
