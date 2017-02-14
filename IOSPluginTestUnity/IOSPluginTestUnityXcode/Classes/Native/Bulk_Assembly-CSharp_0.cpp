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
			goto IL_002a;
		}
	}
	{
		Renderer_t257310565 * L_2 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_2);
		Material_t193706927 * L_3 = Renderer_get_material_m2553789785(L_2, /*hidden argument*/NULL);
		Color_t2020392075  L_4 = Color_get_green_m2671273823(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_color_m577844242(L_3, L_4, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002a:
	{
		Renderer_t257310565 * L_5 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_5);
		Material_t193706927 * L_6 = Renderer_get_material_m2553789785(L_5, /*hidden argument*/NULL);
		Color_t2020392075  L_7 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_set_color_m577844242(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
