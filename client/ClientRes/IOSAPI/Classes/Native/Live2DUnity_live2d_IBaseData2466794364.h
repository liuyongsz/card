#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.BaseDataID
struct BaseDataID_t3014180214;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.IBaseData
struct  IBaseData_t2466794364  : public Il2CppObject
{
public:
	// live2d.BaseDataID live2d.IBaseData::baseDataID
	BaseDataID_t3014180214 * ___baseDataID_3;
	// live2d.BaseDataID live2d.IBaseData::targetBaseDataID
	BaseDataID_t3014180214 * ___targetBaseDataID_4;
	// System.Boolean live2d.IBaseData::dirty
	bool ___dirty_5;
	// System.Single[] live2d.IBaseData::pivotOpacity
	SingleU5BU5D_t577127397* ___pivotOpacity_6;

public:
	inline static int32_t get_offset_of_baseDataID_3() { return static_cast<int32_t>(offsetof(IBaseData_t2466794364, ___baseDataID_3)); }
	inline BaseDataID_t3014180214 * get_baseDataID_3() const { return ___baseDataID_3; }
	inline BaseDataID_t3014180214 ** get_address_of_baseDataID_3() { return &___baseDataID_3; }
	inline void set_baseDataID_3(BaseDataID_t3014180214 * value)
	{
		___baseDataID_3 = value;
		Il2CppCodeGenWriteBarrier(&___baseDataID_3, value);
	}

	inline static int32_t get_offset_of_targetBaseDataID_4() { return static_cast<int32_t>(offsetof(IBaseData_t2466794364, ___targetBaseDataID_4)); }
	inline BaseDataID_t3014180214 * get_targetBaseDataID_4() const { return ___targetBaseDataID_4; }
	inline BaseDataID_t3014180214 ** get_address_of_targetBaseDataID_4() { return &___targetBaseDataID_4; }
	inline void set_targetBaseDataID_4(BaseDataID_t3014180214 * value)
	{
		___targetBaseDataID_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetBaseDataID_4, value);
	}

	inline static int32_t get_offset_of_dirty_5() { return static_cast<int32_t>(offsetof(IBaseData_t2466794364, ___dirty_5)); }
	inline bool get_dirty_5() const { return ___dirty_5; }
	inline bool* get_address_of_dirty_5() { return &___dirty_5; }
	inline void set_dirty_5(bool value)
	{
		___dirty_5 = value;
	}

	inline static int32_t get_offset_of_pivotOpacity_6() { return static_cast<int32_t>(offsetof(IBaseData_t2466794364, ___pivotOpacity_6)); }
	inline SingleU5BU5D_t577127397* get_pivotOpacity_6() const { return ___pivotOpacity_6; }
	inline SingleU5BU5D_t577127397** get_address_of_pivotOpacity_6() { return &___pivotOpacity_6; }
	inline void set_pivotOpacity_6(SingleU5BU5D_t577127397* value)
	{
		___pivotOpacity_6 = value;
		Il2CppCodeGenWriteBarrier(&___pivotOpacity_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
