#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetProtocal.HeroInfo
struct HeroInfo_t3657272016;

#include "AssemblyU2DCSharp_UIDragDropItem4109477862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyUIDrapItem
struct  MyUIDrapItem_t261995108  : public UIDragDropItem_t4109477862
{
public:
	// NetProtocal.HeroInfo MyUIDrapItem::heroInfo
	HeroInfo_t3657272016 * ___heroInfo_13;
	// System.Single MyUIDrapItem::distance
	float ___distance_14;
	// System.Int32 MyUIDrapItem::index
	int32_t ___index_15;

public:
	inline static int32_t get_offset_of_heroInfo_13() { return static_cast<int32_t>(offsetof(MyUIDrapItem_t261995108, ___heroInfo_13)); }
	inline HeroInfo_t3657272016 * get_heroInfo_13() const { return ___heroInfo_13; }
	inline HeroInfo_t3657272016 ** get_address_of_heroInfo_13() { return &___heroInfo_13; }
	inline void set_heroInfo_13(HeroInfo_t3657272016 * value)
	{
		___heroInfo_13 = value;
		Il2CppCodeGenWriteBarrier(&___heroInfo_13, value);
	}

	inline static int32_t get_offset_of_distance_14() { return static_cast<int32_t>(offsetof(MyUIDrapItem_t261995108, ___distance_14)); }
	inline float get_distance_14() const { return ___distance_14; }
	inline float* get_address_of_distance_14() { return &___distance_14; }
	inline void set_distance_14(float value)
	{
		___distance_14 = value;
	}

	inline static int32_t get_offset_of_index_15() { return static_cast<int32_t>(offsetof(MyUIDrapItem_t261995108, ___index_15)); }
	inline int32_t get_index_15() const { return ___index_15; }
	inline int32_t* get_address_of_index_15() { return &___index_15; }
	inline void set_index_15(int32_t value)
	{
		___index_15 = value;
	}
};

struct MyUIDrapItem_t261995108_StaticFields
{
public:
	// System.Int32 MyUIDrapItem::uuid
	int32_t ___uuid_16;
	// System.Int32 MyUIDrapItem::configId
	int32_t ___configId_17;
	// System.Int32 MyUIDrapItem::fightIndex
	int32_t ___fightIndex_18;

public:
	inline static int32_t get_offset_of_uuid_16() { return static_cast<int32_t>(offsetof(MyUIDrapItem_t261995108_StaticFields, ___uuid_16)); }
	inline int32_t get_uuid_16() const { return ___uuid_16; }
	inline int32_t* get_address_of_uuid_16() { return &___uuid_16; }
	inline void set_uuid_16(int32_t value)
	{
		___uuid_16 = value;
	}

	inline static int32_t get_offset_of_configId_17() { return static_cast<int32_t>(offsetof(MyUIDrapItem_t261995108_StaticFields, ___configId_17)); }
	inline int32_t get_configId_17() const { return ___configId_17; }
	inline int32_t* get_address_of_configId_17() { return &___configId_17; }
	inline void set_configId_17(int32_t value)
	{
		___configId_17 = value;
	}

	inline static int32_t get_offset_of_fightIndex_18() { return static_cast<int32_t>(offsetof(MyUIDrapItem_t261995108_StaticFields, ___fightIndex_18)); }
	inline int32_t get_fightIndex_18() const { return ___fightIndex_18; }
	inline int32_t* get_address_of_fightIndex_18() { return &___fightIndex_18; }
	inline void set_fightIndex_18(int32_t value)
	{
		___fightIndex_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
