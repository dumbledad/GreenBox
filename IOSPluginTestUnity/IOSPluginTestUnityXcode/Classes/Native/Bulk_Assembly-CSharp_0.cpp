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
#include "MonoDLLTest_MonoDLLTest_Calculations3126126952MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "MonoDLLTest_MonoDLLTest_Calculations3126126952.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
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
extern Il2CppClass* Calculations_t3126126952_il2cpp_TypeInfo_var;
extern const uint32_t CubeScript__ctor_m853278953_MetadataUsageId;
extern "C"  void CubeScript__ctor_m853278953 (CubeScript_t3554149110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeScript__ctor_m853278953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Calculations_t3126126952 * L_0 = (Calculations_t3126126952 *)il2cpp_codegen_object_new(Calculations_t3126126952_il2cpp_TypeInfo_var);
		Calculations__ctor_m2917165631(L_0, /*hidden argument*/NULL);
		__this->set_calculations_2(L_0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CubeScript::Start()
extern "C"  void CubeScript_Start_m3582001249 (CubeScript_t3554149110 * __this, const MethodInfo* method)
{
	{
		Calculations_t3126126952 * L_0 = __this->get_calculations_2();
		NullCheck(L_0);
		Calculations_Init_m1952284929(L_0, /*hidden argument*/NULL);
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
		Calculations_t3126126952 * L_0 = __this->get_calculations_2();
		NullCheck(L_0);
		bool L_1 = Calculations_get_isSquared_m3690501061(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Calculations_t3126126952 * L_2 = __this->get_calculations_2();
		NullCheck(L_2);
		bool L_3 = Calculations_get_isCubed_m710668369(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		Renderer_t257310565 * L_4 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_4);
		Material_t193706927 * L_5 = Renderer_get_material_m2553789785(L_4, /*hidden argument*/NULL);
		Color_t2020392075  L_6 = Color_get_magenta_m3193089961(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_set_color_m577844242(L_5, L_6, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_003a:
	{
		Renderer_t257310565 * L_7 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_7);
		Material_t193706927 * L_8 = Renderer_get_material_m2553789785(L_7, /*hidden argument*/NULL);
		Color_t2020392075  L_9 = Color_get_green_m2671273823(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_m577844242(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004f:
	{
		goto IL_0069;
	}

IL_0054:
	{
		Renderer_t257310565 * L_10 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_10);
		Material_t193706927 * L_11 = Renderer_get_material_m2553789785(L_10, /*hidden argument*/NULL);
		Color_t2020392075  L_12 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_set_color_m577844242(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
