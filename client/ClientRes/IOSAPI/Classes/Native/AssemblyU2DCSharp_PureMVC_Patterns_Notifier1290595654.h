#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PureMVC.Interfaces.IFacade
struct IFacade_t2963254751;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Notifier
struct  Notifier_t1290595654  : public Il2CppObject
{
public:
	// PureMVC.Interfaces.IFacade PureMVC.Patterns.Notifier::m_facade
	Il2CppObject * ___m_facade_0;

public:
	inline static int32_t get_offset_of_m_facade_0() { return static_cast<int32_t>(offsetof(Notifier_t1290595654, ___m_facade_0)); }
	inline Il2CppObject * get_m_facade_0() const { return ___m_facade_0; }
	inline Il2CppObject ** get_address_of_m_facade_0() { return &___m_facade_0; }
	inline void set_m_facade_0(Il2CppObject * value)
	{
		___m_facade_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_facade_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
