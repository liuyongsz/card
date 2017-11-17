#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t3975561390  : public Il2CppObject
{
public:
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t1799908754 * ___style_0;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_1;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_2;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_3;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_4;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t2243707579  ___scrollOffset_5;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t4210063000 * ___m_Content_6;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_7;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_8;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_9;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_10;

public:
	inline static int32_t get_offset_of_style_0() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___style_0)); }
	inline GUIStyle_t1799908754 * get_style_0() const { return ___style_0; }
	inline GUIStyle_t1799908754 ** get_address_of_style_0() { return &___style_0; }
	inline void set_style_0(GUIStyle_t1799908754 * value)
	{
		___style_0 = value;
		Il2CppCodeGenWriteBarrier(&___style_0, value);
	}

	inline static int32_t get_offset_of_multiline_1() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___multiline_1)); }
	inline bool get_multiline_1() const { return ___multiline_1; }
	inline bool* get_address_of_multiline_1() { return &___multiline_1; }
	inline void set_multiline_1(bool value)
	{
		___multiline_1 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_2() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___hasHorizontalCursorPos_2)); }
	inline bool get_hasHorizontalCursorPos_2() const { return ___hasHorizontalCursorPos_2; }
	inline bool* get_address_of_hasHorizontalCursorPos_2() { return &___hasHorizontalCursorPos_2; }
	inline void set_hasHorizontalCursorPos_2(bool value)
	{
		___hasHorizontalCursorPos_2 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_3() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___isPasswordField_3)); }
	inline bool get_isPasswordField_3() const { return ___isPasswordField_3; }
	inline bool* get_address_of_isPasswordField_3() { return &___isPasswordField_3; }
	inline void set_isPasswordField_3(bool value)
	{
		___isPasswordField_3 = value;
	}

	inline static int32_t get_offset_of_m_HasFocus_4() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_HasFocus_4)); }
	inline bool get_m_HasFocus_4() const { return ___m_HasFocus_4; }
	inline bool* get_address_of_m_HasFocus_4() { return &___m_HasFocus_4; }
	inline void set_m_HasFocus_4(bool value)
	{
		___m_HasFocus_4 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_5() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___scrollOffset_5)); }
	inline Vector2_t2243707579  get_scrollOffset_5() const { return ___scrollOffset_5; }
	inline Vector2_t2243707579 * get_address_of_scrollOffset_5() { return &___scrollOffset_5; }
	inline void set_scrollOffset_5(Vector2_t2243707579  value)
	{
		___scrollOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_Content_6() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_Content_6)); }
	inline GUIContent_t4210063000 * get_m_Content_6() const { return ___m_Content_6; }
	inline GUIContent_t4210063000 ** get_address_of_m_Content_6() { return &___m_Content_6; }
	inline void set_m_Content_6(GUIContent_t4210063000 * value)
	{
		___m_Content_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_6, value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_7() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_CursorIndex_7)); }
	inline int32_t get_m_CursorIndex_7() const { return ___m_CursorIndex_7; }
	inline int32_t* get_address_of_m_CursorIndex_7() { return &___m_CursorIndex_7; }
	inline void set_m_CursorIndex_7(int32_t value)
	{
		___m_CursorIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_SelectIndex_8)); }
	inline int32_t get_m_SelectIndex_8() const { return ___m_SelectIndex_8; }
	inline int32_t* get_address_of_m_SelectIndex_8() { return &___m_SelectIndex_8; }
	inline void set_m_SelectIndex_8(int32_t value)
	{
		___m_SelectIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_9() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_RevealCursor_9)); }
	inline bool get_m_RevealCursor_9() const { return ___m_RevealCursor_9; }
	inline bool* get_address_of_m_RevealCursor_9() { return &___m_RevealCursor_9; }
	inline void set_m_RevealCursor_9(bool value)
	{
		___m_RevealCursor_9 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_10() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_iAltCursorPos_10)); }
	inline int32_t get_m_iAltCursorPos_10() const { return ___m_iAltCursorPos_10; }
	inline int32_t* get_address_of_m_iAltCursorPos_10() { return &___m_iAltCursorPos_10; }
	inline void set_m_iAltCursorPos_10(int32_t value)
	{
		___m_iAltCursorPos_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
