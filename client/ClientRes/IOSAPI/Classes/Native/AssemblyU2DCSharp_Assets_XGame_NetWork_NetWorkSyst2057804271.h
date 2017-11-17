#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Assets.XGame.NetWork.NetWorkSystem
struct NetWorkSystem_t2057804271;
// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// Lidgren.Network.NetClient
struct NetClient_t1212131464;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// System.Threading.Thread
struct Thread_t241561612;
// System.String
struct String_t;
// System.Collections.Generic.Queue`1<System.Collections.Generic.KeyValuePair`2<Lidgren.Network.NetConnection,System.Object>>
struct Queue_1_t4002591122;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.XGame.NetWork.NetWorkSystem
struct  NetWorkSystem_t2057804271  : public Il2CppObject
{
public:
	// System.Int64 Assets.XGame.NetWork.NetWorkSystem::m_PingPongNumber
	int64_t ___m_PingPongNumber_1;
	// System.Int32 Assets.XGame.NetWork.NetWorkSystem::m_PingInterval
	int32_t ___m_PingInterval_2;
	// Lidgren.Network.NetPeerConfiguration Assets.XGame.NetWork.NetWorkSystem::m_Config
	NetPeerConfiguration_t136603591 * ___m_Config_3;
	// Lidgren.Network.NetClient Assets.XGame.NetWork.NetWorkSystem::m_NetClient
	NetClient_t1212131464 * ___m_NetClient_4;
	// Lidgren.Network.NetConnection Assets.XGame.NetWork.NetWorkSystem::m_Connection
	NetConnection_t3331492029 * ___m_Connection_5;
	// System.Threading.Thread Assets.XGame.NetWork.NetWorkSystem::m_NetThread
	Thread_t241561612 * ___m_NetThread_6;
	// System.Boolean Assets.XGame.NetWork.NetWorkSystem::m_NetClientStarted
	bool ___m_NetClientStarted_7;
	// System.String Assets.XGame.NetWork.NetWorkSystem::m_Ip
	String_t* ___m_Ip_8;
	// System.Int32 Assets.XGame.NetWork.NetWorkSystem::m_Port
	int32_t ___m_Port_9;
	// System.Boolean Assets.XGame.NetWork.NetWorkSystem::m_IsConnected
	bool ___m_IsConnected_10;
	// System.Boolean Assets.XGame.NetWork.NetWorkSystem::m_IsWaitStart
	bool ___m_IsWaitStart_11;
	// System.Boolean Assets.XGame.NetWork.NetWorkSystem::m_IsQuited
	bool ___m_IsQuited_12;
	// System.Boolean Assets.XGame.NetWork.NetWorkSystem::m_CanSendMessage
	bool ___m_CanSendMessage_13;
	// System.Collections.Generic.Queue`1<System.Collections.Generic.KeyValuePair`2<Lidgren.Network.NetConnection,System.Object>> Assets.XGame.NetWork.NetWorkSystem::m_QueuePair
	Queue_1_t4002591122 * ___m_QueuePair_14;
	// System.Object Assets.XGame.NetWork.NetWorkSystem::m_Lock
	Il2CppObject * ___m_Lock_15;
	// System.UInt32 Assets.XGame.NetWork.NetWorkSystem::m_Key
	uint32_t ___m_Key_16;
	// System.Single Assets.XGame.NetWork.NetWorkSystem::m_LastFaceDir
	float ___m_LastFaceDir_17;
	// System.Int32 Assets.XGame.NetWork.NetWorkSystem::m_HeroId
	int32_t ___m_HeroId_18;
	// System.Int32 Assets.XGame.NetWork.NetWorkSystem::m_CampId
	int32_t ___m_CampId_19;
	// System.Int32 Assets.XGame.NetWork.NetWorkSystem::m_SceneId
	int32_t ___m_SceneId_20;

public:
	inline static int32_t get_offset_of_m_PingPongNumber_1() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_PingPongNumber_1)); }
	inline int64_t get_m_PingPongNumber_1() const { return ___m_PingPongNumber_1; }
	inline int64_t* get_address_of_m_PingPongNumber_1() { return &___m_PingPongNumber_1; }
	inline void set_m_PingPongNumber_1(int64_t value)
	{
		___m_PingPongNumber_1 = value;
	}

	inline static int32_t get_offset_of_m_PingInterval_2() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_PingInterval_2)); }
	inline int32_t get_m_PingInterval_2() const { return ___m_PingInterval_2; }
	inline int32_t* get_address_of_m_PingInterval_2() { return &___m_PingInterval_2; }
	inline void set_m_PingInterval_2(int32_t value)
	{
		___m_PingInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_Config_3() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_Config_3)); }
	inline NetPeerConfiguration_t136603591 * get_m_Config_3() const { return ___m_Config_3; }
	inline NetPeerConfiguration_t136603591 ** get_address_of_m_Config_3() { return &___m_Config_3; }
	inline void set_m_Config_3(NetPeerConfiguration_t136603591 * value)
	{
		___m_Config_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Config_3, value);
	}

	inline static int32_t get_offset_of_m_NetClient_4() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_NetClient_4)); }
	inline NetClient_t1212131464 * get_m_NetClient_4() const { return ___m_NetClient_4; }
	inline NetClient_t1212131464 ** get_address_of_m_NetClient_4() { return &___m_NetClient_4; }
	inline void set_m_NetClient_4(NetClient_t1212131464 * value)
	{
		___m_NetClient_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetClient_4, value);
	}

	inline static int32_t get_offset_of_m_Connection_5() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_Connection_5)); }
	inline NetConnection_t3331492029 * get_m_Connection_5() const { return ___m_Connection_5; }
	inline NetConnection_t3331492029 ** get_address_of_m_Connection_5() { return &___m_Connection_5; }
	inline void set_m_Connection_5(NetConnection_t3331492029 * value)
	{
		___m_Connection_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Connection_5, value);
	}

	inline static int32_t get_offset_of_m_NetThread_6() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_NetThread_6)); }
	inline Thread_t241561612 * get_m_NetThread_6() const { return ___m_NetThread_6; }
	inline Thread_t241561612 ** get_address_of_m_NetThread_6() { return &___m_NetThread_6; }
	inline void set_m_NetThread_6(Thread_t241561612 * value)
	{
		___m_NetThread_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetThread_6, value);
	}

	inline static int32_t get_offset_of_m_NetClientStarted_7() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_NetClientStarted_7)); }
	inline bool get_m_NetClientStarted_7() const { return ___m_NetClientStarted_7; }
	inline bool* get_address_of_m_NetClientStarted_7() { return &___m_NetClientStarted_7; }
	inline void set_m_NetClientStarted_7(bool value)
	{
		___m_NetClientStarted_7 = value;
	}

	inline static int32_t get_offset_of_m_Ip_8() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_Ip_8)); }
	inline String_t* get_m_Ip_8() const { return ___m_Ip_8; }
	inline String_t** get_address_of_m_Ip_8() { return &___m_Ip_8; }
	inline void set_m_Ip_8(String_t* value)
	{
		___m_Ip_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Ip_8, value);
	}

	inline static int32_t get_offset_of_m_Port_9() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_Port_9)); }
	inline int32_t get_m_Port_9() const { return ___m_Port_9; }
	inline int32_t* get_address_of_m_Port_9() { return &___m_Port_9; }
	inline void set_m_Port_9(int32_t value)
	{
		___m_Port_9 = value;
	}

	inline static int32_t get_offset_of_m_IsConnected_10() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_IsConnected_10)); }
	inline bool get_m_IsConnected_10() const { return ___m_IsConnected_10; }
	inline bool* get_address_of_m_IsConnected_10() { return &___m_IsConnected_10; }
	inline void set_m_IsConnected_10(bool value)
	{
		___m_IsConnected_10 = value;
	}

	inline static int32_t get_offset_of_m_IsWaitStart_11() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_IsWaitStart_11)); }
	inline bool get_m_IsWaitStart_11() const { return ___m_IsWaitStart_11; }
	inline bool* get_address_of_m_IsWaitStart_11() { return &___m_IsWaitStart_11; }
	inline void set_m_IsWaitStart_11(bool value)
	{
		___m_IsWaitStart_11 = value;
	}

	inline static int32_t get_offset_of_m_IsQuited_12() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_IsQuited_12)); }
	inline bool get_m_IsQuited_12() const { return ___m_IsQuited_12; }
	inline bool* get_address_of_m_IsQuited_12() { return &___m_IsQuited_12; }
	inline void set_m_IsQuited_12(bool value)
	{
		___m_IsQuited_12 = value;
	}

	inline static int32_t get_offset_of_m_CanSendMessage_13() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_CanSendMessage_13)); }
	inline bool get_m_CanSendMessage_13() const { return ___m_CanSendMessage_13; }
	inline bool* get_address_of_m_CanSendMessage_13() { return &___m_CanSendMessage_13; }
	inline void set_m_CanSendMessage_13(bool value)
	{
		___m_CanSendMessage_13 = value;
	}

	inline static int32_t get_offset_of_m_QueuePair_14() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_QueuePair_14)); }
	inline Queue_1_t4002591122 * get_m_QueuePair_14() const { return ___m_QueuePair_14; }
	inline Queue_1_t4002591122 ** get_address_of_m_QueuePair_14() { return &___m_QueuePair_14; }
	inline void set_m_QueuePair_14(Queue_1_t4002591122 * value)
	{
		___m_QueuePair_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_QueuePair_14, value);
	}

	inline static int32_t get_offset_of_m_Lock_15() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_Lock_15)); }
	inline Il2CppObject * get_m_Lock_15() const { return ___m_Lock_15; }
	inline Il2CppObject ** get_address_of_m_Lock_15() { return &___m_Lock_15; }
	inline void set_m_Lock_15(Il2CppObject * value)
	{
		___m_Lock_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_Lock_15, value);
	}

	inline static int32_t get_offset_of_m_Key_16() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_Key_16)); }
	inline uint32_t get_m_Key_16() const { return ___m_Key_16; }
	inline uint32_t* get_address_of_m_Key_16() { return &___m_Key_16; }
	inline void set_m_Key_16(uint32_t value)
	{
		___m_Key_16 = value;
	}

	inline static int32_t get_offset_of_m_LastFaceDir_17() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_LastFaceDir_17)); }
	inline float get_m_LastFaceDir_17() const { return ___m_LastFaceDir_17; }
	inline float* get_address_of_m_LastFaceDir_17() { return &___m_LastFaceDir_17; }
	inline void set_m_LastFaceDir_17(float value)
	{
		___m_LastFaceDir_17 = value;
	}

	inline static int32_t get_offset_of_m_HeroId_18() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_HeroId_18)); }
	inline int32_t get_m_HeroId_18() const { return ___m_HeroId_18; }
	inline int32_t* get_address_of_m_HeroId_18() { return &___m_HeroId_18; }
	inline void set_m_HeroId_18(int32_t value)
	{
		___m_HeroId_18 = value;
	}

	inline static int32_t get_offset_of_m_CampId_19() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_CampId_19)); }
	inline int32_t get_m_CampId_19() const { return ___m_CampId_19; }
	inline int32_t* get_address_of_m_CampId_19() { return &___m_CampId_19; }
	inline void set_m_CampId_19(int32_t value)
	{
		___m_CampId_19 = value;
	}

	inline static int32_t get_offset_of_m_SceneId_20() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271, ___m_SceneId_20)); }
	inline int32_t get_m_SceneId_20() const { return ___m_SceneId_20; }
	inline int32_t* get_address_of_m_SceneId_20() { return &___m_SceneId_20; }
	inline void set_m_SceneId_20(int32_t value)
	{
		___m_SceneId_20 = value;
	}
};

struct NetWorkSystem_t2057804271_StaticFields
{
public:
	// Assets.XGame.NetWork.NetWorkSystem Assets.XGame.NetWork.NetWorkSystem::s_Instance
	NetWorkSystem_t2057804271 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(NetWorkSystem_t2057804271_StaticFields, ___s_Instance_0)); }
	inline NetWorkSystem_t2057804271 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline NetWorkSystem_t2057804271 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(NetWorkSystem_t2057804271 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
