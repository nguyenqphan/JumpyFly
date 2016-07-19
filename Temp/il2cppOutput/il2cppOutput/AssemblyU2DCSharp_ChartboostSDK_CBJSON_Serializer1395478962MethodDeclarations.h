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

// ChartboostSDK.CBJSON/Serializer
struct Serializer_t1395478962;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_String968488902.h"

// System.Void ChartboostSDK.CBJSON/Serializer::.ctor()
extern "C"  void Serializer__ctor_m972766186 (Serializer_t1395478962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBJSON/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m817915241 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m3281656937 (Serializer_t1395478962 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Serializer::SerializeObject(System.Collections.Hashtable)
extern "C"  void Serializer_SerializeObject_m1777395455 (Serializer_t1395478962 * __this, Hashtable_t3875263730 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Serializer::SerializeArray(System.Collections.ArrayList)
extern "C"  void Serializer_SerializeArray_m283604980 (Serializer_t1395478962 * __this, ArrayList_t2121638921 * ___anArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3350831241 (Serializer_t1395478962 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m156589290 (Serializer_t1395478962 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
