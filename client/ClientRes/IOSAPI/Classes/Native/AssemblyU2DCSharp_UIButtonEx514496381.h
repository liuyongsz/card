#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIButton3377238306.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonEx
struct  UIButtonEx_t514496381  : public UIButton_t3377238306
{
public:
	// UnityEngine.GameObject UIButtonEx::mUIForeSprite
	GameObject_t1756533147 * ___mUIForeSprite_20;
	// System.String UIButtonEx::mstrNormalName
	String_t* ___mstrNormalName_21;
	// System.String UIButtonEx::mstrPressName
	String_t* ___mstrPressName_22;
	// System.String UIButtonEx::mstrDisableName
	String_t* ___mstrDisableName_23;

public:
	inline static int32_t get_offset_of_mUIForeSprite_20() { return static_cast<int32_t>(offsetof(UIButtonEx_t514496381, ___mUIForeSprite_20)); }
	inline GameObject_t1756533147 * get_mUIForeSprite_20() const { return ___mUIForeSprite_20; }
	inline GameObject_t1756533147 ** get_address_of_mUIForeSprite_20() { return &___mUIForeSprite_20; }
	inline void set_mUIForeSprite_20(GameObject_t1756533147 * value)
	{
		___mUIForeSprite_20 = value;
		Il2CppCodeGenWriteBarrier(&___mUIForeSprite_20, value);
	}

	inline static int32_t get_offset_of_mstrNormalName_21() { return static_cast<int32_t>(offsetof(UIButtonEx_t514496381, ___mstrNormalName_21)); }
	inline String_t* get_mstrNormalName_21() const { return ___mstrNormalName_21; }
	inline String_t** get_address_of_mstrNormalName_21() { return &___mstrNormalName_21; }
	inline void set_mstrNormalName_21(String_t* value)
	{
		___mstrNormalName_21 = value;
		Il2CppCodeGenWriteBarrier(&___mstrNormalName_21, value);
	}

	inline static int32_t get_offset_of_mstrPressName_22() { return static_cast<int32_t>(offsetof(UIButtonEx_t514496381, ___mstrPressName_22)); }
	inline String_t* get_mstrPressName_22() const { return ___mstrPressName_22; }
	inline String_t** get_address_of_mstrPressName_22() { return &___mstrPressName_22; }
	inline void set_mstrPressName_22(String_t* value)
	{
		___mstrPressName_22 = value;
		Il2CppCodeGenWriteBarrier(&___mstrPressName_22, value);
	}

	inline static int32_t get_offset_of_mstrDisableName_23() { return static_cast<int32_t>(offsetof(UIButtonEx_t514496381, ___mstrDisableName_23)); }
	inline String_t* get_mstrDisableName_23() const { return ___mstrDisableName_23; }
	inline String_t** get_address_of_mstrDisableName_23() { return &___mstrDisableName_23; }
	inline void set_mstrDisableName_23(String_t* value)
	{
		___mstrDisableName_23 = value;
		Il2CppCodeGenWriteBarrier(&___mstrDisableName_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
