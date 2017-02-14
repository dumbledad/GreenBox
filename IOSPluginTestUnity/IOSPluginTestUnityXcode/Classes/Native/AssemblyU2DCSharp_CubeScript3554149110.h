#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MonoDLLTest.Calculations
struct Calculations_t3126126952;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeScript
struct  CubeScript_t3554149110  : public MonoBehaviour_t1158329972
{
public:
	// MonoDLLTest.Calculations CubeScript::calculations
	Calculations_t3126126952 * ___calculations_2;

public:
	inline static int32_t get_offset_of_calculations_2() { return static_cast<int32_t>(offsetof(CubeScript_t3554149110, ___calculations_2)); }
	inline Calculations_t3126126952 * get_calculations_2() const { return ___calculations_2; }
	inline Calculations_t3126126952 ** get_address_of_calculations_2() { return &___calculations_2; }
	inline void set_calculations_2(Calculations_t3126126952 * value)
	{
		___calculations_2 = value;
		Il2CppCodeGenWriteBarrier(&___calculations_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
