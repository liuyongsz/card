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

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_BclHelpers_NetObjectOpti459826500.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.NetObjectSerializer
struct  NetObjectSerializer_t3848211278  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Serializers.NetObjectSerializer::key
	int32_t ___key_0;
	// System.Type ProtoBuf.Serializers.NetObjectSerializer::type
	Type_t * ___type_1;
	// ProtoBuf.BclHelpers/NetObjectOptions ProtoBuf.Serializers.NetObjectSerializer::options
	uint8_t ___options_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(NetObjectSerializer_t3848211278, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NetObjectSerializer_t3848211278, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(NetObjectSerializer_t3848211278, ___options_2)); }
	inline uint8_t get_options_2() const { return ___options_2; }
	inline uint8_t* get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(uint8_t value)
	{
		___options_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
