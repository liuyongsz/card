#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<E_SkillTiming,System.Collections.Generic.List`1<ISkillTrigger>>
struct Dictionary_2_t2614134834;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillInstance
struct  SkillInstance_t2290497998  : public Il2CppObject
{
public:
	// System.Int32 SkillInstance::SkillId
	int32_t ___SkillId_0;
	// System.Int32 SkillInstance::OwnerId
	int32_t ___OwnerId_1;
	// System.Collections.Generic.Dictionary`2<E_SkillTiming,System.Collections.Generic.List`1<ISkillTrigger>> SkillInstance::mTriggeres
	Dictionary_2_t2614134834 * ___mTriggeres_2;

public:
	inline static int32_t get_offset_of_SkillId_0() { return static_cast<int32_t>(offsetof(SkillInstance_t2290497998, ___SkillId_0)); }
	inline int32_t get_SkillId_0() const { return ___SkillId_0; }
	inline int32_t* get_address_of_SkillId_0() { return &___SkillId_0; }
	inline void set_SkillId_0(int32_t value)
	{
		___SkillId_0 = value;
	}

	inline static int32_t get_offset_of_OwnerId_1() { return static_cast<int32_t>(offsetof(SkillInstance_t2290497998, ___OwnerId_1)); }
	inline int32_t get_OwnerId_1() const { return ___OwnerId_1; }
	inline int32_t* get_address_of_OwnerId_1() { return &___OwnerId_1; }
	inline void set_OwnerId_1(int32_t value)
	{
		___OwnerId_1 = value;
	}

	inline static int32_t get_offset_of_mTriggeres_2() { return static_cast<int32_t>(offsetof(SkillInstance_t2290497998, ___mTriggeres_2)); }
	inline Dictionary_2_t2614134834 * get_mTriggeres_2() const { return ___mTriggeres_2; }
	inline Dictionary_2_t2614134834 ** get_address_of_mTriggeres_2() { return &___mTriggeres_2; }
	inline void set_mTriggeres_2(Dictionary_2_t2614134834 * value)
	{
		___mTriggeres_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTriggeres_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
