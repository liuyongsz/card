#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.BasicList/MatchPredicate
struct MatchPredicate_t2181991961;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Meta.LockContentedEventHandler
struct LockContentedEventHandler_t2250551053;

#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.RuntimeTypeModel
struct  RuntimeTypeModel_t623319549  : public TypeModel_t653695305
{
public:
	// System.Byte ProtoBuf.Meta.RuntimeTypeModel::options
	uint8_t ___options_10;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.RuntimeTypeModel::basicTypes
	BasicList_t2284403912 * ___basicTypes_13;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.RuntimeTypeModel::types
	BasicList_t2284403912 * ___types_14;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::metadataTimeoutMilliseconds
	int32_t ___metadataTimeoutMilliseconds_15;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::contentionCounter
	int32_t ___contentionCounter_16;
	// System.Reflection.MethodInfo ProtoBuf.Meta.RuntimeTypeModel::defaultFactory
	MethodInfo_t * ___defaultFactory_17;
	// ProtoBuf.Meta.LockContentedEventHandler ProtoBuf.Meta.RuntimeTypeModel::LockContended
	LockContentedEventHandler_t2250551053 * ___LockContended_18;

public:
	inline static int32_t get_offset_of_options_10() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___options_10)); }
	inline uint8_t get_options_10() const { return ___options_10; }
	inline uint8_t* get_address_of_options_10() { return &___options_10; }
	inline void set_options_10(uint8_t value)
	{
		___options_10 = value;
	}

	inline static int32_t get_offset_of_basicTypes_13() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___basicTypes_13)); }
	inline BasicList_t2284403912 * get_basicTypes_13() const { return ___basicTypes_13; }
	inline BasicList_t2284403912 ** get_address_of_basicTypes_13() { return &___basicTypes_13; }
	inline void set_basicTypes_13(BasicList_t2284403912 * value)
	{
		___basicTypes_13 = value;
		Il2CppCodeGenWriteBarrier(&___basicTypes_13, value);
	}

	inline static int32_t get_offset_of_types_14() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___types_14)); }
	inline BasicList_t2284403912 * get_types_14() const { return ___types_14; }
	inline BasicList_t2284403912 ** get_address_of_types_14() { return &___types_14; }
	inline void set_types_14(BasicList_t2284403912 * value)
	{
		___types_14 = value;
		Il2CppCodeGenWriteBarrier(&___types_14, value);
	}

	inline static int32_t get_offset_of_metadataTimeoutMilliseconds_15() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___metadataTimeoutMilliseconds_15)); }
	inline int32_t get_metadataTimeoutMilliseconds_15() const { return ___metadataTimeoutMilliseconds_15; }
	inline int32_t* get_address_of_metadataTimeoutMilliseconds_15() { return &___metadataTimeoutMilliseconds_15; }
	inline void set_metadataTimeoutMilliseconds_15(int32_t value)
	{
		___metadataTimeoutMilliseconds_15 = value;
	}

	inline static int32_t get_offset_of_contentionCounter_16() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___contentionCounter_16)); }
	inline int32_t get_contentionCounter_16() const { return ___contentionCounter_16; }
	inline int32_t* get_address_of_contentionCounter_16() { return &___contentionCounter_16; }
	inline void set_contentionCounter_16(int32_t value)
	{
		___contentionCounter_16 = value;
	}

	inline static int32_t get_offset_of_defaultFactory_17() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___defaultFactory_17)); }
	inline MethodInfo_t * get_defaultFactory_17() const { return ___defaultFactory_17; }
	inline MethodInfo_t ** get_address_of_defaultFactory_17() { return &___defaultFactory_17; }
	inline void set_defaultFactory_17(MethodInfo_t * value)
	{
		___defaultFactory_17 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFactory_17, value);
	}

	inline static int32_t get_offset_of_LockContended_18() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549, ___LockContended_18)); }
	inline LockContentedEventHandler_t2250551053 * get_LockContended_18() const { return ___LockContended_18; }
	inline LockContentedEventHandler_t2250551053 ** get_address_of_LockContended_18() { return &___LockContended_18; }
	inline void set_LockContended_18(LockContentedEventHandler_t2250551053 * value)
	{
		___LockContended_18 = value;
		Il2CppCodeGenWriteBarrier(&___LockContended_18, value);
	}
};

struct RuntimeTypeModel_t623319549_StaticFields
{
public:
	// ProtoBuf.Meta.BasicList/MatchPredicate ProtoBuf.Meta.RuntimeTypeModel::MetaTypeFinder
	MatchPredicate_t2181991961 * ___MetaTypeFinder_11;
	// ProtoBuf.Meta.BasicList/MatchPredicate ProtoBuf.Meta.RuntimeTypeModel::BasicTypeFinder
	MatchPredicate_t2181991961 * ___BasicTypeFinder_12;

public:
	inline static int32_t get_offset_of_MetaTypeFinder_11() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549_StaticFields, ___MetaTypeFinder_11)); }
	inline MatchPredicate_t2181991961 * get_MetaTypeFinder_11() const { return ___MetaTypeFinder_11; }
	inline MatchPredicate_t2181991961 ** get_address_of_MetaTypeFinder_11() { return &___MetaTypeFinder_11; }
	inline void set_MetaTypeFinder_11(MatchPredicate_t2181991961 * value)
	{
		___MetaTypeFinder_11 = value;
		Il2CppCodeGenWriteBarrier(&___MetaTypeFinder_11, value);
	}

	inline static int32_t get_offset_of_BasicTypeFinder_12() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t623319549_StaticFields, ___BasicTypeFinder_12)); }
	inline MatchPredicate_t2181991961 * get_BasicTypeFinder_12() const { return ___BasicTypeFinder_12; }
	inline MatchPredicate_t2181991961 ** get_address_of_BasicTypeFinder_12() { return &___BasicTypeFinder_12; }
	inline void set_BasicTypeFinder_12(MatchPredicate_t2181991961 * value)
	{
		___BasicTypeFinder_12 = value;
		Il2CppCodeGenWriteBarrier(&___BasicTypeFinder_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
