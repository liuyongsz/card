#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SelectTeamMediator
struct SelectTeamMediator_t1427282900;
// NetProtocal.TeamListMsg
struct TeamListMsg_t435340988;
// System.Comparison`1<NetProtocal.SelectTeamMsg>
struct Comparison_1_t3853982673;

#include "AssemblyU2DCSharp_UIMediator_1_gen178289618.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectTeamMediator
struct  SelectTeamMediator_t1427282900  : public UIMediator_1_t178289618
{
public:
	// NetProtocal.TeamListMsg SelectTeamMediator::msg
	TeamListMsg_t435340988 * ___msg_19;

public:
	inline static int32_t get_offset_of_msg_19() { return static_cast<int32_t>(offsetof(SelectTeamMediator_t1427282900, ___msg_19)); }
	inline TeamListMsg_t435340988 * get_msg_19() const { return ___msg_19; }
	inline TeamListMsg_t435340988 ** get_address_of_msg_19() { return &___msg_19; }
	inline void set_msg_19(TeamListMsg_t435340988 * value)
	{
		___msg_19 = value;
		Il2CppCodeGenWriteBarrier(&___msg_19, value);
	}
};

struct SelectTeamMediator_t1427282900_StaticFields
{
public:
	// SelectTeamMediator SelectTeamMediator::selectTeamMediator
	SelectTeamMediator_t1427282900 * ___selectTeamMediator_18;
	// System.Comparison`1<NetProtocal.SelectTeamMsg> SelectTeamMediator::<>f__am$cache2
	Comparison_1_t3853982673 * ___U3CU3Ef__amU24cache2_20;

public:
	inline static int32_t get_offset_of_selectTeamMediator_18() { return static_cast<int32_t>(offsetof(SelectTeamMediator_t1427282900_StaticFields, ___selectTeamMediator_18)); }
	inline SelectTeamMediator_t1427282900 * get_selectTeamMediator_18() const { return ___selectTeamMediator_18; }
	inline SelectTeamMediator_t1427282900 ** get_address_of_selectTeamMediator_18() { return &___selectTeamMediator_18; }
	inline void set_selectTeamMediator_18(SelectTeamMediator_t1427282900 * value)
	{
		___selectTeamMediator_18 = value;
		Il2CppCodeGenWriteBarrier(&___selectTeamMediator_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_20() { return static_cast<int32_t>(offsetof(SelectTeamMediator_t1427282900_StaticFields, ___U3CU3Ef__amU24cache2_20)); }
	inline Comparison_1_t3853982673 * get_U3CU3Ef__amU24cache2_20() const { return ___U3CU3Ef__amU24cache2_20; }
	inline Comparison_1_t3853982673 ** get_address_of_U3CU3Ef__amU24cache2_20() { return &___U3CU3Ef__amU24cache2_20; }
	inline void set_U3CU3Ef__amU24cache2_20(Comparison_1_t3853982673 * value)
	{
		___U3CU3Ef__amU24cache2_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
