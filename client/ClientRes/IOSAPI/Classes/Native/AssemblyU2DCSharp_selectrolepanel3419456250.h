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
// UIInput
struct UIInput_t860674234;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selectrolepanel
struct  selectrolepanel_t3419456250  : public BasePanel_t542715433
{
public:
	// UIGrid selectrolepanel::heroGrid
	UIGrid_t2420180906 * ___heroGrid_2;
	// UISprite selectrolepanel::backBtn
	UISprite_t603616735 * ___backBtn_3;
	// UISprite selectrolepanel::createBtn
	UISprite_t603616735 * ___createBtn_4;
	// UIInput selectrolepanel::inputBtn
	UIInput_t860674234 * ___inputBtn_5;

public:
	inline static int32_t get_offset_of_heroGrid_2() { return static_cast<int32_t>(offsetof(selectrolepanel_t3419456250, ___heroGrid_2)); }
	inline UIGrid_t2420180906 * get_heroGrid_2() const { return ___heroGrid_2; }
	inline UIGrid_t2420180906 ** get_address_of_heroGrid_2() { return &___heroGrid_2; }
	inline void set_heroGrid_2(UIGrid_t2420180906 * value)
	{
		___heroGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___heroGrid_2, value);
	}

	inline static int32_t get_offset_of_backBtn_3() { return static_cast<int32_t>(offsetof(selectrolepanel_t3419456250, ___backBtn_3)); }
	inline UISprite_t603616735 * get_backBtn_3() const { return ___backBtn_3; }
	inline UISprite_t603616735 ** get_address_of_backBtn_3() { return &___backBtn_3; }
	inline void set_backBtn_3(UISprite_t603616735 * value)
	{
		___backBtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___backBtn_3, value);
	}

	inline static int32_t get_offset_of_createBtn_4() { return static_cast<int32_t>(offsetof(selectrolepanel_t3419456250, ___createBtn_4)); }
	inline UISprite_t603616735 * get_createBtn_4() const { return ___createBtn_4; }
	inline UISprite_t603616735 ** get_address_of_createBtn_4() { return &___createBtn_4; }
	inline void set_createBtn_4(UISprite_t603616735 * value)
	{
		___createBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___createBtn_4, value);
	}

	inline static int32_t get_offset_of_inputBtn_5() { return static_cast<int32_t>(offsetof(selectrolepanel_t3419456250, ___inputBtn_5)); }
	inline UIInput_t860674234 * get_inputBtn_5() const { return ___inputBtn_5; }
	inline UIInput_t860674234 ** get_address_of_inputBtn_5() { return &___inputBtn_5; }
	inline void set_inputBtn_5(UIInput_t860674234 * value)
	{
		___inputBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___inputBtn_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
