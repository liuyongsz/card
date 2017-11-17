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
// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Notifier1290595654.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Mediator
struct  Mediator_t229886313  : public Notifier_t1290595654
{
public:
	// System.String PureMVC.Patterns.Mediator::m_mediatorName
	String_t* ___m_mediatorName_2;
	// System.Object PureMVC.Patterns.Mediator::m_viewComponent
	Il2CppObject * ___m_viewComponent_3;

public:
	inline static int32_t get_offset_of_m_mediatorName_2() { return static_cast<int32_t>(offsetof(Mediator_t229886313, ___m_mediatorName_2)); }
	inline String_t* get_m_mediatorName_2() const { return ___m_mediatorName_2; }
	inline String_t** get_address_of_m_mediatorName_2() { return &___m_mediatorName_2; }
	inline void set_m_mediatorName_2(String_t* value)
	{
		___m_mediatorName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_mediatorName_2, value);
	}

	inline static int32_t get_offset_of_m_viewComponent_3() { return static_cast<int32_t>(offsetof(Mediator_t229886313, ___m_viewComponent_3)); }
	inline Il2CppObject * get_m_viewComponent_3() const { return ___m_viewComponent_3; }
	inline Il2CppObject ** get_address_of_m_viewComponent_3() { return &___m_viewComponent_3; }
	inline void set_m_viewComponent_3(Il2CppObject * value)
	{
		___m_viewComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_viewComponent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
