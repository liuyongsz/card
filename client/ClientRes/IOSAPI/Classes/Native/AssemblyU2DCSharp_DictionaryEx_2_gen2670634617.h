#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_Collections_Generic_Dictionary_2_ge764358782.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DictionaryEx`2<System.Int32,UnityEngine.GameObject>
struct  DictionaryEx_2_t2670634617  : public Dictionary_2_t764358782
{
public:
	// System.Collections.Generic.List`1<TKey> DictionaryEx`2::mList
	List_1_t1440998580 * ___mList_16;

public:
	inline static int32_t get_offset_of_mList_16() { return static_cast<int32_t>(offsetof(DictionaryEx_2_t2670634617, ___mList_16)); }
	inline List_1_t1440998580 * get_mList_16() const { return ___mList_16; }
	inline List_1_t1440998580 ** get_address_of_mList_16() { return &___mList_16; }
	inline void set_mList_16(List_1_t1440998580 * value)
	{
		___mList_16 = value;
		Il2CppCodeGenWriteBarrier(&___mList_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
