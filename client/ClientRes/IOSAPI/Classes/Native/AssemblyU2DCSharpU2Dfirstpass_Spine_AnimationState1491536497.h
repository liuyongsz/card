#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Animation
struct Animation_t4237671184;
// Spine.AnimationStateData
struct AnimationStateData_t3672895841;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t428500383;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3162965251;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;
// Spine.EventQueue
struct EventQueue_t3612440949;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.AnimationState
struct  AnimationState_t1491536497  : public Il2CppObject
{
public:
	// Spine.AnimationStateData Spine.AnimationState::data
	AnimationStateData_t3672895841 * ___data_5;
	// Spine.Pool`1<Spine.TrackEntry> Spine.AnimationState::trackEntryPool
	Pool_1_t428500383 * ___trackEntryPool_6;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::tracks
	ExposedList_1_t3162965251 * ___tracks_7;
	// Spine.ExposedList`1<Spine.Event> Spine.AnimationState::events
	ExposedList_1_t876769054 * ___events_8;
	// Spine.EventQueue Spine.AnimationState::queue
	EventQueue_t3612440949 * ___queue_9;
	// System.Collections.Generic.HashSet`1<System.Int32> Spine.AnimationState::propertyIDs
	HashSet_1_t405338302 * ___propertyIDs_10;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::mixingTo
	ExposedList_1_t3162965251 * ___mixingTo_11;
	// System.Boolean Spine.AnimationState::animationsChanged
	bool ___animationsChanged_12;
	// System.Single Spine.AnimationState::timeScale
	float ___timeScale_13;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Start
	TrackEntryDelegate_t737668607 * ___Start_14;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Interrupt
	TrackEntryDelegate_t737668607 * ___Interrupt_15;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::End
	TrackEntryDelegate_t737668607 * ___End_16;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Dispose
	TrackEntryDelegate_t737668607 * ___Dispose_17;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Complete
	TrackEntryDelegate_t737668607 * ___Complete_18;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.AnimationState::Event
	TrackEntryEventDelegate_t818460179 * ___Event_19;

public:
	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___data_5)); }
	inline AnimationStateData_t3672895841 * get_data_5() const { return ___data_5; }
	inline AnimationStateData_t3672895841 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(AnimationStateData_t3672895841 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier(&___data_5, value);
	}

	inline static int32_t get_offset_of_trackEntryPool_6() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___trackEntryPool_6)); }
	inline Pool_1_t428500383 * get_trackEntryPool_6() const { return ___trackEntryPool_6; }
	inline Pool_1_t428500383 ** get_address_of_trackEntryPool_6() { return &___trackEntryPool_6; }
	inline void set_trackEntryPool_6(Pool_1_t428500383 * value)
	{
		___trackEntryPool_6 = value;
		Il2CppCodeGenWriteBarrier(&___trackEntryPool_6, value);
	}

	inline static int32_t get_offset_of_tracks_7() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___tracks_7)); }
	inline ExposedList_1_t3162965251 * get_tracks_7() const { return ___tracks_7; }
	inline ExposedList_1_t3162965251 ** get_address_of_tracks_7() { return &___tracks_7; }
	inline void set_tracks_7(ExposedList_1_t3162965251 * value)
	{
		___tracks_7 = value;
		Il2CppCodeGenWriteBarrier(&___tracks_7, value);
	}

	inline static int32_t get_offset_of_events_8() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___events_8)); }
	inline ExposedList_1_t876769054 * get_events_8() const { return ___events_8; }
	inline ExposedList_1_t876769054 ** get_address_of_events_8() { return &___events_8; }
	inline void set_events_8(ExposedList_1_t876769054 * value)
	{
		___events_8 = value;
		Il2CppCodeGenWriteBarrier(&___events_8, value);
	}

	inline static int32_t get_offset_of_queue_9() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___queue_9)); }
	inline EventQueue_t3612440949 * get_queue_9() const { return ___queue_9; }
	inline EventQueue_t3612440949 ** get_address_of_queue_9() { return &___queue_9; }
	inline void set_queue_9(EventQueue_t3612440949 * value)
	{
		___queue_9 = value;
		Il2CppCodeGenWriteBarrier(&___queue_9, value);
	}

	inline static int32_t get_offset_of_propertyIDs_10() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___propertyIDs_10)); }
	inline HashSet_1_t405338302 * get_propertyIDs_10() const { return ___propertyIDs_10; }
	inline HashSet_1_t405338302 ** get_address_of_propertyIDs_10() { return &___propertyIDs_10; }
	inline void set_propertyIDs_10(HashSet_1_t405338302 * value)
	{
		___propertyIDs_10 = value;
		Il2CppCodeGenWriteBarrier(&___propertyIDs_10, value);
	}

	inline static int32_t get_offset_of_mixingTo_11() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___mixingTo_11)); }
	inline ExposedList_1_t3162965251 * get_mixingTo_11() const { return ___mixingTo_11; }
	inline ExposedList_1_t3162965251 ** get_address_of_mixingTo_11() { return &___mixingTo_11; }
	inline void set_mixingTo_11(ExposedList_1_t3162965251 * value)
	{
		___mixingTo_11 = value;
		Il2CppCodeGenWriteBarrier(&___mixingTo_11, value);
	}

	inline static int32_t get_offset_of_animationsChanged_12() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___animationsChanged_12)); }
	inline bool get_animationsChanged_12() const { return ___animationsChanged_12; }
	inline bool* get_address_of_animationsChanged_12() { return &___animationsChanged_12; }
	inline void set_animationsChanged_12(bool value)
	{
		___animationsChanged_12 = value;
	}

	inline static int32_t get_offset_of_timeScale_13() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___timeScale_13)); }
	inline float get_timeScale_13() const { return ___timeScale_13; }
	inline float* get_address_of_timeScale_13() { return &___timeScale_13; }
	inline void set_timeScale_13(float value)
	{
		___timeScale_13 = value;
	}

	inline static int32_t get_offset_of_Start_14() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Start_14)); }
	inline TrackEntryDelegate_t737668607 * get_Start_14() const { return ___Start_14; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Start_14() { return &___Start_14; }
	inline void set_Start_14(TrackEntryDelegate_t737668607 * value)
	{
		___Start_14 = value;
		Il2CppCodeGenWriteBarrier(&___Start_14, value);
	}

	inline static int32_t get_offset_of_Interrupt_15() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Interrupt_15)); }
	inline TrackEntryDelegate_t737668607 * get_Interrupt_15() const { return ___Interrupt_15; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Interrupt_15() { return &___Interrupt_15; }
	inline void set_Interrupt_15(TrackEntryDelegate_t737668607 * value)
	{
		___Interrupt_15 = value;
		Il2CppCodeGenWriteBarrier(&___Interrupt_15, value);
	}

	inline static int32_t get_offset_of_End_16() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___End_16)); }
	inline TrackEntryDelegate_t737668607 * get_End_16() const { return ___End_16; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_End_16() { return &___End_16; }
	inline void set_End_16(TrackEntryDelegate_t737668607 * value)
	{
		___End_16 = value;
		Il2CppCodeGenWriteBarrier(&___End_16, value);
	}

	inline static int32_t get_offset_of_Dispose_17() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Dispose_17)); }
	inline TrackEntryDelegate_t737668607 * get_Dispose_17() const { return ___Dispose_17; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Dispose_17() { return &___Dispose_17; }
	inline void set_Dispose_17(TrackEntryDelegate_t737668607 * value)
	{
		___Dispose_17 = value;
		Il2CppCodeGenWriteBarrier(&___Dispose_17, value);
	}

	inline static int32_t get_offset_of_Complete_18() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Complete_18)); }
	inline TrackEntryDelegate_t737668607 * get_Complete_18() const { return ___Complete_18; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_Complete_18() { return &___Complete_18; }
	inline void set_Complete_18(TrackEntryDelegate_t737668607 * value)
	{
		___Complete_18 = value;
		Il2CppCodeGenWriteBarrier(&___Complete_18, value);
	}

	inline static int32_t get_offset_of_Event_19() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497, ___Event_19)); }
	inline TrackEntryEventDelegate_t818460179 * get_Event_19() const { return ___Event_19; }
	inline TrackEntryEventDelegate_t818460179 ** get_address_of_Event_19() { return &___Event_19; }
	inline void set_Event_19(TrackEntryEventDelegate_t818460179 * value)
	{
		___Event_19 = value;
		Il2CppCodeGenWriteBarrier(&___Event_19, value);
	}
};

struct AnimationState_t1491536497_StaticFields
{
public:
	// Spine.Animation Spine.AnimationState::EmptyAnimation
	Animation_t4237671184 * ___EmptyAnimation_4;

public:
	inline static int32_t get_offset_of_EmptyAnimation_4() { return static_cast<int32_t>(offsetof(AnimationState_t1491536497_StaticFields, ___EmptyAnimation_4)); }
	inline Animation_t4237671184 * get_EmptyAnimation_4() const { return ___EmptyAnimation_4; }
	inline Animation_t4237671184 ** get_address_of_EmptyAnimation_4() { return &___EmptyAnimation_4; }
	inline void set_EmptyAnimation_4(Animation_t4237671184 * value)
	{
		___EmptyAnimation_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyAnimation_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
