﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Action
struct Action_t437523947;

#include "mscorlib_System_Array2840145358.h"
#include "System_Core_System_Collections_Generic_HashSet_1_L1745155715.h"
#include "System_Core_System_Collections_Generic_HashSet_1_L1823641000.h"
#include "System_Core_System_Action437523947.h"

#pragma once
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t808175634  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Link_t1745155715  m_Items[1];

public:
	inline Link_t1745155715  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Link_t1745155715 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Link_t1745155715  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.HashSet`1/Link<UnityEngine.Purchasing.ProductDefinition>[]
struct LinkU5BU5D_t2960359097  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Link_t1823641000  m_Items[1];

public:
	inline Link_t1823641000  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Link_t1823641000 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Link_t1823641000  value)
	{
		m_Items[index] = value;
	}
};
// System.Action[]
struct ActionU5BU5D_t546010634  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Action_t437523947 * m_Items[1];

public:
	inline Action_t437523947 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Action_t437523947 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Action_t437523947 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
