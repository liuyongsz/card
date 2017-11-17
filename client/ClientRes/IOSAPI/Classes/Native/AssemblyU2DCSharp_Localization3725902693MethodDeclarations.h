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

// Localization
struct Localization_t3725902693;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t3557165234;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// BetterList`1<System.String>
struct BetterList_1_t2249608875;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TextAsset3973159845.h"

// System.Void Localization::.ctor()
extern "C"  void Localization__ctor_m3434466340 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::.cctor()
extern "C"  void Localization__cctor_m3948752887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::get_dictionary()
extern "C"  Dictionary_2_t3557165234 * Localization_get_dictionary_m669170931 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C"  bool Localization_get_isActive_m797147515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Localization Localization::get_instance()
extern "C"  Localization_t3725902693 * Localization_get_instance_m2444447832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Awake()
extern "C"  void Localization_Awake_m1548821649 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnEnable()
extern "C"  void Localization_OnEnable_m1082054052 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnDisable()
extern "C"  void Localization_OnDisable_m1811369041 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnDestroy()
extern "C"  void Localization_OnDestroy_m2230356739 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_currentLanguage()
extern "C"  String_t* Localization_get_currentLanguage_m3058444479 (Localization_t3725902693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_currentLanguage(System.String)
extern "C"  void Localization_set_currentLanguage_m3062683958 (Localization_t3725902693 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_language()
extern "C"  String_t* Localization_get_language_m3627480640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_language(System.String)
extern "C"  void Localization_set_language_m2466243221 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C"  void Localization_Load_m1254693088 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(UnityEngine.TextAsset)
extern "C"  bool Localization_LoadCSV_m1341654792 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::SelectLanguage(System.String)
extern "C"  bool Localization_SelectLanguage_m1876203060 (Il2CppObject * __this /* static, unused */, String_t* ___language0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::AddCSV(BetterList`1<System.String>)
extern "C"  void Localization_AddCSV_m3883760888 (Il2CppObject * __this /* static, unused */, BetterList_1_t2249608875 * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Localization_Set_m3244698987 (Il2CppObject * __this /* static, unused */, String_t* ___languageName0, Dictionary_2_t3943999495 * ___dictionary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C"  String_t* Localization_Get_m685709977 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C"  String_t* Localization_Localize_m2724461702 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::Exists(System.String)
extern "C"  bool Localization_Exists_m4079318430 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
