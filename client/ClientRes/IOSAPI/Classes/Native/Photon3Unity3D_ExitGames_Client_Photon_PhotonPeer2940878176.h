#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t2940878176  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t822653733 * ___peerBase_0;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	Il2CppObject * ___SendOutgoingLockObject_1;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	Il2CppObject * ___DispatchLockObject_2;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	Il2CppObject * ___EnqueueLock_3;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t2940878176, ___peerBase_0)); }
	inline PeerBase_t822653733 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t822653733 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t822653733 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier(&___peerBase_0, value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t2940878176, ___SendOutgoingLockObject_1)); }
	inline Il2CppObject * get_SendOutgoingLockObject_1() const { return ___SendOutgoingLockObject_1; }
	inline Il2CppObject ** get_address_of_SendOutgoingLockObject_1() { return &___SendOutgoingLockObject_1; }
	inline void set_SendOutgoingLockObject_1(Il2CppObject * value)
	{
		___SendOutgoingLockObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___SendOutgoingLockObject_1, value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t2940878176, ___DispatchLockObject_2)); }
	inline Il2CppObject * get_DispatchLockObject_2() const { return ___DispatchLockObject_2; }
	inline Il2CppObject ** get_address_of_DispatchLockObject_2() { return &___DispatchLockObject_2; }
	inline void set_DispatchLockObject_2(Il2CppObject * value)
	{
		___DispatchLockObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___DispatchLockObject_2, value);
	}

	inline static int32_t get_offset_of_EnqueueLock_3() { return static_cast<int32_t>(offsetof(PhotonPeer_t2940878176, ___EnqueueLock_3)); }
	inline Il2CppObject * get_EnqueueLock_3() const { return ___EnqueueLock_3; }
	inline Il2CppObject ** get_address_of_EnqueueLock_3() { return &___EnqueueLock_3; }
	inline void set_EnqueueLock_3(Il2CppObject * value)
	{
		___EnqueueLock_3 = value;
		Il2CppCodeGenWriteBarrier(&___EnqueueLock_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
