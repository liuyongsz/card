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

// OfficalRankInfo
struct  OfficalRankInfo_t2879172170  : public Il2CppObject
{
public:
	// System.Int32 OfficalRankInfo::dbid
	int32_t ___dbid_0;
	// System.Int32 OfficalRankInfo::rank
	int32_t ___rank_1;
	// System.String OfficalRankInfo::name
	String_t* ___name_2;
	// System.String OfficalRankInfo::guildName
	String_t* ___guildName_3;
	// System.Int32 OfficalRankInfo::fame
	int32_t ___fame_4;
	// System.Int32 OfficalRankInfo::topOfficialTurn
	int32_t ___topOfficialTurn_5;

public:
	inline static int32_t get_offset_of_dbid_0() { return static_cast<int32_t>(offsetof(OfficalRankInfo_t2879172170, ___dbid_0)); }
	inline int32_t get_dbid_0() const { return ___dbid_0; }
	inline int32_t* get_address_of_dbid_0() { return &___dbid_0; }
	inline void set_dbid_0(int32_t value)
	{
		___dbid_0 = value;
	}

	inline static int32_t get_offset_of_rank_1() { return static_cast<int32_t>(offsetof(OfficalRankInfo_t2879172170, ___rank_1)); }
	inline int32_t get_rank_1() const { return ___rank_1; }
	inline int32_t* get_address_of_rank_1() { return &___rank_1; }
	inline void set_rank_1(int32_t value)
	{
		___rank_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(OfficalRankInfo_t2879172170, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_guildName_3() { return static_cast<int32_t>(offsetof(OfficalRankInfo_t2879172170, ___guildName_3)); }
	inline String_t* get_guildName_3() const { return ___guildName_3; }
	inline String_t** get_address_of_guildName_3() { return &___guildName_3; }
	inline void set_guildName_3(String_t* value)
	{
		___guildName_3 = value;
		Il2CppCodeGenWriteBarrier(&___guildName_3, value);
	}

	inline static int32_t get_offset_of_fame_4() { return static_cast<int32_t>(offsetof(OfficalRankInfo_t2879172170, ___fame_4)); }
	inline int32_t get_fame_4() const { return ___fame_4; }
	inline int32_t* get_address_of_fame_4() { return &___fame_4; }
	inline void set_fame_4(int32_t value)
	{
		___fame_4 = value;
	}

	inline static int32_t get_offset_of_topOfficialTurn_5() { return static_cast<int32_t>(offsetof(OfficalRankInfo_t2879172170, ___topOfficialTurn_5)); }
	inline int32_t get_topOfficialTurn_5() const { return ___topOfficialTurn_5; }
	inline int32_t* get_address_of_topOfficialTurn_5() { return &___topOfficialTurn_5; }
	inline void set_topOfficialTurn_5(int32_t value)
	{
		___topOfficialTurn_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
