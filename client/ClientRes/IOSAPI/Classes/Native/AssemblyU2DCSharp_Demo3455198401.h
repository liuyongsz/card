#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t2836616153;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Demo
struct  Demo_t3455198401  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUISkin Demo::demoSkin
	GUISkin_t1436893342 * ___demoSkin_2;
	// cn.sharesdk.unity3d.ShareSDK Demo::ssdk
	ShareSDK_t2836616153 * ___ssdk_3;

public:
	inline static int32_t get_offset_of_demoSkin_2() { return static_cast<int32_t>(offsetof(Demo_t3455198401, ___demoSkin_2)); }
	inline GUISkin_t1436893342 * get_demoSkin_2() const { return ___demoSkin_2; }
	inline GUISkin_t1436893342 ** get_address_of_demoSkin_2() { return &___demoSkin_2; }
	inline void set_demoSkin_2(GUISkin_t1436893342 * value)
	{
		___demoSkin_2 = value;
		Il2CppCodeGenWriteBarrier(&___demoSkin_2, value);
	}

	inline static int32_t get_offset_of_ssdk_3() { return static_cast<int32_t>(offsetof(Demo_t3455198401, ___ssdk_3)); }
	inline ShareSDK_t2836616153 * get_ssdk_3() const { return ___ssdk_3; }
	inline ShareSDK_t2836616153 ** get_address_of_ssdk_3() { return &___ssdk_3; }
	inline void set_ssdk_3(ShareSDK_t2836616153 * value)
	{
		___ssdk_3 = value;
		Il2CppCodeGenWriteBarrier(&___ssdk_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
