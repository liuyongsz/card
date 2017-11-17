#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectScaleRotationCtr
struct  EffectScaleRotationCtr_t538096846  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EffectScaleRotationCtr::ScaleRtTween
	bool ___ScaleRtTween_2;
	// System.Single EffectScaleRotationCtr::ScaleRtDelay
	float ___ScaleRtDelay_3;
	// UnityEngine.AnimationCurve EffectScaleRotationCtr::scaleAnimCurve
	AnimationCurve_t3306541151 * ___scaleAnimCurve_4;
	// UnityEngine.AnimationCurve EffectScaleRotationCtr::rtAnimCurve
	AnimationCurve_t3306541151 * ___rtAnimCurve_5;
	// System.Single EffectScaleRotationCtr::Scale
	float ___Scale_6;
	// System.Single EffectScaleRotationCtr::Rotation
	float ___Rotation_7;
	// UnityEngine.Material EffectScaleRotationCtr::mat
	Material_t193706927 * ___mat_8;
	// System.Single EffectScaleRotationCtr::ScaleRtTime
	float ___ScaleRtTime_9;
	// System.Single EffectScaleRotationCtr::ScaleRtEndTime
	float ___ScaleRtEndTime_10;
	// System.Single EffectScaleRotationCtr::currentRotation
	float ___currentRotation_11;
	// System.Int32 EffectScaleRotationCtr::RotationAndScaleID
	int32_t ___RotationAndScaleID_12;
	// UnityEngine.Vector3 EffectScaleRotationCtr::RotationAndScale
	Vector3_t2243707580  ___RotationAndScale_13;

public:
	inline static int32_t get_offset_of_ScaleRtTween_2() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___ScaleRtTween_2)); }
	inline bool get_ScaleRtTween_2() const { return ___ScaleRtTween_2; }
	inline bool* get_address_of_ScaleRtTween_2() { return &___ScaleRtTween_2; }
	inline void set_ScaleRtTween_2(bool value)
	{
		___ScaleRtTween_2 = value;
	}

	inline static int32_t get_offset_of_ScaleRtDelay_3() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___ScaleRtDelay_3)); }
	inline float get_ScaleRtDelay_3() const { return ___ScaleRtDelay_3; }
	inline float* get_address_of_ScaleRtDelay_3() { return &___ScaleRtDelay_3; }
	inline void set_ScaleRtDelay_3(float value)
	{
		___ScaleRtDelay_3 = value;
	}

	inline static int32_t get_offset_of_scaleAnimCurve_4() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___scaleAnimCurve_4)); }
	inline AnimationCurve_t3306541151 * get_scaleAnimCurve_4() const { return ___scaleAnimCurve_4; }
	inline AnimationCurve_t3306541151 ** get_address_of_scaleAnimCurve_4() { return &___scaleAnimCurve_4; }
	inline void set_scaleAnimCurve_4(AnimationCurve_t3306541151 * value)
	{
		___scaleAnimCurve_4 = value;
		Il2CppCodeGenWriteBarrier(&___scaleAnimCurve_4, value);
	}

	inline static int32_t get_offset_of_rtAnimCurve_5() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___rtAnimCurve_5)); }
	inline AnimationCurve_t3306541151 * get_rtAnimCurve_5() const { return ___rtAnimCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_rtAnimCurve_5() { return &___rtAnimCurve_5; }
	inline void set_rtAnimCurve_5(AnimationCurve_t3306541151 * value)
	{
		___rtAnimCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___rtAnimCurve_5, value);
	}

	inline static int32_t get_offset_of_Scale_6() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___Scale_6)); }
	inline float get_Scale_6() const { return ___Scale_6; }
	inline float* get_address_of_Scale_6() { return &___Scale_6; }
	inline void set_Scale_6(float value)
	{
		___Scale_6 = value;
	}

	inline static int32_t get_offset_of_Rotation_7() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___Rotation_7)); }
	inline float get_Rotation_7() const { return ___Rotation_7; }
	inline float* get_address_of_Rotation_7() { return &___Rotation_7; }
	inline void set_Rotation_7(float value)
	{
		___Rotation_7 = value;
	}

	inline static int32_t get_offset_of_mat_8() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___mat_8)); }
	inline Material_t193706927 * get_mat_8() const { return ___mat_8; }
	inline Material_t193706927 ** get_address_of_mat_8() { return &___mat_8; }
	inline void set_mat_8(Material_t193706927 * value)
	{
		___mat_8 = value;
		Il2CppCodeGenWriteBarrier(&___mat_8, value);
	}

	inline static int32_t get_offset_of_ScaleRtTime_9() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___ScaleRtTime_9)); }
	inline float get_ScaleRtTime_9() const { return ___ScaleRtTime_9; }
	inline float* get_address_of_ScaleRtTime_9() { return &___ScaleRtTime_9; }
	inline void set_ScaleRtTime_9(float value)
	{
		___ScaleRtTime_9 = value;
	}

	inline static int32_t get_offset_of_ScaleRtEndTime_10() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___ScaleRtEndTime_10)); }
	inline float get_ScaleRtEndTime_10() const { return ___ScaleRtEndTime_10; }
	inline float* get_address_of_ScaleRtEndTime_10() { return &___ScaleRtEndTime_10; }
	inline void set_ScaleRtEndTime_10(float value)
	{
		___ScaleRtEndTime_10 = value;
	}

	inline static int32_t get_offset_of_currentRotation_11() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___currentRotation_11)); }
	inline float get_currentRotation_11() const { return ___currentRotation_11; }
	inline float* get_address_of_currentRotation_11() { return &___currentRotation_11; }
	inline void set_currentRotation_11(float value)
	{
		___currentRotation_11 = value;
	}

	inline static int32_t get_offset_of_RotationAndScaleID_12() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___RotationAndScaleID_12)); }
	inline int32_t get_RotationAndScaleID_12() const { return ___RotationAndScaleID_12; }
	inline int32_t* get_address_of_RotationAndScaleID_12() { return &___RotationAndScaleID_12; }
	inline void set_RotationAndScaleID_12(int32_t value)
	{
		___RotationAndScaleID_12 = value;
	}

	inline static int32_t get_offset_of_RotationAndScale_13() { return static_cast<int32_t>(offsetof(EffectScaleRotationCtr_t538096846, ___RotationAndScale_13)); }
	inline Vector3_t2243707580  get_RotationAndScale_13() const { return ___RotationAndScale_13; }
	inline Vector3_t2243707580 * get_address_of_RotationAndScale_13() { return &___RotationAndScale_13; }
	inline void set_RotationAndScale_13(Vector3_t2243707580  value)
	{
		___RotationAndScale_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
