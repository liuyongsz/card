#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<live2d.ParamDefFloat>
struct List_1_t1603142676;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ParamDefSet
struct  ParamDefSet_t2724450206  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<live2d.ParamDefFloat> live2d.ParamDefSet::paramDefList
	List_1_t1603142676 * ___paramDefList_0;

public:
	inline static int32_t get_offset_of_paramDefList_0() { return static_cast<int32_t>(offsetof(ParamDefSet_t2724450206, ___paramDefList_0)); }
	inline List_1_t1603142676 * get_paramDefList_0() const { return ___paramDefList_0; }
	inline List_1_t1603142676 ** get_address_of_paramDefList_0() { return &___paramDefList_0; }
	inline void set_paramDefList_0(List_1_t1603142676 * value)
	{
		___paramDefList_0 = value;
		Il2CppCodeGenWriteBarrier(&___paramDefList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
