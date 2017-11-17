#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.BytesRes
struct  BytesRes_t3100457841  : public NormalRes_t3181316491
{
public:
	// System.Byte[] AssetBundles.BytesRes::m_bytes
	ByteU5BU5D_t3397334013* ___m_bytes_1;

public:
	inline static int32_t get_offset_of_m_bytes_1() { return static_cast<int32_t>(offsetof(BytesRes_t3100457841, ___m_bytes_1)); }
	inline ByteU5BU5D_t3397334013* get_m_bytes_1() const { return ___m_bytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_bytes_1() { return &___m_bytes_1; }
	inline void set_m_bytes_1(ByteU5BU5D_t3397334013* value)
	{
		___m_bytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_bytes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
