#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ResolutionConstrain
struct ResolutionConstrain_t2194537585;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResolutionConstrain
struct  ResolutionConstrain_t2194537585  : public Il2CppObject
{
public:
	// System.Double ResolutionConstrain::dbigRatioPixles
	double ___dbigRatioPixles_7;
	// UnityEngine.Vector2 ResolutionConstrain::currentResolution
	Vector2_t2243707579  ___currentResolution_8;

public:
	inline static int32_t get_offset_of_dbigRatioPixles_7() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585, ___dbigRatioPixles_7)); }
	inline double get_dbigRatioPixles_7() const { return ___dbigRatioPixles_7; }
	inline double* get_address_of_dbigRatioPixles_7() { return &___dbigRatioPixles_7; }
	inline void set_dbigRatioPixles_7(double value)
	{
		___dbigRatioPixles_7 = value;
	}

	inline static int32_t get_offset_of_currentResolution_8() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585, ___currentResolution_8)); }
	inline Vector2_t2243707579  get_currentResolution_8() const { return ___currentResolution_8; }
	inline Vector2_t2243707579 * get_address_of_currentResolution_8() { return &___currentResolution_8; }
	inline void set_currentResolution_8(Vector2_t2243707579  value)
	{
		___currentResolution_8 = value;
	}
};

struct ResolutionConstrain_t2194537585_StaticFields
{
public:
	// System.Int32 ResolutionConstrain::ScreenWidth
	int32_t ___ScreenWidth_3;
	// System.Int32 ResolutionConstrain::ScreenHeight
	int32_t ___ScreenHeight_4;
	// UnityEngine.Vector2 ResolutionConstrain::SmallResolution
	Vector2_t2243707579  ___SmallResolution_5;
	// UnityEngine.Vector2 ResolutionConstrain::BigResolution
	Vector2_t2243707579  ___BigResolution_6;
	// ResolutionConstrain ResolutionConstrain::_instance
	ResolutionConstrain_t2194537585 * ____instance_9;

public:
	inline static int32_t get_offset_of_ScreenWidth_3() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585_StaticFields, ___ScreenWidth_3)); }
	inline int32_t get_ScreenWidth_3() const { return ___ScreenWidth_3; }
	inline int32_t* get_address_of_ScreenWidth_3() { return &___ScreenWidth_3; }
	inline void set_ScreenWidth_3(int32_t value)
	{
		___ScreenWidth_3 = value;
	}

	inline static int32_t get_offset_of_ScreenHeight_4() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585_StaticFields, ___ScreenHeight_4)); }
	inline int32_t get_ScreenHeight_4() const { return ___ScreenHeight_4; }
	inline int32_t* get_address_of_ScreenHeight_4() { return &___ScreenHeight_4; }
	inline void set_ScreenHeight_4(int32_t value)
	{
		___ScreenHeight_4 = value;
	}

	inline static int32_t get_offset_of_SmallResolution_5() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585_StaticFields, ___SmallResolution_5)); }
	inline Vector2_t2243707579  get_SmallResolution_5() const { return ___SmallResolution_5; }
	inline Vector2_t2243707579 * get_address_of_SmallResolution_5() { return &___SmallResolution_5; }
	inline void set_SmallResolution_5(Vector2_t2243707579  value)
	{
		___SmallResolution_5 = value;
	}

	inline static int32_t get_offset_of_BigResolution_6() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585_StaticFields, ___BigResolution_6)); }
	inline Vector2_t2243707579  get_BigResolution_6() const { return ___BigResolution_6; }
	inline Vector2_t2243707579 * get_address_of_BigResolution_6() { return &___BigResolution_6; }
	inline void set_BigResolution_6(Vector2_t2243707579  value)
	{
		___BigResolution_6 = value;
	}

	inline static int32_t get_offset_of__instance_9() { return static_cast<int32_t>(offsetof(ResolutionConstrain_t2194537585_StaticFields, ____instance_9)); }
	inline ResolutionConstrain_t2194537585 * get__instance_9() const { return ____instance_9; }
	inline ResolutionConstrain_t2194537585 ** get_address_of__instance_9() { return &____instance_9; }
	inline void set__instance_9(ResolutionConstrain_t2194537585 * value)
	{
		____instance_9 = value;
		Il2CppCodeGenWriteBarrier(&____instance_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
