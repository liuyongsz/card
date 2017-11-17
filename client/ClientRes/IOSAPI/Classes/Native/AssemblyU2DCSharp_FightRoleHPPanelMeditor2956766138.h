#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform>
struct Dictionary_2_t3016772963;

#include "AssemblyU2DCSharp_UIMediator_1_gen1414780145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FightRoleHPPanelMeditor
struct  FightRoleHPPanelMeditor_t2956766138  : public UIMediator_1_t1414780145
{
public:

public:
};

struct FightRoleHPPanelMeditor_t2956766138_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform> FightRoleHPPanelMeditor::AllCardHP
	Dictionary_2_t3016772963 * ___AllCardHP_18;
	// System.Boolean FightRoleHPPanelMeditor::IsOpen
	bool ___IsOpen_19;

public:
	inline static int32_t get_offset_of_AllCardHP_18() { return static_cast<int32_t>(offsetof(FightRoleHPPanelMeditor_t2956766138_StaticFields, ___AllCardHP_18)); }
	inline Dictionary_2_t3016772963 * get_AllCardHP_18() const { return ___AllCardHP_18; }
	inline Dictionary_2_t3016772963 ** get_address_of_AllCardHP_18() { return &___AllCardHP_18; }
	inline void set_AllCardHP_18(Dictionary_2_t3016772963 * value)
	{
		___AllCardHP_18 = value;
		Il2CppCodeGenWriteBarrier(&___AllCardHP_18, value);
	}

	inline static int32_t get_offset_of_IsOpen_19() { return static_cast<int32_t>(offsetof(FightRoleHPPanelMeditor_t2956766138_StaticFields, ___IsOpen_19)); }
	inline bool get_IsOpen_19() const { return ___IsOpen_19; }
	inline bool* get_address_of_IsOpen_19() { return &___IsOpen_19; }
	inline void set_IsOpen_19(bool value)
	{
		___IsOpen_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
