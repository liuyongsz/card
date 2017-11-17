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
#include "AssemblyU2DCSharp_E_CardType815994862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TD_Card
struct  TD_Card_t45040677  : public Il2CppObject
{
public:
	// System.Int32 TD_Card::id
	int32_t ___id_0;
	// System.String TD_Card::res
	String_t* ___res_1;
	// System.String TD_Card::name
	String_t* ___name_2;
	// E_CardType TD_Card::type
	int32_t ___type_3;
	// System.String TD_Card::type1
	String_t* ___type1_4;
	// System.Int32 TD_Card::isHave
	int32_t ___isHave_5;
	// System.Int32 TD_Card::isFight
	int32_t ___isFight_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_res_1() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___res_1)); }
	inline String_t* get_res_1() const { return ___res_1; }
	inline String_t** get_address_of_res_1() { return &___res_1; }
	inline void set_res_1(String_t* value)
	{
		___res_1 = value;
		Il2CppCodeGenWriteBarrier(&___res_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_type1_4() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___type1_4)); }
	inline String_t* get_type1_4() const { return ___type1_4; }
	inline String_t** get_address_of_type1_4() { return &___type1_4; }
	inline void set_type1_4(String_t* value)
	{
		___type1_4 = value;
		Il2CppCodeGenWriteBarrier(&___type1_4, value);
	}

	inline static int32_t get_offset_of_isHave_5() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___isHave_5)); }
	inline int32_t get_isHave_5() const { return ___isHave_5; }
	inline int32_t* get_address_of_isHave_5() { return &___isHave_5; }
	inline void set_isHave_5(int32_t value)
	{
		___isHave_5 = value;
	}

	inline static int32_t get_offset_of_isFight_6() { return static_cast<int32_t>(offsetof(TD_Card_t45040677, ___isFight_6)); }
	inline int32_t get_isFight_6() const { return ___isFight_6; }
	inline int32_t* get_address_of_isFight_6() { return &___isFight_6; }
	inline void set_isFight_6(int32_t value)
	{
		___isFight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
