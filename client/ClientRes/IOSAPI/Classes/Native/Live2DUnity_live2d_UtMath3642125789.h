#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t1044426839;
// System.Double[]
struct DoubleU5BU5D_t1889952540;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.UtMath
struct  UtMath_t3642125789  : public Il2CppObject
{
public:

public:
};

struct UtMath_t3642125789_StaticFields
{
public:
	// System.Random live2d.UtMath::random
	Random_t1044426839 * ___random_0;
	// System.Double live2d.UtMath::DEG_TO_RAD_D
	double ___DEG_TO_RAD_D_1;
	// System.Single live2d.UtMath::DEG_TO_RAD_F
	float ___DEG_TO_RAD_F_2;
	// System.Double live2d.UtMath::RAD_TO_DEG_D
	double ___RAD_TO_DEG_D_3;
	// System.Single live2d.UtMath::RAD_TO_DEG_F
	float ___RAD_TO_DEG_F_4;
	// System.Single live2d.UtMath::PI_F
	float ___PI_F_5;
	// System.Double[] live2d.UtMath::sintable
	DoubleU5BU5D_t1889952540* ___sintable_6;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___random_0)); }
	inline Random_t1044426839 * get_random_0() const { return ___random_0; }
	inline Random_t1044426839 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t1044426839 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier(&___random_0, value);
	}

	inline static int32_t get_offset_of_DEG_TO_RAD_D_1() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___DEG_TO_RAD_D_1)); }
	inline double get_DEG_TO_RAD_D_1() const { return ___DEG_TO_RAD_D_1; }
	inline double* get_address_of_DEG_TO_RAD_D_1() { return &___DEG_TO_RAD_D_1; }
	inline void set_DEG_TO_RAD_D_1(double value)
	{
		___DEG_TO_RAD_D_1 = value;
	}

	inline static int32_t get_offset_of_DEG_TO_RAD_F_2() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___DEG_TO_RAD_F_2)); }
	inline float get_DEG_TO_RAD_F_2() const { return ___DEG_TO_RAD_F_2; }
	inline float* get_address_of_DEG_TO_RAD_F_2() { return &___DEG_TO_RAD_F_2; }
	inline void set_DEG_TO_RAD_F_2(float value)
	{
		___DEG_TO_RAD_F_2 = value;
	}

	inline static int32_t get_offset_of_RAD_TO_DEG_D_3() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___RAD_TO_DEG_D_3)); }
	inline double get_RAD_TO_DEG_D_3() const { return ___RAD_TO_DEG_D_3; }
	inline double* get_address_of_RAD_TO_DEG_D_3() { return &___RAD_TO_DEG_D_3; }
	inline void set_RAD_TO_DEG_D_3(double value)
	{
		___RAD_TO_DEG_D_3 = value;
	}

	inline static int32_t get_offset_of_RAD_TO_DEG_F_4() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___RAD_TO_DEG_F_4)); }
	inline float get_RAD_TO_DEG_F_4() const { return ___RAD_TO_DEG_F_4; }
	inline float* get_address_of_RAD_TO_DEG_F_4() { return &___RAD_TO_DEG_F_4; }
	inline void set_RAD_TO_DEG_F_4(float value)
	{
		___RAD_TO_DEG_F_4 = value;
	}

	inline static int32_t get_offset_of_PI_F_5() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___PI_F_5)); }
	inline float get_PI_F_5() const { return ___PI_F_5; }
	inline float* get_address_of_PI_F_5() { return &___PI_F_5; }
	inline void set_PI_F_5(float value)
	{
		___PI_F_5 = value;
	}

	inline static int32_t get_offset_of_sintable_6() { return static_cast<int32_t>(offsetof(UtMath_t3642125789_StaticFields, ___sintable_6)); }
	inline DoubleU5BU5D_t1889952540* get_sintable_6() const { return ___sintable_6; }
	inline DoubleU5BU5D_t1889952540** get_address_of_sintable_6() { return &___sintable_6; }
	inline void set_sintable_6(DoubleU5BU5D_t1889952540* value)
	{
		___sintable_6 = value;
		Il2CppCodeGenWriteBarrier(&___sintable_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
