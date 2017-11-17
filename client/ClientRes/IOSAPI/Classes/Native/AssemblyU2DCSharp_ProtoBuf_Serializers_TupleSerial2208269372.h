#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// ProtoBuf.Serializers.IProtoSerializer[]
struct IProtoSerializerU5BU5D_t634234844;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.TupleSerializer
struct  TupleSerializer_t2208269372  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo[] ProtoBuf.Serializers.TupleSerializer::members
	MemberInfoU5BU5D_t4238939941* ___members_0;
	// System.Reflection.ConstructorInfo ProtoBuf.Serializers.TupleSerializer::ctor
	ConstructorInfo_t2851816542 * ___ctor_1;
	// ProtoBuf.Serializers.IProtoSerializer[] ProtoBuf.Serializers.TupleSerializer::tails
	IProtoSerializerU5BU5D_t634234844* ___tails_2;

public:
	inline static int32_t get_offset_of_members_0() { return static_cast<int32_t>(offsetof(TupleSerializer_t2208269372, ___members_0)); }
	inline MemberInfoU5BU5D_t4238939941* get_members_0() const { return ___members_0; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of_members_0() { return &___members_0; }
	inline void set_members_0(MemberInfoU5BU5D_t4238939941* value)
	{
		___members_0 = value;
		Il2CppCodeGenWriteBarrier(&___members_0, value);
	}

	inline static int32_t get_offset_of_ctor_1() { return static_cast<int32_t>(offsetof(TupleSerializer_t2208269372, ___ctor_1)); }
	inline ConstructorInfo_t2851816542 * get_ctor_1() const { return ___ctor_1; }
	inline ConstructorInfo_t2851816542 ** get_address_of_ctor_1() { return &___ctor_1; }
	inline void set_ctor_1(ConstructorInfo_t2851816542 * value)
	{
		___ctor_1 = value;
		Il2CppCodeGenWriteBarrier(&___ctor_1, value);
	}

	inline static int32_t get_offset_of_tails_2() { return static_cast<int32_t>(offsetof(TupleSerializer_t2208269372, ___tails_2)); }
	inline IProtoSerializerU5BU5D_t634234844* get_tails_2() const { return ___tails_2; }
	inline IProtoSerializerU5BU5D_t634234844** get_address_of_tails_2() { return &___tails_2; }
	inline void set_tails_2(IProtoSerializerU5BU5D_t634234844* value)
	{
		___tails_2 = value;
		Il2CppCodeGenWriteBarrier(&___tails_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
