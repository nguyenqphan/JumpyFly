#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UpdateScore
struct UpdateScore_t1082839849;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2959286891;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2030462110;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Purchaser
struct  Purchaser_t212450161  : public MonoBehaviour_t3012272455
{
public:
	// UpdateScore Purchaser::updateScore
	UpdateScore_t1082839849 * ___updateScore_2;

public:
	inline static int32_t get_offset_of_updateScore_2() { return static_cast<int32_t>(offsetof(Purchaser_t212450161, ___updateScore_2)); }
	inline UpdateScore_t1082839849 * get_updateScore_2() const { return ___updateScore_2; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_2() { return &___updateScore_2; }
	inline void set_updateScore_2(UpdateScore_t1082839849 * value)
	{
		___updateScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_2, value);
	}
};

struct Purchaser_t212450161_StaticFields
{
public:
	// UnityEngine.Purchasing.IStoreController Purchaser::m_StoreController
	Il2CppObject * ___m_StoreController_3;
	// UnityEngine.Purchasing.IExtensionProvider Purchaser::m_StoreExtensionProvider
	Il2CppObject * ___m_StoreExtensionProvider_4;
	// System.String Purchaser::Consumable300
	String_t* ___Consumable300_5;
	// System.String Purchaser::Consumable1000
	String_t* ___Consumable1000_6;
	// System.String Purchaser::Consumable3000
	String_t* ___Consumable3000_7;
	// System.String Purchaser::Consumable9000
	String_t* ___Consumable9000_8;
	// System.String Purchaser::kProductIDNonConsumable
	String_t* ___kProductIDNonConsumable_9;
	// System.String Purchaser::kProductIDSubscription
	String_t* ___kProductIDSubscription_10;
	// System.String Purchaser::AProduct9000Diamonds
	String_t* ___AProduct9000Diamonds_11;
	// System.String Purchaser::AProduct3000Diamonds
	String_t* ___AProduct3000Diamonds_12;
	// System.String Purchaser::AProduct1000Diamonds
	String_t* ___AProduct1000Diamonds_13;
	// System.String Purchaser::AProduct300Diamonds
	String_t* ___AProduct300Diamonds_14;
	// System.String Purchaser::kProductNameAppleNonConsumable
	String_t* ___kProductNameAppleNonConsumable_15;
	// System.String Purchaser::kProductNameAppleSubscription
	String_t* ___kProductNameAppleSubscription_16;
	// System.String Purchaser::GProduct9000Diamonds
	String_t* ___GProduct9000Diamonds_17;
	// System.String Purchaser::GProduct3000Diamonds
	String_t* ___GProduct3000Diamonds_18;
	// System.String Purchaser::GProduct1000Diamonds
	String_t* ___GProduct1000Diamonds_19;
	// System.String Purchaser::GProduct300Diamonds
	String_t* ___GProduct300Diamonds_20;
	// System.String Purchaser::kProductNameGooglePlayNonConsumable
	String_t* ___kProductNameGooglePlayNonConsumable_21;
	// System.String Purchaser::kProductNameGooglePlaySubscription
	String_t* ___kProductNameGooglePlaySubscription_22;
	// System.Action`1<System.Boolean> Purchaser::<>f__am$cache15
	Action_1_t359458046 * ___U3CU3Ef__amU24cache15_23;

public:
	inline static int32_t get_offset_of_m_StoreController_3() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___m_StoreController_3)); }
	inline Il2CppObject * get_m_StoreController_3() const { return ___m_StoreController_3; }
	inline Il2CppObject ** get_address_of_m_StoreController_3() { return &___m_StoreController_3; }
	inline void set_m_StoreController_3(Il2CppObject * value)
	{
		___m_StoreController_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreController_3, value);
	}

	inline static int32_t get_offset_of_m_StoreExtensionProvider_4() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___m_StoreExtensionProvider_4)); }
	inline Il2CppObject * get_m_StoreExtensionProvider_4() const { return ___m_StoreExtensionProvider_4; }
	inline Il2CppObject ** get_address_of_m_StoreExtensionProvider_4() { return &___m_StoreExtensionProvider_4; }
	inline void set_m_StoreExtensionProvider_4(Il2CppObject * value)
	{
		___m_StoreExtensionProvider_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreExtensionProvider_4, value);
	}

	inline static int32_t get_offset_of_Consumable300_5() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___Consumable300_5)); }
	inline String_t* get_Consumable300_5() const { return ___Consumable300_5; }
	inline String_t** get_address_of_Consumable300_5() { return &___Consumable300_5; }
	inline void set_Consumable300_5(String_t* value)
	{
		___Consumable300_5 = value;
		Il2CppCodeGenWriteBarrier(&___Consumable300_5, value);
	}

	inline static int32_t get_offset_of_Consumable1000_6() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___Consumable1000_6)); }
	inline String_t* get_Consumable1000_6() const { return ___Consumable1000_6; }
	inline String_t** get_address_of_Consumable1000_6() { return &___Consumable1000_6; }
	inline void set_Consumable1000_6(String_t* value)
	{
		___Consumable1000_6 = value;
		Il2CppCodeGenWriteBarrier(&___Consumable1000_6, value);
	}

	inline static int32_t get_offset_of_Consumable3000_7() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___Consumable3000_7)); }
	inline String_t* get_Consumable3000_7() const { return ___Consumable3000_7; }
	inline String_t** get_address_of_Consumable3000_7() { return &___Consumable3000_7; }
	inline void set_Consumable3000_7(String_t* value)
	{
		___Consumable3000_7 = value;
		Il2CppCodeGenWriteBarrier(&___Consumable3000_7, value);
	}

	inline static int32_t get_offset_of_Consumable9000_8() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___Consumable9000_8)); }
	inline String_t* get_Consumable9000_8() const { return ___Consumable9000_8; }
	inline String_t** get_address_of_Consumable9000_8() { return &___Consumable9000_8; }
	inline void set_Consumable9000_8(String_t* value)
	{
		___Consumable9000_8 = value;
		Il2CppCodeGenWriteBarrier(&___Consumable9000_8, value);
	}

	inline static int32_t get_offset_of_kProductIDNonConsumable_9() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductIDNonConsumable_9)); }
	inline String_t* get_kProductIDNonConsumable_9() const { return ___kProductIDNonConsumable_9; }
	inline String_t** get_address_of_kProductIDNonConsumable_9() { return &___kProductIDNonConsumable_9; }
	inline void set_kProductIDNonConsumable_9(String_t* value)
	{
		___kProductIDNonConsumable_9 = value;
		Il2CppCodeGenWriteBarrier(&___kProductIDNonConsumable_9, value);
	}

	inline static int32_t get_offset_of_kProductIDSubscription_10() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductIDSubscription_10)); }
	inline String_t* get_kProductIDSubscription_10() const { return ___kProductIDSubscription_10; }
	inline String_t** get_address_of_kProductIDSubscription_10() { return &___kProductIDSubscription_10; }
	inline void set_kProductIDSubscription_10(String_t* value)
	{
		___kProductIDSubscription_10 = value;
		Il2CppCodeGenWriteBarrier(&___kProductIDSubscription_10, value);
	}

	inline static int32_t get_offset_of_AProduct9000Diamonds_11() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___AProduct9000Diamonds_11)); }
	inline String_t* get_AProduct9000Diamonds_11() const { return ___AProduct9000Diamonds_11; }
	inline String_t** get_address_of_AProduct9000Diamonds_11() { return &___AProduct9000Diamonds_11; }
	inline void set_AProduct9000Diamonds_11(String_t* value)
	{
		___AProduct9000Diamonds_11 = value;
		Il2CppCodeGenWriteBarrier(&___AProduct9000Diamonds_11, value);
	}

	inline static int32_t get_offset_of_AProduct3000Diamonds_12() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___AProduct3000Diamonds_12)); }
	inline String_t* get_AProduct3000Diamonds_12() const { return ___AProduct3000Diamonds_12; }
	inline String_t** get_address_of_AProduct3000Diamonds_12() { return &___AProduct3000Diamonds_12; }
	inline void set_AProduct3000Diamonds_12(String_t* value)
	{
		___AProduct3000Diamonds_12 = value;
		Il2CppCodeGenWriteBarrier(&___AProduct3000Diamonds_12, value);
	}

	inline static int32_t get_offset_of_AProduct1000Diamonds_13() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___AProduct1000Diamonds_13)); }
	inline String_t* get_AProduct1000Diamonds_13() const { return ___AProduct1000Diamonds_13; }
	inline String_t** get_address_of_AProduct1000Diamonds_13() { return &___AProduct1000Diamonds_13; }
	inline void set_AProduct1000Diamonds_13(String_t* value)
	{
		___AProduct1000Diamonds_13 = value;
		Il2CppCodeGenWriteBarrier(&___AProduct1000Diamonds_13, value);
	}

	inline static int32_t get_offset_of_AProduct300Diamonds_14() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___AProduct300Diamonds_14)); }
	inline String_t* get_AProduct300Diamonds_14() const { return ___AProduct300Diamonds_14; }
	inline String_t** get_address_of_AProduct300Diamonds_14() { return &___AProduct300Diamonds_14; }
	inline void set_AProduct300Diamonds_14(String_t* value)
	{
		___AProduct300Diamonds_14 = value;
		Il2CppCodeGenWriteBarrier(&___AProduct300Diamonds_14, value);
	}

	inline static int32_t get_offset_of_kProductNameAppleNonConsumable_15() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameAppleNonConsumable_15)); }
	inline String_t* get_kProductNameAppleNonConsumable_15() const { return ___kProductNameAppleNonConsumable_15; }
	inline String_t** get_address_of_kProductNameAppleNonConsumable_15() { return &___kProductNameAppleNonConsumable_15; }
	inline void set_kProductNameAppleNonConsumable_15(String_t* value)
	{
		___kProductNameAppleNonConsumable_15 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameAppleNonConsumable_15, value);
	}

	inline static int32_t get_offset_of_kProductNameAppleSubscription_16() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameAppleSubscription_16)); }
	inline String_t* get_kProductNameAppleSubscription_16() const { return ___kProductNameAppleSubscription_16; }
	inline String_t** get_address_of_kProductNameAppleSubscription_16() { return &___kProductNameAppleSubscription_16; }
	inline void set_kProductNameAppleSubscription_16(String_t* value)
	{
		___kProductNameAppleSubscription_16 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameAppleSubscription_16, value);
	}

	inline static int32_t get_offset_of_GProduct9000Diamonds_17() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___GProduct9000Diamonds_17)); }
	inline String_t* get_GProduct9000Diamonds_17() const { return ___GProduct9000Diamonds_17; }
	inline String_t** get_address_of_GProduct9000Diamonds_17() { return &___GProduct9000Diamonds_17; }
	inline void set_GProduct9000Diamonds_17(String_t* value)
	{
		___GProduct9000Diamonds_17 = value;
		Il2CppCodeGenWriteBarrier(&___GProduct9000Diamonds_17, value);
	}

	inline static int32_t get_offset_of_GProduct3000Diamonds_18() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___GProduct3000Diamonds_18)); }
	inline String_t* get_GProduct3000Diamonds_18() const { return ___GProduct3000Diamonds_18; }
	inline String_t** get_address_of_GProduct3000Diamonds_18() { return &___GProduct3000Diamonds_18; }
	inline void set_GProduct3000Diamonds_18(String_t* value)
	{
		___GProduct3000Diamonds_18 = value;
		Il2CppCodeGenWriteBarrier(&___GProduct3000Diamonds_18, value);
	}

	inline static int32_t get_offset_of_GProduct1000Diamonds_19() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___GProduct1000Diamonds_19)); }
	inline String_t* get_GProduct1000Diamonds_19() const { return ___GProduct1000Diamonds_19; }
	inline String_t** get_address_of_GProduct1000Diamonds_19() { return &___GProduct1000Diamonds_19; }
	inline void set_GProduct1000Diamonds_19(String_t* value)
	{
		___GProduct1000Diamonds_19 = value;
		Il2CppCodeGenWriteBarrier(&___GProduct1000Diamonds_19, value);
	}

	inline static int32_t get_offset_of_GProduct300Diamonds_20() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___GProduct300Diamonds_20)); }
	inline String_t* get_GProduct300Diamonds_20() const { return ___GProduct300Diamonds_20; }
	inline String_t** get_address_of_GProduct300Diamonds_20() { return &___GProduct300Diamonds_20; }
	inline void set_GProduct300Diamonds_20(String_t* value)
	{
		___GProduct300Diamonds_20 = value;
		Il2CppCodeGenWriteBarrier(&___GProduct300Diamonds_20, value);
	}

	inline static int32_t get_offset_of_kProductNameGooglePlayNonConsumable_21() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameGooglePlayNonConsumable_21)); }
	inline String_t* get_kProductNameGooglePlayNonConsumable_21() const { return ___kProductNameGooglePlayNonConsumable_21; }
	inline String_t** get_address_of_kProductNameGooglePlayNonConsumable_21() { return &___kProductNameGooglePlayNonConsumable_21; }
	inline void set_kProductNameGooglePlayNonConsumable_21(String_t* value)
	{
		___kProductNameGooglePlayNonConsumable_21 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameGooglePlayNonConsumable_21, value);
	}

	inline static int32_t get_offset_of_kProductNameGooglePlaySubscription_22() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___kProductNameGooglePlaySubscription_22)); }
	inline String_t* get_kProductNameGooglePlaySubscription_22() const { return ___kProductNameGooglePlaySubscription_22; }
	inline String_t** get_address_of_kProductNameGooglePlaySubscription_22() { return &___kProductNameGooglePlaySubscription_22; }
	inline void set_kProductNameGooglePlaySubscription_22(String_t* value)
	{
		___kProductNameGooglePlaySubscription_22 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameGooglePlaySubscription_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_23() { return static_cast<int32_t>(offsetof(Purchaser_t212450161_StaticFields, ___U3CU3Ef__amU24cache15_23)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cache15_23() const { return ___U3CU3Ef__amU24cache15_23; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cache15_23() { return &___U3CU3Ef__amU24cache15_23; }
	inline void set_U3CU3Ef__amU24cache15_23(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cache15_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
