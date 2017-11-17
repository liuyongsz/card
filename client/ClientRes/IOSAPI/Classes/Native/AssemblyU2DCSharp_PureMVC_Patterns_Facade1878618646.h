#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PureMVC.Interfaces.IController
struct IController_t1783054623;
// PureMVC.Interfaces.IModel
struct IModel_t3717001454;
// PureMVC.Interfaces.IView
struct IView_t1431556072;
// PureMVC.Interfaces.IFacade
struct IFacade_t2963254751;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Facade
struct  Facade_t1878618646  : public Il2CppObject
{
public:
	// PureMVC.Interfaces.IController PureMVC.Patterns.Facade::m_controller
	Il2CppObject * ___m_controller_0;
	// PureMVC.Interfaces.IModel PureMVC.Patterns.Facade::m_model
	Il2CppObject * ___m_model_1;
	// PureMVC.Interfaces.IView PureMVC.Patterns.Facade::m_view
	Il2CppObject * ___m_view_2;

public:
	inline static int32_t get_offset_of_m_controller_0() { return static_cast<int32_t>(offsetof(Facade_t1878618646, ___m_controller_0)); }
	inline Il2CppObject * get_m_controller_0() const { return ___m_controller_0; }
	inline Il2CppObject ** get_address_of_m_controller_0() { return &___m_controller_0; }
	inline void set_m_controller_0(Il2CppObject * value)
	{
		___m_controller_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_controller_0, value);
	}

	inline static int32_t get_offset_of_m_model_1() { return static_cast<int32_t>(offsetof(Facade_t1878618646, ___m_model_1)); }
	inline Il2CppObject * get_m_model_1() const { return ___m_model_1; }
	inline Il2CppObject ** get_address_of_m_model_1() { return &___m_model_1; }
	inline void set_m_model_1(Il2CppObject * value)
	{
		___m_model_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_model_1, value);
	}

	inline static int32_t get_offset_of_m_view_2() { return static_cast<int32_t>(offsetof(Facade_t1878618646, ___m_view_2)); }
	inline Il2CppObject * get_m_view_2() const { return ___m_view_2; }
	inline Il2CppObject ** get_address_of_m_view_2() { return &___m_view_2; }
	inline void set_m_view_2(Il2CppObject * value)
	{
		___m_view_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_view_2, value);
	}
};

struct Facade_t1878618646_StaticFields
{
public:
	// PureMVC.Interfaces.IFacade modreq(System.Runtime.CompilerServices.IsVolatile) PureMVC.Patterns.Facade::m_instance
	Il2CppObject * ___m_instance_3;
	// System.Object PureMVC.Patterns.Facade::m_staticSyncRoot
	Il2CppObject * ___m_staticSyncRoot_4;

public:
	inline static int32_t get_offset_of_m_instance_3() { return static_cast<int32_t>(offsetof(Facade_t1878618646_StaticFields, ___m_instance_3)); }
	inline Il2CppObject * get_m_instance_3() const { return ___m_instance_3; }
	inline Il2CppObject ** get_address_of_m_instance_3() { return &___m_instance_3; }
	inline void set_m_instance_3(Il2CppObject * value)
	{
		___m_instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_3, value);
	}

	inline static int32_t get_offset_of_m_staticSyncRoot_4() { return static_cast<int32_t>(offsetof(Facade_t1878618646_StaticFields, ___m_staticSyncRoot_4)); }
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
