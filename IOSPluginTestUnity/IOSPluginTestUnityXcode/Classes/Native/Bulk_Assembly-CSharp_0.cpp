#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CubeScript
struct CubeScript_t3554149110;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_CubeScript3554149110.h"
#include "AssemblyU2DCSharp_CubeScript3554149110MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t257310565_m772028041(__this, method) ((  Renderer_t257310565 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CubeScript::.ctor()
extern "C"  void CubeScript__ctor_m853278953 (CubeScript_t3554149110 * __this, const MethodInfo* method)
{
	{
		__this->set_toSquare_2(2);
		__this->set_squared_3((-1));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL square(int32_t);
// System.Int32 CubeScript::square(System.Int32)
extern "C"  int32_t CubeScript_square_m2633645243 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(square)(___x0);

	return returnValue;
}
// System.Void CubeScript::Start()
extern "C"  void CubeScript_Start_m3582001249 (CubeScript_t3554149110 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_toSquare_2();
		int32_t L_1 = CubeScript_square_m2633645243(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_squared_3(L_1);
		return;
	}
}
// System.Void CubeScript::Update()
extern const MethodInfo* Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var;
extern const uint32_t CubeScript_Update_m2971544568_MetadataUsageId;
extern "C"  void CubeScript_Update_m2971544568 (CubeScript_t3554149110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeScript_Update_m2971544568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_squared_3();
		int32_t L_1 = __this->get_toSquare_2();
		int32_t L_2 = __this->get_toSquare_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)L_1*(int32_t)L_2))))))
		{
			goto IL_0032;
		}
	}
	{
		Renderer_t257310565 * L_3 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_3);
		Material_t193706927 * L_4 = Renderer_get_material_m2553789785(L_3, /*hidden argument*/NULL);
		Color_t2020392075  L_5 = Color_get_green_m2671273823(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_set_color_m577844242(L_4, L_5, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_0032:
	{
		int32_t L_6 = __this->get_squared_3();
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0058;
		}
	}
	{
		Renderer_t257310565 * L_7 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_7);
		Material_t193706927 * L_8 = Renderer_get_material_m2553789785(L_7, /*hidden argument*/NULL);
		Color_t2020392075  L_9 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_m577844242(L_8, L_9, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_0058:
	{
		Renderer_t257310565 * L_10 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_10);
		Material_t193706927 * L_11 = Renderer_get_material_m2553789785(L_10, /*hidden argument*/NULL);
		Color_t2020392075  L_12 = Color_get_red_m2410286591(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_set_color_m577844242(L_11, L_12, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
