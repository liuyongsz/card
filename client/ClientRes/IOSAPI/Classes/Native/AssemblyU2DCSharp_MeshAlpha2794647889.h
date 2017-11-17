#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t3857795355;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshAlpha
struct  MeshAlpha_t2794647889  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MeshAlpha::alpha_1
	float ___alpha_1_2;
	// System.Single MeshAlpha::prevAlpha_1
	float ___prevAlpha_1_3;
	// System.Single MeshAlpha::alpha_2
	float ___alpha_2_4;
	// System.Single MeshAlpha::prevAlpha_2
	float ___prevAlpha_2_5;
	// System.Collections.Generic.List`1<UnityEngine.Material> MeshAlpha::mMaterials
	List_1_t3857795355 * ___mMaterials_6;

public:
	inline static int32_t get_offset_of_alpha_1_2() { return static_cast<int32_t>(offsetof(MeshAlpha_t2794647889, ___alpha_1_2)); }
	inline float get_alpha_1_2() const { return ___alpha_1_2; }
	inline float* get_address_of_alpha_1_2() { return &___alpha_1_2; }
	inline void set_alpha_1_2(float value)
	{
		___alpha_1_2 = value;
	}

	inline static int32_t get_offset_of_prevAlpha_1_3() { return static_cast<int32_t>(offsetof(MeshAlpha_t2794647889, ___prevAlpha_1_3)); }
	inline float get_prevAlpha_1_3() const { return ___prevAlpha_1_3; }
	inline float* get_address_of_prevAlpha_1_3() { return &___prevAlpha_1_3; }
	inline void set_prevAlpha_1_3(float value)
	{
		___prevAlpha_1_3 = value;
	}

	inline static int32_t get_offset_of_alpha_2_4() { return static_cast<int32_t>(offsetof(MeshAlpha_t2794647889, ___alpha_2_4)); }
	inline float get_alpha_2_4() const { return ___alpha_2_4; }
	inline float* get_address_of_alpha_2_4() { return &___alpha_2_4; }
	inline void set_alpha_2_4(float value)
	{
		___alpha_2_4 = value;
	}

	inline static int32_t get_offset_of_prevAlpha_2_5() { return static_cast<int32_t>(offsetof(MeshAlpha_t2794647889, ___prevAlpha_2_5)); }
	inline float get_prevAlpha_2_5() const { return ___prevAlpha_2_5; }
	inline float* get_address_of_prevAlpha_2_5() { return &___prevAlpha_2_5; }
	inline void set_prevAlpha_2_5(float value)
	{
		___prevAlpha_2_5 = value;
	}

	inline static int32_t get_offset_of_mMaterials_6() { return static_cast<int32_t>(offsetof(MeshAlpha_t2794647889, ___mMaterials_6)); }
	inline List_1_t3857795355 * get_mMaterials_6() const { return ___mMaterials_6; }
	inline List_1_t3857795355 ** get_address_of_mMaterials_6() { return &___mMaterials_6; }
	inline void set_mMaterials_6(List_1_t3857795355 * value)
	{
		___mMaterials_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterials_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
