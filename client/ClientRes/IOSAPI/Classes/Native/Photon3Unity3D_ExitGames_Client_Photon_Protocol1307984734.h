#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t3407023366;
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t844425476;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Double[]
struct DoubleU5BU5D_t1889952540;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Protocol
struct  Protocol_t1307984734  : public Il2CppObject
{
public:

public:
};

struct Protocol_t1307984734_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType> ExitGames.Client.Photon.Protocol::TypeDict
	Dictionary_2_t3407023366 * ___TypeDict_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType> ExitGames.Client.Photon.Protocol::CodeDict
	Dictionary_2_t844425476 * ___CodeDict_1;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memShort
	ByteU5BU5D_t3397334013* ___memShort_2;
	// System.Int64[] ExitGames.Client.Photon.Protocol::memLongBlock
	Int64U5BU5D_t717125112* ___memLongBlock_3;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memLongBlockBytes
	ByteU5BU5D_t3397334013* ___memLongBlockBytes_4;
	// System.Single[] ExitGames.Client.Photon.Protocol::memFloatBlock
	SingleU5BU5D_t577127397* ___memFloatBlock_5;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memFloatBlockBytes
	ByteU5BU5D_t3397334013* ___memFloatBlockBytes_6;
	// System.Double[] ExitGames.Client.Photon.Protocol::memDoubleBlock
	DoubleU5BU5D_t1889952540* ___memDoubleBlock_7;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memDoubleBlockBytes
	ByteU5BU5D_t3397334013* ___memDoubleBlockBytes_8;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memInteger
	ByteU5BU5D_t3397334013* ___memInteger_9;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memLong
	ByteU5BU5D_t3397334013* ___memLong_10;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memFloat
	ByteU5BU5D_t3397334013* ___memFloat_11;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memDeserialize
	ByteU5BU5D_t3397334013* ___memDeserialize_12;
	// System.Byte[] ExitGames.Client.Photon.Protocol::memDouble
	ByteU5BU5D_t3397334013* ___memDouble_13;

public:
	inline static int32_t get_offset_of_TypeDict_0() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___TypeDict_0)); }
	inline Dictionary_2_t3407023366 * get_TypeDict_0() const { return ___TypeDict_0; }
	inline Dictionary_2_t3407023366 ** get_address_of_TypeDict_0() { return &___TypeDict_0; }
	inline void set_TypeDict_0(Dictionary_2_t3407023366 * value)
	{
		___TypeDict_0 = value;
		Il2CppCodeGenWriteBarrier(&___TypeDict_0, value);
	}

	inline static int32_t get_offset_of_CodeDict_1() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___CodeDict_1)); }
	inline Dictionary_2_t844425476 * get_CodeDict_1() const { return ___CodeDict_1; }
	inline Dictionary_2_t844425476 ** get_address_of_CodeDict_1() { return &___CodeDict_1; }
	inline void set_CodeDict_1(Dictionary_2_t844425476 * value)
	{
		___CodeDict_1 = value;
		Il2CppCodeGenWriteBarrier(&___CodeDict_1, value);
	}

	inline static int32_t get_offset_of_memShort_2() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memShort_2)); }
	inline ByteU5BU5D_t3397334013* get_memShort_2() const { return ___memShort_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_memShort_2() { return &___memShort_2; }
	inline void set_memShort_2(ByteU5BU5D_t3397334013* value)
	{
		___memShort_2 = value;
		Il2CppCodeGenWriteBarrier(&___memShort_2, value);
	}

	inline static int32_t get_offset_of_memLongBlock_3() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memLongBlock_3)); }
	inline Int64U5BU5D_t717125112* get_memLongBlock_3() const { return ___memLongBlock_3; }
	inline Int64U5BU5D_t717125112** get_address_of_memLongBlock_3() { return &___memLongBlock_3; }
	inline void set_memLongBlock_3(Int64U5BU5D_t717125112* value)
	{
		___memLongBlock_3 = value;
		Il2CppCodeGenWriteBarrier(&___memLongBlock_3, value);
	}

	inline static int32_t get_offset_of_memLongBlockBytes_4() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memLongBlockBytes_4)); }
	inline ByteU5BU5D_t3397334013* get_memLongBlockBytes_4() const { return ___memLongBlockBytes_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_memLongBlockBytes_4() { return &___memLongBlockBytes_4; }
	inline void set_memLongBlockBytes_4(ByteU5BU5D_t3397334013* value)
	{
		___memLongBlockBytes_4 = value;
		Il2CppCodeGenWriteBarrier(&___memLongBlockBytes_4, value);
	}

	inline static int32_t get_offset_of_memFloatBlock_5() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memFloatBlock_5)); }
	inline SingleU5BU5D_t577127397* get_memFloatBlock_5() const { return ___memFloatBlock_5; }
	inline SingleU5BU5D_t577127397** get_address_of_memFloatBlock_5() { return &___memFloatBlock_5; }
	inline void set_memFloatBlock_5(SingleU5BU5D_t577127397* value)
	{
		___memFloatBlock_5 = value;
		Il2CppCodeGenWriteBarrier(&___memFloatBlock_5, value);
	}

	inline static int32_t get_offset_of_memFloatBlockBytes_6() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memFloatBlockBytes_6)); }
	inline ByteU5BU5D_t3397334013* get_memFloatBlockBytes_6() const { return ___memFloatBlockBytes_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_memFloatBlockBytes_6() { return &___memFloatBlockBytes_6; }
	inline void set_memFloatBlockBytes_6(ByteU5BU5D_t3397334013* value)
	{
		___memFloatBlockBytes_6 = value;
		Il2CppCodeGenWriteBarrier(&___memFloatBlockBytes_6, value);
	}

	inline static int32_t get_offset_of_memDoubleBlock_7() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memDoubleBlock_7)); }
	inline DoubleU5BU5D_t1889952540* get_memDoubleBlock_7() const { return ___memDoubleBlock_7; }
	inline DoubleU5BU5D_t1889952540** get_address_of_memDoubleBlock_7() { return &___memDoubleBlock_7; }
	inline void set_memDoubleBlock_7(DoubleU5BU5D_t1889952540* value)
	{
		___memDoubleBlock_7 = value;
		Il2CppCodeGenWriteBarrier(&___memDoubleBlock_7, value);
	}

	inline static int32_t get_offset_of_memDoubleBlockBytes_8() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memDoubleBlockBytes_8)); }
	inline ByteU5BU5D_t3397334013* get_memDoubleBlockBytes_8() const { return ___memDoubleBlockBytes_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_memDoubleBlockBytes_8() { return &___memDoubleBlockBytes_8; }
	inline void set_memDoubleBlockBytes_8(ByteU5BU5D_t3397334013* value)
	{
		___memDoubleBlockBytes_8 = value;
		Il2CppCodeGenWriteBarrier(&___memDoubleBlockBytes_8, value);
	}

	inline static int32_t get_offset_of_memInteger_9() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memInteger_9)); }
	inline ByteU5BU5D_t3397334013* get_memInteger_9() const { return ___memInteger_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_memInteger_9() { return &___memInteger_9; }
	inline void set_memInteger_9(ByteU5BU5D_t3397334013* value)
	{
		___memInteger_9 = value;
		Il2CppCodeGenWriteBarrier(&___memInteger_9, value);
	}

	inline static int32_t get_offset_of_memLong_10() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memLong_10)); }
	inline ByteU5BU5D_t3397334013* get_memLong_10() const { return ___memLong_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_memLong_10() { return &___memLong_10; }
	inline void set_memLong_10(ByteU5BU5D_t3397334013* value)
	{
		___memLong_10 = value;
		Il2CppCodeGenWriteBarrier(&___memLong_10, value);
	}

	inline static int32_t get_offset_of_memFloat_11() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memFloat_11)); }
	inline ByteU5BU5D_t3397334013* get_memFloat_11() const { return ___memFloat_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_memFloat_11() { return &___memFloat_11; }
	inline void set_memFloat_11(ByteU5BU5D_t3397334013* value)
	{
		___memFloat_11 = value;
		Il2CppCodeGenWriteBarrier(&___memFloat_11, value);
	}

	inline static int32_t get_offset_of_memDeserialize_12() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memDeserialize_12)); }
	inline ByteU5BU5D_t3397334013* get_memDeserialize_12() const { return ___memDeserialize_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_memDeserialize_12() { return &___memDeserialize_12; }
	inline void set_memDeserialize_12(ByteU5BU5D_t3397334013* value)
	{
		___memDeserialize_12 = value;
		Il2CppCodeGenWriteBarrier(&___memDeserialize_12, value);
	}

	inline static int32_t get_offset_of_memDouble_13() { return static_cast<int32_t>(offsetof(Protocol_t1307984734_StaticFields, ___memDouble_13)); }
	inline ByteU5BU5D_t3397334013* get_memDouble_13() const { return ___memDouble_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_memDouble_13() { return &___memDouble_13; }
	inline void set_memDouble_13(ByteU5BU5D_t3397334013* value)
	{
		___memDouble_13 = value;
		Il2CppCodeGenWriteBarrier(&___memDouble_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
