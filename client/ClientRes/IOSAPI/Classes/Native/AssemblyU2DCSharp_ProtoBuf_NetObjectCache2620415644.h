#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.MutableList
struct MutableList_t1161363740;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1663937576;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.NetObjectCache
struct  NetObjectCache_t2620415644  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.MutableList ProtoBuf.NetObjectCache::underlyingList
	MutableList_t1161363740 * ___underlyingList_1;
	// System.Object ProtoBuf.NetObjectCache::rootObject
	Il2CppObject * ___rootObject_2;
	// System.Int32 ProtoBuf.NetObjectCache::trapStartIndex
	int32_t ___trapStartIndex_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ProtoBuf.NetObjectCache::stringKeys
	Dictionary_2_t3986656710 * ___stringKeys_4;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> ProtoBuf.NetObjectCache::objectKeys
	Dictionary_2_t1663937576 * ___objectKeys_5;

public:
	inline static int32_t get_offset_of_underlyingList_1() { return static_cast<int32_t>(offsetof(NetObjectCache_t2620415644, ___underlyingList_1)); }
	inline MutableList_t1161363740 * get_underlyingList_1() const { return ___underlyingList_1; }
	inline MutableList_t1161363740 ** get_address_of_underlyingList_1() { return &___underlyingList_1; }
	inline void set_underlyingList_1(MutableList_t1161363740 * value)
	{
		___underlyingList_1 = value;
		Il2CppCodeGenWriteBarrier(&___underlyingList_1, value);
	}

	inline static int32_t get_offset_of_rootObject_2() { return static_cast<int32_t>(offsetof(NetObjectCache_t2620415644, ___rootObject_2)); }
	inline Il2CppObject * get_rootObject_2() const { return ___rootObject_2; }
	inline Il2CppObject ** get_address_of_rootObject_2() { return &___rootObject_2; }
	inline void set_rootObject_2(Il2CppObject * value)
	{
		___rootObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___rootObject_2, value);
	}

	inline static int32_t get_offset_of_trapStartIndex_3() { return static_cast<int32_t>(offsetof(NetObjectCache_t2620415644, ___trapStartIndex_3)); }
	inline int32_t get_trapStartIndex_3() const { return ___trapStartIndex_3; }
	inline int32_t* get_address_of_trapStartIndex_3() { return &___trapStartIndex_3; }
	inline void set_trapStartIndex_3(int32_t value)
	{
		___trapStartIndex_3 = value;
	}

	inline static int32_t get_offset_of_stringKeys_4() { return static_cast<int32_t>(offsetof(NetObjectCache_t2620415644, ___stringKeys_4)); }
	inline Dictionary_2_t3986656710 * get_stringKeys_4() const { return ___stringKeys_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_stringKeys_4() { return &___stringKeys_4; }
	inline void set_stringKeys_4(Dictionary_2_t3986656710 * value)
	{
		___stringKeys_4 = value;
		Il2CppCodeGenWriteBarrier(&___stringKeys_4, value);
	}

	inline static int32_t get_offset_of_objectKeys_5() { return static_cast<int32_t>(offsetof(NetObjectCache_t2620415644, ___objectKeys_5)); }
	inline Dictionary_2_t1663937576 * get_objectKeys_5() const { return ___objectKeys_5; }
	inline Dictionary_2_t1663937576 ** get_address_of_objectKeys_5() { return &___objectKeys_5; }
	inline void set_objectKeys_5(Dictionary_2_t1663937576 * value)
	{
		___objectKeys_5 = value;
		Il2CppCodeGenWriteBarrier(&___objectKeys_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
