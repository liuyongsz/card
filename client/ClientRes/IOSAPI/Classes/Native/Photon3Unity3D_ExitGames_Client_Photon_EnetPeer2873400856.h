#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct Dictionary_2_t318600550;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand>
struct List_1_t1502735431;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t1953271134;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ExitGames.Client.Photon.EnetChannel[]
struct EnetChannelU5BU5D_t579585926;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t1891534283;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase822653733.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EnetPeer
struct  EnetPeer_t2873400856  : public PeerBase_t822653733
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel> ExitGames.Client.Photon.EnetPeer::channels
	Dictionary_2_t318600550 * ___channels_64;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::sentReliableCommands
	List_1_t1502735431 * ___sentReliableCommands_65;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::outgoingAcknowledgementsList
	Queue_1_t1953271134 * ___outgoingAcknowledgementsList_66;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::windowSize
	int32_t ___windowSize_67;
	// System.Byte ExitGames.Client.Photon.EnetPeer::udpCommandCount
	uint8_t ___udpCommandCount_68;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpBuffer
	ByteU5BU5D_t3397334013* ___udpBuffer_69;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferIndex
	int32_t ___udpBufferIndex_70;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::challenge
	int32_t ___challenge_71;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsRepeated
	int32_t ___reliableCommandsRepeated_72;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsSent
	int32_t ___reliableCommandsSent_73;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::serverSentTime
	int32_t ___serverSentTime_74;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::initData
	ByteU5BU5D_t3397334013* ___initData_77;
	// ExitGames.Client.Photon.EnetChannel[] ExitGames.Client.Photon.EnetPeer::channelArray
	EnetChannelU5BU5D_t579585926* ___channelArray_78;
	// System.Collections.Generic.Queue`1<System.Int32> ExitGames.Client.Photon.EnetPeer::commandsToRemove
	Queue_1_t1891534283 * ___commandsToRemove_79;

public:
	inline static int32_t get_offset_of_channels_64() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___channels_64)); }
	inline Dictionary_2_t318600550 * get_channels_64() const { return ___channels_64; }
	inline Dictionary_2_t318600550 ** get_address_of_channels_64() { return &___channels_64; }
	inline void set_channels_64(Dictionary_2_t318600550 * value)
	{
		___channels_64 = value;
		Il2CppCodeGenWriteBarrier(&___channels_64, value);
	}

	inline static int32_t get_offset_of_sentReliableCommands_65() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___sentReliableCommands_65)); }
	inline List_1_t1502735431 * get_sentReliableCommands_65() const { return ___sentReliableCommands_65; }
	inline List_1_t1502735431 ** get_address_of_sentReliableCommands_65() { return &___sentReliableCommands_65; }
	inline void set_sentReliableCommands_65(List_1_t1502735431 * value)
	{
		___sentReliableCommands_65 = value;
		Il2CppCodeGenWriteBarrier(&___sentReliableCommands_65, value);
	}

	inline static int32_t get_offset_of_outgoingAcknowledgementsList_66() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___outgoingAcknowledgementsList_66)); }
	inline Queue_1_t1953271134 * get_outgoingAcknowledgementsList_66() const { return ___outgoingAcknowledgementsList_66; }
	inline Queue_1_t1953271134 ** get_address_of_outgoingAcknowledgementsList_66() { return &___outgoingAcknowledgementsList_66; }
	inline void set_outgoingAcknowledgementsList_66(Queue_1_t1953271134 * value)
	{
		___outgoingAcknowledgementsList_66 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingAcknowledgementsList_66, value);
	}

	inline static int32_t get_offset_of_windowSize_67() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___windowSize_67)); }
	inline int32_t get_windowSize_67() const { return ___windowSize_67; }
	inline int32_t* get_address_of_windowSize_67() { return &___windowSize_67; }
	inline void set_windowSize_67(int32_t value)
	{
		___windowSize_67 = value;
	}

	inline static int32_t get_offset_of_udpCommandCount_68() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___udpCommandCount_68)); }
	inline uint8_t get_udpCommandCount_68() const { return ___udpCommandCount_68; }
	inline uint8_t* get_address_of_udpCommandCount_68() { return &___udpCommandCount_68; }
	inline void set_udpCommandCount_68(uint8_t value)
	{
		___udpCommandCount_68 = value;
	}

	inline static int32_t get_offset_of_udpBuffer_69() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___udpBuffer_69)); }
	inline ByteU5BU5D_t3397334013* get_udpBuffer_69() const { return ___udpBuffer_69; }
	inline ByteU5BU5D_t3397334013** get_address_of_udpBuffer_69() { return &___udpBuffer_69; }
	inline void set_udpBuffer_69(ByteU5BU5D_t3397334013* value)
	{
		___udpBuffer_69 = value;
		Il2CppCodeGenWriteBarrier(&___udpBuffer_69, value);
	}

	inline static int32_t get_offset_of_udpBufferIndex_70() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___udpBufferIndex_70)); }
	inline int32_t get_udpBufferIndex_70() const { return ___udpBufferIndex_70; }
	inline int32_t* get_address_of_udpBufferIndex_70() { return &___udpBufferIndex_70; }
	inline void set_udpBufferIndex_70(int32_t value)
	{
		___udpBufferIndex_70 = value;
	}

	inline static int32_t get_offset_of_challenge_71() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___challenge_71)); }
	inline int32_t get_challenge_71() const { return ___challenge_71; }
	inline int32_t* get_address_of_challenge_71() { return &___challenge_71; }
	inline void set_challenge_71(int32_t value)
	{
		___challenge_71 = value;
	}

	inline static int32_t get_offset_of_reliableCommandsRepeated_72() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___reliableCommandsRepeated_72)); }
	inline int32_t get_reliableCommandsRepeated_72() const { return ___reliableCommandsRepeated_72; }
	inline int32_t* get_address_of_reliableCommandsRepeated_72() { return &___reliableCommandsRepeated_72; }
	inline void set_reliableCommandsRepeated_72(int32_t value)
	{
		___reliableCommandsRepeated_72 = value;
	}

	inline static int32_t get_offset_of_reliableCommandsSent_73() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___reliableCommandsSent_73)); }
	inline int32_t get_reliableCommandsSent_73() const { return ___reliableCommandsSent_73; }
	inline int32_t* get_address_of_reliableCommandsSent_73() { return &___reliableCommandsSent_73; }
	inline void set_reliableCommandsSent_73(int32_t value)
	{
		___reliableCommandsSent_73 = value;
	}

	inline static int32_t get_offset_of_serverSentTime_74() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___serverSentTime_74)); }
	inline int32_t get_serverSentTime_74() const { return ___serverSentTime_74; }
	inline int32_t* get_address_of_serverSentTime_74() { return &___serverSentTime_74; }
	inline void set_serverSentTime_74(int32_t value)
	{
		___serverSentTime_74 = value;
	}

	inline static int32_t get_offset_of_initData_77() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___initData_77)); }
	inline ByteU5BU5D_t3397334013* get_initData_77() const { return ___initData_77; }
	inline ByteU5BU5D_t3397334013** get_address_of_initData_77() { return &___initData_77; }
	inline void set_initData_77(ByteU5BU5D_t3397334013* value)
	{
		___initData_77 = value;
		Il2CppCodeGenWriteBarrier(&___initData_77, value);
	}

	inline static int32_t get_offset_of_channelArray_78() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___channelArray_78)); }
	inline EnetChannelU5BU5D_t579585926* get_channelArray_78() const { return ___channelArray_78; }
	inline EnetChannelU5BU5D_t579585926** get_address_of_channelArray_78() { return &___channelArray_78; }
	inline void set_channelArray_78(EnetChannelU5BU5D_t579585926* value)
	{
		___channelArray_78 = value;
		Il2CppCodeGenWriteBarrier(&___channelArray_78, value);
	}

	inline static int32_t get_offset_of_commandsToRemove_79() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856, ___commandsToRemove_79)); }
	inline Queue_1_t1891534283 * get_commandsToRemove_79() const { return ___commandsToRemove_79; }
	inline Queue_1_t1891534283 ** get_address_of_commandsToRemove_79() { return &___commandsToRemove_79; }
	inline void set_commandsToRemove_79(Queue_1_t1891534283 * value)
	{
		___commandsToRemove_79 = value;
		Il2CppCodeGenWriteBarrier(&___commandsToRemove_79, value);
	}
};

struct EnetPeer_t2873400856_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpHeader0xF3
	ByteU5BU5D_t3397334013* ___udpHeader0xF3_75;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::messageHeader
	ByteU5BU5D_t3397334013* ___messageHeader_76;

public:
	inline static int32_t get_offset_of_udpHeader0xF3_75() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856_StaticFields, ___udpHeader0xF3_75)); }
	inline ByteU5BU5D_t3397334013* get_udpHeader0xF3_75() const { return ___udpHeader0xF3_75; }
	inline ByteU5BU5D_t3397334013** get_address_of_udpHeader0xF3_75() { return &___udpHeader0xF3_75; }
	inline void set_udpHeader0xF3_75(ByteU5BU5D_t3397334013* value)
	{
		___udpHeader0xF3_75 = value;
		Il2CppCodeGenWriteBarrier(&___udpHeader0xF3_75, value);
	}

	inline static int32_t get_offset_of_messageHeader_76() { return static_cast<int32_t>(offsetof(EnetPeer_t2873400856_StaticFields, ___messageHeader_76)); }
	inline ByteU5BU5D_t3397334013* get_messageHeader_76() const { return ___messageHeader_76; }
	inline ByteU5BU5D_t3397334013** get_address_of_messageHeader_76() { return &___messageHeader_76; }
	inline void set_messageHeader_76(ByteU5BU5D_t3397334013* value)
	{
		___messageHeader_76 = value;
		Il2CppCodeGenWriteBarrier(&___messageHeader_76, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
