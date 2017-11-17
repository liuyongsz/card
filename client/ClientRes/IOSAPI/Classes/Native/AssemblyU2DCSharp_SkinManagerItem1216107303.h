#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// SkinManagerLoaderItem
struct SkinManagerLoaderItem_t4207240312;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkinManagerItem
struct  SkinManagerItem_t1216107303  : public Il2CppObject
{
public:
	// UnityEngine.Transform SkinManagerItem::owner
	Transform_t3275118058 * ___owner_0;
	// UnityEngine.Transform SkinManagerItem::skin
	Transform_t3275118058 * ___skin_1;
	// UnityEngine.Transform SkinManagerItem::cloth
	Transform_t3275118058 * ___cloth_2;
	// UnityEngine.Transform SkinManagerItem::hair
	Transform_t3275118058 * ___hair_3;
	// SkinManagerLoaderItem SkinManagerItem::loaderItem
	SkinManagerLoaderItem_t4207240312 * ___loaderItem_4;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(SkinManagerItem_t1216107303, ___owner_0)); }
	inline Transform_t3275118058 * get_owner_0() const { return ___owner_0; }
	inline Transform_t3275118058 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(Transform_t3275118058 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier(&___owner_0, value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(SkinManagerItem_t1216107303, ___skin_1)); }
	inline Transform_t3275118058 * get_skin_1() const { return ___skin_1; }
	inline Transform_t3275118058 ** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(Transform_t3275118058 * value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier(&___skin_1, value);
	}

	inline static int32_t get_offset_of_cloth_2() { return static_cast<int32_t>(offsetof(SkinManagerItem_t1216107303, ___cloth_2)); }
	inline Transform_t3275118058 * get_cloth_2() const { return ___cloth_2; }
	inline Transform_t3275118058 ** get_address_of_cloth_2() { return &___cloth_2; }
	inline void set_cloth_2(Transform_t3275118058 * value)
	{
		___cloth_2 = value;
		Il2CppCodeGenWriteBarrier(&___cloth_2, value);
	}

	inline static int32_t get_offset_of_hair_3() { return static_cast<int32_t>(offsetof(SkinManagerItem_t1216107303, ___hair_3)); }
	inline Transform_t3275118058 * get_hair_3() const { return ___hair_3; }
	inline Transform_t3275118058 ** get_address_of_hair_3() { return &___hair_3; }
	inline void set_hair_3(Transform_t3275118058 * value)
	{
		___hair_3 = value;
		Il2CppCodeGenWriteBarrier(&___hair_3, value);
	}

	inline static int32_t get_offset_of_loaderItem_4() { return static_cast<int32_t>(offsetof(SkinManagerItem_t1216107303, ___loaderItem_4)); }
	inline SkinManagerLoaderItem_t4207240312 * get_loaderItem_4() const { return ___loaderItem_4; }
	inline SkinManagerLoaderItem_t4207240312 ** get_address_of_loaderItem_4() { return &___loaderItem_4; }
	inline void set_loaderItem_4(SkinManagerLoaderItem_t4207240312 * value)
	{
		___loaderItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___loaderItem_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
