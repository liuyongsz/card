#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3216990848;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2766455145;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase822653733.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TPeer
struct  TPeer_t393296942  : public PeerBase_t822653733
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_t3216990848 * ___incomingList_64;
	// System.Collections.Generic.List`1<System.Byte[]> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t2766455145 * ___outgoingStream_65;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_66;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_t3397334013* ___pingRequest_67;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_t3397334013* ___messageHeader_70;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_71;

public:
	inline static int32_t get_offset_of_incomingList_64() { return static_cast<int32_t>(offsetof(TPeer_t393296942, ___incomingList_64)); }
	inline Queue_1_t3216990848 * get_incomingList_64() const { return ___incomingList_64; }
	inline Queue_1_t3216990848 ** get_address_of_incomingList_64() { return &___incomingList_64; }
	inline void set_incomingList_64(Queue_1_t3216990848 * value)
	{
		___incomingList_64 = value;
		Il2CppCodeGenWriteBarrier(&___incomingList_64, value);
	}

	inline static int32_t get_offset_of_outgoingStream_65() { return static_cast<int32_t>(offsetof(TPeer_t393296942, ___outgoingStream_65)); }
	inline List_1_t2766455145 * get_outgoingStream_65() const { return ___outgoingStream_65; }
	inline List_1_t2766455145 ** get_address_of_outgoingStream_65() { return &___outgoingStream_65; }
	inline void set_outgoingStream_65(List_1_t2766455145 * value)
	{
		___outgoingStream_65 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingStream_65, value);
	}

	inline static int32_t get_offset_of_lastPingResult_66() { return static_cast<int32_t>(offsetof(TPeer_t393296942, ___lastPingResult_66)); }
	inline int32_t get_lastPingResult_66() const { return ___lastPingResult_66; }
	inline int32_t* get_address_of_lastPingResult_66() { return &___lastPingResult_66; }
	inline void set_lastPingResult_66(int32_t value)
	{
		___lastPingResult_66 = value;
	}

	inline static int32_t get_offset_of_pingRequest_67() { return static_cast<int32_t>(offsetof(TPeer_t393296942, ___pingRequest_67)); }
	inline ByteU5BU5D_t3397334013* get_pingRequest_67() const { return ___pingRequest_67; }
	inline ByteU5BU5D_t3397334013** get_address_of_pingRequest_67() { return &___pingRequest_67; }
	inline void set_pingRequest_67(ByteU5BU5D_t3397334013* value)
	{
		___pingRequest_67 = value;
		Il2CppCodeGenWriteBarrier(&___pingRequest_67, value);
	}

	inline static int32_t get_offset_of_messageHeader_70() { return static_cast<int32_t>(offsetof(TPeer_t393296942, ___messageHeader_70)); }
	inline ByteU5BU5D_t3397334013* get_messageHeader_70() const { return ___messageHeader_70; }
	inline ByteU5BU5D_t3397334013** get_address_of_messageHeader_70() { return &___messageHeader_70; }
	inline void set_messageHeader_70(ByteU5BU5D_t3397334013* value)
	{
		___messageHeader_70 = value;
		Il2CppCodeGenWriteBarrier(&___messageHeader_70, value);
	}

	inline static int32_t get_offset_of_DoFraming_71() { return static_cast<int32_t>(offsetof(TPeer_t393296942, ___DoFraming_71)); }
	inline bool get_DoFraming_71() const { return ___DoFraming_71; }
	inline bool* get_address_of_DoFraming_71() { return &___DoFraming_71; }
	inline void set_DoFraming_71(bool value)
	{
		___DoFraming_71 = value;
	}
};

struct TPeer_t393296942_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_t3397334013* ___tcpFramedMessageHead_68;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_t3397334013* ___tcpMsgHead_69;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_68() { return static_cast<int32_t>(offsetof(TPeer_t393296942_StaticFields, ___tcpFramedMessageHead_68)); }
	inline ByteU5BU5D_t3397334013* get_tcpFramedMessageHead_68() const { return ___tcpFramedMessageHead_68; }
	inline ByteU5BU5D_t3397334013** get_address_of_tcpFramedMessageHead_68() { return &___tcpFramedMessageHead_68; }
	inline void set_tcpFramedMessageHead_68(ByteU5BU5D_t3397334013* value)
	{
		___tcpFramedMessageHead_68 = value;
		Il2CppCodeGenWriteBarrier(&___tcpFramedMessageHead_68, value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_69() { return static_cast<int32_t>(offsetof(TPeer_t393296942_StaticFields, ___tcpMsgHead_69)); }
	inline ByteU5BU5D_t3397334013* get_tcpMsgHead_69() const { return ___tcpMsgHead_69; }
	inline ByteU5BU5D_t3397334013** get_address_of_tcpMsgHead_69() { return &___tcpMsgHead_69; }
	inline void set_tcpMsgHead_69(ByteU5BU5D_t3397334013* value)
	{
		___tcpMsgHead_69 = value;
		Il2CppCodeGenWriteBarrier(&___tcpMsgHead_69, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
