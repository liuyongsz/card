#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.NCommand
struct  NCommand_t2133614299  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.NCommand::commandFlags
	uint8_t ___commandFlags_0;
	// System.Byte ExitGames.Client.Photon.NCommand::commandType
	uint8_t ___commandType_1;
	// System.Byte ExitGames.Client.Photon.NCommand::commandChannelID
	uint8_t ___commandChannelID_2;
	// System.Int32 ExitGames.Client.Photon.NCommand::reliableSequenceNumber
	int32_t ___reliableSequenceNumber_3;
	// System.Int32 ExitGames.Client.Photon.NCommand::unreliableSequenceNumber
	int32_t ___unreliableSequenceNumber_4;
	// System.Byte ExitGames.Client.Photon.NCommand::reservedByte
	uint8_t ___reservedByte_5;
	// System.Int32 ExitGames.Client.Photon.NCommand::startSequenceNumber
	int32_t ___startSequenceNumber_6;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentCount
	int32_t ___fragmentCount_7;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentNumber
	int32_t ___fragmentNumber_8;
	// System.Int32 ExitGames.Client.Photon.NCommand::totalLength
	int32_t ___totalLength_9;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentOffset
	int32_t ___fragmentOffset_10;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentsRemaining
	int32_t ___fragmentsRemaining_11;
	// System.Byte[] ExitGames.Client.Photon.NCommand::Payload
	ByteU5BU5D_t3397334013* ___Payload_12;
	// System.Int32 ExitGames.Client.Photon.NCommand::commandSentTime
	int32_t ___commandSentTime_13;
	// System.Byte ExitGames.Client.Photon.NCommand::commandSentCount
	uint8_t ___commandSentCount_14;
	// System.Int32 ExitGames.Client.Photon.NCommand::roundTripTimeout
	int32_t ___roundTripTimeout_15;
	// System.Int32 ExitGames.Client.Photon.NCommand::timeoutTime
	int32_t ___timeoutTime_16;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedReliableSequenceNumber
	int32_t ___ackReceivedReliableSequenceNumber_17;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedSentTime
	int32_t ___ackReceivedSentTime_18;
	// System.Byte[] ExitGames.Client.Photon.NCommand::completeCommand
	ByteU5BU5D_t3397334013* ___completeCommand_19;
	// System.Int32 ExitGames.Client.Photon.NCommand::Size
	int32_t ___Size_20;

public:
	inline static int32_t get_offset_of_commandFlags_0() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___commandFlags_0)); }
	inline uint8_t get_commandFlags_0() const { return ___commandFlags_0; }
	inline uint8_t* get_address_of_commandFlags_0() { return &___commandFlags_0; }
	inline void set_commandFlags_0(uint8_t value)
	{
		___commandFlags_0 = value;
	}

	inline static int32_t get_offset_of_commandType_1() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___commandType_1)); }
	inline uint8_t get_commandType_1() const { return ___commandType_1; }
	inline uint8_t* get_address_of_commandType_1() { return &___commandType_1; }
	inline void set_commandType_1(uint8_t value)
	{
		___commandType_1 = value;
	}

	inline static int32_t get_offset_of_commandChannelID_2() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___commandChannelID_2)); }
	inline uint8_t get_commandChannelID_2() const { return ___commandChannelID_2; }
	inline uint8_t* get_address_of_commandChannelID_2() { return &___commandChannelID_2; }
	inline void set_commandChannelID_2(uint8_t value)
	{
		___commandChannelID_2 = value;
	}

	inline static int32_t get_offset_of_reliableSequenceNumber_3() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___reliableSequenceNumber_3)); }
	inline int32_t get_reliableSequenceNumber_3() const { return ___reliableSequenceNumber_3; }
	inline int32_t* get_address_of_reliableSequenceNumber_3() { return &___reliableSequenceNumber_3; }
	inline void set_reliableSequenceNumber_3(int32_t value)
	{
		___reliableSequenceNumber_3 = value;
	}

	inline static int32_t get_offset_of_unreliableSequenceNumber_4() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___unreliableSequenceNumber_4)); }
	inline int32_t get_unreliableSequenceNumber_4() const { return ___unreliableSequenceNumber_4; }
	inline int32_t* get_address_of_unreliableSequenceNumber_4() { return &___unreliableSequenceNumber_4; }
	inline void set_unreliableSequenceNumber_4(int32_t value)
	{
		___unreliableSequenceNumber_4 = value;
	}

	inline static int32_t get_offset_of_reservedByte_5() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___reservedByte_5)); }
	inline uint8_t get_reservedByte_5() const { return ___reservedByte_5; }
	inline uint8_t* get_address_of_reservedByte_5() { return &___reservedByte_5; }
	inline void set_reservedByte_5(uint8_t value)
	{
		___reservedByte_5 = value;
	}

	inline static int32_t get_offset_of_startSequenceNumber_6() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___startSequenceNumber_6)); }
	inline int32_t get_startSequenceNumber_6() const { return ___startSequenceNumber_6; }
	inline int32_t* get_address_of_startSequenceNumber_6() { return &___startSequenceNumber_6; }
	inline void set_startSequenceNumber_6(int32_t value)
	{
		___startSequenceNumber_6 = value;
	}

	inline static int32_t get_offset_of_fragmentCount_7() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___fragmentCount_7)); }
	inline int32_t get_fragmentCount_7() const { return ___fragmentCount_7; }
	inline int32_t* get_address_of_fragmentCount_7() { return &___fragmentCount_7; }
	inline void set_fragmentCount_7(int32_t value)
	{
		___fragmentCount_7 = value;
	}

	inline static int32_t get_offset_of_fragmentNumber_8() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___fragmentNumber_8)); }
	inline int32_t get_fragmentNumber_8() const { return ___fragmentNumber_8; }
	inline int32_t* get_address_of_fragmentNumber_8() { return &___fragmentNumber_8; }
	inline void set_fragmentNumber_8(int32_t value)
	{
		___fragmentNumber_8 = value;
	}

	inline static int32_t get_offset_of_totalLength_9() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___totalLength_9)); }
	inline int32_t get_totalLength_9() const { return ___totalLength_9; }
	inline int32_t* get_address_of_totalLength_9() { return &___totalLength_9; }
	inline void set_totalLength_9(int32_t value)
	{
		___totalLength_9 = value;
	}

	inline static int32_t get_offset_of_fragmentOffset_10() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___fragmentOffset_10)); }
	inline int32_t get_fragmentOffset_10() const { return ___fragmentOffset_10; }
	inline int32_t* get_address_of_fragmentOffset_10() { return &___fragmentOffset_10; }
	inline void set_fragmentOffset_10(int32_t value)
	{
		___fragmentOffset_10 = value;
	}

	inline static int32_t get_offset_of_fragmentsRemaining_11() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___fragmentsRemaining_11)); }
	inline int32_t get_fragmentsRemaining_11() const { return ___fragmentsRemaining_11; }
	inline int32_t* get_address_of_fragmentsRemaining_11() { return &___fragmentsRemaining_11; }
	inline void set_fragmentsRemaining_11(int32_t value)
	{
		___fragmentsRemaining_11 = value;
	}

	inline static int32_t get_offset_of_Payload_12() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___Payload_12)); }
	inline ByteU5BU5D_t3397334013* get_Payload_12() const { return ___Payload_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_Payload_12() { return &___Payload_12; }
	inline void set_Payload_12(ByteU5BU5D_t3397334013* value)
	{
		___Payload_12 = value;
		Il2CppCodeGenWriteBarrier(&___Payload_12, value);
	}

	inline static int32_t get_offset_of_commandSentTime_13() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___commandSentTime_13)); }
	inline int32_t get_commandSentTime_13() const { return ___commandSentTime_13; }
	inline int32_t* get_address_of_commandSentTime_13() { return &___commandSentTime_13; }
	inline void set_commandSentTime_13(int32_t value)
	{
		___commandSentTime_13 = value;
	}

	inline static int32_t get_offset_of_commandSentCount_14() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___commandSentCount_14)); }
	inline uint8_t get_commandSentCount_14() const { return ___commandSentCount_14; }
	inline uint8_t* get_address_of_commandSentCount_14() { return &___commandSentCount_14; }
	inline void set_commandSentCount_14(uint8_t value)
	{
		___commandSentCount_14 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeout_15() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___roundTripTimeout_15)); }
	inline int32_t get_roundTripTimeout_15() const { return ___roundTripTimeout_15; }
	inline int32_t* get_address_of_roundTripTimeout_15() { return &___roundTripTimeout_15; }
	inline void set_roundTripTimeout_15(int32_t value)
	{
		___roundTripTimeout_15 = value;
	}

	inline static int32_t get_offset_of_timeoutTime_16() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___timeoutTime_16)); }
	inline int32_t get_timeoutTime_16() const { return ___timeoutTime_16; }
	inline int32_t* get_address_of_timeoutTime_16() { return &___timeoutTime_16; }
	inline void set_timeoutTime_16(int32_t value)
	{
		___timeoutTime_16 = value;
	}

	inline static int32_t get_offset_of_ackReceivedReliableSequenceNumber_17() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___ackReceivedReliableSequenceNumber_17)); }
	inline int32_t get_ackReceivedReliableSequenceNumber_17() const { return ___ackReceivedReliableSequenceNumber_17; }
	inline int32_t* get_address_of_ackReceivedReliableSequenceNumber_17() { return &___ackReceivedReliableSequenceNumber_17; }
	inline void set_ackReceivedReliableSequenceNumber_17(int32_t value)
	{
		___ackReceivedReliableSequenceNumber_17 = value;
	}

	inline static int32_t get_offset_of_ackReceivedSentTime_18() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___ackReceivedSentTime_18)); }
	inline int32_t get_ackReceivedSentTime_18() const { return ___ackReceivedSentTime_18; }
	inline int32_t* get_address_of_ackReceivedSentTime_18() { return &___ackReceivedSentTime_18; }
	inline void set_ackReceivedSentTime_18(int32_t value)
	{
		___ackReceivedSentTime_18 = value;
	}

	inline static int32_t get_offset_of_completeCommand_19() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___completeCommand_19)); }
	inline ByteU5BU5D_t3397334013* get_completeCommand_19() const { return ___completeCommand_19; }
	inline ByteU5BU5D_t3397334013** get_address_of_completeCommand_19() { return &___completeCommand_19; }
	inline void set_completeCommand_19(ByteU5BU5D_t3397334013* value)
	{
		___completeCommand_19 = value;
		Il2CppCodeGenWriteBarrier(&___completeCommand_19, value);
	}

	inline static int32_t get_offset_of_Size_20() { return static_cast<int32_t>(offsetof(NCommand_t2133614299, ___Size_20)); }
	inline int32_t get_Size_20() const { return ___Size_20; }
	inline int32_t* get_address_of_Size_20() { return &___Size_20; }
	inline void set_Size_20(int32_t value)
	{
		___Size_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
