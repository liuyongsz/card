#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<NotificationID,System.Action`1<PureMVC.Interfaces.INotification>>
struct Dictionary_2_t1614178173;
// System.Collections.Generic.List`1<NotificationID>
struct List_1_t3912833414;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Mediator229886313.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseMediator
struct  BaseMediator_t1205744884  : public Mediator_t229886313
{
public:
	// System.Collections.Generic.Dictionary`2<NotificationID,System.Action`1<PureMVC.Interfaces.INotification>> BaseMediator::handleTable
	Dictionary_2_t1614178173 * ___handleTable_4;
	// System.Collections.Generic.List`1<NotificationID> BaseMediator::interests
	List_1_t3912833414 * ___interests_5;

public:
	inline static int32_t get_offset_of_handleTable_4() { return static_cast<int32_t>(offsetof(BaseMediator_t1205744884, ___handleTable_4)); }
	inline Dictionary_2_t1614178173 * get_handleTable_4() const { return ___handleTable_4; }
	inline Dictionary_2_t1614178173 ** get_address_of_handleTable_4() { return &___handleTable_4; }
	inline void set_handleTable_4(Dictionary_2_t1614178173 * value)
	{
		___handleTable_4 = value;
		Il2CppCodeGenWriteBarrier(&___handleTable_4, value);
	}

	inline static int32_t get_offset_of_interests_5() { return static_cast<int32_t>(offsetof(BaseMediator_t1205744884, ___interests_5)); }
	inline List_1_t3912833414 * get_interests_5() const { return ___interests_5; }
	inline List_1_t3912833414 ** get_address_of_interests_5() { return &___interests_5; }
	inline void set_interests_5(List_1_t3912833414 * value)
	{
		___interests_5 = value;
		Il2CppCodeGenWriteBarrier(&___interests_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
