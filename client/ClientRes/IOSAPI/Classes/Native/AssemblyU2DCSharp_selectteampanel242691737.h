#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGrid
struct UIGrid_t2420180906;
// UISprite
struct UISprite_t603616735;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selectteampanel
struct  selectteampanel_t242691737  : public BasePanel_t542715433
{
public:
	// UIGrid selectteampanel::teamGrid
	UIGrid_t2420180906 * ___teamGrid_2;
	// UISprite selectteampanel::backBtn
	UISprite_t603616735 * ___backBtn_3;

public:
	inline static int32_t get_offset_of_teamGrid_2() { return static_cast<int32_t>(offsetof(selectteampanel_t242691737, ___teamGrid_2)); }
	inline UIGrid_t2420180906 * get_teamGrid_2() const { return ___teamGrid_2; }
	inline UIGrid_t2420180906 ** get_address_of_teamGrid_2() { return &___teamGrid_2; }
	inline void set_teamGrid_2(UIGrid_t2420180906 * value)
	{
		___teamGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___teamGrid_2, value);
	}

	inline static int32_t get_offset_of_backBtn_3() { return static_cast<int32_t>(offsetof(selectteampanel_t242691737, ___backBtn_3)); }
	inline UISprite_t603616735 * get_backBtn_3() const { return ___backBtn_3; }
	inline UISprite_t603616735 ** get_address_of_backBtn_3() { return &___backBtn_3; }
	inline void set_backBtn_3(UISprite_t603616735 * value)
	{
		___backBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___backBtn_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
