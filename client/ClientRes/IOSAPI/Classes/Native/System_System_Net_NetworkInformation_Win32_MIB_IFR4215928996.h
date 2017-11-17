#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Byte3683104436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t4215928996 
{
public:
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t1328083999* ___Name_0;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_1;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_2;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_4;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_5;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t3397334013* ___PhysAddr_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_9;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_10;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_11;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_22;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t3397334013* ___Descr_23;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___Name_0)); }
	inline CharU5BU5D_t1328083999* get_Name_0() const { return ___Name_0; }
	inline CharU5BU5D_t1328083999** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(CharU5BU5D_t1328083999* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Mtu_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___Mtu_3)); }
	inline int32_t get_Mtu_3() const { return ___Mtu_3; }
	inline int32_t* get_address_of_Mtu_3() { return &___Mtu_3; }
	inline void set_Mtu_3(int32_t value)
	{
		___Mtu_3 = value;
	}

	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___Speed_4)); }
	inline uint32_t get_Speed_4() const { return ___Speed_4; }
	inline uint32_t* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(uint32_t value)
	{
		___Speed_4 = value;
	}

	inline static int32_t get_offset_of_PhysAddrLen_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___PhysAddrLen_5)); }
	inline int32_t get_PhysAddrLen_5() const { return ___PhysAddrLen_5; }
	inline int32_t* get_address_of_PhysAddrLen_5() { return &___PhysAddrLen_5; }
	inline void set_PhysAddrLen_5(int32_t value)
	{
		___PhysAddrLen_5 = value;
	}

	inline static int32_t get_offset_of_PhysAddr_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___PhysAddr_6)); }
	inline ByteU5BU5D_t3397334013* get_PhysAddr_6() const { return ___PhysAddr_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_PhysAddr_6() { return &___PhysAddr_6; }
	inline void set_PhysAddr_6(ByteU5BU5D_t3397334013* value)
	{
		___PhysAddr_6 = value;
		Il2CppCodeGenWriteBarrier(&___PhysAddr_6, value);
	}

	inline static int32_t get_offset_of_AdminStatus_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___AdminStatus_7)); }
	inline uint32_t get_AdminStatus_7() const { return ___AdminStatus_7; }
	inline uint32_t* get_address_of_AdminStatus_7() { return &___AdminStatus_7; }
	inline void set_AdminStatus_7(uint32_t value)
	{
		___AdminStatus_7 = value;
	}

	inline static int32_t get_offset_of_OperStatus_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OperStatus_8)); }
	inline uint32_t get_OperStatus_8() const { return ___OperStatus_8; }
	inline uint32_t* get_address_of_OperStatus_8() { return &___OperStatus_8; }
	inline void set_OperStatus_8(uint32_t value)
	{
		___OperStatus_8 = value;
	}

	inline static int32_t get_offset_of_LastChange_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___LastChange_9)); }
	inline uint32_t get_LastChange_9() const { return ___LastChange_9; }
	inline uint32_t* get_address_of_LastChange_9() { return &___LastChange_9; }
	inline void set_LastChange_9(uint32_t value)
	{
		___LastChange_9 = value;
	}

	inline static int32_t get_offset_of_InOctets_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___InOctets_10)); }
	inline int32_t get_InOctets_10() const { return ___InOctets_10; }
	inline int32_t* get_address_of_InOctets_10() { return &___InOctets_10; }
	inline void set_InOctets_10(int32_t value)
	{
		___InOctets_10 = value;
	}

	inline static int32_t get_offset_of_InUcastPkts_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___InUcastPkts_11)); }
	inline int32_t get_InUcastPkts_11() const { return ___InUcastPkts_11; }
	inline int32_t* get_address_of_InUcastPkts_11() { return &___InUcastPkts_11; }
	inline void set_InUcastPkts_11(int32_t value)
	{
		___InUcastPkts_11 = value;
	}

	inline static int32_t get_offset_of_InNUcastPkts_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___InNUcastPkts_12)); }
	inline int32_t get_InNUcastPkts_12() const { return ___InNUcastPkts_12; }
	inline int32_t* get_address_of_InNUcastPkts_12() { return &___InNUcastPkts_12; }
	inline void set_InNUcastPkts_12(int32_t value)
	{
		___InNUcastPkts_12 = value;
	}

	inline static int32_t get_offset_of_InDiscards_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___InDiscards_13)); }
	inline int32_t get_InDiscards_13() const { return ___InDiscards_13; }
	inline int32_t* get_address_of_InDiscards_13() { return &___InDiscards_13; }
	inline void set_InDiscards_13(int32_t value)
	{
		___InDiscards_13 = value;
	}

	inline static int32_t get_offset_of_InErrors_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___InErrors_14)); }
	inline int32_t get_InErrors_14() const { return ___InErrors_14; }
	inline int32_t* get_address_of_InErrors_14() { return &___InErrors_14; }
	inline void set_InErrors_14(int32_t value)
	{
		___InErrors_14 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___InUnknownProtos_15)); }
	inline int32_t get_InUnknownProtos_15() const { return ___InUnknownProtos_15; }
	inline int32_t* get_address_of_InUnknownProtos_15() { return &___InUnknownProtos_15; }
	inline void set_InUnknownProtos_15(int32_t value)
	{
		___InUnknownProtos_15 = value;
	}

	inline static int32_t get_offset_of_OutOctets_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OutOctets_16)); }
	inline int32_t get_OutOctets_16() const { return ___OutOctets_16; }
	inline int32_t* get_address_of_OutOctets_16() { return &___OutOctets_16; }
	inline void set_OutOctets_16(int32_t value)
	{
		___OutOctets_16 = value;
	}

	inline static int32_t get_offset_of_OutUcastPkts_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OutUcastPkts_17)); }
	inline int32_t get_OutUcastPkts_17() const { return ___OutUcastPkts_17; }
	inline int32_t* get_address_of_OutUcastPkts_17() { return &___OutUcastPkts_17; }
	inline void set_OutUcastPkts_17(int32_t value)
	{
		___OutUcastPkts_17 = value;
	}

	inline static int32_t get_offset_of_OutNUcastPkts_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OutNUcastPkts_18)); }
	inline int32_t get_OutNUcastPkts_18() const { return ___OutNUcastPkts_18; }
	inline int32_t* get_address_of_OutNUcastPkts_18() { return &___OutNUcastPkts_18; }
	inline void set_OutNUcastPkts_18(int32_t value)
	{
		___OutNUcastPkts_18 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OutDiscards_19)); }
	inline int32_t get_OutDiscards_19() const { return ___OutDiscards_19; }
	inline int32_t* get_address_of_OutDiscards_19() { return &___OutDiscards_19; }
	inline void set_OutDiscards_19(int32_t value)
	{
		___OutDiscards_19 = value;
	}

	inline static int32_t get_offset_of_OutErrors_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OutErrors_20)); }
	inline int32_t get_OutErrors_20() const { return ___OutErrors_20; }
	inline int32_t* get_address_of_OutErrors_20() { return &___OutErrors_20; }
	inline void set_OutErrors_20(int32_t value)
	{
		___OutErrors_20 = value;
	}

	inline static int32_t get_offset_of_OutQLen_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___OutQLen_21)); }
	inline int32_t get_OutQLen_21() const { return ___OutQLen_21; }
	inline int32_t* get_address_of_OutQLen_21() { return &___OutQLen_21; }
	inline void set_OutQLen_21(int32_t value)
	{
		___OutQLen_21 = value;
	}

	inline static int32_t get_offset_of_DescrLen_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___DescrLen_22)); }
	inline int32_t get_DescrLen_22() const { return ___DescrLen_22; }
	inline int32_t* get_address_of_DescrLen_22() { return &___DescrLen_22; }
	inline void set_DescrLen_22(int32_t value)
	{
		___DescrLen_22 = value;
	}

	inline static int32_t get_offset_of_Descr_23() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t4215928996, ___Descr_23)); }
	inline ByteU5BU5D_t3397334013* get_Descr_23() const { return ___Descr_23; }
	inline ByteU5BU5D_t3397334013** get_address_of_Descr_23() { return &___Descr_23; }
	inline void set_Descr_23(ByteU5BU5D_t3397334013* value)
	{
		___Descr_23 = value;
		Il2CppCodeGenWriteBarrier(&___Descr_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t4215928996_marshaled_pinvoke
{
	char ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t4215928996_marshaled_com
{
	char ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
