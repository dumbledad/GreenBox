#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MonoDLLTest.Calculations/CalculationCallback
struct CalculationCallback_t4183918066;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void MonoDLLTest.Calculations/CalculationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CalculationCallback__ctor_m2326134249 (CalculationCallback_t4183918066 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MonoDLLTest.Calculations/CalculationCallback::Invoke(System.Int32)
extern "C"  void CalculationCallback_Invoke_m208425692 (CalculationCallback_t4183918066 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MonoDLLTest.Calculations/CalculationCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CalculationCallback_BeginInvoke_m3473287867 (CalculationCallback_t4183918066 * __this, int32_t ___x0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MonoDLLTest.Calculations/CalculationCallback::EndInvoke(System.IAsyncResult)
extern "C"  void CalculationCallback_EndInvoke_m2544488455 (CalculationCallback_t4183918066 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
