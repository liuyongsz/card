#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,live2d.DrawDataID>
struct Dictionary_2_t3358858927;
// System.Object
struct Il2CppObject;

#include "Live2DUnity_live2d_ID3877373557.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.DrawDataID
struct  DrawDataID_t1444079665  : public ID_t3877373557
{
public:

public:
};

struct DrawDataID_t1444079665_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,live2d.DrawDataID> live2d.DrawDataID::id_hashmap
	Dictionary_2_t3358858927 * ___id_hashmap_1;
	// System.Object live2d.DrawDataID::syncObject
	Il2CppObject * ___syncObject_2;

public:
	inline static int32_t get_offset_of_id_hashmap_1() { return static_cast<int32_t>(offsetof(DrawDataID_t1444079665_StaticFields, ___id_hashmap_1)); }
	inline Dictionary_2_t3358858927 * get_id_hashmap_1() const { return ___id_hashmap_1; }
	inline Dictionary_2_t3358858927 ** get_address_of_id_hashmap_1() { return &___id_hashmap_1; }
	inline void set_id_hashmap_1(Dictionary_2_t3358858927 * value)
	{
		___id_hashmap_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_hashmap_1, value);
	}

	inline static int32_t get_offset_of_syncObject_2() { return static_cast<int32_t>(offsetof(DrawDataID_t1444079665_StaticFields, ___syncObject_2)); }
	inline Il2CppObject * get_syncObject_2() const { return ___syncObject_2; }
	inline Il2CppObject ** get_address_of_syncObject_2() { return &___syncObject_2; }
	inline void set_syncObject_2(Il2CppObject * value)
	{
		___syncObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___syncObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
