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

// ChartboostSDK.CBExternal
struct CBExternal_t4221835521;
// System.String
struct String_t;
// ChartboostSDK.CBLocation
struct CBLocation_t3648673003;
// ChartboostSDK.CBInPlay
struct CBInPlay_t2441280239;
// ChartboostSDK.CBMediation
struct CBMediation_t626154256;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBStatusBarBehavio1280365899.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBLocation3648673003.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBLevelType1123510006.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBMediation626154256.h"

// System.Void ChartboostSDK.CBExternal::.ctor()
extern "C"  void CBExternal__ctor_m109348984 (CBExternal_t4221835521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::.cctor()
extern "C"  void CBExternal__cctor_m2907722293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::Log(System.String)
extern "C"  void CBExternal_Log_m3642673192 (Il2CppObject * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::isInitialized()
extern "C"  bool CBExternal_isInitialized_m1974179148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::checkInitialized()
extern "C"  bool CBExternal_checkInitialized_m2772126604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostInit(System.String,System.String,System.String)
extern "C"  void CBExternal__chartBoostInit_m2116954384 (Il2CppObject * __this /* static, unused */, String_t* ___appId, String_t* ___appSignature, String_t* ___unityVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::_chartBoostIsAnyViewVisible()
extern "C"  bool CBExternal__chartBoostIsAnyViewVisible_m143725425 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostCacheInterstitial(System.String)
extern "C"  void CBExternal__chartBoostCacheInterstitial_m532852844 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::_chartBoostHasInterstitial(System.String)
extern "C"  bool CBExternal__chartBoostHasInterstitial_m3335923040 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostShowInterstitial(System.String)
extern "C"  void CBExternal__chartBoostShowInterstitial_m1634241599 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostCacheRewardedVideo(System.String)
extern "C"  void CBExternal__chartBoostCacheRewardedVideo_m4259992669 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::_chartBoostHasRewardedVideo(System.String)
extern "C"  bool CBExternal__chartBoostHasRewardedVideo_m960855529 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostShowRewardedVideo(System.String)
extern "C"  void CBExternal__chartBoostShowRewardedVideo_m4043305706 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostCacheMoreApps(System.String)
extern "C"  void CBExternal__chartBoostCacheMoreApps_m1915668049 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::_chartBoostHasMoreApps(System.String)
extern "C"  bool CBExternal__chartBoostHasMoreApps_m3565868357 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostShowMoreApps(System.String)
extern "C"  void CBExternal__chartBoostShowMoreApps_m887718820 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostCacheInPlay(System.String)
extern "C"  void CBExternal__chartBoostCacheInPlay_m2006103871 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::_chartBoostHasInPlay(System.String)
extern "C"  bool CBExternal__chartBoostHasInPlay_m4224578355 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr ChartboostSDK.CBExternal::_chartBoostGetInPlay(System.String)
extern "C"  IntPtr_t CBExternal__chartBoostGetInPlay_m1018387158 (Il2CppObject * __this /* static, unused */, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetCustomId(System.String)
extern "C"  void CBExternal__chartBoostSetCustomId_m728178700 (Il2CppObject * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostDidPassAgeGate(System.Boolean)
extern "C"  void CBExternal__chartBoostDidPassAgeGate_m1014852715 (Il2CppObject * __this /* static, unused */, bool ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBExternal::_chartBoostGetCustomId()
extern "C"  String_t* CBExternal__chartBoostGetCustomId_m3032454157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostHandleOpenURL(System.String,System.String)
extern "C"  void CBExternal__chartBoostHandleOpenURL_m1537660633 (Il2CppObject * __this /* static, unused */, String_t* ___url, String_t* ___sourceApp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetShouldPauseClickForConfirmation(System.Boolean)
extern "C"  void CBExternal__chartBoostSetShouldPauseClickForConfirmation_m1516290472 (Il2CppObject * __this /* static, unused */, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetShouldRequestInterstitialsInFirstSession(System.Boolean)
extern "C"  void CBExternal__chartBoostSetShouldRequestInterstitialsInFirstSession_m2685071479 (Il2CppObject * __this /* static, unused */, bool ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostShouldDisplayInterstitialCallbackResult(System.Boolean)
extern "C"  void CBExternal__chartBoostShouldDisplayInterstitialCallbackResult_m4020113980 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostShouldDisplayRewardedVideoCallbackResult(System.Boolean)
extern "C"  void CBExternal__chartBoostShouldDisplayRewardedVideoCallbackResult_m3352223281 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostShouldDisplayMoreAppsCallbackResult(System.Boolean)
extern "C"  void CBExternal__chartBoostShouldDisplayMoreAppsCallbackResult_m4135404599 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::_chartBoostGetAutoCacheAds()
extern "C"  bool CBExternal__chartBoostGetAutoCacheAds_m3713487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetAutoCacheAds(System.Boolean)
extern "C"  void CBExternal__chartBoostSetAutoCacheAds_m4179892062 (Il2CppObject * __this /* static, unused */, bool ___autoCacheAds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetShouldDisplayLoadingViewForMoreApps(System.Boolean)
extern "C"  void CBExternal__chartBoostSetShouldDisplayLoadingViewForMoreApps_m3298429837 (Il2CppObject * __this /* static, unused */, bool ___shouldDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetShouldPrefetchVideoContent(System.Boolean)
extern "C"  void CBExternal__chartBoostSetShouldPrefetchVideoContent_m1353746025 (Il2CppObject * __this /* static, unused */, bool ___shouldDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostTrackInAppPurchaseEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void CBExternal__chartBoostTrackInAppPurchaseEvent_m184210046 (Il2CppObject * __this /* static, unused */, String_t* ___receipt, String_t* ___productTitle, String_t* ___productDescription, String_t* ___productPrice, String_t* ___productCurrency, String_t* ___productIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetGameObjectName(System.String)
extern "C"  void CBExternal__chartBoostSetGameObjectName_m1025634620 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetStatusBarBehavior(ChartboostSDK.CBStatusBarBehavior)
extern "C"  void CBExternal__chartBoostSetStatusBarBehavior_m54653996 (Il2CppObject * __this /* static, unused */, int32_t ___statusBarBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostTrackLevelInfo(System.String,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  void CBExternal__chartBoostTrackLevelInfo_m3260920402 (Il2CppObject * __this /* static, unused */, String_t* ___eventLabel, int32_t ___levelType, int32_t ___mainLevel, int32_t ___subLevel, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::_chartBoostSetMediation(System.Int32,System.String)
extern "C"  void CBExternal__chartBoostSetMediation_m1456191645 (Il2CppObject * __this /* static, unused */, int32_t ___mediator, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::init()
extern "C"  void CBExternal_init_m1425386172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::initWithAppId(System.String,System.String)
extern "C"  void CBExternal_initWithAppId_m3911413826 (Il2CppObject * __this /* static, unused */, String_t* ___appId, String_t* ___appSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::destroy()
extern "C"  void CBExternal_destroy_m1635354096 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::isAnyViewVisible()
extern "C"  bool CBExternal_isAnyViewVisible_m1684598635 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::cacheInterstitial(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_cacheInterstitial_m3326226871 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::hasInterstitial(ChartboostSDK.CBLocation)
extern "C"  bool CBExternal_hasInterstitial_m331862235 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::showInterstitial(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_showInterstitial_m3699874280 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::cacheMoreApps(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_cacheMoreApps_m1012806066 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::hasMoreApps(ChartboostSDK.CBLocation)
extern "C"  bool CBExternal_hasMoreApps_m1136198358 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::showMoreApps(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_showMoreApps_m3132709475 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::cacheInPlay(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_cacheInPlay_m3100472196 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::hasInPlay(ChartboostSDK.CBLocation)
extern "C"  bool CBExternal_hasInPlay_m2251439528 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChartboostSDK.CBInPlay ChartboostSDK.CBExternal::getInPlay(ChartboostSDK.CBLocation)
extern "C"  CBInPlay_t2441280239 * CBExternal_getInPlay_m638673836 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::cacheRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_cacheRewardedVideo_m2693756554 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::hasRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  bool CBExternal_hasRewardedVideo_m62766054 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::showRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void CBExternal_showRewardedVideo_m1391924345 (Il2CppObject * __this /* static, unused */, CBLocation_t3648673003 * ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::chartBoostShouldDisplayInterstitialCallbackResult(System.Boolean)
extern "C"  void CBExternal_chartBoostShouldDisplayInterstitialCallbackResult_m505555205 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::chartBoostShouldDisplayRewardedVideoCallbackResult(System.Boolean)
extern "C"  void CBExternal_chartBoostShouldDisplayRewardedVideoCallbackResult_m1775083656 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::chartBoostShouldDisplayMoreAppsCallbackResult(System.Boolean)
extern "C"  void CBExternal_chartBoostShouldDisplayMoreAppsCallbackResult_m3055953792 (Il2CppObject * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setCustomId(System.String)
extern "C"  void CBExternal_setCustomId_m1116450846 (Il2CppObject * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChartboostSDK.CBExternal::getCustomId()
extern "C"  String_t* CBExternal_getCustomId_m2386884565 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::didPassAgeGate(System.Boolean)
extern "C"  void CBExternal_didPassAgeGate_m265790333 (Il2CppObject * __this /* static, unused */, bool ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::handleOpenURL(System.String,System.String)
extern "C"  void CBExternal_handleOpenURL_m3818717931 (Il2CppObject * __this /* static, unused */, String_t* ___url, String_t* ___sourceApp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setShouldPauseClickForConfirmation(System.Boolean)
extern "C"  void CBExternal_setShouldPauseClickForConfirmation_m3157965754 (Il2CppObject * __this /* static, unused */, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setShouldRequestInterstitialsInFirstSession(System.Boolean)
extern "C"  void CBExternal_setShouldRequestInterstitialsInFirstSession_m670313125 (Il2CppObject * __this /* static, unused */, bool ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setGameObjectName(System.String)
extern "C"  void CBExternal_setGameObjectName_m2731191246 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChartboostSDK.CBExternal::getAutoCacheAds()
extern "C"  bool CBExternal_getAutoCacheAds_m2824365717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setAutoCacheAds(System.Boolean)
extern "C"  void CBExternal_setAutoCacheAds_m2433794700 (Il2CppObject * __this /* static, unused */, bool ___autoCacheAds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setStatusBarBehavior(ChartboostSDK.CBStatusBarBehavior)
extern "C"  void CBExternal_setStatusBarBehavior_m2605413722 (Il2CppObject * __this /* static, unused */, int32_t ___statusBarBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setShouldDisplayLoadingViewForMoreApps(System.Boolean)
extern "C"  void CBExternal_setShouldDisplayLoadingViewForMoreApps_m1441049759 (Il2CppObject * __this /* static, unused */, bool ___shouldDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setShouldPrefetchVideoContent(System.Boolean)
extern "C"  void CBExternal_setShouldPrefetchVideoContent_m1359153431 (Il2CppObject * __this /* static, unused */, bool ___shouldPrefetch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::trackLevelInfo(System.String,ChartboostSDK.CBLevelType,System.Int32,System.Int32,System.String)
extern "C"  void CBExternal_trackLevelInfo_m1797684049 (Il2CppObject * __this /* static, unused */, String_t* ___eventLabel, int32_t ___type, int32_t ___mainLevel, int32_t ___subLevel, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::trackLevelInfo(System.String,ChartboostSDK.CBLevelType,System.Int32,System.String)
extern "C"  void CBExternal_trackLevelInfo_m3537434878 (Il2CppObject * __this /* static, unused */, String_t* ___eventLabel, int32_t ___type, int32_t ___mainLevel, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::trackInAppAppleStorePurchaseEvent(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void CBExternal_trackInAppAppleStorePurchaseEvent_m1837723415 (Il2CppObject * __this /* static, unused */, String_t* ___receipt, String_t* ___productTitle, String_t* ___productDescription, String_t* ___productPrice, String_t* ___productCurrency, String_t* ___productIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChartboostSDK.CBExternal::setMediation(ChartboostSDK.CBMediation,System.String)
extern "C"  void CBExternal_setMediation_m2149570700 (Il2CppObject * __this /* static, unused */, CBMediation_t626154256 * ___mediator, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
