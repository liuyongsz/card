#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_BclHelpers_NetObjectOpti459826500.h"

// System.Void ProtoBuf.BclHelpers::.cctor()
extern "C"  void BclHelpers__cctor_m3432372773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.BclHelpers::GetUninitializedObject(System.Type)
extern "C"  Il2CppObject * BclHelpers_GetUninitializedObject_m1777258176 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BclHelpers::WriteTimeSpan(System.TimeSpan,ProtoBuf.ProtoWriter)
extern "C"  void BclHelpers_WriteTimeSpan_m104468438 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___timeSpan0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan ProtoBuf.BclHelpers::ReadTimeSpan(ProtoBuf.ProtoReader)
extern "C"  TimeSpan_t3430258949  BclHelpers_ReadTimeSpan_m3127074156 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ProtoBuf.BclHelpers::ReadDateTime(ProtoBuf.ProtoReader)
extern "C"  DateTime_t693205669  BclHelpers_ReadDateTime_m859622700 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BclHelpers::WriteDateTime(System.DateTime,ProtoBuf.ProtoWriter)
extern "C"  void BclHelpers_WriteDateTime_m107945110 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ProtoBuf.BclHelpers::ReadTimeSpanTicks(ProtoBuf.ProtoReader)
extern "C"  int64_t BclHelpers_ReadTimeSpanTicks_m1029162446 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal ProtoBuf.BclHelpers::ReadDecimal(ProtoBuf.ProtoReader)
extern "C"  Decimal_t724701077  BclHelpers_ReadDecimal_m3471327980 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BclHelpers::WriteDecimal(System.Decimal,ProtoBuf.ProtoWriter)
extern "C"  void BclHelpers_WriteDecimal_m1187946902 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BclHelpers::WriteGuid(System.Guid,ProtoBuf.ProtoWriter)
extern "C"  void BclHelpers_WriteGuid_m1623958742 (Il2CppObject * __this /* static, unused */, Guid_t2533601593  ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid ProtoBuf.BclHelpers::ReadGuid(ProtoBuf.ProtoReader)
extern "C"  Guid_t2533601593  BclHelpers_ReadGuid_m3735528620 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.BclHelpers::ReadNetObject(System.Object,ProtoBuf.ProtoReader,System.Int32,System.Type,ProtoBuf.BclHelpers/NetObjectOptions)
extern "C"  Il2CppObject * BclHelpers_ReadNetObject_m1005425153 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, int32_t ___key2, Type_t * ___type3, uint8_t ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BclHelpers::WriteNetObject(System.Object,ProtoBuf.ProtoWriter,System.Int32,ProtoBuf.BclHelpers/NetObjectOptions)
extern "C"  void BclHelpers_WriteNetObject_m3187613170 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, int32_t ___key2, uint8_t ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
