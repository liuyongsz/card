#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t1844743827;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Notifier1290595654.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.MacroCommand
struct  MacroCommand_t2790984453  : public Notifier_t1290595654
{
public:
	// System.Collections.Generic.IList`1<System.Type> PureMVC.Patterns.MacroCommand::m_subCommands
	Il2CppObject* ___m_subCommands_1;

public:
	inline static int32_t get_offset_of_m_subCommands_1() { return static_cast<int32_t>(offsetof(MacroCommand_t2790984453, ___m_subCommands_1)); }
	inline Il2CppObject* get_m_subCommands_1() const { return ___m_subCommands_1; }
	inline Il2CppObject** get_address_of_m_subCommands_1() { return &___m_subCommands_1; }
	inline void set_m_subCommands_1(Il2CppObject* value)
	{
		___m_subCommands_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_subCommands_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
