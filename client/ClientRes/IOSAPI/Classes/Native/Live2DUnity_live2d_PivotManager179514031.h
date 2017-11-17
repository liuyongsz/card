#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<live2d.ParamPivots>
struct List_1_t448754954;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.PivotManager
struct  PivotManager_t179514031  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<live2d.ParamPivots> live2d.PivotManager::paramPivotTable
	List_1_t448754954 * ___paramPivotTable_0;

public:
	inline static int32_t get_offset_of_paramPivotTable_0() { return static_cast<int32_t>(offsetof(PivotManager_t179514031, ___paramPivotTable_0)); }
	inline List_1_t448754954 * get_paramPivotTable_0() const { return ___paramPivotTable_0; }
	inline List_1_t448754954 ** get_address_of_paramPivotTable_0() { return &___paramPivotTable_0; }
	inline void set_paramPivotTable_0(List_1_t448754954 * value)
	{
		___paramPivotTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___paramPivotTable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
