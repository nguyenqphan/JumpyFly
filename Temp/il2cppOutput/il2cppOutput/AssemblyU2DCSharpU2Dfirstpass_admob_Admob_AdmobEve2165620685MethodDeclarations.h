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

// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t2165620685;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void admob.Admob/AdmobEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AdmobEventHandler__ctor_m890673333 (AdmobEventHandler_t2165620685 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobEventHandler::Invoke(System.String,System.String)
extern "C"  void AdmobEventHandler_Invoke_m3282322703 (AdmobEventHandler_t2165620685 * __this, String_t* ___eventName, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AdmobEventHandler_t2165620685(Il2CppObject* delegate, String_t* ___eventName, String_t* ___msg);
// System.IAsyncResult admob.Admob/AdmobEventHandler::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AdmobEventHandler_BeginInvoke_m512766692 (AdmobEventHandler_t2165620685 * __this, String_t* ___eventName, String_t* ___msg, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void admob.Admob/AdmobEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AdmobEventHandler_EndInvoke_m1670688069 (AdmobEventHandler_t2165620685 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
