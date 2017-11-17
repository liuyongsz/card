#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_t527451104;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIToggledComponents
struct  UIToggledComponents_t1876468998  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> UIToggledComponents::activate
	List_1_t527451104 * ___activate_2;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> UIToggledComponents::deactivate
	List_1_t527451104 * ___deactivate_3;
	// UnityEngine.MonoBehaviour UIToggledComponents::target
	MonoBehaviour_t1158329972 * ___target_4;
	// System.Boolean UIToggledComponents::inverse
	bool ___inverse_5;

public:
	inline static int32_t get_offset_of_activate_2() { return static_cast<int32_t>(offsetof(UIToggledComponents_t1876468998, ___activate_2)); }
	inline List_1_t527451104 * get_activate_2() const { return ___activate_2; }
	inline List_1_t527451104 ** get_address_of_activate_2() { return &___activate_2; }
	inline void set_activate_2(List_1_t527451104 * value)
	{
		___activate_2 = value;
		Il2CppCodeGenWriteBarrier(&___activate_2, value);
	}

	inline static int32_t get_offset_of_deactivate_3() { return static_cast<int32_t>(offsetof(UIToggledComponents_t1876468998, ___deactivate_3)); }
	inline List_1_t527451104 * get_deactivate_3() const { return ___deactivate_3; }
	inline List_1_t527451104 ** get_address_of_deactivate_3() { return &___deactivate_3; }
	inline void set_deactivate_3(List_1_t527451104 * value)
	{
		___deactivate_3 = value;
		Il2CppCodeGenWriteBarrier(&___deactivate_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(UIToggledComponents_t1876468998, ___target_4)); }
	inline MonoBehaviour_t1158329972 * get_target_4() const { return ___target_4; }
	inline MonoBehaviour_t1158329972 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(MonoBehaviour_t1158329972 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_inverse_5() { return static_cast<int32_t>(offsetof(UIToggledComponents_t1876468998, ___inverse_5)); }
	inline bool get_inverse_5() const { return ___inverse_5; }
	inline bool* get_address_of_inverse_5() { return &___inverse_5; }
	inline void set_inverse_5(bool value)
	{
		___inverse_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
