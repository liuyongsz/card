#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EffectCfg
struct EffectCfg_t3413255951;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// AMLoadAssetOperation
struct AMLoadAssetOperation_t2496313085;
// System.String
struct String_t;
// AudioObject
struct AudioObject_t2332520225;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_EffectObject_EffectTarget2613181661.h"
#include "AssemblyU2DCSharp_EffectObject_EffectStates2799317824.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectObject
struct  EffectObject_t1319139602  : public Il2CppObject
{
public:
	// EffectCfg EffectObject::config
	EffectCfg_t3413255951 * ___config_0;
	// UnityEngine.GameObject EffectObject::gameObject
	GameObject_t1756533147 * ___gameObject_1;
	// UnityEngine.Transform EffectObject::transform
	Transform_t3275118058 * ___transform_2;
	// UnityEngine.GameObject EffectObject::modelGo
	GameObject_t1756533147 * ___modelGo_3;
	// UnityEngine.Transform EffectObject::modelTrans
	Transform_t3275118058 * ___modelTrans_4;
	// AMLoadAssetOperation EffectObject::asyncLoadOp
	AMLoadAssetOperation_t2496313085 * ___asyncLoadOp_5;
	// System.String EffectObject::assetBundlePath
	String_t* ___assetBundlePath_6;
	// EffectObject/EffectTarget EffectObject::target
	EffectTarget_t2613181661  ___target_7;
	// System.Int32 EffectObject::stateElapsed
	int32_t ___stateElapsed_8;
	// EffectObject/EffectStates EffectObject::state
	int32_t ___state_9;
	// AudioObject EffectObject::audioObject
	AudioObject_t2332520225 * ___audioObject_10;
	// System.Int32 EffectObject::<EffectID>k__BackingField
	int32_t ___U3CEffectIDU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___config_0)); }
	inline EffectCfg_t3413255951 * get_config_0() const { return ___config_0; }
	inline EffectCfg_t3413255951 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(EffectCfg_t3413255951 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier(&___config_0, value);
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___gameObject_1)); }
	inline GameObject_t1756533147 * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_t1756533147 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_1, value);
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___transform_2)); }
	inline Transform_t3275118058 * get_transform_2() const { return ___transform_2; }
	inline Transform_t3275118058 ** get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(Transform_t3275118058 * value)
	{
		___transform_2 = value;
		Il2CppCodeGenWriteBarrier(&___transform_2, value);
	}

	inline static int32_t get_offset_of_modelGo_3() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___modelGo_3)); }
	inline GameObject_t1756533147 * get_modelGo_3() const { return ___modelGo_3; }
	inline GameObject_t1756533147 ** get_address_of_modelGo_3() { return &___modelGo_3; }
	inline void set_modelGo_3(GameObject_t1756533147 * value)
	{
		___modelGo_3 = value;
		Il2CppCodeGenWriteBarrier(&___modelGo_3, value);
	}

	inline static int32_t get_offset_of_modelTrans_4() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___modelTrans_4)); }
	inline Transform_t3275118058 * get_modelTrans_4() const { return ___modelTrans_4; }
	inline Transform_t3275118058 ** get_address_of_modelTrans_4() { return &___modelTrans_4; }
	inline void set_modelTrans_4(Transform_t3275118058 * value)
	{
		___modelTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___modelTrans_4, value);
	}

	inline static int32_t get_offset_of_asyncLoadOp_5() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___asyncLoadOp_5)); }
	inline AMLoadAssetOperation_t2496313085 * get_asyncLoadOp_5() const { return ___asyncLoadOp_5; }
	inline AMLoadAssetOperation_t2496313085 ** get_address_of_asyncLoadOp_5() { return &___asyncLoadOp_5; }
	inline void set_asyncLoadOp_5(AMLoadAssetOperation_t2496313085 * value)
	{
		___asyncLoadOp_5 = value;
		Il2CppCodeGenWriteBarrier(&___asyncLoadOp_5, value);
	}

	inline static int32_t get_offset_of_assetBundlePath_6() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___assetBundlePath_6)); }
	inline String_t* get_assetBundlePath_6() const { return ___assetBundlePath_6; }
	inline String_t** get_address_of_assetBundlePath_6() { return &___assetBundlePath_6; }
	inline void set_assetBundlePath_6(String_t* value)
	{
		___assetBundlePath_6 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundlePath_6, value);
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___target_7)); }
	inline EffectTarget_t2613181661  get_target_7() const { return ___target_7; }
	inline EffectTarget_t2613181661 * get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(EffectTarget_t2613181661  value)
	{
		___target_7 = value;
	}

	inline static int32_t get_offset_of_stateElapsed_8() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___stateElapsed_8)); }
	inline int32_t get_stateElapsed_8() const { return ___stateElapsed_8; }
	inline int32_t* get_address_of_stateElapsed_8() { return &___stateElapsed_8; }
	inline void set_stateElapsed_8(int32_t value)
	{
		___stateElapsed_8 = value;
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_audioObject_10() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___audioObject_10)); }
	inline AudioObject_t2332520225 * get_audioObject_10() const { return ___audioObject_10; }
	inline AudioObject_t2332520225 ** get_address_of_audioObject_10() { return &___audioObject_10; }
	inline void set_audioObject_10(AudioObject_t2332520225 * value)
	{
		___audioObject_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioObject_10, value);
	}

	inline static int32_t get_offset_of_U3CEffectIDU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EffectObject_t1319139602, ___U3CEffectIDU3Ek__BackingField_11)); }
	inline int32_t get_U3CEffectIDU3Ek__BackingField_11() const { return ___U3CEffectIDU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CEffectIDU3Ek__BackingField_11() { return &___U3CEffectIDU3Ek__BackingField_11; }
	inline void set_U3CEffectIDU3Ek__BackingField_11(int32_t value)
	{
		___U3CEffectIDU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
