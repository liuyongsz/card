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

// cn.sharesdk.unity3d.ShareSDKConfig
struct  ShareSDKConfig_t2971710287  : public Il2CppObject
{
public:
	// System.String cn.sharesdk.unity3d.ShareSDKConfig::appKey
	String_t* ___appKey_0;
	// System.String cn.sharesdk.unity3d.ShareSDKConfig::appSecret
	String_t* ___appSecret_1;

public:
	inline static int32_t get_offset_of_appKey_0() { return static_cast<int32_t>(offsetof(ShareSDKConfig_t2971710287, ___appKey_0)); }
	inline String_t* get_appKey_0() const { return ___appKey_0; }
	inline String_t** get_address_of_appKey_0() { return &___appKey_0; }
	inline void set_appKey_0(String_t* value)
	{
		___appKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___appKey_0, value);
	}

	inline static int32_t get_offset_of_appSecret_1() { return static_cast<int32_t>(offsetof(ShareSDKConfig_t2971710287, ___appSecret_1)); }
	inline String_t* get_appSecret_1() const { return ___appSecret_1; }
	inline String_t** get_address_of_appSecret_1() { return &___appSecret_1; }
	inline void set_appSecret_1(String_t* value)
	{
		___appSecret_1 = value;
		Il2CppCodeGenWriteBarrier(&___appSecret_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
