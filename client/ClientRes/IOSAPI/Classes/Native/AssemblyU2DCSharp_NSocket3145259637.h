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
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.Queue`1<NetData>
struct Queue_1_t1454617436;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Threading.Thread
struct Thread_t241561612;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// NSocket
struct NSocket_t3145259637;
// System.Collections.Generic.List`1<NetParam>
struct List_1_t3628879936;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NSocket_EStatus2063541295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSocket
struct  NSocket_t3145259637  : public Il2CppObject
{
public:
	// System.Single NSocket::m_servertime
	float ___m_servertime_2;
	// System.String NSocket::m_auth_id
	String_t* ___m_auth_id_3;
	// System.String NSocket::m_auth_token
	String_t* ___m_auth_token_4;
	// System.Collections.Generic.List`1<System.Int32> NSocket::m_waitmsg
	List_1_t1440998580 * ___m_waitmsg_5;
	// System.Boolean NSocket::_waitflag
	bool ____waitflag_6;
	// NSocket/EStatus NSocket::m_status
	int32_t ___m_status_7;
	// System.String NSocket::m_ip
	String_t* ___m_ip_8;
	// System.Int32 NSocket::m_port
	int32_t ___m_port_9;
	// System.Boolean NSocket::m_binit
	bool ___m_binit_10;
	// System.Boolean NSocket::_isdirty
	bool ____isdirty_11;
	// System.Collections.Generic.Queue`1<NetData> NSocket::m_sendqueue
	Queue_1_t1454617436 * ___m_sendqueue_12;
	// System.Collections.Generic.Queue`1<NetData> NSocket::m_revqueue
	Queue_1_t1454617436 * ___m_revqueue_13;
	// System.Net.Sockets.Socket NSocket::m_socket
	Socket_t3821512045 * ___m_socket_14;
	// System.Threading.Thread NSocket::m_readthread
	Thread_t241561612 * ___m_readthread_15;
	// System.IO.MemoryStream NSocket::m_sendms
	MemoryStream_t743994179 * ___m_sendms_16;
	// System.IO.MemoryStream NSocket::m_memstream
	MemoryStream_t743994179 * ___m_memstream_17;
	// System.IO.BinaryReader NSocket::m_reader
	BinaryReader_t2491843768 * ___m_reader_18;
	// System.IO.MemoryStream NSocket::m_logicms
	MemoryStream_t743994179 * ___m_logicms_19;
	// System.IO.MemoryStream NSocket::m_protoms
	MemoryStream_t743994179 * ___m_protoms_20;
	// System.IO.BinaryWriter NSocket::m_logicwriter
	BinaryWriter_t3179371318 * ___m_logicwriter_21;
	// System.Byte[] NSocket::m_sendbuf
	ByteU5BU5D_t3397334013* ___m_sendbuf_22;
	// System.Byte[] NSocket::m_receivebuf
	ByteU5BU5D_t3397334013* ___m_receivebuf_23;
	// System.Object NSocket::_obj
	Il2CppObject * ____obj_24;
	// System.Collections.Generic.List`1<NetParam> NSocket::msgList
	List_1_t3628879936 * ___msgList_27;

public:
	inline static int32_t get_offset_of_m_servertime_2() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_servertime_2)); }
	inline float get_m_servertime_2() const { return ___m_servertime_2; }
	inline float* get_address_of_m_servertime_2() { return &___m_servertime_2; }
	inline void set_m_servertime_2(float value)
	{
		___m_servertime_2 = value;
	}

	inline static int32_t get_offset_of_m_auth_id_3() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_auth_id_3)); }
	inline String_t* get_m_auth_id_3() const { return ___m_auth_id_3; }
	inline String_t** get_address_of_m_auth_id_3() { return &___m_auth_id_3; }
	inline void set_m_auth_id_3(String_t* value)
	{
		___m_auth_id_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_auth_id_3, value);
	}

	inline static int32_t get_offset_of_m_auth_token_4() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_auth_token_4)); }
	inline String_t* get_m_auth_token_4() const { return ___m_auth_token_4; }
	inline String_t** get_address_of_m_auth_token_4() { return &___m_auth_token_4; }
	inline void set_m_auth_token_4(String_t* value)
	{
		___m_auth_token_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_auth_token_4, value);
	}

	inline static int32_t get_offset_of_m_waitmsg_5() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_waitmsg_5)); }
	inline List_1_t1440998580 * get_m_waitmsg_5() const { return ___m_waitmsg_5; }
	inline List_1_t1440998580 ** get_address_of_m_waitmsg_5() { return &___m_waitmsg_5; }
	inline void set_m_waitmsg_5(List_1_t1440998580 * value)
	{
		___m_waitmsg_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_waitmsg_5, value);
	}

	inline static int32_t get_offset_of__waitflag_6() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ____waitflag_6)); }
	inline bool get__waitflag_6() const { return ____waitflag_6; }
	inline bool* get_address_of__waitflag_6() { return &____waitflag_6; }
	inline void set__waitflag_6(bool value)
	{
		____waitflag_6 = value;
	}

	inline static int32_t get_offset_of_m_status_7() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_status_7)); }
	inline int32_t get_m_status_7() const { return ___m_status_7; }
	inline int32_t* get_address_of_m_status_7() { return &___m_status_7; }
	inline void set_m_status_7(int32_t value)
	{
		___m_status_7 = value;
	}

	inline static int32_t get_offset_of_m_ip_8() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_ip_8)); }
	inline String_t* get_m_ip_8() const { return ___m_ip_8; }
	inline String_t** get_address_of_m_ip_8() { return &___m_ip_8; }
	inline void set_m_ip_8(String_t* value)
	{
		___m_ip_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ip_8, value);
	}

	inline static int32_t get_offset_of_m_port_9() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_port_9)); }
	inline int32_t get_m_port_9() const { return ___m_port_9; }
	inline int32_t* get_address_of_m_port_9() { return &___m_port_9; }
	inline void set_m_port_9(int32_t value)
	{
		___m_port_9 = value;
	}

	inline static int32_t get_offset_of_m_binit_10() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_binit_10)); }
	inline bool get_m_binit_10() const { return ___m_binit_10; }
	inline bool* get_address_of_m_binit_10() { return &___m_binit_10; }
	inline void set_m_binit_10(bool value)
	{
		___m_binit_10 = value;
	}

	inline static int32_t get_offset_of__isdirty_11() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ____isdirty_11)); }
	inline bool get__isdirty_11() const { return ____isdirty_11; }
	inline bool* get_address_of__isdirty_11() { return &____isdirty_11; }
	inline void set__isdirty_11(bool value)
	{
		____isdirty_11 = value;
	}

	inline static int32_t get_offset_of_m_sendqueue_12() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_sendqueue_12)); }
	inline Queue_1_t1454617436 * get_m_sendqueue_12() const { return ___m_sendqueue_12; }
	inline Queue_1_t1454617436 ** get_address_of_m_sendqueue_12() { return &___m_sendqueue_12; }
	inline void set_m_sendqueue_12(Queue_1_t1454617436 * value)
	{
		___m_sendqueue_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_sendqueue_12, value);
	}

	inline static int32_t get_offset_of_m_revqueue_13() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_revqueue_13)); }
	inline Queue_1_t1454617436 * get_m_revqueue_13() const { return ___m_revqueue_13; }
	inline Queue_1_t1454617436 ** get_address_of_m_revqueue_13() { return &___m_revqueue_13; }
	inline void set_m_revqueue_13(Queue_1_t1454617436 * value)
	{
		___m_revqueue_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_revqueue_13, value);
	}

	inline static int32_t get_offset_of_m_socket_14() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_socket_14)); }
	inline Socket_t3821512045 * get_m_socket_14() const { return ___m_socket_14; }
	inline Socket_t3821512045 ** get_address_of_m_socket_14() { return &___m_socket_14; }
	inline void set_m_socket_14(Socket_t3821512045 * value)
	{
		___m_socket_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_socket_14, value);
	}

	inline static int32_t get_offset_of_m_readthread_15() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_readthread_15)); }
	inline Thread_t241561612 * get_m_readthread_15() const { return ___m_readthread_15; }
	inline Thread_t241561612 ** get_address_of_m_readthread_15() { return &___m_readthread_15; }
	inline void set_m_readthread_15(Thread_t241561612 * value)
	{
		___m_readthread_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_readthread_15, value);
	}

	inline static int32_t get_offset_of_m_sendms_16() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_sendms_16)); }
	inline MemoryStream_t743994179 * get_m_sendms_16() const { return ___m_sendms_16; }
	inline MemoryStream_t743994179 ** get_address_of_m_sendms_16() { return &___m_sendms_16; }
	inline void set_m_sendms_16(MemoryStream_t743994179 * value)
	{
		___m_sendms_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_sendms_16, value);
	}

	inline static int32_t get_offset_of_m_memstream_17() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_memstream_17)); }
	inline MemoryStream_t743994179 * get_m_memstream_17() const { return ___m_memstream_17; }
	inline MemoryStream_t743994179 ** get_address_of_m_memstream_17() { return &___m_memstream_17; }
	inline void set_m_memstream_17(MemoryStream_t743994179 * value)
	{
		___m_memstream_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_memstream_17, value);
	}

	inline static int32_t get_offset_of_m_reader_18() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_reader_18)); }
	inline BinaryReader_t2491843768 * get_m_reader_18() const { return ___m_reader_18; }
	inline BinaryReader_t2491843768 ** get_address_of_m_reader_18() { return &___m_reader_18; }
	inline void set_m_reader_18(BinaryReader_t2491843768 * value)
	{
		___m_reader_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_reader_18, value);
	}

	inline static int32_t get_offset_of_m_logicms_19() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_logicms_19)); }
	inline MemoryStream_t743994179 * get_m_logicms_19() const { return ___m_logicms_19; }
	inline MemoryStream_t743994179 ** get_address_of_m_logicms_19() { return &___m_logicms_19; }
	inline void set_m_logicms_19(MemoryStream_t743994179 * value)
	{
		___m_logicms_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_logicms_19, value);
	}

	inline static int32_t get_offset_of_m_protoms_20() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_protoms_20)); }
	inline MemoryStream_t743994179 * get_m_protoms_20() const { return ___m_protoms_20; }
	inline MemoryStream_t743994179 ** get_address_of_m_protoms_20() { return &___m_protoms_20; }
	inline void set_m_protoms_20(MemoryStream_t743994179 * value)
	{
		___m_protoms_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_protoms_20, value);
	}

	inline static int32_t get_offset_of_m_logicwriter_21() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_logicwriter_21)); }
	inline BinaryWriter_t3179371318 * get_m_logicwriter_21() const { return ___m_logicwriter_21; }
	inline BinaryWriter_t3179371318 ** get_address_of_m_logicwriter_21() { return &___m_logicwriter_21; }
	inline void set_m_logicwriter_21(BinaryWriter_t3179371318 * value)
	{
		___m_logicwriter_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_logicwriter_21, value);
	}

	inline static int32_t get_offset_of_m_sendbuf_22() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_sendbuf_22)); }
	inline ByteU5BU5D_t3397334013* get_m_sendbuf_22() const { return ___m_sendbuf_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_sendbuf_22() { return &___m_sendbuf_22; }
	inline void set_m_sendbuf_22(ByteU5BU5D_t3397334013* value)
	{
		___m_sendbuf_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_sendbuf_22, value);
	}

	inline static int32_t get_offset_of_m_receivebuf_23() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___m_receivebuf_23)); }
	inline ByteU5BU5D_t3397334013* get_m_receivebuf_23() const { return ___m_receivebuf_23; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_receivebuf_23() { return &___m_receivebuf_23; }
	inline void set_m_receivebuf_23(ByteU5BU5D_t3397334013* value)
	{
		___m_receivebuf_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_receivebuf_23, value);
	}

	inline static int32_t get_offset_of__obj_24() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ____obj_24)); }
	inline Il2CppObject * get__obj_24() const { return ____obj_24; }
	inline Il2CppObject ** get_address_of__obj_24() { return &____obj_24; }
	inline void set__obj_24(Il2CppObject * value)
	{
		____obj_24 = value;
		Il2CppCodeGenWriteBarrier(&____obj_24, value);
	}

	inline static int32_t get_offset_of_msgList_27() { return static_cast<int32_t>(offsetof(NSocket_t3145259637, ___msgList_27)); }
	inline List_1_t3628879936 * get_msgList_27() const { return ___msgList_27; }
	inline List_1_t3628879936 ** get_address_of_msgList_27() { return &___msgList_27; }
	inline void set_msgList_27(List_1_t3628879936 * value)
	{
		___msgList_27 = value;
		Il2CppCodeGenWriteBarrier(&___msgList_27, value);
	}
};

struct NSocket_t3145259637_StaticFields
{
public:
	// NSocket NSocket::instance
	NSocket_t3145259637 * ___instance_25;
	// System.Int32 NSocket::m_correlationid
	int32_t ___m_correlationid_26;

public:
	inline static int32_t get_offset_of_instance_25() { return static_cast<int32_t>(offsetof(NSocket_t3145259637_StaticFields, ___instance_25)); }
	inline NSocket_t3145259637 * get_instance_25() const { return ___instance_25; }
	inline NSocket_t3145259637 ** get_address_of_instance_25() { return &___instance_25; }
	inline void set_instance_25(NSocket_t3145259637 * value)
	{
		___instance_25 = value;
		Il2CppCodeGenWriteBarrier(&___instance_25, value);
	}

	inline static int32_t get_offset_of_m_correlationid_26() { return static_cast<int32_t>(offsetof(NSocket_t3145259637_StaticFields, ___m_correlationid_26)); }
	inline int32_t get_m_correlationid_26() const { return ___m_correlationid_26; }
	inline int32_t* get_address_of_m_correlationid_26() { return &___m_correlationid_26; }
	inline void set_m_correlationid_26(int32_t value)
	{
		___m_correlationid_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
