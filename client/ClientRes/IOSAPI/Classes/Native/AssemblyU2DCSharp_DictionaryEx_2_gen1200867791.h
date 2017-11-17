#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Collections_Generic_Dictionary_2_g3589559252.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DictionaryEx`2<System.String,TimerManager/Timer>
struct  DictionaryEx_2_t1200867791  : public Dictionary_2_t3589559252
{
public:
	// System.Collections.Generic.List`1<TKey> DictionaryEx`2::mList
	List_1_t1398341365 * ___mList_16;

public:
	inline static int32_t get_offset_of_mList_16() { return static_cast<int32_t>(offsetof(DictionaryEx_2_t1200867791, ___mList_16)); }
	inline List_1_t1398341365 * get_mList_16() const { return ___mList_16; }
	inline List_1_t1398341365 ** get_address_of_mList_16() { return &___mList_16; }
	inline void set_mList_16(List_1_t1398341365 * value)
	{
		___mList_16 = value;
		Il2CppCodeGenWriteBarrier(&___mList_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
