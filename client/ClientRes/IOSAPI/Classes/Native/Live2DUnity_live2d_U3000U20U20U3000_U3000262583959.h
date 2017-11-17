#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.　  　
struct U3000U20U20U3000_t4203935166;
// live2d.DrawDataID[]
struct DrawDataIDU5BU5D_t3035997164;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.List`1<live2d.　  　/　 >
struct List_1_t530153955;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_LDRectF3110420638.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　  　/　
struct  U3000_t262583959  : public Il2CppObject
{
public:
	// live2d.　  　 live2d.　  　/　::owner
	U3000U20U20U3000_t4203935166 * ___owner_0;
	// live2d.DrawDataID[] live2d.　  　/　::clipIDList
	DrawDataIDU5BU5D_t3035997164* ___clipIDList_1;
	// System.Int32[] live2d.　  　/　::clippingMaskDrawIndexList
	Int32U5BU5D_t3030399641* ___clippingMaskDrawIndexList_2;
	// System.Collections.Generic.List`1<live2d.　  　/　 > live2d.　  　/　::clippedDrawContextList
	List_1_t530153955 * ___clippedDrawContextList_3;
	// System.Boolean live2d.　  　/　::isUsing
	bool ___isUsing_4;
	// System.Int32 live2d.　  　/　::layoutChannelNo
	int32_t ___layoutChannelNo_5;
	// live2d.LDRectF live2d.　  　/　::layoutBounds
	LDRectF_t3110420638  ___layoutBounds_6;
	// live2d.LDRectF live2d.　  　/　::allClippedDrawRect
	LDRectF_t3110420638  ___allClippedDrawRect_7;
	// UnityEngine.Matrix4x4 live2d.　  　/　::matrixForMask
	Matrix4x4_t2933234003  ___matrixForMask_8;
	// UnityEngine.Matrix4x4 live2d.　  　/　::matrixForDraw
	Matrix4x4_t2933234003  ___matrixForDraw_9;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___owner_0)); }
	inline U3000U20U20U3000_t4203935166 * get_owner_0() const { return ___owner_0; }
	inline U3000U20U20U3000_t4203935166 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(U3000U20U20U3000_t4203935166 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier(&___owner_0, value);
	}

	inline static int32_t get_offset_of_clipIDList_1() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___clipIDList_1)); }
	inline DrawDataIDU5BU5D_t3035997164* get_clipIDList_1() const { return ___clipIDList_1; }
	inline DrawDataIDU5BU5D_t3035997164** get_address_of_clipIDList_1() { return &___clipIDList_1; }
	inline void set_clipIDList_1(DrawDataIDU5BU5D_t3035997164* value)
	{
		___clipIDList_1 = value;
		Il2CppCodeGenWriteBarrier(&___clipIDList_1, value);
	}

	inline static int32_t get_offset_of_clippingMaskDrawIndexList_2() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___clippingMaskDrawIndexList_2)); }
	inline Int32U5BU5D_t3030399641* get_clippingMaskDrawIndexList_2() const { return ___clippingMaskDrawIndexList_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_clippingMaskDrawIndexList_2() { return &___clippingMaskDrawIndexList_2; }
	inline void set_clippingMaskDrawIndexList_2(Int32U5BU5D_t3030399641* value)
	{
		___clippingMaskDrawIndexList_2 = value;
		Il2CppCodeGenWriteBarrier(&___clippingMaskDrawIndexList_2, value);
	}

	inline static int32_t get_offset_of_clippedDrawContextList_3() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___clippedDrawContextList_3)); }
	inline List_1_t530153955 * get_clippedDrawContextList_3() const { return ___clippedDrawContextList_3; }
	inline List_1_t530153955 ** get_address_of_clippedDrawContextList_3() { return &___clippedDrawContextList_3; }
	inline void set_clippedDrawContextList_3(List_1_t530153955 * value)
	{
		___clippedDrawContextList_3 = value;
		Il2CppCodeGenWriteBarrier(&___clippedDrawContextList_3, value);
	}

	inline static int32_t get_offset_of_isUsing_4() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___isUsing_4)); }
	inline bool get_isUsing_4() const { return ___isUsing_4; }
	inline bool* get_address_of_isUsing_4() { return &___isUsing_4; }
	inline void set_isUsing_4(bool value)
	{
		___isUsing_4 = value;
	}

	inline static int32_t get_offset_of_layoutChannelNo_5() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___layoutChannelNo_5)); }
	inline int32_t get_layoutChannelNo_5() const { return ___layoutChannelNo_5; }
	inline int32_t* get_address_of_layoutChannelNo_5() { return &___layoutChannelNo_5; }
	inline void set_layoutChannelNo_5(int32_t value)
	{
		___layoutChannelNo_5 = value;
	}

	inline static int32_t get_offset_of_layoutBounds_6() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___layoutBounds_6)); }
	inline LDRectF_t3110420638  get_layoutBounds_6() const { return ___layoutBounds_6; }
	inline LDRectF_t3110420638 * get_address_of_layoutBounds_6() { return &___layoutBounds_6; }
	inline void set_layoutBounds_6(LDRectF_t3110420638  value)
	{
		___layoutBounds_6 = value;
	}

	inline static int32_t get_offset_of_allClippedDrawRect_7() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___allClippedDrawRect_7)); }
	inline LDRectF_t3110420638  get_allClippedDrawRect_7() const { return ___allClippedDrawRect_7; }
	inline LDRectF_t3110420638 * get_address_of_allClippedDrawRect_7() { return &___allClippedDrawRect_7; }
	inline void set_allClippedDrawRect_7(LDRectF_t3110420638  value)
	{
		___allClippedDrawRect_7 = value;
	}

	inline static int32_t get_offset_of_matrixForMask_8() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___matrixForMask_8)); }
	inline Matrix4x4_t2933234003  get_matrixForMask_8() const { return ___matrixForMask_8; }
	inline Matrix4x4_t2933234003 * get_address_of_matrixForMask_8() { return &___matrixForMask_8; }
	inline void set_matrixForMask_8(Matrix4x4_t2933234003  value)
	{
		___matrixForMask_8 = value;
	}

	inline static int32_t get_offset_of_matrixForDraw_9() { return static_cast<int32_t>(offsetof(U3000_t262583959, ___matrixForDraw_9)); }
	inline Matrix4x4_t2933234003  get_matrixForDraw_9() const { return ___matrixForDraw_9; }
	inline Matrix4x4_t2933234003 * get_address_of_matrixForDraw_9() { return &___matrixForDraw_9; }
	inline void set_matrixForDraw_9(Matrix4x4_t2933234003  value)
	{
		___matrixForDraw_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
