#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Lidgren_Network_Lidgren_Network_NetBuffer3608062491.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetOutgoingMessage
struct  NetOutgoingMessage_t2016542980  : public NetBuffer_t3608062491
{
public:
	// Lidgren.Network.NetMessageType Lidgren.Network.NetOutgoingMessage::m_messageType
	uint8_t ___m_messageType_5;
	// System.Boolean Lidgren.Network.NetOutgoingMessage::m_isSent
	bool ___m_isSent_6;
	// System.Int32 Lidgren.Network.NetOutgoingMessage::m_recyclingCount
	int32_t ___m_recyclingCount_7;
	// System.Int32 Lidgren.Network.NetOutgoingMessage::m_fragmentGroup
	int32_t ___m_fragmentGroup_8;
	// System.Int32 Lidgren.Network.NetOutgoingMessage::m_fragmentGroupTotalBits
	int32_t ___m_fragmentGroupTotalBits_9;
	// System.Int32 Lidgren.Network.NetOutgoingMessage::m_fragmentChunkByteSize
	int32_t ___m_fragmentChunkByteSize_10;
	// System.Int32 Lidgren.Network.NetOutgoingMessage::m_fragmentChunkNumber
	int32_t ___m_fragmentChunkNumber_11;

public:
	inline static int32_t get_offset_of_m_messageType_5() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_messageType_5)); }
	inline uint8_t get_m_messageType_5() const { return ___m_messageType_5; }
	inline uint8_t* get_address_of_m_messageType_5() { return &___m_messageType_5; }
	inline void set_m_messageType_5(uint8_t value)
	{
		___m_messageType_5 = value;
	}

	inline static int32_t get_offset_of_m_isSent_6() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_isSent_6)); }
	inline bool get_m_isSent_6() const { return ___m_isSent_6; }
	inline bool* get_address_of_m_isSent_6() { return &___m_isSent_6; }
	inline void set_m_isSent_6(bool value)
	{
		___m_isSent_6 = value;
	}

	inline static int32_t get_offset_of_m_recyclingCount_7() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_recyclingCount_7)); }
	inline int32_t get_m_recyclingCount_7() const { return ___m_recyclingCount_7; }
	inline int32_t* get_address_of_m_recyclingCount_7() { return &___m_recyclingCount_7; }
	inline void set_m_recyclingCount_7(int32_t value)
	{
		___m_recyclingCount_7 = value;
	}

	inline static int32_t get_offset_of_m_fragmentGroup_8() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_fragmentGroup_8)); }
	inline int32_t get_m_fragmentGroup_8() const { return ___m_fragmentGroup_8; }
	inline int32_t* get_address_of_m_fragmentGroup_8() { return &___m_fragmentGroup_8; }
	inline void set_m_fragmentGroup_8(int32_t value)
	{
		___m_fragmentGroup_8 = value;
	}

	inline static int32_t get_offset_of_m_fragmentGroupTotalBits_9() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_fragmentGroupTotalBits_9)); }
	inline int32_t get_m_fragmentGroupTotalBits_9() const { return ___m_fragmentGroupTotalBits_9; }
	inline int32_t* get_address_of_m_fragmentGroupTotalBits_9() { return &___m_fragmentGroupTotalBits_9; }
	inline void set_m_fragmentGroupTotalBits_9(int32_t value)
	{
		___m_fragmentGroupTotalBits_9 = value;
	}

	inline static int32_t get_offset_of_m_fragmentChunkByteSize_10() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_fragmentChunkByteSize_10)); }
	inline int32_t get_m_fragmentChunkByteSize_10() const { return ___m_fragmentChunkByteSize_10; }
	inline int32_t* get_address_of_m_fragmentChunkByteSize_10() { return &___m_fragmentChunkByteSize_10; }
	inline void set_m_fragmentChunkByteSize_10(int32_t value)
	{
		___m_fragmentChunkByteSize_10 = value;
	}

	inline static int32_t get_offset_of_m_fragmentChunkNumber_11() { return static_cast<int32_t>(offsetof(NetOutgoingMessage_t2016542980, ___m_fragmentChunkNumber_11)); }
	inline int32_t get_m_fragmentChunkNumber_11() const { return ___m_fragmentChunkNumber_11; }
	inline int32_t* get_address_of_m_fragmentChunkNumber_11() { return &___m_fragmentChunkNumber_11; }
	inline void set_m_fragmentChunkNumber_11(int32_t value)
	{
		___m_fragmentChunkNumber_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
