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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatChannel
struct  ChatChannel_t2271943107  : public Il2CppObject
{
public:
	// System.String ExitGames.Client.Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> ExitGames.Client.Photon.Chat.ChatChannel::Senders
	List_1_t1398341365 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> ExitGames.Client.Photon.Chat.ChatChannel::Messages
	List_1_t2058570427 * ___Messages_2;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_t2271943107, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_t2271943107, ___Senders_1)); }
	inline List_1_t1398341365 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_t1398341365 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_t1398341365 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier(&___Senders_1, value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_t2271943107, ___Messages_2)); }
	inline List_1_t2058570427 * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t2058570427 ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t2058570427 * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier(&___Messages_2, value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_t2271943107, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatChannel_t2271943107, ___U3CIsPrivateU3Ek__BackingField_4)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_4() const { return ___U3CIsPrivateU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_4() { return &___U3CIsPrivateU3Ek__BackingField_4; }
	inline void set_U3CIsPrivateU3Ek__BackingField_4(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
