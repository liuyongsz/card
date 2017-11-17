#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t2284140720;

#include "mscorlib_System_Array3829468939.h"
#include "DOTween_DG_Tweening_TweenCallback3697142134.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_ABSSequentiable2284140720.h"

#pragma once
// DG.Tweening.TweenCallback[]
struct TweenCallbackU5BU5D_t3612304371  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TweenCallback_t3697142134 * m_Items[1];

public:
	inline TweenCallback_t3697142134 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TweenCallback_t3697142134 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TweenCallback_t3697142134 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Tween[]
struct TweenU5BU5D_t672698288  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Tween_t278478013 * m_Items[1];

public:
	inline Tween_t278478013 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tween_t278478013 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tween_t278478013 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// DG.Tweening.Core.ABSSequentiable[]
struct ABSSequentiableU5BU5D_t2711019153  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ABSSequentiable_t2284140720 * m_Items[1];

public:
	inline ABSSequentiable_t2284140720 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ABSSequentiable_t2284140720 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ABSSequentiable_t2284140720 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
