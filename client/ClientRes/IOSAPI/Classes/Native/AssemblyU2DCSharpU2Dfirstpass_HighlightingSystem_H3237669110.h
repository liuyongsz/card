#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<HighlightingSystem.Highlighter>
struct HashSet_1_t3587206735;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlighterManager
struct  HighlighterManager_t3237669110  : public Il2CppObject
{
public:

public:
};

struct HighlighterManager_t3237669110_StaticFields
{
public:
	// System.Int32 HighlightingSystem.HighlighterManager::dirtyFrame
	int32_t ___dirtyFrame_0;
	// System.Collections.Generic.HashSet`1<HighlightingSystem.Highlighter> HighlightingSystem.HighlighterManager::highlighters
	HashSet_1_t3587206735 * ___highlighters_1;

public:
	inline static int32_t get_offset_of_dirtyFrame_0() { return static_cast<int32_t>(offsetof(HighlighterManager_t3237669110_StaticFields, ___dirtyFrame_0)); }
	inline int32_t get_dirtyFrame_0() const { return ___dirtyFrame_0; }
	inline int32_t* get_address_of_dirtyFrame_0() { return &___dirtyFrame_0; }
	inline void set_dirtyFrame_0(int32_t value)
	{
		___dirtyFrame_0 = value;
	}

	inline static int32_t get_offset_of_highlighters_1() { return static_cast<int32_t>(offsetof(HighlighterManager_t3237669110_StaticFields, ___highlighters_1)); }
	inline HashSet_1_t3587206735 * get_highlighters_1() const { return ___highlighters_1; }
	inline HashSet_1_t3587206735 ** get_address_of_highlighters_1() { return &___highlighters_1; }
	inline void set_highlighters_1(HashSet_1_t3587206735 * value)
	{
		___highlighters_1 = value;
		Il2CppCodeGenWriteBarrier(&___highlighters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
