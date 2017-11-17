#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<ProxyID,PureMVC.Interfaces.IProxy>
struct IDictionary_2_t3527469260;
// PureMVC.Interfaces.IModel
struct IModel_t3717001454;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Core.Model
struct  Model_t3879015327  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<ProxyID,PureMVC.Interfaces.IProxy> PureMVC.Core.Model::m_proxyMap
	Il2CppObject* ___m_proxyMap_0;
	// System.Object PureMVC.Core.Model::m_syncRoot
	Il2CppObject * ___m_syncRoot_2;

public:
	inline static int32_t get_offset_of_m_proxyMap_0() { return static_cast<int32_t>(offsetof(Model_t3879015327, ___m_proxyMap_0)); }
	inline Il2CppObject* get_m_proxyMap_0() const { return ___m_proxyMap_0; }
	inline Il2CppObject** get_address_of_m_proxyMap_0() { return &___m_proxyMap_0; }
	inline void set_m_proxyMap_0(Il2CppObject* value)
	{
		___m_proxyMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_proxyMap_0, value);
	}

	inline static int32_t get_offset_of_m_syncRoot_2() { return static_cast<int32_t>(offsetof(Model_t3879015327, ___m_syncRoot_2)); }
	inline Il2CppObject * get_m_syncRoot_2() const { return ___m_syncRoot_2; }
	inline Il2CppObject ** get_address_of_m_syncRoot_2() { return &___m_syncRoot_2; }
	inline void set_m_syncRoot_2(Il2CppObject * value)
	{
		___m_syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_syncRoot_2, value);
	}
};

struct Model_t3879015327_StaticFields
{
public:
	// PureMVC.Interfaces.IModel modreq(System.Runtime.CompilerServices.IsVolatile) PureMVC.Core.Model::m_instance
	Il2CppObject * ___m_instance_1;
	// System.Object PureMVC.Core.Model::m_staticSyncRoot
	Il2CppObject * ___m_staticSyncRoot_3;

public:
	inline static int32_t get_offset_of_m_instance_1() { return static_cast<int32_t>(offsetof(Model_t3879015327_StaticFields, ___m_instance_1)); }
	inline Il2CppObject * get_m_instance_1() const { return ___m_instance_1; }
	inline Il2CppObject ** get_address_of_m_instance_1() { return &___m_instance_1; }
	inline void set_m_instance_1(Il2CppObject * value)
	{
		___m_instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_1, value);
	}

	inline static int32_t get_offset_of_m_staticSyncRoot_3() { return static_cast<int32_t>(offsetof(Model_t3879015327_StaticFields, ___m_staticSyncRoot_3)); }
	inline Il2CppObject * get_m_staticSyncRoot_3() const { return ___m_staticSyncRoot_3; }
	inline Il2CppObject ** get_address_of_m_staticSyncRoot_3() { return &___m_staticSyncRoot_3; }
	inline void set_m_staticSyncRoot_3(Il2CppObject * value)
	{
		___m_staticSyncRoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_staticSyncRoot_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
