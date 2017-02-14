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

// MonoDLLTest.Calculations
struct Calculations_t3126126952;
// MonoDLLTest.Calculations/CalculationCallback
struct CalculationCallback_t4183918066;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "MonoDLLTest_U3CModuleU3E3783534214.h"
#include "MonoDLLTest_U3CModuleU3E3783534214MethodDeclarations.h"
#include "MonoDLLTest_MonoDLLTest_Calculations3126126952.h"
#include "MonoDLLTest_MonoDLLTest_Calculations3126126952MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "MonoDLLTest_MonoDLLTest_Calculations_CalculationCa4183918066.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Math2022911894MethodDeclarations.h"
#include "mscorlib_System_Double4078015681.h"
#include "MonoDLLTest_MonoDLLTest_Calculations_CalculationCa4183918066MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MonoDLLTest.Calculations::.ctor()
extern "C"  void Calculations__ctor_m2917165631 (Calculations_t3126126952 * __this, const MethodInfo* method)
{
	{
		__this->set_toSquare_0(2);
		__this->set_squared_1((-1));
		__this->set_toCube_2(3);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL square(int32_t);
// System.Int32 MonoDLLTest.Calculations::square(System.Int32)
extern "C"  int32_t Calculations_square_m2997411793 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(square)(___x0);

	return returnValue;
}
extern "C" void DEFAULT_CALL setCubeCallback(int32_t, Il2CppMethodPointer);
// System.Void MonoDLLTest.Calculations::setCubeCallback(System.Int32,MonoDLLTest.Calculations/CalculationCallback)
extern "C"  void Calculations_setCubeCallback_m256851688 (Il2CppObject * __this /* static, unused */, int32_t ___x0, CalculationCallback_t4183918066 * ___callback1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setCubeCallback)(___x0, ____callback1_marshaled);

}
// System.Boolean MonoDLLTest.Calculations::get_isSquared()
extern "C"  bool Calculations_get_isSquared_m3690501061 (Calculations_t3126126952 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_squared_1();
		int32_t L_1 = __this->get_toSquare_0();
		double L_2 = pow((((double)((double)L_1))), (2.0));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(((int32_t)((int32_t)L_2)))))? 1 : 0);
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean MonoDLLTest.Calculations::get_isCubed()
extern Il2CppClass* Calculations_t3126126952_il2cpp_TypeInfo_var;
extern const uint32_t Calculations_get_isCubed_m710668369_MetadataUsageId;
extern "C"  bool Calculations_get_isCubed_m710668369 (Calculations_t3126126952 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Calculations_get_isCubed_m710668369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Calculations_t3126126952_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Calculations_t3126126952_StaticFields*)Calculations_t3126126952_il2cpp_TypeInfo_var->static_fields)->get_cubed_3();
		int32_t L_1 = __this->get_toCube_2();
		double L_2 = pow((((double)((double)L_1))), (3.0));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(((int32_t)((int32_t)L_2)))))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void MonoDLLTest.Calculations::Init()
extern Il2CppClass* Calculations_t3126126952_il2cpp_TypeInfo_var;
extern Il2CppClass* CalculationCallback_t4183918066_il2cpp_TypeInfo_var;
extern const MethodInfo* Calculations_calculationCallback_m1912372092_MethodInfo_var;
extern const uint32_t Calculations_Init_m1952284929_MetadataUsageId;
extern "C"  void Calculations_Init_m1952284929 (Calculations_t3126126952 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Calculations_Init_m1952284929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = __this->get_toSquare_0();
		IL2CPP_RUNTIME_CLASS_INIT(Calculations_t3126126952_il2cpp_TypeInfo_var);
		int32_t L_1 = Calculations_square_m2997411793(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_squared_1(L_1);
		int32_t L_2 = __this->get_toCube_2();
		CalculationCallback_t4183918066 * L_3 = ((Calculations_t3126126952_StaticFields*)Calculations_t3126126952_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__mgU24cache0_4();
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0030;
		}
	}
	{
		IntPtr_t L_4;
		L_4.set_m_value_0((void*)(void*)Calculations_calculationCallback_m1912372092_MethodInfo_var);
		CalculationCallback_t4183918066 * L_5 = (CalculationCallback_t4183918066 *)il2cpp_codegen_object_new(CalculationCallback_t4183918066_il2cpp_TypeInfo_var);
		CalculationCallback__ctor_m1712875560(L_5, NULL, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Calculations_t3126126952_il2cpp_TypeInfo_var);
		((Calculations_t3126126952_StaticFields*)Calculations_t3126126952_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__mgU24cache0_4(L_5);
		G_B2_0 = G_B1_0;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Calculations_t3126126952_il2cpp_TypeInfo_var);
		CalculationCallback_t4183918066 * L_6 = ((Calculations_t3126126952_StaticFields*)Calculations_t3126126952_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__mgU24cache0_4();
		Calculations_setCubeCallback_m256851688(NULL /*static, unused*/, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MonoDLLTest.Calculations::calculationCallback(System.Int32)
extern Il2CppClass* Calculations_t3126126952_il2cpp_TypeInfo_var;
extern const uint32_t Calculations_calculationCallback_m1912372092_MetadataUsageId;
extern "C"  void Calculations_calculationCallback_m1912372092 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Calculations_calculationCallback_m1912372092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Calculations_t3126126952_il2cpp_TypeInfo_var);
		((Calculations_t3126126952_StaticFields*)Calculations_t3126126952_il2cpp_TypeInfo_var->static_fields)->set_cubed_3(L_0);
		return;
	}
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Calculations_calculationCallback_m1912372092(int32_t ___x0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	::Calculations_calculationCallback_m1912372092(NULL, ___x0, NULL);

}
// System.Void MonoDLLTest.Calculations::.cctor()
extern Il2CppClass* Calculations_t3126126952_il2cpp_TypeInfo_var;
extern const uint32_t Calculations__cctor_m1648947134_MetadataUsageId;
extern "C"  void Calculations__cctor_m1648947134 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Calculations__cctor_m1648947134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Calculations_t3126126952_StaticFields*)Calculations_t3126126952_il2cpp_TypeInfo_var->static_fields)->set_cubed_3((-1));
		return;
	}
}
// System.Void MonoDLLTest.Calculations/CalculationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CalculationCallback__ctor_m1712875560 (CalculationCallback_t4183918066 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MonoDLLTest.Calculations/CalculationCallback::Invoke(System.Int32)
extern "C"  void CalculationCallback_Invoke_m293114517 (CalculationCallback_t4183918066 * __this, int32_t ___x0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CalculationCallback_Invoke_m293114517((CalculationCallback_t4183918066 *)__this->get_prev_9(),___x0, method);
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
extern "C"  void DelegatePInvokeWrapper_CalculationCallback_t4183918066 (CalculationCallback_t4183918066 * __this, int32_t ___x0, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	il2cppPInvokeFunc(___x0);

}
// System.IAsyncResult MonoDLLTest.Calculations/CalculationCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t CalculationCallback_BeginInvoke_m2533573398_MetadataUsageId;
extern "C"  Il2CppObject * CalculationCallback_BeginInvoke_m2533573398 (CalculationCallback_t4183918066 * __this, int32_t ___x0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CalculationCallback_BeginInvoke_m2533573398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___x0);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// System.Void MonoDLLTest.Calculations/CalculationCallback::EndInvoke(System.IAsyncResult)
extern "C"  void CalculationCallback_EndInvoke_m3028523018 (CalculationCallback_t4183918066 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
