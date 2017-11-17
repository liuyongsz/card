#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Trigger_AddEffect>
struct Dictionary_2_t774728072;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_AbstractSkillTrigger2192524791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Trigger_AddEffect
struct  Trigger_AddEffect_t1033073167  : public AbstractSkillTrigger_t2192524791
{
public:
	// UnityEngine.Transform Trigger_AddEffect::EffectObject
	Transform_t3275118058 * ___EffectObject_2;
	// System.String Trigger_AddEffect::SkillABName
	String_t* ___SkillABName_3;
	// System.Boolean Trigger_AddEffect::NormalUse
	bool ___NormalUse_4;

public:
	inline static int32_t get_offset_of_EffectObject_2() { return static_cast<int32_t>(offsetof(Trigger_AddEffect_t1033073167, ___EffectObject_2)); }
	inline Transform_t3275118058 * get_EffectObject_2() const { return ___EffectObject_2; }
	inline Transform_t3275118058 ** get_address_of_EffectObject_2() { return &___EffectObject_2; }
	inline void set_EffectObject_2(Transform_t3275118058 * value)
	{
		___EffectObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___EffectObject_2, value);
	}

	inline static int32_t get_offset_of_SkillABName_3() { return static_cast<int32_t>(offsetof(Trigger_AddEffect_t1033073167, ___SkillABName_3)); }
	inline String_t* get_SkillABName_3() const { return ___SkillABName_3; }
	inline String_t** get_address_of_SkillABName_3() { return &___SkillABName_3; }
	inline void set_SkillABName_3(String_t* value)
	{
		___SkillABName_3 = value;
		Il2CppCodeGenWriteBarrier(&___SkillABName_3, value);
	}

	inline static int32_t get_offset_of_NormalUse_4() { return static_cast<int32_t>(offsetof(Trigger_AddEffect_t1033073167, ___NormalUse_4)); }
	inline bool get_NormalUse_4() const { return ___NormalUse_4; }
	inline bool* get_address_of_NormalUse_4() { return &___NormalUse_4; }
	inline void set_NormalUse_4(bool value)
	{
		___NormalUse_4 = value;
	}
};

struct Trigger_AddEffect_t1033073167_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Trigger_AddEffect> Trigger_AddEffect::Effects
	Dictionary_2_t774728072 * ___Effects_1;

public:
	inline static int32_t get_offset_of_Effects_1() { return static_cast<int32_t>(offsetof(Trigger_AddEffect_t1033073167_StaticFields, ___Effects_1)); }
	inline Dictionary_2_t774728072 * get_Effects_1() const { return ___Effects_1; }
	inline Dictionary_2_t774728072 ** get_address_of_Effects_1() { return &___Effects_1; }
	inline void set_Effects_1(Dictionary_2_t774728072 * value)
	{
		___Effects_1 = value;
		Il2CppCodeGenWriteBarrier(&___Effects_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
