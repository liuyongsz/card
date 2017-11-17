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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TD_SkillPrefabInfo
struct  TD_SkillPrefabInfo_t1298292572  : public Il2CppObject
{
public:
	// System.String TD_SkillPrefabInfo::id
	String_t* ___id_0;
	// System.String TD_SkillPrefabInfo::scale
	String_t* ___scale_1;
	// System.String TD_SkillPrefabInfo::enemyPoint
	String_t* ___enemyPoint_2;
	// System.String TD_SkillPrefabInfo::selfPoint
	String_t* ___selfPoint_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TD_SkillPrefabInfo_t1298292572, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(TD_SkillPrefabInfo_t1298292572, ___scale_1)); }
	inline String_t* get_scale_1() const { return ___scale_1; }
	inline String_t** get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(String_t* value)
	{
		___scale_1 = value;
		Il2CppCodeGenWriteBarrier(&___scale_1, value);
	}

	inline static int32_t get_offset_of_enemyPoint_2() { return static_cast<int32_t>(offsetof(TD_SkillPrefabInfo_t1298292572, ___enemyPoint_2)); }
	inline String_t* get_enemyPoint_2() const { return ___enemyPoint_2; }
	inline String_t** get_address_of_enemyPoint_2() { return &___enemyPoint_2; }
	inline void set_enemyPoint_2(String_t* value)
	{
		___enemyPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPoint_2, value);
	}

	inline static int32_t get_offset_of_selfPoint_3() { return static_cast<int32_t>(offsetof(TD_SkillPrefabInfo_t1298292572, ___selfPoint_3)); }
	inline String_t* get_selfPoint_3() const { return ___selfPoint_3; }
	inline String_t** get_address_of_selfPoint_3() { return &___selfPoint_3; }
	inline void set_selfPoint_3(String_t* value)
	{
		___selfPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___selfPoint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
