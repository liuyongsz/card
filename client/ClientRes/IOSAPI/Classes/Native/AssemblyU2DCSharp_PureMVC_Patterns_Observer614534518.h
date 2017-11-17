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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Observer
struct  Observer_t614534518  : public Il2CppObject
{
public:
	// System.String PureMVC.Patterns.Observer::m_notifyMethod
	String_t* ___m_notifyMethod_0;
	// System.Object PureMVC.Patterns.Observer::m_notifyContext
	Il2CppObject * ___m_notifyContext_1;
	// System.Object PureMVC.Patterns.Observer::m_syncRoot
	Il2CppObject * ___m_syncRoot_2;

public:
	inline static int32_t get_offset_of_m_notifyMethod_0() { return static_cast<int32_t>(offsetof(Observer_t614534518, ___m_notifyMethod_0)); }
	inline String_t* get_m_notifyMethod_0() const { return ___m_notifyMethod_0; }
	inline String_t** get_address_of_m_notifyMethod_0() { return &___m_notifyMethod_0; }
	inline void set_m_notifyMethod_0(String_t* value)
	{
		___m_notifyMethod_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_notifyMethod_0, value);
	}

	inline static int32_t get_offset_of_m_notifyContext_1() { return static_cast<int32_t>(offsetof(Observer_t614534518, ___m_notifyContext_1)); }
	inline Il2CppObject * get_m_notifyContext_1() const { return ___m_notifyContext_1; }
	inline Il2CppObject ** get_address_of_m_notifyContext_1() { return &___m_notifyContext_1; }
	inline void set_m_notifyContext_1(Il2CppObject * value)
	{
		___m_notifyContext_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_notifyContext_1, value);
	}

	inline static int32_t get_offset_of_m_syncRoot_2() { return static_cast<int32_t>(offsetof(Observer_t614534518, ___m_syncRoot_2)); }
	inline Il2CppObject * get_m_syncRoot_2() const { return ___m_syncRoot_2; }
	inline Il2CppObject ** get_address_of_m_syncRoot_2() { return &___m_syncRoot_2; }
	inline void set_m_syncRoot_2(Il2CppObject * value)
	{
		___m_syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_syncRoot_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
