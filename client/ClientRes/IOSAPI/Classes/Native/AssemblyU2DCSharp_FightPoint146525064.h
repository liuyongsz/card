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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FightPoint
struct  FightPoint_t146525064  : public MonoBehaviour_t1158329972
{
public:
	// System.String FightPoint::Icon
	String_t* ___Icon_2;

public:
	inline static int32_t get_offset_of_Icon_2() { return static_cast<int32_t>(offsetof(FightPoint_t146525064, ___Icon_2)); }
	inline String_t* get_Icon_2() const { return ___Icon_2; }
	inline String_t** get_address_of_Icon_2() { return &___Icon_2; }
	inline void set_Icon_2(String_t* value)
	{
		___Icon_2 = value;
		Il2CppCodeGenWriteBarrier(&___Icon_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
