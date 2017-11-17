#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TD_Card
struct TD_Card_t45040677;

#include "AssemblyU2DCSharp_UIDragDropItem4109477862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyUIDrapCardItem
struct  MyUIDrapCardItem_t2351490182  : public UIDragDropItem_t4109477862
{
public:
	// TD_Card MyUIDrapCardItem::cardInfo
	TD_Card_t45040677 * ___cardInfo_13;
	// System.Single MyUIDrapCardItem::distance
	float ___distance_14;
	// System.Int32 MyUIDrapCardItem::index
	int32_t ___index_15;

public:
	inline static int32_t get_offset_of_cardInfo_13() { return static_cast<int32_t>(offsetof(MyUIDrapCardItem_t2351490182, ___cardInfo_13)); }
	inline TD_Card_t45040677 * get_cardInfo_13() const { return ___cardInfo_13; }
	inline TD_Card_t45040677 ** get_address_of_cardInfo_13() { return &___cardInfo_13; }
	inline void set_cardInfo_13(TD_Card_t45040677 * value)
	{
		___cardInfo_13 = value;
		Il2CppCodeGenWriteBarrier(&___cardInfo_13, value);
	}

	inline static int32_t get_offset_of_distance_14() { return static_cast<int32_t>(offsetof(MyUIDrapCardItem_t2351490182, ___distance_14)); }
	inline float get_distance_14() const { return ___distance_14; }
	inline float* get_address_of_distance_14() { return &___distance_14; }
	inline void set_distance_14(float value)
	{
		___distance_14 = value;
	}

	inline static int32_t get_offset_of_index_15() { return static_cast<int32_t>(offsetof(MyUIDrapCardItem_t2351490182, ___index_15)); }
	inline int32_t get_index_15() const { return ___index_15; }
	inline int32_t* get_address_of_index_15() { return &___index_15; }
	inline void set_index_15(int32_t value)
	{
		___index_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
