#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UIPanel
struct UIPanel_t1795085332;
// UIScrollView
struct UIScrollView_t3033954930;
// BetterList`1<UnityEngine.Transform>
struct BetterList_1_t3495506700;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWrapContent
struct  UIWrapContent_t1931723019  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UIWrapContent::itemSize
	int32_t ___itemSize_2;
	// System.Boolean UIWrapContent::cullContent
	bool ___cullContent_3;
	// UnityEngine.Transform UIWrapContent::mTrans
	Transform_t3275118058 * ___mTrans_4;
	// UIPanel UIWrapContent::mPanel
	UIPanel_t1795085332 * ___mPanel_5;
	// UIScrollView UIWrapContent::mScroll
	UIScrollView_t3033954930 * ___mScroll_6;
	// System.Boolean UIWrapContent::mHorizontal
	bool ___mHorizontal_7;
	// BetterList`1<UnityEngine.Transform> UIWrapContent::mChildren
	BetterList_1_t3495506700 * ___mChildren_8;

public:
	inline static int32_t get_offset_of_itemSize_2() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___itemSize_2)); }
	inline int32_t get_itemSize_2() const { return ___itemSize_2; }
	inline int32_t* get_address_of_itemSize_2() { return &___itemSize_2; }
	inline void set_itemSize_2(int32_t value)
	{
		___itemSize_2 = value;
	}

	inline static int32_t get_offset_of_cullContent_3() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___cullContent_3)); }
	inline bool get_cullContent_3() const { return ___cullContent_3; }
	inline bool* get_address_of_cullContent_3() { return &___cullContent_3; }
	inline void set_cullContent_3(bool value)
	{
		___cullContent_3 = value;
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mTrans_4)); }
	inline Transform_t3275118058 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t3275118058 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t3275118058 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mPanel_5() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mPanel_5)); }
	inline UIPanel_t1795085332 * get_mPanel_5() const { return ___mPanel_5; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_5() { return &___mPanel_5; }
	inline void set_mPanel_5(UIPanel_t1795085332 * value)
	{
		___mPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_5, value);
	}

	inline static int32_t get_offset_of_mScroll_6() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mScroll_6)); }
	inline UIScrollView_t3033954930 * get_mScroll_6() const { return ___mScroll_6; }
	inline UIScrollView_t3033954930 ** get_address_of_mScroll_6() { return &___mScroll_6; }
	inline void set_mScroll_6(UIScrollView_t3033954930 * value)
	{
		___mScroll_6 = value;
		Il2CppCodeGenWriteBarrier(&___mScroll_6, value);
	}

	inline static int32_t get_offset_of_mHorizontal_7() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mHorizontal_7)); }
	inline bool get_mHorizontal_7() const { return ___mHorizontal_7; }
	inline bool* get_address_of_mHorizontal_7() { return &___mHorizontal_7; }
	inline void set_mHorizontal_7(bool value)
	{
		___mHorizontal_7 = value;
	}

	inline static int32_t get_offset_of_mChildren_8() { return static_cast<int32_t>(offsetof(UIWrapContent_t1931723019, ___mChildren_8)); }
	inline BetterList_1_t3495506700 * get_mChildren_8() const { return ___mChildren_8; }
	inline BetterList_1_t3495506700 ** get_address_of_mChildren_8() { return &___mChildren_8; }
	inline void set_mChildren_8(BetterList_1_t3495506700 * value)
	{
		___mChildren_8 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
