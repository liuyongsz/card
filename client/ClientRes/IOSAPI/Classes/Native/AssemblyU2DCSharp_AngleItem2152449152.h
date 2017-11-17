#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPanel
struct UIPanel_t1795085332;
// AngleScrollView
struct AngleScrollView_t1318527455;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AngleItem
struct  AngleItem_t2152449152  : public MonoBehaviour_t1158329972
{
public:
	// System.Single AngleItem::MAXDISTANCE
	float ___MAXDISTANCE_2;
	// UIPanel AngleItem::panel
	UIPanel_t1795085332 * ___panel_3;
	// AngleScrollView AngleItem::scrollView
	AngleScrollView_t1318527455 * ___scrollView_4;
	// System.Object AngleItem::data
	Il2CppObject * ___data_5;

public:
	inline static int32_t get_offset_of_MAXDISTANCE_2() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152, ___MAXDISTANCE_2)); }
	inline float get_MAXDISTANCE_2() const { return ___MAXDISTANCE_2; }
	inline float* get_address_of_MAXDISTANCE_2() { return &___MAXDISTANCE_2; }
	inline void set_MAXDISTANCE_2(float value)
	{
		___MAXDISTANCE_2 = value;
	}

	inline static int32_t get_offset_of_panel_3() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152, ___panel_3)); }
	inline UIPanel_t1795085332 * get_panel_3() const { return ___panel_3; }
	inline UIPanel_t1795085332 ** get_address_of_panel_3() { return &___panel_3; }
	inline void set_panel_3(UIPanel_t1795085332 * value)
	{
		___panel_3 = value;
		Il2CppCodeGenWriteBarrier(&___panel_3, value);
	}

	inline static int32_t get_offset_of_scrollView_4() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152, ___scrollView_4)); }
	inline AngleScrollView_t1318527455 * get_scrollView_4() const { return ___scrollView_4; }
	inline AngleScrollView_t1318527455 ** get_address_of_scrollView_4() { return &___scrollView_4; }
	inline void set_scrollView_4(AngleScrollView_t1318527455 * value)
	{
		___scrollView_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_4, value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152, ___data_5)); }
	inline Il2CppObject * get_data_5() const { return ___data_5; }
	inline Il2CppObject ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(Il2CppObject * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier(&___data_5, value);
	}
};

struct AngleItem_t2152449152_StaticFields
{
public:
	// System.Int32 AngleItem::MaxDepth
	int32_t ___MaxDepth_6;
	// System.Object AngleItem::SelectSecretItem
	Il2CppObject * ___SelectSecretItem_7;
	// System.Object AngleItem::TempSecretItem
	Il2CppObject * ___TempSecretItem_8;

public:
	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152_StaticFields, ___MaxDepth_6)); }
	inline int32_t get_MaxDepth_6() const { return ___MaxDepth_6; }
	inline int32_t* get_address_of_MaxDepth_6() { return &___MaxDepth_6; }
	inline void set_MaxDepth_6(int32_t value)
	{
		___MaxDepth_6 = value;
	}

	inline static int32_t get_offset_of_SelectSecretItem_7() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152_StaticFields, ___SelectSecretItem_7)); }
	inline Il2CppObject * get_SelectSecretItem_7() const { return ___SelectSecretItem_7; }
	inline Il2CppObject ** get_address_of_SelectSecretItem_7() { return &___SelectSecretItem_7; }
	inline void set_SelectSecretItem_7(Il2CppObject * value)
	{
		___SelectSecretItem_7 = value;
		Il2CppCodeGenWriteBarrier(&___SelectSecretItem_7, value);
	}

	inline static int32_t get_offset_of_TempSecretItem_8() { return static_cast<int32_t>(offsetof(AngleItem_t2152449152_StaticFields, ___TempSecretItem_8)); }
	inline Il2CppObject * get_TempSecretItem_8() const { return ___TempSecretItem_8; }
	inline Il2CppObject ** get_address_of_TempSecretItem_8() { return &___TempSecretItem_8; }
	inline void set_TempSecretItem_8(Il2CppObject * value)
	{
		___TempSecretItem_8 = value;
		Il2CppCodeGenWriteBarrier(&___TempSecretItem_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
