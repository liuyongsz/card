#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Collections.Generic.List`1<HighlightingSystem.Highlighter/RendererCache/Data>
struct List_1_t2395669523;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.Highlighter/RendererCache
struct  RendererCache_t2038398092  : public Il2CppObject
{
public:
	// UnityEngine.GameObject HighlightingSystem.Highlighter/RendererCache::go
	GameObject_t1756533147 * ___go_2;
	// UnityEngine.Renderer HighlightingSystem.Highlighter/RendererCache::renderer
	Renderer_t257310565 * ___renderer_3;
	// System.Collections.Generic.List`1<HighlightingSystem.Highlighter/RendererCache/Data> HighlightingSystem.Highlighter/RendererCache::data
	List_1_t2395669523 * ___data_4;
	// System.Boolean HighlightingSystem.Highlighter/RendererCache::<visible>k__BackingField
	bool ___U3CvisibleU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_go_2() { return static_cast<int32_t>(offsetof(RendererCache_t2038398092, ___go_2)); }
	inline GameObject_t1756533147 * get_go_2() const { return ___go_2; }
	inline GameObject_t1756533147 ** get_address_of_go_2() { return &___go_2; }
	inline void set_go_2(GameObject_t1756533147 * value)
	{
		___go_2 = value;
		Il2CppCodeGenWriteBarrier(&___go_2, value);
	}

	inline static int32_t get_offset_of_renderer_3() { return static_cast<int32_t>(offsetof(RendererCache_t2038398092, ___renderer_3)); }
	inline Renderer_t257310565 * get_renderer_3() const { return ___renderer_3; }
	inline Renderer_t257310565 ** get_address_of_renderer_3() { return &___renderer_3; }
	inline void set_renderer_3(Renderer_t257310565 * value)
	{
		___renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___renderer_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(RendererCache_t2038398092, ___data_4)); }
	inline List_1_t2395669523 * get_data_4() const { return ___data_4; }
	inline List_1_t2395669523 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(List_1_t2395669523 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}

	inline static int32_t get_offset_of_U3CvisibleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RendererCache_t2038398092, ___U3CvisibleU3Ek__BackingField_5)); }
	inline bool get_U3CvisibleU3Ek__BackingField_5() const { return ___U3CvisibleU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CvisibleU3Ek__BackingField_5() { return &___U3CvisibleU3Ek__BackingField_5; }
	inline void set_U3CvisibleU3Ek__BackingField_5(bool value)
	{
		___U3CvisibleU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
