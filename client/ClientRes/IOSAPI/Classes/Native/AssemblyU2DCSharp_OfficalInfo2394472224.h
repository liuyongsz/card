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
// System.Collections.Generic.Dictionary`2<System.Int32,OfficalRankInfo>
struct Dictionary_2_t1886997805;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OfficalInfo
struct  OfficalInfo_t2394472224  : public Il2CppObject
{
public:
	// System.Int32 OfficalInfo::id
	int32_t ___id_0;
	// System.Int32 OfficalInfo::type
	int32_t ___type_1;
	// System.String OfficalInfo::name
	String_t* ___name_2;
	// System.Int32 OfficalInfo::limit
	int32_t ___limit_3;
	// System.Int32 OfficalInfo::needLevel
	int32_t ___needLevel_4;
	// System.String OfficalInfo::needCost
	String_t* ___needCost_5;
	// System.Int32 OfficalInfo::admit
	int32_t ___admit_6;
	// System.Int32 OfficalInfo::maxAchievements
	int32_t ___maxAchievements_7;
	// System.String OfficalInfo::question
	String_t* ___question_8;
	// System.Int32 OfficalInfo::everyDayReward
	int32_t ___everyDayReward_9;
	// System.String OfficalInfo::havePermission
	String_t* ___havePermission_10;
	// System.Int32 OfficalInfo::guildLevel
	int32_t ___guildLevel_11;
	// System.Int32 OfficalInfo::signUpLimit
	int32_t ___signUpLimit_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,OfficalRankInfo> OfficalInfo::officalRankList
	Dictionary_2_t1886997805 * ___officalRankList_13;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_limit_3() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___limit_3)); }
	inline int32_t get_limit_3() const { return ___limit_3; }
	inline int32_t* get_address_of_limit_3() { return &___limit_3; }
	inline void set_limit_3(int32_t value)
	{
		___limit_3 = value;
	}

	inline static int32_t get_offset_of_needLevel_4() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___needLevel_4)); }
	inline int32_t get_needLevel_4() const { return ___needLevel_4; }
	inline int32_t* get_address_of_needLevel_4() { return &___needLevel_4; }
	inline void set_needLevel_4(int32_t value)
	{
		___needLevel_4 = value;
	}

	inline static int32_t get_offset_of_needCost_5() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___needCost_5)); }
	inline String_t* get_needCost_5() const { return ___needCost_5; }
	inline String_t** get_address_of_needCost_5() { return &___needCost_5; }
	inline void set_needCost_5(String_t* value)
	{
		___needCost_5 = value;
		Il2CppCodeGenWriteBarrier(&___needCost_5, value);
	}

	inline static int32_t get_offset_of_admit_6() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___admit_6)); }
	inline int32_t get_admit_6() const { return ___admit_6; }
	inline int32_t* get_address_of_admit_6() { return &___admit_6; }
	inline void set_admit_6(int32_t value)
	{
		___admit_6 = value;
	}

	inline static int32_t get_offset_of_maxAchievements_7() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___maxAchievements_7)); }
	inline int32_t get_maxAchievements_7() const { return ___maxAchievements_7; }
	inline int32_t* get_address_of_maxAchievements_7() { return &___maxAchievements_7; }
	inline void set_maxAchievements_7(int32_t value)
	{
		___maxAchievements_7 = value;
	}

	inline static int32_t get_offset_of_question_8() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___question_8)); }
	inline String_t* get_question_8() const { return ___question_8; }
	inline String_t** get_address_of_question_8() { return &___question_8; }
	inline void set_question_8(String_t* value)
	{
		___question_8 = value;
		Il2CppCodeGenWriteBarrier(&___question_8, value);
	}

	inline static int32_t get_offset_of_everyDayReward_9() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___everyDayReward_9)); }
	inline int32_t get_everyDayReward_9() const { return ___everyDayReward_9; }
	inline int32_t* get_address_of_everyDayReward_9() { return &___everyDayReward_9; }
	inline void set_everyDayReward_9(int32_t value)
	{
		___everyDayReward_9 = value;
	}

	inline static int32_t get_offset_of_havePermission_10() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___havePermission_10)); }
	inline String_t* get_havePermission_10() const { return ___havePermission_10; }
	inline String_t** get_address_of_havePermission_10() { return &___havePermission_10; }
	inline void set_havePermission_10(String_t* value)
	{
		___havePermission_10 = value;
		Il2CppCodeGenWriteBarrier(&___havePermission_10, value);
	}

	inline static int32_t get_offset_of_guildLevel_11() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___guildLevel_11)); }
	inline int32_t get_guildLevel_11() const { return ___guildLevel_11; }
	inline int32_t* get_address_of_guildLevel_11() { return &___guildLevel_11; }
	inline void set_guildLevel_11(int32_t value)
	{
		___guildLevel_11 = value;
	}

	inline static int32_t get_offset_of_signUpLimit_12() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___signUpLimit_12)); }
	inline int32_t get_signUpLimit_12() const { return ___signUpLimit_12; }
	inline int32_t* get_address_of_signUpLimit_12() { return &___signUpLimit_12; }
	inline void set_signUpLimit_12(int32_t value)
	{
		___signUpLimit_12 = value;
	}

	inline static int32_t get_offset_of_officalRankList_13() { return static_cast<int32_t>(offsetof(OfficalInfo_t2394472224, ___officalRankList_13)); }
	inline Dictionary_2_t1886997805 * get_officalRankList_13() const { return ___officalRankList_13; }
	inline Dictionary_2_t1886997805 ** get_address_of_officalRankList_13() { return &___officalRankList_13; }
	inline void set_officalRankList_13(Dictionary_2_t1886997805 * value)
	{
		___officalRankList_13 = value;
		Il2CppCodeGenWriteBarrier(&___officalRankList_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
