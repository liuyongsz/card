#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Confirm
struct Confirm_t2568813388;
// CopyTeam
struct CopyTeam_t2662696276;
// CreateTeam
struct CreateTeam_t1127243795;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PromtType1053105714.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PromtInfo
struct  PromtInfo_t4158421602  : public Il2CppObject
{
public:
	// Confirm PromtInfo::confirm
	Confirm_t2568813388 * ___confirm_0;
	// CopyTeam PromtInfo::copyTeam
	CopyTeam_t2662696276 * ___copyTeam_1;
	// CreateTeam PromtInfo::createTeam
	CreateTeam_t1127243795 * ___createTeam_2;
	// System.String PromtInfo::context
	String_t* ___context_3;
	// System.String PromtInfo::title
	String_t* ___title_4;
	// PromtType PromtInfo::promtType
	int32_t ___promtType_5;

public:
	inline static int32_t get_offset_of_confirm_0() { return static_cast<int32_t>(offsetof(PromtInfo_t4158421602, ___confirm_0)); }
	inline Confirm_t2568813388 * get_confirm_0() const { return ___confirm_0; }
	inline Confirm_t2568813388 ** get_address_of_confirm_0() { return &___confirm_0; }
	inline void set_confirm_0(Confirm_t2568813388 * value)
	{
		___confirm_0 = value;
		Il2CppCodeGenWriteBarrier(&___confirm_0, value);
	}

	inline static int32_t get_offset_of_copyTeam_1() { return static_cast<int32_t>(offsetof(PromtInfo_t4158421602, ___copyTeam_1)); }
	inline CopyTeam_t2662696276 * get_copyTeam_1() const { return ___copyTeam_1; }
	inline CopyTeam_t2662696276 ** get_address_of_copyTeam_1() { return &___copyTeam_1; }
	inline void set_copyTeam_1(CopyTeam_t2662696276 * value)
	{
		___copyTeam_1 = value;
		Il2CppCodeGenWriteBarrier(&___copyTeam_1, value);
	}

	inline static int32_t get_offset_of_createTeam_2() { return static_cast<int32_t>(offsetof(PromtInfo_t4158421602, ___createTeam_2)); }
	inline CreateTeam_t1127243795 * get_createTeam_2() const { return ___createTeam_2; }
	inline CreateTeam_t1127243795 ** get_address_of_createTeam_2() { return &___createTeam_2; }
	inline void set_createTeam_2(CreateTeam_t1127243795 * value)
	{
		___createTeam_2 = value;
		Il2CppCodeGenWriteBarrier(&___createTeam_2, value);
	}

	inline static int32_t get_offset_of_context_3() { return static_cast<int32_t>(offsetof(PromtInfo_t4158421602, ___context_3)); }
	inline String_t* get_context_3() const { return ___context_3; }
	inline String_t** get_address_of_context_3() { return &___context_3; }
	inline void set_context_3(String_t* value)
	{
		___context_3 = value;
		Il2CppCodeGenWriteBarrier(&___context_3, value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(PromtInfo_t4158421602, ___title_4)); }
	inline String_t* get_title_4() const { return ___title_4; }
	inline String_t** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(String_t* value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier(&___title_4, value);
	}

	inline static int32_t get_offset_of_promtType_5() { return static_cast<int32_t>(offsetof(PromtInfo_t4158421602, ___promtType_5)); }
	inline int32_t get_promtType_5() const { return ___promtType_5; }
	inline int32_t* get_address_of_promtType_5() { return &___promtType_5; }
	inline void set_promtType_5(int32_t value)
	{
		___promtType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
