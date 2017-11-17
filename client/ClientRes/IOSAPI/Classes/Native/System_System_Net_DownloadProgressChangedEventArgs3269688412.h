#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_ComponentModel_ProgressChangedEventAr711712958.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DownloadProgressChangedEventArgs
struct  DownloadProgressChangedEventArgs_t3269688412  : public ProgressChangedEventArgs_t711712958
{
public:
	// System.Int64 System.Net.DownloadProgressChangedEventArgs::received
	int64_t ___received_3;
	// System.Int64 System.Net.DownloadProgressChangedEventArgs::total
	int64_t ___total_4;

public:
	inline static int32_t get_offset_of_received_3() { return static_cast<int32_t>(offsetof(DownloadProgressChangedEventArgs_t3269688412, ___received_3)); }
	inline int64_t get_received_3() const { return ___received_3; }
	inline int64_t* get_address_of_received_3() { return &___received_3; }
	inline void set_received_3(int64_t value)
	{
		___received_3 = value;
	}

	inline static int32_t get_offset_of_total_4() { return static_cast<int32_t>(offsetof(DownloadProgressChangedEventArgs_t3269688412, ___total_4)); }
	inline int64_t get_total_4() const { return ___total_4; }
	inline int64_t* get_address_of_total_4() { return &___total_4; }
	inline void set_total_4(int64_t value)
	{
		___total_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
