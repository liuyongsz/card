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

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NetProtocal_Request1913412249.h"
#include "AssemblyU2DCSharp_NetProtocal_Respone2961906842.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetData
struct  NetData_t1634960601  : public Il2CppObject
{
public:
	// System.Int32 NetData::m_correlationid
	int32_t ___m_correlationid_0;
	// NetProtocal.Request NetData::m_serverRequest
	int32_t ___m_serverRequest_1;
	// NetProtocal.Respone NetData::m_serverRespone
	int32_t ___m_serverRespone_2;
	// System.Byte[] NetData::m_data
	ByteU5BU5D_t3397334013* ___m_data_3;

public:
	inline static int32_t get_offset_of_m_correlationid_0() { return static_cast<int32_t>(offsetof(NetData_t1634960601, ___m_correlationid_0)); }
	inline int32_t get_m_correlationid_0() const { return ___m_correlationid_0; }
	inline int32_t* get_address_of_m_correlationid_0() { return &___m_correlationid_0; }
	inline void set_m_correlationid_0(int32_t value)
	{
		___m_correlationid_0 = value;
	}

	inline static int32_t get_offset_of_m_serverRequest_1() { return static_cast<int32_t>(offsetof(NetData_t1634960601, ___m_serverRequest_1)); }
	inline int32_t get_m_serverRequest_1() const { return ___m_serverRequest_1; }
	inline int32_t* get_address_of_m_serverRequest_1() { return &___m_serverRequest_1; }
	inline void set_m_serverRequest_1(int32_t value)
	{
		___m_serverRequest_1 = value;
	}

	inline static int32_t get_offset_of_m_serverRespone_2() { return static_cast<int32_t>(offsetof(NetData_t1634960601, ___m_serverRespone_2)); }
	inline int32_t get_m_serverRespone_2() const { return ___m_serverRespone_2; }
	inline int32_t* get_address_of_m_serverRespone_2() { return &___m_serverRespone_2; }
	inline void set_m_serverRespone_2(int32_t value)
	{
		___m_serverRespone_2 = value;
	}

	inline static int32_t get_offset_of_m_data_3() { return static_cast<int32_t>(offsetof(NetData_t1634960601, ___m_data_3)); }
	inline ByteU5BU5D_t3397334013* get_m_data_3() const { return ___m_data_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_data_3() { return &___m_data_3; }
	inline void set_m_data_3(ByteU5BU5D_t3397334013* value)
	{
		___m_data_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
