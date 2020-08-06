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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2470008838;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_t1194737946;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t3366404161;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Func`2<System.Threading.CancellationToken,System.Object>
struct Func_2_t252621383;
// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t2970310655;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t1314258023;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t4167915811;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_2_t3777032036;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>>
struct Func_2_t1347922413;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_2_t1758162287;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_3_t2361001864;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_3_t1840957678;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_3_t4117055225;
// System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>
struct Func_3_t2065982592;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.BufferedStream
struct BufferedStream_t3465336908;
// System.IO.IOException
struct IOException_t4088381929;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t2688706982;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.IO.StreamFlushAsyncResult
struct StreamFlushAsyncResult_t3395384147;
// System.IO.StreamOperationAsyncResult
struct StreamOperationAsyncResult_t2370793485;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t472374824;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t875659351;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t3604542706;
// System.IO.StreamReadAsyncResult
struct StreamReadAsyncResult_t2363479406;
// System.IO.StreamWriteAsyncResult
struct StreamWriteAsyncResult_t1545417764;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t4234117669;
// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_t1366777568;
// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_t2303284929;
// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t3069626030;
// System.IProgress`1<System.UInt32>
struct IProgress_1_t3233463983;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.ObjectDisposedException
struct ObjectDisposedException_t21392786;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Random
struct Random_t108471755;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>
struct CreateValueCallback_t3597102618;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t1109218577;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct ConditionalWeakTable_2_t3962727071;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_t1774956035;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t3582039290;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t2384618318;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t1564620431;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t3750997369;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_t3913494478;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t3564637124;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t3806548453;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t322720759;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t3937283545;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t4161250538;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t3785502277;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_t1425581848;
// System.Threading.Tasks.BeginEndAwaitableAdapter
struct BeginEndAwaitableAdapter_t3788631719;
// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t3914568053;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_t2826642468;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t156716511;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t3010374299;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t2619490524;
// System.Threading.Tasks.TaskFactory`1<System.VoidValueTypeParameter>
struct TaskFactory_1_t190380901;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IBuffer>
struct TaskFactory_1_t600620775;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t900468660;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t1835283874;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t1408863619;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1502828140;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t3965602153;
// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_t1536492530;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t1946732404;
// System.Threading.Timer
struct Timer_t716671026;
// System.Threading.TimerCallback
struct TimerCallback_t1438585625;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t490705335;
// System.Void
struct Void_t1185182177;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t1476249554;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t2427350286;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t4142409509;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t1437760040;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2653736172;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2580597550;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3609957527;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t3072713919;
// Windows.Foundation.IAsyncInfo
struct IAsyncInfo_t2425795444;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_t666352745;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t593214123;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t1622574100;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t3013442981;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t541192229;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t2821136229;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t2042351338;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_t2099996051;

extern RuntimeClass* Action_1_t3252573759_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t1194737946_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncActionCompletedHandler_t4142409509_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncInfoToTaskBridge_1_t1425581848_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t1437760040_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2580597550_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3609957527_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_1_t2418262475_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_1_t2862166739_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_1_t586069192_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_1_t976952967_il2cpp_TypeInfo_var;
extern RuntimeClass* BufferedStream_t3465336908_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationTokenRegistration_t2813424904_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationTokenSource_t540272775_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationToken_t784455623_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* ConditionalWeakTable_2_t1774956035_il2cpp_TypeInfo_var;
extern RuntimeClass* ConditionalWeakTable_2_t3962727071_il2cpp_TypeInfo_var;
extern RuntimeClass* CreateValueCallback_t3597102618_il2cpp_TypeInfo_var;
extern RuntimeClass* DllNotFoundException_t2721418633_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* ExceptionDispatchInfo_t3750997369_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2970310655_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t1840957678_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t4117055225_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncAction_t3072713919_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncInfo_t2425795444_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncOperationWithProgress_2_t1622574100_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncOperationWithProgress_2_t593214123_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncOperation_1_t3013442981_il2cpp_TypeInfo_var;
extern RuntimeClass* IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var;
extern RuntimeClass* IBuffer_t541192229_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IInputStream_t2821136229_il2cpp_TypeInfo_var;
extern RuntimeClass* IMarshal_t3913494478_il2cpp_TypeInfo_var;
extern RuntimeClass* IOException_t4088381929_il2cpp_TypeInfo_var;
extern RuntimeClass* IOutputStream_t2042351338_il2cpp_TypeInfo_var;
extern RuntimeClass* IProgress_1_t3233463983_il2cpp_TypeInfo_var;
extern RuntimeClass* IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* ManualResetEvent_t451242010_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* NetFxToWinRtStreamAdapter_t2688706982_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectDisposedException_t21392786_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* OperationCanceledException_t926488448_il2cpp_TypeInfo_var;
extern RuntimeClass* Point_t4164953539_il2cpp_TypeInfo_var;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern RuntimeClass* Rect_t2695113487_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Size_t550917638_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamFlushAsyncResult_t3395384147_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamOperationAsyncResult_t2370793485_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReadAsyncResult_t2363479406_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamWriteAsyncResult_t1545417764_il2cpp_TypeInfo_var;
extern RuntimeClass* Stream_t1273022909_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* SynchronizationContext_t2326897723_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskScheduler_t1196198384_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskToAsyncActionAdapter_t900468660_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t3187275312_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass12_0_t3069626030_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass1_0_t472374824_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass2_0_t875659351_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass3_0_t3604542706_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t2303284929_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t2427350286_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t3914568053_il2cpp_TypeInfo_var;
extern RuntimeClass* UnauthorizedAccessException_t490705335_il2cpp_TypeInfo_var;
extern RuntimeClass* WinRtToNetFxStreamAdapter_t1366777568_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1060385402;
extern String_t* _stringLiteral1061158513;
extern String_t* _stringLiteral1082126080;
extern String_t* _stringLiteral1119394748;
extern String_t* _stringLiteral1172510602;
extern String_t* _stringLiteral1172734953;
extern String_t* _stringLiteral1212500642;
extern String_t* _stringLiteral124057261;
extern String_t* _stringLiteral1252300773;
extern String_t* _stringLiteral1294096883;
extern String_t* _stringLiteral1362732724;
extern String_t* _stringLiteral1404372540;
extern String_t* _stringLiteral1511102372;
extern String_t* _stringLiteral1566604334;
extern String_t* _stringLiteral1672260951;
extern String_t* _stringLiteral1716377790;
extern String_t* _stringLiteral1716443326;
extern String_t* _stringLiteral1716836542;
extern String_t* _stringLiteral1723475720;
extern String_t* _stringLiteral1767970036;
extern String_t* _stringLiteral1819414752;
extern String_t* _stringLiteral1824524996;
extern String_t* _stringLiteral183322824;
extern String_t* _stringLiteral1843450604;
extern String_t* _stringLiteral1851023600;
extern String_t* _stringLiteral188384904;
extern String_t* _stringLiteral1908748891;
extern String_t* _stringLiteral1951081104;
extern String_t* _stringLiteral2002595880;
extern String_t* _stringLiteral2037252866;
extern String_t* _stringLiteral2149632453;
extern String_t* _stringLiteral2181662023;
extern String_t* _stringLiteral2236202192;
extern String_t* _stringLiteral2509261095;
extern String_t* _stringLiteral2551228437;
extern String_t* _stringLiteral2587111962;
extern String_t* _stringLiteral2710921312;
extern String_t* _stringLiteral2715197523;
extern String_t* _stringLiteral2783568775;
extern String_t* _stringLiteral278379368;
extern String_t* _stringLiteral278915230;
extern String_t* _stringLiteral3078101749;
extern String_t* _stringLiteral3078846028;
extern String_t* _stringLiteral3088406789;
extern String_t* _stringLiteral3157912884;
extern String_t* _stringLiteral3159092532;
extern String_t* _stringLiteral3197160056;
extern String_t* _stringLiteral3201477590;
extern String_t* _stringLiteral3358341242;
extern String_t* _stringLiteral3452614611;
extern String_t* _stringLiteral3493618073;
extern String_t* _stringLiteral3623012086;
extern String_t* _stringLiteral3782173248;
extern String_t* _stringLiteral3881147341;
extern String_t* _stringLiteral3939495523;
extern String_t* _stringLiteral4004074309;
extern String_t* _stringLiteral4023079014;
extern String_t* _stringLiteral4078512371;
extern String_t* _stringLiteral4103272726;
extern String_t* _stringLiteral4140064810;
extern String_t* _stringLiteral4208439318;
extern String_t* _stringLiteral4254452306;
extern String_t* _stringLiteral4285714218;
extern String_t* _stringLiteral4294193667;
extern String_t* _stringLiteral493945629;
extern String_t* _stringLiteral569150152;
extern String_t* _stringLiteral638203063;
extern String_t* _stringLiteral765265327;
extern String_t* _stringLiteral844061258;
extern String_t* _stringLiteral99743386;
extern const RuntimeMethod* Action_1__ctor_m118522912_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m2721600688_RuntimeMethod_var;
extern const RuntimeMethod* ArraySegment_1_get_Array_m3038125939_RuntimeMethod_var;
extern const RuntimeMethod* ArraySegment_1_get_Offset_m2467593538_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m92221766_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfoToTaskBridge_1_RegisterForCancellation_m3477871226_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfoToTaskBridge_1__ctor_m3498705156_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfo_CreateCompletedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m3404063200_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfo_CreateFaultedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m2195899486_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfo_Run_TisBoolean_t97287965_m3909181280_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfo_Run_TisIBuffer_t541192229_TisUInt32_t2560061978_m2871395425_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfo_Run_TisUInt32_t2560061978_TisUInt32_t2560061978_m1984313700_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1__ctor_m101596112_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2__ctor_m1020003653_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2__ctor_m1039799182_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t1863693214_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m3319697378_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4273446738_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m1181056382_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m3289421814_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m1548426225_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m3756530673_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m2437087066_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m3003315259_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m3423860640_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4184676639_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1162352611_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3939687854_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m630185106_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m1747581165_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m2874574167_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m341489268_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3346031551_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3679186700_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m2102369792_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m1811493866_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m2446424660_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m283205869_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m4149329102_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m1946293888_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m2303679917_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m374009415_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m3799090329_RuntimeMethod_var;
extern const RuntimeMethod* ConditionalWeakTable_2_GetValue_m1139837188_RuntimeMethod_var;
extern const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m814710423_RuntimeMethod_var;
extern const RuntimeMethod* ConditionalWeakTable_2__ctor_m1725874571_RuntimeMethod_var;
extern const RuntimeMethod* ConditionalWeakTable_2__ctor_m2388336367_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m2481093440_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m2730877693_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m2103123391_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m988772279_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m3004702642_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m3341770821_RuntimeMethod_var;
extern const RuntimeMethod* CreateValueCallback__ctor_m1119614491_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4206015708_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m21237239_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m2947162041_RuntimeMethod_var;
extern const RuntimeMethod* NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043_RuntimeMethod_var;
extern const RuntimeMethod* NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_RuntimeMethod_var;
extern const RuntimeMethod* NetFxToWinRtStreamAdapter_Seek_m1777296364_RuntimeMethod_var;
extern const RuntimeMethod* NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612_RuntimeMethod_var;
extern const RuntimeMethod* NetFxToWinRtStreamAdapter_WriteAsync_m660284093_RuntimeMethod_var;
extern const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264_RuntimeMethod_var;
extern const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768_RuntimeMethod_var;
extern const RuntimeMethod* StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_RuntimeMethod_var;
extern const RuntimeMethod* StreamOperationAsyncResult__ctor_m4009589989_RuntimeMethod_var;
extern const RuntimeMethod* StreamReadAsyncResult__ctor_m1840514536_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m2355031486_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_GetResultsInternal_m1507086869_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4116196857_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m426417699_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Task_m1699314739_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ConfigureAwait_m2040180629_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ConfigureAwait_m2888757198_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m1674731349_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3026954753_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m318392058_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m1291613712_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m2752926032_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m787719806_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m1088351959_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m915208730_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m1022670977_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m1789062849_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginRead_m3751440709_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_Create_m1998248300_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EndRead_m3153406902_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EndWrite_m481341649_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t2821136229_m1559834163_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Length_m2903391082_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Position_m1486608556_RuntimeMethod_var;
extern const RuntimeMethod* WinRtToNetFxStreamAdapter_set_Position_m3123383368_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_AsStream_m2594335144_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_m1180775848_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_IsSameData_m2250988661_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBuffer_Create_m3477745630_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m1644744651_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBuffer__ctor_m1721285349_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t97287965_m1845927618_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t541192229_TisUInt32_t2560061978_m1568080940_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t2560061978_TisUInt32_t2560061978_m3905281516_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_m1776607123_RuntimeMethod_var;
extern const RuntimeType* Exception_t_0_0_0_var;
extern const uint32_t AsyncInfoIdGenerator_CreateNext_m620618218_MetadataUsageId;
extern const uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m2255923491_MetadataUsageId;
extern const uint32_t AsyncInfoIdGenerator__cctor_m1347019070_MetadataUsageId;
extern const uint32_t ExceptionDispatchHelper_ThrowAsync_m255798036_MetadataUsageId;
extern const uint32_t NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043_MetadataUsageId;
extern const uint32_t NetFxToWinRtStreamAdapter_GetInputStreamAt_m2202158284_MetadataUsageId;
extern const uint32_t NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_MetadataUsageId;
extern const uint32_t NetFxToWinRtStreamAdapter_Seek_m1777296364_MetadataUsageId;
extern const uint32_t NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612_MetadataUsageId;
extern const uint32_t NetFxToWinRtStreamAdapter_WriteAsync_m660284093_MetadataUsageId;
extern const uint32_t Point_ConvertToString_m2534410555_MetadataUsageId;
extern const uint32_t Point_Equals_m1617877981_MetadataUsageId;
extern const uint32_t Rect_ConvertToString_m1475233121_MetadataUsageId;
extern const uint32_t Rect_Equals_m2314324014_MetadataUsageId;
extern const uint32_t Size_Equals_m1950794187_MetadataUsageId;
extern const uint32_t Size_ToString_m401005881_MetadataUsageId;
extern const uint32_t StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m344969833_MetadataUsageId;
extern const uint32_t StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m369257983_MetadataUsageId;
extern const uint32_t StreamFlushAsyncResult__ctor_m786895103_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_CancelStreamOperation_m3800264807_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_CloseStreamOperation_m3408371609_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_m125047312_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult__ctor_m4009589989_MetadataUsageId;
extern const uint32_t StreamOperationAsyncResult_get_AsyncWaitHandle_m3895669914_MetadataUsageId;
extern const uint32_t StreamOperationsImplementation_FlushAsync_AbstractStream_m989114848_MetadataUsageId;
extern const uint32_t StreamOperationsImplementation_ReadAsync_AbstractStream_m1343822691_MetadataUsageId;
extern const uint32_t StreamOperationsImplementation_ReadAsync_MemoryStream_m1815569430_MetadataUsageId;
extern const uint32_t StreamOperationsImplementation_WriteAsync_AbstractStream_m3152162177_MetadataUsageId;
extern const uint32_t StreamReadAsyncResult_ProcessConcreteCompletedOperation_m2015389887_MetadataUsageId;
extern const uint32_t StreamReadAsyncResult_ProcessConcreteCompletedOperation_m95416103_MetadataUsageId;
extern const uint32_t StreamReadAsyncResult__ctor_m1840514536_MetadataUsageId;
extern const uint32_t StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m1740713229_MetadataUsageId;
extern const uint32_t StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m3225472033_MetadataUsageId;
extern const uint32_t StreamWriteAsyncResult__ctor_m2336623450_MetadataUsageId;
extern const uint32_t TaskToAsyncActionAdapter_GetResults_m1570832325_MetadataUsageId;
extern const uint32_t U3CReadAsyncInternalU3Ed__43_MoveNext_m2332415331_MetadataUsageId;
extern const uint32_t U3CReadAsyncInternalU3Ed__43_SetStateMachine_m3503944324_MetadataUsageId;
extern const uint32_t U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m1530074096_MetadataUsageId;
extern const uint32_t U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2063525728_MetadataUsageId;
extern const uint32_t U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214_MetadataUsageId;
extern const uint32_t U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m3811994301_MetadataUsageId;
extern const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m12096357_MetadataUsageId;
extern const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m994589036_MetadataUsageId;
extern const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m3201072283_MetadataUsageId;
extern const uint32_t U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m528171077_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m1674731349_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3026954753_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m318392058_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m1291613712_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m787719806_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m1088351959_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m915208730_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m1022670977_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m1789062849_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m2134779780_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m3115982157_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m355336584_MetadataUsageId;
extern const uint32_t WinRtIOHelper_EnsureResultsInUserBuffer_m279643431_MetadataUsageId;
extern const uint32_t WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2836908337_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_BeginRead_m3751440709_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_Create_m1998248300_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_Dispose_m1343197273_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_EndRead_m3153406902_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_EndWrite_m481341649_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_FlushAsync_m1951057401_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_Flush_m316138950_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59154805_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_Seek_m1060968979_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter__ctor_m1902152105_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_get_Length_m2903391082_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_get_OneByteBuffer_m2617962370_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_get_Position_m1486608556_MetadataUsageId;
extern const uint32_t WinRtToNetFxStreamAdapter_set_Position_m3123383368_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_AsBuffer_m659375680_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_AsStream_m2594335144_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_CopyTo_m1180775848_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_CopyTo_m1249409418_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_IsSameData_m2250988661_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_MemCopy_m655142473_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688_MetadataUsageId;
extern const uint32_t WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m1133492133_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_Create_m3477745630_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_PinUnderlyingData_m2750334226_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m2454072108_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m763706134_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m793134310_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_m1025637630_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_m197112739_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m2589995085_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m4173764896_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m3694109771_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m1644744651_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer__ctor_m1721285349_MetadataUsageId;
extern const uint32_t WindowsRuntimeBuffer__ctor_m3807393127_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_AsStreamForRead_m919553363_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_AsStreamForWrite_m2939096664_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_m1117801903_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m4200031818_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m615294623_MetadataUsageId;
extern const uint32_t WindowsRuntimeStreamExtensions__cctor_m2962646457_MetadataUsageId;
extern const uint32_t WindowsRuntimeSystemExtensions_AsTask_m1421733603_MetadataUsageId;
extern const uint32_t WindowsRuntimeSystemExtensions_AsTask_m1776607123_MetadataUsageId;
extern const uint32_t WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m1127551074_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper;
struct IAsyncAction_t3072713919;
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t3013442981;
struct IBuffer_t541192229;
struct IInputStream_t2821136229;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745568_H
#define U3CMODULEU3E_T692745568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745568 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745568_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t981452505 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t3072713919 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m1173868328(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m1835005524(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m1540137877() = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t593214123 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m1633053105(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m165963889(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m483007812(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m655232302(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m3754792249(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t1622574100 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m809910966(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m489652616(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m3126232629(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m4203981877(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m3465034556(IBuffer_t541192229** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t3013442981 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1783482745(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2903702275(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m183360251(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t2042351338 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m3102356074(IBuffer_t541192229* ___buffer0, IAsyncOperationWithProgress_2_t593214123** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m3090507256(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t2099996051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m4244459180(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_put_Size_m1188903761() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m131894340(uint64_t ___position0, IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_GetOutputStreamAt_m2771976110() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m2943792191(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m3655839129(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped2_CloneStream_m392898984() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m1817417990(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m868933516(bool* comReturnValue) = 0;
};
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STREAMOPERATIONSIMPLEMENTATION_T1346754833_H
#define STREAMOPERATIONSIMPLEMENTATION_T1346754833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation
struct  StreamOperationsImplementation_t1346754833  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMOPERATIONSIMPLEMENTATION_T1346754833_H
#ifndef U3CU3EC__DISPLAYCLASS2_0_T875659351_H
#define U3CU3EC__DISPLAYCLASS2_0_T875659351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t875659351  : public RuntimeObject
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::buffer
	RuntimeObject* ___buffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::stream
	Stream_t1273022909 * ___stream_1;
	// System.Byte[] System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::data
	ByteU5BU5D_t4116647657* ___data_2;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::offset
	int32_t ___offset_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t875659351, ___buffer_0)); }
	inline RuntimeObject* get_buffer_0() const { return ___buffer_0; }
	inline RuntimeObject** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(RuntimeObject* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t875659351, ___stream_1)); }
	inline Stream_t1273022909 * get_stream_1() const { return ___stream_1; }
	inline Stream_t1273022909 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t1273022909 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___stream_1), value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t875659351, ___data_2)); }
	inline ByteU5BU5D_t4116647657* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t4116647657* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t875659351, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS2_0_T875659351_H
#ifndef U3CU3EC__DISPLAYCLASS3_0_T3604542706_H
#define U3CU3EC__DISPLAYCLASS3_0_T3604542706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t3604542706  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::stream
	Stream_t1273022909 * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3604542706, ___stream_0)); }
	inline Stream_t1273022909 * get_stream_0() const { return ___stream_0; }
	inline Stream_t1273022909 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t1273022909 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___stream_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS3_0_T3604542706_H
#ifndef WINRTIOHELPER_T4133879084_H
#define WINRTIOHELPER_T4133879084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WinRtIOHelper
struct  WinRtIOHelper_t4133879084  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINRTIOHELPER_T4133879084_H
#ifndef WINDOWSRUNTIMESTREAMEXTENSIONS_T4179015579_H
#define WINDOWSRUNTIMESTREAMEXTENSIONS_T4179015579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WindowsRuntimeStreamExtensions
struct  WindowsRuntimeStreamExtensions_t4179015579  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeStreamExtensions_t4179015579_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions::s_winRtToNetFxAdapterMap
	ConditionalWeakTable_2_t1774956035 * ___s_winRtToNetFxAdapterMap_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter> System.IO.WindowsRuntimeStreamExtensions::s_netFxToWinRtAdapterMap
	ConditionalWeakTable_2_t3962727071 * ___s_netFxToWinRtAdapterMap_1;

public:
	inline static int32_t get_offset_of_s_winRtToNetFxAdapterMap_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeStreamExtensions_t4179015579_StaticFields, ___s_winRtToNetFxAdapterMap_0)); }
	inline ConditionalWeakTable_2_t1774956035 * get_s_winRtToNetFxAdapterMap_0() const { return ___s_winRtToNetFxAdapterMap_0; }
	inline ConditionalWeakTable_2_t1774956035 ** get_address_of_s_winRtToNetFxAdapterMap_0() { return &___s_winRtToNetFxAdapterMap_0; }
	inline void set_s_winRtToNetFxAdapterMap_0(ConditionalWeakTable_2_t1774956035 * value)
	{
		___s_winRtToNetFxAdapterMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_winRtToNetFxAdapterMap_0), value);
	}

	inline static int32_t get_offset_of_s_netFxToWinRtAdapterMap_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeStreamExtensions_t4179015579_StaticFields, ___s_netFxToWinRtAdapterMap_1)); }
	inline ConditionalWeakTable_2_t3962727071 * get_s_netFxToWinRtAdapterMap_1() const { return ___s_netFxToWinRtAdapterMap_1; }
	inline ConditionalWeakTable_2_t3962727071 ** get_address_of_s_netFxToWinRtAdapterMap_1() { return &___s_netFxToWinRtAdapterMap_1; }
	inline void set_s_netFxToWinRtAdapterMap_1(ConditionalWeakTable_2_t3962727071 * value)
	{
		___s_netFxToWinRtAdapterMap_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_netFxToWinRtAdapterMap_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMESTREAMEXTENSIONS_T4179015579_H
#ifndef U3CU3EC_T2303284929_H
#define U3CU3EC_T2303284929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WindowsRuntimeStreamExtensions/<>c
struct  U3CU3Ec_t2303284929  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2303284929_StaticFields
{
public:
	// System.IO.WindowsRuntimeStreamExtensions/<>c System.IO.WindowsRuntimeStreamExtensions/<>c::<>9
	U3CU3Ec_t2303284929 * ___U3CU3E9_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions/<>c::<>9__11_0
	CreateValueCallback_t3597102618 * ___U3CU3E9__11_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2303284929_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2303284929 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2303284929 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2303284929 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2303284929_StaticFields, ___U3CU3E9__11_0_1)); }
	inline CreateValueCallback_t3597102618 * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline CreateValueCallback_t3597102618 ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(CreateValueCallback_t3597102618 * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__11_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2303284929_H
#ifndef U3CU3EC__DISPLAYCLASS12_0_T3069626030_H
#define U3CU3EC__DISPLAYCLASS12_0_T3069626030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t3069626030  : public RuntimeObject
{
public:
	// System.Int32 System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::bufferSize
	int32_t ___bufferSize_0;

public:
	inline static int32_t get_offset_of_bufferSize_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t3069626030, ___bufferSize_0)); }
	inline int32_t get_bufferSize_0() const { return ___bufferSize_0; }
	inline int32_t* get_address_of_bufferSize_0() { return &___bufferSize_0; }
	inline void set_bufferSize_0(int32_t value)
	{
		___bufferSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS12_0_T3069626030_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CONDITIONALWEAKTABLE_2_T3962727071_H
#define CONDITIONALWEAKTABLE_2_T3962727071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct  ConditionalWeakTable_2_t3962727071  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t1564620431* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t3962727071, ___data_4)); }
	inline EphemeronU5BU5D_t1564620431* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_t1564620431** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_t1564620431* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((&___data_4), value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t3962727071, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((&____lock_5), value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t3962727071, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALWEAKTABLE_2_T3962727071_H
#ifndef CONDITIONALWEAKTABLE_2_T1774956035_H
#define CONDITIONALWEAKTABLE_2_T1774956035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct  ConditionalWeakTable_2_t1774956035  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t1564620431* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t1774956035, ___data_4)); }
	inline EphemeronU5BU5D_t1564620431* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_t1564620431** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_t1564620431* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((&___data_4), value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t1774956035, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((&____lock_5), value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_t1774956035, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALWEAKTABLE_2_T1774956035_H
#ifndef EXCEPTIONDISPATCHINFO_T3750997369_H
#define EXCEPTIONDISPATCHINFO_T3750997369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct  ExceptionDispatchInfo_t3750997369  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t3750997369, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t3750997369, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stackTrace_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONDISPATCHINFO_T3750997369_H
#ifndef ASYNCINFO_T1262122865_H
#define ASYNCINFO_T1262122865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.AsyncInfo
struct  AsyncInfo_t1262122865  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCINFO_T1262122865_H
#ifndef WINDOWSRUNTIMEBUFFEREXTENSIONS_T1627451895_H
#define WINDOWSRUNTIMEBUFFEREXTENSIONS_T1627451895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions
struct  WindowsRuntimeBufferExtensions_t1627451895  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMEBUFFEREXTENSIONS_T1627451895_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ASYNCINFOIDGENERATOR_T957218259_H
#define ASYNCINFOIDGENERATOR_T957218259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.AsyncInfoIdGenerator
struct  AsyncInfoIdGenerator_t957218259  : public RuntimeObject
{
public:

public:
};

struct AsyncInfoIdGenerator_t957218259_StaticFields
{
public:
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t108471755 * ___s_idGenerator_0;

public:
	inline static int32_t get_offset_of_s_idGenerator_0() { return static_cast<int32_t>(offsetof(AsyncInfoIdGenerator_t957218259_StaticFields, ___s_idGenerator_0)); }
	inline Random_t108471755 * get_s_idGenerator_0() const { return ___s_idGenerator_0; }
	inline Random_t108471755 ** get_address_of_s_idGenerator_0() { return &___s_idGenerator_0; }
	inline void set_s_idGenerator_0(Random_t108471755 * value)
	{
		___s_idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_idGenerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCINFOIDGENERATOR_T957218259_H
#ifndef EXCEPTIONDISPATCHHELPER_T757867092_H
#define EXCEPTIONDISPATCHHELPER_T757867092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.ExceptionDispatchHelper
struct  ExceptionDispatchHelper_t757867092  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONDISPATCHHELPER_T757867092_H
#ifndef U3CU3EC_T3914568053_H
#define U3CU3EC_T3914568053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct  U3CU3Ec_t3914568053  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3914568053_StaticFields
{
public:
	// System.Threading.Tasks.ExceptionDispatchHelper/<>c System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9
	U3CU3Ec_t3914568053 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9__0_0
	SendOrPostCallback_t2750080073 * ___U3CU3E9__0_0_1;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9__0_1
	SendOrPostCallback_t2750080073 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3914568053_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3914568053 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3914568053 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3914568053 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3914568053_StaticFields, ___U3CU3E9__0_0_1)); }
	inline SendOrPostCallback_t2750080073 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(SendOrPostCallback_t2750080073 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3914568053_StaticFields, ___U3CU3E9__0_1_2)); }
	inline SendOrPostCallback_t2750080073 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(SendOrPostCallback_t2750080073 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3914568053_H
#ifndef TASKCOMPLETIONSOURCE_1_T2826642468_H
#define TASKCOMPLETIONSOURCE_1_T2826642468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct  TaskCompletionSource_1_t2826642468  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t1536492530 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t2826642468, ___m_task_0)); }
	inline Task_1_t1536492530 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1536492530 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1536492530 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T2826642468_H
#ifndef TASKTOASYNCINFOADAPTER_4_T1408863619_H
#define TASKTOASYNCINFOADAPTER_4_T1408863619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct  TaskToAsyncInfoAdapter_4_t1408863619  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t540272775 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncActionCompletedHandler_t4142409509 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_t1476249554 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t2326897723 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t540272775 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t540272775 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((&____cancelTokenSource_0), value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((&____error_2), value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_4), value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____completedHandler_5)); }
	inline AsyncActionCompletedHandler_t4142409509 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncActionCompletedHandler_t4142409509 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncActionCompletedHandler_t4142409509 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&____completedHandler_5), value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____progressHandler_6)); }
	inline VoidReferenceTypeParameter_t1476249554 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline VoidReferenceTypeParameter_t1476249554 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(VoidReferenceTypeParameter_t1476249554 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&____progressHandler_6), value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t1408863619, ____startingContext_7)); }
	inline SynchronizationContext_t2326897723 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t2326897723 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t2326897723 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((&____startingContext_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKTOASYNCINFOADAPTER_4_T1408863619_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VOIDREFERENCETYPEPARAMETER_T1476249554_H
#define VOIDREFERENCETYPEPARAMETER_T1476249554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.VoidReferenceTypeParameter
struct  VoidReferenceTypeParameter_t1476249554  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDREFERENCETYPEPARAMETER_T1476249554_H
#ifndef WINDOWSRUNTIMESYSTEMEXTENSIONS_T757232145_H
#define WINDOWSRUNTIMESYSTEMEXTENSIONS_T757232145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsRuntimeSystemExtensions
struct  WindowsRuntimeSystemExtensions_t757232145  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMESYSTEMEXTENSIONS_T757232145_H
#ifndef U3CU3EC_T2427350286_H
#define U3CU3EC_T2427350286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsRuntimeSystemExtensions/<>c
struct  U3CU3Ec_t2427350286  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2427350286_StaticFields
{
public:
	// System.WindowsRuntimeSystemExtensions/<>c System.WindowsRuntimeSystemExtensions/<>c::<>9
	U3CU3Ec_t2427350286 * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_0
	Action_1_t3252573759 * ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_1
	Action_2_t1194737946 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2427350286_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2427350286 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2427350286 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2427350286 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2427350286_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t3252573759 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t3252573759 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t3252573759 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2427350286_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Action_2_t1194737946 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Action_2_t1194737946 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Action_2_t1194737946 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2427350286_H
#ifndef TOKENIZERHELPER_T3391915057_H
#define TOKENIZERHELPER_T3391915057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TokenizerHelper
struct  TokenizerHelper_t3391915057  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZERHELPER_T3391915057_H
#ifndef ARRAYSEGMENT_1_T283560987_H
#define ARRAYSEGMENT_1_T283560987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t283560987 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_t4116647657* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ____array_0)); }
	inline ByteU5BU5D_t4116647657* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_t4116647657* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSEGMENT_1_T283560987_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_3), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_4), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef CONFIGUREDTASKAWAITER_T555647845_H
#define CONFIGUREDTASKAWAITER_T555647845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t555647845 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T555647845_H
#ifndef CONFIGUREDTASKAWAITER_T4273446738_H
#define CONFIGUREDTASKAWAITER_T4273446738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_t4273446738 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t61518632 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t4273446738, ___m_task_0)); }
	inline Task_1_t61518632 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t61518632 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t61518632 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t4273446738, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T4273446738_H
#ifndef CONFIGUREDTASKAWAITER_T107639853_H
#define CONFIGUREDTASKAWAITER_T107639853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_t107639853 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t190679043 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t107639853, ___m_task_0)); }
	inline Task_1_t190679043 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t190679043 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t190679043 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t107639853, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T107639853_H
#ifndef CONFIGUREDTASKAWAITER_T1863693214_H
#define CONFIGUREDTASKAWAITER_T1863693214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>
struct  ConfiguredTaskAwaiter_t1863693214 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t1946732404 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t1863693214, ___m_task_0)); }
	inline Task_1_t1946732404 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1946732404 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1946732404 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t1863693214, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T1863693214_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t540272775 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___m_source_0)); }
	inline CancellationTokenSource_t540272775 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t540272775 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t784455623_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3252573759 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3252573759 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3252573759 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3252573759 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef SPARSELYPOPULATEDARRAYADDINFO_1_T223515617_H
#define SPARSELYPOPULATEDARRAYADDINFO_1_T223515617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t223515617 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t4161250538 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t223515617, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t4161250538 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t4161250538 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t4161250538 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t223515617, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPARSELYPOPULATEDARRAYADDINFO_1_T223515617_H
#ifndef TASKTOASYNCACTIONADAPTER_T900468660_H
#define TASKTOASYNCACTIONADAPTER_T900468660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToAsyncActionAdapter
struct  TaskToAsyncActionAdapter_t900468660  : public TaskToAsyncInfoAdapter_4_t1408863619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKTOASYNCACTIONADAPTER_T900468660_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VOIDVALUETYPEPARAMETER_T130952355_H
#define VOIDVALUETYPEPARAMETER_T130952355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.VoidValueTypeParameter
struct  VoidValueTypeParameter_t130952355 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t130952355__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDVALUETYPEPARAMETER_T130952355_H
#ifndef POINT_T4164953539_H
#define POINT_T4164953539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953539 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953539_H
#ifndef RECT_T2695113487_H
#define RECT_T2695113487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113487 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113487_H
#ifndef SIZE_T550917638_H
#define SIZE_T550917638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917638 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_t550917638, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_t550917638, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917638_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef BUFFEREDSTREAM_T3465336908_H
#define BUFFEREDSTREAM_T3465336908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BufferedStream
struct  BufferedStream_t3465336908  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_t1273022909 * ____stream_5;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_6;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_7;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_8;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_9;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_10;
	// System.Threading.Tasks.BeginEndAwaitableAdapter System.IO.BufferedStream::_beginEndAwaitable
	BeginEndAwaitableAdapter_t3788631719 * ____beginEndAwaitable_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.BufferedStream::_lastSyncCompletedReadTask
	Task_1_t61518632 * ____lastSyncCompletedReadTask_12;

public:
	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____stream_5)); }
	inline Stream_t1273022909 * get__stream_5() const { return ____stream_5; }
	inline Stream_t1273022909 ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(Stream_t1273022909 * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier((&____stream_5), value);
	}

	inline static int32_t get_offset_of__buffer_6() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____buffer_6)); }
	inline ByteU5BU5D_t4116647657* get__buffer_6() const { return ____buffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_6() { return &____buffer_6; }
	inline void set__buffer_6(ByteU5BU5D_t4116647657* value)
	{
		____buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_6), value);
	}

	inline static int32_t get_offset_of__bufferSize_7() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____bufferSize_7)); }
	inline int32_t get__bufferSize_7() const { return ____bufferSize_7; }
	inline int32_t* get_address_of__bufferSize_7() { return &____bufferSize_7; }
	inline void set__bufferSize_7(int32_t value)
	{
		____bufferSize_7 = value;
	}

	inline static int32_t get_offset_of__readPos_8() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____readPos_8)); }
	inline int32_t get__readPos_8() const { return ____readPos_8; }
	inline int32_t* get_address_of__readPos_8() { return &____readPos_8; }
	inline void set__readPos_8(int32_t value)
	{
		____readPos_8 = value;
	}

	inline static int32_t get_offset_of__readLen_9() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____readLen_9)); }
	inline int32_t get__readLen_9() const { return ____readLen_9; }
	inline int32_t* get_address_of__readLen_9() { return &____readLen_9; }
	inline void set__readLen_9(int32_t value)
	{
		____readLen_9 = value;
	}

	inline static int32_t get_offset_of__writePos_10() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____writePos_10)); }
	inline int32_t get__writePos_10() const { return ____writePos_10; }
	inline int32_t* get_address_of__writePos_10() { return &____writePos_10; }
	inline void set__writePos_10(int32_t value)
	{
		____writePos_10 = value;
	}

	inline static int32_t get_offset_of__beginEndAwaitable_11() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____beginEndAwaitable_11)); }
	inline BeginEndAwaitableAdapter_t3788631719 * get__beginEndAwaitable_11() const { return ____beginEndAwaitable_11; }
	inline BeginEndAwaitableAdapter_t3788631719 ** get_address_of__beginEndAwaitable_11() { return &____beginEndAwaitable_11; }
	inline void set__beginEndAwaitable_11(BeginEndAwaitableAdapter_t3788631719 * value)
	{
		____beginEndAwaitable_11 = value;
		Il2CppCodeGenWriteBarrier((&____beginEndAwaitable_11), value);
	}

	inline static int32_t get_offset_of__lastSyncCompletedReadTask_12() { return static_cast<int32_t>(offsetof(BufferedStream_t3465336908, ____lastSyncCompletedReadTask_12)); }
	inline Task_1_t61518632 * get__lastSyncCompletedReadTask_12() const { return ____lastSyncCompletedReadTask_12; }
	inline Task_1_t61518632 ** get_address_of__lastSyncCompletedReadTask_12() { return &____lastSyncCompletedReadTask_12; }
	inline void set__lastSyncCompletedReadTask_12(Task_1_t61518632 * value)
	{
		____lastSyncCompletedReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((&____lastSyncCompletedReadTask_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFEREDSTREAM_T3465336908_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t4088381929, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((&____maybeFullPath_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____buffer_5)); }
	inline ByteU5BU5D_t4116647657* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_t4116647657* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_5), value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____lastReadTask_14)); }
	inline Task_1_t61518632 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t61518632 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef STREAMREADOPERATIONOPTIMIZATION_T12377751_H
#define STREAMREADOPERATIONOPTIMIZATION_T12377751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct  StreamReadOperationOptimization_t12377751 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_t12377751, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADOPERATIONOPTIMIZATION_T12377751_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKORIGIN_T1441174344_H
#ifndef STREAMOPERATIONASYNCRESULT_T2370793485_H
#define STREAMOPERATIONASYNCRESULT_T2370793485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationAsyncResult
struct  StreamOperationAsyncResult_t2370793485  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IO.StreamOperationAsyncResult::_userCompletionCallback
	AsyncCallback_t3962456242 * ____userCompletionCallback_0;
	// System.Object System.IO.StreamOperationAsyncResult::_userAsyncStateInfo
	RuntimeObject * ____userAsyncStateInfo_1;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_asyncStreamOperation
	RuntimeObject* ____asyncStreamOperation_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_completed
	bool ____completed_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_callbackInvoked
	bool ____callbackInvoked_4;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_waitHandle
	ManualResetEvent_t451242010 * ____waitHandle_5;
	// System.Int64 System.IO.StreamOperationAsyncResult::_bytesCompleted
	int64_t ____bytesCompleted_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.StreamOperationAsyncResult::_errorInfo
	ExceptionDispatchInfo_t3750997369 * ____errorInfo_7;
	// System.Boolean System.IO.StreamOperationAsyncResult::_processCompletedOperationInCallback
	bool ____processCompletedOperationInCallback_8;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_completedOperation
	RuntimeObject* ____completedOperation_9;

public:
	inline static int32_t get_offset_of__userCompletionCallback_0() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____userCompletionCallback_0)); }
	inline AsyncCallback_t3962456242 * get__userCompletionCallback_0() const { return ____userCompletionCallback_0; }
	inline AsyncCallback_t3962456242 ** get_address_of__userCompletionCallback_0() { return &____userCompletionCallback_0; }
	inline void set__userCompletionCallback_0(AsyncCallback_t3962456242 * value)
	{
		____userCompletionCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&____userCompletionCallback_0), value);
	}

	inline static int32_t get_offset_of__userAsyncStateInfo_1() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____userAsyncStateInfo_1)); }
	inline RuntimeObject * get__userAsyncStateInfo_1() const { return ____userAsyncStateInfo_1; }
	inline RuntimeObject ** get_address_of__userAsyncStateInfo_1() { return &____userAsyncStateInfo_1; }
	inline void set__userAsyncStateInfo_1(RuntimeObject * value)
	{
		____userAsyncStateInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&____userAsyncStateInfo_1), value);
	}

	inline static int32_t get_offset_of__asyncStreamOperation_2() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____asyncStreamOperation_2)); }
	inline RuntimeObject* get__asyncStreamOperation_2() const { return ____asyncStreamOperation_2; }
	inline RuntimeObject** get_address_of__asyncStreamOperation_2() { return &____asyncStreamOperation_2; }
	inline void set__asyncStreamOperation_2(RuntimeObject* value)
	{
		____asyncStreamOperation_2 = value;
		Il2CppCodeGenWriteBarrier((&____asyncStreamOperation_2), value);
	}

	inline static int32_t get_offset_of__completed_3() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____completed_3)); }
	inline bool get__completed_3() const { return ____completed_3; }
	inline bool* get_address_of__completed_3() { return &____completed_3; }
	inline void set__completed_3(bool value)
	{
		____completed_3 = value;
	}

	inline static int32_t get_offset_of__callbackInvoked_4() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____callbackInvoked_4)); }
	inline bool get__callbackInvoked_4() const { return ____callbackInvoked_4; }
	inline bool* get_address_of__callbackInvoked_4() { return &____callbackInvoked_4; }
	inline void set__callbackInvoked_4(bool value)
	{
		____callbackInvoked_4 = value;
	}

	inline static int32_t get_offset_of__waitHandle_5() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____waitHandle_5)); }
	inline ManualResetEvent_t451242010 * get__waitHandle_5() const { return ____waitHandle_5; }
	inline ManualResetEvent_t451242010 ** get_address_of__waitHandle_5() { return &____waitHandle_5; }
	inline void set__waitHandle_5(ManualResetEvent_t451242010 * value)
	{
		____waitHandle_5 = value;
		Il2CppCodeGenWriteBarrier((&____waitHandle_5), value);
	}

	inline static int32_t get_offset_of__bytesCompleted_6() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____bytesCompleted_6)); }
	inline int64_t get__bytesCompleted_6() const { return ____bytesCompleted_6; }
	inline int64_t* get_address_of__bytesCompleted_6() { return &____bytesCompleted_6; }
	inline void set__bytesCompleted_6(int64_t value)
	{
		____bytesCompleted_6 = value;
	}

	inline static int32_t get_offset_of__errorInfo_7() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____errorInfo_7)); }
	inline ExceptionDispatchInfo_t3750997369 * get__errorInfo_7() const { return ____errorInfo_7; }
	inline ExceptionDispatchInfo_t3750997369 ** get_address_of__errorInfo_7() { return &____errorInfo_7; }
	inline void set__errorInfo_7(ExceptionDispatchInfo_t3750997369 * value)
	{
		____errorInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&____errorInfo_7), value);
	}

	inline static int32_t get_offset_of__processCompletedOperationInCallback_8() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____processCompletedOperationInCallback_8)); }
	inline bool get__processCompletedOperationInCallback_8() const { return ____processCompletedOperationInCallback_8; }
	inline bool* get_address_of__processCompletedOperationInCallback_8() { return &____processCompletedOperationInCallback_8; }
	inline void set__processCompletedOperationInCallback_8(bool value)
	{
		____processCompletedOperationInCallback_8 = value;
	}

	inline static int32_t get_offset_of__completedOperation_9() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_t2370793485, ____completedOperation_9)); }
	inline RuntimeObject* get__completedOperation_9() const { return ____completedOperation_9; }
	inline RuntimeObject** get_address_of__completedOperation_9() { return &____completedOperation_9; }
	inline void set__completedOperation_9(RuntimeObject* value)
	{
		____completedOperation_9 = value;
		Il2CppCodeGenWriteBarrier((&____completedOperation_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMOPERATIONASYNCRESULT_T2370793485_H
#ifndef WINRTTONETFXSTREAMADAPTER_T1366777568_H
#define WINRTTONETFXSTREAMADAPTER_T1366777568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WinRtToNetFxStreamAdapter
struct  WinRtToNetFxStreamAdapter_t1366777568  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::_oneByteBuffer
	ByteU5BU5D_t4116647657* ____oneByteBuffer_5;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_6;
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_7;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_8;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_9;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_10;

public:
	inline static int32_t get_offset_of__oneByteBuffer_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t1366777568, ____oneByteBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get__oneByteBuffer_5() const { return ____oneByteBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__oneByteBuffer_5() { return &____oneByteBuffer_5; }
	inline void set__oneByteBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		____oneByteBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____oneByteBuffer_5), value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t1366777568, ____leaveUnderlyingStreamOpen_6)); }
	inline bool get__leaveUnderlyingStreamOpen_6() const { return ____leaveUnderlyingStreamOpen_6; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_6() { return &____leaveUnderlyingStreamOpen_6; }
	inline void set__leaveUnderlyingStreamOpen_6(bool value)
	{
		____leaveUnderlyingStreamOpen_6 = value;
	}

	inline static int32_t get_offset_of__winRtStream_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t1366777568, ____winRtStream_7)); }
	inline RuntimeObject * get__winRtStream_7() const { return ____winRtStream_7; }
	inline RuntimeObject ** get_address_of__winRtStream_7() { return &____winRtStream_7; }
	inline void set__winRtStream_7(RuntimeObject * value)
	{
		____winRtStream_7 = value;
		Il2CppCodeGenWriteBarrier((&____winRtStream_7), value);
	}

	inline static int32_t get_offset_of__canRead_8() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t1366777568, ____canRead_8)); }
	inline bool get__canRead_8() const { return ____canRead_8; }
	inline bool* get_address_of__canRead_8() { return &____canRead_8; }
	inline void set__canRead_8(bool value)
	{
		____canRead_8 = value;
	}

	inline static int32_t get_offset_of__canWrite_9() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t1366777568, ____canWrite_9)); }
	inline bool get__canWrite_9() const { return ____canWrite_9; }
	inline bool* get_address_of__canWrite_9() { return &____canWrite_9; }
	inline void set__canWrite_9(bool value)
	{
		____canWrite_9 = value;
	}

	inline static int32_t get_offset_of__canSeek_10() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_t1366777568, ____canSeek_10)); }
	inline bool get__canSeek_10() const { return ____canSeek_10; }
	inline bool* get_address_of__canSeek_10() { return &____canSeek_10; }
	inline void set__canSeek_10(bool value)
	{
		____canSeek_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINRTTONETFXSTREAMADAPTER_T1366777568_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef OPERATIONCANCELEDEXCEPTION_T926488448_H
#define OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t926488448  : public SystemException_t176217640
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t784455623  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_t926488448, ____cancellationToken_17)); }
	inline CancellationToken_t784455623  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_t784455623 * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_t784455623  value)
	{
		____cancellationToken_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ASYNCTASKMETHODBUILDER_1_T2418262475_H
#define ASYNCTASKMETHODBUILDER_1_T2418262475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct  AsyncTaskMethodBuilder_1_t2418262475 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1502828140 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2418262475, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2418262475, ___m_task_2)); }
	inline Task_1_t1502828140 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1502828140 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1502828140 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t2418262475_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1502828140 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2418262475_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1502828140 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1502828140 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1502828140 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T2418262475_H
#ifndef ASYNCTASKMETHODBUILDER_1_T976952967_H
#define ASYNCTASKMETHODBUILDER_1_T976952967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct  AsyncTaskMethodBuilder_1_t976952967 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t61518632 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t976952967, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t976952967, ___m_task_2)); }
	inline Task_1_t61518632 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t61518632 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t61518632 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t976952967_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t61518632 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t976952967_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t61518632 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t61518632 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t61518632 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T976952967_H
#ifndef ASYNCTASKMETHODBUILDER_1_T1106113378_H
#define ASYNCTASKMETHODBUILDER_1_T1106113378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t1106113378 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t190679043 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378, ___m_task_2)); }
	inline Task_1_t190679043 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t190679043 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t190679043 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t1106113378_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t190679043 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t190679043 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t190679043 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t190679043 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T1106113378_H
#ifndef ASYNCTASKMETHODBUILDER_1_T586069192_H
#define ASYNCTASKMETHODBUILDER_1_T586069192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>
struct  AsyncTaskMethodBuilder_1_t586069192 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3965602153 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t586069192, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t586069192, ___m_task_2)); }
	inline Task_1_t3965602153 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t3965602153 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t3965602153 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t586069192_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3965602153 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t586069192_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t3965602153 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t3965602153 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t3965602153 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T586069192_H
#ifndef ASYNCTASKMETHODBUILDER_1_T2862166739_H
#define ASYNCTASKMETHODBUILDER_1_T2862166739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>
struct  AsyncTaskMethodBuilder_1_t2862166739 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1946732404 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2862166739, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2862166739, ___m_task_2)); }
	inline Task_1_t1946732404 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1946732404 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1946732404 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t2862166739_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1946732404 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2862166739_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1946732404 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1946732404 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1946732404 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T2862166739_H
#ifndef CONFIGUREDTASKAWAITABLE_T166429847_H
#define CONFIGUREDTASKAWAITABLE_T166429847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t166429847 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t555647845  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t166429847, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t555647845  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t555647845  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t166429847_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t166429847_marshaled_com
{
	ConfiguredTaskAwaiter_t555647845_marshaled_com ___m_configuredTaskAwaiter_0;
};
#endif // CONFIGUREDTASKAWAITABLE_T166429847_H
#ifndef CONFIGUREDTASKAWAITABLE_1_T1253905800_H
#define CONFIGUREDTASKAWAITABLE_1_T1253905800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct  ConfiguredTaskAwaitable_1_t1253905800 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t4273446738  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t1253905800, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t4273446738  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t4273446738 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t4273446738  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_T1253905800_H
#ifndef CONFIGUREDTASKAWAITABLE_1_T1383066211_H
#define CONFIGUREDTASKAWAITABLE_1_T1383066211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_t1383066211 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t107639853  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t1383066211, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t107639853  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t107639853 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t107639853  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_T1383066211_H
#ifndef CONFIGUREDTASKAWAITABLE_1_T3139119572_H
#define CONFIGUREDTASKAWAITABLE_1_T3139119572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>
struct  ConfiguredTaskAwaitable_1_t3139119572 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t1863693214  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t3139119572, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t1863693214  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t1863693214 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t1863693214  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_T3139119572_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T3432586689_H
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_t3913494478 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m1100404162(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_m3676534994(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_m735038959(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m291083946(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m2968386882(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m119848861(uint32_t ___dwReserved0) = 0;
};
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_t4245463285 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m3254137481(intptr_t* comReturnValue) = 0;
};
#ifndef WINDOWSRUNTIMEBUFFER_T3806548453_H
#define WINDOWSRUNTIMEBUFFER_T3806548453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct  WindowsRuntimeBuffer_t3806548453  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_t4116647657* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t3351438187  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453, ____data_1)); }
	inline ByteU5BU5D_t4116647657* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_t4116647657* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((&____data_1), value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453, ____pinHandle_5)); }
	inline GCHandle_t3351438187  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t3351438187 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t3351438187  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_t3806548453_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_t3806548453_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_winRtMarshalProxy_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMEBUFFER_T3806548453_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CANCELLATIONTOKENREGISTRATION_T2813424904_H
#define CANCELLATIONTOKENREGISTRATION_T2813424904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_t2813424904 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t322720759 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t223515617  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t2813424904, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t322720759 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t322720759 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t322720759 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_callbackInfo_0), value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t2813424904, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t223515617  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t223515617 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t223515617  value)
	{
		___m_registrationInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t2813424904_marshaled_pinvoke
{
	CancellationCallbackInfo_t322720759 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t223515617  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t2813424904_marshaled_com
{
	CancellationCallbackInfo_t322720759 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t223515617  ___m_registrationInfo_1;
};
#endif // CANCELLATIONTOKENREGISTRATION_T2813424904_H
#ifndef CANCELLATIONTOKENSOURCE_T540272775_H
#define CANCELLATIONTOKENSOURCE_T540272775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_t540272775  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t451242010 * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t3785502277* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t3937283545* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t322720759 * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t716671026 * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t451242010 * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t451242010 * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_kernelEvent_3), value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t3785502277* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t3785502277** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t3785502277* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_registeredCallbacksLists_4), value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t3937283545* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t3937283545** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t3937283545* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_linkingRegistrations_12), value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t322720759 * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t322720759 ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t322720759 * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_executingCallback_14), value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___m_timer_15)); }
	inline Timer_t716671026 * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t716671026 ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t716671026 * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_timer_15), value);
	}
};

struct CancellationTokenSource_t540272775_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t540272775 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t540272775 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_t3252573759 * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t1438585625 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t540272775 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t540272775 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((&____staticSource_Set_0), value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t540272775 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t540272775 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t540272775 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((&____staticSource_NotCancelable_1), value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_t3252573759 * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_t3252573759 ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_t3252573759 * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_LinkedTokenCancelDelegate_13), value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_t1438585625 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_t1438585625 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_t1438585625 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_timerCallback_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELLATIONTOKENSOURCE_T540272775_H
#ifndef SYNCHRONIZATIONCONTEXTPROPERTIES_T2926535923_H
#define SYNCHRONIZATIONCONTEXTPROPERTIES_T2926535923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContextProperties
struct  SynchronizationContextProperties_t2926535923 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t2926535923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXTPROPERTIES_T2926535923_H
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t1196198384 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t3187275312 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t2170468915 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskScheduler_7)); }
	inline TaskScheduler_t1196198384 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t1196198384 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_parent_8)); }
	inline Task_t3187275312 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t3187275312 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t3187275312 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_28), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_contingentProperties_33)); }
	inline ContingentProperties_t2170468915 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t2170468915 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t2170468915 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_33), value);
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t2660013028 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t2075988643 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t3252573759 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t1600215562 * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t3187275312 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t4012569436 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t3823316192 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t3905400288 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t2660013028 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t2660013028 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t2660013028 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_29), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t2075988643 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t2075988643 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t2075988643 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_31), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_32), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t3252573759 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t3252573759 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t3252573759 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_34), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t1600215562 * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t1600215562 ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t1600215562 * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_35), value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_completedTask_36)); }
	inline Task_t3187275312 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t3187275312 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t3187275312 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_36), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_t4012569436 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_t4012569436 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_t4012569436 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_37), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t3823316192 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t3823316192 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t3823316192 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_38), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t3905400288 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t3905400288 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t3905400288 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_39), value);
	}
};

struct Task_t3187275312_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t3187275312 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t1472778820 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t3187275312 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t3187275312 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t3187275312 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t1472778820 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t1472778820 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t1472778820 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef TASKCONTINUATIONOPTIONS_T875378736_H
#define TASKCONTINUATIONOPTIONS_T875378736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t875378736 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t875378736, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCONTINUATIONOPTIONS_T875378736_H
#ifndef TASKSCHEDULER_T1196198384_H
#define TASKSCHEDULER_T1196198384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t1196198384  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t1196198384_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t2384618318 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t1196198384 * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t3366404161 * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t2384618318 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t2384618318 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t2384618318 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTaskSchedulers_0), value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t1196198384 * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t1196198384 ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t1196198384 * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultTaskScheduler_1), value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t3366404161 * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t3366404161 ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t3366404161 * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskException_4), value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskExceptionLockObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKSCHEDULER_T1196198384_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t1972936122 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t1972936122 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___safeWaitHandle_4), value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
#endif // WAITHANDLE_T1743403487_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_17), value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_18), value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_19), value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef ASYNCSTATUS_T2150485874_H
#define ASYNCSTATUS_T2150485874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_t2150485874 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t2150485874, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATUS_T2150485874_H
#ifndef INPUTSTREAMOPTIONS_T2901738979_H
#define INPUTSTREAMOPTIONS_T2901738979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t2901738979 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t2901738979, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T2901738979_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DLLNOTFOUNDEXCEPTION_T2721418633_H
#define DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2721418633  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_19)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t435877138 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t435877138 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t435877138 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t435877138 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef NETFXTOWINRTSTREAMADAPTER_T2688706982_H
#define NETFXTOWINRTSTREAMADAPTER_T2688706982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.NetFxToWinRtStreamAdapter
struct  NetFxToWinRtStreamAdapter_t2688706982  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t1273022909 * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t2688706982, ____managedStream_0)); }
	inline Stream_t1273022909 * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t1273022909 ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t1273022909 * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((&____managedStream_0), value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t2688706982, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t2688706982, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXTOWINRTSTREAMADAPTER_T2688706982_H
#ifndef STREAMFLUSHASYNCRESULT_T3395384147_H
#define STREAMFLUSHASYNCRESULT_T3395384147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamFlushAsyncResult
struct  StreamFlushAsyncResult_t3395384147  : public StreamOperationAsyncResult_t2370793485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMFLUSHASYNCRESULT_T3395384147_H
#ifndef U3CU3EC__DISPLAYCLASS1_0_T472374824_H
#define U3CU3EC__DISPLAYCLASS1_0_T472374824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t472374824  : public RuntimeObject
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::dataBuffer
	RuntimeObject* ___dataBuffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::stream
	Stream_t1273022909 * ___stream_1;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::bytesRequested
	int32_t ___bytesRequested_2;
	// Windows.Storage.Streams.InputStreamOptions System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::options
	uint32_t ___options_3;

public:
	inline static int32_t get_offset_of_dataBuffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t472374824, ___dataBuffer_0)); }
	inline RuntimeObject* get_dataBuffer_0() const { return ___dataBuffer_0; }
	inline RuntimeObject** get_address_of_dataBuffer_0() { return &___dataBuffer_0; }
	inline void set_dataBuffer_0(RuntimeObject* value)
	{
		___dataBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataBuffer_0), value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t472374824, ___stream_1)); }
	inline Stream_t1273022909 * get_stream_1() const { return ___stream_1; }
	inline Stream_t1273022909 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t1273022909 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___stream_1), value);
	}

	inline static int32_t get_offset_of_bytesRequested_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t472374824, ___bytesRequested_2)); }
	inline int32_t get_bytesRequested_2() const { return ___bytesRequested_2; }
	inline int32_t* get_address_of_bytesRequested_2() { return &___bytesRequested_2; }
	inline void set_bytesRequested_2(int32_t value)
	{
		___bytesRequested_2 = value;
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t472374824, ___options_3)); }
	inline uint32_t get_options_3() const { return ___options_3; }
	inline uint32_t* get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(uint32_t value)
	{
		___options_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS1_0_T472374824_H
#ifndef U3CU3CREADASYNC_ABSTRACTSTREAMU3EB__0U3ED_T2037578343_H
#define U3CU3CREADASYNC_ABSTRACTSTREAMU3EB__0U3ED_T2037578343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d
struct  U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t2862166739  ___U3CU3Et__builder_1;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass1_0_t472374824 * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t784455623  ___cancelToken_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Byte[] System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<data>5__2
	ByteU5BU5D_t4116647657* ___U3CdataU3E5__2_5;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<offset>5__3
	int32_t ___U3CoffsetU3E5__3_6;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<bytesCompleted>5__4
	int32_t ___U3CbytesCompletedU3E5__4_7;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<bytesRead>5__5
	int32_t ___U3CbytesReadU3E5__5_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t4273446738  ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2862166739  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2862166739 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2862166739  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass1_0_t472374824 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass1_0_t472374824 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass1_0_t472374824 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_cancelToken_3() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___cancelToken_3)); }
	inline CancellationToken_t784455623  get_cancelToken_3() const { return ___cancelToken_3; }
	inline CancellationToken_t784455623 * get_address_of_cancelToken_3() { return &___cancelToken_3; }
	inline void set_cancelToken_3(CancellationToken_t784455623  value)
	{
		___cancelToken_3 = value;
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___progressListener_4), value);
	}

	inline static int32_t get_offset_of_U3CdataU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CdataU3E5__2_5)); }
	inline ByteU5BU5D_t4116647657* get_U3CdataU3E5__2_5() const { return ___U3CdataU3E5__2_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CdataU3E5__2_5() { return &___U3CdataU3E5__2_5; }
	inline void set_U3CdataU3E5__2_5(ByteU5BU5D_t4116647657* value)
	{
		___U3CdataU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdataU3E5__2_5), value);
	}

	inline static int32_t get_offset_of_U3CoffsetU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CoffsetU3E5__3_6)); }
	inline int32_t get_U3CoffsetU3E5__3_6() const { return ___U3CoffsetU3E5__3_6; }
	inline int32_t* get_address_of_U3CoffsetU3E5__3_6() { return &___U3CoffsetU3E5__3_6; }
	inline void set_U3CoffsetU3E5__3_6(int32_t value)
	{
		___U3CoffsetU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CbytesCompletedU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CbytesCompletedU3E5__4_7)); }
	inline int32_t get_U3CbytesCompletedU3E5__4_7() const { return ___U3CbytesCompletedU3E5__4_7; }
	inline int32_t* get_address_of_U3CbytesCompletedU3E5__4_7() { return &___U3CbytesCompletedU3E5__4_7; }
	inline void set_U3CbytesCompletedU3E5__4_7(int32_t value)
	{
		___U3CbytesCompletedU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CbytesReadU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CbytesReadU3E5__5_8)); }
	inline int32_t get_U3CbytesReadU3E5__5_8() const { return ___U3CbytesReadU3E5__5_8; }
	inline int32_t* get_address_of_U3CbytesReadU3E5__5_8() { return &___U3CbytesReadU3E5__5_8; }
	inline void set_U3CbytesReadU3E5__5_8(int32_t value)
	{
		___U3CbytesReadU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343, ___U3CU3Eu__1_9)); }
	inline ConfiguredTaskAwaiter_t4273446738  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline ConfiguredTaskAwaiter_t4273446738 * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(ConfiguredTaskAwaiter_t4273446738  value)
	{
		___U3CU3Eu__1_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3CREADASYNC_ABSTRACTSTREAMU3EB__0U3ED_T2037578343_H
#ifndef U3CU3CWRITEASYNC_ABSTRACTSTREAMU3EB__0U3ED_T2737451479_H
#define U3CU3CWRITEASYNC_ABSTRACTSTREAMU3EB__0U3ED_T2737451479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d
struct  U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t586069192  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t784455623  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t875659351 * ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<bytesToWrite>5__2
	int32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t555647845  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t586069192  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t586069192 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t586069192  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___cancelToken_2)); }
	inline CancellationToken_t784455623  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_t784455623 * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_t784455623  value)
	{
		___cancelToken_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass2_0_t875659351 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass2_0_t875659351 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass2_0_t875659351 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___progressListener_4), value);
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___U3CbytesToWriteU3E5__2_5)); }
	inline int32_t get_U3CbytesToWriteU3E5__2_5() const { return ___U3CbytesToWriteU3E5__2_5; }
	inline int32_t* get_address_of_U3CbytesToWriteU3E5__2_5() { return &___U3CbytesToWriteU3E5__2_5; }
	inline void set_U3CbytesToWriteU3E5__2_5(int32_t value)
	{
		___U3CbytesToWriteU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t555647845  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t555647845  value)
	{
		___U3CU3Eu__1_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3CWRITEASYNC_ABSTRACTSTREAMU3EB__0U3ED_T2737451479_H
#ifndef U3CU3CWRITEASYNC_ABSTRACTSTREAMU3EB__1U3ED_T2737385943_H
#define U3CU3CWRITEASYNC_ABSTRACTSTREAMU3EB__1U3ED_T2737385943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d
struct  U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>t__builder
	AsyncTaskMethodBuilder_1_t586069192  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::cancelToken
	CancellationToken_t784455623  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t875659351 * ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.UInt32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<bytesToWrite>5__2
	uint32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>u__1
	ConfiguredTaskAwaiter_t555647845  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t586069192  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t586069192 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t586069192  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___cancelToken_2)); }
	inline CancellationToken_t784455623  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_t784455623 * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_t784455623  value)
	{
		___cancelToken_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass2_0_t875659351 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass2_0_t875659351 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass2_0_t875659351 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___progressListener_4), value);
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___U3CbytesToWriteU3E5__2_5)); }
	inline uint32_t get_U3CbytesToWriteU3E5__2_5() const { return ___U3CbytesToWriteU3E5__2_5; }
	inline uint32_t* get_address_of_U3CbytesToWriteU3E5__2_5() { return &___U3CbytesToWriteU3E5__2_5; }
	inline void set_U3CbytesToWriteU3E5__2_5(uint32_t value)
	{
		___U3CbytesToWriteU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t555647845  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t555647845  value)
	{
		___U3CU3Eu__1_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3CWRITEASYNC_ABSTRACTSTREAMU3EB__1U3ED_T2737385943_H
#ifndef U3CU3CFLUSHASYNC_ABSTRACTSTREAMU3EB__0U3ED_T1213545130_H
#define U3CU3CFLUSHASYNC_ABSTRACTSTREAMU3EB__0U3ED_T1213545130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d
struct  U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t784455623  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass3_0_t3604542706 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t555647845  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130, ___cancelToken_2)); }
	inline CancellationToken_t784455623  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_t784455623 * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_t784455623  value)
	{
		___cancelToken_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass3_0_t3604542706 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass3_0_t3604542706 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass3_0_t3604542706 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_t555647845  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_t555647845  value)
	{
		___U3CU3Eu__1_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3CFLUSHASYNC_ABSTRACTSTREAMU3EB__0U3ED_T1213545130_H
#ifndef STREAMREADASYNCRESULT_T2363479406_H
#define STREAMREADASYNCRESULT_T2363479406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReadAsyncResult
struct  StreamReadAsyncResult_t2363479406  : public StreamOperationAsyncResult_t2370793485
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamReadAsyncResult::_userBuffer
	RuntimeObject* ____userBuffer_10;

public:
	inline static int32_t get_offset_of__userBuffer_10() { return static_cast<int32_t>(offsetof(StreamReadAsyncResult_t2363479406, ____userBuffer_10)); }
	inline RuntimeObject* get__userBuffer_10() const { return ____userBuffer_10; }
	inline RuntimeObject** get_address_of__userBuffer_10() { return &____userBuffer_10; }
	inline void set__userBuffer_10(RuntimeObject* value)
	{
		____userBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&____userBuffer_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADASYNCRESULT_T2363479406_H
#ifndef STREAMWRITEASYNCRESULT_T1545417764_H
#define STREAMWRITEASYNCRESULT_T1545417764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriteAsyncResult
struct  StreamWriteAsyncResult_t1545417764  : public StreamOperationAsyncResult_t2370793485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITEASYNCRESULT_T1545417764_H
#ifndef UNMANAGEDMEMORYSTREAM_T4234117669_H
#define UNMANAGEDMEMORYSTREAM_T4234117669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t4234117669  : public Stream_t1273022909
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t3564637124 * ____buffer_5;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_9;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_10;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_11;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____buffer_5)); }
	inline SafeBuffer_t3564637124 * get__buffer_5() const { return ____buffer_5; }
	inline SafeBuffer_t3564637124 ** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(SafeBuffer_t3564637124 * value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_5), value);
	}

	inline static int32_t get_offset_of__mem_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____mem_6)); }
	inline uint8_t* get__mem_6() const { return ____mem_6; }
	inline uint8_t** get_address_of__mem_6() { return &____mem_6; }
	inline void set__mem_6(uint8_t* value)
	{
		____mem_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____length_7)); }
	inline int64_t get__length_7() const { return ____length_7; }
	inline int64_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int64_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____capacity_8)); }
	inline int64_t get__capacity_8() const { return ____capacity_8; }
	inline int64_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int64_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__position_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____position_9)); }
	inline int64_t get__position_9() const { return ____position_9; }
	inline int64_t* get_address_of__position_9() { return &____position_9; }
	inline void set__position_9(int64_t value)
	{
		____position_9 = value;
	}

	inline static int32_t get_offset_of__offset_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____offset_10)); }
	inline int64_t get__offset_10() const { return ____offset_10; }
	inline int64_t* get_address_of__offset_10() { return &____offset_10; }
	inline void set__offset_10(int64_t value)
	{
		____offset_10 = value;
	}

	inline static int32_t get_offset_of__access_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____access_11)); }
	inline int32_t get__access_11() const { return ____access_11; }
	inline int32_t* get_address_of__access_11() { return &____access_11; }
	inline void set__access_11(int32_t value)
	{
		____access_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t4234117669, ____lastReadTask_13)); }
	inline Task_1_t61518632 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t61518632 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAM_T4234117669_H
#ifndef U3CREADASYNCINTERNALU3ED__43_T3130315676_H
#define U3CREADASYNCINTERNALU3ED__43_T3130315676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43
struct  U3CReadAsyncInternalU3Ed__43_t3130315676 
{
public:
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>t__builder
	AsyncTaskMethodBuilder_1_t976952967  ___U3CU3Et__builder_1;
	// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>4__this
	WinRtToNetFxStreamAdapter_t1366777568 * ___U3CU3E4__this_2;
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::offset
	int32_t ___offset_4;
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::count
	int32_t ___count_5;
	// System.Threading.CancellationToken System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::cancellationToken
	CancellationToken_t784455623  ___cancellationToken_6;
	// Windows.Storage.Streams.IBuffer System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<userBuffer>5__2
	RuntimeObject* ___U3CuserBufferU3E5__2_7;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer> System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>u__1
	ConfiguredTaskAwaiter_t1863693214  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t976952967  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t976952967 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t976952967  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___U3CU3E4__this_2)); }
	inline WinRtToNetFxStreamAdapter_t1366777568 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WinRtToNetFxStreamAdapter_t1366777568 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WinRtToNetFxStreamAdapter_t1366777568 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___cancellationToken_6)); }
	inline CancellationToken_t784455623  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t784455623 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t784455623  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CuserBufferU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___U3CuserBufferU3E5__2_7)); }
	inline RuntimeObject* get_U3CuserBufferU3E5__2_7() const { return ___U3CuserBufferU3E5__2_7; }
	inline RuntimeObject** get_address_of_U3CuserBufferU3E5__2_7() { return &___U3CuserBufferU3E5__2_7; }
	inline void set_U3CuserBufferU3E5__2_7(RuntimeObject* value)
	{
		___U3CuserBufferU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuserBufferU3E5__2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__43_t3130315676, ___U3CU3Eu__1_8)); }
	inline ConfiguredTaskAwaiter_t1863693214  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline ConfiguredTaskAwaiter_t1863693214 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(ConfiguredTaskAwaiter_t1863693214  value)
	{
		___U3CU3Eu__1_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADASYNCINTERNALU3ED__43_T3130315676_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((&___objectName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t2326897723_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedPreparedType1_1), value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedPreparedType2_2), value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedPreparedType3_3), value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedPreparedType4_4), value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedPreparedType5_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef ASYNCINFOTOTASKBRIDGE_1_T1425581848_H
#define ASYNCINFOTOTASKBRIDGE_1_T1425581848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct  AsyncInfoToTaskBridge_1_t1425581848  : public TaskCompletionSource_1_t2826642468
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ct
	CancellationToken_t784455623  ____ct_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ctr
	CancellationTokenRegistration_t2813424904  ____ctr_2;
	// System.Boolean System.Threading.Tasks.AsyncInfoToTaskBridge`1::_completing
	bool ____completing_3;

public:
	inline static int32_t get_offset_of__ct_1() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_t1425581848, ____ct_1)); }
	inline CancellationToken_t784455623  get__ct_1() const { return ____ct_1; }
	inline CancellationToken_t784455623 * get_address_of__ct_1() { return &____ct_1; }
	inline void set__ct_1(CancellationToken_t784455623  value)
	{
		____ct_1 = value;
	}

	inline static int32_t get_offset_of__ctr_2() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_t1425581848, ____ctr_2)); }
	inline CancellationTokenRegistration_t2813424904  get__ctr_2() const { return ____ctr_2; }
	inline CancellationTokenRegistration_t2813424904 * get_address_of__ctr_2() { return &____ctr_2; }
	inline void set__ctr_2(CancellationTokenRegistration_t2813424904  value)
	{
		____ctr_2 = value;
	}

	inline static int32_t get_offset_of__completing_3() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_t1425581848, ____completing_3)); }
	inline bool get__completing_3() const { return ____completing_3; }
	inline bool* get_address_of__completing_3() { return &____completing_3; }
	inline void set__completing_3(bool value)
	{
		____completing_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCINFOTOTASKBRIDGE_1_T1425581848_H
#ifndef TASK_1_T1502828140_H
#define TASK_1_T1502828140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_t1502828140  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t1502828140, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t1502828140_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t156716511 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1314258023 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t1502828140_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t156716511 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t156716511 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t156716511 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t1502828140_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1314258023 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1314258023 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1314258023 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1502828140_H
#ifndef TASK_1_T61518632_H
#define TASK_1_T61518632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_t61518632  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t61518632, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t61518632_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3010374299 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t4167915811 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t61518632_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3010374299 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3010374299 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3010374299 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t61518632_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t4167915811 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t4167915811 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t4167915811 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T61518632_H
#ifndef TASK_1_T3965602153_H
#define TASK_1_T3965602153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.UInt32>
struct  Task_1_t3965602153  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t3965602153, ___m_result_40)); }
	inline uint32_t get_m_result_40() const { return ___m_result_40; }
	inline uint32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(uint32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t3965602153_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2619490524 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t3777032036 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t3965602153_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t2619490524 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t2619490524 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t2619490524 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t3965602153_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t3777032036 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t3777032036 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t3777032036 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T3965602153_H
#ifndef TASK_1_T1536492530_H
#define TASK_1_T1536492530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct  Task_1_t1536492530  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidValueTypeParameter_t130952355  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t1536492530, ___m_result_40)); }
	inline VoidValueTypeParameter_t130952355  get_m_result_40() const { return ___m_result_40; }
	inline VoidValueTypeParameter_t130952355 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(VoidValueTypeParameter_t130952355  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t1536492530_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t190380901 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1347922413 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t1536492530_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t190380901 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t190380901 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t190380901 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t1536492530_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1347922413 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1347922413 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1347922413 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1536492530_H
#ifndef TASK_1_T1946732404_H
#define TASK_1_T1946732404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct  Task_1_t1946732404  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t1946732404, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t1946732404_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t600620775 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1758162287 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t1946732404_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t600620775 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t600620775 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t600620775 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t1946732404_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1758162287 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1758162287 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1758162287 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1946732404_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t2425795444 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m488151110(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m774826579(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m1014534200(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m959568370() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m1968429586() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m2177651161(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef ACTION_1_T3252573759_H
#define ACTION_1_T3252573759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Object>
struct  Action_1_t3252573759  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3252573759_H
#ifndef ACTION_2_T1194737946_H
#define ACTION_2_T1194737946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct  Action_2_t1194737946  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T1194737946_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FUNC_2_T2970310655_H
#define FUNC_2_T2970310655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct  Func_2_t2970310655  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2970310655_H
#ifndef FUNC_3_T1840957678_H
#define FUNC_3_T1840957678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct  Func_3_t1840957678  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T1840957678_H
#ifndef FUNC_3_T4117055225_H
#define FUNC_3_T4117055225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct  Func_3_t4117055225  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T4117055225_H
#ifndef CREATEVALUECALLBACK_T3597102618_H
#define CREATEVALUECALLBACK_T3597102618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>
struct  CreateValueCallback_t3597102618  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEVALUECALLBACK_T3597102618_H
#ifndef WINDOWSRUNTIMEBUFFERUNMANAGEDMEMORYSTREAM_T4037845366_H
#define WINDOWSRUNTIMEBUFFERUNMANAGEDMEMORYSTREAM_T4037845366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct  WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366  : public UnmanagedMemoryStream_t4234117669
{
public:
	// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::_sourceBuffer
	RuntimeObject* ____sourceBuffer_14;

public:
	inline static int32_t get_offset_of__sourceBuffer_14() { return static_cast<int32_t>(offsetof(WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366, ____sourceBuffer_14)); }
	inline RuntimeObject* get__sourceBuffer_14() const { return ____sourceBuffer_14; }
	inline RuntimeObject** get_address_of__sourceBuffer_14() { return &____sourceBuffer_14; }
	inline void set__sourceBuffer_14(RuntimeObject* value)
	{
		____sourceBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((&____sourceBuffer_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMEBUFFERUNMANAGEDMEMORYSTREAM_T4037845366_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
#ifndef ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#define ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncActionCompletedHandler
struct  AsyncActionCompletedHandler_t4142409509  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t3072713919* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct  AsyncOperationCompletedHandler_1_t1437760040  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3013442981* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t2580597550  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t593214123* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t3609957527  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1622574100* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1__ctor_m101596112_gshared (AsyncOperationCompletedHandler_1_t1437760040 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<System.Object,System.UInt32>(TResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_t2560061978_m1430688491_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___synchronousResult0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<System.Object,System.UInt32>(System.Exception)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_t2560061978_m292378105_gshared (RuntimeObject * __this /* static, unused */, Exception_t * ___error0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m4151600685_gshared (Func_3_t2065982592 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Object,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisRuntimeObject_TisUInt32_t2560061978_m4260621374_gshared (RuntimeObject * __this /* static, unused */, Func_3_t2361001864 * ___taskProvider0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisUInt32_t2560061978_TisUInt32_t2560061978_m1984313700_gshared (RuntimeObject * __this /* static, unused */, Func_3_t1840957678 * ___taskProvider0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m2416230436_gshared (Func_2_t252621383 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisBoolean_t97287965_m3909181280_gshared (RuntimeObject * __this /* static, unused */, Func_2_t2970310655 * ___taskProvider0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t1106113378  AsyncTaskMethodBuilder_1_Create_m457539829_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m630578838_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * AsyncTaskMethodBuilder_1_get_Task_m317986670_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t1253905800  Task_1_ConfigureAwait_m2040180629_gshared (Task_1_t61518632 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t4273446738  ConfiguredTaskAwaitable_1_GetAwaiter_m2730877693_gshared (ConfiguredTaskAwaitable_1_t1253905800 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m3004702642_gshared (ConfiguredTaskAwaiter_t4273446738 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4273446738_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m796287873_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, ConfiguredTaskAwaiter_t4273446738 * p0, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
extern "C" IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_m988772279_gshared (ConfiguredTaskAwaiter_t4273446738 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m131199109_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m1633157453_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t586069192  AsyncTaskMethodBuilder_1_Create_m2437087066_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m283205869_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t3965602153 * AsyncTaskMethodBuilder_1_get_Task_m3799090329_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m4149329102_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m1548426225_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, ConfiguredTaskAwaiter_t555647845 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3939687854_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m2874574167_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m3756530673_gshared (AsyncTaskMethodBuilder_1_t586069192 * __this, ConfiguredTaskAwaiter_t555647845 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * p1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2418262475  AsyncTaskMethodBuilder_1_Create_m3423860640_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m1811493866_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * AsyncTaskMethodBuilder_1_get_Task_m1946293888_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m3289421814_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, ConfiguredTaskAwaiter_t555647845 * p0, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3066925186_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m772896578_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m2547167106_gshared (AsyncOperationWithProgressCompletedHandler_2_t2653736172 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m1020003653_gshared (AsyncOperationWithProgressCompletedHandler_2_t2580597550 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m3786659020_gshared (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3965602153 * WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t2560061978_TisUInt32_t2560061978_m3905281516_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t97287965_m1845927618_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t976952967  AsyncTaskMethodBuilder_1_Create_m3003315259_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m2102369792_gshared (AsyncTaskMethodBuilder_1_t976952967 * __this, U3CReadAsyncInternalU3Ed__43_t3130315676 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t61518632 * AsyncTaskMethodBuilder_1_get_Task_m374009415_gshared (AsyncTaskMethodBuilder_1_t976952967 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Object,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t2560061978_m3757334255_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t1383066211  Task_1_ConfigureAwait_m2546782974_gshared (Task_1_t190679043 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t107639853  ConfiguredTaskAwaitable_1_GetAwaiter_m2061313211_gshared (ConfiguredTaskAwaitable_1_t1383066211 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m1080323900_gshared (ConfiguredTaskAwaiter_t107639853 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t107639853_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m4188126242_gshared (AsyncTaskMethodBuilder_1_t976952967 * __this, ConfiguredTaskAwaiter_t107639853 * p0, U3CReadAsyncInternalU3Ed__43_t3130315676 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m2513714076_gshared (ConfiguredTaskAwaiter_t107639853 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m1162352611_gshared (AsyncTaskMethodBuilder_1_t976952967 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m341489268_gshared (AsyncTaskMethodBuilder_1_t976952967 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3679186700_gshared (AsyncTaskMethodBuilder_1_t976952967 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m2005289596_gshared (ConditionalWeakTable_2_t3582039290 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_m2210746870_gshared (CreateValueCallback_t1109218577 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !1 System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(!0,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<!0,!1>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConditionalWeakTable_2_GetValue_m2691598011_gshared (ConditionalWeakTable_2_t3582039290 * __this, RuntimeObject * p0, CreateValueCallback_t1109218577 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m4235261096_gshared (ConditionalWeakTable_2_t3582039290 * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
extern "C" IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m2467593538_gshared (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ArraySegment_1_get_Array_m3038125939_gshared (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
extern "C" IL2CPP_METHOD_ATTR VoidValueTypeParameter_t130952355  TaskToAsyncInfoAdapter_4_GetResultsInternal_m1526243555_gshared (TaskToAsyncInfoAdapter_4_t1835283874 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m22087660_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
extern "C" IL2CPP_METHOD_ATTR bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m590964815_gshared (TaskToAsyncInfoAdapter_4_t1835283874 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * TaskToAsyncInfoAdapter_4_get_Task_m4073501994_gshared (TaskToAsyncInfoAdapter_4_t1835283874 * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
extern "C" IL2CPP_METHOD_ATTR CancellationTokenSource_t540272775 * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4082647258_gshared (TaskToAsyncInfoAdapter_4_t1835283874 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1__ctor_m3498705156_gshared (AsyncInfoToTaskBridge_1_t1425581848 * __this, CancellationToken_t784455623  p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
extern "C" IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1_RegisterForCancellation_m3477871226_gshared (AsyncInfoToTaskBridge_1_t1425581848 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t1536492530 * TaskCompletionSource_1_get_Task_m2355031486_gshared (TaskCompletionSource_1_t2826642468 * __this, const RuntimeMethod* method);

// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m3603759869 (ObjectDisposedException_t21392786 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m4269507377 (Exception_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m2589290611 (Stream_t1273022909 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_m1815569430 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_m1343822691 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, uint32_t ___options3, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m3152162177 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, RuntimeObject* ___buffer1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_m989114848 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::ThrowCloningNotSupported(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612 (RuntimeObject * __this /* static, unused */, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_m4009589989 (StreamOperationAsyncResult_t2370793485 * __this, RuntimeObject* ___asyncStreamOperation0, AsyncCallback_t3962456242 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationCompletedHandler_1__ctor_m101596112 (AsyncOperationCompletedHandler_1_t1437760040 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t1437760040 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1__ctor_m101596112_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m344969833 (StreamFlushAsyncResult_t3395384147 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m708912045 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t3750997369 * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2836908337 (RuntimeObject * __this /* static, unused */, Exception_t * ___nativeException0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
extern "C" IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m2689339678 (ExceptionDispatchInfo_t3750997369 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m4010886457 (ManualResetEvent_t451242010 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Threading.WaitHandle::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WaitHandle_Dispose_m2233804502 (WaitHandle_t1743403487 * __this, const RuntimeMethod* method);
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
extern "C" IL2CPP_METHOD_ATTR WaitHandle_t1743403487 * StreamOperationAsyncResult_get_AsyncWaitHandle_m3895669914 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_m3800264807 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
extern "C" IL2CPP_METHOD_ATTR Exception_t * ExceptionDispatchInfo_get_SourceException_m4136013950 (ExceptionDispatchInfo_t3750997369 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1685032583 (InvalidOperationException_t56020091 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264 (RuntimeObject * __this /* static, unused */, ExceptionDispatchInfo_t3750997369 * ___errInfo0, String_t* ___errMsg1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_m125047312 (StreamOperationAsyncResult_t2370793485 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m3076065613 (NullReferenceException_t1023182353 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
extern "C" IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t3750997369 * ExceptionDispatchInfo_Capture_m2882203257 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Threading.Interlocked::MemoryBarrier()
extern "C" IL2CPP_METHOD_ATTR void Interlocked_MemoryBarrier_m1422338187 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_m3156993048 (AsyncCallback_t3962456242 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188 (RuntimeObject * __this /* static, unused */, MemoryStream_t94973147 * ___underlyingStream0, int32_t ___positionInStream1, int32_t ___length2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(TResult)
inline RuntimeObject* AsyncInfo_CreateCompletedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m3404063200 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___synchronousResult0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_t2560061978_m1430688491_gshared)(__this /* static, unused */, ___synchronousResult0, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Exception)
inline RuntimeObject* AsyncInfo_CreateFaultedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m2195899486 (RuntimeObject * __this /* static, unused */, Exception_t * ___error0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, Exception_t *, const RuntimeMethod*))AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_t2560061978_m292378105_gshared)(__this /* static, unused */, ___error0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3485798010 (U3CU3Ec__DisplayClass1_0_t472374824 * __this, const RuntimeMethod* method);
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Math_Min_m187254930 (RuntimeObject * __this /* static, unused */, uint32_t p0, uint32_t p1, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_m3477745630 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m2947162041 (Func_3_t4117055225 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t4117055225 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m4151600685_gshared)(__this, p0, p1, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisIBuffer_t541192229_TisUInt32_t2560061978_m2871395425 (RuntimeObject * __this /* static, unused */, Func_3_t4117055225 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, Func_3_t4117055225 *, const RuntimeMethod*))AsyncInfo_Run_TisRuntimeObject_TisUInt32_t2560061978_m4260621374_gshared)(__this /* static, unused */, ___taskProvider0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3485803383 (U3CU3Ec__DisplayClass2_0_t875659351 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buffer0, ByteU5BU5D_t4116647657** ___underlyingDataArray1, int32_t* ___underlyingDataArrayStartOffset2, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m21237239 (Func_3_t1840957678 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t1840957678 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m4151600685_gshared)(__this, p0, p1, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisUInt32_t2560061978_TisUInt32_t2560061978_m1984313700 (RuntimeObject * __this /* static, unused */, Func_3_t1840957678 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, Func_3_t1840957678 *, const RuntimeMethod*))AsyncInfo_Run_TisUInt32_t2560061978_TisUInt32_t2560061978_m1984313700_gshared)(__this /* static, unused */, ___taskProvider0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3485800060 (U3CU3Ec__DisplayClass3_0_t3604542706 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4206015708 (Func_2_t2970310655 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2970310655 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2416230436_gshared)(__this, p0, p1, method);
}
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisBoolean_t97287965_m3909181280 (RuntimeObject * __this /* static, unused */, Func_2_t2970310655 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, Func_2_t2970310655 *, const RuntimeMethod*))AsyncInfo_Run_TisBoolean_t97287965_m3909181280_gshared)(__this /* static, unused */, ___taskProvider0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Create()
inline AsyncTaskMethodBuilder_1_t2862166739  AsyncTaskMethodBuilder_1_Create_m4184676639 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t2862166739  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m457539829_gshared)(__this /* static, unused */, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m2446424660 (AsyncTaskMethodBuilder_1_t2862166739 * __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2862166739 *, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m630578838_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::get_Task()
inline Task_1_t1946732404 * AsyncTaskMethodBuilder_1_get_Task_m2303679917 (AsyncTaskMethodBuilder_1_t2862166739 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1946732404 * (*) (AsyncTaskMethodBuilder_1_t2862166739 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m317986670_gshared)(__this, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C" IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m3655186381 (CancellationToken_t784455623 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t1253905800  Task_1_ConfigureAwait_m2040180629 (Task_1_t61518632 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t1253905800  (*) (Task_1_t61518632 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m2040180629_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_t4273446738  ConfiguredTaskAwaitable_1_GetAwaiter_m2730877693 (ConfiguredTaskAwaitable_1_t1253905800 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t4273446738  (*) (ConfiguredTaskAwaitable_1_t1253905800 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m2730877693_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m3004702642 (ConfiguredTaskAwaiter_t4273446738 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t4273446738 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m3004702642_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4273446738_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m1181056382 (AsyncTaskMethodBuilder_1_t2862166739 * __this, ConfiguredTaskAwaiter_t4273446738 * p0, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2862166739 *, ConfiguredTaskAwaiter_t4273446738 *, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4273446738_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m796287873_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_m988772279 (ConfiguredTaskAwaiter_t4273446738 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_t4273446738 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m988772279_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m630185106 (AsyncTaskMethodBuilder_1_t2862166739 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2862166739 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m131199109_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m1747581165 (AsyncTaskMethodBuilder_1_t2862166739 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2862166739 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m1633157453_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3346031551 (AsyncTaskMethodBuilder_1_t2862166739 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2862166739 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m3811994301 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
inline AsyncTaskMethodBuilder_1_t586069192  AsyncTaskMethodBuilder_1_Create_m2437087066 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t586069192  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m2437087066_gshared)(__this /* static, unused */, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m283205869 (AsyncTaskMethodBuilder_1_t586069192 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m283205869_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
inline Task_1_t3965602153 * AsyncTaskMethodBuilder_1_get_Task_m3799090329 (AsyncTaskMethodBuilder_1_t586069192 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3965602153 * (*) (AsyncTaskMethodBuilder_1_t586069192 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m3799090329_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m4149329102 (AsyncTaskMethodBuilder_1_t586069192 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m4149329102_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t166429847  Task_ConfigureAwait_m898394246 (Task_t3187275312 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t555647845  ConfiguredTaskAwaitable_GetAwaiter_m2777384263 (ConfiguredTaskAwaitable_t166429847 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m2492964255 (ConfiguredTaskAwaiter_t555647845 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m1548426225 (AsyncTaskMethodBuilder_1_t586069192 * __this, ConfiguredTaskAwaiter_t555647845 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, ConfiguredTaskAwaiter_t555647845 *, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m1548426225_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m382867624 (ConfiguredTaskAwaiter_t555647845 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3939687854 (AsyncTaskMethodBuilder_1_t586069192 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m3939687854_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m2874574167 (AsyncTaskMethodBuilder_1_t586069192 * __this, uint32_t p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, uint32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m2874574167_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m12096357 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070 (AsyncTaskMethodBuilder_1_t586069192 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m994589036 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeBufferExtensions_AsStream_m2594335144 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m3756530673 (AsyncTaskMethodBuilder_1_t586069192 * __this, ConfiguredTaskAwaiter_t555647845 * p0, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t586069192 *, ConfiguredTaskAwaiter_t555647845 *, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m3756530673_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m3201072283 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m528171077 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t2418262475  AsyncTaskMethodBuilder_1_Create_m3423860640 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t2418262475  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m3423860640_gshared)(__this /* static, unused */, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m1811493866 (AsyncTaskMethodBuilder_1_t2418262475 * __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m1811493866_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t1502828140 * AsyncTaskMethodBuilder_1_get_Task_m1946293888 (AsyncTaskMethodBuilder_1_t2418262475 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1502828140 * (*) (AsyncTaskMethodBuilder_1_t2418262475 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m1946293888_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m3289421814 (AsyncTaskMethodBuilder_1_t2418262475 * __this, ConfiguredTaskAwaiter_t555647845 * p0, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, ConfiguredTaskAwaiter_t555647845 *, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m3289421814_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3066925186 (AsyncTaskMethodBuilder_1_t2418262475 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m3066925186_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m772896578 (AsyncTaskMethodBuilder_1_t2418262475 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m772896578_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m1530074096 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554 (AsyncTaskMethodBuilder_1_t2418262475 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_gshared)(__this, p0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2063525728 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m1039799182 (AsyncOperationWithProgressCompletedHandler_2_t3609957527 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t3609957527 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m2547167106_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m2015389887 (StreamReadAsyncResult_t2363479406 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_m279643431 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___userBuffer0, RuntimeObject* ___resultBuffer1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m1020003653 (AsyncOperationWithProgressCompletedHandler_2_t2580597550 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t2580597550 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m1020003653_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m1740713229 (StreamWriteAsyncResult_t1545417764 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Type System.Exception::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Exception_GetType_m2227967756 (Exception_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m3034475861 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void IOException__ctor_m3246761956 (IOException_t4088381929 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m2250988661 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buffer0, RuntimeObject* ___otherBuffer1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m1180775848 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, RuntimeObject* ___destination1, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::.ctor(System.Object,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter__ctor_m1902152105 (WinRtToNetFxStreamAdapter_t1366777568 * __this, RuntimeObject * ___winRtStream0, bool ___canRead1, bool ___canWrite2, bool ___canSeek3, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stream__ctor_m3881936881 (Stream_t1273022909 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m874059170 (Stream_t1273022909 * __this, bool p0, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IRandomAccessStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_t1366777568 *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m3786659020_gshared)(__this, method);
}
// System.Void System.IO.IOException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IOException__ctor_m3662782713 (IOException_t4088381929 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IInputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t2821136229_m1559834163 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_t1366777568 *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m3786659020_gshared)(__this, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m2423130836 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___source0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_m1840514536 (StreamReadAsyncResult_t2363479406 * __this, RuntimeObject* ___asyncStreamReadOperation0, RuntimeObject* ___buffer1, AsyncCallback_t3962456242 * ___userCompletionCallback2, RuntimeObject * ___userAsyncStateInfo3, bool ___processCompletedOperationInCallback4, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::Wait()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_m2523645759 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::get_ProcessCompletedOperationInCallback()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m1459368052 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m2973382536 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_m3408371609 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m4249139974 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Int64 System.IO.StreamOperationAsyncResult::get_BytesCompleted()
extern "C" IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m1957448874 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
extern "C" IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m2126013613 (CancellationToken_t784455623 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsyncInternal(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t61518632 * WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59154805 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t784455623  ___cancellationToken3, const RuntimeMethod* method);
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_m3751440709 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method);
// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::get_OneByteBuffer()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WinRtToNetFxStreamAdapter_get_OneByteBuffer_m2617962370 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m2375980393 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IOutputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_t1366777568 *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m3786659020_gshared)(__this, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m2336623450 (StreamWriteAsyncResult_t1545417764 * __this, RuntimeObject* ___asyncStreamWriteOperation0, AsyncCallback_t3962456242 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
inline Task_1_t3965602153 * WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t2560061978_TisUInt32_t2560061978_m3905281516 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_t3965602153 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, CancellationToken_t784455623 , const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t2560061978_TisUInt32_t2560061978_m3905281516_gshared)(__this /* static, unused */, ___source0, ___cancellationToken1, method);
}
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_m786895103 (StreamFlushAsyncResult_t3395384147 * __this, RuntimeObject* ___asyncStreamFlushOperation0, bool ___processCompletedOperationInCallback1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_get_CompletedTask_m459565641 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>,System.Threading.CancellationToken)
inline Task_1_t1502828140 * WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t97287965_m1845927618 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_t1502828140 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, CancellationToken_t784455623 , const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t97287965_m1845927618_gshared)(__this /* static, unused */, ___source0, ___cancellationToken1, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
inline AsyncTaskMethodBuilder_1_t976952967  AsyncTaskMethodBuilder_1_Create_m3003315259 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t976952967  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m3003315259_gshared)(__this /* static, unused */, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m2102369792 (AsyncTaskMethodBuilder_1_t976952967 * __this, U3CReadAsyncInternalU3Ed__43_t3130315676 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t976952967 *, U3CReadAsyncInternalU3Ed__43_t3130315676 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m2102369792_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
inline Task_1_t61518632 * AsyncTaskMethodBuilder_1_get_Task_m374009415 (AsyncTaskMethodBuilder_1_t976952967 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t61518632 * (*) (AsyncTaskMethodBuilder_1_t976952967 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m374009415_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<Windows.Storage.Streams.IBuffer,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
inline Task_1_t1946732404 * WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t541192229_TisUInt32_t2560061978_m1568080940 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_t1946732404 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, CancellationToken_t784455623 , const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t2560061978_m3757334255_gshared)(__this /* static, unused */, ___source0, ___cancellationToken1, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t3139119572  Task_1_ConfigureAwait_m2888757198 (Task_1_t1946732404 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t3139119572  (*) (Task_1_t1946732404 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m2546782974_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>::GetAwaiter()
inline ConfiguredTaskAwaiter_t1863693214  ConfiguredTaskAwaitable_1_GetAwaiter_m2481093440 (ConfiguredTaskAwaitable_1_t3139119572 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t1863693214  (*) (ConfiguredTaskAwaitable_1_t3139119572 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m2061313211_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m3341770821 (ConfiguredTaskAwaiter_t1863693214 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t1863693214 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m1080323900_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>,System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t1863693214_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m3319697378 (AsyncTaskMethodBuilder_1_t976952967 * __this, ConfiguredTaskAwaiter_t1863693214 * p0, U3CReadAsyncInternalU3Ed__43_t3130315676 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t976952967 *, ConfiguredTaskAwaiter_t1863693214 *, U3CReadAsyncInternalU3Ed__43_t3130315676 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t107639853_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m4188126242_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>::GetResult()
inline RuntimeObject* ConfiguredTaskAwaiter_GetResult_m2103123391 (ConfiguredTaskAwaiter_t1863693214 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConfiguredTaskAwaiter_t1863693214 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m2513714076_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1162352611 (AsyncTaskMethodBuilder_1_t976952967 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t976952967 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m1162352611_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m341489268 (AsyncTaskMethodBuilder_1_t976952967 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t976952967 *, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m341489268_gshared)(__this, p0, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_MoveNext_m2332415331 (U3CReadAsyncInternalU3Ed__43_t3130315676 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3679186700 (AsyncTaskMethodBuilder_1_t976952967 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t976952967 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3679186700_gshared)(__this, p0, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_SetStateMachine_m3503944324 (U3CReadAsyncInternalU3Ed__43_t3130315676 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.IO.BufferedStream::get_BufferSize()
extern "C" IL2CPP_METHOD_ATTR int32_t BufferedStream_get_BufferSize_m1372012477 (BufferedStream_t3465336908 * __this, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternal(System.Object,System.Int32,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method);
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::GetManagedStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * NetFxToWinRtStreamAdapter_GetManagedStream_m3480949594 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m1034312941 (ObjectDisposedException_t21392786 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::TryGetValue(!0,!1&)
inline bool ConditionalWeakTable_2_TryGetValue_m814710423 (ConditionalWeakTable_2_t1774956035 * __this, RuntimeObject * p0, Stream_t1273022909 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t1774956035 *, RuntimeObject *, Stream_t1273022909 **, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m2005289596_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::EnsureAdapterBufferSize(System.IO.Stream,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___adapter0, int32_t ___requiredBufferSize1, String_t* ___methodName2, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternalFactoryHelper(System.Object,System.Int32,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_m1117801903 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>::.ctor(System.Object,System.IntPtr)
inline void CreateValueCallback__ctor_m1119614491 (CreateValueCallback_t3597102618 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (CreateValueCallback_t3597102618 *, RuntimeObject *, intptr_t, const RuntimeMethod*))CreateValueCallback__ctor_m2210746870_gshared)(__this, p0, p1, method);
}
// !1 System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::GetValue(!0,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<!0,!1>)
inline Stream_t1273022909 * ConditionalWeakTable_2_GetValue_m1139837188 (ConditionalWeakTable_2_t1774956035 * __this, RuntimeObject * p0, CreateValueCallback_t3597102618 * p1, const RuntimeMethod* method)
{
	return ((  Stream_t1273022909 * (*) (ConditionalWeakTable_2_t1774956035 *, RuntimeObject *, CreateValueCallback_t3597102618 *, const RuntimeMethod*))ConditionalWeakTable_2_GetValue_m2691598011_gshared)(__this, p0, p1, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m2412380478 (U3CU3Ec__DisplayClass12_0_t3069626030 * __this, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m4200031818 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___winRtStream0, int32_t ___bufferSize1, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m615294623 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___winRtStream0, const RuntimeMethod* method);
// System.IO.Stream System.IO.BufferedStream::get_UnderlyingStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * BufferedStream_get_UnderlyingStream_m2691825172 (BufferedStream_t3465336908 * __this, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetWonInitializationRace()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetWonInitializationRace_m2570515959 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::.ctor()
inline void ConditionalWeakTable_2__ctor_m1725874571 (ConditionalWeakTable_2_t1774956035 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t1774956035 *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m4235261096_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::.ctor()
inline void ConditionalWeakTable_2__ctor_m2388336367 (ConditionalWeakTable_2_t3962727071 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t3962727071 *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m4235261096_gshared)(__this, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3304133737 (U3CU3Ec_t2303284929 * __this, const RuntimeMethod* method);
// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter::Create(System.Object)
extern "C" IL2CPP_METHOD_ATTR WinRtToNetFxStreamAdapter_t1366777568 * WinRtToNetFxStreamAdapter_Create_m1998248300 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BufferedStream__ctor_m588355978 (BufferedStream_t3465336908 * __this, Stream_t1273022909 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m1721285349 (WindowsRuntimeBuffer_t3806548453 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
extern "C" IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m2454072108 (RuntimeObject * __this /* static, unused */, RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m1532458134 (NotImplementedException_t3489357830 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m3427142301 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m4207902953 (RuntimeObject * __this /* static, unused */, intptr_t p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Threading.Interlocked::CompareExchange(System.IntPtr&,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Interlocked_CompareExchange_m3932212864 (RuntimeObject * __this /* static, unused */, intptr_t* p0, intptr_t p1, intptr_t p2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m1058226959 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2520637223 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
extern "C" IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_m2750334226 (WindowsRuntimeBuffer_t3806548453 * __this, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m3384658186 (intptr_t* __this, void* p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m659375680 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m3807393127 (WindowsRuntimeBuffer_t3806548453 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m1249409418 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, uint32_t ___sourceIndex1, RuntimeObject* ___destination2, uint32_t ___destinationIndex3, uint32_t ___count4, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buffer0, uint32_t ___offset1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1562111546 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, intptr_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m655142473 (RuntimeObject * __this /* static, unused */, intptr_t ___src0, intptr_t ___dst1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_m327227246 (WindowsRuntimeBuffer_t3806548453 * __this, ByteU5BU5D_t4116647657** ___underlyingDataArray0, int32_t* ___underlyingDataArrayStartOffset1, const RuntimeMethod* method);
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m40101894 (UnauthorizedAccessException_t490705335 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m2467593538 (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t283560987 *, const RuntimeMethod*))ArraySegment_1_get_Offset_m2467593538_gshared)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_t4116647657* ArraySegment_1_get_Array_m3038125939 (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (ArraySegment_1_t283560987 *, const RuntimeMethod*))ArraySegment_1_get_Array_m3038125939_gshared)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3475740994 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m1133492133 (WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366 * __this, RuntimeObject* ___sourceBuffer0, uint8_t* ___dataPtr1, const RuntimeMethod* method);
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
extern "C" IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_m1147761611 (UnmanagedMemoryStream_t4234117669 * __this, uint8_t* p0, int64_t p1, int64_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
extern "C" IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m620618218 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Random__ctor_m3209279193 (Random_t108471755 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m1566534627 (SendOrPostCallback_t2750080073 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_m255798036 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, SynchronizationContext_t2326897723 * ___targetContext1, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m2514243817 (SynchronizationContext_t2326897723 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1030590022 (U3CU3Ec_t3914568053 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
inline VoidValueTypeParameter_t130952355  TaskToAsyncInfoAdapter_4_GetResultsInternal_m1507086869 (TaskToAsyncInfoAdapter_4_t1408863619 * __this, const RuntimeMethod* method)
{
	return ((  VoidValueTypeParameter_t130952355  (*) (TaskToAsyncInfoAdapter_4_t1408863619 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_GetResultsInternal_m1526243555_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::Invoke(Windows.Foundation.IAsyncAction,Windows.Foundation.AsyncStatus)
extern "C" IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_m694454652 (AsyncActionCompletedHandler_t4142409509 * __this, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m118522912 (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3252573759 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_t2813424904  CancellationToken_Register_m1967634854 (CancellationToken_t784455623 * __this, Action_1_t3252573759 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2721600688 (Action_2_t1194737946 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1194737946 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m22087660_gshared)(__this, p0, p1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" IL2CPP_METHOD_ATTR CancellationToken_t784455623  CancellationToken_get_None_m4013051791 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
extern "C" IL2CPP_METHOD_ATTR TaskScheduler_t1196198384 * TaskScheduler_get_Default_m1400371958 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t3187275312 * Task_ContinueWith_m1818927876 (Task_t3187275312 * __this, Action_2_t1194737946 * p0, RuntimeObject * p1, CancellationToken_t784455623  p2, int32_t p3, TaskScheduler_t1196198384 * p4, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * WindowsRuntimeSystemExtensions_AsTask_m1776607123 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
inline bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m426417699 (TaskToAsyncInfoAdapter_4_t1408863619 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncInfoAdapter_4_t1408863619 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m590964815_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
inline Task_t3187275312 * TaskToAsyncInfoAdapter_4_get_Task_m1699314739 (TaskToAsyncInfoAdapter_4_t1408863619 * __this, const RuntimeMethod* method)
{
	return ((  Task_t3187275312 * (*) (TaskToAsyncInfoAdapter_4_t1408863619 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Task_m4073501994_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m1406118445 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
extern "C" IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_m145616282 (CancellationToken_t784455623 * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
inline CancellationTokenSource_t540272775 * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4116196857 (TaskToAsyncInfoAdapter_4_t1408863619 * __this, const RuntimeMethod* method)
{
	return ((  CancellationTokenSource_t540272775 * (*) (TaskToAsyncInfoAdapter_4_t1408863619 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4082647258_gshared)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m1127551074 (RuntimeObject * __this /* static, unused */, CancellationToken_t784455623  ___source0, CancellationTokenSource_t540272775 * ___sink1, Task_t3187275312 * ___concatenationLifetime2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_FromException_m3324787540 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CancellationToken__ctor_m3515673697 (CancellationToken_t784455623 * __this, bool p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_FromCanceled_m1072597403 (RuntimeObject * __this /* static, unused */, CancellationToken_t784455623  p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
inline void AsyncInfoToTaskBridge_1__ctor_m3498705156 (AsyncInfoToTaskBridge_1_t1425581848 * __this, CancellationToken_t784455623  p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t1425581848 *, CancellationToken_t784455623 , const RuntimeMethod*))AsyncInfoToTaskBridge_1__ctor_m3498705156_gshared)(__this, p0, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_m1781396403 (AsyncActionCompletedHandler_t4142409509 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
inline void AsyncInfoToTaskBridge_1_RegisterForCancellation_m3477871226 (AsyncInfoToTaskBridge_1_t1425581848 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t1425581848 *, RuntimeObject*, const RuntimeMethod*))AsyncInfoToTaskBridge_1_RegisterForCancellation_m3477871226_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
inline Task_1_t1536492530 * TaskCompletionSource_1_get_Task_m2355031486 (TaskCompletionSource_1_t2826642468 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1536492530 * (*) (TaskCompletionSource_1_t2826642468 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m2355031486_gshared)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2511835527 (U3CU3Ec_t2427350286 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m781927668 (CancellationTokenSource_t540272775 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m2624297505 (CancellationTokenRegistration_t2813424904 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_X()
extern "C" IL2CPP_METHOD_ATTR double Point_get_X_m1757330650 (Point_t4164953539 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Point_get_Y_m191246709 (Point_t4164953539 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m2534410555 (Point_t4164953539 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ToString_m1489408190 (Point_t4164953539 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m2778073800 (Point_t4164953539 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m3519681033 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3551144749 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, RuntimeObject * p2, RuntimeObject * p3, RuntimeObject * p4, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
extern "C" IL2CPP_METHOD_ATTR bool Point_op_Equality_m1708123262 (RuntimeObject * __this /* static, unused */, Point_t4164953539  ___point10, Point_t4164953539  ___point21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Point_Equals_m1617877981 (Point_t4164953539 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m2295714610 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Point::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m1136990496 (Point_t4164953539 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_X()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_X_m282139105 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Y_m282073569 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Width_m3194876027 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Height_m2678763970 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m3978563697 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m1475233121 (Rect_t2695113487 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ToString_m1103669923 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m1814056401 (Rect_t2695113487 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3496269849 (RuntimeObject * __this /* static, unused */, Rect_t2695113487  ___rect10, Rect_t2695113487  ___rect21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Equals_m2314324014 (Rect_t2695113487 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Rect::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m1603020085 (Rect_t2695113487 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Width_m3186228132 (Size_t550917638 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Height_m1189908446 (Size_t550917638 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m2843270629 (Size_t550917638 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m3364468834 (RuntimeObject * __this /* static, unused */, Size_t550917638  ___size10, Size_t550917638  ___size21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m1950794187 (Size_t550917638 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Size::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m1530925289 (Size_t550917638 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Double_Equals_m2309369974 (double* __this, double p0, const RuntimeMethod* method);
// System.String Windows.Foundation.Size::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Size_ToString_m401005881 (Size_t550917638 * __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_t435877138 * NumberFormatInfo_GetInstance_m2833078205 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m33502788 (NumberFormatInfo_t435877138 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::GetManagedStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * NetFxToWinRtStreamAdapter_GetManagedStream_m3480949594 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get__managedStream_0();
		return L_0;
	}
}
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * G_B2_0 = NULL;
	Stream_t1273022909 * G_B1_0 = NULL;
	{
		Stream_t1273022909 * L_0 = __this->get__managedStream_0();
		Stream_t1273022909 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_2 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_2, _stringLiteral124057261, /*hidden argument*/NULL);
		ObjectDisposedException_t21392786 * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4269507377(L_3, ((int32_t)-2147483629), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043_RuntimeMethod_var);
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_System_IDisposable_Dispose_m392504180 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	Stream_t1273022909 * V_0 = NULL;
	{
		Stream_t1273022909 * L_0 = __this->get__managedStream_0();
		V_0 = L_0;
		Stream_t1273022909 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		__this->set__managedStream_0((Stream_t1273022909 *)NULL);
		bool L_2 = __this->get__leaveUnderlyingStreamOpen_1();
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Stream_t1273022909 * L_3 = V_0;
		NullCheck(L_3);
		Stream_Dispose_m2589290611(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_m2565264344 (NetFxToWinRtStreamAdapter_t2688706982 * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_RuntimeMethod_var);
	}

IL_000e:
	{
		uint32_t L_2 = ___count1;
		if (false)
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_3 = ___count1;
		if ((!(((uint32_t)((int32_t)2147483647LL)) < ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}

IL_001a:
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral2002595880, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_5 = L_4;
		NullCheck(L_5);
		Exception_SetErrorCode_m4269507377(L_5, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_RuntimeMethod_var);
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___buffer0;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_6);
		uint32_t L_8 = ___count1;
		if ((!(((uint32_t)L_7) < ((uint32_t)L_8))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral1172734953, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = L_9;
		NullCheck(L_10);
		Exception_SetErrorCode_m4269507377(L_10, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_RuntimeMethod_var);
	}

IL_004f:
	{
		uint32_t L_11 = ___options2;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_12 = ___options2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_13 = ___options2;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_14, _stringLiteral2715197523, _stringLiteral1362732724, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_15 = L_14;
		NullCheck(L_15);
		Exception_SetErrorCode_m4269507377(L_15, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, NetFxToWinRtStreamAdapter_ReadAsync_m2565264344_RuntimeMethod_var);
	}

IL_0075:
	{
		Stream_t1273022909 * L_16 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = __this->get__readOptimization_2();
		V_2 = L_17;
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		Stream_t1273022909 * L_20 = V_0;
		RuntimeObject* L_21 = ___buffer0;
		uint32_t L_22 = ___count1;
		RuntimeObject* L_23 = StreamOperationsImplementation_ReadAsync_MemoryStream_m1815569430(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00a3;
	}

IL_0095:
	{
		Stream_t1273022909 * L_24 = V_0;
		RuntimeObject* L_25 = ___buffer0;
		uint32_t L_26 = ___count1;
		uint32_t L_27 = ___options2;
		RuntimeObject* L_28 = StreamOperationsImplementation_ReadAsync_AbstractStream_m1343822691(NULL /*static, unused*/, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		goto IL_00a3;
	}

IL_00a1:
	{
		V_1 = (RuntimeObject*)NULL;
	}

IL_00a3:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m660284093 (NetFxToWinRtStreamAdapter_t2688706982 * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_WriteAsync_m660284093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetFxToWinRtStreamAdapter_WriteAsync_m660284093_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___buffer0;
		NullCheck(L_2);
		uint32_t L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4 = ___buffer0;
		NullCheck(L_4);
		uint32_t L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral4023079014, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = L_6;
		NullCheck(L_7);
		Exception_SetErrorCode_m4269507377(L_7, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, NetFxToWinRtStreamAdapter_WriteAsync_m660284093_RuntimeMethod_var);
	}

IL_0032:
	{
		Stream_t1273022909 * L_8 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___buffer0;
		RuntimeObject* L_10 = StreamOperationsImplementation_WriteAsync_AbstractStream_m3152162177(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m287315233 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = StreamOperationsImplementation_FlushAsync_AbstractStream_m989114848(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_m1777296364 (NetFxToWinRtStreamAdapter_t2688706982 * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_Seek_m1777296364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		uint64_t L_0 = ___position0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral2236202192, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_2 = L_1;
		NullCheck(L_2);
		Exception_SetErrorCode_m4269507377(L_2, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, NetFxToWinRtStreamAdapter_Seek_m1777296364_RuntimeMethod_var);
	}

IL_0022:
	{
		Stream_t1273022909 * L_3 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		uint64_t L_4 = ___position0;
		V_0 = L_4;
		int64_t L_5 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(26 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, L_5, 0);
		return;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m2644883279 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m1075665771 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m1850945290 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_m985570299 (NetFxToWinRtStreamAdapter_t2688706982 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m3076170043(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::ThrowCloningNotSupported(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612 (RuntimeObject * __this /* static, unused */, String_t* ___methodName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___methodName0;
		String_t* L_1 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3782173248, L_0, _stringLiteral3088406789, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_2, L_1, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4269507377(L_3, ((int32_t)-2147467263), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612_RuntimeMethod_var);
	}
}
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m2202158284 (NetFxToWinRtStreamAdapter_t2688706982 * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetFxToWinRtStreamAdapter_GetInputStreamAt_m2202158284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m2141415612(NULL /*static, unused*/, _stringLiteral1819414752, /*hidden argument*/NULL);
		return (RuntimeObject*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_m786895103 (StreamFlushAsyncResult_t3395384147 * __this, RuntimeObject* ___asyncStreamFlushOperation0, bool ___processCompletedOperationInCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamFlushAsyncResult__ctor_m786895103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamFlushOperation0;
		bool L_1 = ___processCompletedOperationInCallback1;
		StreamOperationAsyncResult__ctor_m4009589989(__this, L_0, (AsyncCallback_t3962456242 *)NULL, NULL, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncStreamFlushOperation0;
		intptr_t L_3 = (intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_RuntimeMethod_var;
		AsyncOperationCompletedHandler_1_t1437760040 * L_4 = (AsyncOperationCompletedHandler_1_t1437760040 *)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t1437760040_il2cpp_TypeInfo_var);
		AsyncOperationCompletedHandler_1__ctor_m101596112(L_4, __this, (intptr_t)L_3, /*hidden argument*/AsyncOperationCompletedHandler_1__ctor_m101596112_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< AsyncOperationCompletedHandler_1_t1437760040 * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncOperation`1<System.Boolean>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<!0>) */, IAsyncOperation_1_t3013442981_il2cpp_TypeInfo_var, L_2, L_4);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m369257983 (StreamFlushAsyncResult_t3395384147 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m369257983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m344969833(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperation_1_t3013442981_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m344969833 (StreamFlushAsyncResult_t3395384147 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m344969833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t* G_B2_0 = NULL;
	int64_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	int64_t* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* !0 Windows.Foundation.IAsyncOperation`1<System.Boolean>::GetResults() */, IAsyncOperation_1_t3013442981_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___bytesCompleted1;
		bool L_3 = V_0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		*((int64_t*)G_B3_1) = (int64_t)(((int64_t)((int64_t)G_B3_0)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_m125047312 (StreamOperationAsyncResult_t2370793485 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_m125047312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__completedOperation_9();
		NullCheck(L_0);
		Exception_t * L_1 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_0);
		Exception_t * L_2 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m708912045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t3750997369 * L_3 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2836908337(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ExceptionDispatchInfo_Throw_m2689339678(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_m4009589989 (StreamOperationAsyncResult_t2370793485 * __this, RuntimeObject* ___asyncStreamOperation0, AsyncCallback_t3962456242 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult__ctor_m4009589989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncStreamOperation0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2710921312, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, StreamOperationAsyncResult__ctor_m4009589989_RuntimeMethod_var);
	}

IL_0014:
	{
		AsyncCallback_t3962456242 * L_2 = ___userCompletionCallback1;
		__this->set__userCompletionCallback_0(L_2);
		RuntimeObject * L_3 = ___userAsyncStateInfo2;
		__this->set__userAsyncStateInfo_1(L_3);
		RuntimeObject* L_4 = ___asyncStreamOperation0;
		__this->set__asyncStreamOperation_2(L_4);
		il2cpp_codegen_memory_barrier();
		__this->set__completed_3(0);
		il2cpp_codegen_memory_barrier();
		__this->set__callbackInvoked_4(0);
		__this->set__bytesCompleted_6((((int64_t)((int64_t)0))));
		__this->set__errorInfo_7((ExceptionDispatchInfo_t3750997369 *)NULL);
		bool L_5 = ___processCompletedOperationInCallback3;
		__this->set__processCompletedOperationInCallback_8(L_5);
		return;
	}
}
// System.Object System.IO.StreamOperationAsyncResult::get_AsyncState()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * StreamOperationAsyncResult_get_AsyncState_m682459329 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__userAsyncStateInfo_1();
		return L_0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_ProcessCompletedOperationInCallback()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m1459368052 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__processCompletedOperationInCallback_8();
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
extern "C" IL2CPP_METHOD_ATTR WaitHandle_t1743403487 * StreamOperationAsyncResult_get_AsyncWaitHandle_m3895669914 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_get_AsyncWaitHandle_m3895669914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t451242010 * V_0 = NULL;
	ManualResetEvent_t451242010 * V_1 = NULL;
	{
		ManualResetEvent_t451242010 * L_0 = __this->get__waitHandle_5();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ManualResetEvent_t451242010 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ManualResetEvent_t451242010 * L_2 = V_0;
		return L_2;
	}

IL_000e:
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_t451242010 * L_4 = (ManualResetEvent_t451242010 *)il2cpp_codegen_object_new(ManualResetEvent_t451242010_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m4010886457(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ManualResetEvent_t451242010 ** L_5 = __this->get_address_of__waitHandle_5();
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_t451242010 * L_6 = V_0;
		ManualResetEvent_t451242010 * L_7 = InterlockedCompareExchangeImpl<ManualResetEvent_t451242010 *>((ManualResetEvent_t451242010 **)L_5, L_6, (ManualResetEvent_t451242010 *)NULL);
		V_1 = L_7;
		ManualResetEvent_t451242010 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		ManualResetEvent_t451242010 * L_9 = V_0;
		NullCheck(L_9);
		WaitHandle_Dispose_m2233804502(L_9, /*hidden argument*/NULL);
		ManualResetEvent_t451242010 * L_10 = V_1;
		return L_10;
	}

IL_0035:
	{
		ManualResetEvent_t451242010 * L_11 = V_0;
		return L_11;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_CompletedSynchronously()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_CompletedSynchronously_m3750994557 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_IsCompleted_m4048462840 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Wait()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_m2523645759 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	WaitHandle_t1743403487 * V_0 = NULL;
	{
		bool L_0 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WaitHandle_t1743403487 * L_1 = StreamOperationAsyncResult_get_AsyncWaitHandle_m3895669914(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001b;
	}

IL_0014:
	{
		WaitHandle_t1743403487 * L_2 = V_0;
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_2);
	}

IL_001b:
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Int64 System.IO.StreamOperationAsyncResult::get_BytesCompleted()
extern "C" IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m1957448874 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__bytesCompleted_6();
		return L_0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m2973382536 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		ExceptionDispatchInfo_t3750997369 * L_0 = __this->get__errorInfo_7();
		return (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_t3750997369 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m4249139974 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	{
		ExceptionDispatchInfo_t3750997369 * L_0 = __this->get__errorInfo_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ExceptionDispatchInfo_t3750997369 * L_1 = __this->get__errorInfo_7();
		NullCheck(L_1);
		ExceptionDispatchInfo_Throw_m2689339678(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
extern "C" IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_m3800264807 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_CancelStreamOperation_m3800264807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__callbackInvoked_4();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->get__asyncStreamOperation_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Windows.Foundation.IAsyncInfo::Cancel() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_1);
		return (bool)1;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_m3408371609 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_CloseStreamOperation_m3408371609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_0 = __this->get__asyncStreamOperation_2();
			if (!L_0)
			{
				goto IL_0013;
			}
		}

IL_0008:
		{
			RuntimeObject* L_1 = __this->get__asyncStreamOperation_2();
			NullCheck(L_1);
			InterfaceActionInvoker0::Invoke(4 /* System.Void Windows.Foundation.IAsyncInfo::Close() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_1);
		}

IL_0013:
		{
			goto IL_0018;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.Object)
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		__this->set__asyncStreamOperation_2((RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Finalize()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Finalize_m548611187 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamOperationAsyncResult_CancelStreamOperation_m3800264807(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264 (RuntimeObject * __this /* static, unused */, ExceptionDispatchInfo_t3750997369 * ___errInfo0, String_t* ___errMsg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		ExceptionDispatchInfo_t3750997369 * L_0 = ___errInfo0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_1 = ___errInfo0;
		NullCheck(L_1);
		Exception_t * L_2 = ExceptionDispatchInfo_get_SourceException_m4136013950(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = ((Exception_t *)(NULL));
	}

IL_000c:
	{
		V_0 = G_B3_0;
		Exception_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_4 = ___errMsg1;
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_6 = ___errMsg1;
		Exception_t * L_7 = V_0;
		InvalidOperationException_t56020091 * L_8 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1685032583(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264_RuntimeMethod_var);
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768 (StreamOperationAsyncResult_t2370793485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_t3750997369 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * G_B9_0 = NULL;
	{
		bool L_0 = __this->get__callbackInvoked_4();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_1 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264(NULL /*static, unused*/, L_1, _stringLiteral99743386, /*hidden argument*/NULL);
	}

IL_001a:
	{
		bool L_2 = __this->get__processCompletedOperationInCallback_8();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_4 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264(NULL /*static, unused*/, L_4, _stringLiteral99743386, /*hidden argument*/NULL);
	}

IL_003c:
	{
		RuntimeObject* L_5 = __this->get__completedOperation_9();
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_6 = __this->get__errorInfo_7();
		V_0 = L_6;
		ExceptionDispatchInfo_t3750997369 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_8 = V_0;
		NullCheck(L_8);
		Exception_t * L_9 = ExceptionDispatchInfo_get_SourceException_m4136013950(L_8, /*hidden argument*/NULL);
		G_B9_0 = L_9;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = ((Exception_t *)(NULL));
	}

IL_0057:
	{
		V_1 = G_B9_0;
		V_2 = _stringLiteral1566604334;
		Exception_t * L_10 = V_1;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		Exception_t * L_11 = V_1;
		if (!((NullReferenceException_t1023182353 *)IsInstClass((RuntimeObject*)L_11, NullReferenceException_t1023182353_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_12 = V_2;
		Exception_t * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		NullCheck(L_12);
		bool L_15 = String_Equals_m2270643605(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_16 = V_0;
		NullCheck(L_16);
		ExceptionDispatchInfo_Throw_m2689339678(L_16, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_007f:
	{
		InvalidOperationException_t56020091 * L_17 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_17, _stringLiteral99743386, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768_RuntimeMethod_var);
	}

IL_008a:
	{
		RuntimeObject* L_18 = __this->get__completedOperation_9();
		NullCheck(L_18);
		uint32_t L_19 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->get__asyncStreamOperation_2();
		NullCheck(L_20);
		uint32_t L_21 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_20);
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_00b2;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_22 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m3064208264(NULL /*static, unused*/, L_22, _stringLiteral278379368, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		RuntimeObject* L_23 = __this->get__completedOperation_9();
		NullCheck(L_23);
		int32_t L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_23);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->set__bytesCompleted_6((((int64_t)((int64_t)0))));
		RuntimeObject* L_25 = __this->get__completedOperation_9();
		NullCheck(L_25);
		Exception_t * L_26 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_25);
		StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_m125047312(__this, L_26, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		RuntimeObject* L_27 = __this->get__completedOperation_9();
		int64_t* L_28 = __this->get_address_of__bytesCompleted_6();
		VirtActionInvoker2< RuntimeObject*, int64_t* >::Invoke(8 /* System.Void System.IO.StreamOperationAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&) */, __this, L_27, (int64_t*)L_28);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::StreamOperationCompletedCallback(Windows.Foundation.IAsyncInfo,Windows.Foundation.AsyncStatus)
extern "C" IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150 (StreamOperationAsyncResult_t2370793485 * __this, RuntimeObject* ___completedOperation0, int32_t ___unusedCompletionStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				bool L_0 = __this->get__callbackInvoked_4();
				il2cpp_codegen_memory_barrier();
				if (!L_0)
				{
					goto IL_0015;
				}
			}

IL_000a:
			{
				InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
				InvalidOperationException__ctor_m237278729(L_1, _stringLiteral1404372540, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_RuntimeMethod_var);
			}

IL_0015:
			{
				il2cpp_codegen_memory_barrier();
				__this->set__callbackInvoked_4(1);
				RuntimeObject* L_2 = ___completedOperation0;
				if (L_2)
				{
					goto IL_002c;
				}
			}

IL_0021:
			{
				NullReferenceException_t1023182353 * L_3 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
				NullReferenceException__ctor_m3076065613(L_3, _stringLiteral1566604334, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_RuntimeMethod_var);
			}

IL_002c:
			{
				RuntimeObject* L_4 = ___completedOperation0;
				__this->set__completedOperation_9(L_4);
				bool L_5 = __this->get__processCompletedOperationInCallback_8();
				if (!L_5)
				{
					goto IL_0041;
				}
			}

IL_003b:
			{
				StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768(__this, /*hidden argument*/NULL);
			}

IL_0041:
			{
				IL2CPP_LEAVE(0x81, FINALLY_005a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0043;
			throw e;
		}

CATCH_0043:
		{ // begin catch(System.Exception)
			V_0 = ((Exception_t *)__exception_local);
			__this->set__bytesCompleted_6((((int64_t)((int64_t)0))));
			Exception_t * L_6 = V_0;
			ExceptionDispatchInfo_t3750997369 * L_7 = ExceptionDispatchInfo_Capture_m2882203257(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			__this->set__errorInfo_7(L_7);
			IL2CPP_LEAVE(0x81, FINALLY_005a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set__completed_3(1);
			Interlocked_MemoryBarrier_m1422338187(NULL /*static, unused*/, /*hidden argument*/NULL);
			ManualResetEvent_t451242010 * L_8 = __this->get__waitHandle_5();
			il2cpp_codegen_memory_barrier();
			if (!L_8)
			{
				goto IL_0080;
			}
		}

IL_0072:
		{
			ManualResetEvent_t451242010 * L_9 = __this->get__waitHandle_5();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_9);
			EventWaitHandle_Set_m2445193251(L_9, /*hidden argument*/NULL);
		}

IL_0080:
		{
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		AsyncCallback_t3962456242 * L_10 = __this->get__userCompletionCallback_0();
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		AsyncCallback_t3962456242 * L_11 = __this->get__userCompletionCallback_0();
		NullCheck(L_11);
		AsyncCallback_Invoke_m3156993048(L_11, __this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_m1815569430 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_ReadAsync_MemoryStream_m1815569430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___buffer1;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_0, 0);
		Stream_t1273022909 * L_1 = ___stream0;
		V_0 = ((MemoryStream_t94973147 *)IsInstClass((RuntimeObject*)L_1, MemoryStream_t94973147_il2cpp_TypeInfo_var));
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			MemoryStream_t94973147 * L_2 = V_0;
			MemoryStream_t94973147 * L_3 = V_0;
			NullCheck(L_3);
			int64_t L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			uint32_t L_5 = ___count2;
			RuntimeObject* L_6 = WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188(NULL /*static, unused*/, L_2, (((int32_t)((int32_t)L_4))), L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			uint32_t L_8 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_7);
			if ((!(((uint32_t)L_8) > ((uint32_t)0))))
			{
				goto IL_0035;
			}
		}

IL_0026:
		{
			MemoryStream_t94973147 * L_9 = V_0;
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			uint32_t L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_9);
			VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(26 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, (((int64_t)((uint64_t)L_11))), 1);
		}

IL_0035:
		{
			RuntimeObject* L_12 = V_1;
			RuntimeObject* L_13 = AsyncInfo_CreateCompletedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m3404063200(NULL /*static, unused*/, L_12, /*hidden argument*/AsyncInfo_CreateCompletedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m3404063200_RuntimeMethod_var);
			V_2 = L_13;
			goto IL_0046;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Exception)
		RuntimeObject* L_14 = AsyncInfo_CreateFaultedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m2195899486(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/AsyncInfo_CreateFaultedOperation_TisIBuffer_t541192229_TisUInt32_t2560061978_m2195899486_RuntimeMethod_var);
		V_2 = L_14;
		goto IL_0046;
	} // end catch (depth: 1)

IL_0046:
	{
		RuntimeObject* L_15 = V_2;
		return L_15;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_m1343822691 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, uint32_t ___options3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_ReadAsync_AbstractStream_m1343822691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t472374824 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t472374824 * L_0 = (U3CU3Ec__DisplayClass1_0_t472374824 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t472374824_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m3485798010(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t472374824 * L_1 = V_0;
		Stream_t1273022909 * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_1(L_2);
		U3CU3Ec__DisplayClass1_0_t472374824 * L_3 = V_0;
		uint32_t L_4 = ___options3;
		NullCheck(L_3);
		L_3->set_options_3(L_4);
		U3CU3Ec__DisplayClass1_0_t472374824 * L_5 = V_0;
		uint32_t L_6 = ___count2;
		NullCheck(L_5);
		L_5->set_bytesRequested_2(L_6);
		U3CU3Ec__DisplayClass1_0_t472374824 * L_7 = V_0;
		RuntimeObject* L_8 = ___buffer1;
		NullCheck(L_7);
		L_7->set_dataBuffer_0(((WindowsRuntimeBuffer_t3806548453 *)IsInstSealed((RuntimeObject*)L_8, WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass1_0_t472374824 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->get_dataBuffer_0();
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_t472374824 * L_11 = V_0;
		RuntimeObject* L_12 = ___buffer1;
		NullCheck(L_12);
		uint32_t L_13 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		uint32_t L_14 = Math_Min_m187254930(NULL /*static, unused*/, ((int32_t)2147483647LL), L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = WindowsRuntimeBuffer_Create_m3477745630(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_dataBuffer_0(L_15);
	}

IL_004a:
	{
		U3CU3Ec__DisplayClass1_0_t472374824 * L_16 = V_0;
		intptr_t L_17 = (intptr_t)U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m1088351959_RuntimeMethod_var;
		Func_3_t4117055225 * L_18 = (Func_3_t4117055225 *)il2cpp_codegen_object_new(Func_3_t4117055225_il2cpp_TypeInfo_var);
		Func_3__ctor_m2947162041(L_18, L_16, (intptr_t)L_17, /*hidden argument*/Func_3__ctor_m2947162041_RuntimeMethod_var);
		RuntimeObject* L_19 = AsyncInfo_Run_TisIBuffer_t541192229_TisUInt32_t2560061978_m2871395425(NULL /*static, unused*/, L_18, /*hidden argument*/AsyncInfo_Run_TisIBuffer_t541192229_TisUInt32_t2560061978_m2871395425_RuntimeMethod_var);
		return L_19;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m3152162177 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, RuntimeObject* ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_WriteAsync_AbstractStream_m3152162177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t875659351 * V_0 = NULL;
	Func_3_t1840957678 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t875659351 * L_0 = (U3CU3Ec__DisplayClass2_0_t875659351 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t875659351_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m3485803383(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t875659351 * L_1 = V_0;
		RuntimeObject* L_2 = ___buffer1;
		NullCheck(L_1);
		L_1->set_buffer_0(L_2);
		U3CU3Ec__DisplayClass2_0_t875659351 * L_3 = V_0;
		Stream_t1273022909 * L_4 = ___stream0;
		NullCheck(L_3);
		L_3->set_stream_1(L_4);
		U3CU3Ec__DisplayClass2_0_t875659351 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->get_buffer_0();
		U3CU3Ec__DisplayClass2_0_t875659351 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657** L_8 = L_7->get_address_of_data_2();
		U3CU3Ec__DisplayClass2_0_t875659351 * L_9 = V_0;
		NullCheck(L_9);
		int32_t* L_10 = L_9->get_address_of_offset_3();
		bool L_11 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_6, (ByteU5BU5D_t4116647657**)L_8, (int32_t*)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t875659351 * L_12 = V_0;
		intptr_t L_13 = (intptr_t)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m915208730_RuntimeMethod_var;
		Func_3_t1840957678 * L_14 = (Func_3_t1840957678 *)il2cpp_codegen_object_new(Func_3_t1840957678_il2cpp_TypeInfo_var);
		Func_3__ctor_m21237239(L_14, L_12, (intptr_t)L_13, /*hidden argument*/Func_3__ctor_m21237239_RuntimeMethod_var);
		V_1 = L_14;
		goto IL_0049;
	}

IL_003c:
	{
		U3CU3Ec__DisplayClass2_0_t875659351 * L_15 = V_0;
		intptr_t L_16 = (intptr_t)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m1022670977_RuntimeMethod_var;
		Func_3_t1840957678 * L_17 = (Func_3_t1840957678 *)il2cpp_codegen_object_new(Func_3_t1840957678_il2cpp_TypeInfo_var);
		Func_3__ctor_m21237239(L_17, L_15, (intptr_t)L_16, /*hidden argument*/Func_3__ctor_m21237239_RuntimeMethod_var);
		V_1 = L_17;
	}

IL_0049:
	{
		Func_3_t1840957678 * L_18 = V_1;
		RuntimeObject* L_19 = AsyncInfo_Run_TisUInt32_t2560061978_TisUInt32_t2560061978_m1984313700(NULL /*static, unused*/, L_18, /*hidden argument*/AsyncInfo_Run_TisUInt32_t2560061978_TisUInt32_t2560061978_m1984313700_RuntimeMethod_var);
		return L_19;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_m989114848 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamOperationsImplementation_FlushAsync_AbstractStream_m989114848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass3_0_t3604542706 * L_0 = (U3CU3Ec__DisplayClass3_0_t3604542706 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t3604542706_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m3485800060(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_0_t3604542706 * L_1 = L_0;
		Stream_t1273022909 * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_0(L_2);
		intptr_t L_3 = (intptr_t)U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m1789062849_RuntimeMethod_var;
		Func_2_t2970310655 * L_4 = (Func_2_t2970310655 *)il2cpp_codegen_object_new(Func_2_t2970310655_il2cpp_TypeInfo_var);
		Func_2__ctor_m4206015708(L_4, L_1, (intptr_t)L_3, /*hidden argument*/Func_2__ctor_m4206015708_RuntimeMethod_var);
		RuntimeObject* L_5 = AsyncInfo_Run_TisBoolean_t97287965_m3909181280(NULL /*static, unused*/, L_4, /*hidden argument*/AsyncInfo_Run_TisBoolean_t97287965_m3909181280_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3485798010 (U3CU3Ec__DisplayClass1_0_t472374824 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::<ReadAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1946732404 * U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m1088351959 (U3CU3Ec__DisplayClass1_0_t472374824 * __this, CancellationToken_t784455623  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m1088351959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t2862166739  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		CancellationToken_t784455623  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_3(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t2862166739_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t2862166739  L_2 = AsyncTaskMethodBuilder_1_Create_m4184676639(NULL /*static, unused*/, /*hidden argument*/AsyncTaskMethodBuilder_1_Create_m4184676639_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343  L_3 = V_0;
		AsyncTaskMethodBuilder_1_t2862166739  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m2446424660((AsyncTaskMethodBuilder_1_t2862166739 *)(&V_1), (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m2446424660_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t2862166739 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t1946732404 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m2303679917((AsyncTaskMethodBuilder_1_t2862166739 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m2303679917_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_t472374824 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ConfiguredTaskAwaiter_t4273446738  V_5;
	memset(&V_5, 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t1253905800  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t472374824 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0054;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass1_0_t472374824 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->get_dataBuffer_0();
			NullCheck(L_4);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_4, 0);
			U3CU3Ec__DisplayClass1_0_t472374824 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_dataBuffer_0();
			ByteU5BU5D_t4116647657** L_7 = __this->get_address_of_U3CdataU3E5__2_5();
			int32_t* L_8 = __this->get_address_of_U3CoffsetU3E5__3_6();
			WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_6, (ByteU5BU5D_t4116647657**)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
			CancellationToken_t784455623 * L_9 = __this->get_address_of_cancelToken_3();
			bool L_10 = CancellationToken_get_IsCancellationRequested_m3655186381((CancellationToken_t784455623 *)L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			__this->set_U3CbytesCompletedU3E5__4_7(0);
			goto IL_017c;
		}

IL_004d:
		{
			__this->set_U3CbytesReadU3E5__5_8(0);
		}

IL_0054:
		{
		}

IL_0055:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_11 = V_0;
				if (!L_11)
				{
					goto IL_00c7;
				}
			}

IL_0058:
			{
				U3CU3Ec__DisplayClass1_0_t472374824 * L_12 = V_1;
				NullCheck(L_12);
				Stream_t1273022909 * L_13 = L_12->get_stream_1();
				ByteU5BU5D_t4116647657* L_14 = __this->get_U3CdataU3E5__2_5();
				int32_t L_15 = __this->get_U3CoffsetU3E5__3_6();
				int32_t L_16 = __this->get_U3CbytesCompletedU3E5__4_7();
				U3CU3Ec__DisplayClass1_0_t472374824 * L_17 = V_1;
				NullCheck(L_17);
				int32_t L_18 = L_17->get_bytesRequested_2();
				int32_t L_19 = __this->get_U3CbytesCompletedU3E5__4_7();
				CancellationToken_t784455623  L_20 = __this->get_cancelToken_3();
				NullCheck(L_13);
				Task_1_t61518632 * L_21 = VirtFuncInvoker4< Task_1_t61518632 *, ByteU5BU5D_t4116647657*, int32_t, int32_t, CancellationToken_t784455623  >::Invoke(22 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_13, L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), L_20);
				NullCheck(L_21);
				ConfiguredTaskAwaitable_1_t1253905800  L_22 = Task_1_ConfigureAwait_m2040180629(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m2040180629_RuntimeMethod_var);
				V_6 = L_22;
				ConfiguredTaskAwaiter_t4273446738  L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m2730877693((ConfiguredTaskAwaitable_1_t1253905800 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m2730877693_RuntimeMethod_var);
				V_5 = L_23;
				bool L_24 = ConfiguredTaskAwaiter_get_IsCompleted_m3004702642((ConfiguredTaskAwaiter_t4273446738 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m3004702642_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_00e4;
				}
			}

IL_00a3:
			{
				int32_t L_25 = 0;
				V_0 = L_25;
				__this->set_U3CU3E1__state_0(L_25);
				ConfiguredTaskAwaiter_t4273446738  L_26 = V_5;
				__this->set_U3CU3Eu__1_9(L_26);
				AsyncTaskMethodBuilder_1_t2862166739 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4273446738_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m1181056382((AsyncTaskMethodBuilder_1_t2862166739 *)L_27, (ConfiguredTaskAwaiter_t4273446738 *)(&V_5), (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4273446738_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343_m1181056382_RuntimeMethod_var);
				goto IL_01b8;
			}

IL_00c7:
			{
				ConfiguredTaskAwaiter_t4273446738  L_28 = __this->get_U3CU3Eu__1_9();
				V_5 = L_28;
				ConfiguredTaskAwaiter_t4273446738 * L_29 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t4273446738 ));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
			}

IL_00e4:
			{
				int32_t L_31 = ConfiguredTaskAwaiter_GetResult_m988772279((ConfiguredTaskAwaiter_t4273446738 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m988772279_RuntimeMethod_var);
				V_4 = L_31;
				int32_t L_32 = V_4;
				__this->set_U3CbytesReadU3E5__5_8(L_32);
				int32_t L_33 = __this->get_U3CbytesCompletedU3E5__4_7();
				int32_t L_34 = __this->get_U3CbytesReadU3E5__5_8();
				__this->set_U3CbytesCompletedU3E5__4_7(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)));
				goto IL_011f;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (OperationCanceledException_t926488448_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_010a;
			throw e;
		}

CATCH_010a:
		{ // begin catch(System.OperationCanceledException)
			{
				int32_t L_35 = __this->get_U3CbytesCompletedU3E5__4_7();
				if (L_35)
				{
					goto IL_011d;
				}
			}

IL_0113:
			{
				int32_t L_36 = __this->get_U3CbytesReadU3E5__5_8();
				if (L_36)
				{
					goto IL_011d;
				}
			}

IL_011b:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214_RuntimeMethod_var);
			}

IL_011d:
			{
				goto IL_011f;
			}
		} // end catch (depth: 2)

IL_011f:
		{
			U3CU3Ec__DisplayClass1_0_t472374824 * L_37 = V_1;
			NullCheck(L_37);
			RuntimeObject* L_38 = L_37->get_dataBuffer_0();
			int32_t L_39 = __this->get_U3CbytesCompletedU3E5__4_7();
			NullCheck(L_38);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_38, L_39);
			U3CU3Ec__DisplayClass1_0_t472374824 * L_40 = V_1;
			NullCheck(L_40);
			uint32_t L_41 = L_40->get_options_3();
			if ((((int32_t)L_41) == ((int32_t)1)))
			{
				goto IL_015c;
			}
		}

IL_0139:
		{
			int32_t L_42 = __this->get_U3CbytesReadU3E5__5_8();
			if (!L_42)
			{
				goto IL_015c;
			}
		}

IL_0141:
		{
			int32_t L_43 = __this->get_U3CbytesCompletedU3E5__4_7();
			U3CU3Ec__DisplayClass1_0_t472374824 * L_44 = V_1;
			NullCheck(L_44);
			int32_t L_45 = L_44->get_bytesRequested_2();
			if ((((int32_t)L_43) == ((int32_t)L_45)))
			{
				goto IL_015c;
			}
		}

IL_014f:
		{
			CancellationToken_t784455623 * L_46 = __this->get_address_of_cancelToken_3();
			bool L_47 = CancellationToken_get_IsCancellationRequested_m3655186381((CancellationToken_t784455623 *)L_46, /*hidden argument*/NULL);
			G_B19_0 = ((int32_t)(L_47));
			goto IL_015d;
		}

IL_015c:
		{
			G_B19_0 = 1;
		}

IL_015d:
		{
			V_3 = (bool)G_B19_0;
			RuntimeObject* L_48 = __this->get_progressListener_4();
			if (!L_48)
			{
				goto IL_017c;
			}
		}

IL_0166:
		{
			RuntimeObject* L_49 = __this->get_progressListener_4();
			U3CU3Ec__DisplayClass1_0_t472374824 * L_50 = V_1;
			NullCheck(L_50);
			RuntimeObject* L_51 = L_50->get_dataBuffer_0();
			NullCheck(L_51);
			uint32_t L_52 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_51);
			NullCheck(L_49);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t3233463983_il2cpp_TypeInfo_var, L_49, L_52);
		}

IL_017c:
		{
			bool L_53 = V_3;
			if (!L_53)
			{
				goto IL_004d;
			}
		}

IL_0182:
		{
			U3CU3Ec__DisplayClass1_0_t472374824 * L_54 = V_1;
			NullCheck(L_54);
			RuntimeObject* L_55 = L_54->get_dataBuffer_0();
			V_2 = L_55;
			goto IL_01a4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_018b;
		throw e;
	}

CATCH_018b:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2862166739 * L_56 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_57 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m630185106((AsyncTaskMethodBuilder_1_t2862166739 *)L_56, L_57, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m630185106_RuntimeMethod_var);
		goto IL_01b8;
	} // end catch (depth: 1)

IL_01a4:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2862166739 * L_58 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_59 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m1747581165((AsyncTaskMethodBuilder_1_t2862166739 *)L_58, L_59, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m1747581165_RuntimeMethod_var);
	}

IL_01b8:
	{
		return;
	}
}
extern "C"  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * _thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 *>(__this + 1);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m490283214(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m3811994301 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m3811994301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2862166739 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3346031551((AsyncTaskMethodBuilder_1_t2862166739 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3346031551_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m3811994301_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 * _thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t2037578343 *>(__this + 1);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m3811994301(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3485803383 (U3CU3Ec__DisplayClass2_0_t875659351 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3965602153 * U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m915208730 (U3CU3Ec__DisplayClass2_0_t875659351 * __this, CancellationToken_t784455623  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m915208730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t586069192  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_t784455623  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t586069192_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t586069192  L_2 = AsyncTaskMethodBuilder_1_Create_m2437087066(NULL /*static, unused*/, /*hidden argument*/AsyncTaskMethodBuilder_1_Create_m2437087066_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479  L_3 = V_0;
		AsyncTaskMethodBuilder_1_t586069192  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m283205869((AsyncTaskMethodBuilder_1_t586069192 *)(&V_1), (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m283205869_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t586069192 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t3965602153 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m3799090329((AsyncTaskMethodBuilder_1_t586069192 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m3799090329_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__1(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3965602153 * U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m1022670977 (U3CU3Ec__DisplayClass2_0_t875659351 * __this, CancellationToken_t784455623  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m1022670977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t586069192  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_t784455623  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t586069192_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t586069192  L_2 = AsyncTaskMethodBuilder_1_Create_m2437087066(NULL /*static, unused*/, /*hidden argument*/AsyncTaskMethodBuilder_1_Create_m2437087066_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943  L_3 = V_0;
		AsyncTaskMethodBuilder_1_t586069192  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m4149329102((AsyncTaskMethodBuilder_1_t586069192 *)(&V_1), (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m4149329102_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t586069192 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t3965602153 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m3799090329((AsyncTaskMethodBuilder_1_t586069192 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m3799090329_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m12096357 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m12096357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t875659351 * V_1 = NULL;
	uint32_t V_2 = 0;
	ConfiguredTaskAwaiter_t555647845  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t166429847  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t875659351 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0095;
			}
		}

IL_0014:
		{
			CancellationToken_t784455623 * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4 = CancellationToken_get_IsCancellationRequested_m3655186381((CancellationToken_t784455623 *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			V_2 = 0;
			goto IL_00f3;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass2_0_t875659351 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_buffer_0();
			NullCheck(L_6);
			uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CbytesToWriteU3E5__2_5(L_7);
			U3CU3Ec__DisplayClass2_0_t875659351 * L_8 = V_1;
			NullCheck(L_8);
			Stream_t1273022909 * L_9 = L_8->get_stream_1();
			U3CU3Ec__DisplayClass2_0_t875659351 * L_10 = V_1;
			NullCheck(L_10);
			ByteU5BU5D_t4116647657* L_11 = L_10->get_data_2();
			U3CU3Ec__DisplayClass2_0_t875659351 * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->get_offset_3();
			int32_t L_14 = __this->get_U3CbytesToWriteU3E5__2_5();
			CancellationToken_t784455623  L_15 = __this->get_cancelToken_2();
			NullCheck(L_9);
			Task_t3187275312 * L_16 = VirtFuncInvoker4< Task_t3187275312 *, ByteU5BU5D_t4116647657*, int32_t, int32_t, CancellationToken_t784455623  >::Invoke(25 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_9, L_11, L_13, L_14, L_15);
			NullCheck(L_16);
			ConfiguredTaskAwaitable_t166429847  L_17 = Task_ConfigureAwait_m898394246(L_16, (bool)0, /*hidden argument*/NULL);
			V_4 = L_17;
			ConfiguredTaskAwaiter_t555647845  L_18 = ConfiguredTaskAwaitable_GetAwaiter_m2777384263((ConfiguredTaskAwaitable_t166429847 *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_18;
			bool L_19 = ConfiguredTaskAwaiter_get_IsCompleted_m2492964255((ConfiguredTaskAwaiter_t555647845 *)(&V_3), /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00b1;
			}
		}

IL_0075:
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
			ConfiguredTaskAwaiter_t555647845  L_21 = V_3;
			__this->set_U3CU3Eu__1_6(L_21);
			AsyncTaskMethodBuilder_1_t586069192 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m1548426225((AsyncTaskMethodBuilder_1_t586069192 *)L_22, (ConfiguredTaskAwaiter_t555647845 *)(&V_3), (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479_m1548426225_RuntimeMethod_var);
			goto IL_0107;
		}

IL_0095:
		{
			ConfiguredTaskAwaiter_t555647845  L_23 = __this->get_U3CU3Eu__1_6();
			V_3 = L_23;
			ConfiguredTaskAwaiter_t555647845 * L_24 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_24, sizeof(ConfiguredTaskAwaiter_t555647845 ));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
		}

IL_00b1:
		{
			ConfiguredTaskAwaiter_GetResult_m382867624((ConfiguredTaskAwaiter_t555647845 *)(&V_3), /*hidden argument*/NULL);
			RuntimeObject* L_26 = __this->get_progressListener_4();
			if (!L_26)
			{
				goto IL_00d1;
			}
		}

IL_00c0:
		{
			RuntimeObject* L_27 = __this->get_progressListener_4();
			int32_t L_28 = __this->get_U3CbytesToWriteU3E5__2_5();
			NullCheck(L_27);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t3233463983_il2cpp_TypeInfo_var, L_27, L_28);
		}

IL_00d1:
		{
			int32_t L_29 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_2 = L_29;
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00da;
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t586069192 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m3939687854((AsyncTaskMethodBuilder_1_t586069192 *)L_30, L_31, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3939687854_RuntimeMethod_var);
		goto IL_0107;
	} // end catch (depth: 1)

IL_00f3:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t586069192 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		uint32_t L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m2874574167((AsyncTaskMethodBuilder_1_t586069192 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m2874574167_RuntimeMethod_var);
	}

IL_0107:
	{
		return;
	}
}
extern "C"  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m12096357_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m12096357(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m994589036 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m994589036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t586069192 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070((AsyncTaskMethodBuilder_1_t586069192 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m994589036_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t2737451479 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m994589036(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m3201072283 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m3201072283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t875659351 * V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_t555647845  V_4;
	memset(&V_4, 0, sizeof(V_4));
	ConfiguredTaskAwaitable_t166429847  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Stream_t1273022909 * G_B6_0 = NULL;
	Stream_t1273022909 * G_B5_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t875659351 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00a9;
			}
		}

IL_0014:
		{
			CancellationToken_t784455623 * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4 = CancellationToken_get_IsCancellationRequested_m3655186381((CancellationToken_t784455623 *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			V_2 = 0;
			goto IL_0108;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass2_0_t875659351 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_buffer_0();
			NullCheck(L_6);
			uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CbytesToWriteU3E5__2_5(L_7);
			U3CU3Ec__DisplayClass2_0_t875659351 * L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9 = L_8->get_buffer_0();
			Stream_t1273022909 * L_10 = WindowsRuntimeBufferExtensions_AsStream_m2594335144(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			V_3 = ((int32_t)16384);
			uint32_t L_11 = __this->get_U3CbytesToWriteU3E5__2_5();
			int32_t L_12 = V_3;
			G_B5_0 = L_10;
			if ((((int64_t)(((int64_t)((uint64_t)L_11)))) >= ((int64_t)(((int64_t)((int64_t)L_12))))))
			{
				G_B6_0 = L_10;
				goto IL_005c;
			}
		}

IL_0055:
		{
			uint32_t L_13 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_3 = L_13;
			G_B6_0 = G_B5_0;
		}

IL_005c:
		{
			U3CU3Ec__DisplayClass2_0_t875659351 * L_14 = V_1;
			NullCheck(L_14);
			Stream_t1273022909 * L_15 = L_14->get_stream_1();
			int32_t L_16 = V_3;
			CancellationToken_t784455623  L_17 = __this->get_cancelToken_2();
			NullCheck(G_B6_0);
			Task_t3187275312 * L_18 = VirtFuncInvoker3< Task_t3187275312 *, Stream_t1273022909 *, int32_t, CancellationToken_t784455623  >::Invoke(15 /* System.Threading.Tasks.Task System.IO.Stream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken) */, G_B6_0, L_15, L_16, L_17);
			NullCheck(L_18);
			ConfiguredTaskAwaitable_t166429847  L_19 = Task_ConfigureAwait_m898394246(L_18, (bool)0, /*hidden argument*/NULL);
			V_5 = L_19;
			ConfiguredTaskAwaiter_t555647845  L_20 = ConfiguredTaskAwaitable_GetAwaiter_m2777384263((ConfiguredTaskAwaitable_t166429847 *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_20;
			bool L_21 = ConfiguredTaskAwaiter_get_IsCompleted_m2492964255((ConfiguredTaskAwaiter_t555647845 *)(&V_4), /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00c6;
			}
		}

IL_0088:
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			ConfiguredTaskAwaiter_t555647845  L_23 = V_4;
			__this->set_U3CU3Eu__1_6(L_23);
			AsyncTaskMethodBuilder_1_t586069192 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m3756530673((AsyncTaskMethodBuilder_1_t586069192 *)L_24, (ConfiguredTaskAwaiter_t555647845 *)(&V_4), (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943_m3756530673_RuntimeMethod_var);
			goto IL_011c;
		}

IL_00a9:
		{
			ConfiguredTaskAwaiter_t555647845  L_25 = __this->get_U3CU3Eu__1_6();
			V_4 = L_25;
			ConfiguredTaskAwaiter_t555647845 * L_26 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_26, sizeof(ConfiguredTaskAwaiter_t555647845 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_00c6:
		{
			ConfiguredTaskAwaiter_GetResult_m382867624((ConfiguredTaskAwaiter_t555647845 *)(&V_4), /*hidden argument*/NULL);
			RuntimeObject* L_28 = __this->get_progressListener_4();
			if (!L_28)
			{
				goto IL_00e6;
			}
		}

IL_00d5:
		{
			RuntimeObject* L_29 = __this->get_progressListener_4();
			uint32_t L_30 = __this->get_U3CbytesToWriteU3E5__2_5();
			NullCheck(L_29);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t3233463983_il2cpp_TypeInfo_var, L_29, L_30);
		}

IL_00e6:
		{
			uint32_t L_31 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_2 = L_31;
			goto IL_0108;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ef;
		throw e;
	}

CATCH_00ef:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t586069192 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m3939687854((AsyncTaskMethodBuilder_1_t586069192 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3939687854_RuntimeMethod_var);
		goto IL_011c;
	} // end catch (depth: 1)

IL_0108:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t586069192 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		uint32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m2874574167((AsyncTaskMethodBuilder_1_t586069192 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m2874574167_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
extern "C"  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m3201072283_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m3201072283(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m528171077 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m528171077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t586069192 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070((AsyncTaskMethodBuilder_1_t586069192 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3094243070_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m528171077_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t2737385943 *>(__this + 1);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m528171077(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3485800060 (U3CU3Ec__DisplayClass3_0_t3604542706 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::<FlushAsync_AbstractStream>b__0(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m1789062849 (U3CU3Ec__DisplayClass3_0_t3604542706 * __this, CancellationToken_t784455623  ___cancelToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_m1789062849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t2418262475  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_t784455623  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t2418262475_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t2418262475  L_1 = AsyncTaskMethodBuilder_1_Create_m3423860640(NULL /*static, unused*/, /*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3423860640_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130  L_2 = V_0;
		AsyncTaskMethodBuilder_1_t2418262475  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m1811493866((AsyncTaskMethodBuilder_1_t2418262475 *)(&V_1), (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m1811493866_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t2418262475 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t1502828140 * L_5 = AsyncTaskMethodBuilder_1_get_Task_m1946293888((AsyncTaskMethodBuilder_1_t2418262475 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m1946293888_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m1530074096 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m1530074096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass3_0_t3604542706 * V_1 = NULL;
	bool V_2 = false;
	ConfiguredTaskAwaiter_t555647845  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t166429847  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t3604542706 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006f;
			}
		}

IL_0011:
		{
			CancellationToken_t784455623 * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4 = CancellationToken_get_IsCancellationRequested_m3655186381((CancellationToken_t784455623 *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			V_2 = (bool)0;
			goto IL_00af;
		}

IL_0025:
		{
			U3CU3Ec__DisplayClass3_0_t3604542706 * L_5 = V_1;
			NullCheck(L_5);
			Stream_t1273022909 * L_6 = L_5->get_stream_0();
			CancellationToken_t784455623  L_7 = __this->get_cancelToken_2();
			NullCheck(L_6);
			Task_t3187275312 * L_8 = VirtFuncInvoker1< Task_t3187275312 *, CancellationToken_t784455623  >::Invoke(19 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_6, L_7);
			NullCheck(L_8);
			ConfiguredTaskAwaitable_t166429847  L_9 = Task_ConfigureAwait_m898394246(L_8, (bool)0, /*hidden argument*/NULL);
			V_4 = L_9;
			ConfiguredTaskAwaiter_t555647845  L_10 = ConfiguredTaskAwaitable_GetAwaiter_m2777384263((ConfiguredTaskAwaitable_t166429847 *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_10;
			bool L_11 = ConfiguredTaskAwaiter_get_IsCompleted_m2492964255((ConfiguredTaskAwaiter_t555647845 *)(&V_3), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_008b;
			}
		}

IL_004f:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			ConfiguredTaskAwaiter_t555647845  L_13 = V_3;
			__this->set_U3CU3Eu__1_4(L_13);
			AsyncTaskMethodBuilder_1_t2418262475 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m3289421814((AsyncTaskMethodBuilder_1_t2418262475 *)L_14, (ConfiguredTaskAwaiter_t555647845 *)(&V_3), (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t555647845_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130_m3289421814_RuntimeMethod_var);
			goto IL_00c3;
		}

IL_006f:
		{
			ConfiguredTaskAwaiter_t555647845  L_15 = __this->get_U3CU3Eu__1_4();
			V_3 = L_15;
			ConfiguredTaskAwaiter_t555647845 * L_16 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_16, sizeof(ConfiguredTaskAwaiter_t555647845 ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008b:
		{
			ConfiguredTaskAwaiter_GetResult_m382867624((ConfiguredTaskAwaiter_t555647845 *)(&V_3), /*hidden argument*/NULL);
			V_2 = (bool)1;
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0096;
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_00c3;
	} // end catch (depth: 1)

IL_00af:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_00c3:
	{
		return;
	}
}
extern "C"  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m1530074096_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * _thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 *>(__this + 1);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m1530074096(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2063525728 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2063525728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2063525728_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 * _thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t1213545130 *>(__this + 1);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m2063525728(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_m1840514536 (StreamReadAsyncResult_t2363479406 * __this, RuntimeObject* ___asyncStreamReadOperation0, RuntimeObject* ___buffer1, AsyncCallback_t3962456242 * ___userCompletionCallback2, RuntimeObject * ___userAsyncStateInfo3, bool ___processCompletedOperationInCallback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamReadAsyncResult__ctor_m1840514536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamReadOperation0;
		AsyncCallback_t3962456242 * L_1 = ___userCompletionCallback2;
		RuntimeObject * L_2 = ___userAsyncStateInfo3;
		bool L_3 = ___processCompletedOperationInCallback4;
		StreamOperationAsyncResult__ctor_m4009589989(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___buffer1;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, StreamReadAsyncResult__ctor_m1840514536_RuntimeMethod_var);
	}

IL_001a:
	{
		RuntimeObject* L_6 = ___buffer1;
		__this->set__userBuffer_10(L_6);
		RuntimeObject* L_7 = ___asyncStreamReadOperation0;
		intptr_t L_8 = (intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_RuntimeMethod_var;
		AsyncOperationWithProgressCompletedHandler_2_t3609957527 * L_9 = (AsyncOperationWithProgressCompletedHandler_2_t3609957527 *)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3609957527_il2cpp_TypeInfo_var);
		AsyncOperationWithProgressCompletedHandler_2__ctor_m1039799182(L_9, __this, (intptr_t)L_8, /*hidden argument*/AsyncOperationWithProgressCompletedHandler_2__ctor_m1039799182_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_t3609957527 * >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<!0,!1>) */, IAsyncOperationWithProgress_2_t1622574100_il2cpp_TypeInfo_var, L_7, L_9);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m95416103 (StreamReadAsyncResult_t2363479406 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamReadAsyncResult_ProcessConcreteCompletedOperation_m95416103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamReadAsyncResult_ProcessConcreteCompletedOperation_m2015389887(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_t1622574100_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m2015389887 (StreamReadAsyncResult_t2363479406 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamReadAsyncResult_ProcessConcreteCompletedOperation_m2015389887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* !0 Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_t1622574100_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->get__userBuffer_10();
		RuntimeObject* L_3 = V_0;
		WinRtIOHelper_EnsureResultsInUserBuffer_m279643431(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		int64_t* L_4 = ___bytesCompleted1;
		RuntimeObject* L_5 = __this->get__userBuffer_10();
		NullCheck(L_5);
		uint32_t L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_5);
		*((int64_t*)L_4) = (int64_t)(((int64_t)((uint64_t)L_6)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m2336623450 (StreamWriteAsyncResult_t1545417764 * __this, RuntimeObject* ___asyncStreamWriteOperation0, AsyncCallback_t3962456242 * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamWriteAsyncResult__ctor_m2336623450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamWriteOperation0;
		AsyncCallback_t3962456242 * L_1 = ___userCompletionCallback1;
		RuntimeObject * L_2 = ___userAsyncStateInfo2;
		bool L_3 = ___processCompletedOperationInCallback3;
		StreamOperationAsyncResult__ctor_m4009589989(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___asyncStreamWriteOperation0;
		intptr_t L_5 = (intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m1610802150_RuntimeMethod_var;
		AsyncOperationWithProgressCompletedHandler_2_t2580597550 * L_6 = (AsyncOperationWithProgressCompletedHandler_2_t2580597550 *)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2580597550_il2cpp_TypeInfo_var);
		AsyncOperationWithProgressCompletedHandler_2__ctor_m1020003653(L_6, __this, (intptr_t)L_5, /*hidden argument*/AsyncOperationWithProgressCompletedHandler_2__ctor_m1020003653_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_t2580597550 * >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<!0,!1>) */, IAsyncOperationWithProgress_2_t593214123_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m3225472033 (StreamWriteAsyncResult_t1545417764 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m3225472033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m1740713229(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_t593214123_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m1740713229 (StreamWriteAsyncResult_t1545417764 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m1740713229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* !0 Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_t593214123_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___bytesCompleted1;
		uint32_t L_3 = V_0;
		*((int64_t*)L_2) = (int64_t)(((int64_t)((uint64_t)L_3)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t3750997369 * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2836908337 (RuntimeObject * __this /* static, unused */, Exception_t * ___nativeException0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2836908337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Exception_t * L_0 = ___nativeException0;
		NullCheck(L_0);
		Type_t * L_1 = Exception_GetType_m2227967756(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(123 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = ___nativeException0;
		ExceptionDispatchInfo_t3750997369 * L_6 = ExceptionDispatchInfo_Capture_m2882203257(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		Exception_t * L_7 = ___nativeException0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10 = String_IsNullOrWhiteSpace_m3034475861(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = _stringLiteral4078512371;
	}

IL_0033:
	{
		String_t* L_11 = V_0;
		Exception_t * L_12 = ___nativeException0;
		IOException_t4088381929 * L_13 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3246761956(L_13, L_11, L_12, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t3750997369 * L_14 = ExceptionDispatchInfo_Capture_m2882203257(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_m279643431 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___userBuffer0, RuntimeObject* ___resultBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtIOHelper_EnsureResultsInUserBuffer_m279643431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___resultBuffer1;
		RuntimeObject* L_1 = ___userBuffer0;
		bool L_2 = WindowsRuntimeBufferExtensions_IsSameData_m2250988661(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RuntimeObject* L_3 = ___resultBuffer1;
		RuntimeObject* L_4 = ___userBuffer0;
		WindowsRuntimeBufferExtensions_CopyTo_m1180775848(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___userBuffer0;
		RuntimeObject* L_6 = ___resultBuffer1;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_5, L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter::Create(System.Object)
extern "C" IL2CPP_METHOD_ATTR WinRtToNetFxStreamAdapter_t1366777568 * WinRtToNetFxStreamAdapter_Create_m1998248300 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___windowsRuntimeStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Create_m1998248300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject * L_0 = ___windowsRuntimeStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1723475720, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_Create_m1998248300_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___windowsRuntimeStream0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInputStream_t2821136229_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		RuntimeObject * L_3 = ___windowsRuntimeStream0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IOutputStream_t2042351338_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		RuntimeObject * L_4 = ___windowsRuntimeStream0;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, _stringLiteral1294096883, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, WinRtToNetFxStreamAdapter_Create_m1998248300_RuntimeMethod_var);
	}

IL_0040:
	{
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		RuntimeObject * L_10 = ___windowsRuntimeStream0;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var));
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject* L_12 = V_3;
		NullCheck(L_12);
		bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, _stringLiteral2509261095, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, WinRtToNetFxStreamAdapter_Create_m1998248300_RuntimeMethod_var);
	}

IL_0060:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_16 = V_3;
		NullCheck(L_16);
		bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, _stringLiteral3358341242, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WinRtToNetFxStreamAdapter_Create_m1998248300_RuntimeMethod_var);
	}

IL_0076:
	{
		RuntimeObject* L_19 = V_3;
		NullCheck(L_19);
		bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, L_19);
		if (L_20)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0080:
	{
		RuntimeObject* L_21 = V_3;
		NullCheck(L_21);
		bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, L_21);
		if (L_22)
		{
			goto IL_008a;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_008a:
	{
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_009b;
		}
	}
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_009b;
		}
	}
	{
		ArgumentException_t132251570 * L_25 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_25, _stringLiteral569150152, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, WinRtToNetFxStreamAdapter_Create_m1998248300_RuntimeMethod_var);
	}

IL_009b:
	{
		RuntimeObject * L_26 = ___windowsRuntimeStream0;
		bool L_27 = V_0;
		bool L_28 = V_1;
		bool L_29 = V_2;
		WinRtToNetFxStreamAdapter_t1366777568 * L_30 = (WinRtToNetFxStreamAdapter_t1366777568 *)il2cpp_codegen_object_new(WinRtToNetFxStreamAdapter_t1366777568_il2cpp_TypeInfo_var);
		WinRtToNetFxStreamAdapter__ctor_m1902152105(L_30, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::.ctor(System.Object,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter__ctor_m1902152105 (WinRtToNetFxStreamAdapter_t1366777568 * __this, RuntimeObject * ___winRtStream0, bool ___canRead1, bool ___canWrite2, bool ___canSeek3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter__ctor_m1902152105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__leaveUnderlyingStreamOpen_6((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___winRtStream0;
		__this->set__winRtStream_7(L_0);
		bool L_1 = ___canRead1;
		__this->set__canRead_8(L_1);
		bool L_2 = ___canWrite2;
		__this->set__canWrite_9(L_2);
		bool L_3 = ___canSeek3;
		__this->set__canSeek_10(L_3);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetWonInitializationRace()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetWonInitializationRace_m2570515959 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	{
		__this->set__leaveUnderlyingStreamOpen_6((bool)0);
		return;
	}
}
// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::get_OneByteBuffer()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WinRtToNetFxStreamAdapter_get_OneByteBuffer_m2617962370 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_get_OneByteBuffer_m2617962370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get__oneByteBuffer_5();
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_3 = L_2;
		V_0 = L_3;
		__this->set__oneByteBuffer_5(L_3);
	}

IL_0018:
	{
		ByteU5BU5D_t4116647657* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = __this->get__winRtStream_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral124057261, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__canRead_8();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, _stringLiteral1252300773, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__canWrite_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, _stringLiteral1824524996, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Dispose_m1343197273 (WinRtToNetFxStreamAdapter_t1366777568 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Dispose_m1343197273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->get__leaveUnderlyingStreamOpen_6();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__winRtStream_7();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t3640265483_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
	}

IL_0028:
	{
		__this->set__winRtStream_7(NULL);
		bool L_6 = ___disposing0;
		Stream_Dispose_m874059170(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanRead_m4230288644 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canRead_8();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanWrite_m1293887524 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canWrite_9();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanSeek()
extern "C" IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanSeek_m464524545 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canSeek_10();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_7();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Length()
extern "C" IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Length_m2903391082 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_get_Length_m2903391082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189_RuntimeMethod_var);
		bool L_1 = __this->get__canSeek_10();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_2, _stringLiteral1061158513, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WinRtToNetFxStreamAdapter_get_Length_m2903391082_RuntimeMethod_var);
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t4088381929 * L_5 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_5, _stringLiteral3201477590, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_get_Length_m2903391082_RuntimeMethod_var);
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Position()
extern "C" IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Position_m1486608556 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_get_Position_m1486608556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189_RuntimeMethod_var);
		bool L_1 = __this->get__canSeek_10();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_2, _stringLiteral3078846028, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WinRtToNetFxStreamAdapter_get_Position_m1486608556_RuntimeMethod_var);
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(2 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t4088381929 * L_5 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_5, _stringLiteral3201477590, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_get_Position_m1486608556_RuntimeMethod_var);
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::set_Position(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_set_Position_m3123383368 (WinRtToNetFxStreamAdapter_t1366777568 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_set_Position_m3123383368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_1, _stringLiteral4254452306, _stringLiteral1672260951, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_set_Position_m3123383368_RuntimeMethod_var);
	}

IL_0015:
	{
		RuntimeObject* L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189_RuntimeMethod_var);
		bool L_3 = __this->get__canSeek_10();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_002e;
		}
	}
	{
		NotSupportedException_t1314879016 * L_4 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_4, _stringLiteral3078846028, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_set_Position_m3123383368_RuntimeMethod_var);
	}

IL_002e:
	{
		int64_t L_5 = ___value0;
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(3 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, G_B4_0, L_5);
		return;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_Seek_m1060968979 (WinRtToNetFxStreamAdapter_t1366777568 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Seek_m1060968979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint64_t V_3 = 0;
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t G_B16_0 = 0;
	int64_t G_B18_0 = 0;
	int64_t G_B17_0 = 0;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t2099996051_m468539189_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canSeek_10();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		NotSupportedException_t1314879016 * L_2 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_2, _stringLiteral3078101749, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_001a:
	{
		int32_t L_3 = ___origin1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0031:
	{
		int64_t L_4 = ___offset0;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_4);
		int64_t L_5 = ___offset0;
		return L_5;
	}

IL_003a:
	{
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_1 = L_6;
		int64_t L_7 = V_1;
		int64_t L_8 = ___offset0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)std::numeric_limits<int64_t>::max()), (int64_t)L_7))) >= ((int64_t)L_8)))
		{
			goto IL_005a;
		}
	}
	{
		IOException_t4088381929 * L_9 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_9, _stringLiteral2236202192, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_005a:
	{
		int64_t L_10 = V_1;
		int64_t L_11 = ___offset0;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)L_11));
		int64_t L_12 = V_2;
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_006e;
		}
	}
	{
		IOException_t4088381929 * L_13 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_13, _stringLiteral1672260951, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_006e:
	{
		int64_t L_14 = V_2;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_14);
		int64_t L_15 = V_2;
		return L_15;
	}

IL_0077:
	{
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		uint64_t L_17 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_t2099996051_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
		uint64_t L_18 = V_3;
		if ((!(((uint64_t)L_18) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_00d4;
		}
	}
	{
		int64_t L_19 = ___offset0;
		if ((((int64_t)L_19) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_009a;
		}
	}
	{
		IOException_t4088381929 * L_20 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_20, _stringLiteral2236202192, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_009a:
	{
		int64_t L_21 = ___offset0;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::min()))))
		{
			goto IL_00aa;
		}
	}
	{
		int64_t L_22 = ___offset0;
		G_B16_0 = ((-L_22));
		goto IL_00b3;
	}

IL_00aa:
	{
		G_B16_0 = ((int64_t)std::numeric_limits<int64_t>::min());
	}

IL_00b3:
	{
		V_5 = G_B16_0;
		uint64_t L_23 = V_3;
		uint64_t L_24 = V_5;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_23, (int64_t)L_24));
		G_B17_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			G_B18_0 = L_25;
			goto IL_00d0;
		}
	}
	{
		IOException_t4088381929 * L_26 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_26, _stringLiteral2236202192, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_00d0:
	{
		V_4 = G_B18_0;
		goto IL_0108;
	}

IL_00d4:
	{
		uint64_t L_27 = V_3;
		V_6 = L_27;
		int64_t L_28 = V_6;
		int64_t L_29 = ___offset0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)std::numeric_limits<int64_t>::max()), (int64_t)L_28))) >= ((int64_t)L_29)))
		{
			goto IL_00f1;
		}
	}
	{
		IOException_t4088381929 * L_30 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_30, _stringLiteral2236202192, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_00f1:
	{
		int64_t L_31 = V_6;
		int64_t L_32 = ___offset0;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)L_32));
		int64_t L_33 = V_4;
		if ((((int64_t)L_33) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0108;
		}
	}
	{
		IOException_t4088381929 * L_34 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3662782713(L_34, _stringLiteral1672260951, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}

IL_0108:
	{
		int64_t L_35 = V_4;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_35);
		int64_t L_36 = V_4;
		return L_36;
	}

IL_0113:
	{
		ArgumentException_t132251570 * L_37 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_37, _stringLiteral1119394748, _stringLiteral493945629, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, NULL, WinRtToNetFxStreamAdapter_Seek_m1060968979_RuntimeMethod_var);
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_m3751440709 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_BeginRead_m3751440709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_BeginRead_m3751440709_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_BeginRead_m3751440709_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_BeginRead_m3751440709_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral2551228437, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_BeginRead_m3751440709_RuntimeMethod_var);
	}

IL_003f:
	{
		RuntimeObject* L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t2821136229_m1559834163(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t2821136229_m1559834163_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m2423130836(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		int32_t L_16 = ___count2;
		NullCheck(L_10);
		RuntimeObject* L_17 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_t2821136229_il2cpp_TypeInfo_var, L_10, L_15, L_16, 1);
		RuntimeObject* L_18 = V_0;
		AsyncCallback_t3962456242 * L_19 = ___callback3;
		RuntimeObject * L_20 = ___state4;
		bool L_21 = ___usedByBlockingWrapper5;
		StreamReadAsyncResult_t2363479406 * L_22 = (StreamReadAsyncResult_t2363479406 *)il2cpp_codegen_object_new(StreamReadAsyncResult_t2363479406_il2cpp_TypeInfo_var);
		StreamReadAsyncResult__ctor_m1840514536(L_22, L_17, L_18, L_19, L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::EndRead(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_EndRead_m3153406902 (WinRtToNetFxStreamAdapter_t1366777568 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EndRead_m3153406902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamOperationAsyncResult_t2370793485 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EndRead_m3153406902_RuntimeMethod_var);
	}

IL_000e:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630(__this, /*hidden argument*/NULL);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncResult0;
		V_0 = ((StreamOperationAsyncResult_t2370793485 *)IsInstClass((RuntimeObject*)L_2, StreamOperationAsyncResult_t2370793485_il2cpp_TypeInfo_var));
		StreamOperationAsyncResult_t2370793485 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_4, _stringLiteral188384904, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_EndRead_m3153406902_RuntimeMethod_var);
	}

IL_0034:
	{
		StreamOperationAsyncResult_t2370793485 * L_5 = V_0;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m2523645759(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			StreamOperationAsyncResult_t2370793485 * L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m1459368052(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			StreamOperationAsyncResult_t2370793485 * L_8 = V_0;
			NullCheck(L_8);
			StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			StreamOperationAsyncResult_t2370793485 * L_9 = V_0;
			NullCheck(L_9);
			bool L_10 = StreamOperationAsyncResult_get_HasError_m2973382536(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005c;
			}
		}

IL_0050:
		{
			StreamOperationAsyncResult_t2370793485 * L_11 = V_0;
			NullCheck(L_11);
			StreamOperationAsyncResult_CloseStreamOperation_m3408371609(L_11, /*hidden argument*/NULL);
			StreamOperationAsyncResult_t2370793485 * L_12 = V_0;
			NullCheck(L_12);
			StreamOperationAsyncResult_ThrowCachedError_m4249139974(L_12, /*hidden argument*/NULL);
		}

IL_005c:
		{
			StreamOperationAsyncResult_t2370793485 * L_13 = V_0;
			NullCheck(L_13);
			int64_t L_14 = StreamOperationAsyncResult_get_BytesCompleted_m1957448874(L_13, /*hidden argument*/NULL);
			V_1 = (((int32_t)((int32_t)L_14)));
			IL2CPP_LEAVE(0x6D, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		StreamOperationAsyncResult_t2370793485 * L_15 = V_0;
		NullCheck(L_15);
		StreamOperationAsyncResult_CloseStreamOperation_m3408371609(L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t61518632 * WinRtToNetFxStreamAdapter_ReadAsync_m2605858248 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t784455623  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral2551228437, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_ReadAsync_m2605858248_RuntimeMethod_var);
	}

IL_003f:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630(__this, /*hidden argument*/NULL);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m3449001221(__this, /*hidden argument*/NULL);
		CancellationToken_ThrowIfCancellationRequested_m2126013613((CancellationToken_t784455623 *)(&___cancellationToken3), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		CancellationToken_t784455623  L_13 = ___cancellationToken3;
		Task_1_t61518632 * L_14 = WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59154805(__this, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::Read(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_Read_m3874236486 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		RuntimeObject* L_3 = WinRtToNetFxStreamAdapter_BeginRead_m3751440709(__this, L_0, L_1, L_2, (AsyncCallback_t3962456242 *)NULL, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(21 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, __this, L_4);
		return L_5;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::ReadByte()
extern "C" IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_ReadByte_m2252251799 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = WinRtToNetFxStreamAdapter_get_OneByteBuffer_m2617962370(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		int32_t L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_1, 0, 1);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m1573848142 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___state4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		AsyncCallback_t3962456242 * L_3 = ___callback3;
		RuntimeObject * L_4 = ___state4;
		RuntimeObject* L_5 = WinRtToNetFxStreamAdapter_BeginWrite_m2375980393(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m2375980393 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral1060385402, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_BeginWrite_m2375980393_RuntimeMethod_var);
	}

IL_003f:
	{
		RuntimeObject* L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m2423130836(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t2042351338_il2cpp_TypeInfo_var, L_10, L_15);
		AsyncCallback_t3962456242 * L_17 = ___callback3;
		RuntimeObject * L_18 = ___state4;
		bool L_19 = ___usedByBlockingWrapper5;
		StreamWriteAsyncResult_t1545417764 * L_20 = (StreamWriteAsyncResult_t1545417764 *)il2cpp_codegen_object_new(StreamWriteAsyncResult_t1545417764_il2cpp_TypeInfo_var);
		StreamWriteAsyncResult__ctor_m2336623450(L_20, L_16, L_17, L_18, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EndWrite(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EndWrite_m481341649 (WinRtToNetFxStreamAdapter_t1366777568 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_EndWrite_m481341649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamOperationAsyncResult_t2370793485 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_EndWrite_m481341649_RuntimeMethod_var);
	}

IL_000e:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_m3776840630(__this, /*hidden argument*/NULL);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncResult0;
		V_0 = ((StreamOperationAsyncResult_t2370793485 *)IsInstClass((RuntimeObject*)L_2, StreamOperationAsyncResult_t2370793485_il2cpp_TypeInfo_var));
		StreamOperationAsyncResult_t2370793485 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_4, _stringLiteral188384904, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, WinRtToNetFxStreamAdapter_EndWrite_m481341649_RuntimeMethod_var);
	}

IL_0034:
	{
		StreamOperationAsyncResult_t2370793485 * L_5 = V_0;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m2523645759(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			StreamOperationAsyncResult_t2370793485 * L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m1459368052(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			StreamOperationAsyncResult_t2370793485 * L_8 = V_0;
			NullCheck(L_8);
			StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			StreamOperationAsyncResult_t2370793485 * L_9 = V_0;
			NullCheck(L_9);
			bool L_10 = StreamOperationAsyncResult_get_HasError_m2973382536(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005c;
			}
		}

IL_0050:
		{
			StreamOperationAsyncResult_t2370793485 * L_11 = V_0;
			NullCheck(L_11);
			StreamOperationAsyncResult_CloseStreamOperation_m3408371609(L_11, /*hidden argument*/NULL);
			StreamOperationAsyncResult_t2370793485 * L_12 = V_0;
			NullCheck(L_12);
			StreamOperationAsyncResult_ThrowCachedError_m4249139974(L_12, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x65, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		StreamOperationAsyncResult_t2370793485 * L_13 = V_0;
		NullCheck(L_13);
		StreamOperationAsyncResult_CloseStreamOperation_m3408371609(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.WinRtToNetFxStreamAdapter::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * WinRtToNetFxStreamAdapter_WriteAsync_m3991224366 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t784455623  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_RuntimeMethod_var);
	}

IL_002c:
	{
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral1060385402, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WinRtToNetFxStreamAdapter_WriteAsync_m3991224366_RuntimeMethod_var);
	}

IL_003f:
	{
		RuntimeObject* L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m3158470323(__this, /*hidden argument*/NULL);
		CancellationToken_ThrowIfCancellationRequested_m2126013613((CancellationToken_t784455623 *)(&___cancellationToken3), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m2423130836(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t2042351338_il2cpp_TypeInfo_var, L_10, L_15);
		CancellationToken_t784455623  L_17 = ___cancellationToken3;
		Task_1_t3965602153 * L_18 = WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t2560061978_TisUInt32_t2560061978_m3905281516(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t2560061978_TisUInt32_t2560061978_m3905281516_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Write(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Write_m4146432210 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		RuntimeObject* L_3 = WinRtToNetFxStreamAdapter_BeginWrite_m2375980393(__this, L_0, L_1, L_2, (AsyncCallback_t3962456242 *)NULL, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, __this, L_4);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::WriteByte(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_WriteByte_m1349210844 (WinRtToNetFxStreamAdapter_t1366777568 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = WinRtToNetFxStreamAdapter_get_OneByteBuffer_m2617962370(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		uint8_t L_2 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_t4116647657* L_3 = V_0;
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_3, 0, 1);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Flush()
extern "C" IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Flush_m316138950 (WinRtToNetFxStreamAdapter_t1366777568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_Flush_m316138950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StreamFlushAsyncResult_t3395384147 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canWrite_9();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t2042351338_il2cpp_TypeInfo_var, L_2);
		StreamFlushAsyncResult_t3395384147 * L_4 = (StreamFlushAsyncResult_t3395384147 *)il2cpp_codegen_object_new(StreamFlushAsyncResult_t3395384147_il2cpp_TypeInfo_var);
		StreamFlushAsyncResult__ctor_m786895103(L_4, L_3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_4;
		StreamFlushAsyncResult_t3395384147 * L_5 = V_1;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m2523645759(L_5, /*hidden argument*/NULL);
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			StreamFlushAsyncResult_t3395384147 * L_6 = V_1;
			NullCheck(L_6);
			StreamOperationAsyncResult_ProcessCompletedOperation_m3563775768(L_6, /*hidden argument*/NULL);
			StreamFlushAsyncResult_t3395384147 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = StreamOperationAsyncResult_get_HasError_m2973382536(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0031:
		{
			StreamFlushAsyncResult_t3395384147 * L_9 = V_1;
			NullCheck(L_9);
			StreamOperationAsyncResult_CloseStreamOperation_m3408371609(L_9, /*hidden argument*/NULL);
			StreamFlushAsyncResult_t3395384147 * L_10 = V_1;
			NullCheck(L_10);
			StreamOperationAsyncResult_ThrowCachedError_m4249139974(L_10, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x46, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		StreamFlushAsyncResult_t3395384147 * L_11 = V_1;
		NullCheck(L_11);
		StreamOperationAsyncResult_CloseStreamOperation_m3408371609(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.WinRtToNetFxStreamAdapter::FlushAsync(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * WinRtToNetFxStreamAdapter_FlushAsync_m1951057401 (WinRtToNetFxStreamAdapter_t1366777568 * __this, CancellationToken_t784455623  ___cancellationToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_FlushAsync_m1951057401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t2042351338_m55061192_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canWrite_9();
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_2 = Task_get_CompletedTask_m459565641(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		CancellationToken_ThrowIfCancellationRequested_m2126013613((CancellationToken_t784455623 *)(&___cancellationToken0), /*hidden argument*/NULL);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t2042351338_il2cpp_TypeInfo_var, L_3);
		CancellationToken_t784455623  L_5 = ___cancellationToken0;
		Task_1_t1502828140 * L_6 = WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t97287965_m1845927618(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t97287965_m1845927618_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsyncInternal(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t61518632 * WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59154805 (WinRtToNetFxStreamAdapter_t1366777568 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, CancellationToken_t784455623  ___cancellationToken3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59154805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadAsyncInternalU3Ed__43_t3130315676  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t976952967  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		(&V_0)->set_buffer_3(L_0);
		int32_t L_1 = ___offset1;
		(&V_0)->set_offset_4(L_1);
		int32_t L_2 = ___count2;
		(&V_0)->set_count_5(L_2);
		CancellationToken_t784455623  L_3 = ___cancellationToken3;
		(&V_0)->set_cancellationToken_6(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t976952967_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t976952967  L_4 = AsyncTaskMethodBuilder_1_Create_m3003315259(NULL /*static, unused*/, /*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3003315259_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_4);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CReadAsyncInternalU3Ed__43_t3130315676  L_5 = V_0;
		AsyncTaskMethodBuilder_1_t976952967  L_6 = L_5.get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m2102369792((AsyncTaskMethodBuilder_1_t976952967 *)(&V_1), (U3CReadAsyncInternalU3Ed__43_t3130315676 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m2102369792_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t976952967 * L_7 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t61518632 * L_8 = AsyncTaskMethodBuilder_1_get_Task_m374009415((AsyncTaskMethodBuilder_1_t976952967 *)L_7, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m374009415_RuntimeMethod_var);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_MoveNext_m2332415331 (U3CReadAsyncInternalU3Ed__43_t3130315676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadAsyncInternalU3Ed__43_MoveNext_m2332415331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WinRtToNetFxStreamAdapter_t1366777568 * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ConfiguredTaskAwaiter_t1863693214  V_5;
	memset(&V_5, 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t3139119572  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WinRtToNetFxStreamAdapter_t1366777568 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0018;
			}
		}

IL_0011:
		{
			WinRtToNetFxStreamAdapter_t1366777568 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t2821136229_m1559834163(L_3, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t2821136229_m1559834163_RuntimeMethod_var);
			V_3 = L_4;
		}

IL_0018:
		{
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0095;
				}
			}

IL_001c:
			{
				ByteU5BU5D_t4116647657* L_6 = __this->get_buffer_3();
				int32_t L_7 = __this->get_offset_4();
				int32_t L_8 = __this->get_count_5();
				RuntimeObject* L_9 = WindowsRuntimeBufferExtensions_AsBuffer_m2423130836(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
				__this->set_U3CuserBufferU3E5__2_7(L_9);
				RuntimeObject* L_10 = V_3;
				RuntimeObject* L_11 = __this->get_U3CuserBufferU3E5__2_7();
				int32_t L_12 = __this->get_count_5();
				NullCheck(L_10);
				RuntimeObject* L_13 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_t2821136229_il2cpp_TypeInfo_var, L_10, L_11, L_12, 1);
				CancellationToken_t784455623  L_14 = __this->get_cancellationToken_6();
				Task_1_t1946732404 * L_15 = WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t541192229_TisUInt32_t2560061978_m1568080940(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t541192229_TisUInt32_t2560061978_m1568080940_RuntimeMethod_var);
				NullCheck(L_15);
				ConfiguredTaskAwaitable_1_t3139119572  L_16 = Task_1_ConfigureAwait_m2888757198(L_15, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m2888757198_RuntimeMethod_var);
				V_6 = L_16;
				ConfiguredTaskAwaiter_t1863693214  L_17 = ConfiguredTaskAwaitable_1_GetAwaiter_m2481093440((ConfiguredTaskAwaitable_1_t3139119572 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m2481093440_RuntimeMethod_var);
				V_5 = L_17;
				bool L_18 = ConfiguredTaskAwaiter_get_IsCompleted_m3341770821((ConfiguredTaskAwaiter_t1863693214 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m3341770821_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_00b2;
				}
			}

IL_0071:
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
				ConfiguredTaskAwaiter_t1863693214  L_20 = V_5;
				__this->set_U3CU3Eu__1_8(L_20);
				AsyncTaskMethodBuilder_1_t976952967 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t1863693214_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m3319697378((AsyncTaskMethodBuilder_1_t976952967 *)L_21, (ConfiguredTaskAwaiter_t1863693214 *)(&V_5), (U3CReadAsyncInternalU3Ed__43_t3130315676 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t1863693214_TisU3CReadAsyncInternalU3Ed__43_t3130315676_m3319697378_RuntimeMethod_var);
				goto IL_0115;
			}

IL_0095:
			{
				ConfiguredTaskAwaiter_t1863693214  L_22 = __this->get_U3CU3Eu__1_8();
				V_5 = L_22;
				ConfiguredTaskAwaiter_t1863693214 * L_23 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_23, sizeof(ConfiguredTaskAwaiter_t1863693214 ));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
			}

IL_00b2:
			{
				RuntimeObject* L_25 = ConfiguredTaskAwaiter_GetResult_m2103123391((ConfiguredTaskAwaiter_t1863693214 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m2103123391_RuntimeMethod_var);
				V_4 = L_25;
				RuntimeObject* L_26 = V_4;
				if (L_26)
				{
					goto IL_00c3;
				}
			}

IL_00bf:
			{
				V_2 = 0;
				goto IL_0101;
			}

IL_00c3:
			{
				RuntimeObject* L_27 = __this->get_U3CuserBufferU3E5__2_7();
				RuntimeObject* L_28 = V_4;
				WinRtIOHelper_EnsureResultsInUserBuffer_m279643431(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
				RuntimeObject* L_29 = V_4;
				NullCheck(L_29);
				uint32_t L_30 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_29);
				V_2 = L_30;
				goto IL_0101;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00da;
			throw e;
		}

CATCH_00da:
		{ // begin catch(System.Exception)
			ExceptionDispatchInfo_t3750997369 * L_31 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2836908337(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
			NullCheck(L_31);
			ExceptionDispatchInfo_Throw_m2689339678(L_31, /*hidden argument*/NULL);
			V_2 = 0;
			goto IL_0101;
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e8;
		throw e;
	}

CATCH_00e8:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t976952967 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m1162352611((AsyncTaskMethodBuilder_1_t976952967 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m1162352611_RuntimeMethod_var);
		goto IL_0115;
	} // end catch (depth: 1)

IL_0101:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t976952967 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		int32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m341489268((AsyncTaskMethodBuilder_1_t976952967 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m341489268_RuntimeMethod_var);
	}

IL_0115:
	{
		return;
	}
}
extern "C"  void U3CReadAsyncInternalU3Ed__43_MoveNext_m2332415331_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CReadAsyncInternalU3Ed__43_t3130315676 * _thisAdjusted = reinterpret_cast<U3CReadAsyncInternalU3Ed__43_t3130315676 *>(__this + 1);
	U3CReadAsyncInternalU3Ed__43_MoveNext_m2332415331(_thisAdjusted, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_SetStateMachine_m3503944324 (U3CReadAsyncInternalU3Ed__43_t3130315676 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReadAsyncInternalU3Ed__43_SetStateMachine_m3503944324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t976952967 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3679186700((AsyncTaskMethodBuilder_1_t976952967 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3679186700_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CReadAsyncInternalU3Ed__43_SetStateMachine_m3503944324_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CReadAsyncInternalU3Ed__43_t3130315676 * _thisAdjusted = reinterpret_cast<U3CReadAsyncInternalU3Ed__43_t3130315676 *>(__this + 1);
	U3CReadAsyncInternalU3Ed__43_SetStateMachine_m3503944324(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStreamExtensions::EnsureAdapterBufferSize(System.IO.Stream,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___adapter0, int32_t ___requiredBufferSize1, String_t* ___methodName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BufferedStream_t3465336908 * V_1 = NULL;
	{
		V_0 = 0;
		Stream_t1273022909 * L_0 = ___adapter0;
		V_1 = ((BufferedStream_t3465336908 *)IsInstSealed((RuntimeObject*)L_0, BufferedStream_t3465336908_il2cpp_TypeInfo_var));
		BufferedStream_t3465336908 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		BufferedStream_t3465336908 * L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3 = BufferedStream_get_BufferSize_m1372012477(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0013:
	{
		int32_t L_4 = ___requiredBufferSize1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___requiredBufferSize1;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7 = ___methodName2;
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1843450604, L_7, _stringLiteral765265327, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_9 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455_RuntimeMethod_var);
	}

IL_0030:
	{
		String_t* L_10 = ___methodName2;
		String_t* L_11 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral4285714218, L_10, _stringLiteral765265327, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_12 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455_RuntimeMethod_var);
	}

IL_0046:
	{
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_AsStreamForRead_m919553363 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamForRead_m919553363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___windowsRuntimeStream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		Stream_t1273022909 * L_1 = WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768(NULL /*static, unused*/, L_0, ((int32_t)16384), _stringLiteral278915230, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForWrite(Windows.Storage.Streams.IOutputStream)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_AsStreamForWrite_m2939096664 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamForWrite_m2939096664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___windowsRuntimeStream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		Stream_t1273022909 * L_1 = WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768(NULL /*static, unused*/, L_0, ((int32_t)16384), _stringLiteral1908748891, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternal(System.Object,System.Int32,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetFxToWinRtStreamAdapter_t2688706982 * V_0 = NULL;
	Stream_t1273022909 * V_1 = NULL;
	Stream_t1273022909 * G_B7_0 = NULL;
	Stream_t1273022909 * G_B6_0 = NULL;
	{
		RuntimeObject * L_0 = ___windowsRuntimeStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1723475720, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___bufferSize1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_3, _stringLiteral1172510602, _stringLiteral4208439318, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___windowsRuntimeStream0;
		V_0 = ((NetFxToWinRtStreamAdapter_t2688706982 *)IsInstClass((RuntimeObject*)L_4, NetFxToWinRtStreamAdapter_t2688706982_il2cpp_TypeInfo_var));
		NetFxToWinRtStreamAdapter_t2688706982 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		NetFxToWinRtStreamAdapter_t2688706982 * L_6 = V_0;
		NullCheck(L_6);
		Stream_t1273022909 * L_7 = NetFxToWinRtStreamAdapter_GetManagedStream_m3480949594(L_6, /*hidden argument*/NULL);
		Stream_t1273022909 * L_8 = L_7;
		G_B6_0 = L_8;
		if (L_8)
		{
			G_B7_0 = L_8;
			goto IL_0045;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_9 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m1034312941(L_9, _stringLiteral1723475720, _stringLiteral124057261, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeStreamExtensions_AsStreamInternal_m2354706768_RuntimeMethod_var);
	}

IL_0045:
	{
		return G_B7_0;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t1774956035 * L_10 = ((WindowsRuntimeStreamExtensions_t4179015579_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var))->get_s_winRtToNetFxAdapterMap_0();
		RuntimeObject * L_11 = ___windowsRuntimeStream0;
		NullCheck(L_10);
		bool L_12 = ConditionalWeakTable_2_TryGetValue_m814710423(L_10, L_11, (Stream_t1273022909 **)(&V_1), /*hidden argument*/ConditionalWeakTable_2_TryGetValue_m814710423_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		bool L_13 = ___forceBufferSize3;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		Stream_t1273022909 * L_14 = V_1;
		int32_t L_15 = ___bufferSize1;
		String_t* L_16 = ___invokedMethodName2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0060:
	{
		Stream_t1273022909 * L_17 = V_1;
		return L_17;
	}

IL_0062:
	{
		RuntimeObject * L_18 = ___windowsRuntimeStream0;
		int32_t L_19 = ___bufferSize1;
		String_t* L_20 = ___invokedMethodName2;
		bool L_21 = ___forceBufferSize3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		Stream_t1273022909 * L_22 = WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_m1117801903(NULL /*static, unused*/, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m615294623 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___winRtStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m615294623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CreateValueCallback_t3597102618 * G_B2_0 = NULL;
	RuntimeObject * G_B2_1 = NULL;
	ConditionalWeakTable_2_t1774956035 * G_B2_2 = NULL;
	CreateValueCallback_t3597102618 * G_B1_0 = NULL;
	RuntimeObject * G_B1_1 = NULL;
	ConditionalWeakTable_2_t1774956035 * G_B1_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t1774956035 * L_0 = ((WindowsRuntimeStreamExtensions_t4179015579_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var))->get_s_winRtToNetFxAdapterMap_0();
		RuntimeObject * L_1 = ___winRtStream0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var);
		CreateValueCallback_t3597102618 * L_2 = ((U3CU3Ec_t2303284929_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var))->get_U3CU3E9__11_0_1();
		CreateValueCallback_t3597102618 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var);
		U3CU3Ec_t2303284929 * L_4 = ((U3CU3Ec_t2303284929_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_5 = (intptr_t)U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m2752926032_RuntimeMethod_var;
		CreateValueCallback_t3597102618 * L_6 = (CreateValueCallback_t3597102618 *)il2cpp_codegen_object_new(CreateValueCallback_t3597102618_il2cpp_TypeInfo_var);
		CreateValueCallback__ctor_m1119614491(L_6, L_4, (intptr_t)L_5, /*hidden argument*/CreateValueCallback__ctor_m1119614491_RuntimeMethod_var);
		CreateValueCallback_t3597102618 * L_7 = L_6;
		((U3CU3Ec_t2303284929_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var))->set_U3CU3E9__11_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_2);
		Stream_t1273022909 * L_8 = ConditionalWeakTable_2_GetValue_m1139837188(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/ConditionalWeakTable_2_GetValue_m1139837188_RuntimeMethod_var);
		return L_8;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m4200031818 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___winRtStream0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m4200031818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t3069626030 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t3069626030 * L_0 = (U3CU3Ec__DisplayClass12_0_t3069626030 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t3069626030_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_m2412380478(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t3069626030 * L_1 = V_0;
		int32_t L_2 = ___bufferSize1;
		NullCheck(L_1);
		L_1->set_bufferSize_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t1774956035 * L_3 = ((WindowsRuntimeStreamExtensions_t4179015579_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var))->get_s_winRtToNetFxAdapterMap_0();
		RuntimeObject * L_4 = ___winRtStream0;
		U3CU3Ec__DisplayClass12_0_t3069626030 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m787719806_RuntimeMethod_var;
		CreateValueCallback_t3597102618 * L_7 = (CreateValueCallback_t3597102618 *)il2cpp_codegen_object_new(CreateValueCallback_t3597102618_il2cpp_TypeInfo_var);
		CreateValueCallback__ctor_m1119614491(L_7, L_5, (intptr_t)L_6, /*hidden argument*/CreateValueCallback__ctor_m1119614491_RuntimeMethod_var);
		NullCheck(L_3);
		Stream_t1273022909 * L_8 = ConditionalWeakTable_2_GetValue_m1139837188(L_3, L_4, L_7, /*hidden argument*/ConditionalWeakTable_2_GetValue_m1139837188_RuntimeMethod_var);
		return L_8;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternalFactoryHelper(System.Object,System.Int32,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_m1117801903 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___windowsRuntimeStream0, int32_t ___bufferSize1, String_t* ___invokedMethodName2, bool ___forceBufferSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_m1117801903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * V_0 = NULL;
	WinRtToNetFxStreamAdapter_t1366777568 * V_1 = NULL;
	Stream_t1273022909 * G_B3_0 = NULL;
	{
		int32_t L_0 = ___bufferSize1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___windowsRuntimeStream0;
		int32_t L_2 = ___bufferSize1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		Stream_t1273022909 * L_3 = WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m4200031818(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0012;
	}

IL_000c:
	{
		RuntimeObject * L_4 = ___windowsRuntimeStream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		Stream_t1273022909 * L_5 = WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m615294623(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		bool L_6 = ___forceBufferSize3;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		Stream_t1273022909 * L_7 = V_0;
		int32_t L_8 = ___bufferSize1;
		String_t* L_9 = ___invokedMethodName2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var);
		WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m661402455(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_001e:
	{
		Stream_t1273022909 * L_10 = V_0;
		V_1 = ((WinRtToNetFxStreamAdapter_t1366777568 *)IsInstClass((RuntimeObject*)L_10, WinRtToNetFxStreamAdapter_t1366777568_il2cpp_TypeInfo_var));
		WinRtToNetFxStreamAdapter_t1366777568 * L_11 = V_1;
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		Stream_t1273022909 * L_12 = V_0;
		NullCheck(((BufferedStream_t3465336908 *)CastclassSealed((RuntimeObject*)L_12, BufferedStream_t3465336908_il2cpp_TypeInfo_var)));
		Stream_t1273022909 * L_13 = BufferedStream_get_UnderlyingStream_m2691825172(((BufferedStream_t3465336908 *)CastclassSealed((RuntimeObject*)L_12, BufferedStream_t3465336908_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = ((WinRtToNetFxStreamAdapter_t1366777568 *)IsInstClass((RuntimeObject*)L_13, WinRtToNetFxStreamAdapter_t1366777568_il2cpp_TypeInfo_var));
	}

IL_0039:
	{
		WinRtToNetFxStreamAdapter_t1366777568 * L_14 = V_1;
		NullCheck(L_14);
		WinRtToNetFxStreamAdapter_SetWonInitializationRace_m2570515959(L_14, /*hidden argument*/NULL);
		Stream_t1273022909 * L_15 = V_0;
		return L_15;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions__cctor_m2962646457 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStreamExtensions__cctor_m2962646457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t1774956035 * L_0 = (ConditionalWeakTable_2_t1774956035 *)il2cpp_codegen_object_new(ConditionalWeakTable_2_t1774956035_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m1725874571(L_0, /*hidden argument*/ConditionalWeakTable_2__ctor_m1725874571_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_t4179015579_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var))->set_s_winRtToNetFxAdapterMap_0(L_0);
		ConditionalWeakTable_2_t3962727071 * L_1 = (ConditionalWeakTable_2_t3962727071 *)il2cpp_codegen_object_new(ConditionalWeakTable_2_t3962727071_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m2388336367(L_1, /*hidden argument*/ConditionalWeakTable_2__ctor_m2388336367_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_t4179015579_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t4179015579_il2cpp_TypeInfo_var))->set_s_netFxToWinRtAdapterMap_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2134779780 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2134779780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2303284929 * L_0 = (U3CU3Ec_t2303284929 *)il2cpp_codegen_object_new(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3304133737(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2303284929_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2303284929_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3304133737 (U3CU3Ec_t2303284929 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions/<>c::<WinRtToNetFxAdapterMap_GetValue>b__11_0(System.Object)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m2752926032 (U3CU3Ec_t2303284929 * __this, RuntimeObject * ___wrtStr0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___wrtStr0;
		WinRtToNetFxStreamAdapter_t1366777568 * L_1 = WinRtToNetFxStreamAdapter_Create_m1998248300(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m2412380478 (U3CU3Ec__DisplayClass12_0_t3069626030 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::<WinRtToNetFxAdapterMap_GetValue>b__0(System.Object)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m787719806 (U3CU3Ec__DisplayClass12_0_t3069626030 * __this, RuntimeObject * ___wrtStr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m787719806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___wrtStr0;
		WinRtToNetFxStreamAdapter_t1366777568 * L_1 = WinRtToNetFxStreamAdapter_Create_m1998248300(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bufferSize_0();
		BufferedStream_t3465336908 * L_3 = (BufferedStream_t3465336908 *)il2cpp_codegen_object_new(BufferedStream_t3465336908_il2cpp_TypeInfo_var);
		BufferedStream__ctor_m588355978(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.IAgileObject
const Il2CppGuid IAgileObject_t981452505::IID = { 0x94ea2b94, 0xe9cc, 0x49e0, 0xc0, 0xff, 0xee, 0x64, 0xca, 0x8f, 0x5b, 0x90 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.IMarshal
const Il2CppGuid IMarshal_t3913494478::IID = { 0x3, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
// System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
extern "C" IL2CPP_METHOD_ATTR void IMarshal_GetUnmarshalClass_m1100404162 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	IMarshal_t3913494478* ____imarshal_t3913494478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IMarshal_t3913494478::IID, reinterpret_cast<void**>(&____imarshal_t3913494478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	hr = ____imarshal_t3913494478->IMarshal_GetUnmarshalClass_m1100404162(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, ___pCid5);
	____imarshal_t3913494478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void IMarshal_GetMarshalSizeMax_m3676534994 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	IMarshal_t3913494478* ____imarshal_t3913494478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IMarshal_t3913494478::IID, reinterpret_cast<void**>(&____imarshal_t3913494478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	hr = ____imarshal_t3913494478->IMarshal_GetMarshalSizeMax_m3676534994(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, ___pSize5);
	____imarshal_t3913494478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IMarshal_MarshalInterface_m735038959 (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	IMarshal_t3913494478* ____imarshal_t3913494478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IMarshal_t3913494478::IID, reinterpret_cast<void**>(&____imarshal_t3913494478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	hr = ____imarshal_t3913494478->IMarshal_MarshalInterface_m735038959(___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5);
	____imarshal_t3913494478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR void IMarshal_UnmarshalInterface_m291083946 (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	IMarshal_t3913494478* ____imarshal_t3913494478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IMarshal_t3913494478::IID, reinterpret_cast<void**>(&____imarshal_t3913494478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	hr = ____imarshal_t3913494478->IMarshal_UnmarshalInterface_m291083946(___pStm0, ___riid1, ___ppv2);
	____imarshal_t3913494478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IMarshal_ReleaseMarshalData_m2968386882 (RuntimeObject* __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	IMarshal_t3913494478* ____imarshal_t3913494478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IMarshal_t3913494478::IID, reinterpret_cast<void**>(&____imarshal_t3913494478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	hr = ____imarshal_t3913494478->IMarshal_ReleaseMarshalData_m2968386882(___pStm0);
	____imarshal_t3913494478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IMarshal_DisconnectObject_m119848861 (RuntimeObject* __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	IMarshal_t3913494478* ____imarshal_t3913494478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IMarshal_t3913494478::IID, reinterpret_cast<void**>(&____imarshal_t3913494478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	hr = ____imarshal_t3913494478->IMarshal_DisconnectObject_m119848861(___dwReserved0);
	____imarshal_t3913494478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
const Il2CppGuid IBufferByteAccess_t4245463285::IID = { 0x905a0fef, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer()
extern "C" IL2CPP_METHOD_ATTR intptr_t IBufferByteAccess_GetBuffer_m3254137481 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBufferByteAccess_t4245463285* ____ibufferByteAccess_t4245463285 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBufferByteAccess_t4245463285::IID, reinterpret_cast<void**>(&____ibufferByteAccess_t4245463285));
	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Native function invocation
	intptr_t returnValue = 0;
	hr = ____ibufferByteAccess_t4245463285->IBufferByteAccess_GetBuffer_m3254137481(&returnValue);
	____ibufferByteAccess_t4245463285->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_m3477745630 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_Create_m3477745630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral3623012086, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBuffer_Create_m3477745630_RuntimeMethod_var);
	}

IL_000f:
	{
		int32_t L_2 = ___capacity0;
		WindowsRuntimeBuffer_t3806548453 * L_3 = (WindowsRuntimeBuffer_t3806548453 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m1721285349(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
extern "C" IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_m2454072108 (RuntimeObject * __this /* static, unused */, RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_RoGetBufferMarshaler_m2454072108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (STDCALL *PInvokeFunc) (IMarshal_t3913494478**);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IMarshal_t3913494478**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WinTypes.dll"), "RoGetBufferMarshaler", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RoGetBufferMarshaler'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___bufferMarshalerPtr0' to native representation
	IMarshal_t3913494478* ____bufferMarshalerPtr0_empty = NULL;
	IMarshal_t3913494478** ____bufferMarshalerPtr0_marshaled = &____bufferMarshalerPtr0_empty;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____bufferMarshalerPtr0_marshaled);

	// Marshaling of parameter '___bufferMarshalerPtr0' back from native representation
	RuntimeObject* _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____bufferMarshalerPtr0_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___bufferMarshalerPtr0 = _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___bufferMarshalerPtr0' native representation
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		(*____bufferMarshalerPtr0_marshaled)->Release();
		*____bufferMarshalerPtr0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DllNotFoundException_t2721418633 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
			int32_t L_1 = WindowsRuntimeBuffer_RoGetBufferMarshaler_m2454072108(NULL /*static, unused*/, (RuntimeObject**)(&V_0), /*hidden argument*/NULL);
			V_1 = L_1;
			RuntimeObject* L_2 = V_0;
			((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->set_s_winRtMarshalProxy_0(L_2);
			int32_t L_3 = V_1;
			if (!L_3)
			{
				goto IL_003b;
			}
		}

IL_001a:
		{
			String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2181662023, _stringLiteral1767970036, _stringLiteral4103272726, /*hidden argument*/NULL);
			Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m1152696503(L_5, L_4, /*hidden argument*/NULL);
			Exception_t * L_6 = L_5;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			Exception_SetErrorCode_m4269507377(L_6, L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095_RuntimeMethod_var);
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_0;
			if (L_8)
			{
				goto IL_0058;
			}
		}

IL_003e:
		{
			String_t* L_9 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2181662023, _stringLiteral1767970036, _stringLiteral4103272726, /*hidden argument*/NULL);
			NullReferenceException_t1023182353 * L_10 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
			NullReferenceException__ctor_m3076065613(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095_RuntimeMethod_var);
		}

IL_0058:
		{
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.DllNotFoundException)
		V_2 = ((DllNotFoundException_t2721418633 *)__exception_local);
		DllNotFoundException_t2721418633 * L_11 = V_2;
		NotImplementedException_t3489357830 * L_12 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m1532458134(L_12, _stringLiteral3197160056, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0067:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m1721285349 (WindowsRuntimeBuffer_t3806548453 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer__ctor_m1721285349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral3623012086, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBuffer__ctor_m1721285349_RuntimeMethod_var);
	}

IL_0020:
	{
		int32_t L_2 = ___capacity0;
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set__data_1(L_3);
		__this->set__dataStartOffs_2(0);
		__this->set__usefulDataLength_3(0);
		int32_t L_4 = ___capacity0;
		__this->set__maxDataCapacity_4(L_4);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m3807393127 (WindowsRuntimeBuffer_t3806548453 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer__ctor_m3807393127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2037252866, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_001f:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_002e:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, _stringLiteral3623012086, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_004d:
	{
		ByteU5BU5D_t4116647657* L_8 = ___data0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_t132251570 * L_11 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_11, _stringLiteral1060385402, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_0060:
	{
		ByteU5BU5D_t4116647657* L_12 = ___data0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_t132251570 * L_15 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_15, _stringLiteral1060385402, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_0074:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, _stringLiteral1172734953, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WindowsRuntimeBuffer__ctor_m3807393127_RuntimeMethod_var);
	}

IL_0084:
	{
		ByteU5BU5D_t4116647657* L_19 = ___data0;
		__this->set__data_1(L_19);
		int32_t L_20 = ___offset1;
		__this->set__dataStartOffs_2(L_20);
		int32_t L_21 = ___length2;
		__this->set__usefulDataLength_3(L_21);
		int32_t L_22 = ___capacity3;
		__this->set__maxDataCapacity_4(L_22);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_m327227246 (WindowsRuntimeBuffer_t3806548453 * __this, ByteU5BU5D_t4116647657** ___underlyingDataArray0, int32_t* ___underlyingDataArrayStartOffset1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657** L_0 = ___underlyingDataArray0;
		ByteU5BU5D_t4116647657* L_1 = __this->get__data_1();
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_0, (RuntimeObject *)L_1);
		int32_t* L_2 = ___underlyingDataArrayStartOffset1;
		int32_t L_3 = __this->get__dataStartOffs_2();
		*((int32_t*)L_2) = (int32_t)L_3;
		return;
	}
}
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
extern "C" IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_m2750334226 (WindowsRuntimeBuffer_t3806548453 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_PinUnderlyingData_m2750334226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_t3351438187 ));
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x78, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		{
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			ByteU5BU5D_t4116647657* L_0 = __this->get__data_1();
			GCHandle_t3351438187  L_1 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
			V_0 = L_1;
			intptr_t L_2 = GCHandle_AddrOfPinnedObject_m3427142301((GCHandle_t3351438187 *)(&V_0), /*hidden argument*/NULL);
			int32_t L_3 = __this->get__dataStartOffs_2();
			intptr_t L_4 = IntPtr_op_Addition_m4207902953(NULL /*static, unused*/, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
			V_2 = (intptr_t)L_4;
			intptr_t* L_5 = __this->get_address_of__dataPtr_6();
			intptr_t L_6 = V_2;
			intptr_t L_7 = Interlocked_CompareExchange_m3932212864(NULL /*static, unused*/, (intptr_t*)L_5, (intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_8 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_8;
			IL2CPP_LEAVE(0x77, FINALLY_004b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004b;
		}

FINALLY_004b:
		{ // begin finally (depth: 2)
			{
				bool L_9 = V_1;
				if (L_9)
				{
					goto IL_0057;
				}
			}

IL_004e:
			{
				GCHandle_Free_m1457699368((GCHandle_t3351438187 *)(&V_0), /*hidden argument*/NULL);
				goto IL_0076;
			}

IL_0057:
			{
				GCHandle_t3351438187 * L_10 = __this->get_address_of__pinHandle_5();
				bool L_11 = GCHandle_get_IsAllocated_m1058226959((GCHandle_t3351438187 *)L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_006f;
				}
			}

IL_0064:
			{
				GCHandle_t3351438187 * L_12 = __this->get_address_of__pinHandle_5();
				GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_12, /*hidden argument*/NULL);
			}

IL_006f:
			{
				GCHandle_t3351438187  L_13 = V_0;
				__this->set__pinHandle_5(L_13);
			}

IL_0076:
			{
				IL2CPP_END_FINALLY(75)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(75)
		{
			IL2CPP_JUMP_TBL(0x77, IL_0077)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(12)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		intptr_t L_14 = V_2;
		void* L_15 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, (intptr_t)L_14, /*hidden argument*/NULL);
		return (uint8_t*)(L_15);
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Finalize_m2904779014 (WindowsRuntimeBuffer_t3806548453 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GCHandle_t3351438187 * L_0 = __this->get_address_of__pinHandle_5();
			bool L_1 = GCHandle_get_IsAllocated_m1058226959((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000d:
		{
			GCHandle_t3351438187 * L_2 = __this->get_address_of__pinHandle_5();
			GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_2, /*hidden argument*/NULL);
		}

IL_0018:
		{
			IL2CPP_LEAVE(0x21, FINALLY_001a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0021:
	{
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
extern "C" IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m46617448 (WindowsRuntimeBuffer_t3806548453 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
extern "C" IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_m2921884144 (WindowsRuntimeBuffer_t3806548453 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m1644744651 (WindowsRuntimeBuffer_t3806548453 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m1644744651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, __this);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral3493618073, _stringLiteral4023079014, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4269507377(L_3, ((int32_t)-2147483637), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m1644744651_RuntimeMethod_var);
	}

IL_0024:
	{
		uint32_t L_4 = ___value0;
		__this->set__usefulDataLength_3(L_4);
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m3694109771 (WindowsRuntimeBuffer_t3806548453 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m3694109771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t* L_0 = __this->get_address_of__dataPtr_6();
		intptr_t L_1 = VolatileRead((intptr_t*)L_0);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}

IL_001b:
	{
		uint8_t* L_5 = WindowsRuntimeBuffer_PinUnderlyingData_m2750334226(__this, /*hidden argument*/NULL);
		intptr_t L_6;
		memset(&L_6, 0, sizeof(L_6));
		IntPtr__ctor_m3384658186((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		return (intptr_t)L_6;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m763706134 (WindowsRuntimeBuffer_t3806548453 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_m763706134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		uint32_t L_1 = ___dwReserved0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32) */, IMarshal_t3913494478_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m793134310 (WindowsRuntimeBuffer_t3806548453 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m793134310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlflags4;
		uint32_t* L_6 = ___pSize5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, uint32_t* >::Invoke(1 /* System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&) */, IMarshal_t3913494478_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (uint32_t*)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_m1025637630 (WindowsRuntimeBuffer_t3806548453 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_m1025637630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlFlags4;
		Guid_t * L_6 = ___pCid5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, Guid_t * >::Invoke(0 /* System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&) */, IMarshal_t3913494478_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (Guid_t *)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_m197112739 (WindowsRuntimeBuffer_t3806548453 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_m197112739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t L_3 = ___pv2;
		uint32_t L_4 = ___dwDestContext3;
		intptr_t L_5 = ___pvDestContext4;
		uint32_t L_6 = ___mshlflags5;
		NullCheck(L_0);
		InterfaceActionInvoker6< intptr_t, Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t >::Invoke(2 /* System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32) */, IMarshal_t3913494478_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t)L_3, L_4, (intptr_t)L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m2589995085 (WindowsRuntimeBuffer_t3806548453 * __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m2589995085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(4 /* System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr) */, IMarshal_t3913494478_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m4173764896 (WindowsRuntimeBuffer_t3806548453 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m4173764896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m2613476095(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t3806548453_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t* L_3 = ___ppv2;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, Guid_t *, intptr_t* >::Invoke(3 /* System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&) */, IMarshal_t3913494478_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t*)L_3);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__cctor_m1233821943 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m2423130836 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___source0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___source0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		int32_t L_3 = ___length2;
		RuntimeObject* L_4 = WindowsRuntimeBufferExtensions_AsBuffer_m659375680(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m659375680 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_AsBuffer_m659375680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, _stringLiteral3623012086, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_003b:
	{
		ByteU5BU5D_t4116647657* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_t132251570 * L_11 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_11, _stringLiteral1060385402, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_004e:
	{
		ByteU5BU5D_t4116647657* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t132251570 * L_15 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_15, _stringLiteral1060385402, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_0061:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, _stringLiteral1172734953, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WindowsRuntimeBufferExtensions_AsBuffer_m659375680_RuntimeMethod_var);
	}

IL_0070:
	{
		ByteU5BU5D_t4116647657* L_19 = ___source0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___length2;
		int32_t L_22 = ___capacity3;
		WindowsRuntimeBuffer_t3806548453 * L_23 = (WindowsRuntimeBuffer_t3806548453 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m3807393127(L_23, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m1180775848 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, RuntimeObject* ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_CopyTo_m1180775848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1180775848_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___destination1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2783568775, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1180775848_RuntimeMethod_var);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		RuntimeObject* L_5 = ___destination1;
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_6);
		WindowsRuntimeBufferExtensions_CopyTo_m1249409418(NULL /*static, unused*/, L_4, 0, L_5, 0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_m1249409418 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, uint32_t ___sourceIndex1, RuntimeObject* ___destination2, uint32_t ___destinationIndex3, uint32_t ___count4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_CopyTo_m1249409418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	intptr_t V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___destination2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2783568775, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_001c:
	{
		uint32_t L_4 = ___count4;
		if (true)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_002c:
	{
		uint32_t L_6 = ___sourceIndex1;
		if (true)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, _stringLiteral4004074309, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_003b:
	{
		uint32_t L_8 = ___destinationIndex3;
		if (true)
		{
			goto IL_004a;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_9 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_9, _stringLiteral1511102372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_004a:
	{
		RuntimeObject* L_10 = ___source0;
		NullCheck(L_10);
		uint32_t L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_10);
		uint32_t L_12 = ___sourceIndex1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)L_12))))
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_13, _stringLiteral183322824, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_005e:
	{
		RuntimeObject* L_14 = ___source0;
		NullCheck(L_14);
		uint32_t L_15 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_14);
		uint32_t L_16 = ___sourceIndex1;
		uint32_t L_17 = ___count4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))) < ((uint32_t)L_17))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, _stringLiteral1951081104, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_0075:
	{
		RuntimeObject* L_19 = ___destination2;
		NullCheck(L_19);
		uint32_t L_20 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_19);
		uint32_t L_21 = ___destinationIndex3;
		if ((!(((uint32_t)L_20) <= ((uint32_t)L_21))))
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t132251570 * L_22 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_22, _stringLiteral183322824, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_0089:
	{
		RuntimeObject* L_23 = ___destination2;
		NullCheck(L_23);
		uint32_t L_24 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_23);
		uint32_t L_25 = ___destinationIndex3;
		uint32_t L_26 = ___count4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) < ((uint32_t)L_26))))
		{
			goto IL_00a0;
		}
	}
	{
		ArgumentException_t132251570 * L_27 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_27, _stringLiteral2551228437, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, WindowsRuntimeBufferExtensions_CopyTo_m1249409418_RuntimeMethod_var);
	}

IL_00a0:
	{
		RuntimeObject* L_28 = ___source0;
		bool L_29 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_28, (ByteU5BU5D_t4116647657**)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_4 = L_29;
		RuntimeObject* L_30 = ___destination2;
		bool L_31 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_30, (ByteU5BU5D_t4116647657**)(&V_1), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_31;
		bool L_32 = V_4;
		bool L_33 = V_5;
		if (!((int32_t)((int32_t)L_32&(int32_t)L_33)))
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_34 = V_0;
		int32_t L_35 = V_2;
		uint32_t L_36 = ___sourceIndex1;
		ByteU5BU5D_t4116647657* L_37 = V_1;
		int32_t L_38 = V_3;
		uint32_t L_39 = ___destinationIndex3;
		uint32_t L_40 = ___count4;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), (RuntimeArray *)(RuntimeArray *)L_37, ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39)), L_40, /*hidden argument*/NULL);
		return;
	}

IL_00cf:
	{
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_42 = ___destination2;
		uint32_t L_43 = ___destinationIndex3;
		intptr_t L_44 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		V_6 = (intptr_t)L_44;
		ByteU5BU5D_t4116647657* L_45 = V_0;
		int32_t L_46 = V_2;
		uint32_t L_47 = ___sourceIndex1;
		intptr_t L_48 = V_6;
		uint32_t L_49 = ___count4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1562111546(NULL /*static, unused*/, L_45, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), (intptr_t)L_48, L_49, /*hidden argument*/NULL);
		return;
	}

IL_00ea:
	{
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0101;
		}
	}
	{
		RuntimeObject* L_51 = ___source0;
		uint32_t L_52 = ___sourceIndex1;
		intptr_t L_53 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_54 = V_1;
		int32_t L_55 = V_3;
		uint32_t L_56 = ___destinationIndex3;
		uint32_t L_57 = ___count4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, (intptr_t)L_53, L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)), L_57, /*hidden argument*/NULL);
		return;
	}

IL_0101:
	{
		RuntimeObject* L_58 = ___source0;
		uint32_t L_59 = ___sourceIndex1;
		intptr_t L_60 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		RuntimeObject* L_61 = ___destination2;
		uint32_t L_62 = ___destinationIndex3;
		intptr_t L_63 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/NULL);
		V_6 = (intptr_t)L_63;
		intptr_t L_64 = V_6;
		uint32_t L_65 = ___count4;
		WindowsRuntimeBufferExtensions_MemCopy_m655142473(NULL /*static, unused*/, (intptr_t)L_60, (intptr_t)L_64, L_65, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buffer0, ByteU5BU5D_t4116647657** ___underlyingDataArray1, int32_t* ___underlyingDataArrayStartOffset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WindowsRuntimeBuffer_t3806548453 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___buffer0;
		V_0 = ((WindowsRuntimeBuffer_t3806548453 *)IsInstSealed((RuntimeObject*)L_2, WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var));
		WindowsRuntimeBuffer_t3806548453 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_t4116647657** L_4 = ___underlyingDataArray1;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_4, (RuntimeObject *)NULL);
		int32_t* L_5 = ___underlyingDataArrayStartOffset2;
		*((int32_t*)L_5) = (int32_t)(-1);
		return (bool)0;
	}

IL_0020:
	{
		WindowsRuntimeBuffer_t3806548453 * L_6 = V_0;
		ByteU5BU5D_t4116647657** L_7 = ___underlyingDataArray1;
		int32_t* L_8 = ___underlyingDataArrayStartOffset2;
		NullCheck(L_6);
		WindowsRuntimeBuffer_GetUnderlyingData_m327227246(L_6, (ByteU5BU5D_t4116647657**)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m2250988661 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buffer0, RuntimeObject* ___otherBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_IsSameData_m2250988661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3939495523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_IsSameData_m2250988661_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___otherBuffer1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___buffer0;
		RuntimeObject* L_4 = ___otherBuffer1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		RuntimeObject* L_5 = ___buffer0;
		bool L_6 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_5, (ByteU5BU5D_t4116647657**)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_4 = L_6;
		RuntimeObject* L_7 = ___otherBuffer1;
		bool L_8 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_7, (ByteU5BU5D_t4116647657**)(&V_1), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_4;
		bool L_10 = V_5;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_12 = V_0;
		ByteU5BU5D_t4116647657* L_13 = V_1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_12) == ((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_13))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___buffer0;
		RuntimeObject* L_17 = ___otherBuffer1;
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var)));
		intptr_t L_18 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var)));
		RuntimeObject* L_19 = V_6;
		NullCheck(L_19);
		intptr_t L_20 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var, L_19);
		bool L_21 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_18, (intptr_t)L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188 (RuntimeObject * __this /* static, unused */, MemoryStream_t94973147 * ___underlyingStream0, int32_t ___positionInStream1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t283560987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		MemoryStream_t94973147 * L_0 = ___underlyingStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2587111962, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___positionInStream1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1851023600, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral1212500642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_RuntimeMethod_var);
	}

IL_002c:
	{
		MemoryStream_t94973147 * L_6 = ___underlyingStream0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_6);
		int32_t L_8 = ___positionInStream1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral2149632453, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_RuntimeMethod_var);
	}

IL_0040:
	{
		MemoryStream_t94973147 * L_10 = ___underlyingStream0;
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker1< bool, ArraySegment_1_t283560987 * >::Invoke(32 /* System.Boolean System.IO.MemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&) */, L_10, (ArraySegment_1_t283560987 *)(&V_0));
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		UnauthorizedAccessException_t490705335 * L_12 = (UnauthorizedAccessException_t490705335 *)il2cpp_codegen_object_new(UnauthorizedAccessException_t490705335_il2cpp_TypeInfo_var);
		UnauthorizedAccessException__ctor_m40101894(L_12, _stringLiteral638203063, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m1800286188_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_13 = ArraySegment_1_get_Offset_m2467593538((ArraySegment_1_t283560987 *)(&V_0), /*hidden argument*/ArraySegment_1_get_Offset_m2467593538_RuntimeMethod_var);
		V_1 = L_13;
		int32_t L_14 = ___length2;
		MemoryStream_t94973147 * L_15 = ___underlyingStream0;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_15);
		int32_t L_17 = ___positionInStream1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_18 = Math_Min_m3468062251(NULL /*static, unused*/, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		V_2 = L_18;
		int32_t L_19 = ___length2;
		MemoryStream_t94973147 * L_20 = ___underlyingStream0;
		NullCheck(L_20);
		int64_t L_21 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		int32_t L_22 = ___positionInStream1;
		int32_t L_23 = Math_Min_m3468062251(NULL /*static, unused*/, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_21))), (int32_t)L_22)), /*hidden argument*/NULL);
		int32_t L_24 = Math_Max_m1873195862(NULL /*static, unused*/, 0, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		ByteU5BU5D_t4116647657* L_25 = ArraySegment_1_get_Array_m3038125939((ArraySegment_1_t283560987 *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m3038125939_RuntimeMethod_var);
		int32_t L_26 = V_1;
		int32_t L_27 = ___positionInStream1;
		int32_t L_28 = V_3;
		int32_t L_29 = V_2;
		WindowsRuntimeBuffer_t3806548453 * L_30 = (WindowsRuntimeBuffer_t3806548453 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t3806548453_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m3807393127(L_30, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeBufferExtensions_AsStream_m2594335144 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_AsStream_m2594335144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeBufferExtensions_AsStream_m2594335144_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		bool L_3 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m2188857688(NULL /*static, unused*/, L_2, (ByteU5BU5D_t4116647657**)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = V_0;
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_6);
		MemoryStream_t94973147 * L_8 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3475740994(L_8, L_4, L_5, L_7, (bool)1, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		RuntimeObject* L_9 = ___source0;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = ___source0;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		intptr_t L_12 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var, L_11);
		void* L_13 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366 * L_14 = (WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366 *)il2cpp_codegen_object_new(WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366_il2cpp_TypeInfo_var);
		WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m1133492133(L_14, L_10, (uint8_t*)(uint8_t*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buffer0, uint32_t ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_GetPointerAtOffset_m375585740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___buffer0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var)));
		intptr_t L_1 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_t4245463285_il2cpp_TypeInfo_var)));
		void* L_2 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, (intptr_t)L_1, /*hidden argument*/NULL);
		uint32_t L_3 = ___offset1;
		intptr_t L_4;
		memset(&L_4, 0, sizeof(L_4));
		IntPtr__ctor_m3384658186((&L_4), (void*)(void*)((void*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)(((uintptr_t)L_3)))), /*hidden argument*/NULL);
		return (intptr_t)L_4;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m655142473 (RuntimeObject * __this /* static, unused */, intptr_t ___src0, intptr_t ___dst1, uint32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferExtensions_MemCopy_m655142473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		uint32_t L_0 = ___count2;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_1 = ___src0;
		intptr_t L_2 = ___dst1;
		WindowsRuntimeBufferExtensions_MemCopy_m655142473(NULL /*static, unused*/, (intptr_t)L_1, (intptr_t)L_2, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		intptr_t L_3 = ___src0;
		intptr_t L_4 = IntPtr_op_Addition_m4207902953(NULL /*static, unused*/, (intptr_t)L_3, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		intptr_t L_5 = ___dst1;
		intptr_t L_6 = IntPtr_op_Addition_m4207902953(NULL /*static, unused*/, (intptr_t)L_5, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		uint32_t L_7 = ___count2;
		WindowsRuntimeBufferExtensions_MemCopy_m655142473(NULL /*static, unused*/, (intptr_t)L_4, (intptr_t)L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)2147483647LL))), /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		uint32_t L_8 = ___count2;
		V_0 = L_8;
		int32_t L_9 = V_0;
		ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		intptr_t L_11 = ___src0;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, (intptr_t)L_11, L_12, 0, L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = V_1;
		intptr_t L_15 = ___dst1;
		int32_t L_16 = V_0;
		Marshal_Copy_m1562111546(NULL /*static, unused*/, L_14, 0, (intptr_t)L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m1133492133 (WindowsRuntimeBufferUnmanagedMemoryStream_t4037845366 * __this, RuntimeObject* ___sourceBuffer0, uint8_t* ___dataPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m1133492133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = ___dataPtr1;
		RuntimeObject* L_1 = ___sourceBuffer0;
		NullCheck(L_1);
		uint32_t L_2 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___sourceBuffer0;
		NullCheck(L_3);
		uint32_t L_4 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t541192229_il2cpp_TypeInfo_var, L_3);
		UnmanagedMemoryStream__ctor_m1147761611(__this, (uint8_t*)(uint8_t*)L_0, (((int64_t)((uint64_t)L_2))), (((int64_t)((uint64_t)L_4))), 3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___sourceBuffer0;
		__this->set__sourceBuffer_14(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
extern "C" IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m620618218 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_CreateNext_m620618218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t108471755 * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var);
		Random_t108471755 * L_0 = ((AsyncInfoIdGenerator_t957218259_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Random_t108471755 * L_1 = V_0;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var);
		Random_t108471755 * L_2 = ((AsyncInfoIdGenerator_t957218259_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)2147483647LL));
		V_2 = L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			Random_t108471755 * L_5 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m2255923491 (RuntimeObject * __this /* static, unused */, uint32_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m2255923491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var);
		uint32_t L_4 = AsyncInfoIdGenerator_CreateNext_m620618218(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = (uint32_t*)L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)(((uintptr_t)L_6)), L_7, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m1347019070 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator__cctor_m1347019070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m3209279193(L_0, ((int32_t)19830118), /*hidden argument*/NULL);
		((AsyncInfoIdGenerator_t957218259_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t957218259_il2cpp_TypeInfo_var))->set_s_idGenerator_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_m255798036 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, SynchronizationContext_t2326897723 * ___targetContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExceptionDispatchHelper_ThrowAsync_m255798036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_t3750997369 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	SendOrPostCallback_t2750080073 * G_B5_0 = NULL;
	SynchronizationContext_t2326897723 * G_B5_1 = NULL;
	SendOrPostCallback_t2750080073 * G_B4_0 = NULL;
	SynchronizationContext_t2326897723 * G_B4_1 = NULL;
	SendOrPostCallback_t2750080073 * G_B11_0 = NULL;
	SynchronizationContext_t2326897723 * G_B11_1 = NULL;
	SendOrPostCallback_t2750080073 * G_B10_0 = NULL;
	SynchronizationContext_t2326897723 * G_B10_1 = NULL;
	{
		Exception_t * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		Exception_t * L_1 = ___exception0;
		ExceptionDispatchInfo_t3750997369 * L_2 = ExceptionDispatchInfo_Capture_m2882203257(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SynchronizationContext_t2326897723 * L_3 = ___targetContext1;
		if (!L_3)
		{
			goto IL_0041;
		}
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t2326897723 * L_4 = ___targetContext1;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var);
			SendOrPostCallback_t2750080073 * L_5 = ((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
			SendOrPostCallback_t2750080073 * L_6 = L_5;
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			if (L_6)
			{
				G_B5_0 = L_6;
				G_B5_1 = L_4;
				goto IL_002e;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var);
			U3CU3Ec_t3914568053 * L_7 = ((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_8 = (intptr_t)U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m318392058_RuntimeMethod_var;
			SendOrPostCallback_t2750080073 * L_9 = (SendOrPostCallback_t2750080073 *)il2cpp_codegen_object_new(SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_m1566534627(L_9, L_7, (intptr_t)L_8, /*hidden argument*/NULL);
			SendOrPostCallback_t2750080073 * L_10 = L_9;
			((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_10);
			G_B5_0 = L_10;
			G_B5_1 = G_B4_1;
		}

IL_002e:
		{
			ExceptionDispatchInfo_t3750997369 * L_11 = V_0;
			NullCheck(G_B5_1);
			VirtActionInvoker2< SendOrPostCallback_t2750080073 *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B5_1, G_B5_0, L_11);
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Object)
		Exception_t * L_12 = ___exception0;
		ExceptionDispatchHelper_ThrowAsync_m255798036(NULL /*static, unused*/, L_12, (SynchronizationContext_t2326897723 *)NULL, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}

IL_0041:
	{
		V_1 = (bool)1;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t2326897723 * L_13 = (SynchronizationContext_t2326897723 *)il2cpp_codegen_object_new(SynchronizationContext_t2326897723_il2cpp_TypeInfo_var);
			SynchronizationContext__ctor_m2514243817(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var);
			SendOrPostCallback_t2750080073 * L_14 = ((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
			SendOrPostCallback_t2750080073 * L_15 = L_14;
			G_B10_0 = L_15;
			G_B10_1 = L_13;
			if (L_15)
			{
				G_B11_0 = L_15;
				G_B11_1 = L_13;
				goto IL_0067;
			}
		}

IL_0050:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var);
			U3CU3Ec_t3914568053 * L_16 = ((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_17 = (intptr_t)U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m1291613712_RuntimeMethod_var;
			SendOrPostCallback_t2750080073 * L_18 = (SendOrPostCallback_t2750080073 *)il2cpp_codegen_object_new(SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_m1566534627(L_18, L_16, (intptr_t)L_17, /*hidden argument*/NULL);
			SendOrPostCallback_t2750080073 * L_19 = L_18;
			((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_19);
			G_B11_0 = L_19;
			G_B11_1 = G_B10_1;
		}

IL_0067:
		{
			ExceptionDispatchInfo_t3750997369 * L_20 = V_0;
			NullCheck(G_B11_1);
			VirtActionInvoker2< SendOrPostCallback_t2750080073 *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B11_1, G_B11_0, L_20);
			goto IL_0074;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006f;
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Object)
		V_1 = (bool)0;
		goto IL_0074;
	} // end catch (depth: 1)

IL_0074:
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_007d;
		}
	}
	{
		ExceptionDispatchInfo_t3750997369 * L_22 = V_0;
		NullCheck(L_22);
		ExceptionDispatchInfo_Throw_m2689339678(L_22, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3115982157 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3115982157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3914568053 * L_0 = (U3CU3Ec_t3914568053 *)il2cpp_codegen_object_new(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1030590022(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3914568053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3914568053_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1030590022 (U3CU3Ec_t3914568053 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::<ThrowAsync>b__0_0(System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m318392058 (U3CU3Ec_t3914568053 * __this, RuntimeObject * ___edi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CThrowAsyncU3Eb__0_0_m318392058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___edi0;
		NullCheck(((ExceptionDispatchInfo_t3750997369 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t3750997369_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m2689339678(((ExceptionDispatchInfo_t3750997369 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t3750997369_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::<ThrowAsync>b__0_1(System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m1291613712 (U3CU3Ec_t3914568053 * __this, RuntimeObject * ___edi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m1291613712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___edi0;
		NullCheck(((ExceptionDispatchInfo_t3750997369 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t3750997369_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m2689339678(((ExceptionDispatchInfo_t3750997369 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t3750997369_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::GetResults()
extern "C" IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_GetResults_m1570832325 (TaskToAsyncActionAdapter_t900468660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToAsyncActionAdapter_GetResults_m1570832325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskToAsyncInfoAdapter_4_GetResultsInternal_m1507086869(__this, /*hidden argument*/TaskToAsyncInfoAdapter_4_GetResultsInternal_m1507086869_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::OnCompleted(Windows.Foundation.AsyncActionCompletedHandler,Windows.Foundation.AsyncStatus)
extern "C" IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_OnCompleted_m2310226138 (TaskToAsyncActionAdapter_t900468660 * __this, AsyncActionCompletedHandler_t4142409509 * ___userCompletionHandler0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t4142409509 * L_0 = ___userCompletionHandler0;
		int32_t L_1 = ___asyncStatus1;
		NullCheck(L_0);
		AsyncActionCompletedHandler_Invoke_m694454652(L_0, __this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::Windows.Foundation.IAsyncAction.put_Completed(Windows.Foundation.AsyncActionCompletedHandler)
extern "C" IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_Windows_Foundation_IAsyncAction_put_Completed_m3373888112 (TaskToAsyncActionAdapter_t900468660 * __this, AsyncActionCompletedHandler_t4142409509 * ___handler0, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t4142409509 * L_0 = ___handler0;
		VirtActionInvoker1< AsyncActionCompletedHandler_t4142409509 * >::Invoke(13 /* System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::set_Completed(TCompletedHandler) */, __this, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m1127551074 (RuntimeObject * __this /* static, unused */, CancellationToken_t784455623  ___source0, CancellationTokenSource_t540272775 * ___sink1, Task_t3187275312 * ___concatenationLifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m1127551074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t2813424904  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Action_1_t3252573759 * G_B2_0 = NULL;
	CancellationToken_t784455623 * G_B2_1 = NULL;
	Action_1_t3252573759 * G_B1_0 = NULL;
	CancellationToken_t784455623 * G_B1_1 = NULL;
	Action_2_t1194737946 * G_B4_0 = NULL;
	Task_t3187275312 * G_B4_1 = NULL;
	Action_2_t1194737946 * G_B3_0 = NULL;
	Task_t3187275312 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var);
		Action_1_t3252573759 * L_0 = ((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t3252573759 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var);
		U3CU3Ec_t2427350286 * L_2 = ((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_3 = (intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m1674731349_RuntimeMethod_var;
		Action_1_t3252573759 * L_4 = (Action_1_t3252573759 *)il2cpp_codegen_object_new(Action_1_t3252573759_il2cpp_TypeInfo_var);
		Action_1__ctor_m118522912(L_4, L_2, (intptr_t)L_3, /*hidden argument*/Action_1__ctor_m118522912_RuntimeMethod_var);
		Action_1_t3252573759 * L_5 = L_4;
		((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_t540272775 * L_6 = ___sink1;
		CancellationTokenRegistration_t2813424904  L_7 = CancellationToken_Register_m1967634854((CancellationToken_t784455623 *)G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Task_t3187275312 * L_8 = ___concatenationLifetime2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var);
		Action_2_t1194737946 * L_9 = ((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Action_2_t1194737946 * L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var);
		U3CU3Ec_t2427350286 * L_11 = ((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_12 = (intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3026954753_RuntimeMethod_var;
		Action_2_t1194737946 * L_13 = (Action_2_t1194737946 *)il2cpp_codegen_object_new(Action_2_t1194737946_il2cpp_TypeInfo_var);
		Action_2__ctor_m2721600688(L_13, L_11, (intptr_t)L_12, /*hidden argument*/Action_2__ctor_m2721600688_RuntimeMethod_var);
		Action_2_t1194737946 * L_14 = L_13;
		((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_14);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_t2813424904  L_15 = V_0;
		CancellationTokenRegistration_t2813424904  L_16 = L_15;
		RuntimeObject * L_17 = Box(CancellationTokenRegistration_t2813424904_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_t784455623_il2cpp_TypeInfo_var);
		CancellationToken_t784455623  L_18 = CancellationToken_get_None_m4013051791(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1196198384_il2cpp_TypeInfo_var);
		TaskScheduler_t1196198384 * L_19 = TaskScheduler_get_Default_m1400371958(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Task_ContinueWith_m1818927876(G_B4_1, G_B4_0, L_17, L_18, ((int32_t)524288), L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * WindowsRuntimeSystemExtensions_AsTask_m1421733603 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_AsTask_m1421733603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_t784455623_il2cpp_TypeInfo_var);
		CancellationToken_t784455623  L_1 = CancellationToken_get_None_m4013051791(NULL /*static, unused*/, /*hidden argument*/NULL);
		Task_t3187275312 * L_2 = WindowsRuntimeSystemExtensions_AsTask_m1776607123(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * WindowsRuntimeSystemExtensions_AsTask_m1776607123 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_AsTask_m1776607123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskToAsyncActionAdapter_t900468660 * V_0 = NULL;
	AsyncInfoToTaskBridge_1_t1425581848 * V_1 = NULL;
	Task_t3187275312 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	CancellationToken_t784455623  G_B16_0;
	memset(&G_B16_0, 0, sizeof(G_B16_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeSystemExtensions_AsTask_m1776607123_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = ((TaskToAsyncActionAdapter_t900468660 *)IsInstClass((RuntimeObject*)L_2, TaskToAsyncActionAdapter_t900468660_il2cpp_TypeInfo_var));
		TaskToAsyncActionAdapter_t900468660 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t900468660 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m426417699(L_4, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m426417699_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t900468660 * L_6 = V_0;
		NullCheck(L_6);
		Task_t3187275312 * L_7 = TaskToAsyncInfoAdapter_4_get_Task_m1699314739(L_6, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_Task_m1699314739_RuntimeMethod_var);
		V_2 = L_7;
		Task_t3187275312 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = Task_get_IsCompleted_m1406118445(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		bool L_10 = CancellationToken_get_CanBeCanceled_m145616282((CancellationToken_t784455623 *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		TaskToAsyncActionAdapter_t900468660 * L_11 = V_0;
		NullCheck(L_11);
		CancellationTokenSource_t540272775 * L_12 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4116196857(L_11, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4116196857_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CancellationToken_t784455623  L_13 = ___cancellationToken1;
		TaskToAsyncActionAdapter_t900468660 * L_14 = V_0;
		NullCheck(L_14);
		CancellationTokenSource_t540272775 * L_15 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4116196857(L_14, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m4116196857_RuntimeMethod_var);
		Task_t3187275312 * L_16 = V_2;
		WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m1127551074(NULL /*static, unused*/, L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Task_t3187275312 * L_17 = V_2;
		return L_17;
	}

IL_004f:
	{
		RuntimeObject* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_21 = Task_get_CompletedTask_m459565641(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_21;
	}

IL_0072:
	{
		RuntimeObject* L_22 = ___source0;
		NullCheck(L_22);
		Exception_t * L_23 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t2425795444_il2cpp_TypeInfo_var, L_22);
		Exception_t * L_24 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m708912045(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_25 = Task_FromException_m3324787540(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_0083:
	{
		bool L_26 = CancellationToken_get_IsCancellationRequested_m3655186381((CancellationToken_t784455623 *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		CancellationToken_t784455623  L_27;
		memset(&L_27, 0, sizeof(L_27));
		CancellationToken__ctor_m3515673697((&L_27), (bool)1, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		goto IL_0095;
	}

IL_0094:
	{
		CancellationToken_t784455623  L_28 = ___cancellationToken1;
		G_B16_0 = L_28;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_29 = Task_FromCanceled_m1072597403(NULL /*static, unused*/, G_B16_0, /*hidden argument*/NULL);
		return L_29;
	}

IL_009b:
	{
		CancellationToken_t784455623  L_30 = ___cancellationToken1;
		AsyncInfoToTaskBridge_1_t1425581848 * L_31 = (AsyncInfoToTaskBridge_1_t1425581848 *)il2cpp_codegen_object_new(AsyncInfoToTaskBridge_1_t1425581848_il2cpp_TypeInfo_var);
		AsyncInfoToTaskBridge_1__ctor_m3498705156(L_31, L_30, /*hidden argument*/AsyncInfoToTaskBridge_1__ctor_m3498705156_RuntimeMethod_var);
		V_1 = L_31;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_32 = ___source0;
		AsyncInfoToTaskBridge_1_t1425581848 * L_33 = V_1;
		intptr_t L_34 = (intptr_t)AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m92221766_RuntimeMethod_var;
		AsyncActionCompletedHandler_t4142409509 * L_35 = (AsyncActionCompletedHandler_t4142409509 *)il2cpp_codegen_object_new(AsyncActionCompletedHandler_t4142409509_il2cpp_TypeInfo_var);
		AsyncActionCompletedHandler__ctor_m1781396403(L_35, L_33, (intptr_t)L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< AsyncActionCompletedHandler_t4142409509 * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncAction::put_Completed(Windows.Foundation.AsyncActionCompletedHandler) */, IAsyncAction_t3072713919_il2cpp_TypeInfo_var, L_32, L_35);
		AsyncInfoToTaskBridge_1_t1425581848 * L_36 = V_1;
		RuntimeObject* L_37 = ___source0;
		NullCheck(L_36);
		AsyncInfoToTaskBridge_1_RegisterForCancellation_m3477871226(L_36, L_37, /*hidden argument*/AsyncInfoToTaskBridge_1_RegisterForCancellation_m3477871226_RuntimeMethod_var);
		goto IL_00c0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bd;
		throw e;
	}

CATCH_00bd:
	{ // begin catch(System.Object)
		goto IL_00c0;
	} // end catch (depth: 1)

IL_00c0:
	{
		AsyncInfoToTaskBridge_1_t1425581848 * L_38 = V_1;
		NullCheck(L_38);
		Task_1_t1536492530 * L_39 = TaskCompletionSource_1_get_Task_m2355031486(L_38, /*hidden argument*/TaskCompletionSource_1_get_Task_m2355031486_RuntimeMethod_var);
		return L_39;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m708912045 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m355336584 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m355336584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2427350286 * L_0 = (U3CU3Ec_t2427350286 *)il2cpp_codegen_object_new(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2511835527(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2427350286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2427350286_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2511835527 (U3CU3Ec_t2427350286 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m1674731349 (U3CU3Ec_t2427350286 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m1674731349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((CancellationTokenSource_t540272775 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t540272775_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m781927668(((CancellationTokenSource_t540272775 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t540272775_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3026954753 (U3CU3Ec_t2427350286 * __this, Task_t3187275312 * ____0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3026954753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t2813424904  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_t2813424904 *)((CancellationTokenRegistration_t2813424904 *)UnBox(L_0, CancellationTokenRegistration_t2813424904_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m2624297505((CancellationTokenRegistration_t2813424904 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Point::get_X()
extern "C" IL2CPP_METHOD_ATTR double Point_get_X_m1757330650 (Point_t4164953539 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Point_get_X_m1757330650_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_get_X_m1757330650(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Point::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Point_get_Y_m191246709 (Point_t4164953539 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Point_get_Y_m191246709_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_get_Y_m191246709(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ToString_m1489408190 (Point_t4164953539 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Point_ConvertToString_m2534410555((Point_t4164953539 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* Point_ToString_m1489408190_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_ToString_m1489408190(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m2778073800 (Point_t4164953539 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Point_ConvertToString_m2534410555((Point_t4164953539 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* Point_System_IFormattable_ToString_m2778073800_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_System_IFormattable_ToString_m2778073800(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m2534410555 (Point_t4164953539 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_ConvertToString_m2534410555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1 = TokenizerHelper_GetNumericListSeparator_m3519681033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_t1281789340* L_3 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3881147341);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3881147341);
		StringU5BU5D_t1281789340* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t1281789340* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1716443326);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1716443326);
		StringU5BU5D_t1281789340* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t1281789340* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3452614611);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614611);
		String_t* L_11 = String_Concat_m1809518182(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_13);
		double L_15 = Point_get_X_m1757330650((Point_t4164953539 *)__this, /*hidden argument*/NULL);
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_16);
		double L_18 = Point_get_Y_m191246709((Point_t4164953539 *)__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_m3551144749(NULL /*static, unused*/, L_2, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
extern "C"  String_t* Point_ConvertToString_m2534410555_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_ConvertToString_m2534410555(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
extern "C" IL2CPP_METHOD_ATTR bool Point_op_Equality_m1708123262 (RuntimeObject * __this /* static, unused */, Point_t4164953539  ___point10, Point_t4164953539  ___point21, const RuntimeMethod* method)
{
	{
		double L_0 = Point_get_X_m1757330650((Point_t4164953539 *)(&___point10), /*hidden argument*/NULL);
		double L_1 = Point_get_X_m1757330650((Point_t4164953539 *)(&___point21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2 = Point_get_Y_m191246709((Point_t4164953539 *)(&___point10), /*hidden argument*/NULL);
		double L_3 = Point_get_Y_m191246709((Point_t4164953539 *)(&___point21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Point_Equals_m1617877981 (Point_t4164953539 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_Equals_m1617877981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Point_t4164953539_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		bool L_2 = Point_op_Equality_m1708123262(NULL /*static, unused*/, (*(Point_t4164953539 *)__this), ((*(Point_t4164953539 *)((Point_t4164953539 *)UnBox(L_1, Point_t4164953539_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool Point_Equals_m1617877981_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_Equals_m1617877981(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m1136990496 (Point_t4164953539 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Point_get_X_m1757330650((Point_t4164953539 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Point_get_Y_m191246709((Point_t4164953539 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern "C"  int32_t Point_GetHashCode_m1136990496_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t4164953539 * _thisAdjusted = reinterpret_cast<Point_t4164953539 *>(__this + 1);
	return Point_GetHashCode_m1136990496(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_X_m282139105 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_X_m282139105_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_get_X_m282139105(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Y_m282073569 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_Y_m282073569_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_get_Y_m282073569(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Width_m3194876027 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_Width_m3194876027_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_get_Width_m3194876027(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Height_m2678763970 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_3();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_Height_m2678763970_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_get_Height_m2678763970(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m3978563697 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
extern "C"  bool Rect_get_IsEmpty_m3978563697_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_get_IsEmpty_m3978563697(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ToString_m1103669923 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Rect_ConvertToString_m1475233121((Rect_t2695113487 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* Rect_ToString_m1103669923_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_ToString_m1103669923(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m1814056401 (Rect_t2695113487 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Rect_ConvertToString_m1475233121((Rect_t2695113487 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* Rect_System_IFormattable_ToString_m1814056401_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_System_IFormattable_ToString_m1814056401(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m1475233121 (Rect_t2695113487 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_ConvertToString_m1475233121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0 = Rect_get_IsEmpty_m3978563697((Rect_t2695113487 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral3157912884;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2 = TokenizerHelper_GetNumericListSeparator_m3519681033(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_t1281789340* L_4 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3881147341);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3881147341);
		StringU5BU5D_t1281789340* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1716443326);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1716443326);
		StringU5BU5D_t1281789340* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t1281789340* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1716377790);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1716377790);
		StringU5BU5D_t1281789340* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t1281789340* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1716836542);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1716836542);
		StringU5BU5D_t1281789340* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t1281789340* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3452614611);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3452614611);
		String_t* L_18 = String_Concat_m1809518182(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_19 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		float L_25 = __this->get__x_0();
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_t2843939325* L_28 = L_24;
		float L_29 = __this->get__y_1();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_28;
		float L_33 = __this->get__width_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		ObjectU5BU5D_t2843939325* L_36 = L_32;
		float L_37 = __this->get__height_3();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_39);
		String_t* L_40 = String_Format_m1881875187(NULL /*static, unused*/, L_3, L_18, L_36, /*hidden argument*/NULL);
		return L_40;
	}
}
extern "C"  String_t* Rect_ConvertToString_m1475233121_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_ConvertToString_m1475233121(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3496269849 (RuntimeObject * __this /* static, unused */, Rect_t2695113487  ___rect10, Rect_t2695113487  ___rect21, const RuntimeMethod* method)
{
	{
		double L_0 = Rect_get_X_m282139105((Rect_t2695113487 *)(&___rect10), /*hidden argument*/NULL);
		double L_1 = Rect_get_X_m282139105((Rect_t2695113487 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2 = Rect_get_Y_m282073569((Rect_t2695113487 *)(&___rect10), /*hidden argument*/NULL);
		double L_3 = Rect_get_Y_m282073569((Rect_t2695113487 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4 = Rect_get_Width_m3194876027((Rect_t2695113487 *)(&___rect10), /*hidden argument*/NULL);
		double L_5 = Rect_get_Width_m3194876027((Rect_t2695113487 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6 = Rect_get_Height_m2678763970((Rect_t2695113487 *)(&___rect10), /*hidden argument*/NULL);
		double L_7 = Rect_get_Height_m2678763970((Rect_t2695113487 *)(&___rect21), /*hidden argument*/NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Equals_m2314324014 (Rect_t2695113487 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_Equals_m2314324014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_t2695113487_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		bool L_2 = Rect_op_Equality_m3496269849(NULL /*static, unused*/, (*(Rect_t2695113487 *)__this), ((*(Rect_t2695113487 *)((Rect_t2695113487 *)UnBox(L_1, Rect_t2695113487_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool Rect_Equals_m2314324014_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_Equals_m2314324014(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m1603020085 (Rect_t2695113487 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Rect_get_X_m282139105((Rect_t2695113487 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Rect_get_Y_m282073569((Rect_t2695113487 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		double L_4 = Rect_get_Width_m3194876027((Rect_t2695113487 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		double L_6 = Rect_get_Height_m2678763970((Rect_t2695113487 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
extern "C"  int32_t Rect_GetHashCode_m1603020085_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2695113487 * _thisAdjusted = reinterpret_cast<Rect_t2695113487 *>(__this + 1);
	return Rect_GetHashCode_m1603020085(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Width_m3186228132 (Size_t550917638 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_0();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Size_get_Width_m3186228132_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_t550917638 * _thisAdjusted = reinterpret_cast<Size_t550917638 *>(__this + 1);
	return Size_get_Width_m3186228132(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Size::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Height_m1189908446 (Size_t550917638 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_1();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Size_get_Height_m1189908446_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_t550917638 * _thisAdjusted = reinterpret_cast<Size_t550917638 *>(__this + 1);
	return Size_get_Height_m1189908446(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m2843270629 (Size_t550917638 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = Size_get_Width_m3186228132((Size_t550917638 *)__this, /*hidden argument*/NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
extern "C"  bool Size_get_IsEmpty_m2843270629_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_t550917638 * _thisAdjusted = reinterpret_cast<Size_t550917638 *>(__this + 1);
	return Size_get_IsEmpty_m2843270629(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m1950794187 (Size_t550917638 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_Equals_m1950794187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Size_t550917638_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		bool L_2 = Size_Equals_m3364468834(NULL /*static, unused*/, (*(Size_t550917638 *)__this), ((*(Size_t550917638 *)((Size_t550917638 *)UnBox(L_1, Size_t550917638_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool Size_Equals_m1950794187_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Size_t550917638 * _thisAdjusted = reinterpret_cast<Size_t550917638 *>(__this + 1);
	return Size_Equals_m1950794187(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m1530925289 (Size_t550917638 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m2843270629((Size_t550917638 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1 = Size_get_Width_m3186228132((Size_t550917638 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		double L_3 = Size_get_Height_m1189908446((Size_t550917638 *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Double_GetHashCode_m2295714610((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
extern "C"  int32_t Size_GetHashCode_m1530925289_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_t550917638 * _thisAdjusted = reinterpret_cast<Size_t550917638 *>(__this + 1);
	return Size_GetHashCode_m1530925289(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m3364468834 (RuntimeObject * __this /* static, unused */, Size_t550917638  ___size10, Size_t550917638  ___size21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m2843270629((Size_t550917638 *)(&___size10), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = Size_get_IsEmpty_m2843270629((Size_t550917638 *)(&___size21), /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2 = Size_get_Width_m3186228132((Size_t550917638 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = Size_get_Width_m3186228132((Size_t550917638 *)(&___size21), /*hidden argument*/NULL);
		bool L_4 = Double_Equals_m2309369974((double*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5 = Size_get_Height_m1189908446((Size_t550917638 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_5;
		double L_6 = Size_get_Height_m1189908446((Size_t550917638 *)(&___size21), /*hidden argument*/NULL);
		bool L_7 = Double_Equals_m2309369974((double*)(&V_0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Size_ToString_m401005881 (Size_t550917638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_ToString_m401005881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Size_get_IsEmpty_m2843270629((Size_t550917638 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral3159092532;
	}

IL_000e:
	{
		float L_1 = __this->get__width_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->get__height_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4140064810, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  String_t* Size_ToString_m401005881_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_t550917638 * _thisAdjusted = reinterpret_cast<Size_t550917638 *>(__this + 1);
	return Size_ToString_m401005881(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m3519681033 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_t435877138 * V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t435877138 * L_1 = NumberFormatInfo_GetInstance_m2833078205(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		NumberFormatInfo_t435877138 * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m33502788(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_t435877138 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m33502788(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
