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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIImageButton
struct  UIImageButton_t3909632983  : public MonoBehaviour_t1158329972
{
public:
	// UISprite UIImageButton::target
	UISprite_t603616735 * ___target_2;
	// System.String UIImageButton::normalSprite
	String_t* ___normalSprite_3;
	// System.String UIImageButton::hoverSprite
	String_t* ___hoverSprite_4;
	// System.String UIImageButton::pressedSprite
	String_t* ___pressedSprite_5;
	// System.String UIImageButton::disabledSprite
	String_t* ___disabledSprite_6;
	// System.Boolean UIImageButton::pixelSnap
	bool ___pixelSnap_7;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIImageButton_t3909632983, ___target_2)); }
	inline UISprite_t603616735 * get_target_2() const { return ___target_2; }
	inline UISprite_t603616735 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(UISprite_t603616735 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_normalSprite_3() { return static_cast<int32_t>(offsetof(UIImageButton_t3909632983, ___normalSprite_3)); }
	inline String_t* get_normalSprite_3() const { return ___normalSprite_3; }
	inline String_t** get_address_of_normalSprite_3() { return &___normalSprite_3; }
	inline void set_normalSprite_3(String_t* value)
	{
		___normalSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___normalSprite_3, value);
	}

	inline static int32_t get_offset_of_hoverSprite_4() { return static_cast<int32_t>(offsetof(UIImageButton_t3909632983, ___hoverSprite_4)); }
	inline String_t* get_hoverSprite_4() const { return ___hoverSprite_4; }
	inline String_t** get_address_of_hoverSprite_4() { return &___hoverSprite_4; }
	inline void set_hoverSprite_4(String_t* value)
	{
		___hoverSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___hoverSprite_4, value);
	}

	inline static int32_t get_offset_of_pressedSprite_5() { return static_cast<int32_t>(offsetof(UIImageButton_t3909632983, ___pressedSprite_5)); }
	inline String_t* get_pressedSprite_5() const { return ___pressedSprite_5; }
	inline String_t** get_address_of_pressedSprite_5() { return &___pressedSprite_5; }
	inline void set_pressedSprite_5(String_t* value)
	{
		___pressedSprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___pressedSprite_5, value);
	}

	inline static int32_t get_offset_of_disabledSprite_6() { return static_cast<int32_t>(offsetof(UIImageButton_t3909632983, ___disabledSprite_6)); }
	inline String_t* get_disabledSprite_6() const { return ___disabledSprite_6; }
	inline String_t** get_address_of_disabledSprite_6() { return &___disabledSprite_6; }
	inline void set_disabledSprite_6(String_t* value)
	{
		___disabledSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___disabledSprite_6, value);
	}

	inline static int32_t get_offset_of_pixelSnap_7() { return static_cast<int32_t>(offsetof(UIImageButton_t3909632983, ___pixelSnap_7)); }
	inline bool get_pixelSnap_7() const { return ___pixelSnap_7; }
	inline bool* get_address_of_pixelSnap_7() { return &___pixelSnap_7; }
	inline void set_pixelSnap_7(bool value)
	{
		___pixelSnap_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
