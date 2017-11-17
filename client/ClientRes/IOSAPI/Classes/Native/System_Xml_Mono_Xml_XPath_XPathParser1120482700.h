#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1565976071;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Mono.Xml.XPath.yydebug.yyDebug
struct yyDebug_t719813743;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int16[]
struct Int16U5BU5D_t3104283263;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.XPathParser
struct  XPathParser_t1120482700  : public Il2CppObject
{
public:
	// System.Xml.Xsl.IStaticXsltContext Mono.Xml.XPath.XPathParser::Context
	Il2CppObject * ___Context_0;
	// System.IO.TextWriter Mono.Xml.XPath.XPathParser::ErrorOutput
	TextWriter_t4027217640 * ___ErrorOutput_1;
	// System.Int32 Mono.Xml.XPath.XPathParser::eof_token
	int32_t ___eof_token_2;
	// Mono.Xml.XPath.yydebug.yyDebug Mono.Xml.XPath.XPathParser::debug
	Il2CppObject * ___debug_3;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyExpectingState
	int32_t ___yyExpectingState_6;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyMax
	int32_t ___yyMax_7;

public:
	inline static int32_t get_offset_of_Context_0() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700, ___Context_0)); }
	inline Il2CppObject * get_Context_0() const { return ___Context_0; }
	inline Il2CppObject ** get_address_of_Context_0() { return &___Context_0; }
	inline void set_Context_0(Il2CppObject * value)
	{
		___Context_0 = value;
		Il2CppCodeGenWriteBarrier(&___Context_0, value);
	}

	inline static int32_t get_offset_of_ErrorOutput_1() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700, ___ErrorOutput_1)); }
	inline TextWriter_t4027217640 * get_ErrorOutput_1() const { return ___ErrorOutput_1; }
	inline TextWriter_t4027217640 ** get_address_of_ErrorOutput_1() { return &___ErrorOutput_1; }
	inline void set_ErrorOutput_1(TextWriter_t4027217640 * value)
	{
		___ErrorOutput_1 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorOutput_1, value);
	}

	inline static int32_t get_offset_of_eof_token_2() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700, ___eof_token_2)); }
	inline int32_t get_eof_token_2() const { return ___eof_token_2; }
	inline int32_t* get_address_of_eof_token_2() { return &___eof_token_2; }
	inline void set_eof_token_2(int32_t value)
	{
		___eof_token_2 = value;
	}

	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700, ___debug_3)); }
	inline Il2CppObject * get_debug_3() const { return ___debug_3; }
	inline Il2CppObject ** get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(Il2CppObject * value)
	{
		___debug_3 = value;
		Il2CppCodeGenWriteBarrier(&___debug_3, value);
	}

	inline static int32_t get_offset_of_yyExpectingState_6() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700, ___yyExpectingState_6)); }
	inline int32_t get_yyExpectingState_6() const { return ___yyExpectingState_6; }
	inline int32_t* get_address_of_yyExpectingState_6() { return &___yyExpectingState_6; }
	inline void set_yyExpectingState_6(int32_t value)
	{
		___yyExpectingState_6 = value;
	}

	inline static int32_t get_offset_of_yyMax_7() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700, ___yyMax_7)); }
	inline int32_t get_yyMax_7() const { return ___yyMax_7; }
	inline int32_t* get_address_of_yyMax_7() { return &___yyMax_7; }
	inline void set_yyMax_7(int32_t value)
	{
		___yyMax_7 = value;
	}
};

struct XPathParser_t1120482700_StaticFields
{
public:
	// System.Int32 Mono.Xml.XPath.XPathParser::yyFinal
	int32_t ___yyFinal_4;
	// System.String[] Mono.Xml.XPath.XPathParser::yyNames
	StringU5BU5D_t1642385972* ___yyNames_5;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyLhs
	Int16U5BU5D_t3104283263* ___yyLhs_8;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyLen
	Int16U5BU5D_t3104283263* ___yyLen_9;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyDefRed
	Int16U5BU5D_t3104283263* ___yyDefRed_10;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyDgoto
	Int16U5BU5D_t3104283263* ___yyDgoto_11;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yySindex
	Int16U5BU5D_t3104283263* ___yySindex_12;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyRindex
	Int16U5BU5D_t3104283263* ___yyRindex_13;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyGindex
	Int16U5BU5D_t3104283263* ___yyGindex_14;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyTable
	Int16U5BU5D_t3104283263* ___yyTable_15;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyCheck
	Int16U5BU5D_t3104283263* ___yyCheck_16;

public:
	inline static int32_t get_offset_of_yyFinal_4() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyFinal_4)); }
	inline int32_t get_yyFinal_4() const { return ___yyFinal_4; }
	inline int32_t* get_address_of_yyFinal_4() { return &___yyFinal_4; }
	inline void set_yyFinal_4(int32_t value)
	{
		___yyFinal_4 = value;
	}

	inline static int32_t get_offset_of_yyNames_5() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyNames_5)); }
	inline StringU5BU5D_t1642385972* get_yyNames_5() const { return ___yyNames_5; }
	inline StringU5BU5D_t1642385972** get_address_of_yyNames_5() { return &___yyNames_5; }
	inline void set_yyNames_5(StringU5BU5D_t1642385972* value)
	{
		___yyNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___yyNames_5, value);
	}

	inline static int32_t get_offset_of_yyLhs_8() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyLhs_8)); }
	inline Int16U5BU5D_t3104283263* get_yyLhs_8() const { return ___yyLhs_8; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyLhs_8() { return &___yyLhs_8; }
	inline void set_yyLhs_8(Int16U5BU5D_t3104283263* value)
	{
		___yyLhs_8 = value;
		Il2CppCodeGenWriteBarrier(&___yyLhs_8, value);
	}

	inline static int32_t get_offset_of_yyLen_9() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyLen_9)); }
	inline Int16U5BU5D_t3104283263* get_yyLen_9() const { return ___yyLen_9; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyLen_9() { return &___yyLen_9; }
	inline void set_yyLen_9(Int16U5BU5D_t3104283263* value)
	{
		___yyLen_9 = value;
		Il2CppCodeGenWriteBarrier(&___yyLen_9, value);
	}

	inline static int32_t get_offset_of_yyDefRed_10() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyDefRed_10)); }
	inline Int16U5BU5D_t3104283263* get_yyDefRed_10() const { return ___yyDefRed_10; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyDefRed_10() { return &___yyDefRed_10; }
	inline void set_yyDefRed_10(Int16U5BU5D_t3104283263* value)
	{
		___yyDefRed_10 = value;
		Il2CppCodeGenWriteBarrier(&___yyDefRed_10, value);
	}

	inline static int32_t get_offset_of_yyDgoto_11() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyDgoto_11)); }
	inline Int16U5BU5D_t3104283263* get_yyDgoto_11() const { return ___yyDgoto_11; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyDgoto_11() { return &___yyDgoto_11; }
	inline void set_yyDgoto_11(Int16U5BU5D_t3104283263* value)
	{
		___yyDgoto_11 = value;
		Il2CppCodeGenWriteBarrier(&___yyDgoto_11, value);
	}

	inline static int32_t get_offset_of_yySindex_12() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yySindex_12)); }
	inline Int16U5BU5D_t3104283263* get_yySindex_12() const { return ___yySindex_12; }
	inline Int16U5BU5D_t3104283263** get_address_of_yySindex_12() { return &___yySindex_12; }
	inline void set_yySindex_12(Int16U5BU5D_t3104283263* value)
	{
		___yySindex_12 = value;
		Il2CppCodeGenWriteBarrier(&___yySindex_12, value);
	}

	inline static int32_t get_offset_of_yyRindex_13() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyRindex_13)); }
	inline Int16U5BU5D_t3104283263* get_yyRindex_13() const { return ___yyRindex_13; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyRindex_13() { return &___yyRindex_13; }
	inline void set_yyRindex_13(Int16U5BU5D_t3104283263* value)
	{
		___yyRindex_13 = value;
		Il2CppCodeGenWriteBarrier(&___yyRindex_13, value);
	}

	inline static int32_t get_offset_of_yyGindex_14() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyGindex_14)); }
	inline Int16U5BU5D_t3104283263* get_yyGindex_14() const { return ___yyGindex_14; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyGindex_14() { return &___yyGindex_14; }
	inline void set_yyGindex_14(Int16U5BU5D_t3104283263* value)
	{
		___yyGindex_14 = value;
		Il2CppCodeGenWriteBarrier(&___yyGindex_14, value);
	}

	inline static int32_t get_offset_of_yyTable_15() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyTable_15)); }
	inline Int16U5BU5D_t3104283263* get_yyTable_15() const { return ___yyTable_15; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyTable_15() { return &___yyTable_15; }
	inline void set_yyTable_15(Int16U5BU5D_t3104283263* value)
	{
		___yyTable_15 = value;
		Il2CppCodeGenWriteBarrier(&___yyTable_15, value);
	}

	inline static int32_t get_offset_of_yyCheck_16() { return static_cast<int32_t>(offsetof(XPathParser_t1120482700_StaticFields, ___yyCheck_16)); }
	inline Int16U5BU5D_t3104283263* get_yyCheck_16() const { return ___yyCheck_16; }
	inline Int16U5BU5D_t3104283263** get_address_of_yyCheck_16() { return &___yyCheck_16; }
	inline void set_yyCheck_16(Int16U5BU5D_t3104283263* value)
	{
		___yyCheck_16 = value;
		Il2CppCodeGenWriteBarrier(&___yyCheck_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
