#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGrid
struct UIGrid_t2420180906;
// UIGrid/OnUpdateDataRow
struct OnUpdateDataRow_t314779399;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGridTest
struct  UIGridTest_t3399504378  : public MonoBehaviour_t1158329972
{
public:
	// UIGrid UIGridTest::MyGrid
	UIGrid_t2420180906 * ___MyGrid_2;

public:
	inline static int32_t get_offset_of_MyGrid_2() { return static_cast<int32_t>(offsetof(UIGridTest_t3399504378, ___MyGrid_2)); }
	inline UIGrid_t2420180906 * get_MyGrid_2() const { return ___MyGrid_2; }
	inline UIGrid_t2420180906 ** get_address_of_MyGrid_2() { return &___MyGrid_2; }
	inline void set_MyGrid_2(UIGrid_t2420180906 * value)
	{
		___MyGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___MyGrid_2, value);
	}
};

struct UIGridTest_t3399504378_StaticFields
{
public:
	// UIGrid/OnUpdateDataRow UIGridTest::<>f__am$cache1
	OnUpdateDataRow_t314779399 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(UIGridTest_t3399504378_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline OnUpdateDataRow_t314779399 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline OnUpdateDataRow_t314779399 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(OnUpdateDataRow_t314779399 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
