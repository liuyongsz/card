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
// PromptMediator
struct PromptMediator_t470138123;

#include "AssemblyU2DCSharp_UIMediator_1_gen480753037.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PromptMediator
struct  PromptMediator_t470138123  : public UIMediator_1_t480753037
{
public:
	// Confirm PromptMediator::confirm
	Confirm_t2568813388 * ___confirm_18;
	// CopyTeam PromptMediator::copyTeam
	CopyTeam_t2662696276 * ___copyTeam_19;
	// CreateTeam PromptMediator::createTeam
	CreateTeam_t1127243795 * ___createTeam_20;

public:
	inline static int32_t get_offset_of_confirm_18() { return static_cast<int32_t>(offsetof(PromptMediator_t470138123, ___confirm_18)); }
	inline Confirm_t2568813388 * get_confirm_18() const { return ___confirm_18; }
	inline Confirm_t2568813388 ** get_address_of_confirm_18() { return &___confirm_18; }
	inline void set_confirm_18(Confirm_t2568813388 * value)
	{
		___confirm_18 = value;
		Il2CppCodeGenWriteBarrier(&___confirm_18, value);
	}

	inline static int32_t get_offset_of_copyTeam_19() { return static_cast<int32_t>(offsetof(PromptMediator_t470138123, ___copyTeam_19)); }
	inline CopyTeam_t2662696276 * get_copyTeam_19() const { return ___copyTeam_19; }
	inline CopyTeam_t2662696276 ** get_address_of_copyTeam_19() { return &___copyTeam_19; }
	inline void set_copyTeam_19(CopyTeam_t2662696276 * value)
	{
		___copyTeam_19 = value;
		Il2CppCodeGenWriteBarrier(&___copyTeam_19, value);
	}

	inline static int32_t get_offset_of_createTeam_20() { return static_cast<int32_t>(offsetof(PromptMediator_t470138123, ___createTeam_20)); }
	inline CreateTeam_t1127243795 * get_createTeam_20() const { return ___createTeam_20; }
	inline CreateTeam_t1127243795 ** get_address_of_createTeam_20() { return &___createTeam_20; }
	inline void set_createTeam_20(CreateTeam_t1127243795 * value)
	{
		___createTeam_20 = value;
		Il2CppCodeGenWriteBarrier(&___createTeam_20, value);
	}
};

struct PromptMediator_t470138123_StaticFields
{
public:
	// PromptMediator PromptMediator::promptMediator
	PromptMediator_t470138123 * ___promptMediator_21;

public:
	inline static int32_t get_offset_of_promptMediator_21() { return static_cast<int32_t>(offsetof(PromptMediator_t470138123_StaticFields, ___promptMediator_21)); }
	inline PromptMediator_t470138123 * get_promptMediator_21() const { return ___promptMediator_21; }
	inline PromptMediator_t470138123 ** get_address_of_promptMediator_21() { return &___promptMediator_21; }
	inline void set_promptMediator_21(PromptMediator_t470138123 * value)
	{
		___promptMediator_21 = value;
		Il2CppCodeGenWriteBarrier(&___promptMediator_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
