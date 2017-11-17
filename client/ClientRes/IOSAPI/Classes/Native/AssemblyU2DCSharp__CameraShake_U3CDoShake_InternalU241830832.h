#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// _CameraShake/ShakeState
struct ShakeState_t1303782894;
// System.Collections.Generic.List`1<_CameraShake/ShakeState>
struct List_1_t672904026;
// System.Action
struct Action_t3226471752;
// System.Object
struct Il2CppObject;
// _CameraShake
struct _CameraShake_t3456764876;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// _CameraShake/<DoShake_Internal>c__Iterator16
struct  U3CDoShake_InternalU3Ec__Iterator16_t241830832  : public Il2CppObject
{
public:
	// UnityEngine.Camera _CameraShake/<DoShake_Internal>c__Iterator16::cam
	Camera_t189460977 * ___cam_0;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::seed
	Vector3_t2243707580  ___seed_1;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::<mod1>__0
	int32_t ___U3Cmod1U3E__0_2;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::<mod2>__1
	int32_t ___U3Cmod2U3E__1_3;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::<mod3>__2
	int32_t ___U3Cmod3U3E__2_4;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<pixelWidth>__3
	float ___U3CpixelWidthU3E__3_5;
	// UnityEngine.Transform _CameraShake/<DoShake_Internal>c__Iterator16::<cachedTransform>__4
	Transform_t3275118058 * ___U3CcachedTransformU3E__4_6;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::<camOffset>__5
	Vector3_t2243707580  ___U3CcamOffsetU3E__5_7;
	// UnityEngine.Quaternion _CameraShake/<DoShake_Internal>c__Iterator16::<camRot>__6
	Quaternion_t4030073918  ___U3CcamRotU3E__6_8;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::numberOfShakes
	int32_t ___numberOfShakes_9;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::<currentShakes>__7
	int32_t ___U3CcurrentShakesU3E__7_10;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::distance
	float ___distance_11;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<shakeDistance>__8
	float ___U3CshakeDistanceU3E__8_12;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<rotationStrength>__9
	float ___U3CrotationStrengthU3E__9_13;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<startTime>__10
	float ___U3CstartTimeU3E__10_14;
	// System.Boolean _CameraShake/<DoShake_Internal>c__Iterator16::multiplyByTimeScale
	bool ___multiplyByTimeScale_15;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<scale>__11
	float ___U3CscaleU3E__11_16;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::guiShakeModifier
	float ___guiShakeModifier_17;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<pixelScale>__12
	float ___U3CpixelScaleU3E__12_18;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::<start1>__13
	Vector3_t2243707580  ___U3Cstart1U3E__13_19;
	// UnityEngine.Quaternion _CameraShake/<DoShake_Internal>c__Iterator16::<startR>__14
	Quaternion_t4030073918  ___U3CstartRU3E__14_20;
	// UnityEngine.Vector2 _CameraShake/<DoShake_Internal>c__Iterator16::<start2>__15
	Vector2_t2243707579  ___U3Cstart2U3E__15_21;
	// UnityEngine.Vector2 _CameraShake/<DoShake_Internal>c__Iterator16::<vTemp>__16
	Vector2_t2243707579  ___U3CvTempU3E__16_22;
	// _CameraShake/ShakeState _CameraShake/<DoShake_Internal>c__Iterator16::<state>__17
	ShakeState_t1303782894 * ___U3CstateU3E__17_23;
	// System.Collections.Generic.List`1<_CameraShake/ShakeState> _CameraShake/<DoShake_Internal>c__Iterator16::<stateList>__18
	List_1_t672904026 * ___U3CstateListU3E__18_24;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::rotationAmount
	Vector3_t2243707580  ___rotationAmount_25;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::shakeAmount
	Vector3_t2243707580  ___shakeAmount_26;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::speed
	float ___speed_27;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<timer>__19
	float ___U3CtimerU3E__19_28;
	// UnityEngine.Vector2 _CameraShake/<DoShake_Internal>c__Iterator16::<vTemp2>__20
	Vector2_t2243707579  ___U3CvTemp2U3E__20_29;
	// UnityEngine.Matrix4x4 _CameraShake/<DoShake_Internal>c__Iterator16::<m>__21
	Matrix4x4_t2933234003  ___U3CmU3E__21_30;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::<avg>__22
	Vector3_t2243707580  ___U3CavgU3E__22_31;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::decay
	float ___decay_32;
	// System.Action _CameraShake/<DoShake_Internal>c__Iterator16::callback
	Action_t3226471752 * ___callback_33;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::$PC
	int32_t ___U24PC_34;
	// System.Object _CameraShake/<DoShake_Internal>c__Iterator16::$current
	Il2CppObject * ___U24current_35;
	// UnityEngine.Camera _CameraShake/<DoShake_Internal>c__Iterator16::<$>cam
	Camera_t189460977 * ___U3CU24U3Ecam_36;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::<$>seed
	Vector3_t2243707580  ___U3CU24U3Eseed_37;
	// System.Int32 _CameraShake/<DoShake_Internal>c__Iterator16::<$>numberOfShakes
	int32_t ___U3CU24U3EnumberOfShakes_38;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<$>distance
	float ___U3CU24U3Edistance_39;
	// System.Boolean _CameraShake/<DoShake_Internal>c__Iterator16::<$>multiplyByTimeScale
	bool ___U3CU24U3EmultiplyByTimeScale_40;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<$>guiShakeModifier
	float ___U3CU24U3EguiShakeModifier_41;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::<$>rotationAmount
	Vector3_t2243707580  ___U3CU24U3ErotationAmount_42;
	// UnityEngine.Vector3 _CameraShake/<DoShake_Internal>c__Iterator16::<$>shakeAmount
	Vector3_t2243707580  ___U3CU24U3EshakeAmount_43;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<$>speed
	float ___U3CU24U3Espeed_44;
	// System.Single _CameraShake/<DoShake_Internal>c__Iterator16::<$>decay
	float ___U3CU24U3Edecay_45;
	// System.Action _CameraShake/<DoShake_Internal>c__Iterator16::<$>callback
	Action_t3226471752 * ___U3CU24U3Ecallback_46;
	// _CameraShake _CameraShake/<DoShake_Internal>c__Iterator16::<>f__this
	_CameraShake_t3456764876 * ___U3CU3Ef__this_47;

public:
	inline static int32_t get_offset_of_cam_0() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___cam_0)); }
	inline Camera_t189460977 * get_cam_0() const { return ___cam_0; }
	inline Camera_t189460977 ** get_address_of_cam_0() { return &___cam_0; }
	inline void set_cam_0(Camera_t189460977 * value)
	{
		___cam_0 = value;
		Il2CppCodeGenWriteBarrier(&___cam_0, value);
	}

	inline static int32_t get_offset_of_seed_1() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___seed_1)); }
	inline Vector3_t2243707580  get_seed_1() const { return ___seed_1; }
	inline Vector3_t2243707580 * get_address_of_seed_1() { return &___seed_1; }
	inline void set_seed_1(Vector3_t2243707580  value)
	{
		___seed_1 = value;
	}

	inline static int32_t get_offset_of_U3Cmod1U3E__0_2() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3Cmod1U3E__0_2)); }
	inline int32_t get_U3Cmod1U3E__0_2() const { return ___U3Cmod1U3E__0_2; }
	inline int32_t* get_address_of_U3Cmod1U3E__0_2() { return &___U3Cmod1U3E__0_2; }
	inline void set_U3Cmod1U3E__0_2(int32_t value)
	{
		___U3Cmod1U3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3Cmod2U3E__1_3() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3Cmod2U3E__1_3)); }
	inline int32_t get_U3Cmod2U3E__1_3() const { return ___U3Cmod2U3E__1_3; }
	inline int32_t* get_address_of_U3Cmod2U3E__1_3() { return &___U3Cmod2U3E__1_3; }
	inline void set_U3Cmod2U3E__1_3(int32_t value)
	{
		___U3Cmod2U3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3Cmod3U3E__2_4() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3Cmod3U3E__2_4)); }
	inline int32_t get_U3Cmod3U3E__2_4() const { return ___U3Cmod3U3E__2_4; }
	inline int32_t* get_address_of_U3Cmod3U3E__2_4() { return &___U3Cmod3U3E__2_4; }
	inline void set_U3Cmod3U3E__2_4(int32_t value)
	{
		___U3Cmod3U3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CpixelWidthU3E__3_5() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CpixelWidthU3E__3_5)); }
	inline float get_U3CpixelWidthU3E__3_5() const { return ___U3CpixelWidthU3E__3_5; }
	inline float* get_address_of_U3CpixelWidthU3E__3_5() { return &___U3CpixelWidthU3E__3_5; }
	inline void set_U3CpixelWidthU3E__3_5(float value)
	{
		___U3CpixelWidthU3E__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CcachedTransformU3E__4_6() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CcachedTransformU3E__4_6)); }
	inline Transform_t3275118058 * get_U3CcachedTransformU3E__4_6() const { return ___U3CcachedTransformU3E__4_6; }
	inline Transform_t3275118058 ** get_address_of_U3CcachedTransformU3E__4_6() { return &___U3CcachedTransformU3E__4_6; }
	inline void set_U3CcachedTransformU3E__4_6(Transform_t3275118058 * value)
	{
		___U3CcachedTransformU3E__4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcachedTransformU3E__4_6, value);
	}

	inline static int32_t get_offset_of_U3CcamOffsetU3E__5_7() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CcamOffsetU3E__5_7)); }
	inline Vector3_t2243707580  get_U3CcamOffsetU3E__5_7() const { return ___U3CcamOffsetU3E__5_7; }
	inline Vector3_t2243707580 * get_address_of_U3CcamOffsetU3E__5_7() { return &___U3CcamOffsetU3E__5_7; }
	inline void set_U3CcamOffsetU3E__5_7(Vector3_t2243707580  value)
	{
		___U3CcamOffsetU3E__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CcamRotU3E__6_8() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CcamRotU3E__6_8)); }
	inline Quaternion_t4030073918  get_U3CcamRotU3E__6_8() const { return ___U3CcamRotU3E__6_8; }
	inline Quaternion_t4030073918 * get_address_of_U3CcamRotU3E__6_8() { return &___U3CcamRotU3E__6_8; }
	inline void set_U3CcamRotU3E__6_8(Quaternion_t4030073918  value)
	{
		___U3CcamRotU3E__6_8 = value;
	}

	inline static int32_t get_offset_of_numberOfShakes_9() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___numberOfShakes_9)); }
	inline int32_t get_numberOfShakes_9() const { return ___numberOfShakes_9; }
	inline int32_t* get_address_of_numberOfShakes_9() { return &___numberOfShakes_9; }
	inline void set_numberOfShakes_9(int32_t value)
	{
		___numberOfShakes_9 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentShakesU3E__7_10() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CcurrentShakesU3E__7_10)); }
	inline int32_t get_U3CcurrentShakesU3E__7_10() const { return ___U3CcurrentShakesU3E__7_10; }
	inline int32_t* get_address_of_U3CcurrentShakesU3E__7_10() { return &___U3CcurrentShakesU3E__7_10; }
	inline void set_U3CcurrentShakesU3E__7_10(int32_t value)
	{
		___U3CcurrentShakesU3E__7_10 = value;
	}

	inline static int32_t get_offset_of_distance_11() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___distance_11)); }
	inline float get_distance_11() const { return ___distance_11; }
	inline float* get_address_of_distance_11() { return &___distance_11; }
	inline void set_distance_11(float value)
	{
		___distance_11 = value;
	}

	inline static int32_t get_offset_of_U3CshakeDistanceU3E__8_12() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CshakeDistanceU3E__8_12)); }
	inline float get_U3CshakeDistanceU3E__8_12() const { return ___U3CshakeDistanceU3E__8_12; }
	inline float* get_address_of_U3CshakeDistanceU3E__8_12() { return &___U3CshakeDistanceU3E__8_12; }
	inline void set_U3CshakeDistanceU3E__8_12(float value)
	{
		___U3CshakeDistanceU3E__8_12 = value;
	}

	inline static int32_t get_offset_of_U3CrotationStrengthU3E__9_13() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CrotationStrengthU3E__9_13)); }
	inline float get_U3CrotationStrengthU3E__9_13() const { return ___U3CrotationStrengthU3E__9_13; }
	inline float* get_address_of_U3CrotationStrengthU3E__9_13() { return &___U3CrotationStrengthU3E__9_13; }
	inline void set_U3CrotationStrengthU3E__9_13(float value)
	{
		___U3CrotationStrengthU3E__9_13 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E__10_14() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CstartTimeU3E__10_14)); }
	inline float get_U3CstartTimeU3E__10_14() const { return ___U3CstartTimeU3E__10_14; }
	inline float* get_address_of_U3CstartTimeU3E__10_14() { return &___U3CstartTimeU3E__10_14; }
	inline void set_U3CstartTimeU3E__10_14(float value)
	{
		___U3CstartTimeU3E__10_14 = value;
	}

	inline static int32_t get_offset_of_multiplyByTimeScale_15() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___multiplyByTimeScale_15)); }
	inline bool get_multiplyByTimeScale_15() const { return ___multiplyByTimeScale_15; }
	inline bool* get_address_of_multiplyByTimeScale_15() { return &___multiplyByTimeScale_15; }
	inline void set_multiplyByTimeScale_15(bool value)
	{
		___multiplyByTimeScale_15 = value;
	}

	inline static int32_t get_offset_of_U3CscaleU3E__11_16() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CscaleU3E__11_16)); }
	inline float get_U3CscaleU3E__11_16() const { return ___U3CscaleU3E__11_16; }
	inline float* get_address_of_U3CscaleU3E__11_16() { return &___U3CscaleU3E__11_16; }
	inline void set_U3CscaleU3E__11_16(float value)
	{
		___U3CscaleU3E__11_16 = value;
	}

	inline static int32_t get_offset_of_guiShakeModifier_17() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___guiShakeModifier_17)); }
	inline float get_guiShakeModifier_17() const { return ___guiShakeModifier_17; }
	inline float* get_address_of_guiShakeModifier_17() { return &___guiShakeModifier_17; }
	inline void set_guiShakeModifier_17(float value)
	{
		___guiShakeModifier_17 = value;
	}

	inline static int32_t get_offset_of_U3CpixelScaleU3E__12_18() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CpixelScaleU3E__12_18)); }
	inline float get_U3CpixelScaleU3E__12_18() const { return ___U3CpixelScaleU3E__12_18; }
	inline float* get_address_of_U3CpixelScaleU3E__12_18() { return &___U3CpixelScaleU3E__12_18; }
	inline void set_U3CpixelScaleU3E__12_18(float value)
	{
		___U3CpixelScaleU3E__12_18 = value;
	}

	inline static int32_t get_offset_of_U3Cstart1U3E__13_19() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3Cstart1U3E__13_19)); }
	inline Vector3_t2243707580  get_U3Cstart1U3E__13_19() const { return ___U3Cstart1U3E__13_19; }
	inline Vector3_t2243707580 * get_address_of_U3Cstart1U3E__13_19() { return &___U3Cstart1U3E__13_19; }
	inline void set_U3Cstart1U3E__13_19(Vector3_t2243707580  value)
	{
		___U3Cstart1U3E__13_19 = value;
	}

	inline static int32_t get_offset_of_U3CstartRU3E__14_20() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CstartRU3E__14_20)); }
	inline Quaternion_t4030073918  get_U3CstartRU3E__14_20() const { return ___U3CstartRU3E__14_20; }
	inline Quaternion_t4030073918 * get_address_of_U3CstartRU3E__14_20() { return &___U3CstartRU3E__14_20; }
	inline void set_U3CstartRU3E__14_20(Quaternion_t4030073918  value)
	{
		___U3CstartRU3E__14_20 = value;
	}

	inline static int32_t get_offset_of_U3Cstart2U3E__15_21() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3Cstart2U3E__15_21)); }
	inline Vector2_t2243707579  get_U3Cstart2U3E__15_21() const { return ___U3Cstart2U3E__15_21; }
	inline Vector2_t2243707579 * get_address_of_U3Cstart2U3E__15_21() { return &___U3Cstart2U3E__15_21; }
	inline void set_U3Cstart2U3E__15_21(Vector2_t2243707579  value)
	{
		___U3Cstart2U3E__15_21 = value;
	}

	inline static int32_t get_offset_of_U3CvTempU3E__16_22() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CvTempU3E__16_22)); }
	inline Vector2_t2243707579  get_U3CvTempU3E__16_22() const { return ___U3CvTempU3E__16_22; }
	inline Vector2_t2243707579 * get_address_of_U3CvTempU3E__16_22() { return &___U3CvTempU3E__16_22; }
	inline void set_U3CvTempU3E__16_22(Vector2_t2243707579  value)
	{
		___U3CvTempU3E__16_22 = value;
	}

	inline static int32_t get_offset_of_U3CstateU3E__17_23() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CstateU3E__17_23)); }
	inline ShakeState_t1303782894 * get_U3CstateU3E__17_23() const { return ___U3CstateU3E__17_23; }
	inline ShakeState_t1303782894 ** get_address_of_U3CstateU3E__17_23() { return &___U3CstateU3E__17_23; }
	inline void set_U3CstateU3E__17_23(ShakeState_t1303782894 * value)
	{
		___U3CstateU3E__17_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstateU3E__17_23, value);
	}

	inline static int32_t get_offset_of_U3CstateListU3E__18_24() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CstateListU3E__18_24)); }
	inline List_1_t672904026 * get_U3CstateListU3E__18_24() const { return ___U3CstateListU3E__18_24; }
	inline List_1_t672904026 ** get_address_of_U3CstateListU3E__18_24() { return &___U3CstateListU3E__18_24; }
	inline void set_U3CstateListU3E__18_24(List_1_t672904026 * value)
	{
		___U3CstateListU3E__18_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstateListU3E__18_24, value);
	}

	inline static int32_t get_offset_of_rotationAmount_25() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___rotationAmount_25)); }
	inline Vector3_t2243707580  get_rotationAmount_25() const { return ___rotationAmount_25; }
	inline Vector3_t2243707580 * get_address_of_rotationAmount_25() { return &___rotationAmount_25; }
	inline void set_rotationAmount_25(Vector3_t2243707580  value)
	{
		___rotationAmount_25 = value;
	}

	inline static int32_t get_offset_of_shakeAmount_26() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___shakeAmount_26)); }
	inline Vector3_t2243707580  get_shakeAmount_26() const { return ___shakeAmount_26; }
	inline Vector3_t2243707580 * get_address_of_shakeAmount_26() { return &___shakeAmount_26; }
	inline void set_shakeAmount_26(Vector3_t2243707580  value)
	{
		___shakeAmount_26 = value;
	}

	inline static int32_t get_offset_of_speed_27() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___speed_27)); }
	inline float get_speed_27() const { return ___speed_27; }
	inline float* get_address_of_speed_27() { return &___speed_27; }
	inline void set_speed_27(float value)
	{
		___speed_27 = value;
	}

	inline static int32_t get_offset_of_U3CtimerU3E__19_28() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CtimerU3E__19_28)); }
	inline float get_U3CtimerU3E__19_28() const { return ___U3CtimerU3E__19_28; }
	inline float* get_address_of_U3CtimerU3E__19_28() { return &___U3CtimerU3E__19_28; }
	inline void set_U3CtimerU3E__19_28(float value)
	{
		___U3CtimerU3E__19_28 = value;
	}

	inline static int32_t get_offset_of_U3CvTemp2U3E__20_29() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CvTemp2U3E__20_29)); }
	inline Vector2_t2243707579  get_U3CvTemp2U3E__20_29() const { return ___U3CvTemp2U3E__20_29; }
	inline Vector2_t2243707579 * get_address_of_U3CvTemp2U3E__20_29() { return &___U3CvTemp2U3E__20_29; }
	inline void set_U3CvTemp2U3E__20_29(Vector2_t2243707579  value)
	{
		___U3CvTemp2U3E__20_29 = value;
	}

	inline static int32_t get_offset_of_U3CmU3E__21_30() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CmU3E__21_30)); }
	inline Matrix4x4_t2933234003  get_U3CmU3E__21_30() const { return ___U3CmU3E__21_30; }
	inline Matrix4x4_t2933234003 * get_address_of_U3CmU3E__21_30() { return &___U3CmU3E__21_30; }
	inline void set_U3CmU3E__21_30(Matrix4x4_t2933234003  value)
	{
		___U3CmU3E__21_30 = value;
	}

	inline static int32_t get_offset_of_U3CavgU3E__22_31() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CavgU3E__22_31)); }
	inline Vector3_t2243707580  get_U3CavgU3E__22_31() const { return ___U3CavgU3E__22_31; }
	inline Vector3_t2243707580 * get_address_of_U3CavgU3E__22_31() { return &___U3CavgU3E__22_31; }
	inline void set_U3CavgU3E__22_31(Vector3_t2243707580  value)
	{
		___U3CavgU3E__22_31 = value;
	}

	inline static int32_t get_offset_of_decay_32() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___decay_32)); }
	inline float get_decay_32() const { return ___decay_32; }
	inline float* get_address_of_decay_32() { return &___decay_32; }
	inline void set_decay_32(float value)
	{
		___decay_32 = value;
	}

	inline static int32_t get_offset_of_callback_33() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___callback_33)); }
	inline Action_t3226471752 * get_callback_33() const { return ___callback_33; }
	inline Action_t3226471752 ** get_address_of_callback_33() { return &___callback_33; }
	inline void set_callback_33(Action_t3226471752 * value)
	{
		___callback_33 = value;
		Il2CppCodeGenWriteBarrier(&___callback_33, value);
	}

	inline static int32_t get_offset_of_U24PC_34() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U24PC_34)); }
	inline int32_t get_U24PC_34() const { return ___U24PC_34; }
	inline int32_t* get_address_of_U24PC_34() { return &___U24PC_34; }
	inline void set_U24PC_34(int32_t value)
	{
		___U24PC_34 = value;
	}

	inline static int32_t get_offset_of_U24current_35() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U24current_35)); }
	inline Il2CppObject * get_U24current_35() const { return ___U24current_35; }
	inline Il2CppObject ** get_address_of_U24current_35() { return &___U24current_35; }
	inline void set_U24current_35(Il2CppObject * value)
	{
		___U24current_35 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_35, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ecam_36() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3Ecam_36)); }
	inline Camera_t189460977 * get_U3CU24U3Ecam_36() const { return ___U3CU24U3Ecam_36; }
	inline Camera_t189460977 ** get_address_of_U3CU24U3Ecam_36() { return &___U3CU24U3Ecam_36; }
	inline void set_U3CU24U3Ecam_36(Camera_t189460977 * value)
	{
		___U3CU24U3Ecam_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ecam_36, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eseed_37() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3Eseed_37)); }
	inline Vector3_t2243707580  get_U3CU24U3Eseed_37() const { return ___U3CU24U3Eseed_37; }
	inline Vector3_t2243707580 * get_address_of_U3CU24U3Eseed_37() { return &___U3CU24U3Eseed_37; }
	inline void set_U3CU24U3Eseed_37(Vector3_t2243707580  value)
	{
		___U3CU24U3Eseed_37 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EnumberOfShakes_38() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3EnumberOfShakes_38)); }
	inline int32_t get_U3CU24U3EnumberOfShakes_38() const { return ___U3CU24U3EnumberOfShakes_38; }
	inline int32_t* get_address_of_U3CU24U3EnumberOfShakes_38() { return &___U3CU24U3EnumberOfShakes_38; }
	inline void set_U3CU24U3EnumberOfShakes_38(int32_t value)
	{
		___U3CU24U3EnumberOfShakes_38 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Edistance_39() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3Edistance_39)); }
	inline float get_U3CU24U3Edistance_39() const { return ___U3CU24U3Edistance_39; }
	inline float* get_address_of_U3CU24U3Edistance_39() { return &___U3CU24U3Edistance_39; }
	inline void set_U3CU24U3Edistance_39(float value)
	{
		___U3CU24U3Edistance_39 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EmultiplyByTimeScale_40() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3EmultiplyByTimeScale_40)); }
	inline bool get_U3CU24U3EmultiplyByTimeScale_40() const { return ___U3CU24U3EmultiplyByTimeScale_40; }
	inline bool* get_address_of_U3CU24U3EmultiplyByTimeScale_40() { return &___U3CU24U3EmultiplyByTimeScale_40; }
	inline void set_U3CU24U3EmultiplyByTimeScale_40(bool value)
	{
		___U3CU24U3EmultiplyByTimeScale_40 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EguiShakeModifier_41() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3EguiShakeModifier_41)); }
	inline float get_U3CU24U3EguiShakeModifier_41() const { return ___U3CU24U3EguiShakeModifier_41; }
	inline float* get_address_of_U3CU24U3EguiShakeModifier_41() { return &___U3CU24U3EguiShakeModifier_41; }
	inline void set_U3CU24U3EguiShakeModifier_41(float value)
	{
		___U3CU24U3EguiShakeModifier_41 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3ErotationAmount_42() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3ErotationAmount_42)); }
	inline Vector3_t2243707580  get_U3CU24U3ErotationAmount_42() const { return ___U3CU24U3ErotationAmount_42; }
	inline Vector3_t2243707580 * get_address_of_U3CU24U3ErotationAmount_42() { return &___U3CU24U3ErotationAmount_42; }
	inline void set_U3CU24U3ErotationAmount_42(Vector3_t2243707580  value)
	{
		___U3CU24U3ErotationAmount_42 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EshakeAmount_43() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3EshakeAmount_43)); }
	inline Vector3_t2243707580  get_U3CU24U3EshakeAmount_43() const { return ___U3CU24U3EshakeAmount_43; }
	inline Vector3_t2243707580 * get_address_of_U3CU24U3EshakeAmount_43() { return &___U3CU24U3EshakeAmount_43; }
	inline void set_U3CU24U3EshakeAmount_43(Vector3_t2243707580  value)
	{
		___U3CU24U3EshakeAmount_43 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Espeed_44() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3Espeed_44)); }
	inline float get_U3CU24U3Espeed_44() const { return ___U3CU24U3Espeed_44; }
	inline float* get_address_of_U3CU24U3Espeed_44() { return &___U3CU24U3Espeed_44; }
	inline void set_U3CU24U3Espeed_44(float value)
	{
		___U3CU24U3Espeed_44 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Edecay_45() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3Edecay_45)); }
	inline float get_U3CU24U3Edecay_45() const { return ___U3CU24U3Edecay_45; }
	inline float* get_address_of_U3CU24U3Edecay_45() { return &___U3CU24U3Edecay_45; }
	inline void set_U3CU24U3Edecay_45(float value)
	{
		___U3CU24U3Edecay_45 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ecallback_46() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU24U3Ecallback_46)); }
	inline Action_t3226471752 * get_U3CU24U3Ecallback_46() const { return ___U3CU24U3Ecallback_46; }
	inline Action_t3226471752 ** get_address_of_U3CU24U3Ecallback_46() { return &___U3CU24U3Ecallback_46; }
	inline void set_U3CU24U3Ecallback_46(Action_t3226471752 * value)
	{
		___U3CU24U3Ecallback_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ecallback_46, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_47() { return static_cast<int32_t>(offsetof(U3CDoShake_InternalU3Ec__Iterator16_t241830832, ___U3CU3Ef__this_47)); }
	inline _CameraShake_t3456764876 * get_U3CU3Ef__this_47() const { return ___U3CU3Ef__this_47; }
	inline _CameraShake_t3456764876 ** get_address_of_U3CU3Ef__this_47() { return &___U3CU3Ef__this_47; }
	inline void set_U3CU3Ef__this_47(_CameraShake_t3456764876 * value)
	{
		___U3CU3Ef__this_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_47, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
