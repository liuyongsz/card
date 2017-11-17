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
// UIInput
struct UIInput_t860674234;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// loginpanel
struct  loginpanel_t1735140579  : public BasePanel_t542715433
{
public:
	// UISprite loginpanel::startGameBtn
	UISprite_t603616735 * ___startGameBtn_2;
	// UISprite loginpanel::enterGameBtn
	UISprite_t603616735 * ___enterGameBtn_3;
	// UIInput loginpanel::account
	UIInput_t860674234 * ___account_4;
	// UIInput loginpanel::pawd
	UIInput_t860674234 * ___pawd_5;
	// UIInput loginpanel::playerName
	UIInput_t860674234 * ___playerName_6;
	// UnityEngine.Transform loginpanel::createPlayer
	Transform_t3275118058 * ___createPlayer_7;
	// UnityEngine.Transform loginpanel::loginUI
	Transform_t3275118058 * ___loginUI_8;

public:
	inline static int32_t get_offset_of_startGameBtn_2() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___startGameBtn_2)); }
	inline UISprite_t603616735 * get_startGameBtn_2() const { return ___startGameBtn_2; }
	inline UISprite_t603616735 ** get_address_of_startGameBtn_2() { return &___startGameBtn_2; }
	inline void set_startGameBtn_2(UISprite_t603616735 * value)
	{
		___startGameBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___startGameBtn_2, value);
	}

	inline static int32_t get_offset_of_enterGameBtn_3() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___enterGameBtn_3)); }
	inline UISprite_t603616735 * get_enterGameBtn_3() const { return ___enterGameBtn_3; }
	inline UISprite_t603616735 ** get_address_of_enterGameBtn_3() { return &___enterGameBtn_3; }
	inline void set_enterGameBtn_3(UISprite_t603616735 * value)
	{
		___enterGameBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___enterGameBtn_3, value);
	}

	inline static int32_t get_offset_of_account_4() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___account_4)); }
	inline UIInput_t860674234 * get_account_4() const { return ___account_4; }
	inline UIInput_t860674234 ** get_address_of_account_4() { return &___account_4; }
	inline void set_account_4(UIInput_t860674234 * value)
	{
		___account_4 = value;
		Il2CppCodeGenWriteBarrier(&___account_4, value);
	}

	inline static int32_t get_offset_of_pawd_5() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___pawd_5)); }
	inline UIInput_t860674234 * get_pawd_5() const { return ___pawd_5; }
	inline UIInput_t860674234 ** get_address_of_pawd_5() { return &___pawd_5; }
	inline void set_pawd_5(UIInput_t860674234 * value)
	{
		___pawd_5 = value;
		Il2CppCodeGenWriteBarrier(&___pawd_5, value);
	}

	inline static int32_t get_offset_of_playerName_6() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___playerName_6)); }
	inline UIInput_t860674234 * get_playerName_6() const { return ___playerName_6; }
	inline UIInput_t860674234 ** get_address_of_playerName_6() { return &___playerName_6; }
	inline void set_playerName_6(UIInput_t860674234 * value)
	{
		___playerName_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_6, value);
	}

	inline static int32_t get_offset_of_createPlayer_7() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___createPlayer_7)); }
	inline Transform_t3275118058 * get_createPlayer_7() const { return ___createPlayer_7; }
	inline Transform_t3275118058 ** get_address_of_createPlayer_7() { return &___createPlayer_7; }
	inline void set_createPlayer_7(Transform_t3275118058 * value)
	{
		___createPlayer_7 = value;
		Il2CppCodeGenWriteBarrier(&___createPlayer_7, value);
	}

	inline static int32_t get_offset_of_loginUI_8() { return static_cast<int32_t>(offsetof(loginpanel_t1735140579, ___loginUI_8)); }
	inline Transform_t3275118058 * get_loginUI_8() const { return ___loginUI_8; }
	inline Transform_t3275118058 ** get_address_of_loginUI_8() { return &___loginUI_8; }
	inline void set_loginUI_8(Transform_t3275118058 * value)
	{
		___loginUI_8 = value;
		Il2CppCodeGenWriteBarrier(&___loginUI_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
