#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UILabel
struct UILabel_t1795115428;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fightrolehppanel
struct  fightrolehppanel_t1479182264  : public BasePanel_t542715433
{
public:
	// UnityEngine.Transform fightrolehppanel::roleHP
	Transform_t3275118058 * ___roleHP_2;
	// UILabel fightrolehppanel::addValue
	UILabel_t1795115428 * ___addValue_3;

public:
	inline static int32_t get_offset_of_roleHP_2() { return static_cast<int32_t>(offsetof(fightrolehppanel_t1479182264, ___roleHP_2)); }
	inline Transform_t3275118058 * get_roleHP_2() const { return ___roleHP_2; }
	inline Transform_t3275118058 ** get_address_of_roleHP_2() { return &___roleHP_2; }
	inline void set_roleHP_2(Transform_t3275118058 * value)
	{
		___roleHP_2 = value;
		Il2CppCodeGenWriteBarrier(&___roleHP_2, value);
	}

	inline static int32_t get_offset_of_addValue_3() { return static_cast<int32_t>(offsetof(fightrolehppanel_t1479182264, ___addValue_3)); }
	inline UILabel_t1795115428 * get_addValue_3() const { return ___addValue_3; }
	inline UILabel_t1795115428 ** get_address_of_addValue_3() { return &___addValue_3; }
	inline void set_addValue_3(UILabel_t1795115428 * value)
	{
		___addValue_3 = value;
		Il2CppCodeGenWriteBarrier(&___addValue_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
