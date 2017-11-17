#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,PureMVC.Interfaces.IMediator>
struct IDictionary_2_t2740543723;
// System.Collections.Generic.IDictionary`2<NotificationID,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>
struct IDictionary_2_t3737917230;
// PureMVC.Interfaces.IView
struct IView_t1431556072;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Core.View
struct  View_t3978655013  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,PureMVC.Interfaces.IMediator> PureMVC.Core.View::m_mediatorMap
	Il2CppObject* ___m_mediatorMap_0;
	// System.Collections.Generic.IDictionary`2<NotificationID,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>> PureMVC.Core.View::m_observerMap
	Il2CppObject* ___m_observerMap_1;
	// System.Object PureMVC.Core.View::m_syncRoot
	Il2CppObject * ___m_syncRoot_3;

public:
	inline static int32_t get_offset_of_m_mediatorMap_0() { return static_cast<int32_t>(offsetof(View_t3978655013, ___m_mediatorMap_0)); }
	inline Il2CppObject* get_m_mediatorMap_0() const { return ___m_mediatorMap_0; }
	inline Il2CppObject** get_address_of_m_mediatorMap_0() { return &___m_mediatorMap_0; }
	inline void set_m_mediatorMap_0(Il2CppObject* value)
	{
		___m_mediatorMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_mediatorMap_0, value);
	}

	inline static int32_t get_offset_of_m_observerMap_1() { return static_cast<int32_t>(offsetof(View_t3978655013, ___m_observerMap_1)); }
	inline Il2CppObject* get_m_observerMap_1() const { return ___m_observerMap_1; }
	inline Il2CppObject** get_address_of_m_observerMap_1() { return &___m_observerMap_1; }
	inline void set_m_observerMap_1(Il2CppObject* value)
	{
		___m_observerMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_observerMap_1, value);
	}

	inline static int32_t get_offset_of_m_syncRoot_3() { return static_cast<int32_t>(offsetof(View_t3978655013, ___m_syncRoot_3)); }
	inline Il2CppObject * get_m_syncRoot_3() const { return ___m_syncRoot_3; }
	inline Il2CppObject ** get_address_of_m_syncRoot_3() { return &___m_syncRoot_3; }
	inline void set_m_syncRoot_3(Il2CppObject * value)
	{
		___m_syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_syncRoot_3, value);
	}
};

struct View_t3978655013_StaticFields
{
public:
	// PureMVC.Interfaces.IView modreq(System.Runtime.CompilerServices.IsVolatile) PureMVC.Core.View::m_instance
	Il2CppObject * ___m_instance_2;
	// System.Object PureMVC.Core.View::m_staticSyncRoot
	Il2CppObject * ___m_staticSyncRoot_4;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(View_t3978655013_StaticFields, ___m_instance_2)); }
	inline Il2CppObject * get_m_instance_2() const { return ___m_instance_2; }
	inline Il2CppObject ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(Il2CppObject * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_2, value);
	}

	inline static int32_t get_offset_of_m_staticSyncRoot_4() { return static_cast<int32_t>(offsetof(View_t3978655013_StaticFields, ___m_staticSyncRoot_4)); }
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
