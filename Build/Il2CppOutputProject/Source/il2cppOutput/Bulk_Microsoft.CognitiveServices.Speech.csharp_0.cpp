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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t1638830011;
// Microsoft.CognitiveServices.Speech.Audio.AudioInputStream
struct AudioInputStream_t896891398;
// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat
struct AudioStreamFormat_t3659540067;
// Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream
struct PullAudioInputStream_t1876817371;
// Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback
struct PullAudioInputStreamCallback_t932724598;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t2773841337;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_t2754546357;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_t566698942;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_t575154845;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t2613355731;
// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate
struct PullAudioStreamCloseDelegate_t1321591398;
// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate
struct PullAudioStreamGetPropertyDelegate_t2901781538;
// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate
struct PullAudioStreamReadDelegate_t3274582108;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t2074362391;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_t65000186;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_t1307607286;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t1013610727;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_t1073947482;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t1990574192;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t2932258242;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_t192093705;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t1497552300;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_t1198058925;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_t203626519;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t1052549996;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.ApplicationException
struct ApplicationException_t2339761290;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventArgs
struct EventArgs_t3591816995;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t3526734015;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_t856417675;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t3716679029;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_t3417185654;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IDisposable
struct IDisposable_t3640265483;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.ObjectDisposedException
struct ObjectDisposedException_t21392786;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t3273388951;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* ApplicationException_t2339761290_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioConfig_t1638830011_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioStreamFormat_t3659540067_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationDetails_t2773841337_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationErrorCode_t3020849013_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationReason_t1799596189_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t3417185654_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t3526734015_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t3716679029_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t856417675_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern RuntimeClass* GetRecognizerFromConfigDelegate_t1990574192_il2cpp_TypeInfo_var;
extern RuntimeClass* GetResultDelegate_t2074362391_il2cpp_TypeInfo_var;
extern RuntimeClass* HandleRelease_t566698942_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InteropSafeHandle_t575154845_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectDisposedException_t21392786_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyCollection_t65000186_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyId_t1072913110_il2cpp_TypeInfo_var;
extern RuntimeClass* PullAudioInputStream_t1876817371_il2cpp_TypeInfo_var;
extern RuntimeClass* PullAudioStreamCloseDelegate_t1321591398_il2cpp_TypeInfo_var;
extern RuntimeClass* PullAudioStreamGetPropertyDelegate_t2901781538_il2cpp_TypeInfo_var;
extern RuntimeClass* PullAudioStreamReadDelegate_t3274582108_il2cpp_TypeInfo_var;
extern RuntimeClass* RecognitionEventArgs_t1307607286_il2cpp_TypeInfo_var;
extern RuntimeClass* ResultReason_t1280999872_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SessionEventArgs_t2932258242_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechConfig_t192093705_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechRecognitionCanceledEventArgs_t1497552300_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechRecognitionEventArgs_t1198058925_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechRecognitionResult_t203626519_il2cpp_TypeInfo_var;
extern RuntimeClass* SpxError_t2305185238_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t3187275312_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1470076474;
extern String_t* _stringLiteral1549429225;
extern String_t* _stringLiteral1920023169;
extern String_t* _stringLiteral2011430506;
extern String_t* _stringLiteral2098760179;
extern String_t* _stringLiteral2412971972;
extern String_t* _stringLiteral2736488837;
extern String_t* _stringLiteral3140934673;
extern String_t* _stringLiteral3172266850;
extern String_t* _stringLiteral3450320861;
extern String_t* _stringLiteral3452614648;
extern String_t* _stringLiteral3543177464;
extern String_t* _stringLiteral3725715844;
extern String_t* _stringLiteral4167754693;
extern String_t* _stringLiteral434917173;
extern String_t* _stringLiteral482389575;
extern String_t* _stringLiteral612528862;
extern String_t* _stringLiteral708836215;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral771283995;
extern String_t* _stringLiteral840735891;
extern String_t* _stringLiteral885456881;
extern const RuntimeMethod* Array_Empty_TisRuntimeObject_m4268358689_RuntimeMethod_var;
extern const RuntimeMethod* AudioConfig_audio_config_release_m1913113031_RuntimeMethod_var;
extern const RuntimeMethod* AudioInputStream_audio_stream_release_m3829443659_RuntimeMethod_var;
extern const RuntimeMethod* AudioStreamFormat_audio_stream_format_release_m3483132923_RuntimeMethod_var;
extern const RuntimeMethod* EventArgs_recognizer_event_handle_release_m1791569572_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1840075265_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1931382688_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m2044477451_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m4115220418_RuntimeMethod_var;
extern const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210_RuntimeMethod_var;
extern const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719_RuntimeMethod_var;
extern const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098_RuntimeMethod_var;
extern const RuntimeMethod* PropertyCollection_property_bag_release_m143452844_RuntimeMethod_var;
extern const RuntimeMethod* PullAudioInputStream_StreamCloseCallback_m1720207294_RuntimeMethod_var;
extern const RuntimeMethod* PullAudioInputStream_StreamGetPropertyCallback_m1147121905_RuntimeMethod_var;
extern const RuntimeMethod* PullAudioInputStream_StreamReadCallback_m161976796_RuntimeMethod_var;
extern const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_m2775958239_RuntimeMethod_var;
extern const RuntimeMethod* RecognitionResult_result_get_result_id_m4248376878_RuntimeMethod_var;
extern const RuntimeMethod* RecognitionResult_result_get_text_m139188767_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_Dispose_m2251424391_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_m830785997_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_m2835842845_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_m3369611404_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m657974116_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m4185769789_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FromConfig_m1268427302_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_StartContinuousRecognition_m1742708695_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_StopContinuousRecognition_m3675090192_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_recognizer_handle_release_m230591112_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_m3332958148_RuntimeMethod_var;
extern const RuntimeMethod* SpeechConfig_speech_config_release_m3942305242_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m1862259829_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m2213496941_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_m1805398993_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m3293414074_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m673803816_RuntimeMethod_var;
extern const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m1636052394_RuntimeMethod_var;
extern const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m2587875632_RuntimeMethod_var;
extern const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_m4145114651_RuntimeMethod_var;
extern const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_m712700478_RuntimeMethod_var;
extern const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_m3666434662_RuntimeMethod_var;
extern const uint32_t AudioConfig_Dispose_m276546015_MetadataUsageId;
extern const uint32_t AudioConfig_FromStreamInput_m2545168562_MetadataUsageId;
extern const uint32_t AudioConfig__ctor_m1404516590_MetadataUsageId;
extern const uint32_t AudioInputStream_Dispose_m54464965_MetadataUsageId;
extern const uint32_t AudioInputStream__ctor_m1400687888_MetadataUsageId;
extern const uint32_t AudioStreamFormat_Dispose_m1058407332_MetadataUsageId;
extern const uint32_t AudioStreamFormat_GetDefaultInputFormat_m3181667183_MetadataUsageId;
extern const uint32_t AudioStreamFormat_GetWaveFormatPCM_m314417619_MetadataUsageId;
extern const uint32_t AudioStreamFormat__ctor_m1074278574_MetadataUsageId;
extern const uint32_t CallbackFunctionDelegate_BeginInvoke_m2499651188_MetadataUsageId;
extern const uint32_t CancellationDetails_FromResult_m4248171642_MetadataUsageId;
extern const uint32_t CancellationDetails_ToString_m2447918695_MetadataUsageId;
extern const uint32_t CancellationDetails__ctor_m3331148975_MetadataUsageId;
extern const uint32_t GetRecognizerFromConfigDelegate_BeginInvoke_m1342478974_MetadataUsageId;
extern const uint32_t GetResultDelegate_BeginInvoke_m1278833283_MetadataUsageId;
extern const uint32_t HandleRelease_BeginInvoke_m2584034124_MetadataUsageId;
extern const uint32_t InteropSafeHandle_ReleaseHandle_m28598792_MetadataUsageId;
extern const uint32_t InteropSafeHandle__ctor_m460085502_MetadataUsageId;
extern const uint32_t InteropSafeHandle_get_IsInvalid_m1450695761_MetadataUsageId;
extern const uint32_t PropertyCollection_GetPropertyString_m3841868362_MetadataUsageId;
extern const uint32_t PropertyCollection_GetProperty_m774443618_MetadataUsageId;
extern const uint32_t PropertyCollection_SetProperty_m1236456671_MetadataUsageId;
extern const uint32_t PropertyCollection_SetProperty_m1596571729_MetadataUsageId;
extern const uint32_t PropertyCollection__ctor_m2224112335_MetadataUsageId;
extern const uint32_t PullAudioInputStreamCallback_Dispose_m2001872325_MetadataUsageId;
extern const uint32_t PullAudioInputStreamCallback_GetProperty_m2283422249_MetadataUsageId;
extern const uint32_t PullAudioInputStream_Create_m807815350_MetadataUsageId;
extern const uint32_t PullAudioInputStream_StreamCloseCallback_m1720207294_MetadataUsageId;
extern const uint32_t PullAudioInputStream_StreamGetPropertyCallback_m1147121905_MetadataUsageId;
extern const uint32_t PullAudioInputStream_StreamReadCallback_m161976796_MetadataUsageId;
extern const uint32_t PullAudioInputStream__ctor_m1572250482_MetadataUsageId;
extern const uint32_t PullAudioInputStream__ctor_m3337974931_MetadataUsageId;
extern const uint32_t PullAudioStreamCloseDelegate_BeginInvoke_m4092767427_MetadataUsageId;
extern const uint32_t PullAudioStreamGetPropertyDelegate_BeginInvoke_m3393088630_MetadataUsageId;
extern const uint32_t PullAudioStreamReadDelegate_BeginInvoke_m3884205490_MetadataUsageId;
extern const uint32_t RecognitionEventArgs_ToString_m3530924907_MetadataUsageId;
extern const uint32_t RecognitionResult_ToString_m2698709287_MetadataUsageId;
extern const uint32_t RecognitionResult__ctor_m782105062_MetadataUsageId;
extern const uint32_t Recognizer_Dispose_m2251424391_MetadataUsageId;
extern const uint32_t Recognizer_DoAsyncRecognitionAction_m830785997_MetadataUsageId;
extern const uint32_t Recognizer_FireEvent_SetSessionStarted_m2835842845_MetadataUsageId;
extern const uint32_t Recognizer_FireEvent_SetSessionStopped_m3369611404_MetadataUsageId;
extern const uint32_t Recognizer_FireEvent_SpeechEndDetected_m657974116_MetadataUsageId;
extern const uint32_t Recognizer_FireEvent_SpeechStartDetected_m4185769789_MetadataUsageId;
extern const uint32_t Recognizer_FromConfig_m1268427302_MetadataUsageId;
extern const uint32_t Recognizer_StartContinuousRecognition_m1742708695_MetadataUsageId;
extern const uint32_t Recognizer_StopContinuousRecognition_m3675090192_MetadataUsageId;
extern const uint32_t Recognizer__ctor_m3136998617_MetadataUsageId;
extern const uint32_t Recognizer_add__SessionStarted_m1740178303_MetadataUsageId;
extern const uint32_t Recognizer_add__SessionStopped_m1345392279_MetadataUsageId;
extern const uint32_t Recognizer_add__SpeechEndDetected_m30759701_MetadataUsageId;
extern const uint32_t Recognizer_add__SpeechStartDetected_m2266112665_MetadataUsageId;
extern const uint32_t Recognizer_remove_SessionStarted_m4059676082_MetadataUsageId;
extern const uint32_t Recognizer_remove_SessionStopped_m2467473832_MetadataUsageId;
extern const uint32_t Recognizer_remove_SpeechEndDetected_m569654298_MetadataUsageId;
extern const uint32_t Recognizer_remove_SpeechStartDetected_m828765200_MetadataUsageId;
extern const uint32_t Recognizer_remove__SessionStarted_m2352984339_MetadataUsageId;
extern const uint32_t Recognizer_remove__SessionStopped_m1055597937_MetadataUsageId;
extern const uint32_t Recognizer_remove__SpeechEndDetected_m2224689410_MetadataUsageId;
extern const uint32_t Recognizer_remove__SpeechStartDetected_m3835745858_MetadataUsageId;
extern const uint32_t SessionEventArgs_ToString_m3537178607_MetadataUsageId;
extern const uint32_t SessionEventArgs__ctor_m3263905054_MetadataUsageId;
extern const uint32_t SpeechConfig_FromSubscription_m70258777_MetadataUsageId;
extern const uint32_t SpeechConfig__ctor_m1803775549_MetadataUsageId;
extern const uint32_t SpeechRecognitionCanceledEventArgs_ToString_m3725149701_MetadataUsageId;
extern const uint32_t SpeechRecognitionEventArgs_ToString_m2943822769_MetadataUsageId;
extern const uint32_t SpeechRecognitionEventArgs__ctor_m2593027836_MetadataUsageId;
extern const uint32_t SpeechRecognizer_Dispose_m4171133710_MetadataUsageId;
extern const uint32_t SpeechRecognizer_FireEvent_Canceled_m1862259829_MetadataUsageId;
extern const uint32_t SpeechRecognizer_FireEvent_Recognized_m2213496941_MetadataUsageId;
extern const uint32_t SpeechRecognizer_FireEvent_Recognizing_m1805398993_MetadataUsageId;
extern const uint32_t SpeechRecognizer_StartContinuousRecognitionAsync_m123387705_MetadataUsageId;
extern const uint32_t SpeechRecognizer_StopContinuousRecognitionAsync_m3752704214_MetadataUsageId;
extern const uint32_t SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m3293414074_MetadataUsageId;
extern const uint32_t SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m673803816_MetadataUsageId;
extern const uint32_t SpeechRecognizer__ctor_m29177740_MetadataUsageId;
extern const uint32_t SpeechRecognizer__ctor_m641062656_MetadataUsageId;
extern const uint32_t SpeechRecognizer_add__Canceled_m3085834569_MetadataUsageId;
extern const uint32_t SpeechRecognizer_add__Recognized_m1885599521_MetadataUsageId;
extern const uint32_t SpeechRecognizer_add__Recognizing_m76113044_MetadataUsageId;
extern const uint32_t SpeechRecognizer_remove_Canceled_m2270168100_MetadataUsageId;
extern const uint32_t SpeechRecognizer_remove_Recognized_m504196448_MetadataUsageId;
extern const uint32_t SpeechRecognizer_remove_Recognizing_m1311914079_MetadataUsageId;
extern const uint32_t SpeechRecognizer_remove__Canceled_m3410961589_MetadataUsageId;
extern const uint32_t SpeechRecognizer_remove__Recognized_m734168419_MetadataUsageId;
extern const uint32_t SpeechRecognizer_remove__Recognizing_m2863571761_MetadataUsageId;
extern const uint32_t SpxError_GetErrorCode_m2790175200_MetadataUsageId;
extern const uint32_t SpxError_GetMessage_m4158136712_MetadataUsageId;
extern const uint32_t SpxError_Release_m1860549285_MetadataUsageId;
extern const uint32_t SpxError__cctor_m2956493158_MetadataUsageId;
extern const uint32_t SpxExceptionThrower_LogErrorIfFail_m2791746676_MetadataUsageId;
extern const uint32_t SpxExceptionThrower_LogError_m3105728682_MetadataUsageId;
extern const uint32_t SpxExceptionThrower_ThrowIfFail_m1636052394_MetadataUsageId;
extern const uint32_t SpxExceptionThrower_ThrowIfFail_m2587875632_MetadataUsageId;
extern const uint32_t SpxExceptionThrower_ThrowIfNull_m4145114651_MetadataUsageId;
extern const uint32_t SpxFactory_GetDataFromHandleUsingDelegate_m1775810571_MetadataUsageId;
extern const uint32_t Utf8StringMarshaler_MarshalManagedToNative_m1836281341_MetadataUsageId;
extern const uint32_t Utf8StringMarshaler_MarshalNativeToManaged_m3666434662_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct DelegateU5BU5D_t1703627840;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745571_H
#define U3CMODULEU3E_T692745571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745571 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745571_H
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
#ifndef AUDIOCONFIG_T1638830011_H
#define AUDIOCONFIG_T1638830011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct  AudioConfig_t1638830011  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_t575154845 * ___configHandle_3;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(AudioConfig_t1638830011, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_streamKeepAlive_1() { return static_cast<int32_t>(offsetof(AudioConfig_t1638830011, ___streamKeepAlive_1)); }
	inline RuntimeObject* get_streamKeepAlive_1() const { return ___streamKeepAlive_1; }
	inline RuntimeObject** get_address_of_streamKeepAlive_1() { return &___streamKeepAlive_1; }
	inline void set_streamKeepAlive_1(RuntimeObject* value)
	{
		___streamKeepAlive_1 = value;
		Il2CppCodeGenWriteBarrier((&___streamKeepAlive_1), value);
	}

	inline static int32_t get_offset_of_disposeStream_2() { return static_cast<int32_t>(offsetof(AudioConfig_t1638830011, ___disposeStream_2)); }
	inline bool get_disposeStream_2() const { return ___disposeStream_2; }
	inline bool* get_address_of_disposeStream_2() { return &___disposeStream_2; }
	inline void set_disposeStream_2(bool value)
	{
		___disposeStream_2 = value;
	}

	inline static int32_t get_offset_of_configHandle_3() { return static_cast<int32_t>(offsetof(AudioConfig_t1638830011, ___configHandle_3)); }
	inline InteropSafeHandle_t575154845 * get_configHandle_3() const { return ___configHandle_3; }
	inline InteropSafeHandle_t575154845 ** get_address_of_configHandle_3() { return &___configHandle_3; }
	inline void set_configHandle_3(InteropSafeHandle_t575154845 * value)
	{
		___configHandle_3 = value;
		Il2CppCodeGenWriteBarrier((&___configHandle_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIG_T1638830011_H
#ifndef AUDIOINPUTSTREAM_T896891398_H
#define AUDIOINPUTSTREAM_T896891398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Audio.AudioInputStream
struct  AudioInputStream_t896891398  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::isDisposing
	bool ___isDisposing_0;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::disposed
	bool ___disposed_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::<StreamHandle>k__BackingField
	InteropSafeHandle_t575154845 * ___U3CStreamHandleU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_isDisposing_0() { return static_cast<int32_t>(offsetof(AudioInputStream_t896891398, ___isDisposing_0)); }
	inline bool get_isDisposing_0() const { return ___isDisposing_0; }
	inline bool* get_address_of_isDisposing_0() { return &___isDisposing_0; }
	inline void set_isDisposing_0(bool value)
	{
		___isDisposing_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(AudioInputStream_t896891398, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_U3CStreamHandleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AudioInputStream_t896891398, ___U3CStreamHandleU3Ek__BackingField_2)); }
	inline InteropSafeHandle_t575154845 * get_U3CStreamHandleU3Ek__BackingField_2() const { return ___U3CStreamHandleU3Ek__BackingField_2; }
	inline InteropSafeHandle_t575154845 ** get_address_of_U3CStreamHandleU3Ek__BackingField_2() { return &___U3CStreamHandleU3Ek__BackingField_2; }
	inline void set_U3CStreamHandleU3Ek__BackingField_2(InteropSafeHandle_t575154845 * value)
	{
		___U3CStreamHandleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStreamHandleU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOINPUTSTREAM_T896891398_H
#ifndef AUDIOSTREAMFORMAT_T3659540067_H
#define AUDIOSTREAMFORMAT_T3659540067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat
struct  AudioStreamFormat_t3659540067  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::disposed
	bool ___disposed_0;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::<FormatHandle>k__BackingField
	InteropSafeHandle_t575154845 * ___U3CFormatHandleU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(AudioStreamFormat_t3659540067, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_U3CFormatHandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioStreamFormat_t3659540067, ___U3CFormatHandleU3Ek__BackingField_1)); }
	inline InteropSafeHandle_t575154845 * get_U3CFormatHandleU3Ek__BackingField_1() const { return ___U3CFormatHandleU3Ek__BackingField_1; }
	inline InteropSafeHandle_t575154845 ** get_address_of_U3CFormatHandleU3Ek__BackingField_1() { return &___U3CFormatHandleU3Ek__BackingField_1; }
	inline void set_U3CFormatHandleU3Ek__BackingField_1(InteropSafeHandle_t575154845 * value)
	{
		___U3CFormatHandleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFormatHandleU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSTREAMFORMAT_T3659540067_H
#ifndef PULLAUDIOINPUTSTREAMCALLBACK_T932724598_H
#define PULLAUDIOINPUTSTREAMCALLBACK_T932724598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback
struct  PullAudioInputStreamCallback_t932724598  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::disposed
	bool ___disposed_0;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(PullAudioInputStreamCallback_t932724598, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PULLAUDIOINPUTSTREAMCALLBACK_T932724598_H
#ifndef AUDIOCONFIG_T2494990795_H
#define AUDIOCONFIG_T2494990795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.AudioConfig
struct  AudioConfig_t2494990795  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIG_T2494990795_H
#ifndef AUDIOINPUTSTREAM_T1288236083_H
#define AUDIOINPUTSTREAM_T1288236083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.AudioInputStream
struct  AudioInputStream_t1288236083  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOINPUTSTREAM_T1288236083_H
#ifndef AUDIOSTREAMFORMAT_T1271286473_H
#define AUDIOSTREAMFORMAT_T1271286473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.AudioStreamFormat
struct  AudioStreamFormat_t1271286473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSTREAMFORMAT_T1271286473_H
#ifndef CANCELLATIONDETAILS_T94361607_H
#define CANCELLATIONDETAILS_T94361607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct  CancellationDetails_t94361607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELLATIONDETAILS_T94361607_H
#ifndef EVENTARGS_T2817343108_H
#define EVENTARGS_T2817343108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct  EventArgs_t2817343108  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2817343108_H
#ifndef PROPERTYCOLLECTION_T2779472917_H
#define PROPERTYCOLLECTION_T2779472917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct  PropertyCollection_t2779472917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T2779472917_H
#ifndef PULLAUDIOINPUTSTREAM_T2643966952_H
#define PULLAUDIOINPUTSTREAM_T2643966952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream
struct  PullAudioInputStream_t2643966952  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PULLAUDIOINPUTSTREAM_T2643966952_H
#ifndef RECOGNITIONRESULT_T3311825861_H
#define RECOGNITIONRESULT_T3311825861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct  RecognitionResult_t3311825861  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONRESULT_T3311825861_H
#ifndef RECOGNIZER_T1735341063_H
#define RECOGNIZER_T1735341063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct  Recognizer_t1735341063  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNIZER_T1735341063_H
#ifndef SPEECHCONFIG_T506462128_H
#define SPEECHCONFIG_T506462128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct  SpeechConfig_t506462128  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHCONFIG_T506462128_H
#ifndef SPXEXCEPTIONTHROWER_T2417041861_H
#define SPXEXCEPTIONTHROWER_T2417041861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct  SpxExceptionThrower_t2417041861  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPXEXCEPTIONTHROWER_T2417041861_H
#ifndef SPXFACTORY_T3092440281_H
#define SPXFACTORY_T3092440281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct  SpxFactory_t3092440281  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPXFACTORY_T3092440281_H
#ifndef UTF8STRINGMARSHALER_T1380989917_H
#define UTF8STRINGMARSHALER_T1380989917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct  Utf8StringMarshaler_t1380989917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8STRINGMARSHALER_T1380989917_H
#ifndef PROPERTYCOLLECTION_T65000186_H
#define PROPERTYCOLLECTION_T65000186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.PropertyCollection
struct  PropertyCollection_t65000186  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_t575154845 * ___propbagHandle_0;

public:
	inline static int32_t get_offset_of_propbagHandle_0() { return static_cast<int32_t>(offsetof(PropertyCollection_t65000186, ___propbagHandle_0)); }
	inline InteropSafeHandle_t575154845 * get_propbagHandle_0() const { return ___propbagHandle_0; }
	inline InteropSafeHandle_t575154845 ** get_address_of_propbagHandle_0() { return &___propbagHandle_0; }
	inline void set_propbagHandle_0(InteropSafeHandle_t575154845 * value)
	{
		___propbagHandle_0 = value;
		Il2CppCodeGenWriteBarrier((&___propbagHandle_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T65000186_H
#ifndef SPEECHCONFIG_T192093705_H
#define SPEECHCONFIG_T192093705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.SpeechConfig
struct  SpeechConfig_t192093705  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_t575154845 * ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_t65000186 * ___progBag_1;

public:
	inline static int32_t get_offset_of_configHandle_0() { return static_cast<int32_t>(offsetof(SpeechConfig_t192093705, ___configHandle_0)); }
	inline InteropSafeHandle_t575154845 * get_configHandle_0() const { return ___configHandle_0; }
	inline InteropSafeHandle_t575154845 ** get_address_of_configHandle_0() { return &___configHandle_0; }
	inline void set_configHandle_0(InteropSafeHandle_t575154845 * value)
	{
		___configHandle_0 = value;
		Il2CppCodeGenWriteBarrier((&___configHandle_0), value);
	}

	inline static int32_t get_offset_of_progBag_1() { return static_cast<int32_t>(offsetof(SpeechConfig_t192093705, ___progBag_1)); }
	inline PropertyCollection_t65000186 * get_progBag_1() const { return ___progBag_1; }
	inline PropertyCollection_t65000186 ** get_address_of_progBag_1() { return &___progBag_1; }
	inline void set_progBag_1(PropertyCollection_t65000186 * value)
	{
		___progBag_1 = value;
		Il2CppCodeGenWriteBarrier((&___progBag_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHCONFIG_T192093705_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_56)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_56), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_59)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_59), value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_60)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_60), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_61), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
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
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T2613355731_H
#define MONOPINVOKECALLBACKATTRIBUTE_T2613355731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t2613355731  : public Attribute_t861562559
{
public:
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t2613355731, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T2613355731_H
#ifndef SESSIONEVENTARGS_T2932258242_H
#define SESSIONEVENTARGS_T2932258242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct  SessionEventArgs_t2932258242  : public EventArgs_t3591816995
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_t575154845 * ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_eventHandle_1() { return static_cast<int32_t>(offsetof(SessionEventArgs_t2932258242, ___eventHandle_1)); }
	inline InteropSafeHandle_t575154845 * get_eventHandle_1() const { return ___eventHandle_1; }
	inline InteropSafeHandle_t575154845 ** get_address_of_eventHandle_1() { return &___eventHandle_1; }
	inline void set_eventHandle_1(InteropSafeHandle_t575154845 * value)
	{
		___eventHandle_1 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandle_1), value);
	}

	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SessionEventArgs_t2932258242, ___U3CSessionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CSessionIdU3Ek__BackingField_4() const { return ___U3CSessionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSessionIdU3Ek__BackingField_4() { return &___U3CSessionIdU3Ek__BackingField_4; }
	inline void set_U3CSessionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CSessionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSessionIdU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONEVENTARGS_T2932258242_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
#ifndef PULLAUDIOINPUTSTREAM_T1876817371_H
#define PULLAUDIOINPUTSTREAM_T1876817371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream
struct  PullAudioInputStream_t1876817371  : public AudioInputStream_t896891398
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::disposed
	bool ___disposed_3;
	// Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::callback
	PullAudioInputStreamCallback_t932724598 * ___callback_4;
	// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::streamReadDelegate
	PullAudioStreamReadDelegate_t3274582108 * ___streamReadDelegate_5;
	// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::streamCloseDelegate
	PullAudioStreamCloseDelegate_t1321591398 * ___streamCloseDelegate_6;
	// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::streamGetPropertyDelegate
	PullAudioStreamGetPropertyDelegate_t2901781538 * ___streamGetPropertyDelegate_7;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::gch
	GCHandle_t3351438187  ___gch_8;

public:
	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(PullAudioInputStream_t1876817371, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(PullAudioInputStream_t1876817371, ___callback_4)); }
	inline PullAudioInputStreamCallback_t932724598 * get_callback_4() const { return ___callback_4; }
	inline PullAudioInputStreamCallback_t932724598 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(PullAudioInputStreamCallback_t932724598 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((&___callback_4), value);
	}

	inline static int32_t get_offset_of_streamReadDelegate_5() { return static_cast<int32_t>(offsetof(PullAudioInputStream_t1876817371, ___streamReadDelegate_5)); }
	inline PullAudioStreamReadDelegate_t3274582108 * get_streamReadDelegate_5() const { return ___streamReadDelegate_5; }
	inline PullAudioStreamReadDelegate_t3274582108 ** get_address_of_streamReadDelegate_5() { return &___streamReadDelegate_5; }
	inline void set_streamReadDelegate_5(PullAudioStreamReadDelegate_t3274582108 * value)
	{
		___streamReadDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&___streamReadDelegate_5), value);
	}

	inline static int32_t get_offset_of_streamCloseDelegate_6() { return static_cast<int32_t>(offsetof(PullAudioInputStream_t1876817371, ___streamCloseDelegate_6)); }
	inline PullAudioStreamCloseDelegate_t1321591398 * get_streamCloseDelegate_6() const { return ___streamCloseDelegate_6; }
	inline PullAudioStreamCloseDelegate_t1321591398 ** get_address_of_streamCloseDelegate_6() { return &___streamCloseDelegate_6; }
	inline void set_streamCloseDelegate_6(PullAudioStreamCloseDelegate_t1321591398 * value)
	{
		___streamCloseDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&___streamCloseDelegate_6), value);
	}

	inline static int32_t get_offset_of_streamGetPropertyDelegate_7() { return static_cast<int32_t>(offsetof(PullAudioInputStream_t1876817371, ___streamGetPropertyDelegate_7)); }
	inline PullAudioStreamGetPropertyDelegate_t2901781538 * get_streamGetPropertyDelegate_7() const { return ___streamGetPropertyDelegate_7; }
	inline PullAudioStreamGetPropertyDelegate_t2901781538 ** get_address_of_streamGetPropertyDelegate_7() { return &___streamGetPropertyDelegate_7; }
	inline void set_streamGetPropertyDelegate_7(PullAudioStreamGetPropertyDelegate_t2901781538 * value)
	{
		___streamGetPropertyDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&___streamGetPropertyDelegate_7), value);
	}

	inline static int32_t get_offset_of_gch_8() { return static_cast<int32_t>(offsetof(PullAudioInputStream_t1876817371, ___gch_8)); }
	inline GCHandle_t3351438187  get_gch_8() const { return ___gch_8; }
	inline GCHandle_t3351438187 * get_address_of_gch_8() { return &___gch_8; }
	inline void set_gch_8(GCHandle_t3351438187  value)
	{
		___gch_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PULLAUDIOINPUTSTREAM_T1876817371_H
#ifndef CANCELLATIONERRORCODE_T3020849013_H
#define CANCELLATIONERRORCODE_T3020849013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.CancellationErrorCode
struct  CancellationErrorCode_t3020849013 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationErrorCode_t3020849013, ___value___2)); }
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
#endif // CANCELLATIONERRORCODE_T3020849013_H
#ifndef CANCELLATIONREASON_T1799596189_H
#define CANCELLATIONREASON_T1799596189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.CancellationReason
struct  CancellationReason_t1799596189 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationReason_t1799596189, ___value___2)); }
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
#endif // CANCELLATIONREASON_T1799596189_H
#ifndef PROPERTYID_T1072913110_H
#define PROPERTYID_T1072913110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.PropertyId
struct  PropertyId_t1072913110 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.Internal.PropertyId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyId_t1072913110, ___value___2)); }
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
#endif // PROPERTYID_T1072913110_H
#ifndef SPXERROR_T2305185238_H
#define SPXERROR_T2305185238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct  SpxError_t2305185238  : public RuntimeObject
{
public:

public:
};

struct SpxError_t2305185238_StaticFields
{
public:
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::BufferTooSmall
	intptr_t ___BufferTooSmall_0;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::RuntimeError
	intptr_t ___RuntimeError_1;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidHandle
	intptr_t ___InvalidHandle_2;

public:
	inline static int32_t get_offset_of_BufferTooSmall_0() { return static_cast<int32_t>(offsetof(SpxError_t2305185238_StaticFields, ___BufferTooSmall_0)); }
	inline intptr_t get_BufferTooSmall_0() const { return ___BufferTooSmall_0; }
	inline intptr_t* get_address_of_BufferTooSmall_0() { return &___BufferTooSmall_0; }
	inline void set_BufferTooSmall_0(intptr_t value)
	{
		___BufferTooSmall_0 = value;
	}

	inline static int32_t get_offset_of_RuntimeError_1() { return static_cast<int32_t>(offsetof(SpxError_t2305185238_StaticFields, ___RuntimeError_1)); }
	inline intptr_t get_RuntimeError_1() const { return ___RuntimeError_1; }
	inline intptr_t* get_address_of_RuntimeError_1() { return &___RuntimeError_1; }
	inline void set_RuntimeError_1(intptr_t value)
	{
		___RuntimeError_1 = value;
	}

	inline static int32_t get_offset_of_InvalidHandle_2() { return static_cast<int32_t>(offsetof(SpxError_t2305185238_StaticFields, ___InvalidHandle_2)); }
	inline intptr_t get_InvalidHandle_2() const { return ___InvalidHandle_2; }
	inline intptr_t* get_address_of_InvalidHandle_2() { return &___InvalidHandle_2; }
	inline void set_InvalidHandle_2(intptr_t value)
	{
		___InvalidHandle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPXERROR_T2305185238_H
#ifndef PROPERTYID_T834957853_H
#define PROPERTYID_T834957853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.PropertyId
struct  PropertyId_t834957853 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.PropertyId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyId_t834957853, ___value___2)); }
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
#endif // PROPERTYID_T834957853_H
#ifndef RECOGNITIONEVENTARGS_T1307607286_H
#define RECOGNITIONEVENTARGS_T1307607286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct  RecognitionEventArgs_t1307607286  : public SessionEventArgs_t2932258242
{
public:
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RecognitionEventArgs_t1307607286, ___U3COffsetU3Ek__BackingField_5)); }
	inline uint64_t get_U3COffsetU3Ek__BackingField_5() const { return ___U3COffsetU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3COffsetU3Ek__BackingField_5() { return &___U3COffsetU3Ek__BackingField_5; }
	inline void set_U3COffsetU3Ek__BackingField_5(uint64_t value)
	{
		___U3COffsetU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONEVENTARGS_T1307607286_H
#ifndef RECOGNIZER_T1073947482_H
#define RECOGNIZER_T1073947482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Recognizer
struct  Recognizer_t1073947482  : public RuntimeObject
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_t856417675 * ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_t856417675 * ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t3526734015 * ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t3526734015 * ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_t575154845 * ___recoHandle_4;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartContinuousHandle
	intptr_t ___asyncStartContinuousHandle_5;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopContinuousHandle
	intptr_t ___asyncStopContinuousHandle_6;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartKeywordHandle
	intptr_t ___asyncStartKeywordHandle_7;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopKeywordHandle
	intptr_t ___asyncStopKeywordHandle_8;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechStartDetectedCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___speechStartDetectedCallbackDelegate_9;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___speechEndDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___sessionStartedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___sessionStoppedCallbackDelegate_12;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_t3351438187  ___gch_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_15;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject * ___recognizerLock_16;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_17;

public:
	inline static int32_t get_offset_of__SessionStarted_0() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ____SessionStarted_0)); }
	inline EventHandler_1_t856417675 * get__SessionStarted_0() const { return ____SessionStarted_0; }
	inline EventHandler_1_t856417675 ** get_address_of__SessionStarted_0() { return &____SessionStarted_0; }
	inline void set__SessionStarted_0(EventHandler_1_t856417675 * value)
	{
		____SessionStarted_0 = value;
		Il2CppCodeGenWriteBarrier((&____SessionStarted_0), value);
	}

	inline static int32_t get_offset_of__SessionStopped_1() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ____SessionStopped_1)); }
	inline EventHandler_1_t856417675 * get__SessionStopped_1() const { return ____SessionStopped_1; }
	inline EventHandler_1_t856417675 ** get_address_of__SessionStopped_1() { return &____SessionStopped_1; }
	inline void set__SessionStopped_1(EventHandler_1_t856417675 * value)
	{
		____SessionStopped_1 = value;
		Il2CppCodeGenWriteBarrier((&____SessionStopped_1), value);
	}

	inline static int32_t get_offset_of__SpeechStartDetected_2() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ____SpeechStartDetected_2)); }
	inline EventHandler_1_t3526734015 * get__SpeechStartDetected_2() const { return ____SpeechStartDetected_2; }
	inline EventHandler_1_t3526734015 ** get_address_of__SpeechStartDetected_2() { return &____SpeechStartDetected_2; }
	inline void set__SpeechStartDetected_2(EventHandler_1_t3526734015 * value)
	{
		____SpeechStartDetected_2 = value;
		Il2CppCodeGenWriteBarrier((&____SpeechStartDetected_2), value);
	}

	inline static int32_t get_offset_of__SpeechEndDetected_3() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ____SpeechEndDetected_3)); }
	inline EventHandler_1_t3526734015 * get__SpeechEndDetected_3() const { return ____SpeechEndDetected_3; }
	inline EventHandler_1_t3526734015 ** get_address_of__SpeechEndDetected_3() { return &____SpeechEndDetected_3; }
	inline void set__SpeechEndDetected_3(EventHandler_1_t3526734015 * value)
	{
		____SpeechEndDetected_3 = value;
		Il2CppCodeGenWriteBarrier((&____SpeechEndDetected_3), value);
	}

	inline static int32_t get_offset_of_recoHandle_4() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___recoHandle_4)); }
	inline InteropSafeHandle_t575154845 * get_recoHandle_4() const { return ___recoHandle_4; }
	inline InteropSafeHandle_t575154845 ** get_address_of_recoHandle_4() { return &___recoHandle_4; }
	inline void set_recoHandle_4(InteropSafeHandle_t575154845 * value)
	{
		___recoHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___recoHandle_4), value);
	}

	inline static int32_t get_offset_of_asyncStartContinuousHandle_5() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___asyncStartContinuousHandle_5)); }
	inline intptr_t get_asyncStartContinuousHandle_5() const { return ___asyncStartContinuousHandle_5; }
	inline intptr_t* get_address_of_asyncStartContinuousHandle_5() { return &___asyncStartContinuousHandle_5; }
	inline void set_asyncStartContinuousHandle_5(intptr_t value)
	{
		___asyncStartContinuousHandle_5 = value;
	}

	inline static int32_t get_offset_of_asyncStopContinuousHandle_6() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___asyncStopContinuousHandle_6)); }
	inline intptr_t get_asyncStopContinuousHandle_6() const { return ___asyncStopContinuousHandle_6; }
	inline intptr_t* get_address_of_asyncStopContinuousHandle_6() { return &___asyncStopContinuousHandle_6; }
	inline void set_asyncStopContinuousHandle_6(intptr_t value)
	{
		___asyncStopContinuousHandle_6 = value;
	}

	inline static int32_t get_offset_of_asyncStartKeywordHandle_7() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___asyncStartKeywordHandle_7)); }
	inline intptr_t get_asyncStartKeywordHandle_7() const { return ___asyncStartKeywordHandle_7; }
	inline intptr_t* get_address_of_asyncStartKeywordHandle_7() { return &___asyncStartKeywordHandle_7; }
	inline void set_asyncStartKeywordHandle_7(intptr_t value)
	{
		___asyncStartKeywordHandle_7 = value;
	}

	inline static int32_t get_offset_of_asyncStopKeywordHandle_8() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___asyncStopKeywordHandle_8)); }
	inline intptr_t get_asyncStopKeywordHandle_8() const { return ___asyncStopKeywordHandle_8; }
	inline intptr_t* get_address_of_asyncStopKeywordHandle_8() { return &___asyncStopKeywordHandle_8; }
	inline void set_asyncStopKeywordHandle_8(intptr_t value)
	{
		___asyncStopKeywordHandle_8 = value;
	}

	inline static int32_t get_offset_of_speechStartDetectedCallbackDelegate_9() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___speechStartDetectedCallbackDelegate_9)); }
	inline CallbackFunctionDelegate_t2754546357 * get_speechStartDetectedCallbackDelegate_9() const { return ___speechStartDetectedCallbackDelegate_9; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_speechStartDetectedCallbackDelegate_9() { return &___speechStartDetectedCallbackDelegate_9; }
	inline void set_speechStartDetectedCallbackDelegate_9(CallbackFunctionDelegate_t2754546357 * value)
	{
		___speechStartDetectedCallbackDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___speechStartDetectedCallbackDelegate_9), value);
	}

	inline static int32_t get_offset_of_speechEndDetectedCallbackDelegate_10() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___speechEndDetectedCallbackDelegate_10)); }
	inline CallbackFunctionDelegate_t2754546357 * get_speechEndDetectedCallbackDelegate_10() const { return ___speechEndDetectedCallbackDelegate_10; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_speechEndDetectedCallbackDelegate_10() { return &___speechEndDetectedCallbackDelegate_10; }
	inline void set_speechEndDetectedCallbackDelegate_10(CallbackFunctionDelegate_t2754546357 * value)
	{
		___speechEndDetectedCallbackDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((&___speechEndDetectedCallbackDelegate_10), value);
	}

	inline static int32_t get_offset_of_sessionStartedCallbackDelegate_11() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___sessionStartedCallbackDelegate_11)); }
	inline CallbackFunctionDelegate_t2754546357 * get_sessionStartedCallbackDelegate_11() const { return ___sessionStartedCallbackDelegate_11; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_sessionStartedCallbackDelegate_11() { return &___sessionStartedCallbackDelegate_11; }
	inline void set_sessionStartedCallbackDelegate_11(CallbackFunctionDelegate_t2754546357 * value)
	{
		___sessionStartedCallbackDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((&___sessionStartedCallbackDelegate_11), value);
	}

	inline static int32_t get_offset_of_sessionStoppedCallbackDelegate_12() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___sessionStoppedCallbackDelegate_12)); }
	inline CallbackFunctionDelegate_t2754546357 * get_sessionStoppedCallbackDelegate_12() const { return ___sessionStoppedCallbackDelegate_12; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_sessionStoppedCallbackDelegate_12() { return &___sessionStoppedCallbackDelegate_12; }
	inline void set_sessionStoppedCallbackDelegate_12(CallbackFunctionDelegate_t2754546357 * value)
	{
		___sessionStoppedCallbackDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___sessionStoppedCallbackDelegate_12), value);
	}

	inline static int32_t get_offset_of_gch_13() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___gch_13)); }
	inline GCHandle_t3351438187  get_gch_13() const { return ___gch_13; }
	inline GCHandle_t3351438187 * get_address_of_gch_13() { return &___gch_13; }
	inline void set_gch_13(GCHandle_t3351438187  value)
	{
		___gch_13 = value;
	}

	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_isDisposing_15() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___isDisposing_15)); }
	inline bool get_isDisposing_15() const { return ___isDisposing_15; }
	inline bool* get_address_of_isDisposing_15() { return &___isDisposing_15; }
	inline void set_isDisposing_15(bool value)
	{
		___isDisposing_15 = value;
	}

	inline static int32_t get_offset_of_recognizerLock_16() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___recognizerLock_16)); }
	inline RuntimeObject * get_recognizerLock_16() const { return ___recognizerLock_16; }
	inline RuntimeObject ** get_address_of_recognizerLock_16() { return &___recognizerLock_16; }
	inline void set_recognizerLock_16(RuntimeObject * value)
	{
		___recognizerLock_16 = value;
		Il2CppCodeGenWriteBarrier((&___recognizerLock_16), value);
	}

	inline static int32_t get_offset_of_activeAsyncRecognitionCounter_17() { return static_cast<int32_t>(offsetof(Recognizer_t1073947482, ___activeAsyncRecognitionCounter_17)); }
	inline int32_t get_activeAsyncRecognitionCounter_17() const { return ___activeAsyncRecognitionCounter_17; }
	inline int32_t* get_address_of_activeAsyncRecognitionCounter_17() { return &___activeAsyncRecognitionCounter_17; }
	inline void set_activeAsyncRecognitionCounter_17(int32_t value)
	{
		___activeAsyncRecognitionCounter_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNIZER_T1073947482_H
#ifndef RESULTREASON_T1280999872_H
#define RESULTREASON_T1280999872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.ResultReason
struct  ResultReason_t1280999872 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.ResultReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultReason_t1280999872, ___value___2)); }
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
#endif // RESULTREASON_T1280999872_H
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
#ifndef SAFEHANDLE_T3273388951_H
#define SAFEHANDLE_T3273388951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3273388951  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3273388951_H
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
#ifndef CANCELLATIONDETAILS_T2773841337_H
#define CANCELLATIONDETAILS_T2773841337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.CancellationDetails
struct  CancellationDetails_t2773841337  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_t1013610727 * ___recognitionResult_3;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CancellationDetails_t2773841337, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CancellationDetails_t2773841337, ___U3CErrorCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_1() const { return ___U3CErrorCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_1() { return &___U3CErrorCodeU3Ek__BackingField_1; }
	inline void set_U3CErrorCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CancellationDetails_t2773841337, ___U3CErrorDetailsU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_2() const { return ___U3CErrorDetailsU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_2() { return &___U3CErrorDetailsU3Ek__BackingField_2; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorDetailsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_recognitionResult_3() { return static_cast<int32_t>(offsetof(CancellationDetails_t2773841337, ___recognitionResult_3)); }
	inline RecognitionResult_t1013610727 * get_recognitionResult_3() const { return ___recognitionResult_3; }
	inline RecognitionResult_t1013610727 ** get_address_of_recognitionResult_3() { return &___recognitionResult_3; }
	inline void set_recognitionResult_3(RecognitionResult_t1013610727 * value)
	{
		___recognitionResult_3 = value;
		Il2CppCodeGenWriteBarrier((&___recognitionResult_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELLATIONDETAILS_T2773841337_H
#ifndef INTEROPSAFEHANDLE_T575154845_H
#define INTEROPSAFEHANDLE_T575154845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct  InteropSafeHandle_t575154845  : public SafeHandle_t3273388951
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_t566698942 * ___releaseHandleFunc_6;

public:
	inline static int32_t get_offset_of_releaseHandleFunc_6() { return static_cast<int32_t>(offsetof(InteropSafeHandle_t575154845, ___releaseHandleFunc_6)); }
	inline HandleRelease_t566698942 * get_releaseHandleFunc_6() const { return ___releaseHandleFunc_6; }
	inline HandleRelease_t566698942 ** get_address_of_releaseHandleFunc_6() { return &___releaseHandleFunc_6; }
	inline void set_releaseHandleFunc_6(HandleRelease_t566698942 * value)
	{
		___releaseHandleFunc_6 = value;
		Il2CppCodeGenWriteBarrier((&___releaseHandleFunc_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEROPSAFEHANDLE_T575154845_H
#ifndef RECOGNITIONRESULT_T1013610727_H
#define RECOGNITIONRESULT_T1013610727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.RecognitionResult
struct  RecognitionResult_t1013610727  : public RuntimeObject
{
public:
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_t65000186 * ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_t575154845 * ___resultHandle_4;

public:
	inline static int32_t get_offset_of_U3CResultIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RecognitionResult_t1013610727, ___U3CResultIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CResultIdU3Ek__BackingField_0() const { return ___U3CResultIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CResultIdU3Ek__BackingField_0() { return &___U3CResultIdU3Ek__BackingField_0; }
	inline void set_U3CResultIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CResultIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RecognitionResult_t1013610727, ___U3CReasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_1() const { return ___U3CReasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_1() { return &___U3CReasonU3Ek__BackingField_1; }
	inline void set_U3CReasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RecognitionResult_t1013610727, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RecognitionResult_t1013610727, ___U3CPropertiesU3Ek__BackingField_3)); }
	inline PropertyCollection_t65000186 * get_U3CPropertiesU3Ek__BackingField_3() const { return ___U3CPropertiesU3Ek__BackingField_3; }
	inline PropertyCollection_t65000186 ** get_address_of_U3CPropertiesU3Ek__BackingField_3() { return &___U3CPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPropertiesU3Ek__BackingField_3(PropertyCollection_t65000186 * value)
	{
		___U3CPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertiesU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_resultHandle_4() { return static_cast<int32_t>(offsetof(RecognitionResult_t1013610727, ___resultHandle_4)); }
	inline InteropSafeHandle_t575154845 * get_resultHandle_4() const { return ___resultHandle_4; }
	inline InteropSafeHandle_t575154845 ** get_address_of_resultHandle_4() { return &___resultHandle_4; }
	inline void set_resultHandle_4(InteropSafeHandle_t575154845 * value)
	{
		___resultHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___resultHandle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONRESULT_T1013610727_H
#ifndef SPEECHRECOGNITIONEVENTARGS_T1198058925_H
#define SPEECHRECOGNITIONEVENTARGS_T1198058925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct  SpeechRecognitionEventArgs_t1198058925  : public RecognitionEventArgs_t1307607286
{
public:
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_t203626519 * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechRecognitionEventArgs_t1198058925, ___U3CResultU3Ek__BackingField_6)); }
	inline SpeechRecognitionResult_t203626519 * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline SpeechRecognitionResult_t203626519 ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(SpeechRecognitionResult_t203626519 * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHRECOGNITIONEVENTARGS_T1198058925_H
#ifndef SPEECHRECOGNIZER_T1052549996_H
#define SPEECHRECOGNIZER_T1052549996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct  SpeechRecognizer_t1052549996  : public Recognizer_t1073947482
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_t3417185654 * ____Recognizing_18;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_t3417185654 * ____Recognized_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t3716679029 * ____Canceled_20;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___recognizingCallbackDelegate_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___recognizedCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_t2754546357 * ___canceledCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_t65000186 * ___U3CPropertiesU3Ek__BackingField_24;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioConfig
	AudioConfig_t1638830011 * ___audioConfig_25;

public:
	inline static int32_t get_offset_of__Recognizing_18() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ____Recognizing_18)); }
	inline EventHandler_1_t3417185654 * get__Recognizing_18() const { return ____Recognizing_18; }
	inline EventHandler_1_t3417185654 ** get_address_of__Recognizing_18() { return &____Recognizing_18; }
	inline void set__Recognizing_18(EventHandler_1_t3417185654 * value)
	{
		____Recognizing_18 = value;
		Il2CppCodeGenWriteBarrier((&____Recognizing_18), value);
	}

	inline static int32_t get_offset_of__Recognized_19() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ____Recognized_19)); }
	inline EventHandler_1_t3417185654 * get__Recognized_19() const { return ____Recognized_19; }
	inline EventHandler_1_t3417185654 ** get_address_of__Recognized_19() { return &____Recognized_19; }
	inline void set__Recognized_19(EventHandler_1_t3417185654 * value)
	{
		____Recognized_19 = value;
		Il2CppCodeGenWriteBarrier((&____Recognized_19), value);
	}

	inline static int32_t get_offset_of__Canceled_20() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ____Canceled_20)); }
	inline EventHandler_1_t3716679029 * get__Canceled_20() const { return ____Canceled_20; }
	inline EventHandler_1_t3716679029 ** get_address_of__Canceled_20() { return &____Canceled_20; }
	inline void set__Canceled_20(EventHandler_1_t3716679029 * value)
	{
		____Canceled_20 = value;
		Il2CppCodeGenWriteBarrier((&____Canceled_20), value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_21() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ___recognizingCallbackDelegate_21)); }
	inline CallbackFunctionDelegate_t2754546357 * get_recognizingCallbackDelegate_21() const { return ___recognizingCallbackDelegate_21; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_recognizingCallbackDelegate_21() { return &___recognizingCallbackDelegate_21; }
	inline void set_recognizingCallbackDelegate_21(CallbackFunctionDelegate_t2754546357 * value)
	{
		___recognizingCallbackDelegate_21 = value;
		Il2CppCodeGenWriteBarrier((&___recognizingCallbackDelegate_21), value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_22() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ___recognizedCallbackDelegate_22)); }
	inline CallbackFunctionDelegate_t2754546357 * get_recognizedCallbackDelegate_22() const { return ___recognizedCallbackDelegate_22; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_recognizedCallbackDelegate_22() { return &___recognizedCallbackDelegate_22; }
	inline void set_recognizedCallbackDelegate_22(CallbackFunctionDelegate_t2754546357 * value)
	{
		___recognizedCallbackDelegate_22 = value;
		Il2CppCodeGenWriteBarrier((&___recognizedCallbackDelegate_22), value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_23() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ___canceledCallbackDelegate_23)); }
	inline CallbackFunctionDelegate_t2754546357 * get_canceledCallbackDelegate_23() const { return ___canceledCallbackDelegate_23; }
	inline CallbackFunctionDelegate_t2754546357 ** get_address_of_canceledCallbackDelegate_23() { return &___canceledCallbackDelegate_23; }
	inline void set_canceledCallbackDelegate_23(CallbackFunctionDelegate_t2754546357 * value)
	{
		___canceledCallbackDelegate_23 = value;
		Il2CppCodeGenWriteBarrier((&___canceledCallbackDelegate_23), value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ___U3CPropertiesU3Ek__BackingField_24)); }
	inline PropertyCollection_t65000186 * get_U3CPropertiesU3Ek__BackingField_24() const { return ___U3CPropertiesU3Ek__BackingField_24; }
	inline PropertyCollection_t65000186 ** get_address_of_U3CPropertiesU3Ek__BackingField_24() { return &___U3CPropertiesU3Ek__BackingField_24; }
	inline void set_U3CPropertiesU3Ek__BackingField_24(PropertyCollection_t65000186 * value)
	{
		___U3CPropertiesU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertiesU3Ek__BackingField_24), value);
	}

	inline static int32_t get_offset_of_audioConfig_25() { return static_cast<int32_t>(offsetof(SpeechRecognizer_t1052549996, ___audioConfig_25)); }
	inline AudioConfig_t1638830011 * get_audioConfig_25() const { return ___audioConfig_25; }
	inline AudioConfig_t1638830011 ** get_address_of_audioConfig_25() { return &___audioConfig_25; }
	inline void set_audioConfig_25(AudioConfig_t1638830011 * value)
	{
		___audioConfig_25 = value;
		Il2CppCodeGenWriteBarrier((&___audioConfig_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHRECOGNIZER_T1052549996_H
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
#ifndef CALLBACKFUNCTIONDELEGATE_T2754546357_H
#define CALLBACKFUNCTIONDELEGATE_T2754546357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct  CallbackFunctionDelegate_t2754546357  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKFUNCTIONDELEGATE_T2754546357_H
#ifndef HANDLERELEASE_T566698942_H
#define HANDLERELEASE_T566698942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct  HandleRelease_t566698942  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLERELEASE_T566698942_H
#ifndef PULLAUDIOSTREAMCLOSEDELEGATE_T1321591398_H
#define PULLAUDIOSTREAMCLOSEDELEGATE_T1321591398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate
struct  PullAudioStreamCloseDelegate_t1321591398  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PULLAUDIOSTREAMCLOSEDELEGATE_T1321591398_H
#ifndef PULLAUDIOSTREAMGETPROPERTYDELEGATE_T2901781538_H
#define PULLAUDIOSTREAMGETPROPERTYDELEGATE_T2901781538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate
struct  PullAudioStreamGetPropertyDelegate_t2901781538  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PULLAUDIOSTREAMGETPROPERTYDELEGATE_T2901781538_H
#ifndef PULLAUDIOSTREAMREADDELEGATE_T3274582108_H
#define PULLAUDIOSTREAMREADDELEGATE_T3274582108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate
struct  PullAudioStreamReadDelegate_t3274582108  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PULLAUDIOSTREAMREADDELEGATE_T3274582108_H
#ifndef GETRESULTDELEGATE_T2074362391_H
#define GETRESULTDELEGATE_T2074362391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct  GetResultDelegate_t2074362391  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRESULTDELEGATE_T2074362391_H
#ifndef GETRECOGNIZERFROMCONFIGDELEGATE_T1990574192_H
#define GETRECOGNIZERFROMCONFIGDELEGATE_T1990574192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct  GetRecognizerFromConfigDelegate_t1990574192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRECOGNIZERFROMCONFIGDELEGATE_T1990574192_H
#ifndef SPEECHRECOGNITIONCANCELEDEVENTARGS_T1497552300_H
#define SPEECHRECOGNITIONCANCELEDEVENTARGS_T1497552300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct  SpeechRecognitionCanceledEventArgs_t1497552300  : public SpeechRecognitionEventArgs_t1198058925
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t1497552300, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t1497552300, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t1497552300, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorDetailsU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHRECOGNITIONCANCELEDEVENTARGS_T1497552300_H
#ifndef SPEECHRECOGNITIONRESULT_T203626519_H
#define SPEECHRECOGNITIONRESULT_T203626519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct  SpeechRecognitionResult_t203626519  : public RecognitionResult_t1013610727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHRECOGNITIONRESULT_T203626519_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
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
#ifndef EVENTHANDLER_1_T3526734015_H
#define EVENTHANDLER_1_T3526734015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct  EventHandler_1_t3526734015  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3526734015_H
#ifndef EVENTHANDLER_1_T856417675_H
#define EVENTHANDLER_1_T856417675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct  EventHandler_1_t856417675  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T856417675_H
#ifndef EVENTHANDLER_1_T3716679029_H
#define EVENTHANDLER_1_T3716679029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct  EventHandler_1_t3716679029  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3716679029_H
#ifndef EVENTHANDLER_1_T3417185654_H
#define EVENTHANDLER_1_T3417185654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct  EventHandler_1_t3417185654  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3417185654_H
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
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m1348997881_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___nativeHandle0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m341276322_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::.ctor(Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback,Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream__ctor_m1572250482 (PullAudioInputStream_t1876817371 * __this, PullAudioInputStreamCallback_t932724598 * ___callback0, AudioStreamFormat_t3659540067 * ___format1, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::get_StreamHandle()
extern "C" IL2CPP_METHOD_ATTR InteropSafeHandle_t575154845 * AudioInputStream_get_StreamHandle_m1429343683 (AudioInputStream_t896891398 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioConfig::audio_config_create_audio_input_from_stream(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioConfig_audio_config_create_audio_input_from_stream_m467026033 (RuntimeObject * __this /* static, unused */, intptr_t* ___audioConfig0, InteropSafeHandle_t575154845 * ___audioStream1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m2587875632 (RuntimeObject * __this /* static, unused */, intptr_t ___hr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioConfig::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Audio.AudioInputStream,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfig__ctor_m1404516590 (AudioConfig_t1638830011 * __this, intptr_t ___configPtr0, AudioInputStream_t896891398 * ___audioStream1, bool ___ownStream2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m3313473631 (RuntimeObject * __this /* static, unused */, intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HandleRelease__ctor_m2341069289 (HandleRelease_t566698942 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
extern "C" IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_m460085502 (InteropSafeHandle_t575154845 * __this, intptr_t ___handle0, HandleRelease_t566698942 * ___releaseHandle1, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::GetDefaultInputFormat()
extern "C" IL2CPP_METHOD_ATTR AudioStreamFormat_t3659540067 * AudioStreamFormat_GetDefaultInputFormat_m3181667183 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m817995135 (SafeHandle_t3273388951 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioStreamFormat::audio_stream_format_create_from_default_input(System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioStreamFormat_audio_stream_format_create_from_default_input_m1219801879 (RuntimeObject * __this /* static, unused */, intptr_t* ___format0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioStreamFormat__ctor_m1074278574 (AudioStreamFormat_t3659540067 * __this, intptr_t ___formatPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioStreamFormat::audio_stream_format_create_from_waveformat_pcm(System.IntPtr&,System.UInt32,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioStreamFormat_audio_stream_format_create_from_waveformat_pcm_m2731621622 (RuntimeObject * __this /* static, unused */, intptr_t* ___format0, uint32_t ___samplesPerSecond1, uint8_t ___bitsPerSample2, uint8_t ___channels3, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioStreamFormat_Dispose_m2625961946 (AudioStreamFormat_t3659540067 * __this, bool ___disposing0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::get_FormatHandle()
extern "C" IL2CPP_METHOD_ATTR InteropSafeHandle_t575154845 * AudioStreamFormat_get_FormatHandle_m2581120419 (AudioStreamFormat_t3659540067 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::StreamReadCallback(System.IntPtr,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t PullAudioInputStream_StreamReadCallback_m161976796 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, intptr_t ___buffer1, uint32_t ___size2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::StreamCloseCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream_StreamCloseCallback_m1720207294 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::StreamGetPropertyCallback(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PropertyId,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream_StreamGetPropertyCallback_m1147121905 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, int32_t ___id1, intptr_t ___buffer2, uint32_t ___size3, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::UseDefaultFormatIfNull(Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR AudioStreamFormat_t3659540067 * AudioInputStream_UseDefaultFormatIfNull_m3391937115 (RuntimeObject * __this /* static, unused */, AudioStreamFormat_t3659540067 * ___format0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::Create(Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_Create_m807815350 (RuntimeObject * __this /* static, unused */, AudioStreamFormat_t3659540067 * ___streamFormat0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream__ctor_m3337974931 (PullAudioInputStream_t1876817371 * __this, intptr_t ___streamPtr0, PullAudioInputStreamCallback_t932724598 * ___cb1, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m1400443516 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m1058226959 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioInputStream_Dispose_m2168190348 (AudioInputStream_t896891398 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m4145114651 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream::audio_stream_create_pull_audio_input_stream(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_audio_stream_create_pull_audio_input_stream_m4042539026 (RuntimeObject * __this /* static, unused */, intptr_t* ___audioStream0, InteropSafeHandle_t575154845 * ___format1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioInputStream__ctor_m1400687888 (AudioInputStream_t896891398 * __this, intptr_t ___streamPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamReadDelegate__ctor_m3933300715 (PullAudioStreamReadDelegate_t3274582108 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamCloseDelegate__ctor_m854461610 (PullAudioStreamCloseDelegate_t1321591398 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamGetPropertyDelegate__ctor_m3183554052 (PullAudioStreamGetPropertyDelegate_t2901781538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m3288225389 (RuntimeObject * __this /* static, unused */, GCHandle_t3351438187  p0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream::pull_audio_input_stream_set_callbacks(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate,Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_pull_audio_input_stream_set_callbacks_m1729906098 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___audioStream0, intptr_t ___context1, PullAudioStreamReadDelegate_t3274582108 * ___readCallback2, PullAudioStreamCloseDelegate_t1321591398 * ___closeCallback3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream::pull_audio_input_stream_set_getproperty_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_pull_audio_input_stream_set_getproperty_callback_m2815087706 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___audioStream0, intptr_t ___context1, PullAudioStreamGetPropertyDelegate_t2901781538 * ___getPropertyCallback2, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream>(System.IntPtr)
inline PullAudioInputStream_t1876817371 * InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  PullAudioInputStream_t1876817371 * (*) (RuntimeObject * /* static, unused */, intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m1348997881_gshared)(__this /* static, unused */, ___nativeHandle0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t2843939325* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Array_Empty_TisRuntimeObject_m4268358689_gshared)(__this /* static, unused */, method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1562111546 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, intptr_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m3105728682 (RuntimeObject * __this /* static, unused */, intptr_t ___hr0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m4248820418 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m1636052394 (RuntimeObject * __this /* static, unused */, bool ___item0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStreamCallback_Dispose_m2001872325 (PullAudioInputStreamCallback_t932724598 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m3331148975 (CancellationDetails_t2773841337 * __this, RecognitionResult_t1013610727 * ___result0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
extern "C" IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m1055698844 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m3788033193 (CancellationDetails_t2773841337 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
extern "C" IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m2382192662 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m1397727429 (CancellationDetails_t2773841337 * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
extern "C" IL2CPP_METHOD_ATTR PropertyCollection_t65000186 * RecognitionResult_get_Properties_m1976044485 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern "C" IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_m774443618 (PropertyCollection_t65000186 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m1532243648 (CancellationDetails_t2773841337 * __this, String_t* ___value0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
extern "C" IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m2462958577 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
extern "C" IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m3590449650 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m4086832682 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m614714386 (SafeHandle_t3273388951 * __this, bool* ___success0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern "C" IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m190326290 (SafeHandle_t3273388951 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SafeHandle__ctor_m124356559 (SafeHandle_t3273388951 * __this, intptr_t p0, bool p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m2809947802 (SafeHandle_t3273388951 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m987082960 (intptr_t* __this, int32_t p0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m4048945605 (HandleRelease_t566698942 * __this, intptr_t ___hresult0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m2791746676 (RuntimeObject * __this /* static, unused */, intptr_t ___hr0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m2056840612 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m3666434662 (RuntimeObject * __this /* static, unused */, intptr_t ___native0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m2075763689 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m4220076518 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m1302140840 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m1593216315 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m2790175200 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m4158136712 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m3034475861 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m2507389746 (int32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m3490221821 (String_t* __this, CultureInfo_t4157843068 * p0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3179549879 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxError_Release_m1860549285 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ApplicationException__ctor_m2517758450 (ApplicationException_t2339761290 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m491131085 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m568606618 (GetResultDelegate_t2074362391 * __this, InteropSafeHandle_t575154845 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m4207902953 (RuntimeObject * __this /* static, unused */, intptr_t p0, int32_t p1, const RuntimeMethod* method);
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m3994257739 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m1836281341 (RuntimeObject * __this /* static, unused */, String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void Marshal_WriteByte_m3462200872 (RuntimeObject * __this /* static, unused */, intptr_t p0, uint8_t p1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_m3841868362 (PropertyCollection_t65000186 * __this, InteropSafeHandle_t575154845 * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m393779801 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m921854860 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m955216736 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m371955663 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m3263905054 (SessionEventArgs_t2932258242 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m2124849947 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
extern "C" IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m2887563617 (SessionEventArgs_t2932258242 * __this, const RuntimeMethod* method);
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
extern "C" IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m1240295663 (RecognitionEventArgs_t1307607286 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_m2570829637 (GetResultDelegate_t2074362391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m1775810571 (RuntimeObject * __this /* static, unused */, GetResultDelegate_t2074362391 * ___functionPtr0, InteropSafeHandle_t575154845 * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_m1794747469 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m198646464 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m2224112335 (PropertyCollection_t65000186 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern "C" IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m691225352 (RecognitionResult_t1013610727 * __this, PropertyCollection_t65000186 * ___value0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
extern "C" IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m2372579608 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
extern "C" IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m4206590602 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_m3836938529 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m2835842845 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m3369611404 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m4185769789 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m657974116 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_m860684074 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m1740178303 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m2352984339 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m323562248 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_m1345392279 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m1055597937 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m356941968 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_m2266112665 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m3835745858 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_m2590099270 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m30759701 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m2224689410 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m3706658532 (CallbackFunctionDelegate_t2754546357 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_t1073947482 * InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  Recognizer_t1073947482 * (*) (RuntimeObject * /* static, unused */, intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m1348997881_gshared)(__this /* static, unused */, ___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m4115220418 (EventHandler_1_t856417675 * __this, RuntimeObject * p0, SessionEventArgs_t2932258242 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t856417675 *, RuntimeObject *, SessionEventArgs_t2932258242 *, const RuntimeMethod*))EventHandler_1_Invoke_m341276322_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m3951115954 (RecognitionEventArgs_t1307607286 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m2044477451 (EventHandler_1_t3526734015 * __this, RuntimeObject * p0, RecognitionEventArgs_t1307607286 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3526734015 *, RuntimeObject *, RecognitionEventArgs_t1307607286 *, const RuntimeMethod*))EventHandler_1_Invoke_m341276322_gshared)(__this, p0, p1, method);
}
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m3603759869 (ObjectDisposedException_t21392786 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m423955441 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m3849934744 (RuntimeObject * __this /* static, unused */, intptr_t ___asyncHandle0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m254497770 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m3185589748 (RuntimeObject * __this /* static, unused */, intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m3112348459 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m3421695632 (RuntimeObject * __this /* static, unused */, intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m2003166221 (GetRecognizerFromConfigDelegate_t1990574192 * __this, intptr_t* ___phreco0, InteropSafeHandle_t575154845 * ___speechconfig1, InteropSafeHandle_t575154845 * ___audioInput2, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_m686976697 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m3102140798 (SpeechConfig_t192093705 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m3465530757 (RuntimeObject * __this /* static, unused */, intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m1803775549 (SpeechConfig_t192093705 * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m1596571729 (PropertyCollection_t65000186 * __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m1236456671 (PropertyCollection_t65000186 * __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_m2593027836 (SpeechRecognitionEventArgs_t1198058925 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
extern "C" IL2CPP_METHOD_ATTR SpeechRecognitionResult_t203626519 * SpeechRecognitionEventArgs_get_Result_m2526846112 (SpeechRecognitionEventArgs_t1198058925 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern "C" IL2CPP_METHOD_ATTR CancellationDetails_t2773841337 * CancellationDetails_FromResult_m4248171642 (RuntimeObject * __this /* static, unused */, RecognitionResult_t1013610727 * ___result0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m439645568 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m609116725 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m3420284768 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m1848447793 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_m3739245102 (SpeechRecognitionResult_t203626519 * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m782105062 (RecognitionResult_t1013610727 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m1805398993 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m2213496941 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m1862259829 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m1306649434 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m76113044 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m2863571761 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_m1751192708 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_m1885599521 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_m734168419 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m440208621 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_m3085834569 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3716679029 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m3410961589 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3716679029 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m3276454511 (GetRecognizerFromConfigDelegate_t1990574192 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig,Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
extern "C" IL2CPP_METHOD_ATTR InteropSafeHandle_t575154845 * Recognizer_FromConfig_m1268427302 (RuntimeObject * __this /* static, unused */, GetRecognizerFromConfigDelegate_t1990574192 * ___fromConfig0, SpeechConfig_t192093705 * ___speechConfig1, AudioConfig_t1638830011 * ___audioConfig2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m29177740 (SpeechRecognizer_t1052549996 * __this, InteropSafeHandle_t575154845 * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR void Recognizer__ctor_m3136998617 (Recognizer_t1073947482 * __this, InteropSafeHandle_t575154845 * ___recoPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m623476501 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_m342850664 (SpeechRecognizer_t1052549996 * __this, PropertyCollection_t65000186 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m75143462 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t3187275312 * Task_Run_m1807195689 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Recognizer_Finalize_m3741355336 (Recognizer_t1073947482 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
extern "C" IL2CPP_METHOD_ATTR PropertyCollection_t65000186 * SpeechRecognizer_get_Properties_m1530584268 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection_Close_m299802329 (PropertyCollection_t65000186 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_Dispose_m1043385659 (Recognizer_t1073947482 * __this, bool ___disposing0, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_t1052549996 * InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098 (RuntimeObject * __this /* static, unused */, intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_t1052549996 * (*) (RuntimeObject * /* static, unused */, intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m1348997881_gshared)(__this /* static, unused */, ___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1931382688 (EventHandler_1_t3417185654 * __this, RuntimeObject * p0, SpeechRecognitionEventArgs_t1198058925 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3417185654 *, RuntimeObject *, SpeechRecognitionEventArgs_t1198058925 *, const RuntimeMethod*))EventHandler_1_Invoke_m341276322_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_m1915304545 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1840075265 (EventHandler_1_t3716679029 * __this, RuntimeObject * p0, SpeechRecognitionCanceledEventArgs_t1497552300 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3716679029 *, RuntimeObject *, SpeechRecognitionCanceledEventArgs_t1497552300 *, const RuntimeMethod*))EventHandler_1_Invoke_m341276322_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m830785997 (Recognizer_t1073947482 * __this, Action_t1264377477 * ___recoImplAction0, const RuntimeMethod* method);
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
// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.Audio.AudioConfig::FromStreamInput(Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback,Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR AudioConfig_t1638830011 * AudioConfig_FromStreamInput_m2545168562 (RuntimeObject * __this /* static, unused */, PullAudioInputStreamCallback_t932724598 * ___callback0, AudioStreamFormat_t3659540067 * ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfig_FromStreamInput_m2545168562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PullAudioInputStream_t1876817371 * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PullAudioInputStreamCallback_t932724598 * L_0 = ___callback0;
		AudioStreamFormat_t3659540067 * L_1 = ___format1;
		PullAudioInputStream_t1876817371 * L_2 = (PullAudioInputStream_t1876817371 *)il2cpp_codegen_object_new(PullAudioInputStream_t1876817371_il2cpp_TypeInfo_var);
		PullAudioInputStream__ctor_m1572250482(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (intptr_t)(0);
		PullAudioInputStream_t1876817371 * L_3 = V_0;
		NullCheck(L_3);
		InteropSafeHandle_t575154845 * L_4 = AudioInputStream_get_StreamHandle_m1429343683(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = AudioConfig_audio_config_create_audio_input_from_stream_m467026033(NULL /*static, unused*/, (intptr_t*)(&V_1), L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
		intptr_t L_6 = V_1;
		PullAudioInputStream_t1876817371 * L_7 = V_0;
		AudioConfig_t1638830011 * L_8 = (AudioConfig_t1638830011 *)il2cpp_codegen_object_new(AudioConfig_t1638830011_il2cpp_TypeInfo_var);
		AudioConfig__ctor_m1404516590(L_8, (intptr_t)L_6, L_7, (bool)1, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioConfig::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioConfig_Dispose_m276546015 (AudioConfig_t1638830011 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfig_Dispose_m276546015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_disposed_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->set_disposed_0((bool)1);
		bool L_1 = __this->get_disposeStream_2();
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_streamKeepAlive_1();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_2);
		return;
	}

IL_0024:
	{
		__this->set_streamKeepAlive_1((RuntimeObject*)NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioConfig::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Audio.AudioInputStream,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfig__ctor_m1404516590 (AudioConfig_t1638830011 * __this, intptr_t ___configPtr0, AudioInputStream_t896891398 * ___audioStream1, bool ___ownStream2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfig__ctor_m1404516590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_m3313473631(NULL /*static, unused*/, (intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___configPtr0;
		intptr_t L_2 = (intptr_t)AudioConfig_audio_config_release_m1913113031_RuntimeMethod_var;
		HandleRelease_t566698942 * L_3 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_4 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_4, (intptr_t)L_1, L_3, /*hidden argument*/NULL);
		__this->set_configHandle_3(L_4);
		AudioInputStream_t896891398 * L_5 = ___audioStream1;
		__this->set_streamKeepAlive_1(L_5);
		bool L_6 = ___ownStream2;
		__this->set_disposeStream_2(L_6);
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
// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::UseDefaultFormatIfNull(Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR AudioStreamFormat_t3659540067 * AudioInputStream_UseDefaultFormatIfNull_m3391937115 (RuntimeObject * __this /* static, unused */, AudioStreamFormat_t3659540067 * ___format0, const RuntimeMethod* method)
{
	{
		AudioStreamFormat_t3659540067 * L_0 = ___format0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		AudioStreamFormat_t3659540067 * L_1 = AudioStreamFormat_GetDefaultInputFormat_m3181667183(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0009:
	{
		AudioStreamFormat_t3659540067 * L_2 = ___format0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioInputStream_Dispose_m54464965 (AudioInputStream_t896891398 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioInputStream_Dispose_m54464965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isDisposing_0((bool)1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioInputStream_Dispose_m2168190348 (AudioInputStream_t896891398 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disposed_1();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = AudioInputStream_get_StreamHandle_m1429343683(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SafeHandle_Dispose_m817995135(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		__this->set_disposed_1((bool)1);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::get_StreamHandle()
extern "C" IL2CPP_METHOD_ATTR InteropSafeHandle_t575154845 * AudioInputStream_get_StreamHandle_m1429343683 (AudioInputStream_t896891398 * __this, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_t575154845 * L_0 = __this->get_U3CStreamHandleU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioInputStream::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioInputStream__ctor_m1400687888 (AudioInputStream_t896891398 * __this, intptr_t ___streamPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioInputStream__ctor_m1400687888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___streamPtr0;
		SpxExceptionThrower_ThrowIfNull_m3313473631(NULL /*static, unused*/, (intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___streamPtr0;
		intptr_t L_2 = (intptr_t)AudioInputStream_audio_stream_release_m3829443659_RuntimeMethod_var;
		HandleRelease_t566698942 * L_3 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_4 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_4, (intptr_t)L_1, L_3, /*hidden argument*/NULL);
		__this->set_U3CStreamHandleU3Ek__BackingField_2(L_4);
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
// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::GetDefaultInputFormat()
extern "C" IL2CPP_METHOD_ATTR AudioStreamFormat_t3659540067 * AudioStreamFormat_GetDefaultInputFormat_m3181667183 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioStreamFormat_GetDefaultInputFormat_m3181667183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		intptr_t L_0 = AudioStreamFormat_audio_stream_format_create_from_default_input_m1219801879(NULL /*static, unused*/, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = V_0;
		AudioStreamFormat_t3659540067 * L_2 = (AudioStreamFormat_t3659540067 *)il2cpp_codegen_object_new(AudioStreamFormat_t3659540067_il2cpp_TypeInfo_var);
		AudioStreamFormat__ctor_m1074278574(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::GetWaveFormatPCM(System.UInt32,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR AudioStreamFormat_t3659540067 * AudioStreamFormat_GetWaveFormatPCM_m314417619 (RuntimeObject * __this /* static, unused */, uint32_t ___samplesPerSecond0, uint8_t ___bitsPerSample1, uint8_t ___channels2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioStreamFormat_GetWaveFormatPCM_m314417619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		uint32_t L_0 = ___samplesPerSecond0;
		uint8_t L_1 = ___bitsPerSample1;
		uint8_t L_2 = ___channels2;
		intptr_t L_3 = AudioStreamFormat_audio_stream_format_create_from_waveformat_pcm_m2731621622(NULL /*static, unused*/, (intptr_t*)(&V_0), L_0, L_1, L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		AudioStreamFormat_t3659540067 * L_5 = (AudioStreamFormat_t3659540067 *)il2cpp_codegen_object_new(AudioStreamFormat_t3659540067_il2cpp_TypeInfo_var);
		AudioStreamFormat__ctor_m1074278574(L_5, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioStreamFormat_Dispose_m1058407332 (AudioStreamFormat_t3659540067 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioStreamFormat_Dispose_m1058407332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioStreamFormat_Dispose_m2625961946(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioStreamFormat_Dispose_m2625961946 (AudioStreamFormat_t3659540067 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disposed_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = AudioStreamFormat_get_FormatHandle_m2581120419(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SafeHandle_Dispose_m817995135(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		__this->set_disposed_0((bool)1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioStreamFormat__ctor_m1074278574 (AudioStreamFormat_t3659540067 * __this, intptr_t ___formatPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioStreamFormat__ctor_m1074278574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___formatPtr0;
		SpxExceptionThrower_ThrowIfNull_m3313473631(NULL /*static, unused*/, (intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___formatPtr0;
		intptr_t L_2 = (intptr_t)AudioStreamFormat_audio_stream_format_release_m3483132923_RuntimeMethod_var;
		HandleRelease_t566698942 * L_3 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_4 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_4, (intptr_t)L_1, L_3, /*hidden argument*/NULL);
		__this->set_U3CFormatHandleU3Ek__BackingField_1(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat::get_FormatHandle()
extern "C" IL2CPP_METHOD_ATTR InteropSafeHandle_t575154845 * AudioStreamFormat_get_FormatHandle_m2581120419 (AudioStreamFormat_t3659540067 * __this, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_t575154845 * L_0 = __this->get_U3CFormatHandleU3Ek__BackingField_1();
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
extern "C" int32_t CDECL ReversePInvokeWrapper_PullAudioInputStream_StreamReadCallback_m161976796(intptr_t ___context0, intptr_t ___buffer1, uint32_t ___size2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue = PullAudioInputStream_StreamReadCallback_m161976796(NULL, ___context0, ___buffer1, ___size2, NULL);

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_PullAudioInputStream_StreamCloseCallback_m1720207294(intptr_t ___context0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PullAudioInputStream_StreamCloseCallback_m1720207294(NULL, ___context0, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_PullAudioInputStream_StreamGetPropertyCallback_m1147121905(intptr_t ___context0, int32_t ___id1, intptr_t ___buffer2, uint32_t ___size3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PullAudioInputStream_StreamGetPropertyCallback_m1147121905(NULL, ___context0, ___id1, ___buffer2, ___size3, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::.ctor(Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback,Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream__ctor_m1572250482 (PullAudioInputStream_t1876817371 * __this, PullAudioInputStreamCallback_t932724598 * ___callback0, AudioStreamFormat_t3659540067 * ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStream__ctor_m1572250482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioStreamFormat_t3659540067 * L_0 = ___format1;
		AudioStreamFormat_t3659540067 * L_1 = AudioInputStream_UseDefaultFormatIfNull_m3391937115(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		intptr_t L_2 = PullAudioInputStream_Create_m807815350(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		PullAudioInputStreamCallback_t932724598 * L_3 = ___callback0;
		PullAudioInputStream__ctor_m3337974931(__this, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		AudioStreamFormat_t3659540067 * L_4 = ___format1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_KeepAlive_m1400443516(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream_Dispose_m3650104231 (PullAudioInputStream_t1876817371 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disposed_3();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->set_callback_4((PullAudioInputStreamCallback_t932724598 *)NULL);
		__this->set_streamReadDelegate_5((PullAudioStreamReadDelegate_t3274582108 *)NULL);
		__this->set_streamCloseDelegate_6((PullAudioStreamCloseDelegate_t1321591398 *)NULL);
		__this->set_streamGetPropertyDelegate_7((PullAudioStreamGetPropertyDelegate_t2901781538 *)NULL);
		GCHandle_t3351438187 * L_1 = __this->get_address_of_gch_8();
		bool L_2 = GCHandle_get_IsAllocated_m1058226959((GCHandle_t3351438187 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GCHandle_t3351438187 * L_3 = __this->get_address_of_gch_8();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_3, /*hidden argument*/NULL);
	}

IL_003d:
	{
		__this->set_disposed_3((bool)1);
		bool L_4 = ___disposing0;
		AudioInputStream_Dispose_m2168190348(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::Create(Microsoft.CognitiveServices.Speech.Audio.AudioStreamFormat)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_Create_m807815350 (RuntimeObject * __this /* static, unused */, AudioStreamFormat_t3659540067 * ___streamFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStream_Create_m807815350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AudioStreamFormat_t3659540067 * L_0 = ___streamFormat0;
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		AudioStreamFormat_t3659540067 * L_1 = ___streamFormat0;
		NullCheck(L_1);
		InteropSafeHandle_t575154845 * L_2 = AudioStreamFormat_get_FormatHandle_m2581120419(L_1, /*hidden argument*/NULL);
		intptr_t L_3 = PullAudioInputStream_audio_stream_create_pull_audio_input_stream_m4042539026(NULL /*static, unused*/, (intptr_t*)(&V_0), L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
		AudioStreamFormat_t3659540067 * L_4 = ___streamFormat0;
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_KeepAlive_m1400443516(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream__ctor_m3337974931 (PullAudioInputStream_t1876817371 * __this, intptr_t ___streamPtr0, PullAudioInputStreamCallback_t932724598 * ___cb1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStream__ctor_m3337974931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___streamPtr0;
		AudioInputStream__ctor_m1400687888(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		PullAudioInputStreamCallback_t932724598 * L_1 = ___cb1;
		__this->set_callback_4(L_1);
		intptr_t L_2 = (intptr_t)PullAudioInputStream_StreamReadCallback_m161976796_RuntimeMethod_var;
		PullAudioStreamReadDelegate_t3274582108 * L_3 = (PullAudioStreamReadDelegate_t3274582108 *)il2cpp_codegen_object_new(PullAudioStreamReadDelegate_t3274582108_il2cpp_TypeInfo_var);
		PullAudioStreamReadDelegate__ctor_m3933300715(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_streamReadDelegate_5(L_3);
		intptr_t L_4 = (intptr_t)PullAudioInputStream_StreamCloseCallback_m1720207294_RuntimeMethod_var;
		PullAudioStreamCloseDelegate_t1321591398 * L_5 = (PullAudioStreamCloseDelegate_t1321591398 *)il2cpp_codegen_object_new(PullAudioStreamCloseDelegate_t1321591398_il2cpp_TypeInfo_var);
		PullAudioStreamCloseDelegate__ctor_m854461610(L_5, NULL, (intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_streamCloseDelegate_6(L_5);
		intptr_t L_6 = (intptr_t)PullAudioInputStream_StreamGetPropertyCallback_m1147121905_RuntimeMethod_var;
		PullAudioStreamGetPropertyDelegate_t2901781538 * L_7 = (PullAudioStreamGetPropertyDelegate_t2901781538 *)il2cpp_codegen_object_new(PullAudioStreamGetPropertyDelegate_t2901781538_il2cpp_TypeInfo_var);
		PullAudioStreamGetPropertyDelegate__ctor_m3183554052(L_7, NULL, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_streamGetPropertyDelegate_7(L_7);
		GCHandle_t3351438187  L_8 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		__this->set_gch_8(L_8);
		InteropSafeHandle_t575154845 * L_9 = AudioInputStream_get_StreamHandle_m1429343683(__this, /*hidden argument*/NULL);
		GCHandle_t3351438187  L_10 = __this->get_gch_8();
		intptr_t L_11 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		PullAudioStreamReadDelegate_t3274582108 * L_12 = __this->get_streamReadDelegate_5();
		PullAudioStreamCloseDelegate_t1321591398 * L_13 = __this->get_streamCloseDelegate_6();
		intptr_t L_14 = PullAudioInputStream_pull_audio_input_stream_set_callbacks_m1729906098(NULL /*static, unused*/, L_9, (intptr_t)L_11, L_12, L_13, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_14, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_15 = AudioInputStream_get_StreamHandle_m1429343683(__this, /*hidden argument*/NULL);
		GCHandle_t3351438187  L_16 = __this->get_gch_8();
		intptr_t L_17 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		PullAudioStreamGetPropertyDelegate_t2901781538 * L_18 = __this->get_streamGetPropertyDelegate_7();
		intptr_t L_19 = PullAudioInputStream_pull_audio_input_stream_set_getproperty_callback_m2815087706(NULL /*static, unused*/, L_15, (intptr_t)L_17, L_18, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::StreamReadCallback(System.IntPtr,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t PullAudioInputStream_StreamReadCallback_m161976796 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, intptr_t ___buffer1, uint32_t ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStream_StreamReadCallback_m161976796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PullAudioInputStreamCallback_t932724598 * V_1 = NULL;
	PullAudioInputStream_t1876817371 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	int32_t V_4 = 0;
	ApplicationException_t2339761290 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (PullAudioInputStreamCallback_t932724598 *)NULL;
			intptr_t L_0 = ___context0;
			PullAudioInputStream_t1876817371 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210_RuntimeMethod_var);
			V_2 = L_1;
			PullAudioInputStream_t1876817371 * L_2 = V_2;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_2, (String_t*)NULL, /*hidden argument*/NULL);
			PullAudioInputStream_t1876817371 * L_3 = V_2;
			NullCheck(L_3);
			bool L_4 = ((AudioInputStream_t896891398 *)L_3)->get_isDisposing_0();
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			int32_t L_5 = V_0;
			V_4 = L_5;
			goto IL_009c;
		}

IL_001f:
		{
			PullAudioInputStream_t1876817371 * L_6 = V_2;
			NullCheck(L_6);
			PullAudioInputStreamCallback_t932724598 * L_7 = L_6->get_callback_4();
			V_1 = L_7;
			PullAudioInputStreamCallback_t932724598 * L_8 = V_1;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_8, (String_t*)NULL, /*hidden argument*/NULL);
			uint32_t L_9 = ___size2;
			ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_9);
			V_3 = L_10;
			PullAudioInputStreamCallback_t932724598 * L_11 = V_1;
			ByteU5BU5D_t4116647657* L_12 = V_3;
			uint32_t L_13 = ___size2;
			NullCheck(L_11);
			int32_t L_14 = VirtFuncInvoker2< int32_t, ByteU5BU5D_t4116647657*, uint32_t >::Invoke(5 /* System.Int32 Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Read(System.Byte[],System.UInt32) */, L_11, L_12, L_13);
			V_0 = L_14;
			int32_t L_15 = V_0;
			if ((((int32_t)L_15) >= ((int32_t)0)))
			{
				goto IL_005b;
			}
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
			CultureInfo_t4157843068 * L_16 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_17 = Array_Empty_TisRuntimeObject_m4268358689(NULL /*static, unused*/, /*hidden argument*/Array_Empty_TisRuntimeObject_m4268358689_RuntimeMethod_var);
			String_t* L_18 = String_Format_m1881875187(NULL /*static, unused*/, L_16, _stringLiteral3140934673, L_17, /*hidden argument*/NULL);
			InvalidOperationException_t56020091 * L_19 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(L_19, L_18, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, PullAudioInputStream_StreamReadCallback_m161976796_RuntimeMethod_var);
		}

IL_005b:
		{
			intptr_t L_20 = ___buffer1;
			bool L_21 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_20, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_0071;
			}
		}

IL_0068:
		{
			ByteU5BU5D_t4116647657* L_22 = V_3;
			intptr_t L_23 = ___buffer1;
			int32_t L_24 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
			Marshal_Copy_m1562111546(NULL /*static, unused*/, L_22, 0, (intptr_t)L_23, L_24, /*hidden argument*/NULL);
		}

IL_0071:
		{
			goto IL_009a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t2339761290_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0080;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_25 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_25, /*hidden argument*/NULL);
		goto IL_009a;
	} // end catch (depth: 1)

CATCH_0080:
	{ // begin catch(System.ApplicationException)
		V_5 = ((ApplicationException_t2339761290 *)__exception_local);
		ApplicationException_t2339761290 * L_26 = V_5;
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_26);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1549429225, L_27, /*hidden argument*/NULL);
		SpxExceptionThrower_LogError_m4248820418(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		goto IL_009a;
	} // end catch (depth: 1)

IL_009a:
	{
		int32_t L_29 = V_0;
		return L_29;
	}

IL_009c:
	{
		int32_t L_30 = V_4;
		return L_30;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::StreamCloseCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream_StreamCloseCallback_m1720207294 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStream_StreamCloseCallback_m1720207294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PullAudioInputStreamCallback_t932724598 * V_0 = NULL;
	PullAudioInputStream_t1876817371 * V_1 = NULL;
	ApplicationException_t2339761290 * V_2 = NULL;
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
			V_0 = (PullAudioInputStreamCallback_t932724598 *)NULL;
			intptr_t L_0 = ___context0;
			PullAudioInputStream_t1876817371 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210_RuntimeMethod_var);
			V_1 = L_1;
			PullAudioInputStream_t1876817371 * L_2 = V_1;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_2, (String_t*)NULL, /*hidden argument*/NULL);
			PullAudioInputStream_t1876817371 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = ((AudioInputStream_t896891398 *)L_3)->get_isDisposing_0();
			if (!L_4)
			{
				goto IL_001a;
			}
		}

IL_0018:
		{
			goto IL_0055;
		}

IL_001a:
		{
			PullAudioInputStream_t1876817371 * L_5 = V_1;
			NullCheck(L_5);
			PullAudioInputStreamCallback_t932724598 * L_6 = L_5->get_callback_4();
			V_0 = L_6;
			PullAudioInputStreamCallback_t932724598 * L_7 = V_0;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_7, (String_t*)NULL, /*hidden argument*/NULL);
			PullAudioInputStreamCallback_t932724598 * L_8 = V_0;
			NullCheck(L_8);
			VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Close() */, L_8);
			goto IL_0055;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0030;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t2339761290_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_9 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		goto IL_0055;
	} // end catch (depth: 1)

CATCH_003d:
	{ // begin catch(System.ApplicationException)
		V_2 = ((ApplicationException_t2339761290 *)__exception_local);
		ApplicationException_t2339761290 * L_10 = V_2;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_10);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1549429225, L_11, /*hidden argument*/NULL);
		SpxExceptionThrower_LogError_m4248820418(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0055;
	} // end catch (depth: 1)

IL_0055:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStream::StreamGetPropertyCallback(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PropertyId,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStream_StreamGetPropertyCallback_m1147121905 (RuntimeObject * __this /* static, unused */, intptr_t ___context0, int32_t ___id1, intptr_t ___buffer2, uint32_t ___size3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStream_StreamGetPropertyCallback_m1147121905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	PullAudioInputStreamCallback_t932724598 * V_1 = NULL;
	PullAudioInputStream_t1876817371 * V_2 = NULL;
	String_t* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	ApplicationException_t2339761290 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (intptr_t)(0);
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (PullAudioInputStreamCallback_t932724598 *)NULL;
			intptr_t L_0 = ___context0;
			PullAudioInputStream_t1876817371 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisPullAudioInputStream_t1876817371_m1249423210_RuntimeMethod_var);
			V_2 = L_1;
			PullAudioInputStream_t1876817371 * L_2 = V_2;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_2, (String_t*)NULL, /*hidden argument*/NULL);
			PullAudioInputStream_t1876817371 * L_3 = V_2;
			NullCheck(L_3);
			bool L_4 = ((AudioInputStream_t896891398 *)L_3)->get_isDisposing_0();
			if (!L_4)
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			goto IL_0094;
		}

IL_0020:
		{
			PullAudioInputStream_t1876817371 * L_5 = V_2;
			NullCheck(L_5);
			PullAudioInputStreamCallback_t932724598 * L_6 = L_5->get_callback_4();
			V_1 = L_6;
			PullAudioInputStreamCallback_t932724598 * L_7 = V_1;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_7, (String_t*)NULL, /*hidden argument*/NULL);
			PullAudioInputStreamCallback_t932724598 * L_8 = V_1;
			int32_t L_9 = ___id1;
			NullCheck(L_8);
			String_t* L_10 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_8, L_9);
			V_3 = L_10;
			String_t* L_11 = V_3;
			SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_11, (String_t*)NULL, /*hidden argument*/NULL);
			Encoding_t1523322056 * L_12 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_13 = V_3;
			NullCheck(L_12);
			ByteU5BU5D_t4116647657* L_14 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, L_13);
			V_4 = L_14;
			ByteU5BU5D_t4116647657* L_15 = V_4;
			NullCheck(L_15);
			uint32_t L_16 = ___size3;
			SpxExceptionThrower_ThrowIfFail_m1636052394(NULL /*static, unused*/, (bool)((((int32_t)((((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))) > ((int64_t)(((int64_t)((uint64_t)L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			intptr_t L_17 = ___buffer2;
			bool L_18 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_17, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0075;
			}
		}

IL_0068:
		{
			ByteU5BU5D_t4116647657* L_19 = V_4;
			intptr_t L_20 = ___buffer2;
			ByteU5BU5D_t4116647657* L_21 = V_4;
			NullCheck(L_21);
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
			Marshal_Copy_m1562111546(NULL /*static, unused*/, L_19, 0, (intptr_t)L_20, (((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))), /*hidden argument*/NULL);
		}

IL_0075:
		{
			goto IL_0094;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0077;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t2339761290_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0084;
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_22 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_22, /*hidden argument*/NULL);
		goto IL_0094;
	} // end catch (depth: 1)

CATCH_0084:
	{ // begin catch(System.ApplicationException)
		V_5 = ((ApplicationException_t2339761290 *)__exception_local);
		ApplicationException_t2339761290 * L_23 = V_5;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_23);
		SpxExceptionThrower_LogError_m4248820418(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		goto IL_0094;
	} // end catch (depth: 1)

IL_0094:
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
// System.String Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern "C" IL2CPP_METHOD_ATTR String_t* PullAudioInputStreamCallback_GetProperty_m2283422249 (PullAudioInputStreamCallback_t932724598 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStreamCallback_GetProperty_m2283422249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral757602046;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Close()
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStreamCallback_Close_m263385402 (PullAudioInputStreamCallback_t932724598 * __this, const RuntimeMethod* method)
{
	{
		PullAudioInputStreamCallback_Dispose_m2001872325(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStreamCallback_Dispose_m2001872325 (PullAudioInputStreamCallback_t932724598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioInputStreamCallback_Dispose_m2001872325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStreamCallback_Dispose_m1747377824 (PullAudioInputStreamCallback_t932724598 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disposed_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___disposing0;
		__this->set_disposed_0((bool)1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Audio.PullAudioInputStreamCallback::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PullAudioInputStreamCallback__ctor_m1901173905 (PullAudioInputStreamCallback_t932724598 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern "C" IL2CPP_METHOD_ATTR CancellationDetails_t2773841337 * CancellationDetails_FromResult_m4248171642 (RuntimeObject * __this /* static, unused */, RecognitionResult_t1013610727 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationDetails_FromResult_m4248171642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognitionResult_t1013610727 * L_0 = ___result0;
		CancellationDetails_t2773841337 * L_1 = (CancellationDetails_t2773841337 *)il2cpp_codegen_object_new(CancellationDetails_t2773841337_il2cpp_TypeInfo_var);
		CancellationDetails__ctor_m3331148975(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m3331148975 (CancellationDetails_t2773841337 * __this, RecognitionResult_t1013610727 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationDetails__ctor_m3331148975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RecognitionResult_t1013610727 * L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		RecognitionResult_t1013610727 * L_1 = ___result0;
		__this->set_recognitionResult_3(L_1);
		RecognitionResult_t1013610727 * L_2 = __this->get_recognitionResult_3();
		NullCheck(L_2);
		InteropSafeHandle_t575154845 * L_3 = L_2->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_3, _stringLiteral2011430506, /*hidden argument*/NULL);
		RecognitionResult_t1013610727 * L_4 = __this->get_recognitionResult_3();
		NullCheck(L_4);
		InteropSafeHandle_t575154845 * L_5 = L_4->get_resultHandle_4();
		intptr_t L_6 = CancellationDetails_result_get_reason_canceled_m1055698844(NULL /*static, unused*/, L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m3788033193(__this, L_7, /*hidden argument*/NULL);
		RecognitionResult_t1013610727 * L_8 = __this->get_recognitionResult_3();
		NullCheck(L_8);
		InteropSafeHandle_t575154845 * L_9 = L_8->get_resultHandle_4();
		intptr_t L_10 = CancellationDetails_result_get_canceled_error_code_m2382192662(NULL /*static, unused*/, L_9, (int32_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_m1397727429(__this, L_11, /*hidden argument*/NULL);
		RecognitionResult_t1013610727 * L_12 = __this->get_recognitionResult_3();
		NullCheck(L_12);
		PropertyCollection_t65000186 * L_13 = RecognitionResult_get_Properties_m1976044485(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = PropertyCollection_GetProperty_m774443618(L_13, ((int32_t)5001), /*hidden argument*/NULL);
		CancellationDetails_set_ErrorDetails_m1532243648(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
extern "C" IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m2462958577 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m3788033193 (CancellationDetails_t2773841337 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m439645568 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m1397727429 (CancellationDetails_t2773841337 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
extern "C" IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m3590449650 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
extern "C" IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m1532243648 (CancellationDetails_t2773841337 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_m2447918695 (CancellationDetails_t2773841337 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationDetails_ToString_m2447918695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = CancellationDetails_get_Reason_m2462958577(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(CancellationReason_t1799596189_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = CancellationDetails_get_ErrorDetails_m3590449650(__this, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m4086832682(NULL /*static, unused*/, L_0, _stringLiteral3172266850, L_3, L_4, /*hidden argument*/NULL);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioConfig::audio_config_create_audio_input_from_stream(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioConfig_audio_config_create_audio_input_from_stream_m467026033 (RuntimeObject * __this /* static, unused */, intptr_t* ___audioConfig0, InteropSafeHandle_t575154845 * ___audioStream1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_config_create_audio_input_from_stream", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_config_create_audio_input_from_stream'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___audioStream1' to native representation
	void* ____audioStream1_marshaled = NULL;
	if (___audioStream1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioStream"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____audioStream1 = false;
	SafeHandle_DangerousAddRef_m614714386(___audioStream1, (&___safeHandle_reference_incremented_for____audioStream1), NULL);
	____audioStream1_marshaled = reinterpret_cast<void*>((___audioStream1)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___audioConfig0, ____audioStream1_marshaled);

	// Marshaling cleanup of parameter '___audioStream1' native representation
	if (___safeHandle_reference_incremented_for____audioStream1)
	{
		SafeHandle_DangerousRelease_m190326290(___audioStream1, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioConfig::audio_config_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioConfig_audio_config_release_m1913113031 (RuntimeObject * __this /* static, unused */, intptr_t ___audioConfig0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_config_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_config_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___audioConfig0);

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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioInputStream::audio_stream_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioInputStream_audio_stream_release_m3829443659 (RuntimeObject * __this /* static, unused */, intptr_t ___audioStream0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_stream_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_stream_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___audioStream0);

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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioStreamFormat::audio_stream_format_create_from_default_input(System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioStreamFormat_audio_stream_format_create_from_default_input_m1219801879 (RuntimeObject * __this /* static, unused */, intptr_t* ___format0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_stream_format_create_from_default_input", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_stream_format_create_from_default_input'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___format0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioStreamFormat::audio_stream_format_create_from_waveformat_pcm(System.IntPtr&,System.UInt32,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioStreamFormat_audio_stream_format_create_from_waveformat_pcm_m2731621622 (RuntimeObject * __this /* static, unused */, intptr_t* ___format0, uint32_t ___samplesPerSecond1, uint8_t ___bitsPerSample2, uint8_t ___channels3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, uint32_t, uint8_t, uint8_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(uint32_t) + sizeof(uint8_t) + 3 + sizeof(uint8_t) + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_stream_format_create_from_waveformat_pcm", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_stream_format_create_from_waveformat_pcm'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___format0, ___samplesPerSecond1, ___bitsPerSample2, ___channels3);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.AudioStreamFormat::audio_stream_format_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AudioStreamFormat_audio_stream_format_release_m3483132923 (RuntimeObject * __this /* static, unused */, intptr_t ___format0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_stream_format_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_stream_format_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___format0);

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
extern "C"  void DelegatePInvokeWrapper_CallbackFunctionDelegate_t2754546357 (CallbackFunctionDelegate_t2754546357 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___hreco0, ___hevent1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m3706658532 (CallbackFunctionDelegate_t2754546357 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_m2799254393 (CallbackFunctionDelegate_t2754546357 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___hreco0, ___hevent1, ___context2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
							else
								GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
							else
								VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___hreco0, ___hevent1, ___context2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
						else
							GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
						else
							VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CallbackFunctionDelegate_BeginInvoke_m2499651188 (CallbackFunctionDelegate_t2754546357 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackFunctionDelegate_BeginInvoke_m2499651188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hreco0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hevent1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_EndInvoke_m3094519224 (CallbackFunctionDelegate_t2754546357 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
extern "C" IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m1055698844 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason_canceled", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'result_get_reason_canceled'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m614714386(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m190326290(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
extern "C" IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m2382192662 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_canceled_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'result_get_canceled_error_code'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m614714386(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___errorCode1);

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m190326290(___result0, NULL);
	}

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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_m1791569572 (RuntimeObject * __this /* static, unused */, intptr_t ___eventHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_event_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_event_handle_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0);

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
extern "C"  intptr_t DelegatePInvokeWrapper_HandleRelease_t566698942 (HandleRelease_t566698942 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___hresult0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HandleRelease__ctor_m2341069289 (HandleRelease_t566698942 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m4048945605 (HandleRelease_t566698942 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	intptr_t result;
	memset(&result, 0, sizeof(result));
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef intptr_t (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___hresult0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef intptr_t (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___hresult0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
							else
								result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hresult0);
							else
								result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hresult0);
						}
					}
					else
					{
						typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___hresult0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___hresult0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
						else
							result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hresult0);
						else
							result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hresult0);
					}
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.HandleRelease::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandleRelease_BeginInvoke_m2584034124 (HandleRelease_t566698942 * __this, intptr_t ___hresult0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandleRelease_BeginInvoke_m2584034124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hresult0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR intptr_t HandleRelease_EndInvoke_m2103245019 (HandleRelease_t566698942 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
extern "C" IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_m460085502 (InteropSafeHandle_t575154845 * __this, intptr_t ___handle0, HandleRelease_t566698942 * ___releaseHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle__ctor_m460085502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m124356559(__this, (intptr_t)(0), (bool)1, /*hidden argument*/NULL);
		HandleRelease_t566698942 * L_0 = ___releaseHandle1;
		__this->set_releaseHandleFunc_6(L_0);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m2809947802(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
extern "C" IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_m1450695761 (InteropSafeHandle_t575154845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_get_IsInvalid_m1450695761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_t3273388951 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_t3273388951 *)__this)->get_handle_0();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m987082960((&L_3), (-1), /*hidden argument*/NULL);
		bool L_4 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
extern "C" IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_m28598792 (InteropSafeHandle_t575154845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_ReleaseHandle_m28598792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRelease_t566698942 * L_0 = __this->get_releaseHandleFunc_6();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		HandleRelease_t566698942 * L_1 = __this->get_releaseHandleFunc_6();
		intptr_t L_2 = ((SafeHandle_t3273388951 *)__this)->get_handle_0();
		NullCheck(L_1);
		intptr_t L_3 = HandleRelease_Invoke_m4048945605(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_releaseHandleFunc_6((HandleRelease_t566698942 *)NULL);
		((SafeHandle_t3273388951 *)__this)->set_handle_0((intptr_t)(0));
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_m1849355689 (InteropSafeHandle_t575154845 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m1566891032 (MonoPInvokeCallbackAttribute_t2613355731 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m921854860 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_set_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'property_bag_set_string'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_m614714386(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___value3);

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m190326290(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m955216736 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_get_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'property_bag_get_string'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_m614714386(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m190326290(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m371955663 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_free_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'property_bag_free_string'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_m143452844 (RuntimeObject * __this /* static, unused */, intptr_t ___propbag0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'property_bag_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___propbag0);

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream::audio_stream_create_pull_audio_input_stream(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_audio_stream_create_pull_audio_input_stream_m4042539026 (RuntimeObject * __this /* static, unused */, intptr_t* ___audioStream0, InteropSafeHandle_t575154845 * ___format1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "audio_stream_create_pull_audio_input_stream", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'audio_stream_create_pull_audio_input_stream'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___format1' to native representation
	void* ____format1_marshaled = NULL;
	if (___format1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("format"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____format1 = false;
	SafeHandle_DangerousAddRef_m614714386(___format1, (&___safeHandle_reference_incremented_for____format1), NULL);
	____format1_marshaled = reinterpret_cast<void*>((___format1)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___audioStream0, ____format1_marshaled);

	// Marshaling cleanup of parameter '___format1' native representation
	if (___safeHandle_reference_incremented_for____format1)
	{
		SafeHandle_DangerousRelease_m190326290(___format1, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream::pull_audio_input_stream_set_callbacks(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate,Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_pull_audio_input_stream_set_callbacks_m1729906098 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___audioStream0, intptr_t ___context1, PullAudioStreamReadDelegate_t3274582108 * ___readCallback2, PullAudioStreamCloseDelegate_t1321591398 * ___closeCallback3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "pull_audio_input_stream_set_callbacks", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'pull_audio_input_stream_set_callbacks'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___audioStream0' to native representation
	void* ____audioStream0_marshaled = NULL;
	if (___audioStream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioStream"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____audioStream0 = false;
	SafeHandle_DangerousAddRef_m614714386(___audioStream0, (&___safeHandle_reference_incremented_for____audioStream0), NULL);
	____audioStream0_marshaled = reinterpret_cast<void*>((___audioStream0)->get_handle_0());

	// Marshaling of parameter '___readCallback2' to native representation
	Il2CppMethodPointer ____readCallback2_marshaled = NULL;
	____readCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___readCallback2));

	// Marshaling of parameter '___closeCallback3' to native representation
	Il2CppMethodPointer ____closeCallback3_marshaled = NULL;
	____closeCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___closeCallback3));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____audioStream0_marshaled, ___context1, ____readCallback2_marshaled, ____closeCallback3_marshaled);

	// Marshaling cleanup of parameter '___audioStream0' native representation
	if (___safeHandle_reference_incremented_for____audioStream0)
	{
		SafeHandle_DangerousRelease_m190326290(___audioStream0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PullAudioInputStream::pull_audio_input_stream_set_getproperty_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t PullAudioInputStream_pull_audio_input_stream_set_getproperty_callback_m2815087706 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___audioStream0, intptr_t ___context1, PullAudioStreamGetPropertyDelegate_t2901781538 * ___getPropertyCallback2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "pull_audio_input_stream_set_getproperty_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'pull_audio_input_stream_set_getproperty_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___audioStream0' to native representation
	void* ____audioStream0_marshaled = NULL;
	if (___audioStream0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioStream"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____audioStream0 = false;
	SafeHandle_DangerousAddRef_m614714386(___audioStream0, (&___safeHandle_reference_incremented_for____audioStream0), NULL);
	____audioStream0_marshaled = reinterpret_cast<void*>((___audioStream0)->get_handle_0());

	// Marshaling of parameter '___getPropertyCallback2' to native representation
	Il2CppMethodPointer ____getPropertyCallback2_marshaled = NULL;
	____getPropertyCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___getPropertyCallback2));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____audioStream0_marshaled, ___context1, ____getPropertyCallback2_marshaled);

	// Marshaling cleanup of parameter '___audioStream0' native representation
	if (___safeHandle_reference_incremented_for____audioStream0)
	{
		SafeHandle_DangerousRelease_m190326290(___audioStream0, NULL);
	}

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
extern "C"  void DelegatePInvokeWrapper_PullAudioStreamCloseDelegate_t1321591398 (PullAudioStreamCloseDelegate_t1321591398 * __this, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___context0);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamCloseDelegate__ctor_m854461610 (PullAudioStreamCloseDelegate_t1321591398 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamCloseDelegate_Invoke_m692859683 (PullAudioStreamCloseDelegate_t1321591398 * __this, intptr_t ___context0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___context0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___context0);
							else
								GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___context0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0);
							else
								VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___context0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___context0);
						else
							GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___context0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0);
						else
							VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PullAudioStreamCloseDelegate_BeginInvoke_m4092767427 (PullAudioStreamCloseDelegate_t1321591398 * __this, intptr_t ___context0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioStreamCloseDelegate_BeginInvoke_m4092767427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamCloseDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamCloseDelegate_EndInvoke_m2184450986 (PullAudioStreamCloseDelegate_t1321591398 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_PullAudioStreamGetPropertyDelegate_t2901781538 (PullAudioStreamGetPropertyDelegate_t2901781538 * __this, intptr_t ___context0, int32_t ___id1, intptr_t ___dataBuffer2, uint32_t ___size3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___id1, ___dataBuffer2, ___size3);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamGetPropertyDelegate__ctor_m3183554052 (PullAudioStreamGetPropertyDelegate_t2901781538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate::Invoke(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PropertyId,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamGetPropertyDelegate_Invoke_m275680789 (PullAudioStreamGetPropertyDelegate_t2901781538 * __this, intptr_t ___context0, int32_t ___id1, intptr_t ___dataBuffer2, uint32_t ___size3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, intptr_t, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___context0, ___id1, ___dataBuffer2, ___size3, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, intptr_t, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, ___id1, ___dataBuffer2, ___size3, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
							else
								GenericVirtActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
							else
								VirtActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___id1, ___dataBuffer2, ___size3, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, intptr_t, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___context0, ___id1, ___dataBuffer2, ___size3, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, intptr_t, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, ___id1, ___dataBuffer2, ___size3, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
						else
							GenericVirtActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
						else
							VirtActionInvoker4< intptr_t, int32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___id1, ___dataBuffer2, ___size3);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, intptr_t, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___id1, ___dataBuffer2, ___size3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate::BeginInvoke(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.PropertyId,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PullAudioStreamGetPropertyDelegate_BeginInvoke_m3393088630 (PullAudioStreamGetPropertyDelegate_t2901781538 * __this, intptr_t ___context0, int32_t ___id1, intptr_t ___dataBuffer2, uint32_t ___size3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioStreamGetPropertyDelegate_BeginInvoke_m3393088630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	__d_args[1] = Box(PropertyId_t1072913110_il2cpp_TypeInfo_var, &___id1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataBuffer2);
	__d_args[3] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___size3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamGetPropertyDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamGetPropertyDelegate_EndInvoke_m4211796471 (PullAudioStreamGetPropertyDelegate_t2901781538 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper_PullAudioStreamReadDelegate_t3274582108 (PullAudioStreamReadDelegate_t3274582108 * __this, intptr_t ___context0, intptr_t ___dataBuffer1, uint32_t ___size2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___dataBuffer1, ___size2);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PullAudioStreamReadDelegate__ctor_m3933300715 (PullAudioStreamReadDelegate_t3274582108 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate::Invoke(System.IntPtr,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t PullAudioStreamReadDelegate_Invoke_m3464506109 (PullAudioStreamReadDelegate_t3274582108 * __this, intptr_t ___context0, intptr_t ___dataBuffer1, uint32_t ___size2, const RuntimeMethod* method)
{
	int32_t result = 0;
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef int32_t (*FunctionPointerType) (RuntimeObject *, intptr_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___context0, ___dataBuffer1, ___size2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, ___dataBuffer1, ___size2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___dataBuffer1, ___size2);
							else
								result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___dataBuffer1, ___size2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___dataBuffer1, ___size2);
							else
								result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___dataBuffer1, ___size2);
						}
					}
					else
					{
						typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___dataBuffer1, ___size2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject *, intptr_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___context0, ___dataBuffer1, ___size2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___context0, ___dataBuffer1, ___size2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___dataBuffer1, ___size2);
						else
							result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___context0, ___dataBuffer1, ___size2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___dataBuffer1, ___size2);
						else
							result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___dataBuffer1, ___size2);
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___dataBuffer1, ___size2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PullAudioStreamReadDelegate_BeginInvoke_m3884205490 (PullAudioStreamReadDelegate_t3274582108 * __this, intptr_t ___context0, intptr_t ___dataBuffer1, uint32_t ___size2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PullAudioStreamReadDelegate_BeginInvoke_m3884205490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataBuffer1);
	__d_args[2] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___size2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.PullAudioStreamReadDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t PullAudioStreamReadDelegate_EndInvoke_m3680742476 (PullAudioStreamReadDelegate_t3274582108 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_m1794747469 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'result_get_reason'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m614714386(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m190326290(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_m4248376878 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_result_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'result_get_result_id'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m614714386(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m190326290(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_m139188767 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, intptr_t ___text1, uint32_t ___textLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_text", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'result_get_text'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m614714386(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___text1, ___textLength2);

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m190326290(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m198646464 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'result_get_property_bag'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m614714386(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m190326290(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_m2775958239 (RuntimeObject * __this /* static, unused */, intptr_t ___result0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_result_handle_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___result0);

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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m623476501 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_get_property_bag'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___propbag1);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_m230591112 (RuntimeObject * __this /* static, unused */, intptr_t ___recoHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_handle_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m254497770 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_start_continuous_recognition_async'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m3185589748 (RuntimeObject * __this /* static, unused */, intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_start_continuous_recognition_async_wait_for'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m3112348459 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_stop_continuous_recognition_async'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m3421695632 (RuntimeObject * __this /* static, unused */, intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_stop_continuous_recognition_async_wait_for'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m3849934744 (RuntimeObject * __this /* static, unused */, intptr_t ___asyncHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_async_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_async_handle_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m2124849947 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uint64_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_offset", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_recognition_event_get_offset'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___offset1);

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_m3332958148 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___eventHandle0, intptr_t ___sessionIdStr1, uint32_t ___sessionId2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_event_get_session_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_session_event_get_session_id'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m1848447793 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_result", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_recognition_event_get_result'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___result1);

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_m860684074 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_started_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_session_started_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m323562248 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_stopped_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_session_stopped_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m356941968 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_start_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_speech_start_detected_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_m2590099270 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_end_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_speech_end_detected_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m1306649434 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognizing_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_recognizing_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_m1751192708 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognized_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_recognized_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m440208621 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___recoHandle0, CallbackFunctionDelegate_t2754546357 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_canceled_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_canceled_set_callback'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m190326290(___recoHandle0, NULL);
	}

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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m3465530757 (RuntimeObject * __this /* static, unused */, intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'speech_config_from_subscription'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_m3942305242 (RuntimeObject * __this /* static, unused */, intptr_t ___config0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'speech_config_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___config0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_m686976697 (RuntimeObject * __this /* static, unused */, InteropSafeHandle_t575154845 * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'speech_config_get_property_bag'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_m614714386(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___propbag1);

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_m190326290(___config0, NULL);
	}

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
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m4158136712 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_GetMessage_m4158136712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		intptr_t L_1 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_2 = SpxError_error_get_message_m2056840612(NULL /*static, unused*/, (intptr_t)L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		intptr_t L_3 = V_1;
		bool L_4 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_5 = V_1;
		String_t* L_6 = Utf8StringMarshaler_MarshalNativeToManaged_m3666434662(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m2790175200 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_GetErrorCode_m2790175200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_1 = SpxError_error_get_error_code_m2075763689(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		int32_t L_2 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, (intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxError_Release_m1860549285 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_Release_m1860549285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_1 = SpxError_error_release_m1302140840(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m2056840612 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_message", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'error_get_message'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m2075763689 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'error_get_error_code'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m1302140840 (RuntimeObject * __this /* static, unused */, intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'error_release'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SpxError__cctor_m2956493158 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError__cctor_m2956493158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = IntPtr_op_Explicit_m1593216315(NULL /*static, unused*/, ((int32_t)25), /*hidden argument*/NULL);
		((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->set_BufferTooSmall_0((intptr_t)L_0);
		intptr_t L_1 = IntPtr_op_Explicit_m1593216315(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->set_RuntimeError_1((intptr_t)L_1);
		intptr_t L_2 = IntPtr_op_Explicit_m1593216315(NULL /*static, unused*/, ((int32_t)33), /*hidden argument*/NULL);
		((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->set_InvalidHandle_2((intptr_t)L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m2587875632 (RuntimeObject * __this /* static, unused */, intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_ThrowIfFail_m2587875632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		int32_t L_3 = SpxError_GetErrorCode_m2790175200(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		intptr_t L_4 = ___hr0;
		String_t* L_5 = SpxError_GetMessage_m4158136712(NULL /*static, unused*/, (intptr_t)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		bool L_7 = String_IsNullOrWhiteSpace_m3034475861(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_8 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = Int32_ToString_m2507389746((int32_t*)(&V_0), _stringLiteral3452614648, L_9, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_11 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_12 = String_ToLower_m3490221821(L_10, L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m3179549879(NULL /*static, unused*/, L_8, _stringLiteral434917173, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_004e:
	{
		intptr_t L_14 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		SpxError_Release_m1860549285(NULL /*static, unused*/, (intptr_t)L_14, /*hidden argument*/NULL);
		String_t* L_15 = V_1;
		ApplicationException_t2339761290 * L_16 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m2517758450(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, SpxExceptionThrower_ThrowIfFail_m2587875632_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m4145114651 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_ThrowIfNull_m4145114651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___message1;
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___message1 = _stringLiteral708836215;
	}

IL_0012:
	{
		String_t* L_3 = ___message1;
		ApplicationException_t2339761290 * L_4 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m2517758450(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, SpxExceptionThrower_ThrowIfNull_m4145114651_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m3313473631 (RuntimeObject * __this /* static, unused */, intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m1636052394 (RuntimeObject * __this /* static, unused */, bool ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_ThrowIfFail_m1636052394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = ___item0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		V_0 = _stringLiteral482389575;
		String_t* L_1 = V_0;
		ApplicationException_t2339761290 * L_2 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m2517758450(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SpxExceptionThrower_ThrowIfFail_m1636052394_RuntimeMethod_var);
	}

IL_0010:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m2791746676 (RuntimeObject * __this /* static, unused */, intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_LogErrorIfFail_m2791746676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		int32_t L_3 = SpxError_GetErrorCode_m2790175200(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_5 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_6 = Int32_ToString_m2507389746((int32_t*)(&V_0), _stringLiteral3452614648, L_5, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_8 = String_ToLower_m3490221821(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Format_m3179549879(NULL /*static, unused*/, L_4, _stringLiteral3543177464, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		intptr_t L_10 = ___hr0;
		SpxError_Release_m1860549285(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m3105728682 (RuntimeObject * __this /* static, unused */, intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_LogError_m3105728682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		int32_t L_3 = SpxError_GetErrorCode_m2790175200(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_5 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_6 = Int32_ToString_m2507389746((int32_t*)(&V_0), _stringLiteral3452614648, L_5, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_8 = String_ToLower_m3490221821(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Format_m3179549879(NULL /*static, unused*/, L_4, _stringLiteral3543177464, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		intptr_t L_10 = ___hr0;
		SpxError_Release_m1860549285(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
extern "C" IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m4248820418 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
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
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m1775810571 (RuntimeObject * __this /* static, unused */, GetResultDelegate_t2074362391 * ___functionPtr0, InteropSafeHandle_t575154845 * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxFactory_GetDataFromHandleUsingDelegate_m1775810571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		int32_t L_1 = ___maxCharCount2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		GetResultDelegate_t2074362391 * L_3 = ___functionPtr0;
		InteropSafeHandle_t575154845 * L_4 = ___handle1;
		intptr_t L_5 = V_1;
		int32_t L_6 = ___maxCharCount2;
		NullCheck(L_3);
		intptr_t L_7 = GetResultDelegate_Invoke_m568606618(L_3, L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_1;
		String_t* L_9 = Utf8StringMarshaler_MarshalNativeToManaged_m3666434662(NULL /*static, unused*/, (intptr_t)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		intptr_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_m712700478 (RuntimeObject * __this /* static, unused */, intptr_t* ___recoHandle0, InteropSafeHandle_t575154845 * ___speechconfig1, InteropSafeHandle_t575154845 * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_speech_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'recognizer_create_speech_recognizer_from_config'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m614714386(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m614714386(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m190326290(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m190326290(___audioInput2, NULL);
	}

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
extern "C"  intptr_t DelegatePInvokeWrapper_GetResultDelegate_t2074362391 (GetResultDelegate_t2074362391 * __this, InteropSafeHandle_t575154845 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_m614714386(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___result1, ___maxCharCount2);

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m190326290(___handle0, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_m2570829637 (GetResultDelegate_t2074362391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m568606618 (GetResultDelegate_t2074362391 * __this, InteropSafeHandle_t575154845 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	intptr_t result;
	memset(&result, 0, sizeof(result));
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef intptr_t (*FunctionPointerType) (RuntimeObject *, InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___handle0, ___result1, ___maxCharCount2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef intptr_t (*FunctionPointerType) (RuntimeObject *, void*, InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
							else
								result = GenericVirtFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
							else
								result = VirtFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
						}
					}
					else
					{
						typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
							else
								result = GenericVirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handle0, ___result1, ___maxCharCount2);
							else
								result = VirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handle0, ___result1, ___maxCharCount2);
						}
					}
					else
					{
						typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject *, InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject *, void*, InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
						else
							result = GenericVirtFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
						else
							result = VirtFuncInvoker3< intptr_t, InteropSafeHandle_t575154845 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
					}
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
						else
							result = GenericVirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handle0, ___result1, ___maxCharCount2);
						else
							result = VirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handle0, ___result1, ___maxCharCount2);
					}
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_t575154845 *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::BeginInvoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetResultDelegate_BeginInvoke_m1278833283 (GetResultDelegate_t2074362391 * __this, InteropSafeHandle_t575154845 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetResultDelegate_BeginInvoke_m1278833283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___handle0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___result1);
	__d_args[2] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___maxCharCount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_EndInvoke_m675053313 (GetResultDelegate_t2074362391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m3666434662 (RuntimeObject * __this /* static, unused */, intptr_t ___native0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utf8StringMarshaler_MarshalNativeToManaged_m3666434662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
	}

IL_0008:
	{
		intptr_t L_1 = ___native0;
		int32_t L_2 = V_0;
		intptr_t L_3 = IntPtr_op_Addition_m4207902953(NULL /*static, unused*/, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		uint8_t L_4 = Marshal_ReadByte_m3994257739(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)4194304))))
		{
			goto IL_0004;
		}
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)4194304))))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral2412971972, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Utf8StringMarshaler_MarshalNativeToManaged_m3666434662_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_t4116647657* L_9 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		intptr_t L_10 = ___native0;
		ByteU5BU5D_t4116647657* L_11 = V_1;
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, (intptr_t)L_10, L_11, 0, L_12, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_13 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_13, L_14);
		return L_15;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m393779801 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		intptr_t L_1 = Utf8StringMarshaler_MarshalManagedToNative_m1836281341(NULL /*static, unused*/, L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m1836281341 (RuntimeObject * __this /* static, unused */, String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utf8StringMarshaler_MarshalManagedToNative_m1836281341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t* L_1 = ___length1;
		*((int32_t*)L_1) = (int32_t)0;
		return (intptr_t)(0);
	}

IL_000c:
	{
		Encoding_t1523322056 * L_2 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		int32_t* L_5 = ___length1;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		NullCheck(L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)1));
		int32_t* L_7 = ___length1;
		int32_t L_8 = *((int32_t*)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_9 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_9;
		ByteU5BU5D_t4116647657* L_10 = V_0;
		intptr_t L_11 = V_1;
		ByteU5BU5D_t4116647657* L_12 = V_0;
		NullCheck(L_12);
		Marshal_Copy_m1562111546(NULL /*static, unused*/, L_10, 0, (intptr_t)L_11, (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), /*hidden argument*/NULL);
		intptr_t L_13 = V_1;
		ByteU5BU5D_t4116647657* L_14 = V_0;
		NullCheck(L_14);
		intptr_t L_15 = IntPtr_op_Addition_m4207902953(NULL /*static, unused*/, (intptr_t)L_13, (((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), /*hidden argument*/NULL);
		Marshal_WriteByte_m3462200872(NULL /*static, unused*/, (intptr_t)L_15, (uint8_t)0, /*hidden argument*/NULL);
		intptr_t L_16 = V_1;
		return (intptr_t)L_16;
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m2224112335 (PropertyCollection_t65000186 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection__ctor_m2224112335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___propertyBagPtr0;
		intptr_t L_1 = (intptr_t)PropertyCollection_property_bag_release_m143452844_RuntimeMethod_var;
		HandleRelease_t566698942 * L_2 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_2, NULL, (intptr_t)L_1, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_3 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_3, (intptr_t)L_0, L_2, /*hidden argument*/NULL);
		__this->set_propbagHandle_0(L_3);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection_Close_m299802329 (PropertyCollection_t65000186 * __this, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_t575154845 * L_0 = __this->get_propbagHandle_0();
		NullCheck(L_0);
		SafeHandle_Dispose_m817995135(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern "C" IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_m774443618 (PropertyCollection_t65000186 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_GetProperty_m774443618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_t575154845 * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_1 = __this->get_propbagHandle_0();
		int32_t L_2 = ___id0;
		String_t* L_3 = PropertyCollection_GetPropertyString_m3841868362(__this, L_1, L_2, (String_t*)NULL, _stringLiteral757602046, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m1596571729 (PropertyCollection_t65000186 * __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_SetProperty_m1596571729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		InteropSafeHandle_t575154845 * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2 = Utf8StringMarshaler_MarshalManagedToNative_m393779801(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_t575154845 * L_3 = __this->get_propbagHandle_0();
		int32_t L_4 = ___id0;
		intptr_t L_5 = V_0;
		intptr_t L_6 = PropertyCollection_property_bag_set_string_m921854860(NULL /*static, unused*/, L_3, L_4, (intptr_t)(0), (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x33, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m1236456671 (PropertyCollection_t65000186 * __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_SetProperty_m1236456671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		InteropSafeHandle_t575154845 * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2 = Utf8StringMarshaler_MarshalManagedToNative_m393779801(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		String_t* L_3 = ___propertyName0;
		intptr_t L_4 = Utf8StringMarshaler_MarshalManagedToNative_m393779801(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_t575154845 * L_5 = __this->get_propbagHandle_0();
		intptr_t L_6 = V_1;
		intptr_t L_7 = V_0;
		intptr_t L_8 = PropertyCollection_property_bag_set_string_m921854860(NULL /*static, unused*/, L_5, (-1), (intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3C, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		intptr_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_1;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_m3841868362 (PropertyCollection_t65000186 * __this, InteropSafeHandle_t575154845 * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_GetPropertyString_m3841868362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		String_t* L_1 = ___name2;
		intptr_t L_2 = Utf8StringMarshaler_MarshalManagedToNative_m393779801(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		String_t* L_3 = ___defaultValue3;
		intptr_t L_4 = Utf8StringMarshaler_MarshalManagedToNative_m393779801(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_4;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			InteropSafeHandle_t575154845 * L_5 = ___propHandle0;
			int32_t L_6 = ___id1;
			intptr_t L_7 = V_1;
			intptr_t L_8 = V_2;
			intptr_t L_9 = PropertyCollection_property_bag_get_string_m955216736(NULL /*static, unused*/, L_5, L_6, (intptr_t)L_7, (intptr_t)L_8, /*hidden argument*/NULL);
			V_3 = (intptr_t)L_9;
			intptr_t L_10 = V_3;
			bool L_11 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			intptr_t L_12 = V_3;
			String_t* L_13 = Utf8StringMarshaler_MarshalNativeToManaged_m3666434662(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
			V_0 = L_13;
			IL2CPP_LEAVE(0x50, FINALLY_0035);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0035;
		}

FINALLY_0035:
		{ // begin finally (depth: 2)
			intptr_t L_14 = V_3;
			intptr_t L_15 = PropertyCollection_property_bag_free_string_m371955663(NULL /*static, unused*/, (intptr_t)L_14, /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_15, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(53)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(53)
		{
			IL2CPP_END_CLEANUP(0x50, FINALLY_0043);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		intptr_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_16, /*hidden argument*/NULL);
		intptr_t L_17 = V_2;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m3951115954 (RecognitionEventArgs_t1307607286 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m3263905054(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_1 = ((SessionEventArgs_t2932258242 *)__this)->get_eventHandle_1();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)0)));
		InteropSafeHandle_t575154845 * L_2 = ((SessionEventArgs_t2932258242 *)__this)->get_eventHandle_1();
		intptr_t L_3 = Recognizer_recognizer_recognition_event_get_offset_m2124849947(NULL /*static, unused*/, L_2, (uint64_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
		uint64_t L_4 = V_0;
		__this->set_U3COffsetU3Ek__BackingField_5(L_4);
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
extern "C" IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m1240295663 (RecognitionEventArgs_t1307607286 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_m3530924907 (RecognitionEventArgs_t1307607286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEventArgs_ToString_m3530924907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = SessionEventArgs_get_SessionId_m2887563617(__this, /*hidden argument*/NULL);
		uint64_t L_2 = RecognitionEventArgs_get_Offset_m1240295663(__this, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m4086832682(NULL /*static, unused*/, L_0, _stringLiteral1470076474, L_1, L_4, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m782105062 (RecognitionResult_t1013610727 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionResult__ctor_m782105062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m3313473631(NULL /*static, unused*/, (intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___resultHandlePtr0;
		intptr_t L_2 = (intptr_t)RecognitionResult_recognizer_result_handle_release_m2775958239_RuntimeMethod_var;
		HandleRelease_t566698942 * L_3 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_4 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_4, (intptr_t)L_1, L_3, /*hidden argument*/NULL);
		__this->set_resultHandle_4(L_4);
		intptr_t L_5 = (intptr_t)RecognitionResult_result_get_result_id_m4248376878_RuntimeMethod_var;
		GetResultDelegate_t2074362391 * L_6 = (GetResultDelegate_t2074362391 *)il2cpp_codegen_object_new(GetResultDelegate_t2074362391_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_m2570829637(L_6, NULL, (intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_7 = __this->get_resultHandle_4();
		String_t* L_8 = SpxFactory_GetDataFromHandleUsingDelegate_m1775810571(NULL /*static, unused*/, L_6, L_7, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CResultIdU3Ek__BackingField_0(L_8);
		intptr_t L_9 = (intptr_t)RecognitionResult_result_get_text_m139188767_RuntimeMethod_var;
		GetResultDelegate_t2074362391 * L_10 = (GetResultDelegate_t2074362391 *)il2cpp_codegen_object_new(GetResultDelegate_t2074362391_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_m2570829637(L_10, NULL, (intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_11 = __this->get_resultHandle_4();
		String_t* L_12 = SpxFactory_GetDataFromHandleUsingDelegate_m1775810571(NULL /*static, unused*/, L_10, L_11, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CTextU3Ek__BackingField_2(L_12);
		V_0 = 0;
		InteropSafeHandle_t575154845 * L_13 = __this->get_resultHandle_4();
		intptr_t L_14 = RecognitionResult_result_get_reason_m1794747469(NULL /*static, unused*/, L_13, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		__this->set_U3CReasonU3Ek__BackingField_1(L_15);
		V_1 = (intptr_t)(0);
		InteropSafeHandle_t575154845 * L_16 = __this->get_resultHandle_4();
		intptr_t L_17 = RecognitionResult_result_get_property_bag_m198646464(NULL /*static, unused*/, L_16, (intptr_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_17, /*hidden argument*/NULL);
		intptr_t L_18 = V_1;
		PropertyCollection_t65000186 * L_19 = (PropertyCollection_t65000186 *)il2cpp_codegen_object_new(PropertyCollection_t65000186_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m2224112335(L_19, (intptr_t)L_18, /*hidden argument*/NULL);
		RecognitionResult_set_Properties_m691225352(__this, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
extern "C" IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m2372579608 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResultIdU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
extern "C" IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m4206590602 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_m3836938529 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_2();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
extern "C" IL2CPP_METHOD_ATTR PropertyCollection_t65000186 * RecognitionResult_get_Properties_m1976044485 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t65000186 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern "C" IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m691225352 (RecognitionResult_t1013610727 * __this, PropertyCollection_t65000186 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t65000186 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m2698709287 (RecognitionResult_t1013610727 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionResult_ToString_m2698709287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = RecognitionResult_get_ResultId_m2372579608(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		int32_t L_5 = RecognitionResult_get_Reason_m4206590602(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ResultReason_t1280999872_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		String_t* L_9 = RecognitionResult_get_Text_m3836938529(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_8;
		PropertyCollection_t65000186 * L_11 = RecognitionResult_get_Properties_m1976044485(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = PropertyCollection_GetProperty_m774443618(L_11, ((int32_t)5000), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral840735891, L_10, /*hidden argument*/NULL);
		return L_13;
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
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_m2835842845(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_m2835842845(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_m3369611404(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_m3369611404(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_m4185769789(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_m4185769789(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_m657974116(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_m657974116(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m1740178303 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SessionStarted_m1740178303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t856417675 * V_0 = NULL;
	EventHandler_1_t856417675 * V_1 = NULL;
	EventHandler_1_t856417675 * V_2 = NULL;
	{
		EventHandler_1_t856417675 * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t856417675 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t856417675 * L_2 = V_1;
		EventHandler_1_t856417675 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t856417675 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t856417675_il2cpp_TypeInfo_var));
		EventHandler_1_t856417675 ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_t856417675 * L_6 = V_2;
		EventHandler_1_t856417675 * L_7 = V_1;
		EventHandler_1_t856417675 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t856417675 *>((EventHandler_1_t856417675 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t856417675 * L_9 = V_0;
		EventHandler_1_t856417675 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t856417675 *)L_9) == ((RuntimeObject*)(EventHandler_1_t856417675 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m2352984339 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SessionStarted_m2352984339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t856417675 * V_0 = NULL;
	EventHandler_1_t856417675 * V_1 = NULL;
	EventHandler_1_t856417675 * V_2 = NULL;
	{
		EventHandler_1_t856417675 * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t856417675 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t856417675 * L_2 = V_1;
		EventHandler_1_t856417675 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t856417675 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t856417675_il2cpp_TypeInfo_var));
		EventHandler_1_t856417675 ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_t856417675 * L_6 = V_2;
		EventHandler_1_t856417675 * L_7 = V_1;
		EventHandler_1_t856417675 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t856417675 *>((EventHandler_1_t856417675 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t856417675 * L_9 = V_0;
		EventHandler_1_t856417675 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t856417675 *)L_9) == ((RuntimeObject*)(EventHandler_1_t856417675 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_m1345392279 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SessionStopped_m1345392279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t856417675 * V_0 = NULL;
	EventHandler_1_t856417675 * V_1 = NULL;
	EventHandler_1_t856417675 * V_2 = NULL;
	{
		EventHandler_1_t856417675 * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t856417675 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t856417675 * L_2 = V_1;
		EventHandler_1_t856417675 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t856417675 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t856417675_il2cpp_TypeInfo_var));
		EventHandler_1_t856417675 ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_t856417675 * L_6 = V_2;
		EventHandler_1_t856417675 * L_7 = V_1;
		EventHandler_1_t856417675 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t856417675 *>((EventHandler_1_t856417675 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t856417675 * L_9 = V_0;
		EventHandler_1_t856417675 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t856417675 *)L_9) == ((RuntimeObject*)(EventHandler_1_t856417675 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m1055597937 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SessionStopped_m1055597937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t856417675 * V_0 = NULL;
	EventHandler_1_t856417675 * V_1 = NULL;
	EventHandler_1_t856417675 * V_2 = NULL;
	{
		EventHandler_1_t856417675 * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t856417675 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t856417675 * L_2 = V_1;
		EventHandler_1_t856417675 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t856417675 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t856417675_il2cpp_TypeInfo_var));
		EventHandler_1_t856417675 ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_t856417675 * L_6 = V_2;
		EventHandler_1_t856417675 * L_7 = V_1;
		EventHandler_1_t856417675 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t856417675 *>((EventHandler_1_t856417675 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t856417675 * L_9 = V_0;
		EventHandler_1_t856417675 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t856417675 *)L_9) == ((RuntimeObject*)(EventHandler_1_t856417675 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_m2266112665 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SpeechStartDetected_m2266112665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3526734015 * V_0 = NULL;
	EventHandler_1_t3526734015 * V_1 = NULL;
	EventHandler_1_t3526734015 * V_2 = NULL;
	{
		EventHandler_1_t3526734015 * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3526734015 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3526734015 * L_2 = V_1;
		EventHandler_1_t3526734015 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3526734015 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3526734015_il2cpp_TypeInfo_var));
		EventHandler_1_t3526734015 ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t3526734015 * L_6 = V_2;
		EventHandler_1_t3526734015 * L_7 = V_1;
		EventHandler_1_t3526734015 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3526734015 *>((EventHandler_1_t3526734015 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3526734015 * L_9 = V_0;
		EventHandler_1_t3526734015 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3526734015 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3526734015 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m3835745858 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SpeechStartDetected_m3835745858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3526734015 * V_0 = NULL;
	EventHandler_1_t3526734015 * V_1 = NULL;
	EventHandler_1_t3526734015 * V_2 = NULL;
	{
		EventHandler_1_t3526734015 * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3526734015 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3526734015 * L_2 = V_1;
		EventHandler_1_t3526734015 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3526734015 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3526734015_il2cpp_TypeInfo_var));
		EventHandler_1_t3526734015 ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t3526734015 * L_6 = V_2;
		EventHandler_1_t3526734015 * L_7 = V_1;
		EventHandler_1_t3526734015 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3526734015 *>((EventHandler_1_t3526734015 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3526734015 * L_9 = V_0;
		EventHandler_1_t3526734015 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3526734015 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3526734015 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m30759701 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SpeechEndDetected_m30759701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3526734015 * V_0 = NULL;
	EventHandler_1_t3526734015 * V_1 = NULL;
	EventHandler_1_t3526734015 * V_2 = NULL;
	{
		EventHandler_1_t3526734015 * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3526734015 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3526734015 * L_2 = V_1;
		EventHandler_1_t3526734015 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3526734015 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3526734015_il2cpp_TypeInfo_var));
		EventHandler_1_t3526734015 ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t3526734015 * L_6 = V_2;
		EventHandler_1_t3526734015 * L_7 = V_1;
		EventHandler_1_t3526734015 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3526734015 *>((EventHandler_1_t3526734015 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3526734015 * L_9 = V_0;
		EventHandler_1_t3526734015 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3526734015 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3526734015 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m2224689410 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SpeechEndDetected_m2224689410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3526734015 * V_0 = NULL;
	EventHandler_1_t3526734015 * V_1 = NULL;
	EventHandler_1_t3526734015 * V_2 = NULL;
	{
		EventHandler_1_t3526734015 * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3526734015 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3526734015 * L_2 = V_1;
		EventHandler_1_t3526734015 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3526734015 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3526734015_il2cpp_TypeInfo_var));
		EventHandler_1_t3526734015 ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t3526734015 * L_6 = V_2;
		EventHandler_1_t3526734015 * L_7 = V_1;
		EventHandler_1_t3526734015 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3526734015 *>((EventHandler_1_t3526734015 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3526734015 * L_9 = V_0;
		EventHandler_1_t3526734015 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3526734015 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3526734015 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add_SessionStarted_m2626428323 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t856417675 * L_0 = __this->get__SessionStarted_0();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_sessionStartedCallbackDelegate_11();
		GCHandle_t3351438187  L_3 = __this->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_session_started_set_callback_m860684074(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t856417675 * L_6 = ___value0;
		Recognizer_add__SessionStarted_m1740178303(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStarted_m4059676082 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SessionStarted_m4059676082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t856417675 * L_0 = ___value0;
		Recognizer_remove__SessionStarted_m2352984339(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t856417675 * L_1 = __this->get__SessionStarted_0();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_session_started_set_callback_m860684074(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add_SessionStopped_m3635891469 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t856417675 * L_0 = __this->get__SessionStopped_1();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_sessionStoppedCallbackDelegate_12();
		GCHandle_t3351438187  L_3 = __this->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_session_stopped_set_callback_m323562248(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t856417675 * L_6 = ___value0;
		Recognizer_add__SessionStopped_m1345392279(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStopped_m2467473832 (Recognizer_t1073947482 * __this, EventHandler_1_t856417675 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SessionStopped_m2467473832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t856417675 * L_0 = ___value0;
		Recognizer_remove__SessionStopped_m1055597937(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t856417675 * L_1 = __this->get__SessionStopped_1();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_session_stopped_set_callback_m323562248(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add_SpeechStartDetected_m2765135723 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t3526734015 * L_0 = __this->get__SpeechStartDetected_2();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_speechStartDetectedCallbackDelegate_9();
		GCHandle_t3351438187  L_3 = __this->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_speech_start_detected_set_callback_m356941968(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t3526734015 * L_6 = ___value0;
		Recognizer_add__SpeechStartDetected_m2266112665(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechStartDetected_m828765200 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SpeechStartDetected_m828765200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3526734015 * L_0 = ___value0;
		Recognizer_remove__SpeechStartDetected_m3835745858(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t3526734015 * L_1 = __this->get__SpeechStartDetected_2();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_speech_start_detected_set_callback_m356941968(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_add_SpeechEndDetected_m2607785010 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t3526734015 * L_0 = __this->get__SpeechEndDetected_3();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_speechEndDetectedCallbackDelegate_10();
		GCHandle_t3351438187  L_3 = __this->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_speech_end_detected_set_callback_m2590099270(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t3526734015 * L_6 = ___value0;
		Recognizer_add__SpeechEndDetected_m30759701(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechEndDetected_m569654298 (Recognizer_t1073947482 * __this, EventHandler_1_t3526734015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SpeechEndDetected_m569654298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3526734015 * L_0 = ___value0;
		Recognizer_remove__SpeechEndDetected_m2224689410(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t3526734015 * L_1 = __this->get__SpeechEndDetected_3();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_speech_end_detected_set_callback_m2590099270(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR void Recognizer__ctor_m3136998617 (Recognizer_t1073947482 * __this, InteropSafeHandle_t575154845 * ___recoPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer__ctor_m3136998617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_asyncStartContinuousHandle_5((intptr_t)(0));
		__this->set_asyncStopContinuousHandle_6((intptr_t)(0));
		__this->set_asyncStartKeywordHandle_7((intptr_t)(0));
		__this->set_asyncStopKeywordHandle_8((intptr_t)(0));
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set_recognizerLock_16(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_1 = ___recoPtr0;
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_2 = ___recoPtr0;
		__this->set_recoHandle_4(L_2);
		GCHandle_t3351438187  L_3 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		__this->set_gch_13(L_3);
		intptr_t L_4 = (intptr_t)Recognizer_FireEvent_SpeechStartDetected_m4185769789_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_5 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_5, NULL, (intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_speechStartDetectedCallbackDelegate_9(L_5);
		intptr_t L_6 = (intptr_t)Recognizer_FireEvent_SpeechEndDetected_m657974116_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_7 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_7, NULL, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_speechEndDetectedCallbackDelegate_10(L_7);
		intptr_t L_8 = (intptr_t)Recognizer_FireEvent_SetSessionStarted_m2835842845_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_9 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_9, NULL, (intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_sessionStartedCallbackDelegate_11(L_9);
		intptr_t L_10 = (intptr_t)Recognizer_FireEvent_SetSessionStopped_m3369611404_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_11 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_11, NULL, (intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_sessionStoppedCallbackDelegate_12(L_11);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Recognizer_Finalize_m3741355336 (Recognizer_t1073947482 * __this, const RuntimeMethod* method)
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
		il2cpp_codegen_memory_barrier();
		__this->set_isDisposing_15(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Recognizer_Dispose_m2251424391 (Recognizer_t1073947482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_Dispose_m2251424391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
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
			il2cpp_codegen_memory_barrier();
			__this->set_isDisposing_15(1);
			RuntimeObject * L_0 = __this->get_recognizerLock_16();
			V_0 = L_0;
			V_1 = (bool)0;
		}

IL_0012:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_1 = V_0;
				Monitor_Enter_m984175629(NULL /*static, unused*/, L_1, (bool*)(&V_1), /*hidden argument*/NULL);
				int32_t L_2 = __this->get_activeAsyncRecognitionCounter_17();
				if (!L_2)
				{
					goto IL_002d;
				}
			}

IL_0022:
			{
				InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
				InvalidOperationException__ctor_m237278729(L_3, _stringLiteral1920023169, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Recognizer_Dispose_m2251424391_RuntimeMethod_var);
			}

IL_002d:
			{
				IL2CPP_LEAVE(0x47, FINALLY_002f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002f;
		}

FINALLY_002f:
		{ // begin finally (depth: 2)
			{
				bool L_4 = V_1;
				if (!L_4)
				{
					goto IL_0038;
				}
			}

IL_0032:
			{
				RuntimeObject * L_5 = V_0;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			}

IL_0038:
			{
				IL2CPP_END_FINALLY(47)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(47)
		{
			IL2CPP_END_CLEANUP(0x47, FINALLY_0039);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_Dispose_m1043385659 (Recognizer_t1073947482 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disposed_14();
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
		__this->set_speechStartDetectedCallbackDelegate_9((CallbackFunctionDelegate_t2754546357 *)NULL);
		__this->set_speechEndDetectedCallbackDelegate_10((CallbackFunctionDelegate_t2754546357 *)NULL);
		__this->set_sessionStartedCallbackDelegate_11((CallbackFunctionDelegate_t2754546357 *)NULL);
		__this->set_sessionStoppedCallbackDelegate_12((CallbackFunctionDelegate_t2754546357 *)NULL);
		GCHandle_t3351438187 * L_1 = __this->get_address_of_gch_13();
		bool L_2 = GCHandle_get_IsAllocated_m1058226959((GCHandle_t3351438187 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		GCHandle_t3351438187 * L_3 = __this->get_address_of_gch_13();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_3, /*hidden argument*/NULL);
	}

IL_003f:
	{
		il2cpp_codegen_memory_barrier();
		__this->set_disposed_14(1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m2835842845 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SetSessionStarted_m2835842845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1073947482 * V_0 = NULL;
	SessionEventArgs_t2932258242 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t856417675 * G_B5_0 = NULL;
	EventHandler_1_t856417675 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1073947482 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1073947482 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1073947482 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t2932258242 * L_6 = (SessionEventArgs_t2932258242 *)il2cpp_codegen_object_new(SessionEventArgs_t2932258242_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_m3263905054(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1073947482 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t856417675 * L_8 = L_7->get__SessionStarted_0();
			EventHandler_1_t856417675 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1073947482 * L_10 = V_0;
			SessionEventArgs_t2932258242 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m4115220418(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m4115220418_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m3369611404 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SetSessionStopped_m3369611404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1073947482 * V_0 = NULL;
	SessionEventArgs_t2932258242 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t856417675 * G_B5_0 = NULL;
	EventHandler_1_t856417675 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1073947482 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1073947482 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1073947482 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t2932258242 * L_6 = (SessionEventArgs_t2932258242 *)il2cpp_codegen_object_new(SessionEventArgs_t2932258242_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_m3263905054(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1073947482 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t856417675 * L_8 = L_7->get__SessionStopped_1();
			EventHandler_1_t856417675 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1073947482 * L_10 = V_0;
			SessionEventArgs_t2932258242 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m4115220418(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m4115220418_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m4185769789 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SpeechStartDetected_m4185769789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1073947482 * V_0 = NULL;
	RecognitionEventArgs_t1307607286 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t3526734015 * G_B5_0 = NULL;
	EventHandler_1_t3526734015 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1073947482 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1073947482 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1073947482 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_t1307607286 * L_6 = (RecognitionEventArgs_t1307607286 *)il2cpp_codegen_object_new(RecognitionEventArgs_t1307607286_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_m3951115954(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1073947482 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t3526734015 * L_8 = L_7->get__SpeechStartDetected_2();
			EventHandler_1_t3526734015 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1073947482 * L_10 = V_0;
			RecognitionEventArgs_t1307607286 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m2044477451(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m2044477451_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m657974116 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SpeechEndDetected_m657974116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1073947482 * V_0 = NULL;
	RecognitionEventArgs_t1307607286 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t3526734015 * G_B5_0 = NULL;
	EventHandler_1_t3526734015 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1073947482 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1073947482_m2583911719_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1073947482 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1073947482 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_t1307607286 * L_6 = (RecognitionEventArgs_t1307607286 *)il2cpp_codegen_object_new(RecognitionEventArgs_t1307607286_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_m3951115954(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1073947482 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t3526734015 * L_8 = L_7->get__SpeechEndDetected_3();
			EventHandler_1_t3526734015 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1073947482 * L_10 = V_0;
			RecognitionEventArgs_t1307607286 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m2044477451(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m2044477451_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
extern "C" IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m830785997 (Recognizer_t1073947482 * __this, Action_t1264377477 * ___recoImplAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_DoAsyncRecognitionAction_m830785997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_recognizerLock_16();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_activeAsyncRecognitionCounter_17();
		__this->set_activeAsyncRecognitionCounter_17(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		bool L_5 = __this->get_disposed_14();
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		bool L_6 = __this->get_isDisposing_15();
		il2cpp_codegen_memory_barrier();
		if (!L_6)
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		Type_t * L_7 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		ObjectDisposedException_t21392786 * L_9 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Recognizer_DoAsyncRecognitionAction_m830785997_RuntimeMethod_var);
	}

IL_0050:
	{
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		Action_t1264377477 * L_10 = ___recoImplAction0;
		NullCheck(L_10);
		Action_Invoke_m423955441(L_10, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x85, FINALLY_0059);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			RuntimeObject * L_11 = __this->get_recognizerLock_16();
			V_2 = L_11;
			V_3 = (bool)0;
		}

IL_0062:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_12 = V_2;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_12, (bool*)(&V_3), /*hidden argument*/NULL);
			int32_t L_13 = __this->get_activeAsyncRecognitionCounter_17();
			__this->set_activeAsyncRecognitionCounter_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
			IL2CPP_LEAVE(0x84, FINALLY_007a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007a;
		}

FINALLY_007a:
		{ // begin finally (depth: 2)
			{
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_0083;
				}
			}

IL_007d:
			{
				RuntimeObject * L_15 = V_2;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			}

IL_0083:
			{
				IL2CPP_END_FINALLY(122)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(122)
		{
			IL2CPP_JUMP_TBL(0x84, IL_0084)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0084:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
extern "C" IL2CPP_METHOD_ATTR void Recognizer_StartContinuousRecognition_m1742708695 (Recognizer_t1073947482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_StartContinuousRecognition_m1742708695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_asyncStartContinuousHandle_5();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_asyncStartContinuousHandle_5();
		intptr_t L_3 = Recognizer_recognizer_async_handle_release_m3849934744(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		InteropSafeHandle_t575154845 * L_4 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_4, _stringLiteral4167754693, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_5 = __this->get_recoHandle_4();
		intptr_t* L_6 = __this->get_address_of_asyncStartContinuousHandle_5();
		intptr_t L_7 = Recognizer_recognizer_start_continuous_recognition_async_m254497770(NULL /*static, unused*/, L_5, (intptr_t*)L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get_asyncStartContinuousHandle_5();
		intptr_t L_9 = Recognizer_recognizer_start_continuous_recognition_async_wait_for_m3185589748(NULL /*static, unused*/, (intptr_t)L_8, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = __this->get_asyncStartContinuousHandle_5();
		intptr_t L_11 = Recognizer_recognizer_async_handle_release_m3849934744(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_asyncStartContinuousHandle_5((intptr_t)(0));
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
extern "C" IL2CPP_METHOD_ATTR void Recognizer_StopContinuousRecognition_m3675090192 (Recognizer_t1073947482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_StopContinuousRecognition_m3675090192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_asyncStopContinuousHandle_6();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_asyncStopContinuousHandle_6();
		intptr_t L_3 = Recognizer_recognizer_async_handle_release_m3849934744(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		InteropSafeHandle_t575154845 * L_4 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_4, _stringLiteral4167754693, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_5 = __this->get_recoHandle_4();
		intptr_t* L_6 = __this->get_address_of_asyncStopContinuousHandle_6();
		intptr_t L_7 = Recognizer_recognizer_stop_continuous_recognition_async_m3112348459(NULL /*static, unused*/, L_5, (intptr_t*)L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get_asyncStopContinuousHandle_6();
		intptr_t L_9 = Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m3421695632(NULL /*static, unused*/, (intptr_t)L_8, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = __this->get_asyncStopContinuousHandle_6();
		intptr_t L_11 = Recognizer_recognizer_async_handle_release_m3849934744(NULL /*static, unused*/, (intptr_t)L_10, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_asyncStopContinuousHandle_6((intptr_t)(0));
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig,Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
extern "C" IL2CPP_METHOD_ATTR InteropSafeHandle_t575154845 * Recognizer_FromConfig_m1268427302 (RuntimeObject * __this /* static, unused */, GetRecognizerFromConfigDelegate_t1990574192 * ___fromConfig0, SpeechConfig_t192093705 * ___speechConfig1, AudioConfig_t1638830011 * ___audioConfig2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FromConfig_m1268427302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	InteropSafeHandle_t575154845 * V_1 = NULL;
	{
		SpeechConfig_t192093705 * L_0 = ___speechConfig1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral612528862, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Recognizer_FromConfig_m1268427302_RuntimeMethod_var);
	}

IL_000e:
	{
		AudioConfig_t1638830011 * L_2 = ___audioConfig2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral771283995, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Recognizer_FromConfig_m1268427302_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (intptr_t)(0);
		GetRecognizerFromConfigDelegate_t1990574192 * L_4 = ___fromConfig0;
		SpeechConfig_t192093705 * L_5 = ___speechConfig1;
		NullCheck(L_5);
		InteropSafeHandle_t575154845 * L_6 = L_5->get_configHandle_0();
		AudioConfig_t1638830011 * L_7 = ___audioConfig2;
		NullCheck(L_7);
		InteropSafeHandle_t575154845 * L_8 = L_7->get_configHandle_3();
		NullCheck(L_4);
		intptr_t L_9 = GetRecognizerFromConfigDelegate_Invoke_m2003166221(L_4, (intptr_t*)(&V_0), L_6, L_8, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_0;
		intptr_t L_11 = (intptr_t)Recognizer_recognizer_handle_release_m230591112_RuntimeMethod_var;
		HandleRelease_t566698942 * L_12 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_12, NULL, (intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_13 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_13, (intptr_t)L_10, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		SpeechConfig_t192093705 * L_14 = ___speechConfig1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_KeepAlive_m1400443516(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		AudioConfig_t1638830011 * L_15 = ___audioConfig2;
		GC_KeepAlive_m1400443516(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_16 = V_1;
		return L_16;
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
extern "C"  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t1990574192 (GetRecognizerFromConfigDelegate_t1990574192 * __this, intptr_t* ___phreco0, InteropSafeHandle_t575154845 * ___speechconfig1, InteropSafeHandle_t575154845 * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m614714386(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL, NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m614714386(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___phreco0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m190326290(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m190326290(___audioInput2, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m3276454511 (GetRecognizerFromConfigDelegate_t1990574192 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m2003166221 (GetRecognizerFromConfigDelegate_t1990574192 * __this, intptr_t* ___phreco0, InteropSafeHandle_t575154845 * ___speechconfig1, InteropSafeHandle_t575154845 * ___audioInput2, const RuntimeMethod* method)
{
	intptr_t result;
	memset(&result, 0, sizeof(result));
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
				{
					// open
					{
						typedef intptr_t (*FunctionPointerType) (RuntimeObject *, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef intptr_t (*FunctionPointerType) (RuntimeObject *, void*, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
					}
				}
			}
			else
			{
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
							else
								result = GenericVirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
							else
								result = VirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
						}
					}
					else
					{
						typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
			{
				// open
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject *, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject *, void*, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
				}
			}
		}
		else
		{
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
						else
							result = GenericVirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
						else
							result = VirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					}
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_t575154845 *, InteropSafeHandle_t575154845 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::BeginInvoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetRecognizerFromConfigDelegate_BeginInvoke_m1342478974 (GetRecognizerFromConfigDelegate_t1990574192 * __this, intptr_t* ___phreco0, InteropSafeHandle_t575154845 * ___speechconfig1, InteropSafeHandle_t575154845 * ___audioInput2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetRecognizerFromConfigDelegate_BeginInvoke_m1342478974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___phreco0);
	__d_args[1] = ___speechconfig1;
	__d_args[2] = ___audioInput2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_EndInvoke_m1040864205 (GetRecognizerFromConfigDelegate_t1990574192 * __this, intptr_t* ___phreco0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___phreco0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
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
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m3263905054 (SessionEventArgs_t2932258242 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionEventArgs__ctor_m3263905054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m3313473631(NULL /*static, unused*/, (intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___eventHandlePtr0;
		intptr_t L_2 = (intptr_t)EventArgs_recognizer_event_handle_release_m1791569572_RuntimeMethod_var;
		HandleRelease_t566698942 * L_3 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_4 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_4, (intptr_t)L_1, L_3, /*hidden argument*/NULL);
		__this->set_eventHandle_1(L_4);
		intptr_t L_5 = (intptr_t)Recognizer_recognizer_session_event_get_session_id_m3332958148_RuntimeMethod_var;
		GetResultDelegate_t2074362391 * L_6 = (GetResultDelegate_t2074362391 *)il2cpp_codegen_object_new(GetResultDelegate_t2074362391_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_m2570829637(L_6, NULL, (intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_7 = __this->get_eventHandle_1();
		String_t* L_8 = SpxFactory_GetDataFromHandleUsingDelegate_m1775810571(NULL /*static, unused*/, L_6, L_7, ((int32_t)37), /*hidden argument*/NULL);
		__this->set_U3CSessionIdU3Ek__BackingField_4(L_8);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
extern "C" IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m2887563617 (SessionEventArgs_t2932258242 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_m3537178607 (SessionEventArgs_t2932258242 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionEventArgs_ToString_m3537178607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = SessionEventArgs_get_SessionId_m2887563617(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Format_m3179549879(NULL /*static, unused*/, L_0, _stringLiteral885456881, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m1803775549 (SpeechConfig_t192093705 * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechConfig__ctor_m1803775549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_m3313473631(NULL /*static, unused*/, (intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___configPtr0;
		intptr_t L_2 = (intptr_t)SpeechConfig_speech_config_release_m3942305242_RuntimeMethod_var;
		HandleRelease_t566698942 * L_3 = (HandleRelease_t566698942 *)il2cpp_codegen_object_new(HandleRelease_t566698942_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m2341069289(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_4 = (InteropSafeHandle_t575154845 *)il2cpp_codegen_object_new(InteropSafeHandle_t575154845_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m460085502(L_4, (intptr_t)L_1, L_3, /*hidden argument*/NULL);
		__this->set_configHandle_0(L_4);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_t575154845 * L_5 = __this->get_configHandle_0();
		intptr_t L_6 = SpeechConfig_speech_config_get_property_bag_m686976697(NULL /*static, unused*/, L_5, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_6, /*hidden argument*/NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_t65000186 * L_8 = (PropertyCollection_t65000186 *)il2cpp_codegen_object_new(PropertyCollection_t65000186_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m2224112335(L_8, (intptr_t)L_7, /*hidden argument*/NULL);
		__this->set_progBag_1(L_8);
		SpeechConfig_SetProperty_m3102140798(__this, _stringLiteral2098760179, _stringLiteral3450320861, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR SpeechConfig_t192093705 * SpeechConfig_FromSubscription_m70258777 (RuntimeObject * __this /* static, unused */, String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechConfig_FromSubscription_m70258777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2 = SpeechConfig_speech_config_from_subscription_m3465530757(NULL /*static, unused*/, (intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechConfig_t192093705 * L_4 = (SpeechConfig_t192093705 *)il2cpp_codegen_object_new(SpeechConfig_t192093705_il2cpp_TypeInfo_var);
		SpeechConfig__ctor_m1803775549(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_m2272892346 (SpeechConfig_t192093705 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t65000186 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		PropertyCollection_SetProperty_m1596571729(L_0, ((int32_t)3001), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m3102140798 (SpeechConfig_t192093705 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		PropertyCollection_t65000186 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		PropertyCollection_SetProperty_m1236456671(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_m1915304545 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_t2773841337 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SpeechRecognitionEventArgs__ctor_m2593027836(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		SpeechRecognitionResult_t203626519 * L_1 = SpeechRecognitionEventArgs_get_Result_m2526846112(__this, /*hidden argument*/NULL);
		CancellationDetails_t2773841337 * L_2 = CancellationDetails_FromResult_m4248171642(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_t2773841337 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = CancellationDetails_get_Reason_m2462958577(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_t2773841337 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = CancellationDetails_get_ErrorCode_m439645568(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_t2773841337 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = CancellationDetails_get_ErrorDetails_m3590449650(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m609116725 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m3420284768 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorDetails()
extern "C" IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_get_ErrorDetails_m3661646758 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m3725149701 (SpeechRecognitionCanceledEventArgs_t1497552300 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognitionCanceledEventArgs_ToString_m3725149701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = SessionEventArgs_get_SessionId_m2887563617(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		SpeechRecognitionResult_t203626519 * L_5 = SpeechRecognitionEventArgs_get_Result_m2526846112(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = RecognitionResult_get_ResultId_m2372579608(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_4;
		int32_t L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m609116725(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_t1799596189_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		int32_t L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_m3420284768(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t3020849013_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral2736488837, L_11, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_m2593027836 (SpeechRecognitionEventArgs_t1198058925 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognitionEventArgs__ctor_m2593027836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m3951115954(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_t575154845 * L_1 = ((SessionEventArgs_t2932258242 *)__this)->get_eventHandle_1();
		intptr_t L_2 = Recognizer_recognizer_recognition_event_get_result_m1848447793(NULL /*static, unused*/, L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechRecognitionResult_t203626519 * L_4 = (SpeechRecognitionResult_t203626519 *)il2cpp_codegen_object_new(SpeechRecognitionResult_t203626519_il2cpp_TypeInfo_var);
		SpeechRecognitionResult__ctor_m3739245102(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
extern "C" IL2CPP_METHOD_ATTR SpeechRecognitionResult_t203626519 * SpeechRecognitionEventArgs_get_Result_m2526846112 (SpeechRecognitionEventArgs_t1198058925 * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_t203626519 * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_m2943822769 (SpeechRecognitionEventArgs_t1198058925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognitionEventArgs_ToString_m2943822769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = SessionEventArgs_get_SessionId_m2887563617(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		SpeechRecognitionResult_t203626519 * L_5 = SpeechRecognitionEventArgs_get_Result_m2526846112(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = RecognitionResult_get_ResultId_m2372579608(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_4;
		SpeechRecognitionResult_t203626519 * L_8 = SpeechRecognitionEventArgs_get_Result_m2526846112(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = RecognitionResult_get_Reason_m4206590602(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(ResultReason_t1280999872_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_7;
		SpeechRecognitionResult_t203626519 * L_13 = SpeechRecognitionEventArgs_get_Result_m2526846112(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = RecognitionResult_get_Text_m3836938529(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral3725715844, L_12, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_m3739245102 (SpeechRecognitionResult_t203626519 * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m782105062(__this, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_m1805398993(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_m1805398993(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m2213496941(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m2213496941(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_m1862259829(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_m1862259829(NULL, ___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m76113044 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_add__Recognizing_m76113044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3417185654 * V_0 = NULL;
	EventHandler_1_t3417185654 * V_1 = NULL;
	EventHandler_1_t3417185654 * V_2 = NULL;
	{
		EventHandler_1_t3417185654 * L_0 = __this->get__Recognizing_18();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3417185654 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3417185654 * L_2 = V_1;
		EventHandler_1_t3417185654 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3417185654 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3417185654_il2cpp_TypeInfo_var));
		EventHandler_1_t3417185654 ** L_5 = __this->get_address_of__Recognizing_18();
		EventHandler_1_t3417185654 * L_6 = V_2;
		EventHandler_1_t3417185654 * L_7 = V_1;
		EventHandler_1_t3417185654 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3417185654 *>((EventHandler_1_t3417185654 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3417185654 * L_9 = V_0;
		EventHandler_1_t3417185654 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3417185654 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3417185654 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m2863571761 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove__Recognizing_m2863571761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3417185654 * V_0 = NULL;
	EventHandler_1_t3417185654 * V_1 = NULL;
	EventHandler_1_t3417185654 * V_2 = NULL;
	{
		EventHandler_1_t3417185654 * L_0 = __this->get__Recognizing_18();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3417185654 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3417185654 * L_2 = V_1;
		EventHandler_1_t3417185654 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3417185654 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3417185654_il2cpp_TypeInfo_var));
		EventHandler_1_t3417185654 ** L_5 = __this->get_address_of__Recognizing_18();
		EventHandler_1_t3417185654 * L_6 = V_2;
		EventHandler_1_t3417185654 * L_7 = V_1;
		EventHandler_1_t3417185654 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3417185654 *>((EventHandler_1_t3417185654 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3417185654 * L_9 = V_0;
		EventHandler_1_t3417185654 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3417185654 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3417185654 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_m1885599521 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_add__Recognized_m1885599521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3417185654 * V_0 = NULL;
	EventHandler_1_t3417185654 * V_1 = NULL;
	EventHandler_1_t3417185654 * V_2 = NULL;
	{
		EventHandler_1_t3417185654 * L_0 = __this->get__Recognized_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3417185654 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3417185654 * L_2 = V_1;
		EventHandler_1_t3417185654 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3417185654 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3417185654_il2cpp_TypeInfo_var));
		EventHandler_1_t3417185654 ** L_5 = __this->get_address_of__Recognized_19();
		EventHandler_1_t3417185654 * L_6 = V_2;
		EventHandler_1_t3417185654 * L_7 = V_1;
		EventHandler_1_t3417185654 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3417185654 *>((EventHandler_1_t3417185654 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3417185654 * L_9 = V_0;
		EventHandler_1_t3417185654 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3417185654 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3417185654 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_m734168419 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove__Recognized_m734168419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3417185654 * V_0 = NULL;
	EventHandler_1_t3417185654 * V_1 = NULL;
	EventHandler_1_t3417185654 * V_2 = NULL;
	{
		EventHandler_1_t3417185654 * L_0 = __this->get__Recognized_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3417185654 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3417185654 * L_2 = V_1;
		EventHandler_1_t3417185654 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3417185654 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3417185654_il2cpp_TypeInfo_var));
		EventHandler_1_t3417185654 ** L_5 = __this->get_address_of__Recognized_19();
		EventHandler_1_t3417185654 * L_6 = V_2;
		EventHandler_1_t3417185654 * L_7 = V_1;
		EventHandler_1_t3417185654 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3417185654 *>((EventHandler_1_t3417185654 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3417185654 * L_9 = V_0;
		EventHandler_1_t3417185654 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3417185654 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3417185654 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_m3085834569 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3716679029 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_add__Canceled_m3085834569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3716679029 * V_0 = NULL;
	EventHandler_1_t3716679029 * V_1 = NULL;
	EventHandler_1_t3716679029 * V_2 = NULL;
	{
		EventHandler_1_t3716679029 * L_0 = __this->get__Canceled_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3716679029 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3716679029 * L_2 = V_1;
		EventHandler_1_t3716679029 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3716679029 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3716679029_il2cpp_TypeInfo_var));
		EventHandler_1_t3716679029 ** L_5 = __this->get_address_of__Canceled_20();
		EventHandler_1_t3716679029 * L_6 = V_2;
		EventHandler_1_t3716679029 * L_7 = V_1;
		EventHandler_1_t3716679029 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3716679029 *>((EventHandler_1_t3716679029 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3716679029 * L_9 = V_0;
		EventHandler_1_t3716679029 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3716679029 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3716679029 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m3410961589 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3716679029 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove__Canceled_m3410961589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3716679029 * V_0 = NULL;
	EventHandler_1_t3716679029 * V_1 = NULL;
	EventHandler_1_t3716679029 * V_2 = NULL;
	{
		EventHandler_1_t3716679029 * L_0 = __this->get__Canceled_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3716679029 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3716679029 * L_2 = V_1;
		EventHandler_1_t3716679029 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3716679029 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3716679029_il2cpp_TypeInfo_var));
		EventHandler_1_t3716679029 ** L_5 = __this->get_address_of__Canceled_20();
		EventHandler_1_t3716679029 * L_6 = V_2;
		EventHandler_1_t3716679029 * L_7 = V_1;
		EventHandler_1_t3716679029 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3716679029 *>((EventHandler_1_t3716679029 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3716679029 * L_9 = V_0;
		EventHandler_1_t3716679029 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3716679029 *)L_9) == ((RuntimeObject*)(EventHandler_1_t3716679029 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognizing_m2142978206 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t3417185654 * L_0 = __this->get__Recognizing_18();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_recognizingCallbackDelegate_21();
		GCHandle_t3351438187  L_3 = ((Recognizer_t1073947482 *)__this)->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_recognizing_set_callback_m1306649434(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t3417185654 * L_6 = ___value0;
		SpeechRecognizer_add__Recognizing_m76113044(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognizing_m1311914079 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove_Recognizing_m1311914079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3417185654 * L_0 = ___value0;
		SpeechRecognizer_remove__Recognizing_m2863571761(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t3417185654 * L_1 = __this->get__Recognizing_18();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognizing_set_callback_m1306649434(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognized_m3319581103 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t3417185654 * L_0 = __this->get__Recognized_19();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_recognizedCallbackDelegate_22();
		GCHandle_t3351438187  L_3 = ((Recognizer_t1073947482 *)__this)->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_recognized_set_callback_m1751192708(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t3417185654 * L_6 = ___value0;
		SpeechRecognizer_add__Recognized_m1885599521(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognized_m504196448 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3417185654 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove_Recognized_m504196448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3417185654 * L_0 = ___value0;
		SpeechRecognizer_remove__Recognized_m734168419(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t3417185654 * L_1 = __this->get__Recognized_19();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognized_set_callback_m1751192708(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Canceled_m2498204352 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3716679029 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t3716679029 * L_0 = __this->get__Canceled_20();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_1 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2754546357 * L_2 = __this->get_canceledCallbackDelegate_23();
		GCHandle_t3351438187  L_3 = ((Recognizer_t1073947482 *)__this)->get_gch_13();
		intptr_t L_4 = GCHandle_ToIntPtr_m3288225389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_canceled_set_callback_m440208621(NULL /*static, unused*/, L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t3716679029 * L_6 = ___value0;
		SpeechRecognizer_add__Canceled_m3085834569(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Canceled_m2270168100 (SpeechRecognizer_t1052549996 * __this, EventHandler_1_t3716679029 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove_Canceled_m2270168100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t3716679029 * L_0 = ___value0;
		SpeechRecognizer_remove__Canceled_m3410961589(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t3716679029 * L_1 = __this->get__Canceled_20();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_2 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_canceled_set_callback_m440208621(NULL /*static, unused*/, L_2, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig,Microsoft.CognitiveServices.Speech.Audio.AudioConfig)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m641062656 (SpeechRecognizer_t1052549996 * __this, SpeechConfig_t192093705 * ___speechConfig0, AudioConfig_t1638830011 * ___audioConfig1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer__ctor_m641062656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SpxFactory_recognizer_create_speech_recognizer_from_config_m712700478_RuntimeMethod_var;
		GetRecognizerFromConfigDelegate_t1990574192 * L_1 = (GetRecognizerFromConfigDelegate_t1990574192 *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t1990574192_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_m3276454511(L_1, NULL, (intptr_t)L_0, /*hidden argument*/NULL);
		SpeechConfig_t192093705 * L_2 = ___speechConfig0;
		AudioConfig_t1638830011 * L_3 = ___audioConfig1;
		InteropSafeHandle_t575154845 * L_4 = Recognizer_FromConfig_m1268427302(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		SpeechRecognizer__ctor_m29177740(__this, L_4, /*hidden argument*/NULL);
		AudioConfig_t1638830011 * L_5 = ___audioConfig1;
		__this->set_audioConfig_25(L_5);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m29177740 (SpeechRecognizer_t1052549996 * __this, InteropSafeHandle_t575154845 * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer__ctor_m29177740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		InteropSafeHandle_t575154845 * L_0 = ___recoHandle0;
		Recognizer__ctor_m3136998617(__this, L_0, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_1 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_m4145114651(NULL /*static, unused*/, L_1, _stringLiteral4167754693, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)SpeechRecognizer_FireEvent_Recognizing_m1805398993_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_3 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_21(L_3);
		intptr_t L_4 = (intptr_t)SpeechRecognizer_FireEvent_Recognized_m2213496941_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_5 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_5, NULL, (intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_22(L_5);
		intptr_t L_6 = (intptr_t)SpeechRecognizer_FireEvent_Canceled_m1862259829_RuntimeMethod_var;
		CallbackFunctionDelegate_t2754546357 * L_7 = (CallbackFunctionDelegate_t2754546357 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2754546357_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m3706658532(L_7, NULL, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_23(L_7);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_t575154845 * L_8 = ___recoHandle0;
		intptr_t L_9 = Recognizer_recognizer_get_property_bag_m623476501(NULL /*static, unused*/, L_8, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m2587875632(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_0;
		PropertyCollection_t65000186 * L_11 = (PropertyCollection_t65000186 *)il2cpp_codegen_object_new(PropertyCollection_t65000186_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m2224112335(L_11, (intptr_t)L_10, /*hidden argument*/NULL);
		SpeechRecognizer_set_Properties_m342850664(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
extern "C" IL2CPP_METHOD_ATTR PropertyCollection_t65000186 * SpeechRecognizer_get_Properties_m1530584268 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t65000186 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_m342850664 (SpeechRecognizer_t1052549996 * __this, PropertyCollection_t65000186 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t65000186 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * SpeechRecognizer_StartContinuousRecognitionAsync_m123387705 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_StartContinuousRecognitionAsync_m123387705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m3293414074_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_2 = Task_Run_m1807195689(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * SpeechRecognizer_StopContinuousRecognitionAsync_m3752704214 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_StopContinuousRecognitionAsync_m3752704214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m673803816_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_2 = Task_Run_m1807195689(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_m1720605860 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method)
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
		il2cpp_codegen_memory_barrier();
		((Recognizer_t1073947482 *)__this)->set_isDisposing_15(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m3741355336(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_m4171133710 (SpeechRecognizer_t1052549996 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_Dispose_m4171133710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Recognizer_t1073947482 *)__this)->get_disposed_14();
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
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		PropertyCollection_t65000186 * L_2 = SpeechRecognizer_get_Properties_m1530584268(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PropertyCollection_Close_m299802329(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		InteropSafeHandle_t575154845 * L_3 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		if (!L_3)
		{
			goto IL_00c9;
		}
	}
	{
		InteropSafeHandle_t575154845 * L_4 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_5 = Recognizer_recognizer_recognizing_set_callback_m1306649434(NULL /*static, unused*/, L_4, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_6 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_7 = Recognizer_recognizer_recognized_set_callback_m1751192708(NULL /*static, unused*/, L_6, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_8 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_9 = Recognizer_recognizer_canceled_set_callback_m440208621(NULL /*static, unused*/, L_8, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_10 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_11 = Recognizer_recognizer_session_started_set_callback_m860684074(NULL /*static, unused*/, L_10, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_12 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_13 = Recognizer_recognizer_session_stopped_set_callback_m323562248(NULL /*static, unused*/, L_12, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_14 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_15 = Recognizer_recognizer_speech_start_detected_set_callback_m356941968(NULL /*static, unused*/, L_14, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_15, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_16 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		intptr_t L_17 = Recognizer_recognizer_speech_end_detected_set_callback_m2590099270(NULL /*static, unused*/, L_16, (CallbackFunctionDelegate_t2754546357 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m2791746676(NULL /*static, unused*/, (intptr_t)L_17, /*hidden argument*/NULL);
		InteropSafeHandle_t575154845 * L_18 = ((Recognizer_t1073947482 *)__this)->get_recoHandle_4();
		NullCheck(L_18);
		SafeHandle_Dispose_m817995135(L_18, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		__this->set_recognizingCallbackDelegate_21((CallbackFunctionDelegate_t2754546357 *)NULL);
		__this->set_recognizedCallbackDelegate_22((CallbackFunctionDelegate_t2754546357 *)NULL);
		__this->set_canceledCallbackDelegate_23((CallbackFunctionDelegate_t2754546357 *)NULL);
		bool L_19 = ___disposing0;
		Recognizer_Dispose_m1043385659(__this, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m1805398993 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_FireEvent_Recognizing_m1805398993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t1052549996 * V_0 = NULL;
	SpeechRecognitionEventArgs_t1198058925 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t3417185654 * G_B5_0 = NULL;
	EventHandler_1_t3417185654 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t1052549996 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t1052549996 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_t1052549996 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1073947482 *)L_3)->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_t1198058925 * L_6 = (SpeechRecognitionEventArgs_t1198058925 *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_t1198058925_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_m2593027836(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_t1052549996 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t3417185654 * L_8 = L_7->get__Recognizing_18();
			EventHandler_1_t3417185654 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_t1052549996 * L_10 = V_0;
			SpeechRecognitionEventArgs_t1198058925 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m1931382688(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m1931382688_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m2213496941 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_FireEvent_Recognized_m2213496941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t1052549996 * V_0 = NULL;
	SpeechRecognitionEventArgs_t1198058925 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t3417185654 * G_B5_0 = NULL;
	EventHandler_1_t3417185654 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t1052549996 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t1052549996 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_t1052549996 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1073947482 *)L_3)->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_t1198058925 * L_6 = (SpeechRecognitionEventArgs_t1198058925 *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_t1198058925_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_m2593027836(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_t1052549996 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t3417185654 * L_8 = L_7->get__Recognized_19();
			EventHandler_1_t3417185654 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_t1052549996 * L_10 = V_0;
			SpeechRecognitionEventArgs_t1198058925 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m1931382688(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m1931382688_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m1862259829 (RuntimeObject * __this /* static, unused */, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_FireEvent_Canceled_m1862259829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t1052549996 * V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_t1497552300 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	EventHandler_1_t3716679029 * G_B5_0 = NULL;
	EventHandler_1_t3716679029 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t1052549996 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t1052549996_m2712174098_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t1052549996 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_t1052549996 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1073947482 *)L_3)->get_isDisposing_15();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_003f;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionCanceledEventArgs_t1497552300 * L_6 = (SpeechRecognitionCanceledEventArgs_t1497552300 *)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_t1497552300_il2cpp_TypeInfo_var);
			SpeechRecognitionCanceledEventArgs__ctor_m1915304545(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_t1052549996 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t3716679029 * L_8 = L_7->get__Canceled_20();
			EventHandler_1_t3716679029 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_t1052549996 * L_10 = V_0;
			SpeechRecognitionCanceledEventArgs_t1497552300 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m1840075265(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m1840075265_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.InvalidOperationException)
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t2305185238_il2cpp_TypeInfo_var);
		intptr_t L_12 = ((SpxError_t2305185238_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t2305185238_il2cpp_TypeInfo_var))->get_InvalidHandle_2();
		SpxExceptionThrower_LogError_m3105728682(NULL /*static, unused*/, (intptr_t)L_12, /*hidden argument*/NULL);
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__44_0()
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m3293414074 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m3293414074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)Recognizer_StartContinuousRecognition_m1742708695_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m830785997(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__45_0()
extern "C" IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m673803816 (SpeechRecognizer_t1052549996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m673803816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)Recognizer_StopContinuousRecognition_m3675090192_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m830785997(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
