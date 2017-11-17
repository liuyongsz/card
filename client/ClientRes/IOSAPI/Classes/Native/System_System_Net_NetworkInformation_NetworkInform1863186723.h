#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Exception1927440687.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationException
struct  NetworkInformationException_t1863186723  : public Exception_t1927440687
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInformationException::error_code
	int32_t ___error_code_11;

public:
	inline static int32_t get_offset_of_error_code_11() { return static_cast<int32_t>(offsetof(NetworkInformationException_t1863186723, ___error_code_11)); }
	inline int32_t get_error_code_11() const { return ___error_code_11; }
	inline int32_t* get_address_of_error_code_11() { return &___error_code_11; }
	inline void set_error_code_11(int32_t value)
	{
		___error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
