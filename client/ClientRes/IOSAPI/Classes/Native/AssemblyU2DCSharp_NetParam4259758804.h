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
// System.Type
struct Type_t;
// System.Action`1<System.Object>
struct Action_1_t2491248677;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetParam
struct  NetParam_t4259758804  : public Il2CppObject
{
public:
	// System.Object NetParam::data
	Il2CppObject * ___data_0;
	// System.Type NetParam::mType
	Type_t * ___mType_1;
	// System.Action`1<System.Object> NetParam::mfun
	Action_1_t2491248677 * ___mfun_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(NetParam_t4259758804, ___data_0)); }
	inline Il2CppObject * get_data_0() const { return ___data_0; }
	inline Il2CppObject ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Il2CppObject * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_mType_1() { return static_cast<int32_t>(offsetof(NetParam_t4259758804, ___mType_1)); }
	inline Type_t * get_mType_1() const { return ___mType_1; }
	inline Type_t ** get_address_of_mType_1() { return &___mType_1; }
	inline void set_mType_1(Type_t * value)
	{
		___mType_1 = value;
		Il2CppCodeGenWriteBarrier(&___mType_1, value);
	}

	inline static int32_t get_offset_of_mfun_2() { return static_cast<int32_t>(offsetof(NetParam_t4259758804, ___mfun_2)); }
	inline Action_1_t2491248677 * get_mfun_2() const { return ___mfun_2; }
	inline Action_1_t2491248677 ** get_address_of_mfun_2() { return &___mfun_2; }
	inline void set_mfun_2(Action_1_t2491248677 * value)
	{
		___mfun_2 = value;
		Il2CppCodeGenWriteBarrier(&___mfun_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
