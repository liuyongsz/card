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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Config/GameAddress
struct  GameAddress_t2645488947  : public Il2CppObject
{
public:
	// System.String Config/GameAddress::strID
	String_t* ___strID_0;
	// System.String Config/GameAddress::strName
	String_t* ___strName_1;
	// System.String Config/GameAddress::strDomainAddress
	String_t* ___strDomainAddress_2;
	// System.String Config/GameAddress::strIPAddress
	String_t* ___strIPAddress_3;

public:
	inline static int32_t get_offset_of_strID_0() { return static_cast<int32_t>(offsetof(GameAddress_t2645488947, ___strID_0)); }
	inline String_t* get_strID_0() const { return ___strID_0; }
	inline String_t** get_address_of_strID_0() { return &___strID_0; }
	inline void set_strID_0(String_t* value)
	{
		___strID_0 = value;
		Il2CppCodeGenWriteBarrier(&___strID_0, value);
	}

	inline static int32_t get_offset_of_strName_1() { return static_cast<int32_t>(offsetof(GameAddress_t2645488947, ___strName_1)); }
	inline String_t* get_strName_1() const { return ___strName_1; }
	inline String_t** get_address_of_strName_1() { return &___strName_1; }
	inline void set_strName_1(String_t* value)
	{
		___strName_1 = value;
		Il2CppCodeGenWriteBarrier(&___strName_1, value);
	}

	inline static int32_t get_offset_of_strDomainAddress_2() { return static_cast<int32_t>(offsetof(GameAddress_t2645488947, ___strDomainAddress_2)); }
	inline String_t* get_strDomainAddress_2() const { return ___strDomainAddress_2; }
	inline String_t** get_address_of_strDomainAddress_2() { return &___strDomainAddress_2; }
	inline void set_strDomainAddress_2(String_t* value)
	{
		___strDomainAddress_2 = value;
		Il2CppCodeGenWriteBarrier(&___strDomainAddress_2, value);
	}

	inline static int32_t get_offset_of_strIPAddress_3() { return static_cast<int32_t>(offsetof(GameAddress_t2645488947, ___strIPAddress_3)); }
	inline String_t* get_strIPAddress_3() const { return ___strIPAddress_3; }
	inline String_t** get_address_of_strIPAddress_3() { return &___strIPAddress_3; }
	inline void set_strIPAddress_3(String_t* value)
	{
		___strIPAddress_3 = value;
		Il2CppCodeGenWriteBarrier(&___strIPAddress_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
