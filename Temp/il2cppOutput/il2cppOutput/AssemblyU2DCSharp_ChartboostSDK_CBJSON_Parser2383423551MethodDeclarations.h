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

// ChartboostSDK.CBJSON/Parser
struct Parser_t2383423551;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBJSON_Parser_TOKEN80003545.h"

// System.Void ChartboostSDK.CBJSON/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m1590380965 (Parser_t2383423551 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBJSON/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m4264880003 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ChartboostSDK.CBJSON/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m3270739487 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Parser::Dispose()
extern "C"  void Parser_Dispose_m4287007098 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable ChartboostSDK.CBJSON/Parser::ParseObject()
extern "C"  Hashtable_t3875263730 * Parser_ParseObject_m3258348706 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList ChartboostSDK.CBJSON/Parser::ParseArray()
extern "C"  ArrayList_t2121638921 * Parser_ParseArray_m1378491151 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ChartboostSDK.CBJSON/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m3363567248 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ChartboostSDK.CBJSON/Parser::ParseByToken(ChartboostSDK.CBJSON/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m1667976665 (Parser_t2383423551 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBJSON/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m1695214626 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ChartboostSDK.CBJSON/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m715146604 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBJSON/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m2319922768 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ChartboostSDK.CBJSON/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m716163459 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ChartboostSDK.CBJSON/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m3555414299 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBJSON/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m330673930 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChartboostSDK.CBJSON/Parser/TOKEN ChartboostSDK.CBJSON/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3706098195 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
