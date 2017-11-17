#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeFormatEventHandler
struct TypeFormatEventHandler_t3452100977;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.TypeModel
struct  TypeModel_t653695305  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.TypeFormatEventHandler ProtoBuf.Meta.TypeModel::DynamicTypeFormatting
	TypeFormatEventHandler_t3452100977 * ___DynamicTypeFormatting_1;

public:
	inline static int32_t get_offset_of_DynamicTypeFormatting_1() { return static_cast<int32_t>(offsetof(TypeModel_t653695305, ___DynamicTypeFormatting_1)); }
	inline TypeFormatEventHandler_t3452100977 * get_DynamicTypeFormatting_1() const { return ___DynamicTypeFormatting_1; }
	inline TypeFormatEventHandler_t3452100977 ** get_address_of_DynamicTypeFormatting_1() { return &___DynamicTypeFormatting_1; }
	inline void set_DynamicTypeFormatting_1(TypeFormatEventHandler_t3452100977 * value)
	{
		___DynamicTypeFormatting_1 = value;
		Il2CppCodeGenWriteBarrier(&___DynamicTypeFormatting_1, value);
	}
};

struct TypeModel_t653695305_StaticFields
{
public:
	// System.Type ProtoBuf.Meta.TypeModel::ilist
	Type_t * ___ilist_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ProtoBuf.Meta.TypeModel::<>f__switch$map5
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map5_2;

public:
	inline static int32_t get_offset_of_ilist_0() { return static_cast<int32_t>(offsetof(TypeModel_t653695305_StaticFields, ___ilist_0)); }
	inline Type_t * get_ilist_0() const { return ___ilist_0; }
	inline Type_t ** get_address_of_ilist_0() { return &___ilist_0; }
	inline void set_ilist_0(Type_t * value)
	{
		___ilist_0 = value;
		Il2CppCodeGenWriteBarrier(&___ilist_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_2() { return static_cast<int32_t>(offsetof(TypeModel_t653695305_StaticFields, ___U3CU3Ef__switchU24map5_2)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map5_2() const { return ___U3CU3Ef__switchU24map5_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map5_2() { return &___U3CU3Ef__switchU24map5_2; }
	inline void set_U3CU3Ef__switchU24map5_2(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map5_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
