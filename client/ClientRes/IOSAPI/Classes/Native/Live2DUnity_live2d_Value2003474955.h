#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.Value
struct  Value_t2003474955  : public Il2CppObject
{
public:
	// System.Object live2d.Value::o
	Il2CppObject * ___o_0;

public:
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(Value_t2003474955, ___o_0)); }
	inline Il2CppObject * get_o_0() const { return ___o_0; }
	inline Il2CppObject ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(Il2CppObject * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier(&___o_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
