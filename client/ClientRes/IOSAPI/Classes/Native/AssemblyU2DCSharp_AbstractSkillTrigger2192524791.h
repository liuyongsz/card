#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SkillInstance
struct SkillInstance_t2290497998;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AbstractSkillTrigger
struct  AbstractSkillTrigger_t2192524791  : public Il2CppObject
{
public:
	// SkillInstance AbstractSkillTrigger::OwnSkill
	SkillInstance_t2290497998 * ___OwnSkill_0;

public:
	inline static int32_t get_offset_of_OwnSkill_0() { return static_cast<int32_t>(offsetof(AbstractSkillTrigger_t2192524791, ___OwnSkill_0)); }
	inline SkillInstance_t2290497998 * get_OwnSkill_0() const { return ___OwnSkill_0; }
	inline SkillInstance_t2290497998 ** get_address_of_OwnSkill_0() { return &___OwnSkill_0; }
	inline void set_OwnSkill_0(SkillInstance_t2290497998 * value)
	{
		___OwnSkill_0 = value;
		Il2CppCodeGenWriteBarrier(&___OwnSkill_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
