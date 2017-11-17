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
#include "AssemblyU2DCSharp_NotificationID248744986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Notification
struct  Notification_t3880793091  : public Il2CppObject
{
public:
	// NotificationID PureMVC.Patterns.Notification::m_name
	int32_t ___m_name_0;
	// System.String PureMVC.Patterns.Notification::m_type
	String_t* ___m_type_1;
	// System.Object PureMVC.Patterns.Notification::m_body
	Il2CppObject * ___m_body_2;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(Notification_t3880793091, ___m_name_0)); }
	inline int32_t get_m_name_0() const { return ___m_name_0; }
	inline int32_t* get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(int32_t value)
	{
		___m_name_0 = value;
	}

	inline static int32_t get_offset_of_m_type_1() { return static_cast<int32_t>(offsetof(Notification_t3880793091, ___m_type_1)); }
	inline String_t* get_m_type_1() const { return ___m_type_1; }
	inline String_t** get_address_of_m_type_1() { return &___m_type_1; }
	inline void set_m_type_1(String_t* value)
	{
		___m_type_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_type_1, value);
	}

	inline static int32_t get_offset_of_m_body_2() { return static_cast<int32_t>(offsetof(Notification_t3880793091, ___m_body_2)); }
	inline Il2CppObject * get_m_body_2() const { return ___m_body_2; }
	inline Il2CppObject ** get_address_of_m_body_2() { return &___m_body_2; }
	inline void set_m_body_2(Il2CppObject * value)
	{
		___m_body_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_body_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
