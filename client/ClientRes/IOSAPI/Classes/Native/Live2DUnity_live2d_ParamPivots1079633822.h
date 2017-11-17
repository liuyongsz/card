#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.ParamID
struct ParamID_t2293315874;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ParamPivots
struct  ParamPivots_t1079633822  : public Il2CppObject
{
public:
	// System.Int32 live2d.ParamPivots::pivotCount
	int32_t ___pivotCount_0;
	// live2d.ParamID live2d.ParamPivots::paramID
	ParamID_t2293315874 * ___paramID_1;
	// System.Single[] live2d.ParamPivots::pivotValue
	SingleU5BU5D_t577127397* ___pivotValue_2;
	// System.Int32 live2d.ParamPivots::_paramIndex
	int32_t ____paramIndex_3;
	// System.Int32 live2d.ParamPivots::indexInitVersion
	int32_t ___indexInitVersion_4;
	// System.Int32 live2d.ParamPivots::tmpPivotIndex
	int32_t ___tmpPivotIndex_5;
	// System.Single live2d.ParamPivots::tmpT
	float ___tmpT_6;

public:
	inline static int32_t get_offset_of_pivotCount_0() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ___pivotCount_0)); }
	inline int32_t get_pivotCount_0() const { return ___pivotCount_0; }
	inline int32_t* get_address_of_pivotCount_0() { return &___pivotCount_0; }
	inline void set_pivotCount_0(int32_t value)
	{
		___pivotCount_0 = value;
	}

	inline static int32_t get_offset_of_paramID_1() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ___paramID_1)); }
	inline ParamID_t2293315874 * get_paramID_1() const { return ___paramID_1; }
	inline ParamID_t2293315874 ** get_address_of_paramID_1() { return &___paramID_1; }
	inline void set_paramID_1(ParamID_t2293315874 * value)
	{
		___paramID_1 = value;
		Il2CppCodeGenWriteBarrier(&___paramID_1, value);
	}

	inline static int32_t get_offset_of_pivotValue_2() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ___pivotValue_2)); }
	inline SingleU5BU5D_t577127397* get_pivotValue_2() const { return ___pivotValue_2; }
	inline SingleU5BU5D_t577127397** get_address_of_pivotValue_2() { return &___pivotValue_2; }
	inline void set_pivotValue_2(SingleU5BU5D_t577127397* value)
	{
		___pivotValue_2 = value;
		Il2CppCodeGenWriteBarrier(&___pivotValue_2, value);
	}

	inline static int32_t get_offset_of__paramIndex_3() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ____paramIndex_3)); }
	inline int32_t get__paramIndex_3() const { return ____paramIndex_3; }
	inline int32_t* get_address_of__paramIndex_3() { return &____paramIndex_3; }
	inline void set__paramIndex_3(int32_t value)
	{
		____paramIndex_3 = value;
	}

	inline static int32_t get_offset_of_indexInitVersion_4() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ___indexInitVersion_4)); }
	inline int32_t get_indexInitVersion_4() const { return ___indexInitVersion_4; }
	inline int32_t* get_address_of_indexInitVersion_4() { return &___indexInitVersion_4; }
	inline void set_indexInitVersion_4(int32_t value)
	{
		___indexInitVersion_4 = value;
	}

	inline static int32_t get_offset_of_tmpPivotIndex_5() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ___tmpPivotIndex_5)); }
	inline int32_t get_tmpPivotIndex_5() const { return ___tmpPivotIndex_5; }
	inline int32_t* get_address_of_tmpPivotIndex_5() { return &___tmpPivotIndex_5; }
	inline void set_tmpPivotIndex_5(int32_t value)
	{
		___tmpPivotIndex_5 = value;
	}

	inline static int32_t get_offset_of_tmpT_6() { return static_cast<int32_t>(offsetof(ParamPivots_t1079633822, ___tmpT_6)); }
	inline float get_tmpT_6() const { return ___tmpT_6; }
	inline float* get_address_of_tmpT_6() { return &___tmpT_6; }
	inline void set_tmpT_6(float value)
	{
		___tmpT_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
