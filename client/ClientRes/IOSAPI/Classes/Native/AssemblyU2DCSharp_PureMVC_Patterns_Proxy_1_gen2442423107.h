#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoginProxy
struct LoginProxy_t1514699309;
// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Notifier1290595654.h"
#include "AssemblyU2DCSharp_ProxyID3273241327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Proxy`1<LoginProxy>
struct  Proxy_1_t2442423107  : public Notifier_t1290595654
{
public:
	// ProxyID PureMVC.Patterns.Proxy`1::m_proxyName
	int32_t ___m_proxyName_2;
	// System.Object PureMVC.Patterns.Proxy`1::m_data
	Il2CppObject * ___m_data_3;

public:
	inline static int32_t get_offset_of_m_proxyName_2() { return static_cast<int32_t>(offsetof(Proxy_1_t2442423107, ___m_proxyName_2)); }
	inline int32_t get_m_proxyName_2() const { return ___m_proxyName_2; }
	inline int32_t* get_address_of_m_proxyName_2() { return &___m_proxyName_2; }
	inline void set_m_proxyName_2(int32_t value)
	{
		___m_proxyName_2 = value;
	}

	inline static int32_t get_offset_of_m_data_3() { return static_cast<int32_t>(offsetof(Proxy_1_t2442423107, ___m_data_3)); }
	inline Il2CppObject * get_m_data_3() const { return ___m_data_3; }
	inline Il2CppObject ** get_address_of_m_data_3() { return &___m_data_3; }
	inline void set_m_data_3(Il2CppObject * value)
	{
		___m_data_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_3, value);
	}
};

struct Proxy_1_t2442423107_StaticFields
{
public:
	// T PureMVC.Patterns.Proxy`1::m_instance
	LoginProxy_t1514699309 * ___m_instance_1;

public:
	inline static int32_t get_offset_of_m_instance_1() { return static_cast<int32_t>(offsetof(Proxy_1_t2442423107_StaticFields, ___m_instance_1)); }
	inline LoginProxy_t1514699309 * get_m_instance_1() const { return ___m_instance_1; }
	inline LoginProxy_t1514699309 ** get_address_of_m_instance_1() { return &___m_instance_1; }
	inline void set_m_instance_1(LoginProxy_t1514699309 * value)
	{
		___m_instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
