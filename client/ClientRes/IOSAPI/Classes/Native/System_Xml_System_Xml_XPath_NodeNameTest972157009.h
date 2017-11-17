#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;

#include "System_Xml_System_Xml_XPath_NodeTest2072055152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeNameTest
struct  NodeNameTest_t972157009  : public NodeTest_t2072055152
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.NodeNameTest::_name
	XmlQualifiedName_t1944712516 * ____name_1;
	// System.Boolean System.Xml.XPath.NodeNameTest::resolvedName
	bool ___resolvedName_2;

public:
	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(NodeNameTest_t972157009, ____name_1)); }
	inline XmlQualifiedName_t1944712516 * get__name_1() const { return ____name_1; }
	inline XmlQualifiedName_t1944712516 ** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(XmlQualifiedName_t1944712516 * value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of_resolvedName_2() { return static_cast<int32_t>(offsetof(NodeNameTest_t972157009, ___resolvedName_2)); }
	inline bool get_resolvedName_2() const { return ___resolvedName_2; }
	inline bool* get_address_of_resolvedName_2() { return &___resolvedName_2; }
	inline void set_resolvedName_2(bool value)
	{
		___resolvedName_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
