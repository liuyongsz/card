#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.OperationRequest
struct  OperationRequest_t3015313336  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationRequest::OperationCode
	uint8_t ___OperationCode_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationRequest::Parameters
	Dictionary_2_t2064209302 * ___Parameters_1;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationRequest_t3015313336, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(OperationRequest_t3015313336, ___Parameters_1)); }
	inline Dictionary_2_t2064209302 * get_Parameters_1() const { return ___Parameters_1; }
	inline Dictionary_2_t2064209302 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(Dictionary_2_t2064209302 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
