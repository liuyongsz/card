#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3718216671;

#include "AssemblyU2DCSharp_UILabel1795115428.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UINumLabel
struct  UINumLabel_t1086429896  : public UILabel_t1795115428
{
public:
	// System.Text.RegularExpressions.MatchCollection UINumLabel::matchs
	MatchCollection_t3718216671 * ___matchs_104;

public:
	inline static int32_t get_offset_of_matchs_104() { return static_cast<int32_t>(offsetof(UINumLabel_t1086429896, ___matchs_104)); }
	inline MatchCollection_t3718216671 * get_matchs_104() const { return ___matchs_104; }
	inline MatchCollection_t3718216671 ** get_address_of_matchs_104() { return &___matchs_104; }
	inline void set_matchs_104(MatchCollection_t3718216671 * value)
	{
		___matchs_104 = value;
		Il2CppCodeGenWriteBarrier(&___matchs_104, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
