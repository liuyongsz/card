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
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t2531697585;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeer2940878176.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatPeer
struct  ChatPeer_t3121459608  : public PhotonPeer_t2940878176
{
public:

public:
};

struct ChatPeer_t3121459608_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t2531697585 * ___ProtocolToNameServerPort_6;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_6() { return static_cast<int32_t>(offsetof(ChatPeer_t3121459608_StaticFields, ___ProtocolToNameServerPort_6)); }
	inline Dictionary_2_t2531697585 * get_ProtocolToNameServerPort_6() const { return ___ProtocolToNameServerPort_6; }
	inline Dictionary_2_t2531697585 ** get_address_of_ProtocolToNameServerPort_6() { return &___ProtocolToNameServerPort_6; }
	inline void set_ProtocolToNameServerPort_6(Dictionary_2_t2531697585 * value)
	{
		___ProtocolToNameServerPort_6 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolToNameServerPort_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
