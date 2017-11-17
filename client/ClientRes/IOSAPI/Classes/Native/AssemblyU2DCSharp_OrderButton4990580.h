#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t1795115428;
// OrderButton
struct OrderButton_t4990580;

#include "AssemblyU2DCSharp_UIButton3377238306.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderButton
struct  OrderButton_t4990580  : public UIButton_t3377238306
{
public:
	// UILabel OrderButton::label
	UILabel_t1795115428 * ___label_20;

public:
	inline static int32_t get_offset_of_label_20() { return static_cast<int32_t>(offsetof(OrderButton_t4990580, ___label_20)); }
	inline UILabel_t1795115428 * get_label_20() const { return ___label_20; }
	inline UILabel_t1795115428 ** get_address_of_label_20() { return &___label_20; }
	inline void set_label_20(UILabel_t1795115428 * value)
	{
		___label_20 = value;
		Il2CppCodeGenWriteBarrier(&___label_20, value);
	}
};

struct OrderButton_t4990580_StaticFields
{
public:
	// OrderButton OrderButton::Current
	OrderButton_t4990580 * ___Current_21;

public:
	inline static int32_t get_offset_of_Current_21() { return static_cast<int32_t>(offsetof(OrderButton_t4990580_StaticFields, ___Current_21)); }
	inline OrderButton_t4990580 * get_Current_21() const { return ___Current_21; }
	inline OrderButton_t4990580 ** get_address_of_Current_21() { return &___Current_21; }
	inline void set_Current_21(OrderButton_t4990580 * value)
	{
		___Current_21 = value;
		Il2CppCodeGenWriteBarrier(&___Current_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
