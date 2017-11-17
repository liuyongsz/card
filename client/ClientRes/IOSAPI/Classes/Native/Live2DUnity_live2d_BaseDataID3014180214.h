#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.BaseDataID
struct BaseDataID_t3014180214;
// System.Collections.Generic.Dictionary`2<System.String,live2d.BaseDataID>
struct Dictionary_2_t633992180;
// System.Object
struct Il2CppObject;

#include "Live2DUnity_live2d_ID3877373557.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.BaseDataID
struct  BaseDataID_t3014180214  : public ID_t3877373557
{
public:

public:
};

struct BaseDataID_t3014180214_StaticFields
{
public:
	// live2d.BaseDataID live2d.BaseDataID::dstBaseId
	BaseDataID_t3014180214 * ___dstBaseId_1;
	// System.Collections.Generic.Dictionary`2<System.String,live2d.BaseDataID> live2d.BaseDataID::id_hashmap
	Dictionary_2_t633992180 * ___id_hashmap_2;
	// System.Object live2d.BaseDataID::syncObject
	Il2CppObject * ___syncObject_3;

public:
	inline static int32_t get_offset_of_dstBaseId_1() { return static_cast<int32_t>(offsetof(BaseDataID_t3014180214_StaticFields, ___dstBaseId_1)); }
	inline BaseDataID_t3014180214 * get_dstBaseId_1() const { return ___dstBaseId_1; }
	inline BaseDataID_t3014180214 ** get_address_of_dstBaseId_1() { return &___dstBaseId_1; }
	inline void set_dstBaseId_1(BaseDataID_t3014180214 * value)
	{
		___dstBaseId_1 = value;
		Il2CppCodeGenWriteBarrier(&___dstBaseId_1, value);
	}

	inline static int32_t get_offset_of_id_hashmap_2() { return static_cast<int32_t>(offsetof(BaseDataID_t3014180214_StaticFields, ___id_hashmap_2)); }
	inline Dictionary_2_t633992180 * get_id_hashmap_2() const { return ___id_hashmap_2; }
	inline Dictionary_2_t633992180 ** get_address_of_id_hashmap_2() { return &___id_hashmap_2; }
	inline void set_id_hashmap_2(Dictionary_2_t633992180 * value)
	{
		___id_hashmap_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_hashmap_2, value);
	}

	inline static int32_t get_offset_of_syncObject_3() { return static_cast<int32_t>(offsetof(BaseDataID_t3014180214_StaticFields, ___syncObject_3)); }
	inline Il2CppObject * get_syncObject_3() const { return ___syncObject_3; }
	inline Il2CppObject ** get_address_of_syncObject_3() { return &___syncObject_3; }
	inline void set_syncObject_3(Il2CppObject * value)
	{
		___syncObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___syncObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
