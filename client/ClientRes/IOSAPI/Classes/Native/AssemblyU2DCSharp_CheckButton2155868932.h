#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CheckButton
struct CheckButton_t2155868932;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t2865430313;
// UISprite
struct UISprite_t603616735;

#include "AssemblyU2DCSharp_UIButtonColor3793385709.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckButton
struct  CheckButton_t2155868932  : public UIButtonColor_t3793385709
{
public:
	// System.Boolean CheckButton::dragHighlight
	bool ___dragHighlight_12;
	// System.String CheckButton::hoverSprite
	String_t* ___hoverSprite_13;
	// System.String CheckButton::pressedSprite
	String_t* ___pressedSprite_14;
	// System.String CheckButton::disabledSprite
	String_t* ___disabledSprite_15;
	// System.Boolean CheckButton::pixelSnap
	bool ___pixelSnap_16;
	// System.Collections.Generic.List`1<EventDelegate> CheckButton::onClick
	List_1_t2865430313 * ___onClick_17;
	// System.String CheckButton::mNormalSprite
	String_t* ___mNormalSprite_18;
	// UISprite CheckButton::mSprite
	UISprite_t603616735 * ___mSprite_19;

public:
	inline static int32_t get_offset_of_dragHighlight_12() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___dragHighlight_12)); }
	inline bool get_dragHighlight_12() const { return ___dragHighlight_12; }
	inline bool* get_address_of_dragHighlight_12() { return &___dragHighlight_12; }
	inline void set_dragHighlight_12(bool value)
	{
		___dragHighlight_12 = value;
	}

	inline static int32_t get_offset_of_hoverSprite_13() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___hoverSprite_13)); }
	inline String_t* get_hoverSprite_13() const { return ___hoverSprite_13; }
	inline String_t** get_address_of_hoverSprite_13() { return &___hoverSprite_13; }
	inline void set_hoverSprite_13(String_t* value)
	{
		___hoverSprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___hoverSprite_13, value);
	}

	inline static int32_t get_offset_of_pressedSprite_14() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___pressedSprite_14)); }
	inline String_t* get_pressedSprite_14() const { return ___pressedSprite_14; }
	inline String_t** get_address_of_pressedSprite_14() { return &___pressedSprite_14; }
	inline void set_pressedSprite_14(String_t* value)
	{
		___pressedSprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___pressedSprite_14, value);
	}

	inline static int32_t get_offset_of_disabledSprite_15() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___disabledSprite_15)); }
	inline String_t* get_disabledSprite_15() const { return ___disabledSprite_15; }
	inline String_t** get_address_of_disabledSprite_15() { return &___disabledSprite_15; }
	inline void set_disabledSprite_15(String_t* value)
	{
		___disabledSprite_15 = value;
		Il2CppCodeGenWriteBarrier(&___disabledSprite_15, value);
	}

	inline static int32_t get_offset_of_pixelSnap_16() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___pixelSnap_16)); }
	inline bool get_pixelSnap_16() const { return ___pixelSnap_16; }
	inline bool* get_address_of_pixelSnap_16() { return &___pixelSnap_16; }
	inline void set_pixelSnap_16(bool value)
	{
		___pixelSnap_16 = value;
	}

	inline static int32_t get_offset_of_onClick_17() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___onClick_17)); }
	inline List_1_t2865430313 * get_onClick_17() const { return ___onClick_17; }
	inline List_1_t2865430313 ** get_address_of_onClick_17() { return &___onClick_17; }
	inline void set_onClick_17(List_1_t2865430313 * value)
	{
		___onClick_17 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_17, value);
	}

	inline static int32_t get_offset_of_mNormalSprite_18() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___mNormalSprite_18)); }
	inline String_t* get_mNormalSprite_18() const { return ___mNormalSprite_18; }
	inline String_t** get_address_of_mNormalSprite_18() { return &___mNormalSprite_18; }
	inline void set_mNormalSprite_18(String_t* value)
	{
		___mNormalSprite_18 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalSprite_18, value);
	}

	inline static int32_t get_offset_of_mSprite_19() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932, ___mSprite_19)); }
	inline UISprite_t603616735 * get_mSprite_19() const { return ___mSprite_19; }
	inline UISprite_t603616735 ** get_address_of_mSprite_19() { return &___mSprite_19; }
	inline void set_mSprite_19(UISprite_t603616735 * value)
	{
		___mSprite_19 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_19, value);
	}
};

struct CheckButton_t2155868932_StaticFields
{
public:
	// CheckButton CheckButton::current
	CheckButton_t2155868932 * ___current_11;

public:
	inline static int32_t get_offset_of_current_11() { return static_cast<int32_t>(offsetof(CheckButton_t2155868932_StaticFields, ___current_11)); }
	inline CheckButton_t2155868932 * get_current_11() const { return ___current_11; }
	inline CheckButton_t2155868932 ** get_address_of_current_11() { return &___current_11; }
	inline void set_current_11(CheckButton_t2155868932 * value)
	{
		___current_11 = value;
		Il2CppCodeGenWriteBarrier(&___current_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
