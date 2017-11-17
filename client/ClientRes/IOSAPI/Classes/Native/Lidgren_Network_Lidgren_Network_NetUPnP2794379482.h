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
// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;

#include "mscorlib_System_Object2689449295.h"
#include "Lidgren_Network_Lidgren_Network_UPnPStatus3639336697.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetUPnP
struct  NetUPnP_t2794379482  : public Il2CppObject
{
public:
	// System.String Lidgren.Network.NetUPnP::m_serviceUrl
	String_t* ___m_serviceUrl_0;
	// System.String Lidgren.Network.NetUPnP::m_serviceName
	String_t* ___m_serviceName_1;
	// Lidgren.Network.NetPeer Lidgren.Network.NetUPnP::m_peer
	NetPeer_t1779390221 * ___m_peer_2;
	// System.Threading.ManualResetEvent Lidgren.Network.NetUPnP::m_discoveryComplete
	ManualResetEvent_t926074657 * ___m_discoveryComplete_3;
	// System.Double Lidgren.Network.NetUPnP::m_discoveryResponseDeadline
	double ___m_discoveryResponseDeadline_4;
	// Lidgren.Network.UPnPStatus Lidgren.Network.NetUPnP::m_status
	int32_t ___m_status_5;

public:
	inline static int32_t get_offset_of_m_serviceUrl_0() { return static_cast<int32_t>(offsetof(NetUPnP_t2794379482, ___m_serviceUrl_0)); }
	inline String_t* get_m_serviceUrl_0() const { return ___m_serviceUrl_0; }
	inline String_t** get_address_of_m_serviceUrl_0() { return &___m_serviceUrl_0; }
	inline void set_m_serviceUrl_0(String_t* value)
	{
		___m_serviceUrl_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_serviceUrl_0, value);
	}

	inline static int32_t get_offset_of_m_serviceName_1() { return static_cast<int32_t>(offsetof(NetUPnP_t2794379482, ___m_serviceName_1)); }
	inline String_t* get_m_serviceName_1() const { return ___m_serviceName_1; }
	inline String_t** get_address_of_m_serviceName_1() { return &___m_serviceName_1; }
	inline void set_m_serviceName_1(String_t* value)
	{
		___m_serviceName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_serviceName_1, value);
	}

	inline static int32_t get_offset_of_m_peer_2() { return static_cast<int32_t>(offsetof(NetUPnP_t2794379482, ___m_peer_2)); }
	inline NetPeer_t1779390221 * get_m_peer_2() const { return ___m_peer_2; }
	inline NetPeer_t1779390221 ** get_address_of_m_peer_2() { return &___m_peer_2; }
	inline void set_m_peer_2(NetPeer_t1779390221 * value)
	{
		___m_peer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_peer_2, value);
	}

	inline static int32_t get_offset_of_m_discoveryComplete_3() { return static_cast<int32_t>(offsetof(NetUPnP_t2794379482, ___m_discoveryComplete_3)); }
	inline ManualResetEvent_t926074657 * get_m_discoveryComplete_3() const { return ___m_discoveryComplete_3; }
	inline ManualResetEvent_t926074657 ** get_address_of_m_discoveryComplete_3() { return &___m_discoveryComplete_3; }
	inline void set_m_discoveryComplete_3(ManualResetEvent_t926074657 * value)
	{
		___m_discoveryComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_discoveryComplete_3, value);
	}

	inline static int32_t get_offset_of_m_discoveryResponseDeadline_4() { return static_cast<int32_t>(offsetof(NetUPnP_t2794379482, ___m_discoveryResponseDeadline_4)); }
	inline double get_m_discoveryResponseDeadline_4() const { return ___m_discoveryResponseDeadline_4; }
	inline double* get_address_of_m_discoveryResponseDeadline_4() { return &___m_discoveryResponseDeadline_4; }
	inline void set_m_discoveryResponseDeadline_4(double value)
	{
		___m_discoveryResponseDeadline_4 = value;
	}

	inline static int32_t get_offset_of_m_status_5() { return static_cast<int32_t>(offsetof(NetUPnP_t2794379482, ___m_status_5)); }
	inline int32_t get_m_status_5() const { return ___m_status_5; }
	inline int32_t* get_address_of_m_status_5() { return &___m_status_5; }
	inline void set_m_status_5(int32_t value)
	{
		___m_status_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
