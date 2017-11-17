#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighlightingSystem.Highlighter
struct Highlighter_t958778585;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test_HightLighting
struct  Test_HightLighting_t2834558967  : public MonoBehaviour_t1158329972
{
public:
	// HighlightingSystem.Highlighter Test_HightLighting::hlighter
	Highlighter_t958778585 * ___hlighter_2;
	// System.Boolean Test_HightLighting::Show
	bool ___Show_3;

public:
	inline static int32_t get_offset_of_hlighter_2() { return static_cast<int32_t>(offsetof(Test_HightLighting_t2834558967, ___hlighter_2)); }
	inline Highlighter_t958778585 * get_hlighter_2() const { return ___hlighter_2; }
	inline Highlighter_t958778585 ** get_address_of_hlighter_2() { return &___hlighter_2; }
	inline void set_hlighter_2(Highlighter_t958778585 * value)
	{
		___hlighter_2 = value;
		Il2CppCodeGenWriteBarrier(&___hlighter_2, value);
	}

	inline static int32_t get_offset_of_Show_3() { return static_cast<int32_t>(offsetof(Test_HightLighting_t2834558967, ___Show_3)); }
	inline bool get_Show_3() const { return ___Show_3; }
	inline bool* get_address_of_Show_3() { return &___Show_3; }
	inline void set_Show_3(bool value)
	{
		___Show_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
