#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.ALive2DModel
struct ALive2DModel_t4064879310;
// live2d.ParamID[]
struct ParamIDU5BU5D_t2566349847;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Collections.Generic.List`1<live2d.IBaseData>
struct List_1_t1835915496;
// System.Collections.Generic.List`1<live2d.IDrawData>
struct List_1_t535417409;
// System.Collections.Generic.Dictionary`2<live2d.DrawDataID,live2d.IDrawData>
struct Dictionary_2_t179719435;
// System.Collections.Generic.List`1<live2d.PartsData>
struct List_1_t944900696;
// System.Collections.Generic.List`1<live2d.IBaseContext>
struct List_1_t2509516451;
// System.Collections.Generic.List`1<live2d.IDrawContext>
struct List_1_t2315634314;
// System.Collections.Generic.List`1<live2d.PartsData/PartsDataContext>
struct List_1_t1274707916;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// live2d.　  　
struct U3000U20U20U3000_t4203935166;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ModelContext
struct  ModelContext_t1483254982  : public Il2CppObject
{
public:
	// System.Boolean live2d.ModelContext::needSetup
	bool ___needSetup_7;
	// live2d.ALive2DModel live2d.ModelContext::model
	ALive2DModel_t4064879310 * ___model_8;
	// System.Int32 live2d.ModelContext::initVersion
	int32_t ___initVersion_9;
	// System.Int32 live2d.ModelContext::nextParamNo
	int32_t ___nextParamNo_11;
	// live2d.ParamID[] live2d.ModelContext::floatParamIDList
	ParamIDU5BU5D_t2566349847* ___floatParamIDList_12;
	// System.Single[] live2d.ModelContext::floatParamList
	SingleU5BU5D_t577127397* ___floatParamList_13;
	// System.Single[] live2d.ModelContext::lastFloatParamList
	SingleU5BU5D_t577127397* ___lastFloatParamList_14;
	// System.Single[] live2d.ModelContext::floatParamMinList
	SingleU5BU5D_t577127397* ___floatParamMinList_15;
	// System.Single[] live2d.ModelContext::floatParamMaxList
	SingleU5BU5D_t577127397* ___floatParamMaxList_16;
	// System.Single[] live2d.ModelContext::savedFloatParamList
	SingleU5BU5D_t577127397* ___savedFloatParamList_17;
	// System.Boolean[] live2d.ModelContext::updatedFloatParamFlags
	BooleanU5BU5D_t3568034315* ___updatedFloatParamFlags_18;
	// System.Collections.Generic.List`1<live2d.IBaseData> live2d.ModelContext::baseDataList
	List_1_t1835915496 * ___baseDataList_19;
	// System.Collections.Generic.List`1<live2d.IDrawData> live2d.ModelContext::drawDataList
	List_1_t535417409 * ___drawDataList_20;
	// System.Collections.Generic.Dictionary`2<live2d.DrawDataID,live2d.IDrawData> live2d.ModelContext::drawDataMap
	Dictionary_2_t179719435 * ___drawDataMap_21;
	// System.Collections.Generic.List`1<live2d.PartsData> live2d.ModelContext::partsDataList
	List_1_t944900696 * ___partsDataList_22;
	// System.Collections.Generic.List`1<live2d.IBaseContext> live2d.ModelContext::baseContextList
	List_1_t2509516451 * ___baseContextList_23;
	// System.Collections.Generic.List`1<live2d.IDrawContext> live2d.ModelContext::drawContextList
	List_1_t2315634314 * ___drawContextList_24;
	// System.Collections.Generic.List`1<live2d.PartsData/PartsDataContext> live2d.ModelContext::partsContextList
	List_1_t1274707916 * ___partsContextList_25;
	// System.Int16[] live2d.ModelContext::orderList_firstDrawIndex
	Int16U5BU5D_t3104283263* ___orderList_firstDrawIndex_26;
	// System.Int16[] live2d.ModelContext::orderList_lastDrawIndex
	Int16U5BU5D_t3104283263* ___orderList_lastDrawIndex_27;
	// System.Int16[] live2d.ModelContext::nextList_drawIndex
	Int16U5BU5D_t3104283263* ___nextList_drawIndex_28;
	// live2d.　  　 live2d.ModelContext::clipManager
	U3000U20U20U3000_t4203935166 * ___clipManager_29;
	// System.Int16[] live2d.ModelContext::tmpPivotTableIndices_short
	Int16U5BU5D_t3104283263* ___tmpPivotTableIndices_short_30;
	// System.Single[] live2d.ModelContext::tmpT_array
	SingleU5BU5D_t577127397* ___tmpT_array_31;

public:
	inline static int32_t get_offset_of_needSetup_7() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___needSetup_7)); }
	inline bool get_needSetup_7() const { return ___needSetup_7; }
	inline bool* get_address_of_needSetup_7() { return &___needSetup_7; }
	inline void set_needSetup_7(bool value)
	{
		___needSetup_7 = value;
	}

	inline static int32_t get_offset_of_model_8() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___model_8)); }
	inline ALive2DModel_t4064879310 * get_model_8() const { return ___model_8; }
	inline ALive2DModel_t4064879310 ** get_address_of_model_8() { return &___model_8; }
	inline void set_model_8(ALive2DModel_t4064879310 * value)
	{
		___model_8 = value;
		Il2CppCodeGenWriteBarrier(&___model_8, value);
	}

	inline static int32_t get_offset_of_initVersion_9() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___initVersion_9)); }
	inline int32_t get_initVersion_9() const { return ___initVersion_9; }
	inline int32_t* get_address_of_initVersion_9() { return &___initVersion_9; }
	inline void set_initVersion_9(int32_t value)
	{
		___initVersion_9 = value;
	}

	inline static int32_t get_offset_of_nextParamNo_11() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___nextParamNo_11)); }
	inline int32_t get_nextParamNo_11() const { return ___nextParamNo_11; }
	inline int32_t* get_address_of_nextParamNo_11() { return &___nextParamNo_11; }
	inline void set_nextParamNo_11(int32_t value)
	{
		___nextParamNo_11 = value;
	}

	inline static int32_t get_offset_of_floatParamIDList_12() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___floatParamIDList_12)); }
	inline ParamIDU5BU5D_t2566349847* get_floatParamIDList_12() const { return ___floatParamIDList_12; }
	inline ParamIDU5BU5D_t2566349847** get_address_of_floatParamIDList_12() { return &___floatParamIDList_12; }
	inline void set_floatParamIDList_12(ParamIDU5BU5D_t2566349847* value)
	{
		___floatParamIDList_12 = value;
		Il2CppCodeGenWriteBarrier(&___floatParamIDList_12, value);
	}

	inline static int32_t get_offset_of_floatParamList_13() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___floatParamList_13)); }
	inline SingleU5BU5D_t577127397* get_floatParamList_13() const { return ___floatParamList_13; }
	inline SingleU5BU5D_t577127397** get_address_of_floatParamList_13() { return &___floatParamList_13; }
	inline void set_floatParamList_13(SingleU5BU5D_t577127397* value)
	{
		___floatParamList_13 = value;
		Il2CppCodeGenWriteBarrier(&___floatParamList_13, value);
	}

	inline static int32_t get_offset_of_lastFloatParamList_14() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___lastFloatParamList_14)); }
	inline SingleU5BU5D_t577127397* get_lastFloatParamList_14() const { return ___lastFloatParamList_14; }
	inline SingleU5BU5D_t577127397** get_address_of_lastFloatParamList_14() { return &___lastFloatParamList_14; }
	inline void set_lastFloatParamList_14(SingleU5BU5D_t577127397* value)
	{
		___lastFloatParamList_14 = value;
		Il2CppCodeGenWriteBarrier(&___lastFloatParamList_14, value);
	}

	inline static int32_t get_offset_of_floatParamMinList_15() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___floatParamMinList_15)); }
	inline SingleU5BU5D_t577127397* get_floatParamMinList_15() const { return ___floatParamMinList_15; }
	inline SingleU5BU5D_t577127397** get_address_of_floatParamMinList_15() { return &___floatParamMinList_15; }
	inline void set_floatParamMinList_15(SingleU5BU5D_t577127397* value)
	{
		___floatParamMinList_15 = value;
		Il2CppCodeGenWriteBarrier(&___floatParamMinList_15, value);
	}

	inline static int32_t get_offset_of_floatParamMaxList_16() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___floatParamMaxList_16)); }
	inline SingleU5BU5D_t577127397* get_floatParamMaxList_16() const { return ___floatParamMaxList_16; }
	inline SingleU5BU5D_t577127397** get_address_of_floatParamMaxList_16() { return &___floatParamMaxList_16; }
	inline void set_floatParamMaxList_16(SingleU5BU5D_t577127397* value)
	{
		___floatParamMaxList_16 = value;
		Il2CppCodeGenWriteBarrier(&___floatParamMaxList_16, value);
	}

	inline static int32_t get_offset_of_savedFloatParamList_17() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___savedFloatParamList_17)); }
	inline SingleU5BU5D_t577127397* get_savedFloatParamList_17() const { return ___savedFloatParamList_17; }
	inline SingleU5BU5D_t577127397** get_address_of_savedFloatParamList_17() { return &___savedFloatParamList_17; }
	inline void set_savedFloatParamList_17(SingleU5BU5D_t577127397* value)
	{
		___savedFloatParamList_17 = value;
		Il2CppCodeGenWriteBarrier(&___savedFloatParamList_17, value);
	}

	inline static int32_t get_offset_of_updatedFloatParamFlags_18() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___updatedFloatParamFlags_18)); }
	inline BooleanU5BU5D_t3568034315* get_updatedFloatParamFlags_18() const { return ___updatedFloatParamFlags_18; }
	inline BooleanU5BU5D_t3568034315** get_address_of_updatedFloatParamFlags_18() { return &___updatedFloatParamFlags_18; }
	inline void set_updatedFloatParamFlags_18(BooleanU5BU5D_t3568034315* value)
	{
		___updatedFloatParamFlags_18 = value;
		Il2CppCodeGenWriteBarrier(&___updatedFloatParamFlags_18, value);
	}

	inline static int32_t get_offset_of_baseDataList_19() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___baseDataList_19)); }
	inline List_1_t1835915496 * get_baseDataList_19() const { return ___baseDataList_19; }
	inline List_1_t1835915496 ** get_address_of_baseDataList_19() { return &___baseDataList_19; }
	inline void set_baseDataList_19(List_1_t1835915496 * value)
	{
		___baseDataList_19 = value;
		Il2CppCodeGenWriteBarrier(&___baseDataList_19, value);
	}

	inline static int32_t get_offset_of_drawDataList_20() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___drawDataList_20)); }
	inline List_1_t535417409 * get_drawDataList_20() const { return ___drawDataList_20; }
	inline List_1_t535417409 ** get_address_of_drawDataList_20() { return &___drawDataList_20; }
	inline void set_drawDataList_20(List_1_t535417409 * value)
	{
		___drawDataList_20 = value;
		Il2CppCodeGenWriteBarrier(&___drawDataList_20, value);
	}

	inline static int32_t get_offset_of_drawDataMap_21() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___drawDataMap_21)); }
	inline Dictionary_2_t179719435 * get_drawDataMap_21() const { return ___drawDataMap_21; }
	inline Dictionary_2_t179719435 ** get_address_of_drawDataMap_21() { return &___drawDataMap_21; }
	inline void set_drawDataMap_21(Dictionary_2_t179719435 * value)
	{
		___drawDataMap_21 = value;
		Il2CppCodeGenWriteBarrier(&___drawDataMap_21, value);
	}

	inline static int32_t get_offset_of_partsDataList_22() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___partsDataList_22)); }
	inline List_1_t944900696 * get_partsDataList_22() const { return ___partsDataList_22; }
	inline List_1_t944900696 ** get_address_of_partsDataList_22() { return &___partsDataList_22; }
	inline void set_partsDataList_22(List_1_t944900696 * value)
	{
		___partsDataList_22 = value;
		Il2CppCodeGenWriteBarrier(&___partsDataList_22, value);
	}

	inline static int32_t get_offset_of_baseContextList_23() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___baseContextList_23)); }
	inline List_1_t2509516451 * get_baseContextList_23() const { return ___baseContextList_23; }
	inline List_1_t2509516451 ** get_address_of_baseContextList_23() { return &___baseContextList_23; }
	inline void set_baseContextList_23(List_1_t2509516451 * value)
	{
		___baseContextList_23 = value;
		Il2CppCodeGenWriteBarrier(&___baseContextList_23, value);
	}

	inline static int32_t get_offset_of_drawContextList_24() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___drawContextList_24)); }
	inline List_1_t2315634314 * get_drawContextList_24() const { return ___drawContextList_24; }
	inline List_1_t2315634314 ** get_address_of_drawContextList_24() { return &___drawContextList_24; }
	inline void set_drawContextList_24(List_1_t2315634314 * value)
	{
		___drawContextList_24 = value;
		Il2CppCodeGenWriteBarrier(&___drawContextList_24, value);
	}

	inline static int32_t get_offset_of_partsContextList_25() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___partsContextList_25)); }
	inline List_1_t1274707916 * get_partsContextList_25() const { return ___partsContextList_25; }
	inline List_1_t1274707916 ** get_address_of_partsContextList_25() { return &___partsContextList_25; }
	inline void set_partsContextList_25(List_1_t1274707916 * value)
	{
		___partsContextList_25 = value;
		Il2CppCodeGenWriteBarrier(&___partsContextList_25, value);
	}

	inline static int32_t get_offset_of_orderList_firstDrawIndex_26() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___orderList_firstDrawIndex_26)); }
	inline Int16U5BU5D_t3104283263* get_orderList_firstDrawIndex_26() const { return ___orderList_firstDrawIndex_26; }
	inline Int16U5BU5D_t3104283263** get_address_of_orderList_firstDrawIndex_26() { return &___orderList_firstDrawIndex_26; }
	inline void set_orderList_firstDrawIndex_26(Int16U5BU5D_t3104283263* value)
	{
		___orderList_firstDrawIndex_26 = value;
		Il2CppCodeGenWriteBarrier(&___orderList_firstDrawIndex_26, value);
	}

	inline static int32_t get_offset_of_orderList_lastDrawIndex_27() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___orderList_lastDrawIndex_27)); }
	inline Int16U5BU5D_t3104283263* get_orderList_lastDrawIndex_27() const { return ___orderList_lastDrawIndex_27; }
	inline Int16U5BU5D_t3104283263** get_address_of_orderList_lastDrawIndex_27() { return &___orderList_lastDrawIndex_27; }
	inline void set_orderList_lastDrawIndex_27(Int16U5BU5D_t3104283263* value)
	{
		___orderList_lastDrawIndex_27 = value;
		Il2CppCodeGenWriteBarrier(&___orderList_lastDrawIndex_27, value);
	}

	inline static int32_t get_offset_of_nextList_drawIndex_28() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___nextList_drawIndex_28)); }
	inline Int16U5BU5D_t3104283263* get_nextList_drawIndex_28() const { return ___nextList_drawIndex_28; }
	inline Int16U5BU5D_t3104283263** get_address_of_nextList_drawIndex_28() { return &___nextList_drawIndex_28; }
	inline void set_nextList_drawIndex_28(Int16U5BU5D_t3104283263* value)
	{
		___nextList_drawIndex_28 = value;
		Il2CppCodeGenWriteBarrier(&___nextList_drawIndex_28, value);
	}

	inline static int32_t get_offset_of_clipManager_29() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___clipManager_29)); }
	inline U3000U20U20U3000_t4203935166 * get_clipManager_29() const { return ___clipManager_29; }
	inline U3000U20U20U3000_t4203935166 ** get_address_of_clipManager_29() { return &___clipManager_29; }
	inline void set_clipManager_29(U3000U20U20U3000_t4203935166 * value)
	{
		___clipManager_29 = value;
		Il2CppCodeGenWriteBarrier(&___clipManager_29, value);
	}

	inline static int32_t get_offset_of_tmpPivotTableIndices_short_30() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___tmpPivotTableIndices_short_30)); }
	inline Int16U5BU5D_t3104283263* get_tmpPivotTableIndices_short_30() const { return ___tmpPivotTableIndices_short_30; }
	inline Int16U5BU5D_t3104283263** get_address_of_tmpPivotTableIndices_short_30() { return &___tmpPivotTableIndices_short_30; }
	inline void set_tmpPivotTableIndices_short_30(Int16U5BU5D_t3104283263* value)
	{
		___tmpPivotTableIndices_short_30 = value;
		Il2CppCodeGenWriteBarrier(&___tmpPivotTableIndices_short_30, value);
	}

	inline static int32_t get_offset_of_tmpT_array_31() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982, ___tmpT_array_31)); }
	inline SingleU5BU5D_t577127397* get_tmpT_array_31() const { return ___tmpT_array_31; }
	inline SingleU5BU5D_t577127397** get_address_of_tmpT_array_31() { return &___tmpT_array_31; }
	inline void set_tmpT_array_31(SingleU5BU5D_t577127397* value)
	{
		___tmpT_array_31 = value;
		Il2CppCodeGenWriteBarrier(&___tmpT_array_31, value);
	}
};

struct ModelContext_t1483254982_StaticFields
{
public:
	// System.Boolean live2d.ModelContext::VERBOSE
	bool ___VERBOSE_0;

public:
	inline static int32_t get_offset_of_VERBOSE_0() { return static_cast<int32_t>(offsetof(ModelContext_t1483254982_StaticFields, ___VERBOSE_0)); }
	inline bool get_VERBOSE_0() const { return ___VERBOSE_0; }
	inline bool* get_address_of_VERBOSE_0() { return &___VERBOSE_0; }
	inline void set_VERBOSE_0(bool value)
	{
		___VERBOSE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
