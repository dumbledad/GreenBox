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
// CubeScript/CalculationCallback
struct CalculationCallback_t624124251;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

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
#include "AssemblyU2DCSharp_CubeScript_CalculationCallback624124251.h"
#include "AssemblyU2DCSharp_CubeScript_CalculationCallback624124251MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_AsyncCallback163412349.h"

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
		__this->set_toCube_4(3);
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
extern "C" void DEFAULT_CALL setCubeCallback(int32_t, Il2CppMethodPointer);
// System.Void CubeScript::setCubeCallback(System.Int32,CubeScript/CalculationCallback)
extern "C"  void CubeScript_setCubeCallback_m261719047 (Il2CppObject * __this /* static, unused */, int32_t ___x0, CalculationCallback_t624124251 * ___callback1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setCubeCallback)(___x0, ____callback1_marshaled);

}
// System.Void CubeScript::Start()
extern Il2CppClass* CubeScript_t3554149110_il2cpp_TypeInfo_var;
extern Il2CppClass* CalculationCallback_t624124251_il2cpp_TypeInfo_var;
extern const MethodInfo* CubeScript_calculationCallback_m1093430854_MethodInfo_var;
extern const uint32_t CubeScript_Start_m3582001249_MetadataUsageId;
extern "C"  void CubeScript_Start_m3582001249 (CubeScript_t3554149110 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeScript_Start_m3582001249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = __this->get_toSquare_2();
		IL2CPP_RUNTIME_CLASS_INIT(CubeScript_t3554149110_il2cpp_TypeInfo_var);
		int32_t L_1 = CubeScript_square_m2633645243(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_squared_3(L_1);
		int32_t L_2 = __this->get_toCube_4();
		CalculationCallback_t624124251 * L_3 = ((CubeScript_t3554149110_StaticFields*)CubeScript_t3554149110_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__mgU24cache0_6();
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_002f;
		}
	}
	{
		IntPtr_t L_4;
		L_4.set_m_value_0((void*)(void*)CubeScript_calculationCallback_m1093430854_MethodInfo_var);
		CalculationCallback_t624124251 * L_5 = (CalculationCallback_t624124251 *)il2cpp_codegen_object_new(CalculationCallback_t624124251_il2cpp_TypeInfo_var);
		CalculationCallback__ctor_m1820545586(L_5, NULL, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CubeScript_t3554149110_il2cpp_TypeInfo_var);
		((CubeScript_t3554149110_StaticFields*)CubeScript_t3554149110_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__mgU24cache0_6(L_5);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CubeScript_t3554149110_il2cpp_TypeInfo_var);
		CalculationCallback_t624124251 * L_6 = ((CubeScript_t3554149110_StaticFields*)CubeScript_t3554149110_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__mgU24cache0_6();
		CubeScript_setCubeCallback_m261719047(NULL /*static, unused*/, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CubeScript::calculationCallback(System.Int32)
extern Il2CppClass* CubeScript_t3554149110_il2cpp_TypeInfo_var;
extern const uint32_t CubeScript_calculationCallback_m1093430854_MetadataUsageId;
extern "C"  void CubeScript_calculationCallback_m1093430854 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeScript_calculationCallback_m1093430854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(CubeScript_t3554149110_il2cpp_TypeInfo_var);
		((CubeScript_t3554149110_StaticFields*)CubeScript_t3554149110_il2cpp_TypeInfo_var->static_fields)->set_cubed_5(L_0);
		return;
	}
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CubeScript_calculationCallback_m1093430854(int32_t ___x0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	::CubeScript_calculationCallback_m1093430854(NULL, ___x0, NULL);

}
// System.Void CubeScript::Update()
extern Il2CppClass* CubeScript_t3554149110_il2cpp_TypeInfo_var;
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
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CubeScript_t3554149110_il2cpp_TypeInfo_var);
		int32_t L_3 = ((CubeScript_t3554149110_StaticFields*)CubeScript_t3554149110_il2cpp_TypeInfo_var->static_fields)->get_cubed_5();
		int32_t L_4 = __this->get_toCube_4();
		int32_t L_5 = __this->get_toCube_4();
		int32_t L_6 = __this->get_toCube_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4*(int32_t)L_5))*(int32_t)L_6))))))
		{
			goto IL_0050;
		}
	}
	{
		Renderer_t257310565 * L_7 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_7);
		Material_t193706927 * L_8 = Renderer_get_material_m2553789785(L_7, /*hidden argument*/NULL);
		Color_t2020392075  L_9 = Color_get_magenta_m3193089961(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_m577844242(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_0050:
	{
		Renderer_t257310565 * L_10 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_10);
		Material_t193706927 * L_11 = Renderer_get_material_m2553789785(L_10, /*hidden argument*/NULL);
		Color_t2020392075  L_12 = Color_get_green_m2671273823(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_set_color_m577844242(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		goto IL_00a5;
	}

IL_006a:
	{
		int32_t L_13 = __this->get_squared_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0090;
		}
	}
	{
		Renderer_t257310565 * L_14 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_14);
		Material_t193706927 * L_15 = Renderer_get_material_m2553789785(L_14, /*hidden argument*/NULL);
		Color_t2020392075  L_16 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		Material_set_color_m577844242(L_15, L_16, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0090:
	{
		Renderer_t257310565 * L_17 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_17);
		Material_t193706927 * L_18 = Renderer_get_material_m2553789785(L_17, /*hidden argument*/NULL);
		Color_t2020392075  L_19 = Color_get_red_m2410286591(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_set_color_m577844242(L_18, L_19, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void CubeScript::.cctor()
extern Il2CppClass* CubeScript_t3554149110_il2cpp_TypeInfo_var;
extern const uint32_t CubeScript__cctor_m1074331368_MetadataUsageId;
extern "C"  void CubeScript__cctor_m1074331368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeScript__cctor_m1074331368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CubeScript_t3554149110_StaticFields*)CubeScript_t3554149110_il2cpp_TypeInfo_var->static_fields)->set_cubed_5((-1));
		return;
	}
}
// System.Void CubeScript/CalculationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CalculationCallback__ctor_m1820545586 (CalculationCallback_t624124251 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CubeScript/CalculationCallback::Invoke(System.Int32)
extern "C"  void CalculationCallback_Invoke_m3522035647 (CalculationCallback_t624124251 * __this, int32_t ___x0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CalculationCallback_Invoke_m3522035647((CalculationCallback_t624124251 *)__this->get_prev_9(),___x0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, int32_t ___x0, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___x0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int32_t ___x0, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___x0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
extern "C"  void DelegatePInvokeWrapper_CalculationCallback_t624124251 (CalculationCallback_t624124251 * __this, int32_t ___x0, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	il2cppPInvokeFunc(___x0);

}
// System.IAsyncResult CubeScript/CalculationCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t CalculationCallback_BeginInvoke_m989225280_MetadataUsageId;
extern "C"  Il2CppObject * CalculationCallback_BeginInvoke_m989225280 (CalculationCallback_t624124251 * __this, int32_t ___x0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CalculationCallback_BeginInvoke_m989225280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___x0);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// System.Void CubeScript/CalculationCallback::EndInvoke(System.IAsyncResult)
extern "C"  void CalculationCallback_EndInvoke_m1844250580 (CalculationCallback_t624124251 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
