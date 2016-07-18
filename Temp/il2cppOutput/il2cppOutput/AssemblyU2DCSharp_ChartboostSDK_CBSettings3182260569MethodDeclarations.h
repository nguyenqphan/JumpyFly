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

// ChartboostSDK.CBSettings
struct CBSettings_t3182260569;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ChartboostSDK.CBSettings::.ctor()
extern "C"  void CBSettings__ctor_m3065844512 (CBSettings_t3182260569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::.cctor()
extern "C"  void CBSettings__cctor_m69803149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChartboostSDK.CBSettings ChartboostSDK.CBSettings::get_Instance()
extern "C"  CBSettings_t3182260569 * CBSettings_get_Instance_m3556416836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::setAppId(System.String,System.String)
extern "C"  void CBSettings_setAppId_m120315680 (Il2CppObject * __this /* static, unused */, String_t* ___appId, String_t* ___appSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetAndroidPlatformIndex(System.Int32)
extern "C"  void CBSettings_SetAndroidPlatformIndex_m1452993857 (CBSettings_t3182260569 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChartboostSDK.CBSettings::get_SelectedAndroidPlatformIndex()
extern "C"  int32_t CBSettings_get_SelectedAndroidPlatformIndex_m55981350 (CBSettings_t3182260569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ChartboostSDK.CBSettings::get_AndroidPlatformLabels()
extern "C"  StringU5BU5D_t2956870243* CBSettings_get_AndroidPlatformLabels_m4148606613 (CBSettings_t3182260569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::set_AndroidPlatformLabels(System.String[])
extern "C"  void CBSettings_set_AndroidPlatformLabels_m3134446622 (CBSettings_t3182260569 * __this, StringU5BU5D_t2956870243* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetIOSAppId(System.String)
extern "C"  void CBSettings_SetIOSAppId_m2755704723 (CBSettings_t3182260569 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getIOSAppId()
extern "C"  String_t* CBSettings_getIOSAppId_m988857952 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetIOSAppSecret(System.String)
extern "C"  void CBSettings_SetIOSAppSecret_m273971934 (CBSettings_t3182260569 * __this, String_t* ___secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getIOSAppSecret()
extern "C"  String_t* CBSettings_getIOSAppSecret_m3673871541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetAndroidAppId(System.String)
extern "C"  void CBSettings_SetAndroidAppId_m3405511797 (CBSettings_t3182260569 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getAndroidAppId()
extern "C"  String_t* CBSettings_getAndroidAppId_m971868606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetAndroidAppSecret(System.String)
extern "C"  void CBSettings_SetAndroidAppSecret_m742293184 (CBSettings_t3182260569 * __this, String_t* ___secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getAndroidAppSecret()
extern "C"  String_t* CBSettings_getAndroidAppSecret_m3171596563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetAmazonAppId(System.String)
extern "C"  void CBSettings_SetAmazonAppId_m2291069608 (CBSettings_t3182260569 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getAmazonAppId()
extern "C"  String_t* CBSettings_getAmazonAppId_m35285609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::SetAmazonAppSecret(System.String)
extern "C"  void CBSettings_SetAmazonAppSecret_m1580540787 (CBSettings_t3182260569 * __this, String_t* ___secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getAmazonAppSecret()
extern "C"  String_t* CBSettings_getAmazonAppSecret_m3979430974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getSelectAndroidAppId()
extern "C"  String_t* CBSettings_getSelectAndroidAppId_m1172067802 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBSettings::getSelectAndroidAppSecret()
extern "C"  String_t* CBSettings_getSelectAndroidAppSecret_m1581127471 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::enableLogging(System.Boolean)
extern "C"  void CBSettings_enableLogging_m3398437041 (Il2CppObject * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBSettings::isLogging()
extern "C"  bool CBSettings_isLogging_m2354089279 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::DirtyEditor()
extern "C"  void CBSettings_DirtyEditor_m2926634653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::CredentialsWarning(System.String,System.String,System.String)
extern "C"  void CBSettings_CredentialsWarning_m3391472150 (Il2CppObject * __this /* static, unused */, String_t* ___warning, String_t* ___platform, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBSettings::resetSettings()
extern "C"  void CBSettings_resetSettings_m1661490544 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
