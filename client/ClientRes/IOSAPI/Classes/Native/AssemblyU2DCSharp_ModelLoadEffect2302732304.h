#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ModelLoadEffect/LoadFuncDelegate
struct LoadFuncDelegate_t4054660464;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_t1558332529;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_EffectLevel2550060023.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelLoadEffect
struct  ModelLoadEffect_t2302732304  : public EffectLevel_t2550060023
{
public:
	// System.Action`1<UnityEngine.GameObject> ModelLoadEffect::LoadModelComplete
	Action_1_t1558332529 * ___LoadModelComplete_10;
	// System.String ModelLoadEffect::mstrPath
	String_t* ___mstrPath_11;
	// UnityEngine.Vector3 ModelLoadEffect::mvecPos
	Vector3_t2243707580  ___mvecPos_12;
	// UnityEngine.Vector3 ModelLoadEffect::mvecRot
	Vector3_t2243707580  ___mvecRot_13;
	// UnityEngine.Vector3 ModelLoadEffect::mvecScale
	Vector3_t2243707580  ___mvecScale_14;
	// System.Int32 ModelLoadEffect::miRenderQ
	int32_t ___miRenderQ_15;
	// UnityEngine.GameObject ModelLoadEffect::mGoEffect
	GameObject_t1756533147 * ___mGoEffect_16;
	// System.Boolean ModelLoadEffect::bLoaded
	bool ___bLoaded_17;
	// UnityEngine.GameObject ModelLoadEffect::mGo
	GameObject_t1756533147 * ___mGo_18;
	// System.Action ModelLoadEffect::gameObjectActiveCallBack
	Action_t3226471752 * ___gameObjectActiveCallBack_19;

public:
	inline static int32_t get_offset_of_LoadModelComplete_10() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___LoadModelComplete_10)); }
	inline Action_1_t1558332529 * get_LoadModelComplete_10() const { return ___LoadModelComplete_10; }
	inline Action_1_t1558332529 ** get_address_of_LoadModelComplete_10() { return &___LoadModelComplete_10; }
	inline void set_LoadModelComplete_10(Action_1_t1558332529 * value)
	{
		___LoadModelComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&___LoadModelComplete_10, value);
	}

	inline static int32_t get_offset_of_mstrPath_11() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___mstrPath_11)); }
	inline String_t* get_mstrPath_11() const { return ___mstrPath_11; }
	inline String_t** get_address_of_mstrPath_11() { return &___mstrPath_11; }
	inline void set_mstrPath_11(String_t* value)
	{
		___mstrPath_11 = value;
		Il2CppCodeGenWriteBarrier(&___mstrPath_11, value);
	}

	inline static int32_t get_offset_of_mvecPos_12() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___mvecPos_12)); }
	inline Vector3_t2243707580  get_mvecPos_12() const { return ___mvecPos_12; }
	inline Vector3_t2243707580 * get_address_of_mvecPos_12() { return &___mvecPos_12; }
	inline void set_mvecPos_12(Vector3_t2243707580  value)
	{
		___mvecPos_12 = value;
	}

	inline static int32_t get_offset_of_mvecRot_13() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___mvecRot_13)); }
	inline Vector3_t2243707580  get_mvecRot_13() const { return ___mvecRot_13; }
	inline Vector3_t2243707580 * get_address_of_mvecRot_13() { return &___mvecRot_13; }
	inline void set_mvecRot_13(Vector3_t2243707580  value)
	{
		___mvecRot_13 = value;
	}

	inline static int32_t get_offset_of_mvecScale_14() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___mvecScale_14)); }
	inline Vector3_t2243707580  get_mvecScale_14() const { return ___mvecScale_14; }
	inline Vector3_t2243707580 * get_address_of_mvecScale_14() { return &___mvecScale_14; }
	inline void set_mvecScale_14(Vector3_t2243707580  value)
	{
		___mvecScale_14 = value;
	}

	inline static int32_t get_offset_of_miRenderQ_15() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___miRenderQ_15)); }
	inline int32_t get_miRenderQ_15() const { return ___miRenderQ_15; }
	inline int32_t* get_address_of_miRenderQ_15() { return &___miRenderQ_15; }
	inline void set_miRenderQ_15(int32_t value)
	{
		___miRenderQ_15 = value;
	}

	inline static int32_t get_offset_of_mGoEffect_16() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___mGoEffect_16)); }
	inline GameObject_t1756533147 * get_mGoEffect_16() const { return ___mGoEffect_16; }
	inline GameObject_t1756533147 ** get_address_of_mGoEffect_16() { return &___mGoEffect_16; }
	inline void set_mGoEffect_16(GameObject_t1756533147 * value)
	{
		___mGoEffect_16 = value;
		Il2CppCodeGenWriteBarrier(&___mGoEffect_16, value);
	}

	inline static int32_t get_offset_of_bLoaded_17() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___bLoaded_17)); }
	inline bool get_bLoaded_17() const { return ___bLoaded_17; }
	inline bool* get_address_of_bLoaded_17() { return &___bLoaded_17; }
	inline void set_bLoaded_17(bool value)
	{
		___bLoaded_17 = value;
	}

	inline static int32_t get_offset_of_mGo_18() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___mGo_18)); }
	inline GameObject_t1756533147 * get_mGo_18() const { return ___mGo_18; }
	inline GameObject_t1756533147 ** get_address_of_mGo_18() { return &___mGo_18; }
	inline void set_mGo_18(GameObject_t1756533147 * value)
	{
		___mGo_18 = value;
		Il2CppCodeGenWriteBarrier(&___mGo_18, value);
	}

	inline static int32_t get_offset_of_gameObjectActiveCallBack_19() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304, ___gameObjectActiveCallBack_19)); }
	inline Action_t3226471752 * get_gameObjectActiveCallBack_19() const { return ___gameObjectActiveCallBack_19; }
	inline Action_t3226471752 ** get_address_of_gameObjectActiveCallBack_19() { return &___gameObjectActiveCallBack_19; }
	inline void set_gameObjectActiveCallBack_19(Action_t3226471752 * value)
	{
		___gameObjectActiveCallBack_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjectActiveCallBack_19, value);
	}
};

struct ModelLoadEffect_t2302732304_StaticFields
{
public:
	// ModelLoadEffect/LoadFuncDelegate ModelLoadEffect::LoadFunc
	LoadFuncDelegate_t4054660464 * ___LoadFunc_9;

public:
	inline static int32_t get_offset_of_LoadFunc_9() { return static_cast<int32_t>(offsetof(ModelLoadEffect_t2302732304_StaticFields, ___LoadFunc_9)); }
	inline LoadFuncDelegate_t4054660464 * get_LoadFunc_9() const { return ___LoadFunc_9; }
	inline LoadFuncDelegate_t4054660464 ** get_address_of_LoadFunc_9() { return &___LoadFunc_9; }
	inline void set_LoadFunc_9(LoadFuncDelegate_t4054660464 * value)
	{
		___LoadFunc_9 = value;
		Il2CppCodeGenWriteBarrier(&___LoadFunc_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
