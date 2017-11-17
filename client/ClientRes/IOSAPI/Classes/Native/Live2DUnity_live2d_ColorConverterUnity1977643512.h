#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "Live2DUnity_live2d_ColorConverter757049405.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ColorConverterUnity
struct  ColorConverterUnity_t1977643512  : public ColorConverter_t757049405
{
public:
	// UnityEngine.Texture2D live2d.ColorConverterUnity::convertTexture
	Texture2D_t3542995729 * ___convertTexture_1;
	// UnityEngine.Matrix4x4 live2d.ColorConverterUnity::matrixCache
	Matrix4x4_t2933234003  ___matrixCache_2;
	// System.Boolean live2d.ColorConverterUnity::needUpdateMatrixCache
	bool ___needUpdateMatrixCache_3;

public:
	inline static int32_t get_offset_of_convertTexture_1() { return static_cast<int32_t>(offsetof(ColorConverterUnity_t1977643512, ___convertTexture_1)); }
	inline Texture2D_t3542995729 * get_convertTexture_1() const { return ___convertTexture_1; }
	inline Texture2D_t3542995729 ** get_address_of_convertTexture_1() { return &___convertTexture_1; }
	inline void set_convertTexture_1(Texture2D_t3542995729 * value)
	{
		___convertTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___convertTexture_1, value);
	}

	inline static int32_t get_offset_of_matrixCache_2() { return static_cast<int32_t>(offsetof(ColorConverterUnity_t1977643512, ___matrixCache_2)); }
	inline Matrix4x4_t2933234003  get_matrixCache_2() const { return ___matrixCache_2; }
	inline Matrix4x4_t2933234003 * get_address_of_matrixCache_2() { return &___matrixCache_2; }
	inline void set_matrixCache_2(Matrix4x4_t2933234003  value)
	{
		___matrixCache_2 = value;
	}

	inline static int32_t get_offset_of_needUpdateMatrixCache_3() { return static_cast<int32_t>(offsetof(ColorConverterUnity_t1977643512, ___needUpdateMatrixCache_3)); }
	inline bool get_needUpdateMatrixCache_3() const { return ___needUpdateMatrixCache_3; }
	inline bool* get_address_of_needUpdateMatrixCache_3() { return &___needUpdateMatrixCache_3; }
	inline void set_needUpdateMatrixCache_3(bool value)
	{
		___needUpdateMatrixCache_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
