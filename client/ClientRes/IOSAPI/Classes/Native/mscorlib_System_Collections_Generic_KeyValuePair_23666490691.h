#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<PureMVC.Interfaces.INotification>
struct Action_1_t418690292;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<NotificationID,System.Action`1<PureMVC.Interfaces.INotification>>
struct  KeyValuePair_2_t3666490691 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Action_1_t418690292 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3666490691, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3666490691, ___value_1)); }
	inline Action_1_t418690292 * get_value_1() const { return ___value_1; }
	inline Action_1_t418690292 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Action_1_t418690292 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
