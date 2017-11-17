#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIRoot>
struct List_1_t4054032726;
// UIRoot
struct UIRoot_t389944298;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIRoot_Scaling2807791908.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIRoot
struct  UIRoot_t389944298  : public MonoBehaviour_t1158329972
{
public:
	// UIRoot/Scaling UIRoot::scalingStyle
	int32_t ___scalingStyle_3;
	// System.Int32 UIRoot::manualHeight
	int32_t ___manualHeight_4;
	// System.Int32 UIRoot::minimumHeight
	int32_t ___minimumHeight_5;
	// System.Int32 UIRoot::maximumHeight
	int32_t ___maximumHeight_6;
	// System.Boolean UIRoot::adjustByDPI
	bool ___adjustByDPI_7;
	// System.Boolean UIRoot::shrinkPortraitUI
	bool ___shrinkPortraitUI_8;
	// UnityEngine.Transform UIRoot::mTrans
	Transform_t3275118058 * ___mTrans_10;

public:
	inline static int32_t get_offset_of_scalingStyle_3() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___scalingStyle_3)); }
	inline int32_t get_scalingStyle_3() const { return ___scalingStyle_3; }
	inline int32_t* get_address_of_scalingStyle_3() { return &___scalingStyle_3; }
	inline void set_scalingStyle_3(int32_t value)
	{
		___scalingStyle_3 = value;
	}

	inline static int32_t get_offset_of_manualHeight_4() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___manualHeight_4)); }
	inline int32_t get_manualHeight_4() const { return ___manualHeight_4; }
	inline int32_t* get_address_of_manualHeight_4() { return &___manualHeight_4; }
	inline void set_manualHeight_4(int32_t value)
	{
		___manualHeight_4 = value;
	}

	inline static int32_t get_offset_of_minimumHeight_5() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___minimumHeight_5)); }
	inline int32_t get_minimumHeight_5() const { return ___minimumHeight_5; }
	inline int32_t* get_address_of_minimumHeight_5() { return &___minimumHeight_5; }
	inline void set_minimumHeight_5(int32_t value)
	{
		___minimumHeight_5 = value;
	}

	inline static int32_t get_offset_of_maximumHeight_6() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___maximumHeight_6)); }
	inline int32_t get_maximumHeight_6() const { return ___maximumHeight_6; }
	inline int32_t* get_address_of_maximumHeight_6() { return &___maximumHeight_6; }
	inline void set_maximumHeight_6(int32_t value)
	{
		___maximumHeight_6 = value;
	}

	inline static int32_t get_offset_of_adjustByDPI_7() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___adjustByDPI_7)); }
	inline bool get_adjustByDPI_7() const { return ___adjustByDPI_7; }
	inline bool* get_address_of_adjustByDPI_7() { return &___adjustByDPI_7; }
	inline void set_adjustByDPI_7(bool value)
	{
		___adjustByDPI_7 = value;
	}

	inline static int32_t get_offset_of_shrinkPortraitUI_8() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___shrinkPortraitUI_8)); }
	inline bool get_shrinkPortraitUI_8() const { return ___shrinkPortraitUI_8; }
	inline bool* get_address_of_shrinkPortraitUI_8() { return &___shrinkPortraitUI_8; }
	inline void set_shrinkPortraitUI_8(bool value)
	{
		___shrinkPortraitUI_8 = value;
	}

	inline static int32_t get_offset_of_mTrans_10() { return static_cast<int32_t>(offsetof(UIRoot_t389944298, ___mTrans_10)); }
	inline Transform_t3275118058 * get_mTrans_10() const { return ___mTrans_10; }
	inline Transform_t3275118058 ** get_address_of_mTrans_10() { return &___mTrans_10; }
	inline void set_mTrans_10(Transform_t3275118058 * value)
	{
		___mTrans_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_10, value);
	}
};

struct UIRoot_t389944298_StaticFields
{
public:
	// System.Collections.Generic.List`1<UIRoot> UIRoot::list
	List_1_t4054032726 * ___list_2;
	// UIRoot UIRoot::sRoot
	UIRoot_t389944298 * ___sRoot_9;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIRoot_t389944298_StaticFields, ___list_2)); }
	inline List_1_t4054032726 * get_list_2() const { return ___list_2; }
	inline List_1_t4054032726 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(List_1_t4054032726 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_sRoot_9() { return static_cast<int32_t>(offsetof(UIRoot_t389944298_StaticFields, ___sRoot_9)); }
	inline UIRoot_t389944298 * get_sRoot_9() const { return ___sRoot_9; }
	inline UIRoot_t389944298 ** get_address_of_sRoot_9() { return &___sRoot_9; }
	inline void set_sRoot_9(UIRoot_t389944298 * value)
	{
		___sRoot_9 = value;
		Il2CppCodeGenWriteBarrier(&___sRoot_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
