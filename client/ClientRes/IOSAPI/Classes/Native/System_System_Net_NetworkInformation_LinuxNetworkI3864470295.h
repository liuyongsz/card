#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "System_System_Net_NetworkInformation_UnixNetworkIn1000704527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t3864470295  : public UnixNetworkInterface_t1000704527
{
public:
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_8;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_9;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_10;

public:
	inline static int32_t get_offset_of_iface_path_8() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_path_8)); }
	inline String_t* get_iface_path_8() const { return ___iface_path_8; }
	inline String_t** get_address_of_iface_path_8() { return &___iface_path_8; }
	inline void set_iface_path_8(String_t* value)
	{
		___iface_path_8 = value;
		Il2CppCodeGenWriteBarrier(&___iface_path_8, value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_9() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_operstate_path_9)); }
	inline String_t* get_iface_operstate_path_9() const { return ___iface_operstate_path_9; }
	inline String_t** get_address_of_iface_operstate_path_9() { return &___iface_operstate_path_9; }
	inline void set_iface_operstate_path_9(String_t* value)
	{
		___iface_operstate_path_9 = value;
		Il2CppCodeGenWriteBarrier(&___iface_operstate_path_9, value);
	}

	inline static int32_t get_offset_of_iface_flags_path_10() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_flags_path_10)); }
	inline String_t* get_iface_flags_path_10() const { return ___iface_flags_path_10; }
	inline String_t** get_address_of_iface_flags_path_10() { return &___iface_flags_path_10; }
	inline void set_iface_flags_path_10(String_t* value)
	{
		___iface_flags_path_10 = value;
		Il2CppCodeGenWriteBarrier(&___iface_flags_path_10, value);
	}
};

struct LinuxNetworkInterface_t3864470295_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.NetworkInformation.LinuxNetworkInterface::<>f__switch$map3
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map3_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_11() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295_StaticFields, ___U3CU3Ef__switchU24map3_11)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map3_11() const { return ___U3CU3Ef__switchU24map3_11; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map3_11() { return &___U3CU3Ef__switchU24map3_11; }
	inline void set_U3CU3Ef__switchU24map3_11(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map3_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
