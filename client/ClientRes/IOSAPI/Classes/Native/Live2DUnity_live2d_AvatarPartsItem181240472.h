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

// live2d.AvatarPartsItem
struct  AvatarPartsItem_t181240472  : public Il2CppObject
{
public:
	// live2d.PartsDataID live2d.AvatarPartsItem::partsID
	PartsDataID_t3515623201 * ___partsID_0;
	// System.Int32 live2d.AvatarPartsItem::partsNo
	int32_t ___partsNo_1;
	// System.Collections.Generic.List`1<live2d.IBaseData> live2d.AvatarPartsItem::baseDataList
	List_1_t1835915496 * ___baseDataList_2;
	// System.Collections.Generic.List`1<live2d.IDrawData> live2d.AvatarPartsItem::drawDataList
	List_1_t535417409 * ___drawDataList_3;

public:
	inline static int32_t get_offset_of_partsID_0() { return static_cast<int32_t>(offsetof(AvatarPartsItem_t181240472, ___partsID_0)); }
	inline PartsDataID_t3515623201 * get_partsID_0() const { return ___partsID_0; }
	inline PartsDataID_t3515623201 ** get_address_of_partsID_0() { return &___partsID_0; }
	inline void set_partsID_0(PartsDataID_t3515623201 * value)
	{
		___partsID_0 = value;
		Il2CppCodeGenWriteBarrier(&___partsID_0, value);
	}

	inline static int32_t get_offset_of_partsNo_1() { return static_cast<int32_t>(offsetof(AvatarPartsItem_t181240472, ___partsNo_1)); }
	inline int32_t get_partsNo_1() const { return ___partsNo_1; }
	inline int32_t* get_address_of_partsNo_1() { return &___partsNo_1; }
	inline void set_partsNo_1(int32_t value)
	{
		___partsNo_1 = value;
	}

	inline static int32_t get_offset_of_baseDataList_2() { return static_cast<int32_t>(offsetof(AvatarPartsItem_t181240472, ___baseDataList_2)); }
	inline List_1_t1835915496 * get_baseDataList_2() const { return ___baseDataList_2; }
	inline List_1_t1835915496 ** get_address_of_baseDataList_2() { return &___baseDataList_2; }
	inline void set_baseDataList_2(List_1_t1835915496 * value)
	{
		___baseDataList_2 = value;
		Il2CppCodeGenWriteBarrier(&___baseDataList_2, value);
	}

	inline static int32_t get_offset_of_drawDataList_3() { return static_cast<int32_t>(offsetof(AvatarPartsItem_t181240472, ___drawDataList_3)); }
	inline List_1_t535417409 * get_drawDataList_3() const { return ___drawDataList_3; }
	inline List_1_t535417409 ** get_address_of_drawDataList_3() { return &___drawDataList_3; }
	inline void set_drawDataList_3(List_1_t535417409 * value)
	{
		___drawDataList_3 = value;
		Il2CppCodeGenWriteBarrier(&___drawDataList_3, value);
	}
};

struct AvatarPartsItem_t181240472_StaticFields
{
public:
	// System.Int32 live2d.AvatarPartsItem::INSTANCE_COUNT
	int32_t ___INSTANCE_COUNT_4;

public:
	inline static int32_t get_offset_of_INSTANCE_COUNT_4() { return static_cast<int32_t>(offsetof(AvatarPartsItem_t181240472_StaticFields, ___INSTANCE_COUNT_4)); }
	inline int32_t get_INSTANCE_COUNT_4() const { return ___INSTANCE_COUNT_4; }
	inline int32_t* get_address_of_INSTANCE_COUNT_4() { return &___INSTANCE_COUNT_4; }
	inline void set_INSTANCE_COUNT_4(int32_t value)
	{
		___INSTANCE_COUNT_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
