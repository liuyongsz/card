#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AngleScrollView
struct AngleScrollView_t1318527455;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AngleDragScrollView
struct  AngleDragScrollView_t3142004387  : public MonoBehaviour_t1158329972
{
public:
	// AngleScrollView AngleDragScrollView::scrollView
	AngleScrollView_t1318527455 * ___scrollView_2;
	// AngleScrollView AngleDragScrollView::draggablePanel
	AngleScrollView_t1318527455 * ___draggablePanel_3;
	// UnityEngine.Transform AngleDragScrollView::mTrans
	Transform_t3275118058 * ___mTrans_4;
	// AngleScrollView AngleDragScrollView::mScroll
	AngleScrollView_t1318527455 * ___mScroll_5;
	// System.Boolean AngleDragScrollView::mAutoFind
	bool ___mAutoFind_6;

public:
	inline static int32_t get_offset_of_scrollView_2() { return static_cast<int32_t>(offsetof(AngleDragScrollView_t3142004387, ___scrollView_2)); }
	inline AngleScrollView_t1318527455 * get_scrollView_2() const { return ___scrollView_2; }
	inline AngleScrollView_t1318527455 ** get_address_of_scrollView_2() { return &___scrollView_2; }
	inline void set_scrollView_2(AngleScrollView_t1318527455 * value)
	{
		___scrollView_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_2, value);
	}

	inline static int32_t get_offset_of_draggablePanel_3() { return static_cast<int32_t>(offsetof(AngleDragScrollView_t3142004387, ___draggablePanel_3)); }
	inline AngleScrollView_t1318527455 * get_draggablePanel_3() const { return ___draggablePanel_3; }
	inline AngleScrollView_t1318527455 ** get_address_of_draggablePanel_3() { return &___draggablePanel_3; }
	inline void set_draggablePanel_3(AngleScrollView_t1318527455 * value)
	{
		___draggablePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___draggablePanel_3, value);
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(AngleDragScrollView_t3142004387, ___mTrans_4)); }
	inline Transform_t3275118058 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t3275118058 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t3275118058 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mScroll_5() { return static_cast<int32_t>(offsetof(AngleDragScrollView_t3142004387, ___mScroll_5)); }
	inline AngleScrollView_t1318527455 * get_mScroll_5() const { return ___mScroll_5; }
	inline AngleScrollView_t1318527455 ** get_address_of_mScroll_5() { return &___mScroll_5; }
	inline void set_mScroll_5(AngleScrollView_t1318527455 * value)
	{
		___mScroll_5 = value;
		Il2CppCodeGenWriteBarrier(&___mScroll_5, value);
	}

	inline static int32_t get_offset_of_mAutoFind_6() { return static_cast<int32_t>(offsetof(AngleDragScrollView_t3142004387, ___mAutoFind_6)); }
	inline bool get_mAutoFind_6() const { return ___mAutoFind_6; }
	inline bool* get_address_of_mAutoFind_6() { return &___mAutoFind_6; }
	inline void set_mAutoFind_6(bool value)
	{
		___mAutoFind_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
