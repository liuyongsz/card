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
// DG.Tweening.Tweener
struct Tweener_t760404022;
// TD_SkillPrefabInfo
struct TD_SkillPrefabInfo_t1298292572;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenLayerUtil
struct  TweenLayerUtil_t1100282932  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 TweenLayerUtil::mOldScale
	Vector3_t2243707580  ___mOldScale_0;
	// UnityEngine.Vector3 TweenLayerUtil::mOldPosition
	Vector3_t2243707580  ___mOldPosition_1;
	// UnityEngine.Transform TweenLayerUtil::Target
	Transform_t3275118058 * ___Target_2;
	// System.Single TweenLayerUtil::AdaptScale
	float ___AdaptScale_3;
	// UnityEngine.Vector3 TweenLayerUtil::scaleB
	Vector3_t2243707580  ___scaleB_4;
	// UnityEngine.Vector3 TweenLayerUtil::tweenB
	Vector3_t2243707580  ___tweenB_5;
	// DG.Tweening.Tweener TweenLayerUtil::mTweenMove
	Tweener_t760404022 * ___mTweenMove_6;
	// DG.Tweening.Tweener TweenLayerUtil::mTweenScale
	Tweener_t760404022 * ___mTweenScale_7;
	// System.Boolean TweenLayerUtil::mBTweenScaleComplete
	bool ___mBTweenScaleComplete_8;
	// System.Boolean TweenLayerUtil::mBTweenPositionComplete
	bool ___mBTweenPositionComplete_9;
	// UnityEngine.Vector3 TweenLayerUtil::EndScale
	Vector3_t2243707580  ___EndScale_10;
	// DG.Tweening.Tweener TweenLayerUtil::mTweenBMove
	Tweener_t760404022 * ___mTweenBMove_11;
	// DG.Tweening.Tweener TweenLayerUtil::mTweenBScale
	Tweener_t760404022 * ___mTweenBScale_12;
	// System.Boolean TweenLayerUtil::mBBackTweenScaleComplete
	bool ___mBBackTweenScaleComplete_13;
	// System.Boolean TweenLayerUtil::mBBackTweenPositionComplete
	bool ___mBBackTweenPositionComplete_14;
	// System.Int32 TweenLayerUtil::FaceX
	int32_t ___FaceX_15;
	// TD_SkillPrefabInfo TweenLayerUtil::mCfgItem
	TD_SkillPrefabInfo_t1298292572 * ___mCfgItem_16;
	// System.Boolean TweenLayerUtil::TweenOutIsComplete
	bool ___TweenOutIsComplete_17;
	// System.Boolean TweenLayerUtil::TweenBackIsComplete
	bool ___TweenBackIsComplete_18;
	// UnityEngine.Events.UnityAction TweenLayerUtil::OnTweenOutComplete
	UnityAction_t4025899511 * ___OnTweenOutComplete_19;
	// UnityEngine.Events.UnityAction TweenLayerUtil::OnTweenBackComplete
	UnityAction_t4025899511 * ___OnTweenBackComplete_20;
	// System.Boolean TweenLayerUtil::IsMirror
	bool ___IsMirror_21;

public:
	inline static int32_t get_offset_of_mOldScale_0() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mOldScale_0)); }
	inline Vector3_t2243707580  get_mOldScale_0() const { return ___mOldScale_0; }
	inline Vector3_t2243707580 * get_address_of_mOldScale_0() { return &___mOldScale_0; }
	inline void set_mOldScale_0(Vector3_t2243707580  value)
	{
		___mOldScale_0 = value;
	}

	inline static int32_t get_offset_of_mOldPosition_1() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mOldPosition_1)); }
	inline Vector3_t2243707580  get_mOldPosition_1() const { return ___mOldPosition_1; }
	inline Vector3_t2243707580 * get_address_of_mOldPosition_1() { return &___mOldPosition_1; }
	inline void set_mOldPosition_1(Vector3_t2243707580  value)
	{
		___mOldPosition_1 = value;
	}

	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___Target_2)); }
	inline Transform_t3275118058 * get_Target_2() const { return ___Target_2; }
	inline Transform_t3275118058 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(Transform_t3275118058 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_AdaptScale_3() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___AdaptScale_3)); }
	inline float get_AdaptScale_3() const { return ___AdaptScale_3; }
	inline float* get_address_of_AdaptScale_3() { return &___AdaptScale_3; }
	inline void set_AdaptScale_3(float value)
	{
		___AdaptScale_3 = value;
	}

	inline static int32_t get_offset_of_scaleB_4() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___scaleB_4)); }
	inline Vector3_t2243707580  get_scaleB_4() const { return ___scaleB_4; }
	inline Vector3_t2243707580 * get_address_of_scaleB_4() { return &___scaleB_4; }
	inline void set_scaleB_4(Vector3_t2243707580  value)
	{
		___scaleB_4 = value;
	}

	inline static int32_t get_offset_of_tweenB_5() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___tweenB_5)); }
	inline Vector3_t2243707580  get_tweenB_5() const { return ___tweenB_5; }
	inline Vector3_t2243707580 * get_address_of_tweenB_5() { return &___tweenB_5; }
	inline void set_tweenB_5(Vector3_t2243707580  value)
	{
		___tweenB_5 = value;
	}

	inline static int32_t get_offset_of_mTweenMove_6() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mTweenMove_6)); }
	inline Tweener_t760404022 * get_mTweenMove_6() const { return ___mTweenMove_6; }
	inline Tweener_t760404022 ** get_address_of_mTweenMove_6() { return &___mTweenMove_6; }
	inline void set_mTweenMove_6(Tweener_t760404022 * value)
	{
		___mTweenMove_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTweenMove_6, value);
	}

	inline static int32_t get_offset_of_mTweenScale_7() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mTweenScale_7)); }
	inline Tweener_t760404022 * get_mTweenScale_7() const { return ___mTweenScale_7; }
	inline Tweener_t760404022 ** get_address_of_mTweenScale_7() { return &___mTweenScale_7; }
	inline void set_mTweenScale_7(Tweener_t760404022 * value)
	{
		___mTweenScale_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTweenScale_7, value);
	}

	inline static int32_t get_offset_of_mBTweenScaleComplete_8() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mBTweenScaleComplete_8)); }
	inline bool get_mBTweenScaleComplete_8() const { return ___mBTweenScaleComplete_8; }
	inline bool* get_address_of_mBTweenScaleComplete_8() { return &___mBTweenScaleComplete_8; }
	inline void set_mBTweenScaleComplete_8(bool value)
	{
		___mBTweenScaleComplete_8 = value;
	}

	inline static int32_t get_offset_of_mBTweenPositionComplete_9() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mBTweenPositionComplete_9)); }
	inline bool get_mBTweenPositionComplete_9() const { return ___mBTweenPositionComplete_9; }
	inline bool* get_address_of_mBTweenPositionComplete_9() { return &___mBTweenPositionComplete_9; }
	inline void set_mBTweenPositionComplete_9(bool value)
	{
		___mBTweenPositionComplete_9 = value;
	}

	inline static int32_t get_offset_of_EndScale_10() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___EndScale_10)); }
	inline Vector3_t2243707580  get_EndScale_10() const { return ___EndScale_10; }
	inline Vector3_t2243707580 * get_address_of_EndScale_10() { return &___EndScale_10; }
	inline void set_EndScale_10(Vector3_t2243707580  value)
	{
		___EndScale_10 = value;
	}

	inline static int32_t get_offset_of_mTweenBMove_11() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mTweenBMove_11)); }
	inline Tweener_t760404022 * get_mTweenBMove_11() const { return ___mTweenBMove_11; }
	inline Tweener_t760404022 ** get_address_of_mTweenBMove_11() { return &___mTweenBMove_11; }
	inline void set_mTweenBMove_11(Tweener_t760404022 * value)
	{
		___mTweenBMove_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTweenBMove_11, value);
	}

	inline static int32_t get_offset_of_mTweenBScale_12() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mTweenBScale_12)); }
	inline Tweener_t760404022 * get_mTweenBScale_12() const { return ___mTweenBScale_12; }
	inline Tweener_t760404022 ** get_address_of_mTweenBScale_12() { return &___mTweenBScale_12; }
	inline void set_mTweenBScale_12(Tweener_t760404022 * value)
	{
		___mTweenBScale_12 = value;
		Il2CppCodeGenWriteBarrier(&___mTweenBScale_12, value);
	}

	inline static int32_t get_offset_of_mBBackTweenScaleComplete_13() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mBBackTweenScaleComplete_13)); }
	inline bool get_mBBackTweenScaleComplete_13() const { return ___mBBackTweenScaleComplete_13; }
	inline bool* get_address_of_mBBackTweenScaleComplete_13() { return &___mBBackTweenScaleComplete_13; }
	inline void set_mBBackTweenScaleComplete_13(bool value)
	{
		___mBBackTweenScaleComplete_13 = value;
	}

	inline static int32_t get_offset_of_mBBackTweenPositionComplete_14() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mBBackTweenPositionComplete_14)); }
	inline bool get_mBBackTweenPositionComplete_14() const { return ___mBBackTweenPositionComplete_14; }
	inline bool* get_address_of_mBBackTweenPositionComplete_14() { return &___mBBackTweenPositionComplete_14; }
	inline void set_mBBackTweenPositionComplete_14(bool value)
	{
		___mBBackTweenPositionComplete_14 = value;
	}

	inline static int32_t get_offset_of_FaceX_15() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___FaceX_15)); }
	inline int32_t get_FaceX_15() const { return ___FaceX_15; }
	inline int32_t* get_address_of_FaceX_15() { return &___FaceX_15; }
	inline void set_FaceX_15(int32_t value)
	{
		___FaceX_15 = value;
	}

	inline static int32_t get_offset_of_mCfgItem_16() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___mCfgItem_16)); }
	inline TD_SkillPrefabInfo_t1298292572 * get_mCfgItem_16() const { return ___mCfgItem_16; }
	inline TD_SkillPrefabInfo_t1298292572 ** get_address_of_mCfgItem_16() { return &___mCfgItem_16; }
	inline void set_mCfgItem_16(TD_SkillPrefabInfo_t1298292572 * value)
	{
		___mCfgItem_16 = value;
		Il2CppCodeGenWriteBarrier(&___mCfgItem_16, value);
	}

	inline static int32_t get_offset_of_TweenOutIsComplete_17() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___TweenOutIsComplete_17)); }
	inline bool get_TweenOutIsComplete_17() const { return ___TweenOutIsComplete_17; }
	inline bool* get_address_of_TweenOutIsComplete_17() { return &___TweenOutIsComplete_17; }
	inline void set_TweenOutIsComplete_17(bool value)
	{
		___TweenOutIsComplete_17 = value;
	}

	inline static int32_t get_offset_of_TweenBackIsComplete_18() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___TweenBackIsComplete_18)); }
	inline bool get_TweenBackIsComplete_18() const { return ___TweenBackIsComplete_18; }
	inline bool* get_address_of_TweenBackIsComplete_18() { return &___TweenBackIsComplete_18; }
	inline void set_TweenBackIsComplete_18(bool value)
	{
		___TweenBackIsComplete_18 = value;
	}

	inline static int32_t get_offset_of_OnTweenOutComplete_19() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___OnTweenOutComplete_19)); }
	inline UnityAction_t4025899511 * get_OnTweenOutComplete_19() const { return ___OnTweenOutComplete_19; }
	inline UnityAction_t4025899511 ** get_address_of_OnTweenOutComplete_19() { return &___OnTweenOutComplete_19; }
	inline void set_OnTweenOutComplete_19(UnityAction_t4025899511 * value)
	{
		___OnTweenOutComplete_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnTweenOutComplete_19, value);
	}

	inline static int32_t get_offset_of_OnTweenBackComplete_20() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___OnTweenBackComplete_20)); }
	inline UnityAction_t4025899511 * get_OnTweenBackComplete_20() const { return ___OnTweenBackComplete_20; }
	inline UnityAction_t4025899511 ** get_address_of_OnTweenBackComplete_20() { return &___OnTweenBackComplete_20; }
	inline void set_OnTweenBackComplete_20(UnityAction_t4025899511 * value)
	{
		___OnTweenBackComplete_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnTweenBackComplete_20, value);
	}

	inline static int32_t get_offset_of_IsMirror_21() { return static_cast<int32_t>(offsetof(TweenLayerUtil_t1100282932, ___IsMirror_21)); }
	inline bool get_IsMirror_21() const { return ___IsMirror_21; }
	inline bool* get_address_of_IsMirror_21() { return &___IsMirror_21; }
	inline void set_IsMirror_21(bool value)
	{
		___IsMirror_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
