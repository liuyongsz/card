#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.RuntimeTypeModel/Singleton
struct  Singleton_t2890082303  : public Il2CppObject
{
public:

public:
};

struct Singleton_t2890082303_StaticFields
{
public:
	// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.RuntimeTypeModel/Singleton::Value
	RuntimeTypeModel_t623319549 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Singleton_t2890082303_StaticFields, ___Value_0)); }
	inline RuntimeTypeModel_t623319549 * get_Value_0() const { return ___Value_0; }
	inline RuntimeTypeModel_t623319549 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeTypeModel_t623319549 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier(&___Value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
