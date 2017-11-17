﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.SkeletonBinary
struct SkeletonBinary_t2375091280;
// Spine.Atlas[]
struct AtlasU5BU5D_t3222283718;
// Spine.AttachmentLoader
struct AttachmentLoader_t459554434;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// Spine.Skin
struct Skin_t730126667;
// Spine.Attachment
struct Attachment_t2584075367;
// Spine.SkeletonBinary/Vertices
struct Vertices_t351009333;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Spine.CurveTimeline
struct CurveTimeline_t835389450;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_SkeletonData548167897.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skin730126667.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_CurveTimeline835389450.h"

// System.Void Spine.SkeletonBinary::.ctor(Spine.Atlas[])
extern "C"  void SkeletonBinary__ctor_m2838296490 (SkeletonBinary_t2375091280 * __this, AtlasU5BU5D_t3222283718* ___atlasArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::.ctor(Spine.AttachmentLoader)
extern "C"  void SkeletonBinary__ctor_m3917883207 (SkeletonBinary_t2375091280 * __this, Il2CppObject * ___attachmentLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::.cctor()
extern "C"  void SkeletonBinary__cctor_m2976014735 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBinary::get_Scale()
extern "C"  float SkeletonBinary_get_Scale_m4263289795 (SkeletonBinary_t2375091280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::set_Scale(System.Single)
extern "C"  void SkeletonBinary_set_Scale_m192273480 (SkeletonBinary_t2375091280 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonBinary::ReadSkeletonData(System.String)
extern "C"  SkeletonData_t548167897 * SkeletonBinary_ReadSkeletonData_m2183284426 (SkeletonBinary_t2375091280 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.SkeletonBinary::GetVersionString(System.IO.Stream)
extern "C"  String_t* SkeletonBinary_GetVersionString_m4125256355 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.SkeletonBinary::ReadSkeletonData(System.IO.Stream)
extern "C"  SkeletonData_t548167897 * SkeletonBinary_ReadSkeletonData_m2155748605 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.SkeletonBinary::ReadSkin(System.IO.Stream,Spine.SkeletonData,System.String,System.Boolean)
extern "C"  Skin_t730126667 * SkeletonBinary_ReadSkin_m1712293058 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, SkeletonData_t548167897 * ___skeletonData1, String_t* ___skinName2, bool ___nonessential3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.SkeletonBinary::ReadAttachment(System.IO.Stream,Spine.SkeletonData,Spine.Skin,System.Int32,System.String,System.Boolean)
extern "C"  Attachment_t2584075367 * SkeletonBinary_ReadAttachment_m4046556095 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, SkeletonData_t548167897 * ___skeletonData1, Skin_t730126667 * ___skin2, int32_t ___slotIndex3, String_t* ___attachmentName4, bool ___nonessential5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonBinary/Vertices Spine.SkeletonBinary::ReadVertices(System.IO.Stream,System.Int32)
extern "C"  Vertices_t351009333 * SkeletonBinary_ReadVertices_m3149188417 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, int32_t ___vertexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.SkeletonBinary::ReadFloatArray(System.IO.Stream,System.Int32,System.Single)
extern "C"  SingleU5BU5D_t577127397* SkeletonBinary_ReadFloatArray_m2821264798 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, int32_t ___n1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.SkeletonBinary::ReadShortArray(System.IO.Stream)
extern "C"  Int32U5BU5D_t3030399641* SkeletonBinary_ReadShortArray_m992847682 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::ReadAnimation(System.String,System.IO.Stream,Spine.SkeletonData)
extern "C"  void SkeletonBinary_ReadAnimation_m1630073575 (SkeletonBinary_t2375091280 * __this, String_t* ___name0, Stream_t3255436806 * ___input1, SkeletonData_t548167897 * ___skeletonData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::ReadCurve(System.IO.Stream,System.Int32,Spine.CurveTimeline)
extern "C"  void SkeletonBinary_ReadCurve_m4225375910 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, int32_t ___frameIndex1, CurveTimeline_t835389450 * ___timeline2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Spine.SkeletonBinary::ReadSByte(System.IO.Stream)
extern "C"  int8_t SkeletonBinary_ReadSByte_m25158305 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBinary::ReadBoolean(System.IO.Stream)
extern "C"  bool SkeletonBinary_ReadBoolean_m896972865 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBinary::ReadFloat(System.IO.Stream)
extern "C"  float SkeletonBinary_ReadFloat_m3100448791 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonBinary::ReadInt(System.IO.Stream)
extern "C"  int32_t SkeletonBinary_ReadInt_m1359822670 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonBinary::ReadVarint(System.IO.Stream,System.Boolean)
extern "C"  int32_t SkeletonBinary_ReadVarint_m3094541538 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, bool ___optimizePositive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.SkeletonBinary::ReadString(System.IO.Stream)
extern "C"  String_t* SkeletonBinary_ReadString_m3476418173 (SkeletonBinary_t2375091280 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBinary::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void SkeletonBinary_ReadFully_m4218369862 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
