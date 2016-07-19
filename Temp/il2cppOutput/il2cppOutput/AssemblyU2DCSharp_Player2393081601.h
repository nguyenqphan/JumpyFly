#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AdManager
struct AdManager_t3461832170;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// Spawner
struct Spawner_t3948062024;
// CameraMove
struct CameraMove_t4276106422;
// PanelController
struct PanelController_t2622049440;
// UpdateScore
struct UpdateScore_t1082839849;
// SoundManager
struct SoundManager_t2444342206;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t3012272455
{
public:
	// AdManager Player::adManager
	AdManager_t3461832170 * ___adManager_2;
	// UnityEngine.Rigidbody Player::playerRigid
	Rigidbody_t1972007546 * ___playerRigid_3;
	// UnityEngine.Transform Player::playerTrans
	Transform_t284553113 * ___playerTrans_4;
	// Spawner Player::spawner
	Spawner_t3948062024 * ___spawner_5;
	// CameraMove Player::cameraMove
	CameraMove_t4276106422 * ___cameraMove_6;
	// PanelController Player::panelController
	PanelController_t2622049440 * ___panelController_7;
	// UpdateScore Player::updateScore
	UpdateScore_t1082839849 * ___updateScore_8;
	// SoundManager Player::soundManager
	SoundManager_t2444342206 * ___soundManager_9;
	// System.Boolean Player::tap
	bool ___tap_10;

public:
	inline static int32_t get_offset_of_adManager_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___adManager_2)); }
	inline AdManager_t3461832170 * get_adManager_2() const { return ___adManager_2; }
	inline AdManager_t3461832170 ** get_address_of_adManager_2() { return &___adManager_2; }
	inline void set_adManager_2(AdManager_t3461832170 * value)
	{
		___adManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___adManager_2, value);
	}

	inline static int32_t get_offset_of_playerRigid_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerRigid_3)); }
	inline Rigidbody_t1972007546 * get_playerRigid_3() const { return ___playerRigid_3; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRigid_3() { return &___playerRigid_3; }
	inline void set_playerRigid_3(Rigidbody_t1972007546 * value)
	{
		___playerRigid_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerRigid_3, value);
	}

	inline static int32_t get_offset_of_playerTrans_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerTrans_4)); }
	inline Transform_t284553113 * get_playerTrans_4() const { return ___playerTrans_4; }
	inline Transform_t284553113 ** get_address_of_playerTrans_4() { return &___playerTrans_4; }
	inline void set_playerTrans_4(Transform_t284553113 * value)
	{
		___playerTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerTrans_4, value);
	}

	inline static int32_t get_offset_of_spawner_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___spawner_5)); }
	inline Spawner_t3948062024 * get_spawner_5() const { return ___spawner_5; }
	inline Spawner_t3948062024 ** get_address_of_spawner_5() { return &___spawner_5; }
	inline void set_spawner_5(Spawner_t3948062024 * value)
	{
		___spawner_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_5, value);
	}

	inline static int32_t get_offset_of_cameraMove_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___cameraMove_6)); }
	inline CameraMove_t4276106422 * get_cameraMove_6() const { return ___cameraMove_6; }
	inline CameraMove_t4276106422 ** get_address_of_cameraMove_6() { return &___cameraMove_6; }
	inline void set_cameraMove_6(CameraMove_t4276106422 * value)
	{
		___cameraMove_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraMove_6, value);
	}

	inline static int32_t get_offset_of_panelController_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___panelController_7)); }
	inline PanelController_t2622049440 * get_panelController_7() const { return ___panelController_7; }
	inline PanelController_t2622049440 ** get_address_of_panelController_7() { return &___panelController_7; }
	inline void set_panelController_7(PanelController_t2622049440 * value)
	{
		___panelController_7 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_7, value);
	}

	inline static int32_t get_offset_of_updateScore_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___updateScore_8)); }
	inline UpdateScore_t1082839849 * get_updateScore_8() const { return ___updateScore_8; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_8() { return &___updateScore_8; }
	inline void set_updateScore_8(UpdateScore_t1082839849 * value)
	{
		___updateScore_8 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_8, value);
	}

	inline static int32_t get_offset_of_soundManager_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___soundManager_9)); }
	inline SoundManager_t2444342206 * get_soundManager_9() const { return ___soundManager_9; }
	inline SoundManager_t2444342206 ** get_address_of_soundManager_9() { return &___soundManager_9; }
	inline void set_soundManager_9(SoundManager_t2444342206 * value)
	{
		___soundManager_9 = value;
		Il2CppCodeGenWriteBarrier(&___soundManager_9, value);
	}

	inline static int32_t get_offset_of_tap_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___tap_10)); }
	inline bool get_tap_10() const { return ___tap_10; }
	inline bool* get_address_of_tap_10() { return &___tap_10; }
	inline void set_tap_10(bool value)
	{
		___tap_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
