#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// UIFont
struct UIFont_t389944949;
// UnityEngine.Font
struct Font_t4239498691;
// UILabel
struct UILabel_t1795115428;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3718216671;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match>
struct List_1_t2533367031;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UILabel_Overflow2317266067.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SymbolLabel
struct  SymbolLabel_t2491497006  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.String> SymbolLabel::m_Symbols
	List_1_t1398341365 * ___m_Symbols_2;
	// System.String SymbolLabel::m_Text
	String_t* ___m_Text_3;
	// System.String SymbolLabel::m_realText
	String_t* ___m_realText_4;
	// UIFont SymbolLabel::uifont
	UIFont_t389944949 * ___uifont_5;
	// UnityEngine.Font SymbolLabel::font
	Font_t4239498691 * ___font_6;
	// System.Int32 SymbolLabel::fontSize
	int32_t ___fontSize_7;
	// System.Int32 SymbolLabel::symbolSize
	int32_t ___symbolSize_8;
	// System.Int32 SymbolLabel::spacingY
	int32_t ___spacingY_9;
	// System.Int32 SymbolLabel::width
	int32_t ___width_10;
	// System.Int32 SymbolLabel::depth
	int32_t ___depth_11;
	// System.Int32 SymbolLabel::maxLine
	int32_t ___maxLine_12;
	// UILabel/Overflow SymbolLabel::overflowMethod
	int32_t ___overflowMethod_13;
	// UILabel SymbolLabel::m_TextLabel
	UILabel_t1795115428 * ___m_TextLabel_14;
	// UILabel SymbolLabel::m_SymbolLabel
	UILabel_t1795115428 * ___m_SymbolLabel_15;
	// System.Text.RegularExpressions.MatchCollection SymbolLabel::m_matchs
	MatchCollection_t3718216671 * ___m_matchs_16;
	// System.Text.RegularExpressions.MatchCollection SymbolLabel::m_spaceMatchs
	MatchCollection_t3718216671 * ___m_spaceMatchs_17;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match> SymbolLabel::m_realMatchs
	List_1_t2533367031 * ___m_realMatchs_18;
	// System.Int32 SymbolLabel::m_DrawStart
	int32_t ___m_DrawStart_19;

public:
	inline static int32_t get_offset_of_m_Symbols_2() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_Symbols_2)); }
	inline List_1_t1398341365 * get_m_Symbols_2() const { return ___m_Symbols_2; }
	inline List_1_t1398341365 ** get_address_of_m_Symbols_2() { return &___m_Symbols_2; }
	inline void set_m_Symbols_2(List_1_t1398341365 * value)
	{
		___m_Symbols_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Symbols_2, value);
	}

	inline static int32_t get_offset_of_m_Text_3() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_Text_3)); }
	inline String_t* get_m_Text_3() const { return ___m_Text_3; }
	inline String_t** get_address_of_m_Text_3() { return &___m_Text_3; }
	inline void set_m_Text_3(String_t* value)
	{
		___m_Text_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_3, value);
	}

	inline static int32_t get_offset_of_m_realText_4() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_realText_4)); }
	inline String_t* get_m_realText_4() const { return ___m_realText_4; }
	inline String_t** get_address_of_m_realText_4() { return &___m_realText_4; }
	inline void set_m_realText_4(String_t* value)
	{
		___m_realText_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_realText_4, value);
	}

	inline static int32_t get_offset_of_uifont_5() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___uifont_5)); }
	inline UIFont_t389944949 * get_uifont_5() const { return ___uifont_5; }
	inline UIFont_t389944949 ** get_address_of_uifont_5() { return &___uifont_5; }
	inline void set_uifont_5(UIFont_t389944949 * value)
	{
		___uifont_5 = value;
		Il2CppCodeGenWriteBarrier(&___uifont_5, value);
	}

	inline static int32_t get_offset_of_font_6() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___font_6)); }
	inline Font_t4239498691 * get_font_6() const { return ___font_6; }
	inline Font_t4239498691 ** get_address_of_font_6() { return &___font_6; }
	inline void set_font_6(Font_t4239498691 * value)
	{
		___font_6 = value;
		Il2CppCodeGenWriteBarrier(&___font_6, value);
	}

	inline static int32_t get_offset_of_fontSize_7() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___fontSize_7)); }
	inline int32_t get_fontSize_7() const { return ___fontSize_7; }
	inline int32_t* get_address_of_fontSize_7() { return &___fontSize_7; }
	inline void set_fontSize_7(int32_t value)
	{
		___fontSize_7 = value;
	}

	inline static int32_t get_offset_of_symbolSize_8() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___symbolSize_8)); }
	inline int32_t get_symbolSize_8() const { return ___symbolSize_8; }
	inline int32_t* get_address_of_symbolSize_8() { return &___symbolSize_8; }
	inline void set_symbolSize_8(int32_t value)
	{
		___symbolSize_8 = value;
	}

	inline static int32_t get_offset_of_spacingY_9() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___spacingY_9)); }
	inline int32_t get_spacingY_9() const { return ___spacingY_9; }
	inline int32_t* get_address_of_spacingY_9() { return &___spacingY_9; }
	inline void set_spacingY_9(int32_t value)
	{
		___spacingY_9 = value;
	}

	inline static int32_t get_offset_of_width_10() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___width_10)); }
	inline int32_t get_width_10() const { return ___width_10; }
	inline int32_t* get_address_of_width_10() { return &___width_10; }
	inline void set_width_10(int32_t value)
	{
		___width_10 = value;
	}

	inline static int32_t get_offset_of_depth_11() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___depth_11)); }
	inline int32_t get_depth_11() const { return ___depth_11; }
	inline int32_t* get_address_of_depth_11() { return &___depth_11; }
	inline void set_depth_11(int32_t value)
	{
		___depth_11 = value;
	}

	inline static int32_t get_offset_of_maxLine_12() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___maxLine_12)); }
	inline int32_t get_maxLine_12() const { return ___maxLine_12; }
	inline int32_t* get_address_of_maxLine_12() { return &___maxLine_12; }
	inline void set_maxLine_12(int32_t value)
	{
		___maxLine_12 = value;
	}

	inline static int32_t get_offset_of_overflowMethod_13() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___overflowMethod_13)); }
	inline int32_t get_overflowMethod_13() const { return ___overflowMethod_13; }
	inline int32_t* get_address_of_overflowMethod_13() { return &___overflowMethod_13; }
	inline void set_overflowMethod_13(int32_t value)
	{
		___overflowMethod_13 = value;
	}

	inline static int32_t get_offset_of_m_TextLabel_14() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_TextLabel_14)); }
	inline UILabel_t1795115428 * get_m_TextLabel_14() const { return ___m_TextLabel_14; }
	inline UILabel_t1795115428 ** get_address_of_m_TextLabel_14() { return &___m_TextLabel_14; }
	inline void set_m_TextLabel_14(UILabel_t1795115428 * value)
	{
		___m_TextLabel_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextLabel_14, value);
	}

	inline static int32_t get_offset_of_m_SymbolLabel_15() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_SymbolLabel_15)); }
	inline UILabel_t1795115428 * get_m_SymbolLabel_15() const { return ___m_SymbolLabel_15; }
	inline UILabel_t1795115428 ** get_address_of_m_SymbolLabel_15() { return &___m_SymbolLabel_15; }
	inline void set_m_SymbolLabel_15(UILabel_t1795115428 * value)
	{
		___m_SymbolLabel_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_SymbolLabel_15, value);
	}

	inline static int32_t get_offset_of_m_matchs_16() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_matchs_16)); }
	inline MatchCollection_t3718216671 * get_m_matchs_16() const { return ___m_matchs_16; }
	inline MatchCollection_t3718216671 ** get_address_of_m_matchs_16() { return &___m_matchs_16; }
	inline void set_m_matchs_16(MatchCollection_t3718216671 * value)
	{
		___m_matchs_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_matchs_16, value);
	}

	inline static int32_t get_offset_of_m_spaceMatchs_17() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_spaceMatchs_17)); }
	inline MatchCollection_t3718216671 * get_m_spaceMatchs_17() const { return ___m_spaceMatchs_17; }
	inline MatchCollection_t3718216671 ** get_address_of_m_spaceMatchs_17() { return &___m_spaceMatchs_17; }
	inline void set_m_spaceMatchs_17(MatchCollection_t3718216671 * value)
	{
		___m_spaceMatchs_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_spaceMatchs_17, value);
	}

	inline static int32_t get_offset_of_m_realMatchs_18() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_realMatchs_18)); }
	inline List_1_t2533367031 * get_m_realMatchs_18() const { return ___m_realMatchs_18; }
	inline List_1_t2533367031 ** get_address_of_m_realMatchs_18() { return &___m_realMatchs_18; }
	inline void set_m_realMatchs_18(List_1_t2533367031 * value)
	{
		___m_realMatchs_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_realMatchs_18, value);
	}

	inline static int32_t get_offset_of_m_DrawStart_19() { return static_cast<int32_t>(offsetof(SymbolLabel_t2491497006, ___m_DrawStart_19)); }
	inline int32_t get_m_DrawStart_19() const { return ___m_DrawStart_19; }
	inline int32_t* get_address_of_m_DrawStart_19() { return &___m_DrawStart_19; }
	inline void set_m_DrawStart_19(int32_t value)
	{
		___m_DrawStart_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
