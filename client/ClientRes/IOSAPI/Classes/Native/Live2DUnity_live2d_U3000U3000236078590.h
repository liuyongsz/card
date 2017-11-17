#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.PivotManager
struct PivotManager_t179514031;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t4241215825;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;

#include "Live2DUnity_live2d_IBaseData2466794364.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　　
struct  U3000U3000_t236078590  : public IBaseData_t2466794364
{
public:
	// System.Int32 live2d.　　::col
	int32_t ___col_7;
	// System.Int32 live2d.　　::row
	int32_t ___row_8;
	// live2d.PivotManager live2d.　　::pivotManager
	PivotManager_t179514031 * ___pivotManager_9;
	// System.Collections.Generic.List`1<System.Single[]> live2d.　　::pivotPoints
	List_1_t4241215825 * ___pivotPoints_10;

public:
	inline static int32_t get_offset_of_col_7() { return static_cast<int32_t>(offsetof(U3000U3000_t236078590, ___col_7)); }
	inline int32_t get_col_7() const { return ___col_7; }
	inline int32_t* get_address_of_col_7() { return &___col_7; }
	inline void set_col_7(int32_t value)
	{
		___col_7 = value;
	}

	inline static int32_t get_offset_of_row_8() { return static_cast<int32_t>(offsetof(U3000U3000_t236078590, ___row_8)); }
	inline int32_t get_row_8() const { return ___row_8; }
	inline int32_t* get_address_of_row_8() { return &___row_8; }
	inline void set_row_8(int32_t value)
	{
		___row_8 = value;
	}

	inline static int32_t get_offset_of_pivotManager_9() { return static_cast<int32_t>(offsetof(U3000U3000_t236078590, ___pivotManager_9)); }
	inline PivotManager_t179514031 * get_pivotManager_9() const { return ___pivotManager_9; }
	inline PivotManager_t179514031 ** get_address_of_pivotManager_9() { return &___pivotManager_9; }
	inline void set_pivotManager_9(PivotManager_t179514031 * value)
	{
		___pivotManager_9 = value;
		Il2CppCodeGenWriteBarrier(&___pivotManager_9, value);
	}

	inline static int32_t get_offset_of_pivotPoints_10() { return static_cast<int32_t>(offsetof(U3000U3000_t236078590, ___pivotPoints_10)); }
	inline List_1_t4241215825 * get_pivotPoints_10() const { return ___pivotPoints_10; }
	inline List_1_t4241215825 ** get_address_of_pivotPoints_10() { return &___pivotPoints_10; }
	inline void set_pivotPoints_10(List_1_t4241215825 * value)
	{
		___pivotPoints_10 = value;
		Il2CppCodeGenWriteBarrier(&___pivotPoints_10, value);
	}
};

struct U3000U3000_t236078590_StaticFields
{
public:
	// System.Boolean[] live2d.　　::tmp_ba_1
	BooleanU5BU5D_t3568034315* ___tmp_ba_1_11;

public:
	inline static int32_t get_offset_of_tmp_ba_1_11() { return static_cast<int32_t>(offsetof(U3000U3000_t236078590_StaticFields, ___tmp_ba_1_11)); }
	inline BooleanU5BU5D_t3568034315* get_tmp_ba_1_11() const { return ___tmp_ba_1_11; }
	inline BooleanU5BU5D_t3568034315** get_address_of_tmp_ba_1_11() { return &___tmp_ba_1_11; }
	inline void set_tmp_ba_1_11(BooleanU5BU5D_t3568034315* value)
	{
		___tmp_ba_1_11 = value;
		Il2CppCodeGenWriteBarrier(&___tmp_ba_1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
