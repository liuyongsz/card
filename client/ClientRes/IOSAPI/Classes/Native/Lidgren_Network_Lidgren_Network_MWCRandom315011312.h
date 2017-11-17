#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.MWCRandom
struct MWCRandom_t315011312;

#include "Lidgren_Network_Lidgren_Network_NetRandom509742058.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.MWCRandom
struct  MWCRandom_t315011312  : public NetRandom_t509742058
{
public:
	// System.UInt32 Lidgren.Network.MWCRandom::m_w
	uint32_t ___m_w_5;
	// System.UInt32 Lidgren.Network.MWCRandom::m_z
	uint32_t ___m_z_6;

public:
	inline static int32_t get_offset_of_m_w_5() { return static_cast<int32_t>(offsetof(MWCRandom_t315011312, ___m_w_5)); }
	inline uint32_t get_m_w_5() const { return ___m_w_5; }
	inline uint32_t* get_address_of_m_w_5() { return &___m_w_5; }
	inline void set_m_w_5(uint32_t value)
	{
		___m_w_5 = value;
	}

	inline static int32_t get_offset_of_m_z_6() { return static_cast<int32_t>(offsetof(MWCRandom_t315011312, ___m_z_6)); }
	inline uint32_t get_m_z_6() const { return ___m_z_6; }
	inline uint32_t* get_address_of_m_z_6() { return &___m_z_6; }
	inline void set_m_z_6(uint32_t value)
	{
		___m_z_6 = value;
	}
};

struct MWCRandom_t315011312_StaticFields
{
public:
	// Lidgren.Network.MWCRandom Lidgren.Network.MWCRandom::Instance
	MWCRandom_t315011312 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(MWCRandom_t315011312_StaticFields, ___Instance_4)); }
	inline MWCRandom_t315011312 * get_Instance_4() const { return ___Instance_4; }
	inline MWCRandom_t315011312 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(MWCRandom_t315011312 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
