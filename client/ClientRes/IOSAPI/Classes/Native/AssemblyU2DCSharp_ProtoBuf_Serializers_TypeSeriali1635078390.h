#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoSerializer[]
struct IProtoSerializerU5BU5D_t634234844;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.TypeSerializer
struct  TypeSerializer_t1635078390  : public Il2CppObject
{
public:
	// System.Type ProtoBuf.Serializers.TypeSerializer::forType
	Type_t * ___forType_0;
	// System.Type ProtoBuf.Serializers.TypeSerializer::constructType
	Type_t * ___constructType_1;
	// ProtoBuf.Serializers.IProtoSerializer[] ProtoBuf.Serializers.TypeSerializer::serializers
	IProtoSerializerU5BU5D_t634234844* ___serializers_2;
	// System.Int32[] ProtoBuf.Serializers.TypeSerializer::fieldNumbers
	Int32U5BU5D_t3030399641* ___fieldNumbers_3;
	// System.Boolean ProtoBuf.Serializers.TypeSerializer::isRootType
	bool ___isRootType_4;
	// System.Boolean ProtoBuf.Serializers.TypeSerializer::useConstructor
	bool ___useConstructor_5;
	// System.Boolean ProtoBuf.Serializers.TypeSerializer::isExtensible
	bool ___isExtensible_6;
	// System.Boolean ProtoBuf.Serializers.TypeSerializer::hasConstructor
	bool ___hasConstructor_7;
	// ProtoBuf.Meta.CallbackSet ProtoBuf.Serializers.TypeSerializer::callbacks
	CallbackSet_t2109955613 * ___callbacks_8;
	// System.Reflection.MethodInfo[] ProtoBuf.Serializers.TypeSerializer::baseCtorCallbacks
	MethodInfoU5BU5D_t152480188* ___baseCtorCallbacks_9;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.TypeSerializer::factory
	MethodInfo_t * ___factory_10;

public:
	inline static int32_t get_offset_of_forType_0() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___forType_0)); }
	inline Type_t * get_forType_0() const { return ___forType_0; }
	inline Type_t ** get_address_of_forType_0() { return &___forType_0; }
	inline void set_forType_0(Type_t * value)
	{
		___forType_0 = value;
		Il2CppCodeGenWriteBarrier(&___forType_0, value);
	}

	inline static int32_t get_offset_of_constructType_1() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___constructType_1)); }
	inline Type_t * get_constructType_1() const { return ___constructType_1; }
	inline Type_t ** get_address_of_constructType_1() { return &___constructType_1; }
	inline void set_constructType_1(Type_t * value)
	{
		___constructType_1 = value;
		Il2CppCodeGenWriteBarrier(&___constructType_1, value);
	}

	inline static int32_t get_offset_of_serializers_2() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___serializers_2)); }
	inline IProtoSerializerU5BU5D_t634234844* get_serializers_2() const { return ___serializers_2; }
	inline IProtoSerializerU5BU5D_t634234844** get_address_of_serializers_2() { return &___serializers_2; }
	inline void set_serializers_2(IProtoSerializerU5BU5D_t634234844* value)
	{
		___serializers_2 = value;
		Il2CppCodeGenWriteBarrier(&___serializers_2, value);
	}

	inline static int32_t get_offset_of_fieldNumbers_3() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___fieldNumbers_3)); }
	inline Int32U5BU5D_t3030399641* get_fieldNumbers_3() const { return ___fieldNumbers_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_fieldNumbers_3() { return &___fieldNumbers_3; }
	inline void set_fieldNumbers_3(Int32U5BU5D_t3030399641* value)
	{
		___fieldNumbers_3 = value;
		Il2CppCodeGenWriteBarrier(&___fieldNumbers_3, value);
	}

	inline static int32_t get_offset_of_isRootType_4() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___isRootType_4)); }
	inline bool get_isRootType_4() const { return ___isRootType_4; }
	inline bool* get_address_of_isRootType_4() { return &___isRootType_4; }
	inline void set_isRootType_4(bool value)
	{
		___isRootType_4 = value;
	}

	inline static int32_t get_offset_of_useConstructor_5() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___useConstructor_5)); }
	inline bool get_useConstructor_5() const { return ___useConstructor_5; }
	inline bool* get_address_of_useConstructor_5() { return &___useConstructor_5; }
	inline void set_useConstructor_5(bool value)
	{
		___useConstructor_5 = value;
	}

	inline static int32_t get_offset_of_isExtensible_6() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___isExtensible_6)); }
	inline bool get_isExtensible_6() const { return ___isExtensible_6; }
	inline bool* get_address_of_isExtensible_6() { return &___isExtensible_6; }
	inline void set_isExtensible_6(bool value)
	{
		___isExtensible_6 = value;
	}

	inline static int32_t get_offset_of_hasConstructor_7() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___hasConstructor_7)); }
	inline bool get_hasConstructor_7() const { return ___hasConstructor_7; }
	inline bool* get_address_of_hasConstructor_7() { return &___hasConstructor_7; }
	inline void set_hasConstructor_7(bool value)
	{
		___hasConstructor_7 = value;
	}

	inline static int32_t get_offset_of_callbacks_8() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___callbacks_8)); }
	inline CallbackSet_t2109955613 * get_callbacks_8() const { return ___callbacks_8; }
	inline CallbackSet_t2109955613 ** get_address_of_callbacks_8() { return &___callbacks_8; }
	inline void set_callbacks_8(CallbackSet_t2109955613 * value)
	{
		___callbacks_8 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_8, value);
	}

	inline static int32_t get_offset_of_baseCtorCallbacks_9() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___baseCtorCallbacks_9)); }
	inline MethodInfoU5BU5D_t152480188* get_baseCtorCallbacks_9() const { return ___baseCtorCallbacks_9; }
	inline MethodInfoU5BU5D_t152480188** get_address_of_baseCtorCallbacks_9() { return &___baseCtorCallbacks_9; }
	inline void set_baseCtorCallbacks_9(MethodInfoU5BU5D_t152480188* value)
	{
		___baseCtorCallbacks_9 = value;
		Il2CppCodeGenWriteBarrier(&___baseCtorCallbacks_9, value);
	}

	inline static int32_t get_offset_of_factory_10() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390, ___factory_10)); }
	inline MethodInfo_t * get_factory_10() const { return ___factory_10; }
	inline MethodInfo_t ** get_address_of_factory_10() { return &___factory_10; }
	inline void set_factory_10(MethodInfo_t * value)
	{
		___factory_10 = value;
		Il2CppCodeGenWriteBarrier(&___factory_10, value);
	}
};

struct TypeSerializer_t1635078390_StaticFields
{
public:
	// System.Type ProtoBuf.Serializers.TypeSerializer::iextensible
	Type_t * ___iextensible_11;

public:
	inline static int32_t get_offset_of_iextensible_11() { return static_cast<int32_t>(offsetof(TypeSerializer_t1635078390_StaticFields, ___iextensible_11)); }
	inline Type_t * get_iextensible_11() const { return ___iextensible_11; }
	inline Type_t ** get_address_of_iextensible_11() { return &___iextensible_11; }
	inline void set_iextensible_11(Type_t * value)
	{
		___iextensible_11 = value;
		Il2CppCodeGenWriteBarrier(&___iextensible_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
