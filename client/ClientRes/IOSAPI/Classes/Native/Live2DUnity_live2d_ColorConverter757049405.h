#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.ColorConvertData
struct ColorConvertData_t28676816;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ColorConverter
struct  ColorConverter_t757049405  : public Il2CppObject
{
public:
	// live2d.ColorConvertData live2d.ColorConverter::data
	ColorConvertData_t28676816 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ColorConverter_t757049405, ___data_0)); }
	inline ColorConvertData_t28676816 * get_data_0() const { return ___data_0; }
	inline ColorConvertData_t28676816 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ColorConvertData_t28676816 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
