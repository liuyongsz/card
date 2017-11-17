#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TweenValueAdapter
struct TweenValueAdapter_t999637039;

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenValue
struct  TweenValue_t2675632736  : public UITweener_t2986641582
{
public:
	// System.Single TweenValue::from
	float ___from_20;
	// System.Single TweenValue::to
	float ___to_21;
	// System.Boolean TweenValue::updateTable
	bool ___updateTable_22;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenValue_t2675632736, ___from_20)); }
	inline float get_from_20() const { return ___from_20; }
	inline float* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(float value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenValue_t2675632736, ___to_21)); }
	inline float get_to_21() const { return ___to_21; }
	inline float* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(float value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_updateTable_22() { return static_cast<int32_t>(offsetof(TweenValue_t2675632736, ___updateTable_22)); }
	inline bool get_updateTable_22() const { return ___updateTable_22; }
	inline bool* get_address_of_updateTable_22() { return &___updateTable_22; }
	inline void set_updateTable_22(bool value)
	{
		___updateTable_22 = value;
	}
};

struct TweenValue_t2675632736_StaticFields
{
public:
	// TweenValueAdapter TweenValue::mTarget
	Il2CppObject * ___mTarget_23;

public:
	inline static int32_t get_offset_of_mTarget_23() { return static_cast<int32_t>(offsetof(TweenValue_t2675632736_StaticFields, ___mTarget_23)); }
	inline Il2CppObject * get_mTarget_23() const { return ___mTarget_23; }
	inline Il2CppObject ** get_address_of_mTarget_23() { return &___mTarget_23; }
	inline void set_mTarget_23(Il2CppObject * value)
	{
		___mTarget_23 = value;
		Il2CppCodeGenWriteBarrier(&___mTarget_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
