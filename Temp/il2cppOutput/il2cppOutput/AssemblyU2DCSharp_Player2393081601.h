#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameCenterAPI
struct GameCenterAPI_t660842899;
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
	// GameCenterAPI Player::gameCenterAPI
	GameCenterAPI_t660842899 * ___gameCenterAPI_2;
	// AdManager Player::adManager
	AdManager_t3461832170 * ___adManager_3;
	// UnityEngine.Rigidbody Player::playerRigid
	Rigidbody_t1972007546 * ___playerRigid_4;
	// UnityEngine.Transform Player::playerTrans
	Transform_t284553113 * ___playerTrans_5;
	// Spawner Player::spawner
	Spawner_t3948062024 * ___spawner_6;
	// CameraMove Player::cameraMove
	CameraMove_t4276106422 * ___cameraMove_7;
	// PanelController Player::panelController
	PanelController_t2622049440 * ___panelController_8;
	// UpdateScore Player::updateScore
	UpdateScore_t1082839849 * ___updateScore_9;
	// SoundManager Player::soundManager
	SoundManager_t2444342206 * ___soundManager_10;
	// System.Boolean Player::tap
	bool ___tap_11;

public:
	inline static int32_t get_offset_of_gameCenterAPI_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___gameCenterAPI_2)); }
	inline GameCenterAPI_t660842899 * get_gameCenterAPI_2() const { return ___gameCenterAPI_2; }
	inline GameCenterAPI_t660842899 ** get_address_of_gameCenterAPI_2() { return &___gameCenterAPI_2; }
	inline void set_gameCenterAPI_2(GameCenterAPI_t660842899 * value)
	{
		___gameCenterAPI_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameCenterAPI_2, value);
	}

	inline static int32_t get_offset_of_adManager_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___adManager_3)); }
	inline AdManager_t3461832170 * get_adManager_3() const { return ___adManager_3; }
	inline AdManager_t3461832170 ** get_address_of_adManager_3() { return &___adManager_3; }
	inline void set_adManager_3(AdManager_t3461832170 * value)
	{
		___adManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___adManager_3, value);
	}

	inline static int32_t get_offset_of_playerRigid_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerRigid_4)); }
	inline Rigidbody_t1972007546 * get_playerRigid_4() const { return ___playerRigid_4; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRigid_4() { return &___playerRigid_4; }
	inline void set_playerRigid_4(Rigidbody_t1972007546 * value)
	{
		___playerRigid_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerRigid_4, value);
	}

	inline static int32_t get_offset_of_playerTrans_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerTrans_5)); }
	inline Transform_t284553113 * get_playerTrans_5() const { return ___playerTrans_5; }
	inline Transform_t284553113 ** get_address_of_playerTrans_5() { return &___playerTrans_5; }
	inline void set_playerTrans_5(Transform_t284553113 * value)
	{
		___playerTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerTrans_5, value);
	}

	inline static int32_t get_offset_of_spawner_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___spawner_6)); }
	inline Spawner_t3948062024 * get_spawner_6() const { return ___spawner_6; }
	inline Spawner_t3948062024 ** get_address_of_spawner_6() { return &___spawner_6; }
	inline void set_spawner_6(Spawner_t3948062024 * value)
	{
		___spawner_6 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_6, value);
	}

	inline static int32_t get_offset_of_cameraMove_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___cameraMove_7)); }
	inline CameraMove_t4276106422 * get_cameraMove_7() const { return ___cameraMove_7; }
	inline CameraMove_t4276106422 ** get_address_of_cameraMove_7() { return &___cameraMove_7; }
	inline void set_cameraMove_7(CameraMove_t4276106422 * value)
	{
		___cameraMove_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameraMove_7, value);
	}

	inline static int32_t get_offset_of_panelController_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___panelController_8)); }
	inline PanelController_t2622049440 * get_panelController_8() const { return ___panelController_8; }
	inline PanelController_t2622049440 ** get_address_of_panelController_8() { return &___panelController_8; }
	inline void set_panelController_8(PanelController_t2622049440 * value)
	{
		___panelController_8 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_8, value);
	}

	inline static int32_t get_offset_of_updateScore_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___updateScore_9)); }
	inline UpdateScore_t1082839849 * get_updateScore_9() const { return ___updateScore_9; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_9() { return &___updateScore_9; }
	inline void set_updateScore_9(UpdateScore_t1082839849 * value)
	{
		___updateScore_9 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_9, value);
	}

	inline static int32_t get_offset_of_soundManager_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___soundManager_10)); }
	inline SoundManager_t2444342206 * get_soundManager_10() const { return ___soundManager_10; }
	inline SoundManager_t2444342206 ** get_address_of_soundManager_10() { return &___soundManager_10; }
	inline void set_soundManager_10(SoundManager_t2444342206 * value)
	{
		___soundManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___soundManager_10, value);
	}

	inline static int32_t get_offset_of_tap_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___tap_11)); }
	inline bool get_tap_11() const { return ___tap_11; }
	inline bool* get_address_of_tap_11() { return &___tap_11; }
	inline void set_tap_11(bool value)
	{
		___tap_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
