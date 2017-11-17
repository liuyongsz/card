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

// AudioConfig
struct AudioConfig_t2898708572;
// AudioCfg
struct AudioCfg_t138726916;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AudioCfg138726916.h"

// System.Void AudioConfig::.ctor()
extern "C"  void AudioConfig__ctor_m2070305179 (AudioConfig_t2898708572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioConfig::.cctor()
extern "C"  void AudioConfig__cctor_m1843536650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioConfig::OnLoad()
extern "C"  void AudioConfig_OnLoad_m1481225418 (AudioConfig_t2898708572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioConfig::OnUnload()
extern "C"  void AudioConfig_OnUnload_m678524019 (AudioConfig_t2898708572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioConfig::OnReadRow(AudioCfg)
extern "C"  void AudioConfig_OnReadRow_m1876169952 (AudioConfig_t2898708572 * __this, AudioCfg_t138726916 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AudioCfg AudioConfig::GetConfig(System.Int32)
extern "C"  AudioCfg_t138726916 * AudioConfig_GetConfig_m1962553049 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
