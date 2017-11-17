#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGridItem
struct UIGridItem_t3654720203;
// UIGrid
struct UIGrid_t2420180906;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGridSubItem
struct  UIGridSubItem_t3788884335  : public MonoBehaviour_t1158329972
{
public:
	// UIGridItem UIGridSubItem::oEventReciever
	UIGridItem_t3654720203 * ___oEventReciever_2;
	// UIGrid UIGridSubItem::mGrid
	UIGrid_t2420180906 * ___mGrid_3;

public:
	inline static int32_t get_offset_of_oEventReciever_2() { return static_cast<int32_t>(offsetof(UIGridSubItem_t3788884335, ___oEventReciever_2)); }
	inline UIGridItem_t3654720203 * get_oEventReciever_2() const { return ___oEventReciever_2; }
	inline UIGridItem_t3654720203 ** get_address_of_oEventReciever_2() { return &___oEventReciever_2; }
	inline void set_oEventReciever_2(UIGridItem_t3654720203 * value)
	{
		___oEventReciever_2 = value;
		Il2CppCodeGenWriteBarrier(&___oEventReciever_2, value);
	}

	inline static int32_t get_offset_of_mGrid_3() { return static_cast<int32_t>(offsetof(UIGridSubItem_t3788884335, ___mGrid_3)); }
	inline UIGrid_t2420180906 * get_mGrid_3() const { return ___mGrid_3; }
	inline UIGrid_t2420180906 ** get_address_of_mGrid_3() { return &___mGrid_3; }
	inline void set_mGrid_3(UIGrid_t2420180906 * value)
	{
		___mGrid_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGrid_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
