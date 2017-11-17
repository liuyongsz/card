#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Attribute
struct Attribute_t542643598;

#include "AssemblyU2DCSharp_ProtoBuf_Meta_AttributeMap748219064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap
struct  ReflectionAttributeMap_t2650244276  : public AttributeMap_t748219064
{
public:
	// System.Attribute ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap::attribute
	Attribute_t542643598 * ___attribute_0;

public:
	inline static int32_t get_offset_of_attribute_0() { return static_cast<int32_t>(offsetof(ReflectionAttributeMap_t2650244276, ___attribute_0)); }
	inline Attribute_t542643598 * get_attribute_0() const { return ___attribute_0; }
	inline Attribute_t542643598 ** get_address_of_attribute_0() { return &___attribute_0; }
	inline void set_attribute_0(Attribute_t542643598 * value)
	{
		___attribute_0 = value;
		Il2CppCodeGenWriteBarrier(&___attribute_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
