#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StateSprite
struct StateSprite_t1440006152;
// System.String
struct String_t;
// UISprite
struct UISprite_t603616735;

#include "AssemblyU2DCSharp_UIButtonColor3793385709.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateSprite
struct  StateSprite_t1440006152  : public UIButtonColor_t3793385709
{
public:
	// System.Boolean StateSprite::dragHighlight
	bool ___dragHighlight_12;
	// System.String StateSprite::hoverSprite
	String_t* ___hoverSprite_13;
	// System.String StateSprite::pressedSprite
	String_t* ___pressedSprite_14;
	// System.String StateSprite::disabledSprite
	String_t* ___disabledSprite_15;
	// System.Boolean StateSprite::pixelSnap
	bool ___pixelSnap_16;
	// System.String StateSprite::mNormalSprite
	String_t* ___mNormalSprite_17;
	// UISprite StateSprite::mSprite
	UISprite_t603616735 * ___mSprite_18;

public:
	inline static int32_t get_offset_of_dragHighlight_12() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___dragHighlight_12)); }
	inline bool get_dragHighlight_12() const { return ___dragHighlight_12; }
	inline bool* get_address_of_dragHighlight_12() { return &___dragHighlight_12; }
	inline void set_dragHighlight_12(bool value)
	{
		___dragHighlight_12 = value;
	}

	inline static int32_t get_offset_of_hoverSprite_13() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___hoverSprite_13)); }
	inline String_t* get_hoverSprite_13() const { return ___hoverSprite_13; }
	inline String_t** get_address_of_hoverSprite_13() { return &___hoverSprite_13; }
	inline void set_hoverSprite_13(String_t* value)
	{
		___hoverSprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___hoverSprite_13, value);
	}

	inline static int32_t get_offset_of_pressedSprite_14() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___pressedSprite_14)); }
	inline String_t* get_pressedSprite_14() const { return ___pressedSprite_14; }
	inline String_t** get_address_of_pressedSprite_14() { return &___pressedSprite_14; }
	inline void set_pressedSprite_14(String_t* value)
	{
		___pressedSprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___pressedSprite_14, value);
	}

	inline static int32_t get_offset_of_disabledSprite_15() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___disabledSprite_15)); }
	inline String_t* get_disabledSprite_15() const { return ___disabledSprite_15; }
	inline String_t** get_address_of_disabledSprite_15() { return &___disabledSprite_15; }
	inline void set_disabledSprite_15(String_t* value)
	{
		___disabledSprite_15 = value;
		Il2CppCodeGenWriteBarrier(&___disabledSprite_15, value);
	}

	inline static int32_t get_offset_of_pixelSnap_16() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___pixelSnap_16)); }
	inline bool get_pixelSnap_16() const { return ___pixelSnap_16; }
	inline bool* get_address_of_pixelSnap_16() { return &___pixelSnap_16; }
	inline void set_pixelSnap_16(bool value)
	{
		___pixelSnap_16 = value;
	}

	inline static int32_t get_offset_of_mNormalSprite_17() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___mNormalSprite_17)); }
	inline String_t* get_mNormalSprite_17() const { return ___mNormalSprite_17; }
	inline String_t** get_address_of_mNormalSprite_17() { return &___mNormalSprite_17; }
	inline void set_mNormalSprite_17(String_t* value)
	{
		___mNormalSprite_17 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalSprite_17, value);
	}

	inline static int32_t get_offset_of_mSprite_18() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152, ___mSprite_18)); }
	inline UISprite_t603616735 * get_mSprite_18() const { return ___mSprite_18; }
	inline UISprite_t603616735 ** get_address_of_mSprite_18() { return &___mSprite_18; }
	inline void set_mSprite_18(UISprite_t603616735 * value)
	{
		___mSprite_18 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_18, value);
	}
};

struct StateSprite_t1440006152_StaticFields
{
public:
	// StateSprite StateSprite::current
	StateSprite_t1440006152 * ___current_11;

public:
	inline static int32_t get_offset_of_current_11() { return static_cast<int32_t>(offsetof(StateSprite_t1440006152_StaticFields, ___current_11)); }
	inline StateSprite_t1440006152 * get_current_11() const { return ___current_11; }
	inline StateSprite_t1440006152 ** get_address_of_current_11() { return &___current_11; }
	inline void set_current_11(StateSprite_t1440006152 * value)
	{
		___current_11 = value;
		Il2CppCodeGenWriteBarrier(&___current_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
