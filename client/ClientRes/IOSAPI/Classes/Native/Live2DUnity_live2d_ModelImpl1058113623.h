#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.ParamDefSet
struct ParamDefSet_t2724450206;
// System.Collections.Generic.List`1<live2d.PartsData>
struct List_1_t944900696;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ModelImpl
struct  ModelImpl_t1058113623  : public Il2CppObject
{
public:
	// live2d.ParamDefSet live2d.ModelImpl::paramDefSet
	ParamDefSet_t2724450206 * ___paramDefSet_1;
	// System.Collections.Generic.List`1<live2d.PartsData> live2d.ModelImpl::partsDataList
	List_1_t944900696 * ___partsDataList_2;
	// System.Int32 live2d.ModelImpl::canvasWidth
	int32_t ___canvasWidth_3;
	// System.Int32 live2d.ModelImpl::canvasHeight
	int32_t ___canvasHeight_4;

public:
	inline static int32_t get_offset_of_paramDefSet_1() { return static_cast<int32_t>(offsetof(ModelImpl_t1058113623, ___paramDefSet_1)); }
	inline ParamDefSet_t2724450206 * get_paramDefSet_1() const { return ___paramDefSet_1; }
	inline ParamDefSet_t2724450206 ** get_address_of_paramDefSet_1() { return &___paramDefSet_1; }
	inline void set_paramDefSet_1(ParamDefSet_t2724450206 * value)
	{
		___paramDefSet_1 = value;
		Il2CppCodeGenWriteBarrier(&___paramDefSet_1, value);
	}

	inline static int32_t get_offset_of_partsDataList_2() { return static_cast<int32_t>(offsetof(ModelImpl_t1058113623, ___partsDataList_2)); }
	inline List_1_t944900696 * get_partsDataList_2() const { return ___partsDataList_2; }
	inline List_1_t944900696 ** get_address_of_partsDataList_2() { return &___partsDataList_2; }
	inline void set_partsDataList_2(List_1_t944900696 * value)
	{
		___partsDataList_2 = value;
		Il2CppCodeGenWriteBarrier(&___partsDataList_2, value);
	}

	inline static int32_t get_offset_of_canvasWidth_3() { return static_cast<int32_t>(offsetof(ModelImpl_t1058113623, ___canvasWidth_3)); }
	inline int32_t get_canvasWidth_3() const { return ___canvasWidth_3; }
	inline int32_t* get_address_of_canvasWidth_3() { return &___canvasWidth_3; }
	inline void set_canvasWidth_3(int32_t value)
	{
		___canvasWidth_3 = value;
	}

	inline static int32_t get_offset_of_canvasHeight_4() { return static_cast<int32_t>(offsetof(ModelImpl_t1058113623, ___canvasHeight_4)); }
	inline int32_t get_canvasHeight_4() const { return ___canvasHeight_4; }
	inline int32_t* get_address_of_canvasHeight_4() { return &___canvasHeight_4; }
	inline void set_canvasHeight_4(int32_t value)
	{
		___canvasHeight_4 = value;
	}
};

struct ModelImpl_t1058113623_StaticFields
{
public:
	// System.Int32 live2d.ModelImpl::INSTANCE_COUNT
	int32_t ___INSTANCE_COUNT_0;

public:
	inline static int32_t get_offset_of_INSTANCE_COUNT_0() { return static_cast<int32_t>(offsetof(ModelImpl_t1058113623_StaticFields, ___INSTANCE_COUNT_0)); }
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
