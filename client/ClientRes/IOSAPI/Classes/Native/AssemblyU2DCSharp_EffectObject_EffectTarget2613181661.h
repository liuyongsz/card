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

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectObject/EffectTarget
struct  EffectTarget_t2613181661 
{
public:
	// System.Boolean EffectObject/EffectTarget::hasTransform
	bool ___hasTransform_0;
	// UnityEngine.Transform EffectObject/EffectTarget::root
	Transform_t3275118058 * ___root_1;
	// UnityEngine.Transform EffectObject/EffectTarget::bpTrans
	Transform_t3275118058 * ___bpTrans_2;
	// UnityEngine.Vector3 EffectObject/EffectTarget::position
	Vector3_t2243707580  ___position_3;
	// UnityEngine.Quaternion EffectObject/EffectTarget::rotation
	Quaternion_t4030073918  ___rotation_4;

public:
	inline static int32_t get_offset_of_hasTransform_0() { return static_cast<int32_t>(offsetof(EffectTarget_t2613181661, ___hasTransform_0)); }
	inline bool get_hasTransform_0() const { return ___hasTransform_0; }
	inline bool* get_address_of_hasTransform_0() { return &___hasTransform_0; }
	inline void set_hasTransform_0(bool value)
	{
		___hasTransform_0 = value;
	}

	inline static int32_t get_offset_of_root_1() { return static_cast<int32_t>(offsetof(EffectTarget_t2613181661, ___root_1)); }
	inline Transform_t3275118058 * get_root_1() const { return ___root_1; }
	inline Transform_t3275118058 ** get_address_of_root_1() { return &___root_1; }
	inline void set_root_1(Transform_t3275118058 * value)
	{
		___root_1 = value;
		Il2CppCodeGenWriteBarrier(&___root_1, value);
	}

	inline static int32_t get_offset_of_bpTrans_2() { return static_cast<int32_t>(offsetof(EffectTarget_t2613181661, ___bpTrans_2)); }
	inline Transform_t3275118058 * get_bpTrans_2() const { return ___bpTrans_2; }
	inline Transform_t3275118058 ** get_address_of_bpTrans_2() { return &___bpTrans_2; }
	inline void set_bpTrans_2(Transform_t3275118058 * value)
	{
		___bpTrans_2 = value;
		Il2CppCodeGenWriteBarrier(&___bpTrans_2, value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(EffectTarget_t2613181661, ___position_3)); }
	inline Vector3_t2243707580  get_position_3() const { return ___position_3; }
	inline Vector3_t2243707580 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t2243707580  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(EffectTarget_t2613181661, ___rotation_4)); }
	inline Quaternion_t4030073918  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t4030073918 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t4030073918  value)
	{
		___rotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: EffectObject/EffectTarget
struct EffectTarget_t2613181661_marshaled_pinvoke
{
	int32_t ___hasTransform_0;
	Transform_t3275118058 * ___root_1;
	Transform_t3275118058 * ___bpTrans_2;
	Vector3_t2243707580_marshaled_pinvoke ___position_3;
	Quaternion_t4030073918_marshaled_pinvoke ___rotation_4;
};
// Native definition for marshalling of: EffectObject/EffectTarget
struct EffectTarget_t2613181661_marshaled_com
{
	int32_t ___hasTransform_0;
	Transform_t3275118058 * ___root_1;
	Transform_t3275118058 * ___bpTrans_2;
	Vector3_t2243707580_marshaled_com ___position_3;
	Quaternion_t4030073918_marshaled_com ___rotation_4;
};
