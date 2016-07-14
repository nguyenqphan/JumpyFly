#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// SoundManager
struct SoundManager_t2444342206;
// PanelController
struct PanelController_t2622049440;
// UpdateScore
struct UpdateScore_t1082839849;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIController
struct  UIController_t2684559696  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform UIController::trans
	Transform_t284553113 * ___trans_2;
	// SoundManager UIController::soundManager
	SoundManager_t2444342206 * ___soundManager_3;
	// System.Boolean UIController::isClicked
	bool ___isClicked_4;
	// System.Single UIController::startScale
	float ___startScale_5;
	// System.Single UIController::newScale
	float ___newScale_6;
	// System.Single UIController::scale
	float ___scale_7;
	// System.Single UIController::scalingSpeed
	float ___scalingSpeed_8;
	// System.Boolean UIController::isBigger
	bool ___isBigger_9;
	// System.Single UIController::startPosX
	float ___startPosX_10;
	// System.Single UIController::startPosY
	float ___startPosY_11;
	// System.Single UIController::curPosX
	float ___curPosX_12;
	// System.Single UIController::curPosY
	float ___curPosY_13;
	// System.Single UIController::distance
	float ___distance_14;
	// System.Single UIController::movingSpeed
	float ___movingSpeed_15;
	// PanelController UIController::panelController
	PanelController_t2622049440 * ___panelController_16;
	// UpdateScore UIController::updateScore
	UpdateScore_t1082839849 * ___updateScore_17;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___trans_2)); }
	inline Transform_t284553113 * get_trans_2() const { return ___trans_2; }
	inline Transform_t284553113 ** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(Transform_t284553113 * value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}

	inline static int32_t get_offset_of_soundManager_3() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___soundManager_3)); }
	inline SoundManager_t2444342206 * get_soundManager_3() const { return ___soundManager_3; }
	inline SoundManager_t2444342206 ** get_address_of_soundManager_3() { return &___soundManager_3; }
	inline void set_soundManager_3(SoundManager_t2444342206 * value)
	{
		___soundManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundManager_3, value);
	}

	inline static int32_t get_offset_of_isClicked_4() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___isClicked_4)); }
	inline bool get_isClicked_4() const { return ___isClicked_4; }
	inline bool* get_address_of_isClicked_4() { return &___isClicked_4; }
	inline void set_isClicked_4(bool value)
	{
		___isClicked_4 = value;
	}

	inline static int32_t get_offset_of_startScale_5() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___startScale_5)); }
	inline float get_startScale_5() const { return ___startScale_5; }
	inline float* get_address_of_startScale_5() { return &___startScale_5; }
	inline void set_startScale_5(float value)
	{
		___startScale_5 = value;
	}

	inline static int32_t get_offset_of_newScale_6() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___newScale_6)); }
	inline float get_newScale_6() const { return ___newScale_6; }
	inline float* get_address_of_newScale_6() { return &___newScale_6; }
	inline void set_newScale_6(float value)
	{
		___newScale_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___scale_7)); }
	inline float get_scale_7() const { return ___scale_7; }
	inline float* get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(float value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of_scalingSpeed_8() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___scalingSpeed_8)); }
	inline float get_scalingSpeed_8() const { return ___scalingSpeed_8; }
	inline float* get_address_of_scalingSpeed_8() { return &___scalingSpeed_8; }
	inline void set_scalingSpeed_8(float value)
	{
		___scalingSpeed_8 = value;
	}

	inline static int32_t get_offset_of_isBigger_9() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___isBigger_9)); }
	inline bool get_isBigger_9() const { return ___isBigger_9; }
	inline bool* get_address_of_isBigger_9() { return &___isBigger_9; }
	inline void set_isBigger_9(bool value)
	{
		___isBigger_9 = value;
	}

	inline static int32_t get_offset_of_startPosX_10() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___startPosX_10)); }
	inline float get_startPosX_10() const { return ___startPosX_10; }
	inline float* get_address_of_startPosX_10() { return &___startPosX_10; }
	inline void set_startPosX_10(float value)
	{
		___startPosX_10 = value;
	}

	inline static int32_t get_offset_of_startPosY_11() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___startPosY_11)); }
	inline float get_startPosY_11() const { return ___startPosY_11; }
	inline float* get_address_of_startPosY_11() { return &___startPosY_11; }
	inline void set_startPosY_11(float value)
	{
		___startPosY_11 = value;
	}

	inline static int32_t get_offset_of_curPosX_12() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___curPosX_12)); }
	inline float get_curPosX_12() const { return ___curPosX_12; }
	inline float* get_address_of_curPosX_12() { return &___curPosX_12; }
	inline void set_curPosX_12(float value)
	{
		___curPosX_12 = value;
	}

	inline static int32_t get_offset_of_curPosY_13() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___curPosY_13)); }
	inline float get_curPosY_13() const { return ___curPosY_13; }
	inline float* get_address_of_curPosY_13() { return &___curPosY_13; }
	inline void set_curPosY_13(float value)
	{
		___curPosY_13 = value;
	}

	inline static int32_t get_offset_of_distance_14() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___distance_14)); }
	inline float get_distance_14() const { return ___distance_14; }
	inline float* get_address_of_distance_14() { return &___distance_14; }
	inline void set_distance_14(float value)
	{
		___distance_14 = value;
	}

	inline static int32_t get_offset_of_movingSpeed_15() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___movingSpeed_15)); }
	inline float get_movingSpeed_15() const { return ___movingSpeed_15; }
	inline float* get_address_of_movingSpeed_15() { return &___movingSpeed_15; }
	inline void set_movingSpeed_15(float value)
	{
		___movingSpeed_15 = value;
	}

	inline static int32_t get_offset_of_panelController_16() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___panelController_16)); }
	inline PanelController_t2622049440 * get_panelController_16() const { return ___panelController_16; }
	inline PanelController_t2622049440 ** get_address_of_panelController_16() { return &___panelController_16; }
	inline void set_panelController_16(PanelController_t2622049440 * value)
	{
		___panelController_16 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_16, value);
	}

	inline static int32_t get_offset_of_updateScore_17() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___updateScore_17)); }
	inline UpdateScore_t1082839849 * get_updateScore_17() const { return ___updateScore_17; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_17() { return &___updateScore_17; }
	inline void set_updateScore_17(UpdateScore_t1082839849 * value)
	{
		___updateScore_17 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
