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
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADDR2646152127.h"
#include "mscorlib_System_Byte3683104436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct  Win32_IP_ADAPTER_INFO_t2310876292  : public Il2CppObject
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Next
	IntPtr_t ___Next_0;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::ComboIndex
	int32_t ___ComboIndex_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AdapterName
	String_t* ___AdapterName_2;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Description
	String_t* ___Description_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AddressLength
	uint32_t ___AddressLength_4;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Address
	ByteU5BU5D_t3397334013* ___Address_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Index
	uint32_t ___Index_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Type
	uint32_t ___Type_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpEnabled
	uint32_t ___DhcpEnabled_8;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::CurrentIpAddress
	IntPtr_t ___CurrentIpAddress_9;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::IpAddressList
	Win32_IP_ADDR_STRING_t2646152127  ___IpAddressList_10;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::GatewayList
	Win32_IP_ADDR_STRING_t2646152127  ___GatewayList_11;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpServer
	Win32_IP_ADDR_STRING_t2646152127  ___DhcpServer_12;
	// System.Boolean System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::HaveWins
	bool ___HaveWins_13;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::PrimaryWinsServer
	Win32_IP_ADDR_STRING_t2646152127  ___PrimaryWinsServer_14;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::SecondaryWinsServer
	Win32_IP_ADDR_STRING_t2646152127  ___SecondaryWinsServer_15;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseObtained
	int64_t ___LeaseObtained_16;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseExpires
	int64_t ___LeaseExpires_17;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Next_0)); }
	inline IntPtr_t get_Next_0() const { return ___Next_0; }
	inline IntPtr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(IntPtr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_ComboIndex_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___ComboIndex_1)); }
	inline int32_t get_ComboIndex_1() const { return ___ComboIndex_1; }
	inline int32_t* get_address_of_ComboIndex_1() { return &___ComboIndex_1; }
	inline void set_ComboIndex_1(int32_t value)
	{
		___ComboIndex_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier(&___AdapterName_2, value);
	}

	inline static int32_t get_offset_of_Description_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Description_3)); }
	inline String_t* get_Description_3() const { return ___Description_3; }
	inline String_t** get_address_of_Description_3() { return &___Description_3; }
	inline void set_Description_3(String_t* value)
	{
		___Description_3 = value;
		Il2CppCodeGenWriteBarrier(&___Description_3, value);
	}

	inline static int32_t get_offset_of_AddressLength_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___AddressLength_4)); }
	inline uint32_t get_AddressLength_4() const { return ___AddressLength_4; }
	inline uint32_t* get_address_of_AddressLength_4() { return &___AddressLength_4; }
	inline void set_AddressLength_4(uint32_t value)
	{
		___AddressLength_4 = value;
	}

	inline static int32_t get_offset_of_Address_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Address_5)); }
	inline ByteU5BU5D_t3397334013* get_Address_5() const { return ___Address_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_Address_5() { return &___Address_5; }
	inline void set_Address_5(ByteU5BU5D_t3397334013* value)
	{
		___Address_5 = value;
		Il2CppCodeGenWriteBarrier(&___Address_5, value);
	}

	inline static int32_t get_offset_of_Index_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Index_6)); }
	inline uint32_t get_Index_6() const { return ___Index_6; }
	inline uint32_t* get_address_of_Index_6() { return &___Index_6; }
	inline void set_Index_6(uint32_t value)
	{
		___Index_6 = value;
	}

	inline static int32_t get_offset_of_Type_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Type_7)); }
	inline uint32_t get_Type_7() const { return ___Type_7; }
	inline uint32_t* get_address_of_Type_7() { return &___Type_7; }
	inline void set_Type_7(uint32_t value)
	{
		___Type_7 = value;
	}

	inline static int32_t get_offset_of_DhcpEnabled_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___DhcpEnabled_8)); }
	inline uint32_t get_DhcpEnabled_8() const { return ___DhcpEnabled_8; }
	inline uint32_t* get_address_of_DhcpEnabled_8() { return &___DhcpEnabled_8; }
	inline void set_DhcpEnabled_8(uint32_t value)
	{
		___DhcpEnabled_8 = value;
	}

	inline static int32_t get_offset_of_CurrentIpAddress_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___CurrentIpAddress_9)); }
	inline IntPtr_t get_CurrentIpAddress_9() const { return ___CurrentIpAddress_9; }
	inline IntPtr_t* get_address_of_CurrentIpAddress_9() { return &___CurrentIpAddress_9; }
	inline void set_CurrentIpAddress_9(IntPtr_t value)
	{
		___CurrentIpAddress_9 = value;
	}

	inline static int32_t get_offset_of_IpAddressList_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___IpAddressList_10)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_IpAddressList_10() const { return ___IpAddressList_10; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_IpAddressList_10() { return &___IpAddressList_10; }
	inline void set_IpAddressList_10(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___IpAddressList_10 = value;
	}

	inline static int32_t get_offset_of_GatewayList_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___GatewayList_11)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_GatewayList_11() const { return ___GatewayList_11; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_GatewayList_11() { return &___GatewayList_11; }
	inline void set_GatewayList_11(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___GatewayList_11 = value;
	}

	inline static int32_t get_offset_of_DhcpServer_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___DhcpServer_12)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_DhcpServer_12() const { return ___DhcpServer_12; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_DhcpServer_12() { return &___DhcpServer_12; }
	inline void set_DhcpServer_12(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___DhcpServer_12 = value;
	}

	inline static int32_t get_offset_of_HaveWins_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___HaveWins_13)); }
	inline bool get_HaveWins_13() const { return ___HaveWins_13; }
	inline bool* get_address_of_HaveWins_13() { return &___HaveWins_13; }
	inline void set_HaveWins_13(bool value)
	{
		___HaveWins_13 = value;
	}

	inline static int32_t get_offset_of_PrimaryWinsServer_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___PrimaryWinsServer_14)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_PrimaryWinsServer_14() const { return ___PrimaryWinsServer_14; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_PrimaryWinsServer_14() { return &___PrimaryWinsServer_14; }
	inline void set_PrimaryWinsServer_14(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___PrimaryWinsServer_14 = value;
	}

	inline static int32_t get_offset_of_SecondaryWinsServer_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___SecondaryWinsServer_15)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_SecondaryWinsServer_15() const { return ___SecondaryWinsServer_15; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_SecondaryWinsServer_15() { return &___SecondaryWinsServer_15; }
	inline void set_SecondaryWinsServer_15(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___SecondaryWinsServer_15 = value;
	}

	inline static int32_t get_offset_of_LeaseObtained_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___LeaseObtained_16)); }
	inline int64_t get_LeaseObtained_16() const { return ___LeaseObtained_16; }
	inline int64_t* get_address_of_LeaseObtained_16() { return &___LeaseObtained_16; }
	inline void set_LeaseObtained_16(int64_t value)
	{
		___LeaseObtained_16 = value;
	}

	inline static int32_t get_offset_of_LeaseExpires_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___LeaseExpires_17)); }
	inline int64_t get_LeaseExpires_17() const { return ___LeaseExpires_17; }
	inline int64_t* get_address_of_LeaseExpires_17() { return &___LeaseExpires_17; }
	inline void set_LeaseExpires_17(int64_t value)
	{
		___LeaseExpires_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2310876292_marshaled_pinvoke
{
	intptr_t ___Next_0;
	int32_t ___ComboIndex_1;
	char ___AdapterName_2[260];
	char ___Description_3[132];
	uint32_t ___AddressLength_4;
	uint8_t ___Address_5[8];
	uint32_t ___Index_6;
	uint32_t ___Type_7;
	uint32_t ___DhcpEnabled_8;
	intptr_t ___CurrentIpAddress_9;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___IpAddressList_10;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___GatewayList_11;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___DhcpServer_12;
	int32_t ___HaveWins_13;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___PrimaryWinsServer_14;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___SecondaryWinsServer_15;
	int64_t ___LeaseObtained_16;
	int64_t ___LeaseExpires_17;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2310876292_marshaled_com
{
	intptr_t ___Next_0;
	int32_t ___ComboIndex_1;
	char ___AdapterName_2[260];
	char ___Description_3[132];
	uint32_t ___AddressLength_4;
	uint8_t ___Address_5[8];
	uint32_t ___Index_6;
	uint32_t ___Type_7;
	uint32_t ___DhcpEnabled_8;
	intptr_t ___CurrentIpAddress_9;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___IpAddressList_10;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___GatewayList_11;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___DhcpServer_12;
	int32_t ___HaveWins_13;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___PrimaryWinsServer_14;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___SecondaryWinsServer_15;
	int64_t ___LeaseObtained_16;
	int64_t ___LeaseExpires_17;
};
