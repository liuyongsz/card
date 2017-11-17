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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// banddi
struct  banddi_t2732468388  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color banddi::me
	Color_t2020392075  ___me_2;
	// UnityEngine.GameObject banddi::son
	GameObject_t1756533147 * ___son_3;

public:
	inline static int32_t get_offset_of_me_2() { return static_cast<int32_t>(offsetof(banddi_t2732468388, ___me_2)); }
	inline Color_t2020392075  get_me_2() const { return ___me_2; }
	inline Color_t2020392075 * get_address_of_me_2() { return &___me_2; }
	inline void set_me_2(Color_t2020392075  value)
	{
		___me_2 = value;
	}

	inline static int32_t get_offset_of_son_3() { return static_cast<int32_t>(offsetof(banddi_t2732468388, ___son_3)); }
	inline GameObject_t1756533147 * get_son_3() const { return ___son_3; }
	inline GameObject_t1756533147 ** get_address_of_son_3() { return &___son_3; }
	inline void set_son_3(GameObject_t1756533147 * value)
	{
		___son_3 = value;
		Il2CppCodeGenWriteBarrier(&___son_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
