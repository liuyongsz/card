#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectCfg
struct  EffectCfg_t3413255951  : public Il2CppObject
{
public:
	// System.Int32 EffectCfg::ID
	int32_t ___ID_0;
	// System.String EffectCfg::OnBeginPlay
	String_t* ___OnBeginPlay_1;
	// System.String EffectCfg::OnEndPlay
	String_t* ___OnEndPlay_2;
	// System.String EffectCfg::AssetName
	String_t* ___AssetName_3;
	// System.String EffectCfg::BindPoint
	String_t* ___BindPoint_4;
	// System.Int32 EffectCfg::Delay
	int32_t ___Delay_5;
	// System.Int32 EffectCfg::Lifetime
	int32_t ___Lifetime_6;
	// System.Boolean EffectCfg::FollowPosition
	bool ___FollowPosition_7;
	// System.Boolean EffectCfg::FollowRotation
	bool ___FollowRotation_8;
	// System.Boolean EffectCfg::FollowScale
	bool ___FollowScale_9;
	// System.String EffectCfg::LocalPosition
	String_t* ___LocalPosition_10;
	// System.String EffectCfg::LocalRotation
	String_t* ___LocalRotation_11;
	// System.String EffectCfg::LocalScale
	String_t* ___LocalScale_12;
	// System.Int32 EffectCfg::FadeOutTime
	int32_t ___FadeOutTime_13;
	// System.Int32 EffectCfg::Audio
	int32_t ___Audio_14;
	// System.Int32[] EffectCfg::OnBeginPlayArray
	Int32U5BU5D_t3030399641* ___OnBeginPlayArray_15;
	// System.Int32[] EffectCfg::OnEndPlayArray
	Int32U5BU5D_t3030399641* ___OnEndPlayArray_16;
	// UnityEngine.Vector3 EffectCfg::LocalPositionVec3
	Vector3_t2243707580  ___LocalPositionVec3_17;
	// UnityEngine.Vector3 EffectCfg::LocalRotationVec3
	Vector3_t2243707580  ___LocalRotationVec3_18;
	// UnityEngine.Quaternion EffectCfg::LocalRotationQuaternion
	Quaternion_t4030073918  ___LocalRotationQuaternion_19;
	// UnityEngine.Vector3 EffectCfg::LocalScaleVec3
	Vector3_t2243707580  ___LocalScaleVec3_20;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_OnBeginPlay_1() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___OnBeginPlay_1)); }
	inline String_t* get_OnBeginPlay_1() const { return ___OnBeginPlay_1; }
	inline String_t** get_address_of_OnBeginPlay_1() { return &___OnBeginPlay_1; }
	inline void set_OnBeginPlay_1(String_t* value)
	{
		___OnBeginPlay_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnBeginPlay_1, value);
	}

	inline static int32_t get_offset_of_OnEndPlay_2() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___OnEndPlay_2)); }
	inline String_t* get_OnEndPlay_2() const { return ___OnEndPlay_2; }
	inline String_t** get_address_of_OnEndPlay_2() { return &___OnEndPlay_2; }
	inline void set_OnEndPlay_2(String_t* value)
	{
		___OnEndPlay_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnEndPlay_2, value);
	}

	inline static int32_t get_offset_of_AssetName_3() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___AssetName_3)); }
	inline String_t* get_AssetName_3() const { return ___AssetName_3; }
	inline String_t** get_address_of_AssetName_3() { return &___AssetName_3; }
	inline void set_AssetName_3(String_t* value)
	{
		___AssetName_3 = value;
		Il2CppCodeGenWriteBarrier(&___AssetName_3, value);
	}

	inline static int32_t get_offset_of_BindPoint_4() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___BindPoint_4)); }
	inline String_t* get_BindPoint_4() const { return ___BindPoint_4; }
	inline String_t** get_address_of_BindPoint_4() { return &___BindPoint_4; }
	inline void set_BindPoint_4(String_t* value)
	{
		___BindPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___BindPoint_4, value);
	}

	inline static int32_t get_offset_of_Delay_5() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___Delay_5)); }
	inline int32_t get_Delay_5() const { return ___Delay_5; }
	inline int32_t* get_address_of_Delay_5() { return &___Delay_5; }
	inline void set_Delay_5(int32_t value)
	{
		___Delay_5 = value;
	}

	inline static int32_t get_offset_of_Lifetime_6() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___Lifetime_6)); }
	inline int32_t get_Lifetime_6() const { return ___Lifetime_6; }
	inline int32_t* get_address_of_Lifetime_6() { return &___Lifetime_6; }
	inline void set_Lifetime_6(int32_t value)
	{
		___Lifetime_6 = value;
	}

	inline static int32_t get_offset_of_FollowPosition_7() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___FollowPosition_7)); }
	inline bool get_FollowPosition_7() const { return ___FollowPosition_7; }
	inline bool* get_address_of_FollowPosition_7() { return &___FollowPosition_7; }
	inline void set_FollowPosition_7(bool value)
	{
		___FollowPosition_7 = value;
	}

	inline static int32_t get_offset_of_FollowRotation_8() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___FollowRotation_8)); }
	inline bool get_FollowRotation_8() const { return ___FollowRotation_8; }
	inline bool* get_address_of_FollowRotation_8() { return &___FollowRotation_8; }
	inline void set_FollowRotation_8(bool value)
	{
		___FollowRotation_8 = value;
	}

	inline static int32_t get_offset_of_FollowScale_9() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___FollowScale_9)); }
	inline bool get_FollowScale_9() const { return ___FollowScale_9; }
	inline bool* get_address_of_FollowScale_9() { return &___FollowScale_9; }
	inline void set_FollowScale_9(bool value)
	{
		___FollowScale_9 = value;
	}

	inline static int32_t get_offset_of_LocalPosition_10() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalPosition_10)); }
	inline String_t* get_LocalPosition_10() const { return ___LocalPosition_10; }
	inline String_t** get_address_of_LocalPosition_10() { return &___LocalPosition_10; }
	inline void set_LocalPosition_10(String_t* value)
	{
		___LocalPosition_10 = value;
		Il2CppCodeGenWriteBarrier(&___LocalPosition_10, value);
	}

	inline static int32_t get_offset_of_LocalRotation_11() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalRotation_11)); }
	inline String_t* get_LocalRotation_11() const { return ___LocalRotation_11; }
	inline String_t** get_address_of_LocalRotation_11() { return &___LocalRotation_11; }
	inline void set_LocalRotation_11(String_t* value)
	{
		___LocalRotation_11 = value;
		Il2CppCodeGenWriteBarrier(&___LocalRotation_11, value);
	}

	inline static int32_t get_offset_of_LocalScale_12() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalScale_12)); }
	inline String_t* get_LocalScale_12() const { return ___LocalScale_12; }
	inline String_t** get_address_of_LocalScale_12() { return &___LocalScale_12; }
	inline void set_LocalScale_12(String_t* value)
	{
		___LocalScale_12 = value;
		Il2CppCodeGenWriteBarrier(&___LocalScale_12, value);
	}

	inline static int32_t get_offset_of_FadeOutTime_13() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___FadeOutTime_13)); }
	inline int32_t get_FadeOutTime_13() const { return ___FadeOutTime_13; }
	inline int32_t* get_address_of_FadeOutTime_13() { return &___FadeOutTime_13; }
	inline void set_FadeOutTime_13(int32_t value)
	{
		___FadeOutTime_13 = value;
	}

	inline static int32_t get_offset_of_Audio_14() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___Audio_14)); }
	inline int32_t get_Audio_14() const { return ___Audio_14; }
	inline int32_t* get_address_of_Audio_14() { return &___Audio_14; }
	inline void set_Audio_14(int32_t value)
	{
		___Audio_14 = value;
	}

	inline static int32_t get_offset_of_OnBeginPlayArray_15() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___OnBeginPlayArray_15)); }
	inline Int32U5BU5D_t3030399641* get_OnBeginPlayArray_15() const { return ___OnBeginPlayArray_15; }
	inline Int32U5BU5D_t3030399641** get_address_of_OnBeginPlayArray_15() { return &___OnBeginPlayArray_15; }
	inline void set_OnBeginPlayArray_15(Int32U5BU5D_t3030399641* value)
	{
		___OnBeginPlayArray_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnBeginPlayArray_15, value);
	}

	inline static int32_t get_offset_of_OnEndPlayArray_16() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___OnEndPlayArray_16)); }
	inline Int32U5BU5D_t3030399641* get_OnEndPlayArray_16() const { return ___OnEndPlayArray_16; }
	inline Int32U5BU5D_t3030399641** get_address_of_OnEndPlayArray_16() { return &___OnEndPlayArray_16; }
	inline void set_OnEndPlayArray_16(Int32U5BU5D_t3030399641* value)
	{
		___OnEndPlayArray_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnEndPlayArray_16, value);
	}

	inline static int32_t get_offset_of_LocalPositionVec3_17() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalPositionVec3_17)); }
	inline Vector3_t2243707580  get_LocalPositionVec3_17() const { return ___LocalPositionVec3_17; }
	inline Vector3_t2243707580 * get_address_of_LocalPositionVec3_17() { return &___LocalPositionVec3_17; }
	inline void set_LocalPositionVec3_17(Vector3_t2243707580  value)
	{
		___LocalPositionVec3_17 = value;
	}

	inline static int32_t get_offset_of_LocalRotationVec3_18() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalRotationVec3_18)); }
	inline Vector3_t2243707580  get_LocalRotationVec3_18() const { return ___LocalRotationVec3_18; }
	inline Vector3_t2243707580 * get_address_of_LocalRotationVec3_18() { return &___LocalRotationVec3_18; }
	inline void set_LocalRotationVec3_18(Vector3_t2243707580  value)
	{
		___LocalRotationVec3_18 = value;
	}

	inline static int32_t get_offset_of_LocalRotationQuaternion_19() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalRotationQuaternion_19)); }
	inline Quaternion_t4030073918  get_LocalRotationQuaternion_19() const { return ___LocalRotationQuaternion_19; }
	inline Quaternion_t4030073918 * get_address_of_LocalRotationQuaternion_19() { return &___LocalRotationQuaternion_19; }
	inline void set_LocalRotationQuaternion_19(Quaternion_t4030073918  value)
	{
		___LocalRotationQuaternion_19 = value;
	}

	inline static int32_t get_offset_of_LocalScaleVec3_20() { return static_cast<int32_t>(offsetof(EffectCfg_t3413255951, ___LocalScaleVec3_20)); }
	inline Vector3_t2243707580  get_LocalScaleVec3_20() const { return ___LocalScaleVec3_20; }
	inline Vector3_t2243707580 * get_address_of_LocalScaleVec3_20() { return &___LocalScaleVec3_20; }
	inline void set_LocalScaleVec3_20(Vector3_t2243707580  value)
	{
		___LocalScaleVec3_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
