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

// AdManager
struct AdManager_t3461832170;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void AdManager::.ctor()
extern "C"  void AdManager__ctor_m3655188161 (AdManager_t3461832170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdManager::Start()
extern "C"  void AdManager_Start_m2602325953 (AdManager_t3461832170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdManager::ShowInterstitialAd()
extern "C"  void AdManager_ShowInterstitialAd_m3738564783 (AdManager_t3461832170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdManager::onInterstitialEvent(System.String,System.String)
extern "C"  void AdManager_onInterstitialEvent_m3865918608 (AdManager_t3461832170 * __this, String_t* ___eventName, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
