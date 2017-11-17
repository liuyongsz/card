#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t603616735;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mainpanel
struct  mainpanel_t1886133187  : public BasePanel_t542715433
{
public:
	// UISprite mainpanel::pveBtn
	UISprite_t603616735 * ___pveBtn_2;
	// UISprite mainpanel::pvpBtn
	UISprite_t603616735 * ___pvpBtn_3;
	// UISprite mainpanel::rankBtn
	UISprite_t603616735 * ___rankBtn_4;

public:
	inline static int32_t get_offset_of_pveBtn_2() { return static_cast<int32_t>(offsetof(mainpanel_t1886133187, ___pveBtn_2)); }
	inline UISprite_t603616735 * get_pveBtn_2() const { return ___pveBtn_2; }
	inline UISprite_t603616735 ** get_address_of_pveBtn_2() { return &___pveBtn_2; }
	inline void set_pveBtn_2(UISprite_t603616735 * value)
	{
		___pveBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___pveBtn_2, value);
	}

	inline static int32_t get_offset_of_pvpBtn_3() { return static_cast<int32_t>(offsetof(mainpanel_t1886133187, ___pvpBtn_3)); }
	inline UISprite_t603616735 * get_pvpBtn_3() const { return ___pvpBtn_3; }
	inline UISprite_t603616735 ** get_address_of_pvpBtn_3() { return &___pvpBtn_3; }
	inline void set_pvpBtn_3(UISprite_t603616735 * value)
	{
		___pvpBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___pvpBtn_3, value);
	}

	inline static int32_t get_offset_of_rankBtn_4() { return static_cast<int32_t>(offsetof(mainpanel_t1886133187, ___rankBtn_4)); }
	inline UISprite_t603616735 * get_rankBtn_4() const { return ___rankBtn_4; }
	inline UISprite_t603616735 ** get_address_of_rankBtn_4() { return &___rankBtn_4; }
	inline void set_rankBtn_4(UISprite_t603616735 * value)
	{
		___rankBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___rankBtn_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
