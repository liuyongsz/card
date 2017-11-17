#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// live2d.　   　
struct U3000U20U20U20U3000_t3962388926;
// System.Collections.Generic.List`1<live2d.　  　/　>
struct List_1_t3926672387;
// live2d.　　  
struct U3000U3000U20U20_t4204329470;
// System.Collections.Generic.List`1<live2d.　  　/ >
struct List_1_t3926660131;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"
#include "Live2DUnity_live2d_LDPointF102293494.h"
#include "Live2DUnity_live2d_LDRectF3110420638.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　  　
struct  U3000U20U20U3000_t4203935166  : public Il2CppObject
{
public:
	// UnityEngine.RenderTexture live2d.　  　::maskRenderTexture
	RenderTexture_t2666733923 * ___maskRenderTexture_3;
	// System.Collections.Generic.List`1<live2d.　  　/　> live2d.　  　::clipContextList
	List_1_t3926672387 * ___clipContextList_11;
	// live2d.　　   live2d.　  　::drawParamClip
	U3000U3000U20U20_t4204329470 * ___drawParamClip_12;

public:
	inline static int32_t get_offset_of_maskRenderTexture_3() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166, ___maskRenderTexture_3)); }
	inline RenderTexture_t2666733923 * get_maskRenderTexture_3() const { return ___maskRenderTexture_3; }
	inline RenderTexture_t2666733923 ** get_address_of_maskRenderTexture_3() { return &___maskRenderTexture_3; }
	inline void set_maskRenderTexture_3(RenderTexture_t2666733923 * value)
	{
		___maskRenderTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___maskRenderTexture_3, value);
	}

	inline static int32_t get_offset_of_clipContextList_11() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166, ___clipContextList_11)); }
	inline List_1_t3926672387 * get_clipContextList_11() const { return ___clipContextList_11; }
	inline List_1_t3926672387 ** get_address_of_clipContextList_11() { return &___clipContextList_11; }
	inline void set_clipContextList_11(List_1_t3926672387 * value)
	{
		___clipContextList_11 = value;
		Il2CppCodeGenWriteBarrier(&___clipContextList_11, value);
	}

	inline static int32_t get_offset_of_drawParamClip_12() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166, ___drawParamClip_12)); }
	inline U3000U3000U20U20_t4204329470 * get_drawParamClip_12() const { return ___drawParamClip_12; }
	inline U3000U3000U20U20_t4204329470 ** get_address_of_drawParamClip_12() { return &___drawParamClip_12; }
	inline void set_drawParamClip_12(U3000U3000U20U20_t4204329470 * value)
	{
		___drawParamClip_12 = value;
		Il2CppCodeGenWriteBarrier(&___drawParamClip_12, value);
	}
};

struct U3000U20U20U3000_t4203935166_StaticFields
{
public:
	// live2d.　   　 live2d.　  　::tmpModelToViewMatrix
	U3000U20U20U20U3000_t3962388926 * ___tmpModelToViewMatrix_4;
	// live2d.　   　 live2d.　  　::tmpMatrix2
	U3000U20U20U20U3000_t3962388926 * ___tmpMatrix2_5;
	// live2d.　   　 live2d.　  　::tmpMatrixForMask
	U3000U20U20U20U3000_t3962388926 * ___tmpMatrixForMask_6;
	// live2d.　   　 live2d.　  　::tmpMatrixForDraw
	U3000U20U20U20U3000_t3962388926 * ___tmpMatrixForDraw_7;
	// live2d.LDPointF live2d.　  　::tmpPt
	LDPointF_t102293494  ___tmpPt_8;
	// live2d.LDRectF live2d.　  　::tmpBoundsOnView
	LDRectF_t3110420638  ___tmpBoundsOnView_9;
	// live2d.LDRectF live2d.　  　::tmpBoundsOnModel
	LDRectF_t3110420638  ___tmpBoundsOnModel_10;
	// System.Collections.Generic.List`1<live2d.　  　/ > live2d.　  　::maskTextures
	List_1_t3926660131 * ___maskTextures_13;
	// System.Int32 live2d.　  　::lastFrameCount
	int32_t ___lastFrameCount_14;
	// System.Int32 live2d.　  　::totalTexCount
	int32_t ___totalTexCount_15;
	// System.Boolean live2d.　  　::firstError_clipInNotUpdate
	bool ___firstError_clipInNotUpdate_17;
	// System.Boolean live2d.　  　::firstError_isProIfUnity4
	bool ___firstError_isProIfUnity4_18;
	// UnityEngine.Color[] live2d.　  　::CHANNEL_COLORS
	ColorU5BU5D_t672350442* ___CHANNEL_COLORS_19;

public:
	inline static int32_t get_offset_of_tmpModelToViewMatrix_4() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpModelToViewMatrix_4)); }
	inline U3000U20U20U20U3000_t3962388926 * get_tmpModelToViewMatrix_4() const { return ___tmpModelToViewMatrix_4; }
	inline U3000U20U20U20U3000_t3962388926 ** get_address_of_tmpModelToViewMatrix_4() { return &___tmpModelToViewMatrix_4; }
	inline void set_tmpModelToViewMatrix_4(U3000U20U20U20U3000_t3962388926 * value)
	{
		___tmpModelToViewMatrix_4 = value;
		Il2CppCodeGenWriteBarrier(&___tmpModelToViewMatrix_4, value);
	}

	inline static int32_t get_offset_of_tmpMatrix2_5() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpMatrix2_5)); }
	inline U3000U20U20U20U3000_t3962388926 * get_tmpMatrix2_5() const { return ___tmpMatrix2_5; }
	inline U3000U20U20U20U3000_t3962388926 ** get_address_of_tmpMatrix2_5() { return &___tmpMatrix2_5; }
	inline void set_tmpMatrix2_5(U3000U20U20U20U3000_t3962388926 * value)
	{
		___tmpMatrix2_5 = value;
		Il2CppCodeGenWriteBarrier(&___tmpMatrix2_5, value);
	}

	inline static int32_t get_offset_of_tmpMatrixForMask_6() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpMatrixForMask_6)); }
	inline U3000U20U20U20U3000_t3962388926 * get_tmpMatrixForMask_6() const { return ___tmpMatrixForMask_6; }
	inline U3000U20U20U20U3000_t3962388926 ** get_address_of_tmpMatrixForMask_6() { return &___tmpMatrixForMask_6; }
	inline void set_tmpMatrixForMask_6(U3000U20U20U20U3000_t3962388926 * value)
	{
		___tmpMatrixForMask_6 = value;
		Il2CppCodeGenWriteBarrier(&___tmpMatrixForMask_6, value);
	}

	inline static int32_t get_offset_of_tmpMatrixForDraw_7() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpMatrixForDraw_7)); }
	inline U3000U20U20U20U3000_t3962388926 * get_tmpMatrixForDraw_7() const { return ___tmpMatrixForDraw_7; }
	inline U3000U20U20U20U3000_t3962388926 ** get_address_of_tmpMatrixForDraw_7() { return &___tmpMatrixForDraw_7; }
	inline void set_tmpMatrixForDraw_7(U3000U20U20U20U3000_t3962388926 * value)
	{
		___tmpMatrixForDraw_7 = value;
		Il2CppCodeGenWriteBarrier(&___tmpMatrixForDraw_7, value);
	}

	inline static int32_t get_offset_of_tmpPt_8() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpPt_8)); }
	inline LDPointF_t102293494  get_tmpPt_8() const { return ___tmpPt_8; }
	inline LDPointF_t102293494 * get_address_of_tmpPt_8() { return &___tmpPt_8; }
	inline void set_tmpPt_8(LDPointF_t102293494  value)
	{
		___tmpPt_8 = value;
	}

	inline static int32_t get_offset_of_tmpBoundsOnView_9() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpBoundsOnView_9)); }
	inline LDRectF_t3110420638  get_tmpBoundsOnView_9() const { return ___tmpBoundsOnView_9; }
	inline LDRectF_t3110420638 * get_address_of_tmpBoundsOnView_9() { return &___tmpBoundsOnView_9; }
	inline void set_tmpBoundsOnView_9(LDRectF_t3110420638  value)
	{
		___tmpBoundsOnView_9 = value;
	}

	inline static int32_t get_offset_of_tmpBoundsOnModel_10() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___tmpBoundsOnModel_10)); }
	inline LDRectF_t3110420638  get_tmpBoundsOnModel_10() const { return ___tmpBoundsOnModel_10; }
	inline LDRectF_t3110420638 * get_address_of_tmpBoundsOnModel_10() { return &___tmpBoundsOnModel_10; }
	inline void set_tmpBoundsOnModel_10(LDRectF_t3110420638  value)
	{
		___tmpBoundsOnModel_10 = value;
	}

	inline static int32_t get_offset_of_maskTextures_13() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___maskTextures_13)); }
	inline List_1_t3926660131 * get_maskTextures_13() const { return ___maskTextures_13; }
	inline List_1_t3926660131 ** get_address_of_maskTextures_13() { return &___maskTextures_13; }
	inline void set_maskTextures_13(List_1_t3926660131 * value)
	{
		___maskTextures_13 = value;
		Il2CppCodeGenWriteBarrier(&___maskTextures_13, value);
	}

	inline static int32_t get_offset_of_lastFrameCount_14() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___lastFrameCount_14)); }
	inline int32_t get_lastFrameCount_14() const { return ___lastFrameCount_14; }
	inline int32_t* get_address_of_lastFrameCount_14() { return &___lastFrameCount_14; }
	inline void set_lastFrameCount_14(int32_t value)
	{
		___lastFrameCount_14 = value;
	}

	inline static int32_t get_offset_of_totalTexCount_15() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___totalTexCount_15)); }
	inline int32_t get_totalTexCount_15() const { return ___totalTexCount_15; }
	inline int32_t* get_address_of_totalTexCount_15() { return &___totalTexCount_15; }
	inline void set_totalTexCount_15(int32_t value)
	{
		___totalTexCount_15 = value;
	}

	inline static int32_t get_offset_of_firstError_clipInNotUpdate_17() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___firstError_clipInNotUpdate_17)); }
	inline bool get_firstError_clipInNotUpdate_17() const { return ___firstError_clipInNotUpdate_17; }
	inline bool* get_address_of_firstError_clipInNotUpdate_17() { return &___firstError_clipInNotUpdate_17; }
	inline void set_firstError_clipInNotUpdate_17(bool value)
	{
		___firstError_clipInNotUpdate_17 = value;
	}

	inline static int32_t get_offset_of_firstError_isProIfUnity4_18() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___firstError_isProIfUnity4_18)); }
	inline bool get_firstError_isProIfUnity4_18() const { return ___firstError_isProIfUnity4_18; }
	inline bool* get_address_of_firstError_isProIfUnity4_18() { return &___firstError_isProIfUnity4_18; }
	inline void set_firstError_isProIfUnity4_18(bool value)
	{
		___firstError_isProIfUnity4_18 = value;
	}

	inline static int32_t get_offset_of_CHANNEL_COLORS_19() { return static_cast<int32_t>(offsetof(U3000U20U20U3000_t4203935166_StaticFields, ___CHANNEL_COLORS_19)); }
	inline ColorU5BU5D_t672350442* get_CHANNEL_COLORS_19() const { return ___CHANNEL_COLORS_19; }
	inline ColorU5BU5D_t672350442** get_address_of_CHANNEL_COLORS_19() { return &___CHANNEL_COLORS_19; }
	inline void set_CHANNEL_COLORS_19(ColorU5BU5D_t672350442* value)
	{
		___CHANNEL_COLORS_19 = value;
		Il2CppCodeGenWriteBarrier(&___CHANNEL_COLORS_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
