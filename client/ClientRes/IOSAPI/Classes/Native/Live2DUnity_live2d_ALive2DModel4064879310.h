#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.ModelImpl
struct ModelImpl_t1058113623;
// live2d.ModelContext
struct ModelContext_t1483254982;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_ALive2DModel_ModelDrawMethodVer3961850415.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ALive2DModel
struct  ALive2DModel_t4064879310  : public Il2CppObject
{
public:
	// live2d.ModelImpl live2d.ALive2DModel::modelImpl
	ModelImpl_t1058113623 * ___modelImpl_3;
	// live2d.ModelContext live2d.ALive2DModel::modelContext
	ModelContext_t1483254982 * ___modelContext_4;
	// System.Int32 live2d.ALive2DModel::errorFlags
	int32_t ___errorFlags_5;
	// System.Boolean live2d.ALive2DModel::loading
	bool ___loading_6;
	// live2d.ALive2DModel/ModelDrawMethodVersion live2d.ALive2DModel::modelDrawMethodVersion
	int32_t ___modelDrawMethodVersion_7;

public:
	inline static int32_t get_offset_of_modelImpl_3() { return static_cast<int32_t>(offsetof(ALive2DModel_t4064879310, ___modelImpl_3)); }
	inline ModelImpl_t1058113623 * get_modelImpl_3() const { return ___modelImpl_3; }
	inline ModelImpl_t1058113623 ** get_address_of_modelImpl_3() { return &___modelImpl_3; }
	inline void set_modelImpl_3(ModelImpl_t1058113623 * value)
	{
		___modelImpl_3 = value;
		Il2CppCodeGenWriteBarrier(&___modelImpl_3, value);
	}

	inline static int32_t get_offset_of_modelContext_4() { return static_cast<int32_t>(offsetof(ALive2DModel_t4064879310, ___modelContext_4)); }
	inline ModelContext_t1483254982 * get_modelContext_4() const { return ___modelContext_4; }
	inline ModelContext_t1483254982 ** get_address_of_modelContext_4() { return &___modelContext_4; }
	inline void set_modelContext_4(ModelContext_t1483254982 * value)
	{
		___modelContext_4 = value;
		Il2CppCodeGenWriteBarrier(&___modelContext_4, value);
	}

	inline static int32_t get_offset_of_errorFlags_5() { return static_cast<int32_t>(offsetof(ALive2DModel_t4064879310, ___errorFlags_5)); }
	inline int32_t get_errorFlags_5() const { return ___errorFlags_5; }
	inline int32_t* get_address_of_errorFlags_5() { return &___errorFlags_5; }
	inline void set_errorFlags_5(int32_t value)
	{
		___errorFlags_5 = value;
	}

	inline static int32_t get_offset_of_loading_6() { return static_cast<int32_t>(offsetof(ALive2DModel_t4064879310, ___loading_6)); }
	inline bool get_loading_6() const { return ___loading_6; }
	inline bool* get_address_of_loading_6() { return &___loading_6; }
	inline void set_loading_6(bool value)
	{
		___loading_6 = value;
	}

	inline static int32_t get_offset_of_modelDrawMethodVersion_7() { return static_cast<int32_t>(offsetof(ALive2DModel_t4064879310, ___modelDrawMethodVersion_7)); }
	inline int32_t get_modelDrawMethodVersion_7() const { return ___modelDrawMethodVersion_7; }
	inline int32_t* get_address_of_modelDrawMethodVersion_7() { return &___modelDrawMethodVersion_7; }
	inline void set_modelDrawMethodVersion_7(int32_t value)
	{
		___modelDrawMethodVersion_7 = value;
	}
};

struct ALive2DModel_t4064879310_StaticFields
{
public:
	// System.Int32 live2d.ALive2DModel::INSTANCE_COUNT
	int32_t ___INSTANCE_COUNT_2;

public:
	inline static int32_t get_offset_of_INSTANCE_COUNT_2() { return static_cast<int32_t>(offsetof(ALive2DModel_t4064879310_StaticFields, ___INSTANCE_COUNT_2)); }
	inline int32_t get_INSTANCE_COUNT_2() const { return ___INSTANCE_COUNT_2; }
	inline int32_t* get_address_of_INSTANCE_COUNT_2() { return &___INSTANCE_COUNT_2; }
	inline void set_INSTANCE_COUNT_2(int32_t value)
	{
		___INSTANCE_COUNT_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
