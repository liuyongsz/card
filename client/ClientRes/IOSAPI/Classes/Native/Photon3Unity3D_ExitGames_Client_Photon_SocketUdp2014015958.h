#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Object
struct Il2CppObject;

#include "Photon3Unity3D_ExitGames_Client_Photon_IPhotonSocke429031990.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketUdp
struct  SocketUdp_t2014015958  : public IPhotonSocket_t429031990
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketUdp::sock
	Socket_t3821512045 * ___sock_6;
	// System.Object ExitGames.Client.Photon.SocketUdp::syncer
	Il2CppObject * ___syncer_7;

public:
	inline static int32_t get_offset_of_sock_6() { return static_cast<int32_t>(offsetof(SocketUdp_t2014015958, ___sock_6)); }
	inline Socket_t3821512045 * get_sock_6() const { return ___sock_6; }
	inline Socket_t3821512045 ** get_address_of_sock_6() { return &___sock_6; }
	inline void set_sock_6(Socket_t3821512045 * value)
	{
		___sock_6 = value;
		Il2CppCodeGenWriteBarrier(&___sock_6, value);
	}

	inline static int32_t get_offset_of_syncer_7() { return static_cast<int32_t>(offsetof(SocketUdp_t2014015958, ___syncer_7)); }
	inline Il2CppObject * get_syncer_7() const { return ___syncer_7; }
	inline Il2CppObject ** get_address_of_syncer_7() { return &___syncer_7; }
	inline void set_syncer_7(Il2CppObject * value)
	{
		___syncer_7 = value;
		Il2CppCodeGenWriteBarrier(&___syncer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
