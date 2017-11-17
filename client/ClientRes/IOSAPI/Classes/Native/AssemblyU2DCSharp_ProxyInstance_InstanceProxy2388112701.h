#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t331839896;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProxyInstance.InstanceProxy
struct  InstanceProxy_t2388112701  : public Il2CppObject
{
public:

public:
};

struct InstanceProxy_t2388112701_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> ProxyInstance.InstanceProxy::mTables
	Dictionary_2_t331839896 * ___mTables_0;

public:
	inline static int32_t get_offset_of_mTables_0() { return static_cast<int32_t>(offsetof(InstanceProxy_t2388112701_StaticFields, ___mTables_0)); }
	inline Dictionary_2_t331839896 * get_mTables_0() const { return ___mTables_0; }
	inline Dictionary_2_t331839896 ** get_address_of_mTables_0() { return &___mTables_0; }
	inline void set_mTables_0(Dictionary_2_t331839896 * value)
	{
		___mTables_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTables_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
