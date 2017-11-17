#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.DrawDataID
struct DrawDataID_t1444079665;
// live2d.BaseDataID
struct BaseDataID_t3014180214;
// live2d.PivotManager
struct PivotManager_t179514031;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;
// live2d.DrawDataID[]
struct DrawDataIDU5BU5D_t3035997164;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　　 
struct  U3000U3000U20_t2926736766  : public Il2CppObject
{
public:
	// live2d.DrawDataID live2d.　　 ::drawDataID
	DrawDataID_t1444079665 * ___drawDataID_2;
	// live2d.BaseDataID live2d.　　 ::targetBaseDataID
	BaseDataID_t3014180214 * ___targetBaseDataID_3;
	// live2d.PivotManager live2d.　　 ::pivotManager
	PivotManager_t179514031 * ___pivotManager_4;
	// System.Int32 live2d.　　 ::averageDrawOrder
	int32_t ___averageDrawOrder_5;
	// System.Int32[] live2d.　　 ::pivotDrawOrder
	Int32U5BU5D_t3030399641* ___pivotDrawOrder_6;
	// System.Single[] live2d.　　 ::pivotOpacity
	SingleU5BU5D_t577127397* ___pivotOpacity_7;
	// live2d.DrawDataID[] live2d.　　 ::clipIDList
	DrawDataIDU5BU5D_t3035997164* ___clipIDList_8;

public:
	inline static int32_t get_offset_of_drawDataID_2() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___drawDataID_2)); }
	inline DrawDataID_t1444079665 * get_drawDataID_2() const { return ___drawDataID_2; }
	inline DrawDataID_t1444079665 ** get_address_of_drawDataID_2() { return &___drawDataID_2; }
	inline void set_drawDataID_2(DrawDataID_t1444079665 * value)
	{
		___drawDataID_2 = value;
		Il2CppCodeGenWriteBarrier(&___drawDataID_2, value);
	}

	inline static int32_t get_offset_of_targetBaseDataID_3() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___targetBaseDataID_3)); }
	inline BaseDataID_t3014180214 * get_targetBaseDataID_3() const { return ___targetBaseDataID_3; }
	inline BaseDataID_t3014180214 ** get_address_of_targetBaseDataID_3() { return &___targetBaseDataID_3; }
	inline void set_targetBaseDataID_3(BaseDataID_t3014180214 * value)
	{
		___targetBaseDataID_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetBaseDataID_3, value);
	}

	inline static int32_t get_offset_of_pivotManager_4() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___pivotManager_4)); }
	inline PivotManager_t179514031 * get_pivotManager_4() const { return ___pivotManager_4; }
	inline PivotManager_t179514031 ** get_address_of_pivotManager_4() { return &___pivotManager_4; }
	inline void set_pivotManager_4(PivotManager_t179514031 * value)
	{
		___pivotManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___pivotManager_4, value);
	}

	inline static int32_t get_offset_of_averageDrawOrder_5() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___averageDrawOrder_5)); }
	inline int32_t get_averageDrawOrder_5() const { return ___averageDrawOrder_5; }
	inline int32_t* get_address_of_averageDrawOrder_5() { return &___averageDrawOrder_5; }
	inline void set_averageDrawOrder_5(int32_t value)
	{
		___averageDrawOrder_5 = value;
	}

	inline static int32_t get_offset_of_pivotDrawOrder_6() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___pivotDrawOrder_6)); }
	inline Int32U5BU5D_t3030399641* get_pivotDrawOrder_6() const { return ___pivotDrawOrder_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_pivotDrawOrder_6() { return &___pivotDrawOrder_6; }
	inline void set_pivotDrawOrder_6(Int32U5BU5D_t3030399641* value)
	{
		___pivotDrawOrder_6 = value;
		Il2CppCodeGenWriteBarrier(&___pivotDrawOrder_6, value);
	}

	inline static int32_t get_offset_of_pivotOpacity_7() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___pivotOpacity_7)); }
	inline SingleU5BU5D_t577127397* get_pivotOpacity_7() const { return ___pivotOpacity_7; }
	inline SingleU5BU5D_t577127397** get_address_of_pivotOpacity_7() { return &___pivotOpacity_7; }
	inline void set_pivotOpacity_7(SingleU5BU5D_t577127397* value)
	{
		___pivotOpacity_7 = value;
		Il2CppCodeGenWriteBarrier(&___pivotOpacity_7, value);
	}

	inline static int32_t get_offset_of_clipIDList_8() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766, ___clipIDList_8)); }
	inline DrawDataIDU5BU5D_t3035997164* get_clipIDList_8() const { return ___clipIDList_8; }
	inline DrawDataIDU5BU5D_t3035997164** get_address_of_clipIDList_8() { return &___clipIDList_8; }
	inline void set_clipIDList_8(DrawDataIDU5BU5D_t3035997164* value)
	{
		___clipIDList_8 = value;
		Il2CppCodeGenWriteBarrier(&___clipIDList_8, value);
	}
};

struct U3000U3000U20_t2926736766_StaticFields
{
public:
	// System.Int32 live2d.　　 ::totalMinOrder
	int32_t ___totalMinOrder_0;
	// System.Int32 live2d.　　 ::totalMaxOrder
	int32_t ___totalMaxOrder_1;

public:
	inline static int32_t get_offset_of_totalMinOrder_0() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766_StaticFields, ___totalMinOrder_0)); }
	inline int32_t get_totalMinOrder_0() const { return ___totalMinOrder_0; }
	inline int32_t* get_address_of_totalMinOrder_0() { return &___totalMinOrder_0; }
	inline void set_totalMinOrder_0(int32_t value)
	{
		___totalMinOrder_0 = value;
	}

	inline static int32_t get_offset_of_totalMaxOrder_1() { return static_cast<int32_t>(offsetof(U3000U3000U20_t2926736766_StaticFields, ___totalMaxOrder_1)); }
	inline int32_t get_totalMaxOrder_1() const { return ___totalMaxOrder_1; }
	inline int32_t* get_address_of_totalMaxOrder_1() { return &___totalMaxOrder_1; }
	inline void set_totalMaxOrder_1(int32_t value)
	{
		___totalMaxOrder_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
