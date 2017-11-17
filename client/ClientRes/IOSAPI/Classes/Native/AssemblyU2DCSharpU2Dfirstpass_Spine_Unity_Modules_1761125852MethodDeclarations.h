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

// Spine.Unity.Modules.SkeletonGhost
struct SkeletonGhost_t1761125852;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Event1819867114.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Unity.Modules.SkeletonGhost::.ctor()
extern "C"  void SkeletonGhost__ctor_m3539971100 (SkeletonGhost_t1761125852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::Start()
extern "C"  void SkeletonGhost_Start_m130870272 (SkeletonGhost_t1761125852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::OnEvent(Spine.TrackEntry,Spine.Event)
extern "C"  void SkeletonGhost_OnEvent_m3481892514 (SkeletonGhost_t1761125852 * __this, TrackEntry_t4106063311 * ___trackEntry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::Ghosting(System.Single)
extern "C"  void SkeletonGhost_Ghosting_m415598492 (SkeletonGhost_t1761125852 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::Update()
extern "C"  void SkeletonGhost_Update_m412860567 (SkeletonGhost_t1761125852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonGhost::OnDestroy()
extern "C"  void SkeletonGhost_OnDestroy_m549299601 (SkeletonGhost_t1761125852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 Spine.Unity.Modules.SkeletonGhost::HexToColor(System.String)
extern "C"  Color32_t874517518  SkeletonGhost_HexToColor_m3412938583 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
