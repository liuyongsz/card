#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.PartsDataID
struct PartsDataID_t3515623201;
// System.Collections.Generic.List`1<live2d.IBaseData>
struct List_1_t1835915496;
// System.Collections.Generic.List`1<live2d.IDrawData>
struct List_1_t535417409;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.PartsData
struct  PartsData_t1575779564  : public Il2CppObject
{
public:
	// System.Boolean live2d.PartsData::visible
	bool ___visible_1;
	// System.Boolean live2d.PartsData::locked
	bool ___locked_2;
	// live2d.PartsDataID live2d.PartsData::partsID
	PartsDataID_t3515623201 * ___partsID_3;
	// System.Collections.Generic.List`1<live2d.IBaseData> live2d.PartsData::baseDataList
	List_1_t1835915496 * ___baseDataList_4;
	// System.Collections.Generic.List`1<live2d.IDrawData> live2d.PartsData::drawDataList
	List_1_t535417409 * ___drawDataList_5;

public:
	inline static int32_t get_offset_of_visible_1() { return static_cast<int32_t>(offsetof(PartsData_t1575779564, ___visible_1)); }
	inline bool get_visible_1() const { return ___visible_1; }
	inline bool* get_address_of_visible_1() { return &___visible_1; }
	inline void set_visible_1(bool value)
	{
		___visible_1 = value;
	}

	inline static int32_t get_offset_of_locked_2() { return static_cast<int32_t>(offsetof(PartsData_t1575779564, ___locked_2)); }
	inline bool get_locked_2() const { return ___locked_2; }
	inline bool* get_address_of_locked_2() { return &___locked_2; }
	inline void set_locked_2(bool value)
	{
		___locked_2 = value;
	}

	inline static int32_t get_offset_of_partsID_3() { return static_cast<int32_t>(offsetof(PartsData_t1575779564, ___partsID_3)); }
	inline PartsDataID_t3515623201 * get_partsID_3() const { return ___partsID_3; }
	inline PartsDataID_t3515623201 ** get_address_of_partsID_3() { return &___partsID_3; }
	inline void set_partsID_3(PartsDataID_t3515623201 * value)
	{
		___partsID_3 = value;
		Il2CppCodeGenWriteBarrier(&___partsID_3, value);
	}

	inline static int32_t get_offset_of_baseDataList_4() { return static_cast<int32_t>(offsetof(PartsData_t1575779564, ___baseDataList_4)); }
	inline List_1_t1835915496 * get_baseDataList_4() const { return ___baseDataList_4; }
	inline List_1_t1835915496 ** get_address_of_baseDataList_4() { return &___baseDataList_4; }
	inline void set_baseDataList_4(List_1_t1835915496 * value)
	{
		___baseDataList_4 = value;
		Il2CppCodeGenWriteBarrier(&___baseDataList_4, value);
	}

	inline static int32_t get_offset_of_drawDataList_5() { return static_cast<int32_t>(offsetof(PartsData_t1575779564, ___drawDataList_5)); }
	inline List_1_t535417409 * get_drawDataList_5() const { return ___drawDataList_5; }
	inline List_1_t535417409 ** get_address_of_drawDataList_5() { return &___drawDataList_5; }
	inline void set_drawDataList_5(List_1_t535417409 * value)
	{
		___drawDataList_5 = value;
		Il2CppCodeGenWriteBarrier(&___drawDataList_5, value);
	}
};

struct PartsData_t1575779564_StaticFields
{
public:
	// System.Int32 live2d.PartsData::INSTANCE_COUNT
	int32_t ___INSTANCE_COUNT_0;

public:
	inline static int32_t get_offset_of_INSTANCE_COUNT_0() { return static_cast<int32_t>(offsetof(PartsData_t1575779564_StaticFields, ___INSTANCE_COUNT_0)); }
	inline int32_t get_INSTANCE_COUNT_0() const { return ___INSTANCE_COUNT_0; }
	inline int32_t* get_address_of_INSTANCE_COUNT_0() { return &___INSTANCE_COUNT_0; }
	inline void set_INSTANCE_COUNT_0(int32_t value)
	{
		___INSTANCE_COUNT_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
