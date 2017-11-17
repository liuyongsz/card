#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Light
struct Light_t494725636;

#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenColor
struct  TweenColor_t3390486518  : public UITweener_t2986641582
{
public:
	// UnityEngine.Color TweenColor::from
	Color_t2020392075  ___from_20;
	// UnityEngine.Color TweenColor::to
	Color_t2020392075  ___to_21;
	// System.Boolean TweenColor::mCached
	bool ___mCached_22;
	// UIWidget TweenColor::mWidget
	UIWidget_t1453041918 * ___mWidget_23;
	// UnityEngine.Material TweenColor::mMat
	Material_t193706927 * ___mMat_24;
	// UnityEngine.Light TweenColor::mLight
	Light_t494725636 * ___mLight_25;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___from_20)); }
	inline Color_t2020392075  get_from_20() const { return ___from_20; }
	inline Color_t2020392075 * get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(Color_t2020392075  value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___to_21)); }
	inline Color_t2020392075  get_to_21() const { return ___to_21; }
	inline Color_t2020392075 * get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(Color_t2020392075  value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mCached_22() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mCached_22)); }
	inline bool get_mCached_22() const { return ___mCached_22; }
	inline bool* get_address_of_mCached_22() { return &___mCached_22; }
	inline void set_mCached_22(bool value)
	{
		___mCached_22 = value;
	}

	inline static int32_t get_offset_of_mWidget_23() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mWidget_23)); }
	inline UIWidget_t1453041918 * get_mWidget_23() const { return ___mWidget_23; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_23() { return &___mWidget_23; }
	inline void set_mWidget_23(UIWidget_t1453041918 * value)
	{
		___mWidget_23 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_23, value);
	}

	inline static int32_t get_offset_of_mMat_24() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mMat_24)); }
	inline Material_t193706927 * get_mMat_24() const { return ___mMat_24; }
	inline Material_t193706927 ** get_address_of_mMat_24() { return &___mMat_24; }
	inline void set_mMat_24(Material_t193706927 * value)
	{
		___mMat_24 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_24, value);
	}

	inline static int32_t get_offset_of_mLight_25() { return static_cast<int32_t>(offsetof(TweenColor_t3390486518, ___mLight_25)); }
	inline Light_t494725636 * get_mLight_25() const { return ___mLight_25; }
	inline Light_t494725636 ** get_address_of_mLight_25() { return &___mLight_25; }
	inline void set_mLight_25(Light_t494725636 * value)
	{
		___mLight_25 = value;
		Il2CppCodeGenWriteBarrier(&___mLight_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
