#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "AssemblyU2DCSharp_ProtoBuf_Serializers_ProtoDecora1562593268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.PropertyDecorator
struct  PropertyDecorator_t1762263112  : public ProtoDecoratorBase_t1562593268
{
public:
	// System.Reflection.PropertyInfo ProtoBuf.Serializers.PropertyDecorator::property
	PropertyInfo_t * ___property_1;
	// System.Type ProtoBuf.Serializers.PropertyDecorator::forType
	Type_t * ___forType_2;
	// System.Boolean ProtoBuf.Serializers.PropertyDecorator::readOptionsWriteValue
	bool ___readOptionsWriteValue_3;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.PropertyDecorator::shadowSetter
	MethodInfo_t * ___shadowSetter_4;

public:
	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(PropertyDecorator_t1762263112, ___property_1)); }
	inline PropertyInfo_t * get_property_1() const { return ___property_1; }
	inline PropertyInfo_t ** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(PropertyInfo_t * value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier(&___property_1, value);
	}

	inline static int32_t get_offset_of_forType_2() { return static_cast<int32_t>(offsetof(PropertyDecorator_t1762263112, ___forType_2)); }
	inline Type_t * get_forType_2() const { return ___forType_2; }
	inline Type_t ** get_address_of_forType_2() { return &___forType_2; }
	inline void set_forType_2(Type_t * value)
	{
		___forType_2 = value;
		Il2CppCodeGenWriteBarrier(&___forType_2, value);
	}

	inline static int32_t get_offset_of_readOptionsWriteValue_3() { return static_cast<int32_t>(offsetof(PropertyDecorator_t1762263112, ___readOptionsWriteValue_3)); }
	inline bool get_readOptionsWriteValue_3() const { return ___readOptionsWriteValue_3; }
	inline bool* get_address_of_readOptionsWriteValue_3() { return &___readOptionsWriteValue_3; }
	inline void set_readOptionsWriteValue_3(bool value)
	{
		___readOptionsWriteValue_3 = value;
	}

	inline static int32_t get_offset_of_shadowSetter_4() { return static_cast<int32_t>(offsetof(PropertyDecorator_t1762263112, ___shadowSetter_4)); }
	inline MethodInfo_t * get_shadowSetter_4() const { return ___shadowSetter_4; }
	inline MethodInfo_t ** get_address_of_shadowSetter_4() { return &___shadowSetter_4; }
	inline void set_shadowSetter_4(MethodInfo_t * value)
	{
		___shadowSetter_4 = value;
		Il2CppCodeGenWriteBarrier(&___shadowSetter_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
