#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PureMVC.Interfaces.IView
struct IView_t1431556072;
// System.Collections.Generic.IDictionary`2<NotificationID,System.Type>
struct IDictionary_2_t498374528;
// PureMVC.Interfaces.IController
struct IController_t1783054623;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Core.Controller
struct  Controller_t3661849354  : public Il2CppObject
{
public:
	// PureMVC.Interfaces.IView PureMVC.Core.Controller::m_view
	Il2CppObject * ___m_view_0;
	// System.Collections.Generic.IDictionary`2<NotificationID,System.Type> PureMVC.Core.Controller::m_commandMap
	Il2CppObject* ___m_commandMap_1;
	// System.Object PureMVC.Core.Controller::m_syncRoot
	Il2CppObject * ___m_syncRoot_3;

public:
	inline static int32_t get_offset_of_m_view_0() { return static_cast<int32_t>(offsetof(Controller_t3661849354, ___m_view_0)); }
	inline Il2CppObject * get_m_view_0() const { return ___m_view_0; }
	inline Il2CppObject ** get_address_of_m_view_0() { return &___m_view_0; }
	inline void set_m_view_0(Il2CppObject * value)
	{
		___m_view_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_view_0, value);
	}

	inline static int32_t get_offset_of_m_commandMap_1() { return static_cast<int32_t>(offsetof(Controller_t3661849354, ___m_commandMap_1)); }
	inline Il2CppObject* get_m_commandMap_1() const { return ___m_commandMap_1; }
	inline Il2CppObject** get_address_of_m_commandMap_1() { return &___m_commandMap_1; }
	inline void set_m_commandMap_1(Il2CppObject* value)
	{
		___m_commandMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_commandMap_1, value);
	}

	inline static int32_t get_offset_of_m_syncRoot_3() { return static_cast<int32_t>(offsetof(Controller_t3661849354, ___m_syncRoot_3)); }
	inline Il2CppObject * get_m_syncRoot_3() const { return ___m_syncRoot_3; }
	inline Il2CppObject ** get_address_of_m_syncRoot_3() { return &___m_syncRoot_3; }
	inline void set_m_syncRoot_3(Il2CppObject * value)
	{
		___m_syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_syncRoot_3, value);
	}
};

struct Controller_t3661849354_StaticFields
{
public:
	// PureMVC.Interfaces.IController modreq(System.Runtime.CompilerServices.IsVolatile) PureMVC.Core.Controller::m_instance
	Il2CppObject * ___m_instance_2;
	// System.Object PureMVC.Core.Controller::m_staticSyncRoot
	Il2CppObject * ___m_staticSyncRoot_4;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(Controller_t3661849354_StaticFields, ___m_instance_2)); }
	inline Il2CppObject * get_m_instance_2() const { return ___m_instance_2; }
	inline Il2CppObject ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(Il2CppObject * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_2, value);
	}

	inline static int32_t get_offset_of_m_staticSyncRoot_4() { return static_cast<int32_t>(offsetof(Controller_t3661849354_StaticFields, ___m_staticSyncRoot_4)); }
	inline Il2CppObject * get_m_staticSyncRoot_4() const { return ___m_staticSyncRoot_4; }
	inline Il2CppObject ** get_address_of_m_staticSyncRoot_4() { return &___m_staticSyncRoot_4; }
	inline void set_m_staticSyncRoot_4(Il2CppObject * value)
	{
		___m_staticSyncRoot_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_staticSyncRoot_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
