#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetProtocal.CardInfoListMsg
struct CardInfoListMsg_t972027215;
// SetHeroMediator
struct SetHeroMediator_t42052605;
// System.Collections.Generic.List`1<TD_Card>
struct List_1_t3709129105;
// TD_Card
struct TD_Card_t45040677;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Comparison`1<NetProtocal.CardDataMsg>
struct Comparison_1_t92725302;

#include "AssemblyU2DCSharp_UIMediator_1_gen4039554167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetHeroMediator
struct  SetHeroMediator_t42052605  : public UIMediator_1_t4039554167
{
public:
	// NetProtocal.CardInfoListMsg SetHeroMediator::cardInfoList
	CardInfoListMsg_t972027215 * ___cardInfoList_18;
	// System.Collections.Generic.List`1<TD_Card> SetHeroMediator::cardList
	List_1_t3709129105 * ___cardList_20;
	// System.Int32 SetHeroMediator::dragIndex
	int32_t ___dragIndex_21;
	// System.Boolean SetHeroMediator::canDrag
	bool ___canDrag_22;
	// TD_Card SetHeroMediator::drapCard
	TD_Card_t45040677 * ___drapCard_23;
	// System.Int32 SetHeroMediator::changeCardId
	int32_t ___changeCardId_24;
	// System.Boolean SetHeroMediator::firstInArcaneUI
	bool ___firstInArcaneUI_25;
	// System.Boolean SetHeroMediator::firstInCardUI
	bool ___firstInCardUI_26;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> SetHeroMediator::skillPos
	List_1_t1612828712 * ___skillPos_27;
	// System.Collections.Generic.List`1<System.Object> SetHeroMediator::listObj
	List_1_t2058570427 * ___listObj_28;

public:
	inline static int32_t get_offset_of_cardInfoList_18() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___cardInfoList_18)); }
	inline CardInfoListMsg_t972027215 * get_cardInfoList_18() const { return ___cardInfoList_18; }
	inline CardInfoListMsg_t972027215 ** get_address_of_cardInfoList_18() { return &___cardInfoList_18; }
	inline void set_cardInfoList_18(CardInfoListMsg_t972027215 * value)
	{
		___cardInfoList_18 = value;
		Il2CppCodeGenWriteBarrier(&___cardInfoList_18, value);
	}

	inline static int32_t get_offset_of_cardList_20() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___cardList_20)); }
	inline List_1_t3709129105 * get_cardList_20() const { return ___cardList_20; }
	inline List_1_t3709129105 ** get_address_of_cardList_20() { return &___cardList_20; }
	inline void set_cardList_20(List_1_t3709129105 * value)
	{
		___cardList_20 = value;
		Il2CppCodeGenWriteBarrier(&___cardList_20, value);
	}

	inline static int32_t get_offset_of_dragIndex_21() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___dragIndex_21)); }
	inline int32_t get_dragIndex_21() const { return ___dragIndex_21; }
	inline int32_t* get_address_of_dragIndex_21() { return &___dragIndex_21; }
	inline void set_dragIndex_21(int32_t value)
	{
		___dragIndex_21 = value;
	}

	inline static int32_t get_offset_of_canDrag_22() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___canDrag_22)); }
	inline bool get_canDrag_22() const { return ___canDrag_22; }
	inline bool* get_address_of_canDrag_22() { return &___canDrag_22; }
	inline void set_canDrag_22(bool value)
	{
		___canDrag_22 = value;
	}

	inline static int32_t get_offset_of_drapCard_23() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___drapCard_23)); }
	inline TD_Card_t45040677 * get_drapCard_23() const { return ___drapCard_23; }
	inline TD_Card_t45040677 ** get_address_of_drapCard_23() { return &___drapCard_23; }
	inline void set_drapCard_23(TD_Card_t45040677 * value)
	{
		___drapCard_23 = value;
		Il2CppCodeGenWriteBarrier(&___drapCard_23, value);
	}

	inline static int32_t get_offset_of_changeCardId_24() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___changeCardId_24)); }
	inline int32_t get_changeCardId_24() const { return ___changeCardId_24; }
	inline int32_t* get_address_of_changeCardId_24() { return &___changeCardId_24; }
	inline void set_changeCardId_24(int32_t value)
	{
		___changeCardId_24 = value;
	}

	inline static int32_t get_offset_of_firstInArcaneUI_25() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___firstInArcaneUI_25)); }
	inline bool get_firstInArcaneUI_25() const { return ___firstInArcaneUI_25; }
	inline bool* get_address_of_firstInArcaneUI_25() { return &___firstInArcaneUI_25; }
	inline void set_firstInArcaneUI_25(bool value)
	{
		___firstInArcaneUI_25 = value;
	}

	inline static int32_t get_offset_of_firstInCardUI_26() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___firstInCardUI_26)); }
	inline bool get_firstInCardUI_26() const { return ___firstInCardUI_26; }
	inline bool* get_address_of_firstInCardUI_26() { return &___firstInCardUI_26; }
	inline void set_firstInCardUI_26(bool value)
	{
		___firstInCardUI_26 = value;
	}

	inline static int32_t get_offset_of_skillPos_27() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___skillPos_27)); }
	inline List_1_t1612828712 * get_skillPos_27() const { return ___skillPos_27; }
	inline List_1_t1612828712 ** get_address_of_skillPos_27() { return &___skillPos_27; }
	inline void set_skillPos_27(List_1_t1612828712 * value)
	{
		___skillPos_27 = value;
		Il2CppCodeGenWriteBarrier(&___skillPos_27, value);
	}

	inline static int32_t get_offset_of_listObj_28() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605, ___listObj_28)); }
	inline List_1_t2058570427 * get_listObj_28() const { return ___listObj_28; }
	inline List_1_t2058570427 ** get_address_of_listObj_28() { return &___listObj_28; }
	inline void set_listObj_28(List_1_t2058570427 * value)
	{
		___listObj_28 = value;
		Il2CppCodeGenWriteBarrier(&___listObj_28, value);
	}
};

struct SetHeroMediator_t42052605_StaticFields
{
public:
	// SetHeroMediator SetHeroMediator::setHeroMediator
	SetHeroMediator_t42052605 * ___setHeroMediator_19;
	// System.Comparison`1<NetProtocal.CardDataMsg> SetHeroMediator::<>f__am$cacheB
	Comparison_1_t92725302 * ___U3CU3Ef__amU24cacheB_29;

public:
	inline static int32_t get_offset_of_setHeroMediator_19() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605_StaticFields, ___setHeroMediator_19)); }
	inline SetHeroMediator_t42052605 * get_setHeroMediator_19() const { return ___setHeroMediator_19; }
	inline SetHeroMediator_t42052605 ** get_address_of_setHeroMediator_19() { return &___setHeroMediator_19; }
	inline void set_setHeroMediator_19(SetHeroMediator_t42052605 * value)
	{
		___setHeroMediator_19 = value;
		Il2CppCodeGenWriteBarrier(&___setHeroMediator_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_29() { return static_cast<int32_t>(offsetof(SetHeroMediator_t42052605_StaticFields, ___U3CU3Ef__amU24cacheB_29)); }
	inline Comparison_1_t92725302 * get_U3CU3Ef__amU24cacheB_29() const { return ___U3CU3Ef__amU24cacheB_29; }
	inline Comparison_1_t92725302 ** get_address_of_U3CU3Ef__amU24cacheB_29() { return &___U3CU3Ef__amU24cacheB_29; }
	inline void set_U3CU3Ef__amU24cacheB_29(Comparison_1_t92725302 * value)
	{
		___U3CU3Ef__amU24cacheB_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
