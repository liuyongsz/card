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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fightrolehppanel_item
struct  fightrolehppanel_item_t2071353678  : public Il2CppObject
{
public:
	// UILabel fightrolehppanel_item::curHpLab
	UILabel_t1795115428 * ___curHpLab_0;
	// UILabel fightrolehppanel_item::maxHpLab
	UILabel_t1795115428 * ___maxHpLab_1;

public:
	inline static int32_t get_offset_of_curHpLab_0() { return static_cast<int32_t>(offsetof(fightrolehppanel_item_t2071353678, ___curHpLab_0)); }
	inline UILabel_t1795115428 * get_curHpLab_0() const { return ___curHpLab_0; }
	inline UILabel_t1795115428 ** get_address_of_curHpLab_0() { return &___curHpLab_0; }
	inline void set_curHpLab_0(UILabel_t1795115428 * value)
	{
		___curHpLab_0 = value;
		Il2CppCodeGenWriteBarrier(&___curHpLab_0, value);
	}

	inline static int32_t get_offset_of_maxHpLab_1() { return static_cast<int32_t>(offsetof(fightrolehppanel_item_t2071353678, ___maxHpLab_1)); }
	inline UILabel_t1795115428 * get_maxHpLab_1() const { return ___maxHpLab_1; }
	inline UILabel_t1795115428 ** get_address_of_maxHpLab_1() { return &___maxHpLab_1; }
	inline void set_maxHpLab_1(UILabel_t1795115428 * value)
	{
		___maxHpLab_1 = value;
		Il2CppCodeGenWriteBarrier(&___maxHpLab_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
