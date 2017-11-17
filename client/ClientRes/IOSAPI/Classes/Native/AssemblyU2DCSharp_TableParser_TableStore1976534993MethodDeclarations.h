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

// TableParser/TableStore
struct TableStore_t1976534993;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void TableParser/TableStore::.ctor()
extern "C"  void TableStore__ctor_m1883721048 (TableStore_t1976534993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableParser/TableStore::SetHeader(System.String[])
extern "C"  void TableStore_SetHeader_m641841641 (TableStore_t1976534993 * __this, StringU5BU5D_t1642385972* ___strHeaderGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableParser/TableStore::SetDesc(System.String[])
extern "C"  void TableStore_SetDesc_m2539895675 (TableStore_t1976534993 * __this, StringU5BU5D_t1642385972* ___strdescGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TableParser/TableStore::SetContent(System.String[])
extern "C"  void TableStore_SetContent_m1130699083 (TableStore_t1976534993 * __this, StringU5BU5D_t1642385972* ___strContentGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TableParser/TableStore::GetRows()
extern "C"  int32_t TableStore_GetRows_m467383809 (TableStore_t1976534993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TableParser/TableStore::GetHeaderIndex(System.String)
extern "C"  int32_t TableStore_GetHeaderIndex_m2445105251 (TableStore_t1976534993 * __this, String_t* ___strHeader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TableParser/TableStore::GetHeaderDesc(System.String)
extern "C"  int32_t TableStore_GetHeaderDesc_m118194148 (TableStore_t1976534993 * __this, String_t* ___strHeader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TableParser/TableStore::GetText(System.String,System.Int32)
extern "C"  String_t* TableStore_GetText_m3182803113 (TableStore_t1976534993 * __this, String_t* ___strHeader0, int32_t ___iRow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TableParser/TableStore::GetText(System.Int32,System.Int32)
extern "C"  String_t* TableStore_GetText_m2451038664 (TableStore_t1976534993 * __this, int32_t ___iHeader0, int32_t ___iRow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
