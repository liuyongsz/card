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
// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_E_SkinPart4274317620.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkinManagerLoaderItem
struct  SkinManagerLoaderItem_t4207240312  : public Il2CppObject
{
public:
	// System.String SkinManagerLoaderItem::ownerName
	String_t* ___ownerName_0;
	// System.String SkinManagerLoaderItem::skinId
	String_t* ___skinId_1;
	// E_SkinPart SkinManagerLoaderItem::part
	int32_t ___part_2;
	// UnityEngine.Transform SkinManagerLoaderItem::target
	Transform_t3275118058 * ___target_3;
	// UnityEngine.Transform SkinManagerLoaderItem::owner
	Transform_t3275118058 * ___owner_4;

public:
	inline static int32_t get_offset_of_ownerName_0() { return static_cast<int32_t>(offsetof(SkinManagerLoaderItem_t4207240312, ___ownerName_0)); }
	inline String_t* get_ownerName_0() const { return ___ownerName_0; }
	inline String_t** get_address_of_ownerName_0() { return &___ownerName_0; }
	inline void set_ownerName_0(String_t* value)
	{
		___ownerName_0 = value;
		Il2CppCodeGenWriteBarrier(&___ownerName_0, value);
	}

	inline static int32_t get_offset_of_skinId_1() { return static_cast<int32_t>(offsetof(SkinManagerLoaderItem_t4207240312, ___skinId_1)); }
	inline String_t* get_skinId_1() const { return ___skinId_1; }
	inline String_t** get_address_of_skinId_1() { return &___skinId_1; }
	inline void set_skinId_1(String_t* value)
	{
		___skinId_1 = value;
		Il2CppCodeGenWriteBarrier(&___skinId_1, value);
	}

	inline static int32_t get_offset_of_part_2() { return static_cast<int32_t>(offsetof(SkinManagerLoaderItem_t4207240312, ___part_2)); }
	inline int32_t get_part_2() const { return ___part_2; }
	inline int32_t* get_address_of_part_2() { return &___part_2; }
	inline void set_part_2(int32_t value)
	{
		___part_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(SkinManagerLoaderItem_t4207240312, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_owner_4() { return static_cast<int32_t>(offsetof(SkinManagerLoaderItem_t4207240312, ___owner_4)); }
	inline Transform_t3275118058 * get_owner_4() const { return ___owner_4; }
	inline Transform_t3275118058 ** get_address_of_owner_4() { return &___owner_4; }
	inline void set_owner_4(Transform_t3275118058 * value)
	{
		___owner_4 = value;
		Il2CppCodeGenWriteBarrier(&___owner_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
