#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TrailRenderer
struct TrailRenderer_t2490637367;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test_Order
struct  Test_Order_t3367217525  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TrailRenderer Test_Order::Render
	TrailRenderer_t2490637367 * ___Render_2;

public:
	inline static int32_t get_offset_of_Render_2() { return static_cast<int32_t>(offsetof(Test_Order_t3367217525, ___Render_2)); }
	inline TrailRenderer_t2490637367 * get_Render_2() const { return ___Render_2; }
	inline TrailRenderer_t2490637367 ** get_address_of_Render_2() { return &___Render_2; }
	inline void set_Render_2(TrailRenderer_t2490637367 * value)
	{
		___Render_2 = value;
		Il2CppCodeGenWriteBarrier(&___Render_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
