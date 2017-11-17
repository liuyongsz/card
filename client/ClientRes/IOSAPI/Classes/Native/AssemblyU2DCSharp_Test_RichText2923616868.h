#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRichText
struct UIRichText_t2941036835;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test_RichText
struct  Test_RichText_t2923616868  : public MonoBehaviour_t1158329972
{
public:
	// UIRichText Test_RichText::RichTxt
	UIRichText_t2941036835 * ___RichTxt_2;

public:
	inline static int32_t get_offset_of_RichTxt_2() { return static_cast<int32_t>(offsetof(Test_RichText_t2923616868, ___RichTxt_2)); }
	inline UIRichText_t2941036835 * get_RichTxt_2() const { return ___RichTxt_2; }
	inline UIRichText_t2941036835 ** get_address_of_RichTxt_2() { return &___RichTxt_2; }
	inline void set_RichTxt_2(UIRichText_t2941036835 * value)
	{
		___RichTxt_2 = value;
		Il2CppCodeGenWriteBarrier(&___RichTxt_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
