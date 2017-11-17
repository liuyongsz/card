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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelUIInfo
struct  ModelUIInfo_t2718472955  : public Il2CppObject
{
public:
	// System.String ModelUIInfo::mModelId
	String_t* ___mModelId_0;
	// System.String ModelUIInfo::mWeaponId
	String_t* ___mWeaponId_1;

public:
	inline static int32_t get_offset_of_mModelId_0() { return static_cast<int32_t>(offsetof(ModelUIInfo_t2718472955, ___mModelId_0)); }
	inline String_t* get_mModelId_0() const { return ___mModelId_0; }
	inline String_t** get_address_of_mModelId_0() { return &___mModelId_0; }
	inline void set_mModelId_0(String_t* value)
	{
		___mModelId_0 = value;
		Il2CppCodeGenWriteBarrier(&___mModelId_0, value);
	}

	inline static int32_t get_offset_of_mWeaponId_1() { return static_cast<int32_t>(offsetof(ModelUIInfo_t2718472955, ___mWeaponId_1)); }
	inline String_t* get_mWeaponId_1() const { return ___mWeaponId_1; }
	inline String_t** get_address_of_mWeaponId_1() { return &___mWeaponId_1; }
	inline void set_mWeaponId_1(String_t* value)
	{
		___mWeaponId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mWeaponId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
