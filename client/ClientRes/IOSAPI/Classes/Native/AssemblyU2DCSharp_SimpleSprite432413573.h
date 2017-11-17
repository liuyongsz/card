#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSprite
struct  SimpleSprite_t432413573  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SimpleSprite::standardCameraSize
	float ___standardCameraSize_2;
	// System.Single SimpleSprite::standardHeight
	float ___standardHeight_3;
	// System.Single SimpleSprite::glTopixelRatio
	float ___glTopixelRatio_4;
	// UnityEngine.Material SimpleSprite::spriteMaterial
	Material_t193706927 * ___spriteMaterial_5;
	// System.Int32 SimpleSprite::verticesCount
	int32_t ___verticesCount_6;

public:
	inline static int32_t get_offset_of_standardCameraSize_2() { return static_cast<int32_t>(offsetof(SimpleSprite_t432413573, ___standardCameraSize_2)); }
	inline float get_standardCameraSize_2() const { return ___standardCameraSize_2; }
	inline float* get_address_of_standardCameraSize_2() { return &___standardCameraSize_2; }
	inline void set_standardCameraSize_2(float value)
	{
		___standardCameraSize_2 = value;
	}

	inline static int32_t get_offset_of_standardHeight_3() { return static_cast<int32_t>(offsetof(SimpleSprite_t432413573, ___standardHeight_3)); }
	inline float get_standardHeight_3() const { return ___standardHeight_3; }
	inline float* get_address_of_standardHeight_3() { return &___standardHeight_3; }
	inline void set_standardHeight_3(float value)
	{
		___standardHeight_3 = value;
	}

	inline static int32_t get_offset_of_glTopixelRatio_4() { return static_cast<int32_t>(offsetof(SimpleSprite_t432413573, ___glTopixelRatio_4)); }
	inline float get_glTopixelRatio_4() const { return ___glTopixelRatio_4; }
	inline float* get_address_of_glTopixelRatio_4() { return &___glTopixelRatio_4; }
	inline void set_glTopixelRatio_4(float value)
	{
		___glTopixelRatio_4 = value;
	}

	inline static int32_t get_offset_of_spriteMaterial_5() { return static_cast<int32_t>(offsetof(SimpleSprite_t432413573, ___spriteMaterial_5)); }
	inline Material_t193706927 * get_spriteMaterial_5() const { return ___spriteMaterial_5; }
	inline Material_t193706927 ** get_address_of_spriteMaterial_5() { return &___spriteMaterial_5; }
	inline void set_spriteMaterial_5(Material_t193706927 * value)
	{
		___spriteMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___spriteMaterial_5, value);
	}

	inline static int32_t get_offset_of_verticesCount_6() { return static_cast<int32_t>(offsetof(SimpleSprite_t432413573, ___verticesCount_6)); }
	inline int32_t get_verticesCount_6() const { return ___verticesCount_6; }
	inline int32_t* get_address_of_verticesCount_6() { return &___verticesCount_6; }
	inline void set_verticesCount_6(int32_t value)
	{
		___verticesCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
