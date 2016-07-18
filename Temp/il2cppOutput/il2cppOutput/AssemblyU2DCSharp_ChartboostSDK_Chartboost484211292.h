#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PanelController
struct PanelController_t2622049440;
// UpdateScore
struct UpdateScore_t1082839849;
// ChartboostSDK.Chartboost
struct Chartboost_t484211292;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Func`2<ChartboostSDK.CBLocation,System.Boolean>
struct Func_2_t1882026158;
// System.Action`1<ChartboostSDK.CBLocation>
struct Action_1_t3797125708;
// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError>
struct Action_2_t1255075070;
// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBClickError>
struct Action_2_t3254535421;
// System.Action`2<ChartboostSDK.CBLocation,System.Int32>
struct Action_2_t2193144874;
// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChartboostSDK.Chartboost
struct  Chartboost_t484211292  : public MonoBehaviour_t3012272455
{
public:
	// PanelController ChartboostSDK.Chartboost::panelController
	PanelController_t2622049440 * ___panelController_2;
	// UpdateScore ChartboostSDK.Chartboost::updateScore
	UpdateScore_t1082839849 * ___updateScore_3;

public:
	inline static int32_t get_offset_of_panelController_2() { return static_cast<int32_t>(offsetof(Chartboost_t484211292, ___panelController_2)); }
	inline PanelController_t2622049440 * get_panelController_2() const { return ___panelController_2; }
	inline PanelController_t2622049440 ** get_address_of_panelController_2() { return &___panelController_2; }
	inline void set_panelController_2(PanelController_t2622049440 * value)
	{
		___panelController_2 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_2, value);
	}

	inline static int32_t get_offset_of_updateScore_3() { return static_cast<int32_t>(offsetof(Chartboost_t484211292, ___updateScore_3)); }
	inline UpdateScore_t1082839849 * get_updateScore_3() const { return ___updateScore_3; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_3() { return &___updateScore_3; }
	inline void set_updateScore_3(UpdateScore_t1082839849 * value)
	{
		___updateScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_3, value);
	}
};

struct Chartboost_t484211292_StaticFields
{
public:
	// System.Boolean ChartboostSDK.Chartboost::showingAgeGate
	bool ___showingAgeGate_4;
	// ChartboostSDK.Chartboost ChartboostSDK.Chartboost::instance
	Chartboost_t484211292 * ___instance_5;
	// System.Boolean ChartboostSDK.Chartboost::isPaused
	bool ___isPaused_6;
	// System.Boolean ChartboostSDK.Chartboost::shouldPause
	bool ___shouldPause_7;
	// System.Single ChartboostSDK.Chartboost::lastTimeScale
	float ___lastTimeScale_8;
	// UnityEngine.EventSystems.EventSystem ChartboostSDK.Chartboost::kEventSystem
	EventSystem_t409518532 * ___kEventSystem_9;
	// System.Action`1<System.Boolean> ChartboostSDK.Chartboost::didInitialize
	Action_1_t359458046 * ___didInitialize_10;
	// System.Func`2<ChartboostSDK.CBLocation,System.Boolean> ChartboostSDK.Chartboost::shouldDisplayInterstitial
	Func_2_t1882026158 * ___shouldDisplayInterstitial_11;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDisplayInterstitial
	Action_1_t3797125708 * ___didDisplayInterstitial_12;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheInterstitial
	Action_1_t3797125708 * ___didCacheInterstitial_13;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didClickInterstitial
	Action_1_t3797125708 * ___didClickInterstitial_14;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCloseInterstitial
	Action_1_t3797125708 * ___didCloseInterstitial_15;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDismissInterstitial
	Action_1_t3797125708 * ___didDismissInterstitial_16;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadInterstitial
	Action_2_t1255075070 * ___didFailToLoadInterstitial_17;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBClickError> ChartboostSDK.Chartboost::didFailToRecordClick
	Action_2_t3254535421 * ___didFailToRecordClick_18;
	// System.Func`2<ChartboostSDK.CBLocation,System.Boolean> ChartboostSDK.Chartboost::shouldDisplayMoreApps
	Func_2_t1882026158 * ___shouldDisplayMoreApps_19;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDisplayMoreApps
	Action_1_t3797125708 * ___didDisplayMoreApps_20;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheMoreApps
	Action_1_t3797125708 * ___didCacheMoreApps_21;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didClickMoreApps
	Action_1_t3797125708 * ___didClickMoreApps_22;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCloseMoreApps
	Action_1_t3797125708 * ___didCloseMoreApps_23;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDismissMoreApps
	Action_1_t3797125708 * ___didDismissMoreApps_24;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadMoreApps
	Action_2_t1255075070 * ___didFailToLoadMoreApps_25;
	// System.Func`2<ChartboostSDK.CBLocation,System.Boolean> ChartboostSDK.Chartboost::shouldDisplayRewardedVideo
	Func_2_t1882026158 * ___shouldDisplayRewardedVideo_26;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDisplayRewardedVideo
	Action_1_t3797125708 * ___didDisplayRewardedVideo_27;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheRewardedVideo
	Action_1_t3797125708 * ___didCacheRewardedVideo_28;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didClickRewardedVideo
	Action_1_t3797125708 * ___didClickRewardedVideo_29;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCloseRewardedVideo
	Action_1_t3797125708 * ___didCloseRewardedVideo_30;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didDismissRewardedVideo
	Action_1_t3797125708 * ___didDismissRewardedVideo_31;
	// System.Action`2<ChartboostSDK.CBLocation,System.Int32> ChartboostSDK.Chartboost::didCompleteRewardedVideo
	Action_2_t2193144874 * ___didCompleteRewardedVideo_32;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadRewardedVideo
	Action_2_t1255075070 * ___didFailToLoadRewardedVideo_33;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::didCacheInPlay
	Action_1_t3797125708 * ___didCacheInPlay_34;
	// System.Action`2<ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError> ChartboostSDK.Chartboost::didFailToLoadInPlay
	Action_2_t1255075070 * ___didFailToLoadInPlay_35;
	// System.Action`1<ChartboostSDK.CBLocation> ChartboostSDK.Chartboost::willDisplayVideo
	Action_1_t3797125708 * ___willDisplayVideo_36;
	// System.Action ChartboostSDK.Chartboost::didPauseClickForConfirmation
	Action_t437523947 * ___didPauseClickForConfirmation_37;
	// System.Action ChartboostSDK.Chartboost::didCompleteAppStoreSheetFlow
	Action_t437523947 * ___didCompleteAppStoreSheetFlow_38;

public:
	inline static int32_t get_offset_of_showingAgeGate_4() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___showingAgeGate_4)); }
	inline bool get_showingAgeGate_4() const { return ___showingAgeGate_4; }
	inline bool* get_address_of_showingAgeGate_4() { return &___showingAgeGate_4; }
	inline void set_showingAgeGate_4(bool value)
	{
		___showingAgeGate_4 = value;
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___instance_5)); }
	inline Chartboost_t484211292 * get_instance_5() const { return ___instance_5; }
	inline Chartboost_t484211292 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(Chartboost_t484211292 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_isPaused_6() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___isPaused_6)); }
	inline bool get_isPaused_6() const { return ___isPaused_6; }
	inline bool* get_address_of_isPaused_6() { return &___isPaused_6; }
	inline void set_isPaused_6(bool value)
	{
		___isPaused_6 = value;
	}

	inline static int32_t get_offset_of_shouldPause_7() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___shouldPause_7)); }
	inline bool get_shouldPause_7() const { return ___shouldPause_7; }
	inline bool* get_address_of_shouldPause_7() { return &___shouldPause_7; }
	inline void set_shouldPause_7(bool value)
	{
		___shouldPause_7 = value;
	}

	inline static int32_t get_offset_of_lastTimeScale_8() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___lastTimeScale_8)); }
	inline float get_lastTimeScale_8() const { return ___lastTimeScale_8; }
	inline float* get_address_of_lastTimeScale_8() { return &___lastTimeScale_8; }
	inline void set_lastTimeScale_8(float value)
	{
		___lastTimeScale_8 = value;
	}

	inline static int32_t get_offset_of_kEventSystem_9() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___kEventSystem_9)); }
	inline EventSystem_t409518532 * get_kEventSystem_9() const { return ___kEventSystem_9; }
	inline EventSystem_t409518532 ** get_address_of_kEventSystem_9() { return &___kEventSystem_9; }
	inline void set_kEventSystem_9(EventSystem_t409518532 * value)
	{
		___kEventSystem_9 = value;
		Il2CppCodeGenWriteBarrier(&___kEventSystem_9, value);
	}

	inline static int32_t get_offset_of_didInitialize_10() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didInitialize_10)); }
	inline Action_1_t359458046 * get_didInitialize_10() const { return ___didInitialize_10; }
	inline Action_1_t359458046 ** get_address_of_didInitialize_10() { return &___didInitialize_10; }
	inline void set_didInitialize_10(Action_1_t359458046 * value)
	{
		___didInitialize_10 = value;
		Il2CppCodeGenWriteBarrier(&___didInitialize_10, value);
	}

	inline static int32_t get_offset_of_shouldDisplayInterstitial_11() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___shouldDisplayInterstitial_11)); }
	inline Func_2_t1882026158 * get_shouldDisplayInterstitial_11() const { return ___shouldDisplayInterstitial_11; }
	inline Func_2_t1882026158 ** get_address_of_shouldDisplayInterstitial_11() { return &___shouldDisplayInterstitial_11; }
	inline void set_shouldDisplayInterstitial_11(Func_2_t1882026158 * value)
	{
		___shouldDisplayInterstitial_11 = value;
		Il2CppCodeGenWriteBarrier(&___shouldDisplayInterstitial_11, value);
	}

	inline static int32_t get_offset_of_didDisplayInterstitial_12() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didDisplayInterstitial_12)); }
	inline Action_1_t3797125708 * get_didDisplayInterstitial_12() const { return ___didDisplayInterstitial_12; }
	inline Action_1_t3797125708 ** get_address_of_didDisplayInterstitial_12() { return &___didDisplayInterstitial_12; }
	inline void set_didDisplayInterstitial_12(Action_1_t3797125708 * value)
	{
		___didDisplayInterstitial_12 = value;
		Il2CppCodeGenWriteBarrier(&___didDisplayInterstitial_12, value);
	}

	inline static int32_t get_offset_of_didCacheInterstitial_13() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCacheInterstitial_13)); }
	inline Action_1_t3797125708 * get_didCacheInterstitial_13() const { return ___didCacheInterstitial_13; }
	inline Action_1_t3797125708 ** get_address_of_didCacheInterstitial_13() { return &___didCacheInterstitial_13; }
	inline void set_didCacheInterstitial_13(Action_1_t3797125708 * value)
	{
		___didCacheInterstitial_13 = value;
		Il2CppCodeGenWriteBarrier(&___didCacheInterstitial_13, value);
	}

	inline static int32_t get_offset_of_didClickInterstitial_14() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didClickInterstitial_14)); }
	inline Action_1_t3797125708 * get_didClickInterstitial_14() const { return ___didClickInterstitial_14; }
	inline Action_1_t3797125708 ** get_address_of_didClickInterstitial_14() { return &___didClickInterstitial_14; }
	inline void set_didClickInterstitial_14(Action_1_t3797125708 * value)
	{
		___didClickInterstitial_14 = value;
		Il2CppCodeGenWriteBarrier(&___didClickInterstitial_14, value);
	}

	inline static int32_t get_offset_of_didCloseInterstitial_15() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCloseInterstitial_15)); }
	inline Action_1_t3797125708 * get_didCloseInterstitial_15() const { return ___didCloseInterstitial_15; }
	inline Action_1_t3797125708 ** get_address_of_didCloseInterstitial_15() { return &___didCloseInterstitial_15; }
	inline void set_didCloseInterstitial_15(Action_1_t3797125708 * value)
	{
		___didCloseInterstitial_15 = value;
		Il2CppCodeGenWriteBarrier(&___didCloseInterstitial_15, value);
	}

	inline static int32_t get_offset_of_didDismissInterstitial_16() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didDismissInterstitial_16)); }
	inline Action_1_t3797125708 * get_didDismissInterstitial_16() const { return ___didDismissInterstitial_16; }
	inline Action_1_t3797125708 ** get_address_of_didDismissInterstitial_16() { return &___didDismissInterstitial_16; }
	inline void set_didDismissInterstitial_16(Action_1_t3797125708 * value)
	{
		___didDismissInterstitial_16 = value;
		Il2CppCodeGenWriteBarrier(&___didDismissInterstitial_16, value);
	}

	inline static int32_t get_offset_of_didFailToLoadInterstitial_17() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didFailToLoadInterstitial_17)); }
	inline Action_2_t1255075070 * get_didFailToLoadInterstitial_17() const { return ___didFailToLoadInterstitial_17; }
	inline Action_2_t1255075070 ** get_address_of_didFailToLoadInterstitial_17() { return &___didFailToLoadInterstitial_17; }
	inline void set_didFailToLoadInterstitial_17(Action_2_t1255075070 * value)
	{
		___didFailToLoadInterstitial_17 = value;
		Il2CppCodeGenWriteBarrier(&___didFailToLoadInterstitial_17, value);
	}

	inline static int32_t get_offset_of_didFailToRecordClick_18() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didFailToRecordClick_18)); }
	inline Action_2_t3254535421 * get_didFailToRecordClick_18() const { return ___didFailToRecordClick_18; }
	inline Action_2_t3254535421 ** get_address_of_didFailToRecordClick_18() { return &___didFailToRecordClick_18; }
	inline void set_didFailToRecordClick_18(Action_2_t3254535421 * value)
	{
		___didFailToRecordClick_18 = value;
		Il2CppCodeGenWriteBarrier(&___didFailToRecordClick_18, value);
	}

	inline static int32_t get_offset_of_shouldDisplayMoreApps_19() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___shouldDisplayMoreApps_19)); }
	inline Func_2_t1882026158 * get_shouldDisplayMoreApps_19() const { return ___shouldDisplayMoreApps_19; }
	inline Func_2_t1882026158 ** get_address_of_shouldDisplayMoreApps_19() { return &___shouldDisplayMoreApps_19; }
	inline void set_shouldDisplayMoreApps_19(Func_2_t1882026158 * value)
	{
		___shouldDisplayMoreApps_19 = value;
		Il2CppCodeGenWriteBarrier(&___shouldDisplayMoreApps_19, value);
	}

	inline static int32_t get_offset_of_didDisplayMoreApps_20() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didDisplayMoreApps_20)); }
	inline Action_1_t3797125708 * get_didDisplayMoreApps_20() const { return ___didDisplayMoreApps_20; }
	inline Action_1_t3797125708 ** get_address_of_didDisplayMoreApps_20() { return &___didDisplayMoreApps_20; }
	inline void set_didDisplayMoreApps_20(Action_1_t3797125708 * value)
	{
		___didDisplayMoreApps_20 = value;
		Il2CppCodeGenWriteBarrier(&___didDisplayMoreApps_20, value);
	}

	inline static int32_t get_offset_of_didCacheMoreApps_21() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCacheMoreApps_21)); }
	inline Action_1_t3797125708 * get_didCacheMoreApps_21() const { return ___didCacheMoreApps_21; }
	inline Action_1_t3797125708 ** get_address_of_didCacheMoreApps_21() { return &___didCacheMoreApps_21; }
	inline void set_didCacheMoreApps_21(Action_1_t3797125708 * value)
	{
		___didCacheMoreApps_21 = value;
		Il2CppCodeGenWriteBarrier(&___didCacheMoreApps_21, value);
	}

	inline static int32_t get_offset_of_didClickMoreApps_22() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didClickMoreApps_22)); }
	inline Action_1_t3797125708 * get_didClickMoreApps_22() const { return ___didClickMoreApps_22; }
	inline Action_1_t3797125708 ** get_address_of_didClickMoreApps_22() { return &___didClickMoreApps_22; }
	inline void set_didClickMoreApps_22(Action_1_t3797125708 * value)
	{
		___didClickMoreApps_22 = value;
		Il2CppCodeGenWriteBarrier(&___didClickMoreApps_22, value);
	}

	inline static int32_t get_offset_of_didCloseMoreApps_23() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCloseMoreApps_23)); }
	inline Action_1_t3797125708 * get_didCloseMoreApps_23() const { return ___didCloseMoreApps_23; }
	inline Action_1_t3797125708 ** get_address_of_didCloseMoreApps_23() { return &___didCloseMoreApps_23; }
	inline void set_didCloseMoreApps_23(Action_1_t3797125708 * value)
	{
		___didCloseMoreApps_23 = value;
		Il2CppCodeGenWriteBarrier(&___didCloseMoreApps_23, value);
	}

	inline static int32_t get_offset_of_didDismissMoreApps_24() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didDismissMoreApps_24)); }
	inline Action_1_t3797125708 * get_didDismissMoreApps_24() const { return ___didDismissMoreApps_24; }
	inline Action_1_t3797125708 ** get_address_of_didDismissMoreApps_24() { return &___didDismissMoreApps_24; }
	inline void set_didDismissMoreApps_24(Action_1_t3797125708 * value)
	{
		___didDismissMoreApps_24 = value;
		Il2CppCodeGenWriteBarrier(&___didDismissMoreApps_24, value);
	}

	inline static int32_t get_offset_of_didFailToLoadMoreApps_25() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didFailToLoadMoreApps_25)); }
	inline Action_2_t1255075070 * get_didFailToLoadMoreApps_25() const { return ___didFailToLoadMoreApps_25; }
	inline Action_2_t1255075070 ** get_address_of_didFailToLoadMoreApps_25() { return &___didFailToLoadMoreApps_25; }
	inline void set_didFailToLoadMoreApps_25(Action_2_t1255075070 * value)
	{
		___didFailToLoadMoreApps_25 = value;
		Il2CppCodeGenWriteBarrier(&___didFailToLoadMoreApps_25, value);
	}

	inline static int32_t get_offset_of_shouldDisplayRewardedVideo_26() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___shouldDisplayRewardedVideo_26)); }
	inline Func_2_t1882026158 * get_shouldDisplayRewardedVideo_26() const { return ___shouldDisplayRewardedVideo_26; }
	inline Func_2_t1882026158 ** get_address_of_shouldDisplayRewardedVideo_26() { return &___shouldDisplayRewardedVideo_26; }
	inline void set_shouldDisplayRewardedVideo_26(Func_2_t1882026158 * value)
	{
		___shouldDisplayRewardedVideo_26 = value;
		Il2CppCodeGenWriteBarrier(&___shouldDisplayRewardedVideo_26, value);
	}

	inline static int32_t get_offset_of_didDisplayRewardedVideo_27() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didDisplayRewardedVideo_27)); }
	inline Action_1_t3797125708 * get_didDisplayRewardedVideo_27() const { return ___didDisplayRewardedVideo_27; }
	inline Action_1_t3797125708 ** get_address_of_didDisplayRewardedVideo_27() { return &___didDisplayRewardedVideo_27; }
	inline void set_didDisplayRewardedVideo_27(Action_1_t3797125708 * value)
	{
		___didDisplayRewardedVideo_27 = value;
		Il2CppCodeGenWriteBarrier(&___didDisplayRewardedVideo_27, value);
	}

	inline static int32_t get_offset_of_didCacheRewardedVideo_28() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCacheRewardedVideo_28)); }
	inline Action_1_t3797125708 * get_didCacheRewardedVideo_28() const { return ___didCacheRewardedVideo_28; }
	inline Action_1_t3797125708 ** get_address_of_didCacheRewardedVideo_28() { return &___didCacheRewardedVideo_28; }
	inline void set_didCacheRewardedVideo_28(Action_1_t3797125708 * value)
	{
		___didCacheRewardedVideo_28 = value;
		Il2CppCodeGenWriteBarrier(&___didCacheRewardedVideo_28, value);
	}

	inline static int32_t get_offset_of_didClickRewardedVideo_29() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didClickRewardedVideo_29)); }
	inline Action_1_t3797125708 * get_didClickRewardedVideo_29() const { return ___didClickRewardedVideo_29; }
	inline Action_1_t3797125708 ** get_address_of_didClickRewardedVideo_29() { return &___didClickRewardedVideo_29; }
	inline void set_didClickRewardedVideo_29(Action_1_t3797125708 * value)
	{
		___didClickRewardedVideo_29 = value;
		Il2CppCodeGenWriteBarrier(&___didClickRewardedVideo_29, value);
	}

	inline static int32_t get_offset_of_didCloseRewardedVideo_30() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCloseRewardedVideo_30)); }
	inline Action_1_t3797125708 * get_didCloseRewardedVideo_30() const { return ___didCloseRewardedVideo_30; }
	inline Action_1_t3797125708 ** get_address_of_didCloseRewardedVideo_30() { return &___didCloseRewardedVideo_30; }
	inline void set_didCloseRewardedVideo_30(Action_1_t3797125708 * value)
	{
		___didCloseRewardedVideo_30 = value;
		Il2CppCodeGenWriteBarrier(&___didCloseRewardedVideo_30, value);
	}

	inline static int32_t get_offset_of_didDismissRewardedVideo_31() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didDismissRewardedVideo_31)); }
	inline Action_1_t3797125708 * get_didDismissRewardedVideo_31() const { return ___didDismissRewardedVideo_31; }
	inline Action_1_t3797125708 ** get_address_of_didDismissRewardedVideo_31() { return &___didDismissRewardedVideo_31; }
	inline void set_didDismissRewardedVideo_31(Action_1_t3797125708 * value)
	{
		___didDismissRewardedVideo_31 = value;
		Il2CppCodeGenWriteBarrier(&___didDismissRewardedVideo_31, value);
	}

	inline static int32_t get_offset_of_didCompleteRewardedVideo_32() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCompleteRewardedVideo_32)); }
	inline Action_2_t2193144874 * get_didCompleteRewardedVideo_32() const { return ___didCompleteRewardedVideo_32; }
	inline Action_2_t2193144874 ** get_address_of_didCompleteRewardedVideo_32() { return &___didCompleteRewardedVideo_32; }
	inline void set_didCompleteRewardedVideo_32(Action_2_t2193144874 * value)
	{
		___didCompleteRewardedVideo_32 = value;
		Il2CppCodeGenWriteBarrier(&___didCompleteRewardedVideo_32, value);
	}

	inline static int32_t get_offset_of_didFailToLoadRewardedVideo_33() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didFailToLoadRewardedVideo_33)); }
	inline Action_2_t1255075070 * get_didFailToLoadRewardedVideo_33() const { return ___didFailToLoadRewardedVideo_33; }
	inline Action_2_t1255075070 ** get_address_of_didFailToLoadRewardedVideo_33() { return &___didFailToLoadRewardedVideo_33; }
	inline void set_didFailToLoadRewardedVideo_33(Action_2_t1255075070 * value)
	{
		___didFailToLoadRewardedVideo_33 = value;
		Il2CppCodeGenWriteBarrier(&___didFailToLoadRewardedVideo_33, value);
	}

	inline static int32_t get_offset_of_didCacheInPlay_34() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCacheInPlay_34)); }
	inline Action_1_t3797125708 * get_didCacheInPlay_34() const { return ___didCacheInPlay_34; }
	inline Action_1_t3797125708 ** get_address_of_didCacheInPlay_34() { return &___didCacheInPlay_34; }
	inline void set_didCacheInPlay_34(Action_1_t3797125708 * value)
	{
		___didCacheInPlay_34 = value;
		Il2CppCodeGenWriteBarrier(&___didCacheInPlay_34, value);
	}

	inline static int32_t get_offset_of_didFailToLoadInPlay_35() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didFailToLoadInPlay_35)); }
	inline Action_2_t1255075070 * get_didFailToLoadInPlay_35() const { return ___didFailToLoadInPlay_35; }
	inline Action_2_t1255075070 ** get_address_of_didFailToLoadInPlay_35() { return &___didFailToLoadInPlay_35; }
	inline void set_didFailToLoadInPlay_35(Action_2_t1255075070 * value)
	{
		___didFailToLoadInPlay_35 = value;
		Il2CppCodeGenWriteBarrier(&___didFailToLoadInPlay_35, value);
	}

	inline static int32_t get_offset_of_willDisplayVideo_36() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___willDisplayVideo_36)); }
	inline Action_1_t3797125708 * get_willDisplayVideo_36() const { return ___willDisplayVideo_36; }
	inline Action_1_t3797125708 ** get_address_of_willDisplayVideo_36() { return &___willDisplayVideo_36; }
	inline void set_willDisplayVideo_36(Action_1_t3797125708 * value)
	{
		___willDisplayVideo_36 = value;
		Il2CppCodeGenWriteBarrier(&___willDisplayVideo_36, value);
	}

	inline static int32_t get_offset_of_didPauseClickForConfirmation_37() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didPauseClickForConfirmation_37)); }
	inline Action_t437523947 * get_didPauseClickForConfirmation_37() const { return ___didPauseClickForConfirmation_37; }
	inline Action_t437523947 ** get_address_of_didPauseClickForConfirmation_37() { return &___didPauseClickForConfirmation_37; }
	inline void set_didPauseClickForConfirmation_37(Action_t437523947 * value)
	{
		___didPauseClickForConfirmation_37 = value;
		Il2CppCodeGenWriteBarrier(&___didPauseClickForConfirmation_37, value);
	}

	inline static int32_t get_offset_of_didCompleteAppStoreSheetFlow_38() { return static_cast<int32_t>(offsetof(Chartboost_t484211292_StaticFields, ___didCompleteAppStoreSheetFlow_38)); }
	inline Action_t437523947 * get_didCompleteAppStoreSheetFlow_38() const { return ___didCompleteAppStoreSheetFlow_38; }
	inline Action_t437523947 ** get_address_of_didCompleteAppStoreSheetFlow_38() { return &___didCompleteAppStoreSheetFlow_38; }
	inline void set_didCompleteAppStoreSheetFlow_38(Action_t437523947 * value)
	{
		___didCompleteAppStoreSheetFlow_38 = value;
		Il2CppCodeGenWriteBarrier(&___didCompleteAppStoreSheetFlow_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
