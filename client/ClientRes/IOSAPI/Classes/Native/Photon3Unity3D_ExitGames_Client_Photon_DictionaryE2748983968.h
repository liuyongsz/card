#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DictionaryEntryEnumerator
struct  DictionaryEntryEnumerator_t2748983968  : public Il2CppObject
{
public:
	// System.Collections.IDictionaryEnumerator ExitGames.Client.Photon.DictionaryEntryEnumerator::enumerator
	Il2CppObject * ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(DictionaryEntryEnumerator_t2748983968, ___enumerator_0)); }
	inline Il2CppObject * get_enumerator_0() const { return ___enumerator_0; }
	inline Il2CppObject ** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(Il2CppObject * value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___enumerator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
