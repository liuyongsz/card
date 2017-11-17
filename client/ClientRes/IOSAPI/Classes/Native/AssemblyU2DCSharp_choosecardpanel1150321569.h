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
// UnityEngine.Transform
struct Transform_t3275118058;
// UISprite
struct UISprite_t603616735;
// UIScrollView
struct UIScrollView_t3033954930;

#include "AssemblyU2DCSharp_BasePanel542715433.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// choosecardpanel
struct  choosecardpanel_t1150321569  : public BasePanel_t542715433
{
public:
	// UIGrid choosecardpanel::cardGrid
	UIGrid_t2420180906 * ___cardGrid_2;
	// UnityEngine.Transform choosecardpanel::CardItem
	Transform_t3275118058 * ___CardItem_3;
	// UISprite choosecardpanel::sureBtn
	UISprite_t603616735 * ___sureBtn_4;
	// UISprite choosecardpanel::replaceBtn
	UISprite_t603616735 * ___replaceBtn_5;
	// UIScrollView choosecardpanel::ScrollView
	UIScrollView_t3033954930 * ___ScrollView_6;

public:
	inline static int32_t get_offset_of_cardGrid_2() { return static_cast<int32_t>(offsetof(choosecardpanel_t1150321569, ___cardGrid_2)); }
	inline UIGrid_t2420180906 * get_cardGrid_2() const { return ___cardGrid_2; }
	inline UIGrid_t2420180906 ** get_address_of_cardGrid_2() { return &___cardGrid_2; }
	inline void set_cardGrid_2(UIGrid_t2420180906 * value)
	{
		___cardGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___cardGrid_2, value);
	}

	inline static int32_t get_offset_of_CardItem_3() { return static_cast<int32_t>(offsetof(choosecardpanel_t1150321569, ___CardItem_3)); }
	inline Transform_t3275118058 * get_CardItem_3() const { return ___CardItem_3; }
	inline Transform_t3275118058 ** get_address_of_CardItem_3() { return &___CardItem_3; }
	inline void set_CardItem_3(Transform_t3275118058 * value)
	{
		___CardItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___CardItem_3, value);
	}

	inline static int32_t get_offset_of_sureBtn_4() { return static_cast<int32_t>(offsetof(choosecardpanel_t1150321569, ___sureBtn_4)); }
	inline UISprite_t603616735 * get_sureBtn_4() const { return ___sureBtn_4; }
	inline UISprite_t603616735 ** get_address_of_sureBtn_4() { return &___sureBtn_4; }
	inline void set_sureBtn_4(UISprite_t603616735 * value)
	{
		___sureBtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___sureBtn_4, value);
	}

	inline static int32_t get_offset_of_replaceBtn_5() { return static_cast<int32_t>(offsetof(choosecardpanel_t1150321569, ___replaceBtn_5)); }
	inline UISprite_t603616735 * get_replaceBtn_5() const { return ___replaceBtn_5; }
	inline UISprite_t603616735 ** get_address_of_replaceBtn_5() { return &___replaceBtn_5; }
	inline void set_replaceBtn_5(UISprite_t603616735 * value)
	{
		___replaceBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___replaceBtn_5, value);
	}

	inline static int32_t get_offset_of_ScrollView_6() { return static_cast<int32_t>(offsetof(choosecardpanel_t1150321569, ___ScrollView_6)); }
	inline UIScrollView_t3033954930 * get_ScrollView_6() const { return ___ScrollView_6; }
	inline UIScrollView_t3033954930 ** get_address_of_ScrollView_6() { return &___ScrollView_6; }
	inline void set_ScrollView_6(UIScrollView_t3033954930 * value)
	{
		___ScrollView_6 = value;
		Il2CppCodeGenWriteBarrier(&___ScrollView_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
