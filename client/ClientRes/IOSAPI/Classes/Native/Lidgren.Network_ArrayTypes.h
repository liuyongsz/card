#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.ReceivedFragmentGroup
struct ReceivedFragmentGroup_t4108580702;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;
// Lidgren.Network.NetPeer/DelayedPacket
struct DelayedPacket_t1298207473;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// Lidgren.Network.NetSenderChannelBase
struct NetSenderChannelBase_t3096690204;
// Lidgren.Network.NetReceiverChannelBase
struct NetReceiverChannelBase_t908288882;

#include "mscorlib_System_Array3829468939.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_ReceivedFragmentGr4108580702.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3479620470.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3781571512.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen1886281639.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer_DelayedPac1298207473.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"
#include "Lidgren_Network_Lidgren_Network_NetSenderChannelBa3096690204.h"
#include "Lidgren_Network_Lidgren_Network_NetReceiverChannelB908288882.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3234296172.h"
#include "Lidgren_Network_Lidgren_Network_NetStoredReliableM1576378473.h"

#pragma once
// Lidgren.Network.NetConnection[]
struct NetConnectionU5BU5D_t3463746480  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetConnection_t3331492029 * m_Items[1];

public:
	inline NetConnection_t3331492029 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetConnection_t3331492029 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetConnection_t3331492029 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.ReceivedFragmentGroup[]
struct ReceivedFragmentGroupU5BU5D_t2606373227  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ReceivedFragmentGroup_t4108580702 * m_Items[1];

public:
	inline ReceivedFragmentGroup_t4108580702 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ReceivedFragmentGroup_t4108580702 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ReceivedFragmentGroup_t4108580702 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.NetIncomingMessage[]
struct NetIncomingMessageU5BU5D_t827121993  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetIncomingMessage_t2014089816 * m_Items[1];

public:
	inline NetIncomingMessage_t2014089816 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetIncomingMessage_t2014089816 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetIncomingMessage_t2014089816 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.NetTuple`2<System.Object,System.Object>[]
struct NetTuple_2U5BU5D_t317503987  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetTuple_2_t3479620470  m_Items[1];

public:
	inline NetTuple_2_t3479620470  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetTuple_2_t3479620470 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetTuple_2_t3479620470  value)
	{
		m_Items[index] = value;
	}
};
// Lidgren.Network.NetTuple`2<System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage>[]
struct NetTuple_2U5BU5D_t551071337  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetTuple_2_t3781571512  m_Items[1];

public:
	inline NetTuple_2_t3781571512  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetTuple_2_t3781571512 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetTuple_2_t3781571512  value)
	{
		m_Items[index] = value;
	}
};
// Lidgren.Network.NetTuple`2<System.Threading.SynchronizationContext,System.Threading.SendOrPostCallback>[]
struct NetTuple_2U5BU5D_t3020521950  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetTuple_2_t1886281639  m_Items[1];

public:
	inline NetTuple_2_t1886281639  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetTuple_2_t1886281639 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetTuple_2_t1886281639  value)
	{
		m_Items[index] = value;
	}
};
// Lidgren.Network.NetPeer/DelayedPacket[]
struct DelayedPacketU5BU5D_t2070001196  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DelayedPacket_t1298207473 * m_Items[1];

public:
	inline DelayedPacket_t1298207473 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DelayedPacket_t1298207473 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DelayedPacket_t1298207473 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.NetOutgoingMessage[]
struct NetOutgoingMessageU5BU5D_t3847448173  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetOutgoingMessage_t2016542980 * m_Items[1];

public:
	inline NetOutgoingMessage_t2016542980 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetOutgoingMessage_t2016542980 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetOutgoingMessage_t2016542980 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.NetSenderChannelBase[]
struct NetSenderChannelBaseU5BU5D_t470374901  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetSenderChannelBase_t3096690204 * m_Items[1];

public:
	inline NetSenderChannelBase_t3096690204 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetSenderChannelBase_t3096690204 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetSenderChannelBase_t3096690204 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.NetReceiverChannelBase[]
struct NetReceiverChannelBaseU5BU5D_t1250440839  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetReceiverChannelBase_t908288882 * m_Items[1];

public:
	inline NetReceiverChannelBase_t908288882 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetReceiverChannelBase_t908288882 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetReceiverChannelBase_t908288882 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>[]
struct NetTuple_2U5BU5D_t3017564005  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetTuple_2_t3234296172  m_Items[1];

public:
	inline NetTuple_2_t3234296172  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetTuple_2_t3234296172 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetTuple_2_t3234296172  value)
	{
		m_Items[index] = value;
	}
};
// Lidgren.Network.NetStoredReliableMessage[]
struct NetStoredReliableMessageU5BU5D_t4079791060  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetStoredReliableMessage_t1576378473  m_Items[1];

public:
	inline NetStoredReliableMessage_t1576378473  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetStoredReliableMessage_t1576378473 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetStoredReliableMessage_t1576378473  value)
	{
		m_Items[index] = value;
	}
};
