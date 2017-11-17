#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIScrollView
struct UIScrollView_t3033954930;
// UIDragScrollView/OnDragDelegate
struct OnDragDelegate_t3818566355;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragScrollView
struct  UIDragScrollView_t2942595320  : public MonoBehaviour_t1158329972
{
public:
	// UIScrollView UIDragScrollView::scrollView
	UIScrollView_t3033954930 * ___scrollView_2;
	// UIDragScrollView/OnDragDelegate UIDragScrollView::onDragDelegate
	OnDragDelegate_t3818566355 * ___onDragDelegate_3;
	// UIScrollView UIDragScrollView::draggablePanel
	UIScrollView_t3033954930 * ___draggablePanel_4;
	// UnityEngine.Transform UIDragScrollView::mTrans
	Transform_t3275118058 * ___mTrans_5;
	// UIScrollView UIDragScrollView::mScroll
	UIScrollView_t3033954930 * ___mScroll_6;
	// System.Boolean UIDragScrollView::mAutoFind
	bool ___mAutoFind_7;

public:
	inline static int32_t get_offset_of_scrollView_2() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___scrollView_2)); }
	inline UIScrollView_t3033954930 * get_scrollView_2() const { return ___scrollView_2; }
	inline UIScrollView_t3033954930 ** get_address_of_scrollView_2() { return &___scrollView_2; }
	inline void set_scrollView_2(UIScrollView_t3033954930 * value)
	{
		___scrollView_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_2, value);
	}

	inline static int32_t get_offset_of_onDragDelegate_3() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___onDragDelegate_3)); }
	inline OnDragDelegate_t3818566355 * get_onDragDelegate_3() const { return ___onDragDelegate_3; }
	inline OnDragDelegate_t3818566355 ** get_address_of_onDragDelegate_3() { return &___onDragDelegate_3; }
	inline void set_onDragDelegate_3(OnDragDelegate_t3818566355 * value)
	{
		___onDragDelegate_3 = value;
		Il2CppCodeGenWriteBarrier(&___onDragDelegate_3, value);
	}

	inline static int32_t get_offset_of_draggablePanel_4() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___draggablePanel_4)); }
	inline UIScrollView_t3033954930 * get_draggablePanel_4() const { return ___draggablePanel_4; }
	inline UIScrollView_t3033954930 ** get_address_of_draggablePanel_4() { return &___draggablePanel_4; }
	inline void set_draggablePanel_4(UIScrollView_t3033954930 * value)
	{
		___draggablePanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___draggablePanel_4, value);
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mTrans_5)); }
	inline Transform_t3275118058 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t3275118058 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t3275118058 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}

	inline static int32_t get_offset_of_mScroll_6() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mScroll_6)); }
	inline UIScrollView_t3033954930 * get_mScroll_6() const { return ___mScroll_6; }
	inline UIScrollView_t3033954930 ** get_address_of_mScroll_6() { return &___mScroll_6; }
	inline void set_mScroll_6(UIScrollView_t3033954930 * value)
	{
		___mScroll_6 = value;
		Il2CppCodeGenWriteBarrier(&___mScroll_6, value);
	}

	inline static int32_t get_offset_of_mAutoFind_7() { return static_cast<int32_t>(offsetof(UIDragScrollView_t2942595320, ___mAutoFind_7)); }
	inline bool get_mAutoFind_7() const { return ___mAutoFind_7; }
	inline bool* get_address_of_mAutoFind_7() { return &___mAutoFind_7; }
	inline void set_mAutoFind_7(bool value)
	{
		___mAutoFind_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
