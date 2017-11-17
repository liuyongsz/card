#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t1795115428;

#include "AssemblyU2DCSharp_UITweener2986641582.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UILabel_Effect541741196.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LabelBlingEffect
struct  LabelBlingEffect_t1192352145  : public UITweener_t2986641582
{
public:
	// System.Int32 LabelBlingEffect::timers
	int32_t ___timers_20;
	// System.Single LabelBlingEffect::from
	float ___from_21;
	// System.Single LabelBlingEffect::to
	float ___to_22;
	// UnityEngine.Color LabelBlingEffect::effectColor
	Color_t2020392075  ___effectColor_23;
	// UILabel LabelBlingEffect::mLabel
	UILabel_t1795115428 * ___mLabel_24;
	// UnityEngine.Color LabelBlingEffect::originalEffectColor
	Color_t2020392075  ___originalEffectColor_25;
	// UnityEngine.Color LabelBlingEffect::originalColor
	Color_t2020392075  ___originalColor_26;
	// System.Int32 LabelBlingEffect::originalTimes
	int32_t ___originalTimes_27;
	// UILabel/Effect LabelBlingEffect::originalEffect
	int32_t ___originalEffect_28;

public:
	inline static int32_t get_offset_of_timers_20() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___timers_20)); }
	inline int32_t get_timers_20() const { return ___timers_20; }
	inline int32_t* get_address_of_timers_20() { return &___timers_20; }
	inline void set_timers_20(int32_t value)
	{
		___timers_20 = value;
	}

	inline static int32_t get_offset_of_from_21() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___from_21)); }
	inline float get_from_21() const { return ___from_21; }
	inline float* get_address_of_from_21() { return &___from_21; }
	inline void set_from_21(float value)
	{
		___from_21 = value;
	}

	inline static int32_t get_offset_of_to_22() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___to_22)); }
	inline float get_to_22() const { return ___to_22; }
	inline float* get_address_of_to_22() { return &___to_22; }
	inline void set_to_22(float value)
	{
		___to_22 = value;
	}

	inline static int32_t get_offset_of_effectColor_23() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___effectColor_23)); }
	inline Color_t2020392075  get_effectColor_23() const { return ___effectColor_23; }
	inline Color_t2020392075 * get_address_of_effectColor_23() { return &___effectColor_23; }
	inline void set_effectColor_23(Color_t2020392075  value)
	{
		___effectColor_23 = value;
	}

	inline static int32_t get_offset_of_mLabel_24() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___mLabel_24)); }
	inline UILabel_t1795115428 * get_mLabel_24() const { return ___mLabel_24; }
	inline UILabel_t1795115428 ** get_address_of_mLabel_24() { return &___mLabel_24; }
	inline void set_mLabel_24(UILabel_t1795115428 * value)
	{
		___mLabel_24 = value;
		Il2CppCodeGenWriteBarrier(&___mLabel_24, value);
	}

	inline static int32_t get_offset_of_originalEffectColor_25() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___originalEffectColor_25)); }
	inline Color_t2020392075  get_originalEffectColor_25() const { return ___originalEffectColor_25; }
	inline Color_t2020392075 * get_address_of_originalEffectColor_25() { return &___originalEffectColor_25; }
	inline void set_originalEffectColor_25(Color_t2020392075  value)
	{
		___originalEffectColor_25 = value;
	}

	inline static int32_t get_offset_of_originalColor_26() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___originalColor_26)); }
	inline Color_t2020392075  get_originalColor_26() const { return ___originalColor_26; }
	inline Color_t2020392075 * get_address_of_originalColor_26() { return &___originalColor_26; }
	inline void set_originalColor_26(Color_t2020392075  value)
	{
		___originalColor_26 = value;
	}

	inline static int32_t get_offset_of_originalTimes_27() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___originalTimes_27)); }
	inline int32_t get_originalTimes_27() const { return ___originalTimes_27; }
	inline int32_t* get_address_of_originalTimes_27() { return &___originalTimes_27; }
	inline void set_originalTimes_27(int32_t value)
	{
		___originalTimes_27 = value;
	}

	inline static int32_t get_offset_of_originalEffect_28() { return static_cast<int32_t>(offsetof(LabelBlingEffect_t1192352145, ___originalEffect_28)); }
	inline int32_t get_originalEffect_28() const { return ___originalEffect_28; }
	inline int32_t* get_address_of_originalEffect_28() { return &___originalEffect_28; }
	inline void set_originalEffect_28(int32_t value)
	{
		___originalEffect_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
