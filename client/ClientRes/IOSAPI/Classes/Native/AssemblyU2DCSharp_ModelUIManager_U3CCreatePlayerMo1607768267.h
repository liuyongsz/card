#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ModelUIManager/LoadHighUiModelComplete
struct LoadHighUiModelComplete_t3509429131;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelUIManager/<CreatePlayerModel>c__AnonStorey25
struct  U3CCreatePlayerModelU3Ec__AnonStorey25_t1607768267  : public Il2CppObject
{
public:
	// System.String ModelUIManager/<CreatePlayerModel>c__AnonStorey25::modelId
	String_t* ___modelId_0;
	// ModelUIManager/LoadHighUiModelComplete ModelUIManager/<CreatePlayerModel>c__AnonStorey25::call
	LoadHighUiModelComplete_t3509429131 * ___call_1;

public:
	inline static int32_t get_offset_of_modelId_0() { return static_cast<int32_t>(offsetof(U3CCreatePlayerModelU3Ec__AnonStorey25_t1607768267, ___modelId_0)); }
	inline String_t* get_modelId_0() const { return ___modelId_0; }
	inline String_t** get_address_of_modelId_0() { return &___modelId_0; }
	inline void set_modelId_0(String_t* value)
	{
		___modelId_0 = value;
		Il2CppCodeGenWriteBarrier(&___modelId_0, value);
	}

	inline static int32_t get_offset_of_call_1() { return static_cast<int32_t>(offsetof(U3CCreatePlayerModelU3Ec__AnonStorey25_t1607768267, ___call_1)); }
	inline LoadHighUiModelComplete_t3509429131 * get_call_1() const { return ___call_1; }
	inline LoadHighUiModelComplete_t3509429131 ** get_address_of_call_1() { return &___call_1; }
	inline void set_call_1(LoadHighUiModelComplete_t3509429131 * value)
	{
		___call_1 = value;
		Il2CppCodeGenWriteBarrier(&___call_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
