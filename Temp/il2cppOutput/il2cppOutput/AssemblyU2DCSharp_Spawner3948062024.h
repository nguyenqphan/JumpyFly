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
// UnityEngine.Transform
struct Transform_t284553113;
// GoldParticles
struct GoldParticles_t3316424205;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Cube
struct Cube_t2111573;
// CubeSkin
struct CubeSkin_t169434994;
// SmallCubeSkin
struct SmallCubeSkin_t2881105241;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;
// System.Collections.Generic.List`1<Cube>
struct List_1_t799070542;
// System.Collections.Generic.List`1<CubeSkin>
struct List_1_t966393963;
// System.Collections.Generic.List`1<SmallCubeSkin>
struct List_1_t3678064210;
// System.Collections.Generic.List`1<GoldParticles>
struct List_1_t4113383174;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t3948062024  : public MonoBehaviour_t3012272455
{
public:
	// PanelController Spawner::panelcontroller
	PanelController_t2622049440 * ___panelcontroller_2;
	// System.Int32 Spawner::CubeMatNum
	int32_t ___CubeMatNum_3;
	// System.Int32 Spawner::currentColor
	int32_t ___currentColor_4;
	// System.Boolean Spawner::isBlockShape
	bool ___isBlockShape_5;
	// System.Boolean Spawner::isEmptyShape
	bool ___isEmptyShape_6;
	// System.Boolean Spawner::isZigzag
	bool ___isZigzag_7;
	// System.Boolean Spawner::isMoveDown
	bool ___isMoveDown_8;
	// System.Boolean Spawner::isSpike
	bool ___isSpike_9;
	// System.Single Spawner::currShape
	float ___currShape_10;
	// System.Single Spawner::currLine
	float ___currLine_11;
	// System.Boolean Spawner::isObstacle
	bool ___isObstacle_12;
	// UnityEngine.Transform Spawner::spawnerTrans
	Transform_t284553113 * ___spawnerTrans_13;
	// GoldParticles Spawner::goldParticleScript
	GoldParticles_t3316424205 * ___goldParticleScript_14;
	// UnityEngine.GameObject Spawner::cube
	GameObject_t4012695102 * ___cube_15;
	// UnityEngine.GameObject Spawner::smallCube
	GameObject_t4012695102 * ___smallCube_16;
	// UnityEngine.GameObject Spawner::tinyCube
	GameObject_t4012695102 * ___tinyCube_17;
	// UnityEngine.GameObject Spawner::gold
	GameObject_t4012695102 * ___gold_18;
	// UnityEngine.GameObject Spawner::playerBreakingParticle
	GameObject_t4012695102 * ___playerBreakingParticle_19;
	// UnityEngine.GameObject Spawner::goldParticles
	GameObject_t4012695102 * ___goldParticles_20;
	// UnityEngine.GameObject Spawner::rewardedparitcles
	GameObject_t4012695102 * ___rewardedparitcles_21;
	// Cube Spawner::cubeComponent
	Cube_t2111573 * ___cubeComponent_22;
	// Cube Spawner::smallCubeComponent
	Cube_t2111573 * ___smallCubeComponent_23;
	// Cube Spawner::tinyCubeComponent
	Cube_t2111573 * ___tinyCubeComponent_24;
	// CubeSkin Spawner::cubeSkinComponent
	CubeSkin_t169434994 * ___cubeSkinComponent_25;
	// SmallCubeSkin Spawner::smallCubeSkinComponent
	SmallCubeSkin_t2881105241 * ___smallCubeSkinComponent_26;
	// SmallCubeSkin Spawner::tinyCubeSkinComponent
	SmallCubeSkin_t2881105241 * ___tinyCubeSkinComponent_27;
	// UnityEngine.Transform Spawner::cubeTrans
	Transform_t284553113 * ___cubeTrans_28;
	// UnityEngine.Transform Spawner::smallCubeTrans
	Transform_t284553113 * ___smallCubeTrans_29;
	// UnityEngine.Transform Spawner::tinyCubeTrans
	Transform_t284553113 * ___tinyCubeTrans_30;
	// UnityEngine.Transform Spawner::goldTrans
	Transform_t284553113 * ___goldTrans_31;
	// UnityEngine.Transform Spawner::playerBreakingPartilceTrans
	Transform_t284553113 * ___playerBreakingPartilceTrans_32;
	// UnityEngine.Transform Spawner::goldParticlesTrans
	Transform_t284553113 * ___goldParticlesTrans_33;
	// UnityEngine.Transform Spawner::rewardedParticleTrans
	Transform_t284553113 * ___rewardedParticleTrans_34;
	// UnityEngine.Transform Spawner::fixedParticleTrans
	Transform_t284553113 * ___fixedParticleTrans_35;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::cubeList
	List_1_t514686775 * ___cubeList_36;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::smallCubeList
	List_1_t514686775 * ___smallCubeList_37;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::tinyCubeList
	List_1_t514686775 * ___tinyCubeList_38;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::goldList
	List_1_t514686775 * ___goldList_39;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::playerBreakingParticleList
	List_1_t514686775 * ___playerBreakingParticleList_40;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::goldParticleList
	List_1_t514686775 * ___goldParticleList_41;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Spawner::rewardedParticleList
	List_1_t514686775 * ___rewardedParticleList_42;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::cubeTransList
	List_1_t1081512082 * ___cubeTransList_43;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::smallCubeTransList
	List_1_t1081512082 * ___smallCubeTransList_44;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::tinyCubeTransList
	List_1_t1081512082 * ___tinyCubeTransList_45;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::goldTransList
	List_1_t1081512082 * ___goldTransList_46;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::playerBreakingParticleTransList
	List_1_t1081512082 * ___playerBreakingParticleTransList_47;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::goldParticleTransList
	List_1_t1081512082 * ___goldParticleTransList_48;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::rewardedParticleTransList
	List_1_t1081512082 * ___rewardedParticleTransList_49;
	// System.Collections.Generic.List`1<Cube> Spawner::cubeComponentList
	List_1_t799070542 * ___cubeComponentList_50;
	// System.Collections.Generic.List`1<Cube> Spawner::smallCubeComponentList
	List_1_t799070542 * ___smallCubeComponentList_51;
	// System.Collections.Generic.List`1<Cube> Spawner::tinyCubeComponentList
	List_1_t799070542 * ___tinyCubeComponentList_52;
	// System.Collections.Generic.List`1<CubeSkin> Spawner::cubeSkinComponentList
	List_1_t966393963 * ___cubeSkinComponentList_53;
	// System.Collections.Generic.List`1<SmallCubeSkin> Spawner::smallCubeSkinComponentList
	List_1_t3678064210 * ___smallCubeSkinComponentList_54;
	// System.Collections.Generic.List`1<SmallCubeSkin> Spawner::tinyCubeSkinComponentList
	List_1_t3678064210 * ___tinyCubeSkinComponentList_55;
	// System.Collections.Generic.List`1<GoldParticles> Spawner::goldScriptList
	List_1_t4113383174 * ___goldScriptList_56;
	// System.Int32 Spawner::tinyCubeAmount
	int32_t ___tinyCubeAmount_57;
	// System.Int32 Spawner::cubeAmount
	int32_t ___cubeAmount_58;
	// System.Int32 Spawner::InitialCubeNum
	int32_t ___InitialCubeNum_59;
	// System.Boolean Spawner::isFirst
	bool ___isFirst_60;
	// System.Int32 Spawner::goldAmount
	int32_t ___goldAmount_61;
	// System.Single Spawner::xPos
	float ___xPos_62;
	// System.Single Spawner::yPos
	float ___yPos_63;
	// System.Single Spawner::unit
	float ___unit_64;
	// System.Boolean Spawner::switchPlusMinus
	bool ___switchPlusMinus_65;
	// System.Int32 Spawner::wideSize
	int32_t ___wideSize_66;
	// System.Int32 Spawner::shapeValue
	int32_t ___shapeValue_67;
	// System.Int32 Spawner::diaPosX
	int32_t ___diaPosX_68;
	// System.Int32 Spawner::numOfSpace
	int32_t ___numOfSpace_69;
	// System.Int32 Spawner::maxSpace
	int32_t ___maxSpace_70;
	// System.Int32 Spawner::countShape
	int32_t ___countShape_71;
	// System.Boolean Spawner::isOneRound
	bool ___isOneRound_72;
	// System.Int32 Spawner::pauseUnit
	int32_t ___pauseUnit_73;
	// System.Int32 Spawner::flatUnit
	int32_t ___flatUnit_74;
	// System.Boolean Spawner::isExtented
	bool ___isExtented_75;
	// System.Boolean Spawner::isDouble
	bool ___isDouble_76;
	// System.Boolean Spawner::isV4
	bool ___isV4_77;
	// System.Int32 Spawner::spikeSize
	int32_t ___spikeSize_78;
	// System.Int32 Spawner::numOfSpace1
	int32_t ___numOfSpace1_79;
	// System.Int32 Spawner::maxSpace1
	int32_t ___maxSpace1_80;
	// System.Int32 Spawner::countPat
	int32_t ___countPat_81;
	// System.Int32 Spawner::countPattern
	int32_t ___countPattern_82;
	// System.Boolean Spawner::isPattern
	bool ___isPattern_83;
	// System.Boolean Spawner::isStraight
	bool ___isStraight_84;
	// System.Boolean Spawner::isMidLineShape
	bool ___isMidLineShape_85;
	// System.Boolean Spawner::isTwoColorSwitch
	bool ___isTwoColorSwitch_86;
	// System.Int32 Spawner::colorNum
	int32_t ___colorNum_87;
	// System.Int32 Spawner::numOfSwitches
	int32_t ___numOfSwitches_88;

public:
	inline static int32_t get_offset_of_panelcontroller_2() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___panelcontroller_2)); }
	inline PanelController_t2622049440 * get_panelcontroller_2() const { return ___panelcontroller_2; }
	inline PanelController_t2622049440 ** get_address_of_panelcontroller_2() { return &___panelcontroller_2; }
	inline void set_panelcontroller_2(PanelController_t2622049440 * value)
	{
		___panelcontroller_2 = value;
		Il2CppCodeGenWriteBarrier(&___panelcontroller_2, value);
	}

	inline static int32_t get_offset_of_CubeMatNum_3() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___CubeMatNum_3)); }
	inline int32_t get_CubeMatNum_3() const { return ___CubeMatNum_3; }
	inline int32_t* get_address_of_CubeMatNum_3() { return &___CubeMatNum_3; }
	inline void set_CubeMatNum_3(int32_t value)
	{
		___CubeMatNum_3 = value;
	}

	inline static int32_t get_offset_of_currentColor_4() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___currentColor_4)); }
	inline int32_t get_currentColor_4() const { return ___currentColor_4; }
	inline int32_t* get_address_of_currentColor_4() { return &___currentColor_4; }
	inline void set_currentColor_4(int32_t value)
	{
		___currentColor_4 = value;
	}

	inline static int32_t get_offset_of_isBlockShape_5() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isBlockShape_5)); }
	inline bool get_isBlockShape_5() const { return ___isBlockShape_5; }
	inline bool* get_address_of_isBlockShape_5() { return &___isBlockShape_5; }
	inline void set_isBlockShape_5(bool value)
	{
		___isBlockShape_5 = value;
	}

	inline static int32_t get_offset_of_isEmptyShape_6() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isEmptyShape_6)); }
	inline bool get_isEmptyShape_6() const { return ___isEmptyShape_6; }
	inline bool* get_address_of_isEmptyShape_6() { return &___isEmptyShape_6; }
	inline void set_isEmptyShape_6(bool value)
	{
		___isEmptyShape_6 = value;
	}

	inline static int32_t get_offset_of_isZigzag_7() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isZigzag_7)); }
	inline bool get_isZigzag_7() const { return ___isZigzag_7; }
	inline bool* get_address_of_isZigzag_7() { return &___isZigzag_7; }
	inline void set_isZigzag_7(bool value)
	{
		___isZigzag_7 = value;
	}

	inline static int32_t get_offset_of_isMoveDown_8() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isMoveDown_8)); }
	inline bool get_isMoveDown_8() const { return ___isMoveDown_8; }
	inline bool* get_address_of_isMoveDown_8() { return &___isMoveDown_8; }
	inline void set_isMoveDown_8(bool value)
	{
		___isMoveDown_8 = value;
	}

	inline static int32_t get_offset_of_isSpike_9() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isSpike_9)); }
	inline bool get_isSpike_9() const { return ___isSpike_9; }
	inline bool* get_address_of_isSpike_9() { return &___isSpike_9; }
	inline void set_isSpike_9(bool value)
	{
		___isSpike_9 = value;
	}

	inline static int32_t get_offset_of_currShape_10() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___currShape_10)); }
	inline float get_currShape_10() const { return ___currShape_10; }
	inline float* get_address_of_currShape_10() { return &___currShape_10; }
	inline void set_currShape_10(float value)
	{
		___currShape_10 = value;
	}

	inline static int32_t get_offset_of_currLine_11() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___currLine_11)); }
	inline float get_currLine_11() const { return ___currLine_11; }
	inline float* get_address_of_currLine_11() { return &___currLine_11; }
	inline void set_currLine_11(float value)
	{
		___currLine_11 = value;
	}

	inline static int32_t get_offset_of_isObstacle_12() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isObstacle_12)); }
	inline bool get_isObstacle_12() const { return ___isObstacle_12; }
	inline bool* get_address_of_isObstacle_12() { return &___isObstacle_12; }
	inline void set_isObstacle_12(bool value)
	{
		___isObstacle_12 = value;
	}

	inline static int32_t get_offset_of_spawnerTrans_13() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___spawnerTrans_13)); }
	inline Transform_t284553113 * get_spawnerTrans_13() const { return ___spawnerTrans_13; }
	inline Transform_t284553113 ** get_address_of_spawnerTrans_13() { return &___spawnerTrans_13; }
	inline void set_spawnerTrans_13(Transform_t284553113 * value)
	{
		___spawnerTrans_13 = value;
		Il2CppCodeGenWriteBarrier(&___spawnerTrans_13, value);
	}

	inline static int32_t get_offset_of_goldParticleScript_14() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldParticleScript_14)); }
	inline GoldParticles_t3316424205 * get_goldParticleScript_14() const { return ___goldParticleScript_14; }
	inline GoldParticles_t3316424205 ** get_address_of_goldParticleScript_14() { return &___goldParticleScript_14; }
	inline void set_goldParticleScript_14(GoldParticles_t3316424205 * value)
	{
		___goldParticleScript_14 = value;
		Il2CppCodeGenWriteBarrier(&___goldParticleScript_14, value);
	}

	inline static int32_t get_offset_of_cube_15() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cube_15)); }
	inline GameObject_t4012695102 * get_cube_15() const { return ___cube_15; }
	inline GameObject_t4012695102 ** get_address_of_cube_15() { return &___cube_15; }
	inline void set_cube_15(GameObject_t4012695102 * value)
	{
		___cube_15 = value;
		Il2CppCodeGenWriteBarrier(&___cube_15, value);
	}

	inline static int32_t get_offset_of_smallCube_16() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCube_16)); }
	inline GameObject_t4012695102 * get_smallCube_16() const { return ___smallCube_16; }
	inline GameObject_t4012695102 ** get_address_of_smallCube_16() { return &___smallCube_16; }
	inline void set_smallCube_16(GameObject_t4012695102 * value)
	{
		___smallCube_16 = value;
		Il2CppCodeGenWriteBarrier(&___smallCube_16, value);
	}

	inline static int32_t get_offset_of_tinyCube_17() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCube_17)); }
	inline GameObject_t4012695102 * get_tinyCube_17() const { return ___tinyCube_17; }
	inline GameObject_t4012695102 ** get_address_of_tinyCube_17() { return &___tinyCube_17; }
	inline void set_tinyCube_17(GameObject_t4012695102 * value)
	{
		___tinyCube_17 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCube_17, value);
	}

	inline static int32_t get_offset_of_gold_18() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___gold_18)); }
	inline GameObject_t4012695102 * get_gold_18() const { return ___gold_18; }
	inline GameObject_t4012695102 ** get_address_of_gold_18() { return &___gold_18; }
	inline void set_gold_18(GameObject_t4012695102 * value)
	{
		___gold_18 = value;
		Il2CppCodeGenWriteBarrier(&___gold_18, value);
	}

	inline static int32_t get_offset_of_playerBreakingParticle_19() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___playerBreakingParticle_19)); }
	inline GameObject_t4012695102 * get_playerBreakingParticle_19() const { return ___playerBreakingParticle_19; }
	inline GameObject_t4012695102 ** get_address_of_playerBreakingParticle_19() { return &___playerBreakingParticle_19; }
	inline void set_playerBreakingParticle_19(GameObject_t4012695102 * value)
	{
		___playerBreakingParticle_19 = value;
		Il2CppCodeGenWriteBarrier(&___playerBreakingParticle_19, value);
	}

	inline static int32_t get_offset_of_goldParticles_20() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldParticles_20)); }
	inline GameObject_t4012695102 * get_goldParticles_20() const { return ___goldParticles_20; }
	inline GameObject_t4012695102 ** get_address_of_goldParticles_20() { return &___goldParticles_20; }
	inline void set_goldParticles_20(GameObject_t4012695102 * value)
	{
		___goldParticles_20 = value;
		Il2CppCodeGenWriteBarrier(&___goldParticles_20, value);
	}

	inline static int32_t get_offset_of_rewardedparitcles_21() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___rewardedparitcles_21)); }
	inline GameObject_t4012695102 * get_rewardedparitcles_21() const { return ___rewardedparitcles_21; }
	inline GameObject_t4012695102 ** get_address_of_rewardedparitcles_21() { return &___rewardedparitcles_21; }
	inline void set_rewardedparitcles_21(GameObject_t4012695102 * value)
	{
		___rewardedparitcles_21 = value;
		Il2CppCodeGenWriteBarrier(&___rewardedparitcles_21, value);
	}

	inline static int32_t get_offset_of_cubeComponent_22() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeComponent_22)); }
	inline Cube_t2111573 * get_cubeComponent_22() const { return ___cubeComponent_22; }
	inline Cube_t2111573 ** get_address_of_cubeComponent_22() { return &___cubeComponent_22; }
	inline void set_cubeComponent_22(Cube_t2111573 * value)
	{
		___cubeComponent_22 = value;
		Il2CppCodeGenWriteBarrier(&___cubeComponent_22, value);
	}

	inline static int32_t get_offset_of_smallCubeComponent_23() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeComponent_23)); }
	inline Cube_t2111573 * get_smallCubeComponent_23() const { return ___smallCubeComponent_23; }
	inline Cube_t2111573 ** get_address_of_smallCubeComponent_23() { return &___smallCubeComponent_23; }
	inline void set_smallCubeComponent_23(Cube_t2111573 * value)
	{
		___smallCubeComponent_23 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeComponent_23, value);
	}

	inline static int32_t get_offset_of_tinyCubeComponent_24() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeComponent_24)); }
	inline Cube_t2111573 * get_tinyCubeComponent_24() const { return ___tinyCubeComponent_24; }
	inline Cube_t2111573 ** get_address_of_tinyCubeComponent_24() { return &___tinyCubeComponent_24; }
	inline void set_tinyCubeComponent_24(Cube_t2111573 * value)
	{
		___tinyCubeComponent_24 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeComponent_24, value);
	}

	inline static int32_t get_offset_of_cubeSkinComponent_25() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeSkinComponent_25)); }
	inline CubeSkin_t169434994 * get_cubeSkinComponent_25() const { return ___cubeSkinComponent_25; }
	inline CubeSkin_t169434994 ** get_address_of_cubeSkinComponent_25() { return &___cubeSkinComponent_25; }
	inline void set_cubeSkinComponent_25(CubeSkin_t169434994 * value)
	{
		___cubeSkinComponent_25 = value;
		Il2CppCodeGenWriteBarrier(&___cubeSkinComponent_25, value);
	}

	inline static int32_t get_offset_of_smallCubeSkinComponent_26() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeSkinComponent_26)); }
	inline SmallCubeSkin_t2881105241 * get_smallCubeSkinComponent_26() const { return ___smallCubeSkinComponent_26; }
	inline SmallCubeSkin_t2881105241 ** get_address_of_smallCubeSkinComponent_26() { return &___smallCubeSkinComponent_26; }
	inline void set_smallCubeSkinComponent_26(SmallCubeSkin_t2881105241 * value)
	{
		___smallCubeSkinComponent_26 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeSkinComponent_26, value);
	}

	inline static int32_t get_offset_of_tinyCubeSkinComponent_27() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeSkinComponent_27)); }
	inline SmallCubeSkin_t2881105241 * get_tinyCubeSkinComponent_27() const { return ___tinyCubeSkinComponent_27; }
	inline SmallCubeSkin_t2881105241 ** get_address_of_tinyCubeSkinComponent_27() { return &___tinyCubeSkinComponent_27; }
	inline void set_tinyCubeSkinComponent_27(SmallCubeSkin_t2881105241 * value)
	{
		___tinyCubeSkinComponent_27 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeSkinComponent_27, value);
	}

	inline static int32_t get_offset_of_cubeTrans_28() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeTrans_28)); }
	inline Transform_t284553113 * get_cubeTrans_28() const { return ___cubeTrans_28; }
	inline Transform_t284553113 ** get_address_of_cubeTrans_28() { return &___cubeTrans_28; }
	inline void set_cubeTrans_28(Transform_t284553113 * value)
	{
		___cubeTrans_28 = value;
		Il2CppCodeGenWriteBarrier(&___cubeTrans_28, value);
	}

	inline static int32_t get_offset_of_smallCubeTrans_29() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeTrans_29)); }
	inline Transform_t284553113 * get_smallCubeTrans_29() const { return ___smallCubeTrans_29; }
	inline Transform_t284553113 ** get_address_of_smallCubeTrans_29() { return &___smallCubeTrans_29; }
	inline void set_smallCubeTrans_29(Transform_t284553113 * value)
	{
		___smallCubeTrans_29 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeTrans_29, value);
	}

	inline static int32_t get_offset_of_tinyCubeTrans_30() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeTrans_30)); }
	inline Transform_t284553113 * get_tinyCubeTrans_30() const { return ___tinyCubeTrans_30; }
	inline Transform_t284553113 ** get_address_of_tinyCubeTrans_30() { return &___tinyCubeTrans_30; }
	inline void set_tinyCubeTrans_30(Transform_t284553113 * value)
	{
		___tinyCubeTrans_30 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeTrans_30, value);
	}

	inline static int32_t get_offset_of_goldTrans_31() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldTrans_31)); }
	inline Transform_t284553113 * get_goldTrans_31() const { return ___goldTrans_31; }
	inline Transform_t284553113 ** get_address_of_goldTrans_31() { return &___goldTrans_31; }
	inline void set_goldTrans_31(Transform_t284553113 * value)
	{
		___goldTrans_31 = value;
		Il2CppCodeGenWriteBarrier(&___goldTrans_31, value);
	}

	inline static int32_t get_offset_of_playerBreakingPartilceTrans_32() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___playerBreakingPartilceTrans_32)); }
	inline Transform_t284553113 * get_playerBreakingPartilceTrans_32() const { return ___playerBreakingPartilceTrans_32; }
	inline Transform_t284553113 ** get_address_of_playerBreakingPartilceTrans_32() { return &___playerBreakingPartilceTrans_32; }
	inline void set_playerBreakingPartilceTrans_32(Transform_t284553113 * value)
	{
		___playerBreakingPartilceTrans_32 = value;
		Il2CppCodeGenWriteBarrier(&___playerBreakingPartilceTrans_32, value);
	}

	inline static int32_t get_offset_of_goldParticlesTrans_33() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldParticlesTrans_33)); }
	inline Transform_t284553113 * get_goldParticlesTrans_33() const { return ___goldParticlesTrans_33; }
	inline Transform_t284553113 ** get_address_of_goldParticlesTrans_33() { return &___goldParticlesTrans_33; }
	inline void set_goldParticlesTrans_33(Transform_t284553113 * value)
	{
		___goldParticlesTrans_33 = value;
		Il2CppCodeGenWriteBarrier(&___goldParticlesTrans_33, value);
	}

	inline static int32_t get_offset_of_rewardedParticleTrans_34() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___rewardedParticleTrans_34)); }
	inline Transform_t284553113 * get_rewardedParticleTrans_34() const { return ___rewardedParticleTrans_34; }
	inline Transform_t284553113 ** get_address_of_rewardedParticleTrans_34() { return &___rewardedParticleTrans_34; }
	inline void set_rewardedParticleTrans_34(Transform_t284553113 * value)
	{
		___rewardedParticleTrans_34 = value;
		Il2CppCodeGenWriteBarrier(&___rewardedParticleTrans_34, value);
	}

	inline static int32_t get_offset_of_fixedParticleTrans_35() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___fixedParticleTrans_35)); }
	inline Transform_t284553113 * get_fixedParticleTrans_35() const { return ___fixedParticleTrans_35; }
	inline Transform_t284553113 ** get_address_of_fixedParticleTrans_35() { return &___fixedParticleTrans_35; }
	inline void set_fixedParticleTrans_35(Transform_t284553113 * value)
	{
		___fixedParticleTrans_35 = value;
		Il2CppCodeGenWriteBarrier(&___fixedParticleTrans_35, value);
	}

	inline static int32_t get_offset_of_cubeList_36() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeList_36)); }
	inline List_1_t514686775 * get_cubeList_36() const { return ___cubeList_36; }
	inline List_1_t514686775 ** get_address_of_cubeList_36() { return &___cubeList_36; }
	inline void set_cubeList_36(List_1_t514686775 * value)
	{
		___cubeList_36 = value;
		Il2CppCodeGenWriteBarrier(&___cubeList_36, value);
	}

	inline static int32_t get_offset_of_smallCubeList_37() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeList_37)); }
	inline List_1_t514686775 * get_smallCubeList_37() const { return ___smallCubeList_37; }
	inline List_1_t514686775 ** get_address_of_smallCubeList_37() { return &___smallCubeList_37; }
	inline void set_smallCubeList_37(List_1_t514686775 * value)
	{
		___smallCubeList_37 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeList_37, value);
	}

	inline static int32_t get_offset_of_tinyCubeList_38() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeList_38)); }
	inline List_1_t514686775 * get_tinyCubeList_38() const { return ___tinyCubeList_38; }
	inline List_1_t514686775 ** get_address_of_tinyCubeList_38() { return &___tinyCubeList_38; }
	inline void set_tinyCubeList_38(List_1_t514686775 * value)
	{
		___tinyCubeList_38 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeList_38, value);
	}

	inline static int32_t get_offset_of_goldList_39() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldList_39)); }
	inline List_1_t514686775 * get_goldList_39() const { return ___goldList_39; }
	inline List_1_t514686775 ** get_address_of_goldList_39() { return &___goldList_39; }
	inline void set_goldList_39(List_1_t514686775 * value)
	{
		___goldList_39 = value;
		Il2CppCodeGenWriteBarrier(&___goldList_39, value);
	}

	inline static int32_t get_offset_of_playerBreakingParticleList_40() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___playerBreakingParticleList_40)); }
	inline List_1_t514686775 * get_playerBreakingParticleList_40() const { return ___playerBreakingParticleList_40; }
	inline List_1_t514686775 ** get_address_of_playerBreakingParticleList_40() { return &___playerBreakingParticleList_40; }
	inline void set_playerBreakingParticleList_40(List_1_t514686775 * value)
	{
		___playerBreakingParticleList_40 = value;
		Il2CppCodeGenWriteBarrier(&___playerBreakingParticleList_40, value);
	}

	inline static int32_t get_offset_of_goldParticleList_41() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldParticleList_41)); }
	inline List_1_t514686775 * get_goldParticleList_41() const { return ___goldParticleList_41; }
	inline List_1_t514686775 ** get_address_of_goldParticleList_41() { return &___goldParticleList_41; }
	inline void set_goldParticleList_41(List_1_t514686775 * value)
	{
		___goldParticleList_41 = value;
		Il2CppCodeGenWriteBarrier(&___goldParticleList_41, value);
	}

	inline static int32_t get_offset_of_rewardedParticleList_42() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___rewardedParticleList_42)); }
	inline List_1_t514686775 * get_rewardedParticleList_42() const { return ___rewardedParticleList_42; }
	inline List_1_t514686775 ** get_address_of_rewardedParticleList_42() { return &___rewardedParticleList_42; }
	inline void set_rewardedParticleList_42(List_1_t514686775 * value)
	{
		___rewardedParticleList_42 = value;
		Il2CppCodeGenWriteBarrier(&___rewardedParticleList_42, value);
	}

	inline static int32_t get_offset_of_cubeTransList_43() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeTransList_43)); }
	inline List_1_t1081512082 * get_cubeTransList_43() const { return ___cubeTransList_43; }
	inline List_1_t1081512082 ** get_address_of_cubeTransList_43() { return &___cubeTransList_43; }
	inline void set_cubeTransList_43(List_1_t1081512082 * value)
	{
		___cubeTransList_43 = value;
		Il2CppCodeGenWriteBarrier(&___cubeTransList_43, value);
	}

	inline static int32_t get_offset_of_smallCubeTransList_44() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeTransList_44)); }
	inline List_1_t1081512082 * get_smallCubeTransList_44() const { return ___smallCubeTransList_44; }
	inline List_1_t1081512082 ** get_address_of_smallCubeTransList_44() { return &___smallCubeTransList_44; }
	inline void set_smallCubeTransList_44(List_1_t1081512082 * value)
	{
		___smallCubeTransList_44 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeTransList_44, value);
	}

	inline static int32_t get_offset_of_tinyCubeTransList_45() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeTransList_45)); }
	inline List_1_t1081512082 * get_tinyCubeTransList_45() const { return ___tinyCubeTransList_45; }
	inline List_1_t1081512082 ** get_address_of_tinyCubeTransList_45() { return &___tinyCubeTransList_45; }
	inline void set_tinyCubeTransList_45(List_1_t1081512082 * value)
	{
		___tinyCubeTransList_45 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeTransList_45, value);
	}

	inline static int32_t get_offset_of_goldTransList_46() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldTransList_46)); }
	inline List_1_t1081512082 * get_goldTransList_46() const { return ___goldTransList_46; }
	inline List_1_t1081512082 ** get_address_of_goldTransList_46() { return &___goldTransList_46; }
	inline void set_goldTransList_46(List_1_t1081512082 * value)
	{
		___goldTransList_46 = value;
		Il2CppCodeGenWriteBarrier(&___goldTransList_46, value);
	}

	inline static int32_t get_offset_of_playerBreakingParticleTransList_47() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___playerBreakingParticleTransList_47)); }
	inline List_1_t1081512082 * get_playerBreakingParticleTransList_47() const { return ___playerBreakingParticleTransList_47; }
	inline List_1_t1081512082 ** get_address_of_playerBreakingParticleTransList_47() { return &___playerBreakingParticleTransList_47; }
	inline void set_playerBreakingParticleTransList_47(List_1_t1081512082 * value)
	{
		___playerBreakingParticleTransList_47 = value;
		Il2CppCodeGenWriteBarrier(&___playerBreakingParticleTransList_47, value);
	}

	inline static int32_t get_offset_of_goldParticleTransList_48() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldParticleTransList_48)); }
	inline List_1_t1081512082 * get_goldParticleTransList_48() const { return ___goldParticleTransList_48; }
	inline List_1_t1081512082 ** get_address_of_goldParticleTransList_48() { return &___goldParticleTransList_48; }
	inline void set_goldParticleTransList_48(List_1_t1081512082 * value)
	{
		___goldParticleTransList_48 = value;
		Il2CppCodeGenWriteBarrier(&___goldParticleTransList_48, value);
	}

	inline static int32_t get_offset_of_rewardedParticleTransList_49() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___rewardedParticleTransList_49)); }
	inline List_1_t1081512082 * get_rewardedParticleTransList_49() const { return ___rewardedParticleTransList_49; }
	inline List_1_t1081512082 ** get_address_of_rewardedParticleTransList_49() { return &___rewardedParticleTransList_49; }
	inline void set_rewardedParticleTransList_49(List_1_t1081512082 * value)
	{
		___rewardedParticleTransList_49 = value;
		Il2CppCodeGenWriteBarrier(&___rewardedParticleTransList_49, value);
	}

	inline static int32_t get_offset_of_cubeComponentList_50() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeComponentList_50)); }
	inline List_1_t799070542 * get_cubeComponentList_50() const { return ___cubeComponentList_50; }
	inline List_1_t799070542 ** get_address_of_cubeComponentList_50() { return &___cubeComponentList_50; }
	inline void set_cubeComponentList_50(List_1_t799070542 * value)
	{
		___cubeComponentList_50 = value;
		Il2CppCodeGenWriteBarrier(&___cubeComponentList_50, value);
	}

	inline static int32_t get_offset_of_smallCubeComponentList_51() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeComponentList_51)); }
	inline List_1_t799070542 * get_smallCubeComponentList_51() const { return ___smallCubeComponentList_51; }
	inline List_1_t799070542 ** get_address_of_smallCubeComponentList_51() { return &___smallCubeComponentList_51; }
	inline void set_smallCubeComponentList_51(List_1_t799070542 * value)
	{
		___smallCubeComponentList_51 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeComponentList_51, value);
	}

	inline static int32_t get_offset_of_tinyCubeComponentList_52() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeComponentList_52)); }
	inline List_1_t799070542 * get_tinyCubeComponentList_52() const { return ___tinyCubeComponentList_52; }
	inline List_1_t799070542 ** get_address_of_tinyCubeComponentList_52() { return &___tinyCubeComponentList_52; }
	inline void set_tinyCubeComponentList_52(List_1_t799070542 * value)
	{
		___tinyCubeComponentList_52 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeComponentList_52, value);
	}

	inline static int32_t get_offset_of_cubeSkinComponentList_53() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeSkinComponentList_53)); }
	inline List_1_t966393963 * get_cubeSkinComponentList_53() const { return ___cubeSkinComponentList_53; }
	inline List_1_t966393963 ** get_address_of_cubeSkinComponentList_53() { return &___cubeSkinComponentList_53; }
	inline void set_cubeSkinComponentList_53(List_1_t966393963 * value)
	{
		___cubeSkinComponentList_53 = value;
		Il2CppCodeGenWriteBarrier(&___cubeSkinComponentList_53, value);
	}

	inline static int32_t get_offset_of_smallCubeSkinComponentList_54() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___smallCubeSkinComponentList_54)); }
	inline List_1_t3678064210 * get_smallCubeSkinComponentList_54() const { return ___smallCubeSkinComponentList_54; }
	inline List_1_t3678064210 ** get_address_of_smallCubeSkinComponentList_54() { return &___smallCubeSkinComponentList_54; }
	inline void set_smallCubeSkinComponentList_54(List_1_t3678064210 * value)
	{
		___smallCubeSkinComponentList_54 = value;
		Il2CppCodeGenWriteBarrier(&___smallCubeSkinComponentList_54, value);
	}

	inline static int32_t get_offset_of_tinyCubeSkinComponentList_55() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeSkinComponentList_55)); }
	inline List_1_t3678064210 * get_tinyCubeSkinComponentList_55() const { return ___tinyCubeSkinComponentList_55; }
	inline List_1_t3678064210 ** get_address_of_tinyCubeSkinComponentList_55() { return &___tinyCubeSkinComponentList_55; }
	inline void set_tinyCubeSkinComponentList_55(List_1_t3678064210 * value)
	{
		___tinyCubeSkinComponentList_55 = value;
		Il2CppCodeGenWriteBarrier(&___tinyCubeSkinComponentList_55, value);
	}

	inline static int32_t get_offset_of_goldScriptList_56() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldScriptList_56)); }
	inline List_1_t4113383174 * get_goldScriptList_56() const { return ___goldScriptList_56; }
	inline List_1_t4113383174 ** get_address_of_goldScriptList_56() { return &___goldScriptList_56; }
	inline void set_goldScriptList_56(List_1_t4113383174 * value)
	{
		___goldScriptList_56 = value;
		Il2CppCodeGenWriteBarrier(&___goldScriptList_56, value);
	}

	inline static int32_t get_offset_of_tinyCubeAmount_57() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___tinyCubeAmount_57)); }
	inline int32_t get_tinyCubeAmount_57() const { return ___tinyCubeAmount_57; }
	inline int32_t* get_address_of_tinyCubeAmount_57() { return &___tinyCubeAmount_57; }
	inline void set_tinyCubeAmount_57(int32_t value)
	{
		___tinyCubeAmount_57 = value;
	}

	inline static int32_t get_offset_of_cubeAmount_58() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___cubeAmount_58)); }
	inline int32_t get_cubeAmount_58() const { return ___cubeAmount_58; }
	inline int32_t* get_address_of_cubeAmount_58() { return &___cubeAmount_58; }
	inline void set_cubeAmount_58(int32_t value)
	{
		___cubeAmount_58 = value;
	}

	inline static int32_t get_offset_of_InitialCubeNum_59() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___InitialCubeNum_59)); }
	inline int32_t get_InitialCubeNum_59() const { return ___InitialCubeNum_59; }
	inline int32_t* get_address_of_InitialCubeNum_59() { return &___InitialCubeNum_59; }
	inline void set_InitialCubeNum_59(int32_t value)
	{
		___InitialCubeNum_59 = value;
	}

	inline static int32_t get_offset_of_isFirst_60() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isFirst_60)); }
	inline bool get_isFirst_60() const { return ___isFirst_60; }
	inline bool* get_address_of_isFirst_60() { return &___isFirst_60; }
	inline void set_isFirst_60(bool value)
	{
		___isFirst_60 = value;
	}

	inline static int32_t get_offset_of_goldAmount_61() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___goldAmount_61)); }
	inline int32_t get_goldAmount_61() const { return ___goldAmount_61; }
	inline int32_t* get_address_of_goldAmount_61() { return &___goldAmount_61; }
	inline void set_goldAmount_61(int32_t value)
	{
		___goldAmount_61 = value;
	}

	inline static int32_t get_offset_of_xPos_62() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___xPos_62)); }
	inline float get_xPos_62() const { return ___xPos_62; }
	inline float* get_address_of_xPos_62() { return &___xPos_62; }
	inline void set_xPos_62(float value)
	{
		___xPos_62 = value;
	}

	inline static int32_t get_offset_of_yPos_63() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___yPos_63)); }
	inline float get_yPos_63() const { return ___yPos_63; }
	inline float* get_address_of_yPos_63() { return &___yPos_63; }
	inline void set_yPos_63(float value)
	{
		___yPos_63 = value;
	}

	inline static int32_t get_offset_of_unit_64() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___unit_64)); }
	inline float get_unit_64() const { return ___unit_64; }
	inline float* get_address_of_unit_64() { return &___unit_64; }
	inline void set_unit_64(float value)
	{
		___unit_64 = value;
	}

	inline static int32_t get_offset_of_switchPlusMinus_65() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___switchPlusMinus_65)); }
	inline bool get_switchPlusMinus_65() const { return ___switchPlusMinus_65; }
	inline bool* get_address_of_switchPlusMinus_65() { return &___switchPlusMinus_65; }
	inline void set_switchPlusMinus_65(bool value)
	{
		___switchPlusMinus_65 = value;
	}

	inline static int32_t get_offset_of_wideSize_66() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___wideSize_66)); }
	inline int32_t get_wideSize_66() const { return ___wideSize_66; }
	inline int32_t* get_address_of_wideSize_66() { return &___wideSize_66; }
	inline void set_wideSize_66(int32_t value)
	{
		___wideSize_66 = value;
	}

	inline static int32_t get_offset_of_shapeValue_67() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___shapeValue_67)); }
	inline int32_t get_shapeValue_67() const { return ___shapeValue_67; }
	inline int32_t* get_address_of_shapeValue_67() { return &___shapeValue_67; }
	inline void set_shapeValue_67(int32_t value)
	{
		___shapeValue_67 = value;
	}

	inline static int32_t get_offset_of_diaPosX_68() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___diaPosX_68)); }
	inline int32_t get_diaPosX_68() const { return ___diaPosX_68; }
	inline int32_t* get_address_of_diaPosX_68() { return &___diaPosX_68; }
	inline void set_diaPosX_68(int32_t value)
	{
		___diaPosX_68 = value;
	}

	inline static int32_t get_offset_of_numOfSpace_69() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___numOfSpace_69)); }
	inline int32_t get_numOfSpace_69() const { return ___numOfSpace_69; }
	inline int32_t* get_address_of_numOfSpace_69() { return &___numOfSpace_69; }
	inline void set_numOfSpace_69(int32_t value)
	{
		___numOfSpace_69 = value;
	}

	inline static int32_t get_offset_of_maxSpace_70() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___maxSpace_70)); }
	inline int32_t get_maxSpace_70() const { return ___maxSpace_70; }
	inline int32_t* get_address_of_maxSpace_70() { return &___maxSpace_70; }
	inline void set_maxSpace_70(int32_t value)
	{
		___maxSpace_70 = value;
	}

	inline static int32_t get_offset_of_countShape_71() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___countShape_71)); }
	inline int32_t get_countShape_71() const { return ___countShape_71; }
	inline int32_t* get_address_of_countShape_71() { return &___countShape_71; }
	inline void set_countShape_71(int32_t value)
	{
		___countShape_71 = value;
	}

	inline static int32_t get_offset_of_isOneRound_72() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isOneRound_72)); }
	inline bool get_isOneRound_72() const { return ___isOneRound_72; }
	inline bool* get_address_of_isOneRound_72() { return &___isOneRound_72; }
	inline void set_isOneRound_72(bool value)
	{
		___isOneRound_72 = value;
	}

	inline static int32_t get_offset_of_pauseUnit_73() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___pauseUnit_73)); }
	inline int32_t get_pauseUnit_73() const { return ___pauseUnit_73; }
	inline int32_t* get_address_of_pauseUnit_73() { return &___pauseUnit_73; }
	inline void set_pauseUnit_73(int32_t value)
	{
		___pauseUnit_73 = value;
	}

	inline static int32_t get_offset_of_flatUnit_74() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___flatUnit_74)); }
	inline int32_t get_flatUnit_74() const { return ___flatUnit_74; }
	inline int32_t* get_address_of_flatUnit_74() { return &___flatUnit_74; }
	inline void set_flatUnit_74(int32_t value)
	{
		___flatUnit_74 = value;
	}

	inline static int32_t get_offset_of_isExtented_75() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isExtented_75)); }
	inline bool get_isExtented_75() const { return ___isExtented_75; }
	inline bool* get_address_of_isExtented_75() { return &___isExtented_75; }
	inline void set_isExtented_75(bool value)
	{
		___isExtented_75 = value;
	}

	inline static int32_t get_offset_of_isDouble_76() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isDouble_76)); }
	inline bool get_isDouble_76() const { return ___isDouble_76; }
	inline bool* get_address_of_isDouble_76() { return &___isDouble_76; }
	inline void set_isDouble_76(bool value)
	{
		___isDouble_76 = value;
	}

	inline static int32_t get_offset_of_isV4_77() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isV4_77)); }
	inline bool get_isV4_77() const { return ___isV4_77; }
	inline bool* get_address_of_isV4_77() { return &___isV4_77; }
	inline void set_isV4_77(bool value)
	{
		___isV4_77 = value;
	}

	inline static int32_t get_offset_of_spikeSize_78() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___spikeSize_78)); }
	inline int32_t get_spikeSize_78() const { return ___spikeSize_78; }
	inline int32_t* get_address_of_spikeSize_78() { return &___spikeSize_78; }
	inline void set_spikeSize_78(int32_t value)
	{
		___spikeSize_78 = value;
	}

	inline static int32_t get_offset_of_numOfSpace1_79() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___numOfSpace1_79)); }
	inline int32_t get_numOfSpace1_79() const { return ___numOfSpace1_79; }
	inline int32_t* get_address_of_numOfSpace1_79() { return &___numOfSpace1_79; }
	inline void set_numOfSpace1_79(int32_t value)
	{
		___numOfSpace1_79 = value;
	}

	inline static int32_t get_offset_of_maxSpace1_80() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___maxSpace1_80)); }
	inline int32_t get_maxSpace1_80() const { return ___maxSpace1_80; }
	inline int32_t* get_address_of_maxSpace1_80() { return &___maxSpace1_80; }
	inline void set_maxSpace1_80(int32_t value)
	{
		___maxSpace1_80 = value;
	}

	inline static int32_t get_offset_of_countPat_81() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___countPat_81)); }
	inline int32_t get_countPat_81() const { return ___countPat_81; }
	inline int32_t* get_address_of_countPat_81() { return &___countPat_81; }
	inline void set_countPat_81(int32_t value)
	{
		___countPat_81 = value;
	}

	inline static int32_t get_offset_of_countPattern_82() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___countPattern_82)); }
	inline int32_t get_countPattern_82() const { return ___countPattern_82; }
	inline int32_t* get_address_of_countPattern_82() { return &___countPattern_82; }
	inline void set_countPattern_82(int32_t value)
	{
		___countPattern_82 = value;
	}

	inline static int32_t get_offset_of_isPattern_83() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isPattern_83)); }
	inline bool get_isPattern_83() const { return ___isPattern_83; }
	inline bool* get_address_of_isPattern_83() { return &___isPattern_83; }
	inline void set_isPattern_83(bool value)
	{
		___isPattern_83 = value;
	}

	inline static int32_t get_offset_of_isStraight_84() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isStraight_84)); }
	inline bool get_isStraight_84() const { return ___isStraight_84; }
	inline bool* get_address_of_isStraight_84() { return &___isStraight_84; }
	inline void set_isStraight_84(bool value)
	{
		___isStraight_84 = value;
	}

	inline static int32_t get_offset_of_isMidLineShape_85() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isMidLineShape_85)); }
	inline bool get_isMidLineShape_85() const { return ___isMidLineShape_85; }
	inline bool* get_address_of_isMidLineShape_85() { return &___isMidLineShape_85; }
	inline void set_isMidLineShape_85(bool value)
	{
		___isMidLineShape_85 = value;
	}

	inline static int32_t get_offset_of_isTwoColorSwitch_86() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___isTwoColorSwitch_86)); }
	inline bool get_isTwoColorSwitch_86() const { return ___isTwoColorSwitch_86; }
	inline bool* get_address_of_isTwoColorSwitch_86() { return &___isTwoColorSwitch_86; }
	inline void set_isTwoColorSwitch_86(bool value)
	{
		___isTwoColorSwitch_86 = value;
	}

	inline static int32_t get_offset_of_colorNum_87() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___colorNum_87)); }
	inline int32_t get_colorNum_87() const { return ___colorNum_87; }
	inline int32_t* get_address_of_colorNum_87() { return &___colorNum_87; }
	inline void set_colorNum_87(int32_t value)
	{
		___colorNum_87 = value;
	}

	inline static int32_t get_offset_of_numOfSwitches_88() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___numOfSwitches_88)); }
	inline int32_t get_numOfSwitches_88() const { return ___numOfSwitches_88; }
	inline int32_t* get_address_of_numOfSwitches_88() { return &___numOfSwitches_88; }
	inline void set_numOfSwitches_88(int32_t value)
	{
		___numOfSwitches_88 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
