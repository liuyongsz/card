#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Extensible
struct  Extensible_t597730409  : public Il2CppObject
{
public:
	// ProtoBuf.IExtension ProtoBuf.Extensible::extensionObject
	Il2CppObject * ___extensionObject_0;

public:
	inline static int32_t get_offset_of_extensionObject_0() { return static_cast<int32_t>(offsetof(Extensible_t597730409, ___extensionObject_0)); }
	inline Il2CppObject * get_extensionObject_0() const { return ___extensionObject_0; }
	inline Il2CppObject ** get_address_of_extensionObject_0() { return &___extensionObject_0; }
	inline void set_extensionObject_0(Il2CppObject * value)
	{
		___extensionObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
