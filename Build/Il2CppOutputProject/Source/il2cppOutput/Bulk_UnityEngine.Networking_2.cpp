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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t1333685985;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2550447661;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t100189446;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1515895227;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t1864468531;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t3646266945;
// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct List_1_t3843830149;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t935303414;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t4177294833;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t1968562558;
// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Stack_1_t3215144862;
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
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Networking.ChannelBuffer[]
struct ChannelBufferU5BU5D_t2631829696;
// UnityEngine.Networking.HostTopology
struct HostTopology_t4059263395;
// UnityEngine.Networking.LocalClient
struct LocalClient_t1191103892;
// UnityEngine.Networking.MessageBase
struct MessageBase_t3584795631;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_t2156033743;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t204670959;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t2652047222;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2705220091;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t3299519057;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t1145534953;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1192515889;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t360140524;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t82575973;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1574750186;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t3519296737;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t2920297688;
// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t3640015215;
// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t4148217304;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_t1120190071;
// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t3548153263;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t270751497;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t1836835438;
// UnityEngine.Networking.NetworkTransformVisualizer
struct NetworkTransformVisualizer_t2328387012;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3928387057;
// UnityEngine.Networking.PlayerController
struct PlayerController_t496487816;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1585635496;
// UnityEngine.Networking.SyncVarAttribute
struct SyncVarAttribute_t562797116;
// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t1858816613;
// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t1112427013;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t851741660;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* LogFilter_t3573890335_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* NetBuffer_t2156033743_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkBehaviour_t204670959_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkClient_t3758195968_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkHash128_t2391674535_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkServer_t2920297688_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkWriter_t3928387057_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* UTF8Encoding_t3956466879_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1035402498;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral148958899;
extern String_t* _stringLiteral163873836;
extern String_t* _stringLiteral1659358499;
extern String_t* _stringLiteral1665107978;
extern String_t* _stringLiteral1728819234;
extern String_t* _stringLiteral1810507830;
extern String_t* _stringLiteral2061384552;
extern String_t* _stringLiteral2263479475;
extern String_t* _stringLiteral3051958475;
extern String_t* _stringLiteral3221776185;
extern String_t* _stringLiteral3514328747;
extern String_t* _stringLiteral3702469874;
extern const RuntimeMethod* ArraySegment_1_get_Array_m3038125939_RuntimeMethod_var;
extern const RuntimeMethod* ArraySegment_1_get_Count_m1931227497_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356_RuntimeMethod_var;
extern const RuntimeMethod* NetworkWriter_Write_m2410084080_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m1553712732_RuntimeMethod_var;
extern const uint32_t NetworkTransformVisualizer_CreateLineMaterial_m3214025820_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_FixedUpdate_m3503359228_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnDestroy_m2854303748_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnRenderObject_m843166100_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnStartClient_m2754427721_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer_OnStartLocalPlayer_m3884173815_MetadataUsageId;
extern const uint32_t NetworkTransformVisualizer__ctor_m942684589_MetadataUsageId;
extern const uint32_t NetworkWriter_AsArray_m3793159246_MetadataUsageId;
extern const uint32_t NetworkWriter_ToArray_m132610877_MetadataUsageId;
extern const uint32_t NetworkWriter_WriteBytesAndSize_m542866276_MetadataUsageId;
extern const uint32_t NetworkWriter_WriteBytesFull_m804870477_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m189730350_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m2295136255_MetadataUsageId;
extern const uint32_t NetworkWriter_Write_m2410084080_MetadataUsageId;
extern const uint32_t NetworkWriter__ctor_m18760743_MetadataUsageId;
extern const uint32_t NetworkWriter__ctor_m824815027_MetadataUsageId;
extern const uint32_t PlayerController_ToString_m451687094_MetadataUsageId;
extern const uint32_t PlayerController__ctor_m1563370273_MetadataUsageId;
extern const uint32_t SpawnDelegate_BeginInvoke_m3131172266_MetadataUsageId;
extern const uint32_t ULocalConnectionToClient__ctor_m3225125635_MetadataUsageId;
extern const uint32_t ULocalConnectionToServer_SendBytes_m3941987877_MetadataUsageId;
extern const uint32_t ULocalConnectionToServer__ctor_m130825988_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct DelegateU5BU5D_t1703627840;
struct ObjectU5BU5D_t2843939325;


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
#ifndef MESSAGEBASE_T3584795631_H
#define MESSAGEBASE_T3584795631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.MessageBase
struct  MessageBase_t3584795631  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEBASE_T3584795631_H
#ifndef NETBUFFER_T2156033743_H
#define NETBUFFER_T2156033743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetBuffer
struct  NetBuffer_t2156033743  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.Networking.NetBuffer::m_Buffer
	ByteU5BU5D_t4116647657* ___m_Buffer_0;
	// System.UInt32 UnityEngine.Networking.NetBuffer::m_Pos
	uint32_t ___m_Pos_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NetBuffer_t2156033743, ___m_Buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___m_Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_0), value);
	}

	inline static int32_t get_offset_of_m_Pos_1() { return static_cast<int32_t>(offsetof(NetBuffer_t2156033743, ___m_Pos_1)); }
	inline uint32_t get_m_Pos_1() const { return ___m_Pos_1; }
	inline uint32_t* get_address_of_m_Pos_1() { return &___m_Pos_1; }
	inline void set_m_Pos_1(uint32_t value)
	{
		___m_Pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETBUFFER_T2156033743_H
#ifndef NETWORKSERVER_T2920297688_H
#define NETWORKSERVER_T2920297688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkServer
struct  NetworkServer_t2920297688  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::m_LocalClientActive
	bool ___m_LocalClientActive_4;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::m_LocalConnectionsFakeList
	List_1_t4177294833 * ___m_LocalConnectionsFakeList_5;
	// UnityEngine.Networking.ULocalConnectionToClient UnityEngine.Networking.NetworkServer::m_LocalConnection
	ULocalConnectionToClient_t1858816613 * ___m_LocalConnection_6;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.NetworkServer::m_NetworkScene
	NetworkScene_t3519296737 * ___m_NetworkScene_7;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkServer::m_ExternalConnections
	HashSet_1_t1515895227 * ___m_ExternalConnections_8;
	// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper UnityEngine.Networking.NetworkServer::m_SimpleServerSimple
	ServerSimpleWrapper_t3640015215 * ___m_SimpleServerSimple_9;
	// System.Single UnityEngine.Networking.NetworkServer::m_MaxDelay
	float ___m_MaxDelay_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkServer::m_RemoveList
	HashSet_1_t3646266945 * ___m_RemoveList_11;
	// System.Int32 UnityEngine.Networking.NetworkServer::m_RemoveListCount
	int32_t ___m_RemoveListCount_12;

public:
	inline static int32_t get_offset_of_m_LocalClientActive_4() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_LocalClientActive_4)); }
	inline bool get_m_LocalClientActive_4() const { return ___m_LocalClientActive_4; }
	inline bool* get_address_of_m_LocalClientActive_4() { return &___m_LocalClientActive_4; }
	inline void set_m_LocalClientActive_4(bool value)
	{
		___m_LocalClientActive_4 = value;
	}

	inline static int32_t get_offset_of_m_LocalConnectionsFakeList_5() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_LocalConnectionsFakeList_5)); }
	inline List_1_t4177294833 * get_m_LocalConnectionsFakeList_5() const { return ___m_LocalConnectionsFakeList_5; }
	inline List_1_t4177294833 ** get_address_of_m_LocalConnectionsFakeList_5() { return &___m_LocalConnectionsFakeList_5; }
	inline void set_m_LocalConnectionsFakeList_5(List_1_t4177294833 * value)
	{
		___m_LocalConnectionsFakeList_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalConnectionsFakeList_5), value);
	}

	inline static int32_t get_offset_of_m_LocalConnection_6() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_LocalConnection_6)); }
	inline ULocalConnectionToClient_t1858816613 * get_m_LocalConnection_6() const { return ___m_LocalConnection_6; }
	inline ULocalConnectionToClient_t1858816613 ** get_address_of_m_LocalConnection_6() { return &___m_LocalConnection_6; }
	inline void set_m_LocalConnection_6(ULocalConnectionToClient_t1858816613 * value)
	{
		___m_LocalConnection_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalConnection_6), value);
	}

	inline static int32_t get_offset_of_m_NetworkScene_7() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_NetworkScene_7)); }
	inline NetworkScene_t3519296737 * get_m_NetworkScene_7() const { return ___m_NetworkScene_7; }
	inline NetworkScene_t3519296737 ** get_address_of_m_NetworkScene_7() { return &___m_NetworkScene_7; }
	inline void set_m_NetworkScene_7(NetworkScene_t3519296737 * value)
	{
		___m_NetworkScene_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkScene_7), value);
	}

	inline static int32_t get_offset_of_m_ExternalConnections_8() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_ExternalConnections_8)); }
	inline HashSet_1_t1515895227 * get_m_ExternalConnections_8() const { return ___m_ExternalConnections_8; }
	inline HashSet_1_t1515895227 ** get_address_of_m_ExternalConnections_8() { return &___m_ExternalConnections_8; }
	inline void set_m_ExternalConnections_8(HashSet_1_t1515895227 * value)
	{
		___m_ExternalConnections_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExternalConnections_8), value);
	}

	inline static int32_t get_offset_of_m_SimpleServerSimple_9() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_SimpleServerSimple_9)); }
	inline ServerSimpleWrapper_t3640015215 * get_m_SimpleServerSimple_9() const { return ___m_SimpleServerSimple_9; }
	inline ServerSimpleWrapper_t3640015215 ** get_address_of_m_SimpleServerSimple_9() { return &___m_SimpleServerSimple_9; }
	inline void set_m_SimpleServerSimple_9(ServerSimpleWrapper_t3640015215 * value)
	{
		___m_SimpleServerSimple_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_SimpleServerSimple_9), value);
	}

	inline static int32_t get_offset_of_m_MaxDelay_10() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_MaxDelay_10)); }
	inline float get_m_MaxDelay_10() const { return ___m_MaxDelay_10; }
	inline float* get_address_of_m_MaxDelay_10() { return &___m_MaxDelay_10; }
	inline void set_m_MaxDelay_10(float value)
	{
		___m_MaxDelay_10 = value;
	}

	inline static int32_t get_offset_of_m_RemoveList_11() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_RemoveList_11)); }
	inline HashSet_1_t3646266945 * get_m_RemoveList_11() const { return ___m_RemoveList_11; }
	inline HashSet_1_t3646266945 ** get_address_of_m_RemoveList_11() { return &___m_RemoveList_11; }
	inline void set_m_RemoveList_11(HashSet_1_t3646266945 * value)
	{
		___m_RemoveList_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_RemoveList_11), value);
	}

	inline static int32_t get_offset_of_m_RemoveListCount_12() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688, ___m_RemoveListCount_12)); }
	inline int32_t get_m_RemoveListCount_12() const { return ___m_RemoveListCount_12; }
	inline int32_t* get_address_of_m_RemoveListCount_12() { return &___m_RemoveListCount_12; }
	inline void set_m_RemoveListCount_12(int32_t value)
	{
		___m_RemoveListCount_12 = value;
	}
};

struct NetworkServer_t2920297688_StaticFields
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::s_Active
	bool ___s_Active_0;
	// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Networking.NetworkServer::s_Instance
	NetworkServer_t2920297688 * ___s_Instance_1;
	// System.Object UnityEngine.Networking.NetworkServer::s_Sync
	RuntimeObject * ___s_Sync_2;
	// System.Boolean UnityEngine.Networking.NetworkServer::m_DontListen
	bool ___m_DontListen_3;
	// System.UInt16 UnityEngine.Networking.NetworkServer::maxPacketSize
	uint16_t ___maxPacketSize_13;
	// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage UnityEngine.Networking.NetworkServer::s_RemovePlayerMessage
	RemovePlayerMessage_t1120190071 * ___s_RemovePlayerMessage_14;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache0
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache0_15;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache1
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache1_16;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache2
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache2_17;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache3
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache3_18;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache4
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache4_19;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache5
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache5_20;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache6
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache6_21;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache7
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache7_22;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkServer::<>f__mg$cache8
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache8_23;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_Active_0)); }
	inline bool get_s_Active_0() const { return ___s_Active_0; }
	inline bool* get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(bool value)
	{
		___s_Active_0 = value;
	}

	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_Instance_1)); }
	inline NetworkServer_t2920297688 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline NetworkServer_t2920297688 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(NetworkServer_t2920297688 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_1), value);
	}

	inline static int32_t get_offset_of_s_Sync_2() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_Sync_2)); }
	inline RuntimeObject * get_s_Sync_2() const { return ___s_Sync_2; }
	inline RuntimeObject ** get_address_of_s_Sync_2() { return &___s_Sync_2; }
	inline void set_s_Sync_2(RuntimeObject * value)
	{
		___s_Sync_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Sync_2), value);
	}

	inline static int32_t get_offset_of_m_DontListen_3() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___m_DontListen_3)); }
	inline bool get_m_DontListen_3() const { return ___m_DontListen_3; }
	inline bool* get_address_of_m_DontListen_3() { return &___m_DontListen_3; }
	inline void set_m_DontListen_3(bool value)
	{
		___m_DontListen_3 = value;
	}

	inline static int32_t get_offset_of_maxPacketSize_13() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___maxPacketSize_13)); }
	inline uint16_t get_maxPacketSize_13() const { return ___maxPacketSize_13; }
	inline uint16_t* get_address_of_maxPacketSize_13() { return &___maxPacketSize_13; }
	inline void set_maxPacketSize_13(uint16_t value)
	{
		___maxPacketSize_13 = value;
	}

	inline static int32_t get_offset_of_s_RemovePlayerMessage_14() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___s_RemovePlayerMessage_14)); }
	inline RemovePlayerMessage_t1120190071 * get_s_RemovePlayerMessage_14() const { return ___s_RemovePlayerMessage_14; }
	inline RemovePlayerMessage_t1120190071 ** get_address_of_s_RemovePlayerMessage_14() { return &___s_RemovePlayerMessage_14; }
	inline void set_s_RemovePlayerMessage_14(RemovePlayerMessage_t1120190071 * value)
	{
		___s_RemovePlayerMessage_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RemovePlayerMessage_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_16() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache1_16)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache1_16() const { return ___U3CU3Ef__mgU24cache1_16; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache1_16() { return &___U3CU3Ef__mgU24cache1_16; }
	inline void set_U3CU3Ef__mgU24cache1_16(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_17() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache2_17)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache2_17() const { return ___U3CU3Ef__mgU24cache2_17; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache2_17() { return &___U3CU3Ef__mgU24cache2_17; }
	inline void set_U3CU3Ef__mgU24cache2_17(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache2_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_18() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache3_18)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache3_18() const { return ___U3CU3Ef__mgU24cache3_18; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache3_18() { return &___U3CU3Ef__mgU24cache3_18; }
	inline void set_U3CU3Ef__mgU24cache3_18(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache3_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_19() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache4_19)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache4_19() const { return ___U3CU3Ef__mgU24cache4_19; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache4_19() { return &___U3CU3Ef__mgU24cache4_19; }
	inline void set_U3CU3Ef__mgU24cache4_19(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache4_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_20() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache5_20)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache5_20() const { return ___U3CU3Ef__mgU24cache5_20; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache5_20() { return &___U3CU3Ef__mgU24cache5_20; }
	inline void set_U3CU3Ef__mgU24cache5_20(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache5_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_21() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache6_21)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache6_21() const { return ___U3CU3Ef__mgU24cache6_21; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache6_21() { return &___U3CU3Ef__mgU24cache6_21; }
	inline void set_U3CU3Ef__mgU24cache6_21(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache6_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_22() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache7_22)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache7_22() const { return ___U3CU3Ef__mgU24cache7_22; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache7_22() { return &___U3CU3Ef__mgU24cache7_22; }
	inline void set_U3CU3Ef__mgU24cache7_22(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache7_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_23() { return static_cast<int32_t>(offsetof(NetworkServer_t2920297688_StaticFields, ___U3CU3Ef__mgU24cache8_23)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache8_23() const { return ___U3CU3Ef__mgU24cache8_23; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache8_23() { return &___U3CU3Ef__mgU24cache8_23; }
	inline void set_U3CU3Ef__mgU24cache8_23(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache8_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSERVER_T2920297688_H
#ifndef PLAYERCONTROLLER_T496487816_H
#define PLAYERCONTROLLER_T496487816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerController
struct  PlayerController_t496487816  : public RuntimeObject
{
public:
	// System.Int16 UnityEngine.Networking.PlayerController::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.PlayerController::unetView
	NetworkIdentity_t3299519057 * ___unetView_2;
	// UnityEngine.GameObject UnityEngine.Networking.PlayerController::gameObject
	GameObject_t1113636619 * ___gameObject_3;

public:
	inline static int32_t get_offset_of_playerControllerId_1() { return static_cast<int32_t>(offsetof(PlayerController_t496487816, ___playerControllerId_1)); }
	inline int16_t get_playerControllerId_1() const { return ___playerControllerId_1; }
	inline int16_t* get_address_of_playerControllerId_1() { return &___playerControllerId_1; }
	inline void set_playerControllerId_1(int16_t value)
	{
		___playerControllerId_1 = value;
	}

	inline static int32_t get_offset_of_unetView_2() { return static_cast<int32_t>(offsetof(PlayerController_t496487816, ___unetView_2)); }
	inline NetworkIdentity_t3299519057 * get_unetView_2() const { return ___unetView_2; }
	inline NetworkIdentity_t3299519057 ** get_address_of_unetView_2() { return &___unetView_2; }
	inline void set_unetView_2(NetworkIdentity_t3299519057 * value)
	{
		___unetView_2 = value;
		Il2CppCodeGenWriteBarrier((&___unetView_2), value);
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(PlayerController_t496487816, ___gameObject_3)); }
	inline GameObject_t1113636619 * get_gameObject_3() const { return ___gameObject_3; }
	inline GameObject_t1113636619 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(GameObject_t1113636619 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T496487816_H
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
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_62;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_63;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_62() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitUTF8Identifier_62)); }
	inline bool get_emitUTF8Identifier_62() const { return ___emitUTF8Identifier_62; }
	inline bool* get_address_of_emitUTF8Identifier_62() { return &___emitUTF8Identifier_62; }
	inline void set_emitUTF8Identifier_62(bool value)
	{
		___emitUTF8Identifier_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef NETWORKHASH128_T2391674535_H
#define NETWORKHASH128_T2391674535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t2391674535 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t2391674535, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKHASH128_T2391674535_H
#ifndef NETWORKINSTANCEID_T786350175_H
#define NETWORKINSTANCEID_T786350175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_t786350175 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t786350175, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_t786350175_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_t786350175  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_t786350175  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t786350175_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_t786350175  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_t786350175 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_t786350175  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t786350175_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_t786350175  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_t786350175 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_t786350175  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINSTANCEID_T786350175_H
#ifndef NETWORKSCENEID_T717048590_H
#define NETWORKSCENEID_T717048590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t717048590 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t717048590, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSCENEID_T717048590_H
#ifndef SYNCVARATTRIBUTE_T562797116_H
#define SYNCVARATTRIBUTE_T562797116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SyncVarAttribute
struct  SyncVarAttribute_t562797116  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Networking.SyncVarAttribute::hook
	String_t* ___hook_0;

public:
	inline static int32_t get_offset_of_hook_0() { return static_cast<int32_t>(offsetof(SyncVarAttribute_t562797116, ___hook_0)); }
	inline String_t* get_hook_0() const { return ___hook_0; }
	inline String_t** get_address_of_hook_0() { return &___hook_0; }
	inline void set_hook_0(String_t* value)
	{
		___hook_0 = value;
		Il2CppCodeGenWriteBarrier((&___hook_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCVARATTRIBUTE_T562797116_H
#ifndef UINTFLOAT_T1701239927_H
#define UINTFLOAT_T1701239927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UIntFloat
struct  UIntFloat_t1701239927 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_t1701239927, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTFLOAT_T1701239927_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___2)); }
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
#endif // HIDEFLAGS_T4250555765_H
#ifndef CONNECTSTATE_T1049972864_H
#define CONNECTSTATE_T1049972864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkClient/ConnectState
struct  ConnectState_t1049972864 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkClient/ConnectState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectState_t1049972864, ___value___2)); }
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
#endif // CONNECTSTATE_T1049972864_H
#ifndef NETWORKERROR_T2038193525_H
#define NETWORKERROR_T2038193525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkError
struct  NetworkError_t2038193525 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkError_t2038193525, ___value___2)); }
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
#endif // NETWORKERROR_T2038193525_H
#ifndef AXISSYNCMODE_T3537925286_H
#define AXISSYNCMODE_T3537925286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/AxisSyncMode
struct  AxisSyncMode_t3537925286 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/AxisSyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisSyncMode_t3537925286, ___value___2)); }
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
#endif // AXISSYNCMODE_T3537925286_H
#ifndef COMPRESSIONSYNCMODE_T293282462_H
#define COMPRESSIONSYNCMODE_T293282462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/CompressionSyncMode
struct  CompressionSyncMode_t293282462 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/CompressionSyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionSyncMode_t293282462, ___value___2)); }
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
#endif // COMPRESSIONSYNCMODE_T293282462_H
#ifndef TRANSFORMSYNCMODE_T1892665719_H
#define TRANSFORMSYNCMODE_T1892665719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform/TransformSyncMode
struct  TransformSyncMode_t1892665719 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransform/TransformSyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformSyncMode_t1892665719, ___value___2)); }
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
#endif // TRANSFORMSYNCMODE_T1892665719_H
#ifndef NETWORKWRITER_T3928387057_H
#define NETWORKWRITER_T3928387057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t3928387057  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t2156033743 * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057, ___m_Buffer_1)); }
	inline NetBuffer_t2156033743 * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t2156033743 ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t2156033743 * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_1), value);
	}
};

struct NetworkWriter_t3928387057_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t1523322056 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_t4116647657* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_t1701239927  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t1523322056 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t1523322056 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Encoding_2), value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_t4116647657* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_t4116647657* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_StringWriteBuffer_3), value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t3928387057_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_t1701239927  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_t1701239927 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_t1701239927  value)
	{
		___s_FloatConverter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKWRITER_T3928387057_H
#ifndef PLAYERSPAWNMETHOD_T923284173_H
#define PLAYERSPAWNMETHOD_T923284173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerSpawnMethod
struct  PlayerSpawnMethod_t923284173 
{
public:
	// System.Int32 UnityEngine.Networking.PlayerSpawnMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t923284173, ___value___2)); }
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
#endif // PLAYERSPAWNMETHOD_T923284173_H
#ifndef VERSION_T2795014528_H
#define VERSION_T2795014528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Version
struct  Version_t2795014528 
{
public:
	// System.Int32 UnityEngine.Networking.Version::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Version_t2795014528, ___value___2)); }
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
#endif // VERSION_T2795014528_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
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
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef NETWORKCLIENT_T3758195968_H
#define NETWORKCLIENT_T3758195968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkClient
struct  NetworkClient_t3758195968  : public RuntimeObject
{
public:
	// System.Type UnityEngine.Networking.NetworkClient::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_0;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::m_HostTopology
	HostTopology_t4059263395 * ___m_HostTopology_4;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_HostPort
	int32_t ___m_HostPort_5;
	// System.Boolean UnityEngine.Networking.NetworkClient::m_UseSimulator
	bool ___m_UseSimulator_6;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_SimulatedLatency
	int32_t ___m_SimulatedLatency_7;
	// System.Single UnityEngine.Networking.NetworkClient::m_PacketLoss
	float ___m_PacketLoss_8;
	// System.String UnityEngine.Networking.NetworkClient::m_ServerIp
	String_t* ___m_ServerIp_9;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ServerPort
	int32_t ___m_ServerPort_10;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientId
	int32_t ___m_ClientId_11;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientConnectionId
	int32_t ___m_ClientConnectionId_12;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_StatResetTime
	int32_t ___m_StatResetTime_13;
	// System.Net.EndPoint UnityEngine.Networking.NetworkClient::m_RemoteEndPoint
	EndPoint_t982345378 * ___m_RemoteEndPoint_14;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkClient::m_MessageHandlers
	NetworkMessageHandlers_t82575973 * ___m_MessageHandlers_16;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::m_Connection
	NetworkConnection_t2705220091 * ___m_Connection_17;
	// System.Byte[] UnityEngine.Networking.NetworkClient::m_MsgBuffer
	ByteU5BU5D_t4116647657* ___m_MsgBuffer_18;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkClient::m_MsgReader
	NetworkReader_t1574750186 * ___m_MsgReader_19;
	// UnityEngine.Networking.NetworkClient/ConnectState UnityEngine.Networking.NetworkClient::m_AsyncConnect
	int32_t ___m_AsyncConnect_20;
	// System.String UnityEngine.Networking.NetworkClient::m_RequestedServerHost
	String_t* ___m_RequestedServerHost_21;

public:
	inline static int32_t get_offset_of_m_NetworkConnectionClass_0() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_NetworkConnectionClass_0)); }
	inline Type_t * get_m_NetworkConnectionClass_0() const { return ___m_NetworkConnectionClass_0; }
	inline Type_t ** get_address_of_m_NetworkConnectionClass_0() { return &___m_NetworkConnectionClass_0; }
	inline void set_m_NetworkConnectionClass_0(Type_t * value)
	{
		___m_NetworkConnectionClass_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkConnectionClass_0), value);
	}

	inline static int32_t get_offset_of_m_HostTopology_4() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_HostTopology_4)); }
	inline HostTopology_t4059263395 * get_m_HostTopology_4() const { return ___m_HostTopology_4; }
	inline HostTopology_t4059263395 ** get_address_of_m_HostTopology_4() { return &___m_HostTopology_4; }
	inline void set_m_HostTopology_4(HostTopology_t4059263395 * value)
	{
		___m_HostTopology_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_HostTopology_4), value);
	}

	inline static int32_t get_offset_of_m_HostPort_5() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_HostPort_5)); }
	inline int32_t get_m_HostPort_5() const { return ___m_HostPort_5; }
	inline int32_t* get_address_of_m_HostPort_5() { return &___m_HostPort_5; }
	inline void set_m_HostPort_5(int32_t value)
	{
		___m_HostPort_5 = value;
	}

	inline static int32_t get_offset_of_m_UseSimulator_6() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_UseSimulator_6)); }
	inline bool get_m_UseSimulator_6() const { return ___m_UseSimulator_6; }
	inline bool* get_address_of_m_UseSimulator_6() { return &___m_UseSimulator_6; }
	inline void set_m_UseSimulator_6(bool value)
	{
		___m_UseSimulator_6 = value;
	}

	inline static int32_t get_offset_of_m_SimulatedLatency_7() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_SimulatedLatency_7)); }
	inline int32_t get_m_SimulatedLatency_7() const { return ___m_SimulatedLatency_7; }
	inline int32_t* get_address_of_m_SimulatedLatency_7() { return &___m_SimulatedLatency_7; }
	inline void set_m_SimulatedLatency_7(int32_t value)
	{
		___m_SimulatedLatency_7 = value;
	}

	inline static int32_t get_offset_of_m_PacketLoss_8() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_PacketLoss_8)); }
	inline float get_m_PacketLoss_8() const { return ___m_PacketLoss_8; }
	inline float* get_address_of_m_PacketLoss_8() { return &___m_PacketLoss_8; }
	inline void set_m_PacketLoss_8(float value)
	{
		___m_PacketLoss_8 = value;
	}

	inline static int32_t get_offset_of_m_ServerIp_9() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ServerIp_9)); }
	inline String_t* get_m_ServerIp_9() const { return ___m_ServerIp_9; }
	inline String_t** get_address_of_m_ServerIp_9() { return &___m_ServerIp_9; }
	inline void set_m_ServerIp_9(String_t* value)
	{
		___m_ServerIp_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_ServerIp_9), value);
	}

	inline static int32_t get_offset_of_m_ServerPort_10() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ServerPort_10)); }
	inline int32_t get_m_ServerPort_10() const { return ___m_ServerPort_10; }
	inline int32_t* get_address_of_m_ServerPort_10() { return &___m_ServerPort_10; }
	inline void set_m_ServerPort_10(int32_t value)
	{
		___m_ServerPort_10 = value;
	}

	inline static int32_t get_offset_of_m_ClientId_11() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ClientId_11)); }
	inline int32_t get_m_ClientId_11() const { return ___m_ClientId_11; }
	inline int32_t* get_address_of_m_ClientId_11() { return &___m_ClientId_11; }
	inline void set_m_ClientId_11(int32_t value)
	{
		___m_ClientId_11 = value;
	}

	inline static int32_t get_offset_of_m_ClientConnectionId_12() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_ClientConnectionId_12)); }
	inline int32_t get_m_ClientConnectionId_12() const { return ___m_ClientConnectionId_12; }
	inline int32_t* get_address_of_m_ClientConnectionId_12() { return &___m_ClientConnectionId_12; }
	inline void set_m_ClientConnectionId_12(int32_t value)
	{
		___m_ClientConnectionId_12 = value;
	}

	inline static int32_t get_offset_of_m_StatResetTime_13() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_StatResetTime_13)); }
	inline int32_t get_m_StatResetTime_13() const { return ___m_StatResetTime_13; }
	inline int32_t* get_address_of_m_StatResetTime_13() { return &___m_StatResetTime_13; }
	inline void set_m_StatResetTime_13(int32_t value)
	{
		___m_StatResetTime_13 = value;
	}

	inline static int32_t get_offset_of_m_RemoteEndPoint_14() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_RemoteEndPoint_14)); }
	inline EndPoint_t982345378 * get_m_RemoteEndPoint_14() const { return ___m_RemoteEndPoint_14; }
	inline EndPoint_t982345378 ** get_address_of_m_RemoteEndPoint_14() { return &___m_RemoteEndPoint_14; }
	inline void set_m_RemoteEndPoint_14(EndPoint_t982345378 * value)
	{
		___m_RemoteEndPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_RemoteEndPoint_14), value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_16() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_MessageHandlers_16)); }
	inline NetworkMessageHandlers_t82575973 * get_m_MessageHandlers_16() const { return ___m_MessageHandlers_16; }
	inline NetworkMessageHandlers_t82575973 ** get_address_of_m_MessageHandlers_16() { return &___m_MessageHandlers_16; }
	inline void set_m_MessageHandlers_16(NetworkMessageHandlers_t82575973 * value)
	{
		___m_MessageHandlers_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageHandlers_16), value);
	}

	inline static int32_t get_offset_of_m_Connection_17() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_Connection_17)); }
	inline NetworkConnection_t2705220091 * get_m_Connection_17() const { return ___m_Connection_17; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_Connection_17() { return &___m_Connection_17; }
	inline void set_m_Connection_17(NetworkConnection_t2705220091 * value)
	{
		___m_Connection_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_Connection_17), value);
	}

	inline static int32_t get_offset_of_m_MsgBuffer_18() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_MsgBuffer_18)); }
	inline ByteU5BU5D_t4116647657* get_m_MsgBuffer_18() const { return ___m_MsgBuffer_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_MsgBuffer_18() { return &___m_MsgBuffer_18; }
	inline void set_m_MsgBuffer_18(ByteU5BU5D_t4116647657* value)
	{
		___m_MsgBuffer_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_MsgBuffer_18), value);
	}

	inline static int32_t get_offset_of_m_MsgReader_19() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_MsgReader_19)); }
	inline NetworkReader_t1574750186 * get_m_MsgReader_19() const { return ___m_MsgReader_19; }
	inline NetworkReader_t1574750186 ** get_address_of_m_MsgReader_19() { return &___m_MsgReader_19; }
	inline void set_m_MsgReader_19(NetworkReader_t1574750186 * value)
	{
		___m_MsgReader_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_MsgReader_19), value);
	}

	inline static int32_t get_offset_of_m_AsyncConnect_20() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_AsyncConnect_20)); }
	inline int32_t get_m_AsyncConnect_20() const { return ___m_AsyncConnect_20; }
	inline int32_t* get_address_of_m_AsyncConnect_20() { return &___m_AsyncConnect_20; }
	inline void set_m_AsyncConnect_20(int32_t value)
	{
		___m_AsyncConnect_20 = value;
	}

	inline static int32_t get_offset_of_m_RequestedServerHost_21() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968, ___m_RequestedServerHost_21)); }
	inline String_t* get_m_RequestedServerHost_21() const { return ___m_RequestedServerHost_21; }
	inline String_t** get_address_of_m_RequestedServerHost_21() { return &___m_RequestedServerHost_21; }
	inline void set_m_RequestedServerHost_21(String_t* value)
	{
		___m_RequestedServerHost_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestedServerHost_21), value);
	}
};

struct NetworkClient_t3758195968_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::s_Clients
	List_1_t935303414 * ___s_Clients_2;
	// System.Boolean UnityEngine.Networking.NetworkClient::s_IsActive
	bool ___s_IsActive_3;
	// UnityEngine.Networking.NetworkSystem.CRCMessage UnityEngine.Networking.NetworkClient::s_CRCMessage
	CRCMessage_t4148217304 * ___s_CRCMessage_15;
	// System.AsyncCallback UnityEngine.Networking.NetworkClient::<>f__mg$cache0
	AsyncCallback_t3962456242 * ___U3CU3Ef__mgU24cache0_22;
	// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkClient::<>f__mg$cache1
	NetworkMessageDelegate_t360140524 * ___U3CU3Ef__mgU24cache1_23;

public:
	inline static int32_t get_offset_of_s_Clients_2() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___s_Clients_2)); }
	inline List_1_t935303414 * get_s_Clients_2() const { return ___s_Clients_2; }
	inline List_1_t935303414 ** get_address_of_s_Clients_2() { return &___s_Clients_2; }
	inline void set_s_Clients_2(List_1_t935303414 * value)
	{
		___s_Clients_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Clients_2), value);
	}

	inline static int32_t get_offset_of_s_IsActive_3() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___s_IsActive_3)); }
	inline bool get_s_IsActive_3() const { return ___s_IsActive_3; }
	inline bool* get_address_of_s_IsActive_3() { return &___s_IsActive_3; }
	inline void set_s_IsActive_3(bool value)
	{
		___s_IsActive_3 = value;
	}

	inline static int32_t get_offset_of_s_CRCMessage_15() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___s_CRCMessage_15)); }
	inline CRCMessage_t4148217304 * get_s_CRCMessage_15() const { return ___s_CRCMessage_15; }
	inline CRCMessage_t4148217304 ** get_address_of_s_CRCMessage_15() { return &___s_CRCMessage_15; }
	inline void set_s_CRCMessage_15(CRCMessage_t4148217304 * value)
	{
		___s_CRCMessage_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_CRCMessage_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_22() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___U3CU3Ef__mgU24cache0_22)); }
	inline AsyncCallback_t3962456242 * get_U3CU3Ef__mgU24cache0_22() const { return ___U3CU3Ef__mgU24cache0_22; }
	inline AsyncCallback_t3962456242 ** get_address_of_U3CU3Ef__mgU24cache0_22() { return &___U3CU3Ef__mgU24cache0_22; }
	inline void set_U3CU3Ef__mgU24cache0_22(AsyncCallback_t3962456242 * value)
	{
		___U3CU3Ef__mgU24cache0_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_23() { return static_cast<int32_t>(offsetof(NetworkClient_t3758195968_StaticFields, ___U3CU3Ef__mgU24cache1_23)); }
	inline NetworkMessageDelegate_t360140524 * get_U3CU3Ef__mgU24cache1_23() const { return ___U3CU3Ef__mgU24cache1_23; }
	inline NetworkMessageDelegate_t360140524 ** get_address_of_U3CU3Ef__mgU24cache1_23() { return &___U3CU3Ef__mgU24cache1_23; }
	inline void set_U3CU3Ef__mgU24cache1_23(NetworkMessageDelegate_t360140524 * value)
	{
		___U3CU3Ef__mgU24cache1_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCLIENT_T3758195968_H
#ifndef NETWORKCONNECTION_T2705220091_H
#define NETWORKCONNECTION_T2705220091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkConnection
struct  NetworkConnection_t2705220091  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ChannelBuffer[] UnityEngine.Networking.NetworkConnection::m_Channels
	ChannelBufferU5BU5D_t2631829696* ___m_Channels_0;
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::m_PlayerControllers
	List_1_t1968562558 * ___m_PlayerControllers_1;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_NetMsg
	NetworkMessage_t1192515889 * ___m_NetMsg_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::m_VisList
	HashSet_1_t1864468531 * ___m_VisList_3;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkConnection::m_Writer
	NetworkWriter_t3928387057 * ___m_Writer_4;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkConnection::m_MessageHandlersDict
	Dictionary_2_t2550447661 * ___m_MessageHandlersDict_5;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkConnection::m_MessageHandlers
	NetworkMessageHandlers_t82575973 * ___m_MessageHandlers_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::m_ClientOwnedObjects
	HashSet_1_t3646266945 * ___m_ClientOwnedObjects_7;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_MessageInfo
	NetworkMessage_t1192515889 * ___m_MessageInfo_8;
	// UnityEngine.Networking.NetworkError UnityEngine.Networking.NetworkConnection::error
	int32_t ___error_10;
	// System.Int32 UnityEngine.Networking.NetworkConnection::hostId
	int32_t ___hostId_11;
	// System.Int32 UnityEngine.Networking.NetworkConnection::connectionId
	int32_t ___connectionId_12;
	// System.Boolean UnityEngine.Networking.NetworkConnection::isReady
	bool ___isReady_13;
	// System.String UnityEngine.Networking.NetworkConnection::address
	String_t* ___address_14;
	// System.Single UnityEngine.Networking.NetworkConnection::lastMessageTime
	float ___lastMessageTime_15;
	// System.Boolean UnityEngine.Networking.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_16;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::m_PacketStats
	Dictionary_2_t1333685985 * ___m_PacketStats_17;
	// System.Boolean UnityEngine.Networking.NetworkConnection::m_Disposed
	bool ___m_Disposed_18;

public:
	inline static int32_t get_offset_of_m_Channels_0() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_Channels_0)); }
	inline ChannelBufferU5BU5D_t2631829696* get_m_Channels_0() const { return ___m_Channels_0; }
	inline ChannelBufferU5BU5D_t2631829696** get_address_of_m_Channels_0() { return &___m_Channels_0; }
	inline void set_m_Channels_0(ChannelBufferU5BU5D_t2631829696* value)
	{
		___m_Channels_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Channels_0), value);
	}

	inline static int32_t get_offset_of_m_PlayerControllers_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_PlayerControllers_1)); }
	inline List_1_t1968562558 * get_m_PlayerControllers_1() const { return ___m_PlayerControllers_1; }
	inline List_1_t1968562558 ** get_address_of_m_PlayerControllers_1() { return &___m_PlayerControllers_1; }
	inline void set_m_PlayerControllers_1(List_1_t1968562558 * value)
	{
		___m_PlayerControllers_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerControllers_1), value);
	}

	inline static int32_t get_offset_of_m_NetMsg_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_NetMsg_2)); }
	inline NetworkMessage_t1192515889 * get_m_NetMsg_2() const { return ___m_NetMsg_2; }
	inline NetworkMessage_t1192515889 ** get_address_of_m_NetMsg_2() { return &___m_NetMsg_2; }
	inline void set_m_NetMsg_2(NetworkMessage_t1192515889 * value)
	{
		___m_NetMsg_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetMsg_2), value);
	}

	inline static int32_t get_offset_of_m_VisList_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_VisList_3)); }
	inline HashSet_1_t1864468531 * get_m_VisList_3() const { return ___m_VisList_3; }
	inline HashSet_1_t1864468531 ** get_address_of_m_VisList_3() { return &___m_VisList_3; }
	inline void set_m_VisList_3(HashSet_1_t1864468531 * value)
	{
		___m_VisList_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VisList_3), value);
	}

	inline static int32_t get_offset_of_m_Writer_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_Writer_4)); }
	inline NetworkWriter_t3928387057 * get_m_Writer_4() const { return ___m_Writer_4; }
	inline NetworkWriter_t3928387057 ** get_address_of_m_Writer_4() { return &___m_Writer_4; }
	inline void set_m_Writer_4(NetworkWriter_t3928387057 * value)
	{
		___m_Writer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Writer_4), value);
	}

	inline static int32_t get_offset_of_m_MessageHandlersDict_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_MessageHandlersDict_5)); }
	inline Dictionary_2_t2550447661 * get_m_MessageHandlersDict_5() const { return ___m_MessageHandlersDict_5; }
	inline Dictionary_2_t2550447661 ** get_address_of_m_MessageHandlersDict_5() { return &___m_MessageHandlersDict_5; }
	inline void set_m_MessageHandlersDict_5(Dictionary_2_t2550447661 * value)
	{
		___m_MessageHandlersDict_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageHandlersDict_5), value);
	}

	inline static int32_t get_offset_of_m_MessageHandlers_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_MessageHandlers_6)); }
	inline NetworkMessageHandlers_t82575973 * get_m_MessageHandlers_6() const { return ___m_MessageHandlers_6; }
	inline NetworkMessageHandlers_t82575973 ** get_address_of_m_MessageHandlers_6() { return &___m_MessageHandlers_6; }
	inline void set_m_MessageHandlers_6(NetworkMessageHandlers_t82575973 * value)
	{
		___m_MessageHandlers_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageHandlers_6), value);
	}

	inline static int32_t get_offset_of_m_ClientOwnedObjects_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_ClientOwnedObjects_7)); }
	inline HashSet_1_t3646266945 * get_m_ClientOwnedObjects_7() const { return ___m_ClientOwnedObjects_7; }
	inline HashSet_1_t3646266945 ** get_address_of_m_ClientOwnedObjects_7() { return &___m_ClientOwnedObjects_7; }
	inline void set_m_ClientOwnedObjects_7(HashSet_1_t3646266945 * value)
	{
		___m_ClientOwnedObjects_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientOwnedObjects_7), value);
	}

	inline static int32_t get_offset_of_m_MessageInfo_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_MessageInfo_8)); }
	inline NetworkMessage_t1192515889 * get_m_MessageInfo_8() const { return ___m_MessageInfo_8; }
	inline NetworkMessage_t1192515889 ** get_address_of_m_MessageInfo_8() { return &___m_MessageInfo_8; }
	inline void set_m_MessageInfo_8(NetworkMessage_t1192515889 * value)
	{
		___m_MessageInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_MessageInfo_8), value);
	}

	inline static int32_t get_offset_of_error_10() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___error_10)); }
	inline int32_t get_error_10() const { return ___error_10; }
	inline int32_t* get_address_of_error_10() { return &___error_10; }
	inline void set_error_10(int32_t value)
	{
		___error_10 = value;
	}

	inline static int32_t get_offset_of_hostId_11() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___hostId_11)); }
	inline int32_t get_hostId_11() const { return ___hostId_11; }
	inline int32_t* get_address_of_hostId_11() { return &___hostId_11; }
	inline void set_hostId_11(int32_t value)
	{
		___hostId_11 = value;
	}

	inline static int32_t get_offset_of_connectionId_12() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___connectionId_12)); }
	inline int32_t get_connectionId_12() const { return ___connectionId_12; }
	inline int32_t* get_address_of_connectionId_12() { return &___connectionId_12; }
	inline void set_connectionId_12(int32_t value)
	{
		___connectionId_12 = value;
	}

	inline static int32_t get_offset_of_isReady_13() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___isReady_13)); }
	inline bool get_isReady_13() const { return ___isReady_13; }
	inline bool* get_address_of_isReady_13() { return &___isReady_13; }
	inline void set_isReady_13(bool value)
	{
		___isReady_13 = value;
	}

	inline static int32_t get_offset_of_address_14() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___address_14)); }
	inline String_t* get_address_14() const { return ___address_14; }
	inline String_t** get_address_of_address_14() { return &___address_14; }
	inline void set_address_14(String_t* value)
	{
		___address_14 = value;
		Il2CppCodeGenWriteBarrier((&___address_14), value);
	}

	inline static int32_t get_offset_of_lastMessageTime_15() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___lastMessageTime_15)); }
	inline float get_lastMessageTime_15() const { return ___lastMessageTime_15; }
	inline float* get_address_of_lastMessageTime_15() { return &___lastMessageTime_15; }
	inline void set_lastMessageTime_15(float value)
	{
		___lastMessageTime_15 = value;
	}

	inline static int32_t get_offset_of_logNetworkMessages_16() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___logNetworkMessages_16)); }
	inline bool get_logNetworkMessages_16() const { return ___logNetworkMessages_16; }
	inline bool* get_address_of_logNetworkMessages_16() { return &___logNetworkMessages_16; }
	inline void set_logNetworkMessages_16(bool value)
	{
		___logNetworkMessages_16 = value;
	}

	inline static int32_t get_offset_of_m_PacketStats_17() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_PacketStats_17)); }
	inline Dictionary_2_t1333685985 * get_m_PacketStats_17() const { return ___m_PacketStats_17; }
	inline Dictionary_2_t1333685985 ** get_address_of_m_PacketStats_17() { return &___m_PacketStats_17; }
	inline void set_m_PacketStats_17(Dictionary_2_t1333685985 * value)
	{
		___m_PacketStats_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_PacketStats_17), value);
	}

	inline static int32_t get_offset_of_m_Disposed_18() { return static_cast<int32_t>(offsetof(NetworkConnection_t2705220091, ___m_Disposed_18)); }
	inline bool get_m_Disposed_18() const { return ___m_Disposed_18; }
	inline bool* get_address_of_m_Disposed_18() { return &___m_Disposed_18; }
	inline void set_m_Disposed_18(bool value)
	{
		___m_Disposed_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCONNECTION_T2705220091_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
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
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef LOCALCLIENT_T1191103892_H
#define LOCALCLIENT_T1191103892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.LocalClient
struct  LocalClient_t1191103892  : public NetworkClient_t3758195968
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs
	List_1_t3843830149 * ___m_InternalMsgs_24;
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs2
	List_1_t3843830149 * ___m_InternalMsgs2_25;
	// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_FreeMessages
	Stack_1_t3215144862 * ___m_FreeMessages_26;
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.LocalClient::m_LocalServer
	NetworkServer_t2920297688 * ___m_LocalServer_27;
	// System.Boolean UnityEngine.Networking.LocalClient::m_Connected
	bool ___m_Connected_28;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.LocalClient::s_InternalMessage
	NetworkMessage_t1192515889 * ___s_InternalMessage_29;

public:
	inline static int32_t get_offset_of_m_InternalMsgs_24() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_InternalMsgs_24)); }
	inline List_1_t3843830149 * get_m_InternalMsgs_24() const { return ___m_InternalMsgs_24; }
	inline List_1_t3843830149 ** get_address_of_m_InternalMsgs_24() { return &___m_InternalMsgs_24; }
	inline void set_m_InternalMsgs_24(List_1_t3843830149 * value)
	{
		___m_InternalMsgs_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_InternalMsgs_24), value);
	}

	inline static int32_t get_offset_of_m_InternalMsgs2_25() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_InternalMsgs2_25)); }
	inline List_1_t3843830149 * get_m_InternalMsgs2_25() const { return ___m_InternalMsgs2_25; }
	inline List_1_t3843830149 ** get_address_of_m_InternalMsgs2_25() { return &___m_InternalMsgs2_25; }
	inline void set_m_InternalMsgs2_25(List_1_t3843830149 * value)
	{
		___m_InternalMsgs2_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_InternalMsgs2_25), value);
	}

	inline static int32_t get_offset_of_m_FreeMessages_26() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_FreeMessages_26)); }
	inline Stack_1_t3215144862 * get_m_FreeMessages_26() const { return ___m_FreeMessages_26; }
	inline Stack_1_t3215144862 ** get_address_of_m_FreeMessages_26() { return &___m_FreeMessages_26; }
	inline void set_m_FreeMessages_26(Stack_1_t3215144862 * value)
	{
		___m_FreeMessages_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FreeMessages_26), value);
	}

	inline static int32_t get_offset_of_m_LocalServer_27() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_LocalServer_27)); }
	inline NetworkServer_t2920297688 * get_m_LocalServer_27() const { return ___m_LocalServer_27; }
	inline NetworkServer_t2920297688 ** get_address_of_m_LocalServer_27() { return &___m_LocalServer_27; }
	inline void set_m_LocalServer_27(NetworkServer_t2920297688 * value)
	{
		___m_LocalServer_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalServer_27), value);
	}

	inline static int32_t get_offset_of_m_Connected_28() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___m_Connected_28)); }
	inline bool get_m_Connected_28() const { return ___m_Connected_28; }
	inline bool* get_address_of_m_Connected_28() { return &___m_Connected_28; }
	inline void set_m_Connected_28(bool value)
	{
		___m_Connected_28 = value;
	}

	inline static int32_t get_offset_of_s_InternalMessage_29() { return static_cast<int32_t>(offsetof(LocalClient_t1191103892, ___s_InternalMessage_29)); }
	inline NetworkMessage_t1192515889 * get_s_InternalMessage_29() const { return ___s_InternalMessage_29; }
	inline NetworkMessage_t1192515889 ** get_address_of_s_InternalMessage_29() { return &___s_InternalMessage_29; }
	inline void set_s_InternalMessage_29(NetworkMessage_t1192515889 * value)
	{
		___s_InternalMessage_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalMessage_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALCLIENT_T1191103892_H
#ifndef SPAWNDELEGATE_T1585635496_H
#define SPAWNDELEGATE_T1585635496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.SpawnDelegate
struct  SpawnDelegate_t1585635496  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNDELEGATE_T1585635496_H
#ifndef ULOCALCONNECTIONTOCLIENT_T1858816613_H
#define ULOCALCONNECTIONTOCLIENT_T1858816613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ULocalConnectionToClient
struct  ULocalConnectionToClient_t1858816613  : public NetworkConnection_t2705220091
{
public:
	// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::m_LocalClient
	LocalClient_t1191103892 * ___m_LocalClient_19;

public:
	inline static int32_t get_offset_of_m_LocalClient_19() { return static_cast<int32_t>(offsetof(ULocalConnectionToClient_t1858816613, ___m_LocalClient_19)); }
	inline LocalClient_t1191103892 * get_m_LocalClient_19() const { return ___m_LocalClient_19; }
	inline LocalClient_t1191103892 ** get_address_of_m_LocalClient_19() { return &___m_LocalClient_19; }
	inline void set_m_LocalClient_19(LocalClient_t1191103892 * value)
	{
		___m_LocalClient_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalClient_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ULOCALCONNECTIONTOCLIENT_T1858816613_H
#ifndef ULOCALCONNECTIONTOSERVER_T1112427013_H
#define ULOCALCONNECTIONTOSERVER_T1112427013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ULocalConnectionToServer
struct  ULocalConnectionToServer_t1112427013  : public NetworkConnection_t2705220091
{
public:
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.ULocalConnectionToServer::m_LocalServer
	NetworkServer_t2920297688 * ___m_LocalServer_19;

public:
	inline static int32_t get_offset_of_m_LocalServer_19() { return static_cast<int32_t>(offsetof(ULocalConnectionToServer_t1112427013, ___m_LocalServer_19)); }
	inline NetworkServer_t2920297688 * get_m_LocalServer_19() const { return ___m_LocalServer_19; }
	inline NetworkServer_t2920297688 ** get_address_of_m_LocalServer_19() { return &___m_LocalServer_19; }
	inline void set_m_LocalServer_19(NetworkServer_t2920297688 * value)
	{
		___m_LocalServer_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalServer_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ULOCALCONNECTIONTOSERVER_T1112427013_H
#ifndef UNSPAWNDELEGATE_T851741660_H
#define UNSPAWNDELEGATE_T851741660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnSpawnDelegate
struct  UnSpawnDelegate_t851741660  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSPAWNDELEGATE_T851741660_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef NETWORKBEHAVIOUR_T204670959_H
#define NETWORKBEHAVIOUR_T204670959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_t204670959  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t3299519057 * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959, ___m_MyView_8)); }
	inline NetworkIdentity_t3299519057 * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t3299519057 ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t3299519057 * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyView_8), value);
	}
};

struct NetworkBehaviour_t204670959_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_t100189446 * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t204670959_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_t100189446 * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_t100189446 ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_t100189446 * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_CmdHandlerDelegates_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKBEHAVIOUR_T204670959_H
#ifndef NETWORKIDENTITY_T3299519057_H
#define NETWORKIDENTITY_T3299519057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_t3299519057  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_t717048590  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_t2391674535  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_t786350175  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_t2705220091 * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_t2705220091 * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_t2652047222* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_t1515895227 * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t4177294833 * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_t2705220091 * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_SceneId_4)); }
	inline NetworkSceneId_t717048590  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_t717048590 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_t717048590  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_AssetId_5)); }
	inline NetworkHash128_t2391674535  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_t2391674535 * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_t2391674535  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_NetId_11)); }
	inline NetworkInstanceId_t786350175  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_t786350175 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_t786350175  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_t2705220091 * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_t2705220091 * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConnectionToServer_13), value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_t2705220091 * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_t2705220091 * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConnectionToClient_14), value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_t2652047222* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_t2652047222** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_t2652047222* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkBehaviours_16), value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ObserverConnections_17)); }
	inline HashSet_1_t1515895227 * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_t1515895227 ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_t1515895227 * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObserverConnections_17), value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_Observers_18)); }
	inline List_1_t4177294833 * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t4177294833 ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t4177294833 * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Observers_18), value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_t2705220091 * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_t2705220091 ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_t2705220091 * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientAuthorityOwner_19), value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_t3299519057_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_t3928387057 * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t1145534953 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_t3928387057 * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_t3928387057 ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_t3928387057 * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateWriter_22), value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t3299519057_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_t1145534953 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_t1145534953 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_t1145534953 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((&___clientAuthorityCallback_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKIDENTITY_T3299519057_H
#ifndef NETWORKTRANSFORM_T3548153263_H
#define NETWORKTRANSFORM_T3548153263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform
struct  NetworkTransform_t3548153263  : public NetworkBehaviour_t204670959
{
public:
	// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::m_TransformSyncMode
	int32_t ___m_TransformSyncMode_10;
	// System.Single UnityEngine.Networking.NetworkTransform::m_SendInterval
	float ___m_SendInterval_11;
	// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::m_SyncRotationAxis
	int32_t ___m_SyncRotationAxis_12;
	// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::m_RotationSyncCompression
	int32_t ___m_RotationSyncCompression_13;
	// System.Boolean UnityEngine.Networking.NetworkTransform::m_SyncSpin
	bool ___m_SyncSpin_14;
	// System.Single UnityEngine.Networking.NetworkTransform::m_MovementTheshold
	float ___m_MovementTheshold_15;
	// System.Single UnityEngine.Networking.NetworkTransform::m_VelocityThreshold
	float ___m_VelocityThreshold_16;
	// System.Single UnityEngine.Networking.NetworkTransform::m_SnapThreshold
	float ___m_SnapThreshold_17;
	// System.Single UnityEngine.Networking.NetworkTransform::m_InterpolateRotation
	float ___m_InterpolateRotation_18;
	// System.Single UnityEngine.Networking.NetworkTransform::m_InterpolateMovement
	float ___m_InterpolateMovement_19;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::m_ClientMoveCallback3D
	ClientMoveCallback3D_t1836835438 * ___m_ClientMoveCallback3D_20;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::m_ClientMoveCallback2D
	ClientMoveCallback2D_t270751497 * ___m_ClientMoveCallback2D_21;
	// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::m_RigidBody3D
	Rigidbody_t3916780224 * ___m_RigidBody3D_22;
	// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::m_RigidBody2D
	Rigidbody2D_t939494601 * ___m_RigidBody2D_23;
	// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::m_CharacterController
	CharacterController_t1138636865 * ___m_CharacterController_24;
	// System.Boolean UnityEngine.Networking.NetworkTransform::m_Grounded
	bool ___m_Grounded_25;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncPosition
	Vector3_t3722313464  ___m_TargetSyncPosition_26;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncVelocity
	Vector3_t3722313464  ___m_TargetSyncVelocity_27;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_FixedPosDiff
	Vector3_t3722313464  ___m_FixedPosDiff_28;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::m_TargetSyncRotation3D
	Quaternion_t2301928331  ___m_TargetSyncRotation3D_29;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncAngularVelocity3D
	Vector3_t3722313464  ___m_TargetSyncAngularVelocity3D_30;
	// System.Single UnityEngine.Networking.NetworkTransform::m_TargetSyncRotation2D
	float ___m_TargetSyncRotation2D_31;
	// System.Single UnityEngine.Networking.NetworkTransform::m_TargetSyncAngularVelocity2D
	float ___m_TargetSyncAngularVelocity2D_32;
	// System.Single UnityEngine.Networking.NetworkTransform::m_LastClientSyncTime
	float ___m_LastClientSyncTime_33;
	// System.Single UnityEngine.Networking.NetworkTransform::m_LastClientSendTime
	float ___m_LastClientSendTime_34;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_PrevPosition
	Vector3_t3722313464  ___m_PrevPosition_35;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::m_PrevRotation
	Quaternion_t2301928331  ___m_PrevRotation_36;
	// System.Single UnityEngine.Networking.NetworkTransform::m_PrevRotation2D
	float ___m_PrevRotation2D_37;
	// System.Single UnityEngine.Networking.NetworkTransform::m_PrevVelocity
	float ___m_PrevVelocity_38;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkTransform::m_LocalTransformWriter
	NetworkWriter_t3928387057 * ___m_LocalTransformWriter_43;

public:
	inline static int32_t get_offset_of_m_TransformSyncMode_10() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TransformSyncMode_10)); }
	inline int32_t get_m_TransformSyncMode_10() const { return ___m_TransformSyncMode_10; }
	inline int32_t* get_address_of_m_TransformSyncMode_10() { return &___m_TransformSyncMode_10; }
	inline void set_m_TransformSyncMode_10(int32_t value)
	{
		___m_TransformSyncMode_10 = value;
	}

	inline static int32_t get_offset_of_m_SendInterval_11() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SendInterval_11)); }
	inline float get_m_SendInterval_11() const { return ___m_SendInterval_11; }
	inline float* get_address_of_m_SendInterval_11() { return &___m_SendInterval_11; }
	inline void set_m_SendInterval_11(float value)
	{
		___m_SendInterval_11 = value;
	}

	inline static int32_t get_offset_of_m_SyncRotationAxis_12() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SyncRotationAxis_12)); }
	inline int32_t get_m_SyncRotationAxis_12() const { return ___m_SyncRotationAxis_12; }
	inline int32_t* get_address_of_m_SyncRotationAxis_12() { return &___m_SyncRotationAxis_12; }
	inline void set_m_SyncRotationAxis_12(int32_t value)
	{
		___m_SyncRotationAxis_12 = value;
	}

	inline static int32_t get_offset_of_m_RotationSyncCompression_13() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_RotationSyncCompression_13)); }
	inline int32_t get_m_RotationSyncCompression_13() const { return ___m_RotationSyncCompression_13; }
	inline int32_t* get_address_of_m_RotationSyncCompression_13() { return &___m_RotationSyncCompression_13; }
	inline void set_m_RotationSyncCompression_13(int32_t value)
	{
		___m_RotationSyncCompression_13 = value;
	}

	inline static int32_t get_offset_of_m_SyncSpin_14() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SyncSpin_14)); }
	inline bool get_m_SyncSpin_14() const { return ___m_SyncSpin_14; }
	inline bool* get_address_of_m_SyncSpin_14() { return &___m_SyncSpin_14; }
	inline void set_m_SyncSpin_14(bool value)
	{
		___m_SyncSpin_14 = value;
	}

	inline static int32_t get_offset_of_m_MovementTheshold_15() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_MovementTheshold_15)); }
	inline float get_m_MovementTheshold_15() const { return ___m_MovementTheshold_15; }
	inline float* get_address_of_m_MovementTheshold_15() { return &___m_MovementTheshold_15; }
	inline void set_m_MovementTheshold_15(float value)
	{
		___m_MovementTheshold_15 = value;
	}

	inline static int32_t get_offset_of_m_VelocityThreshold_16() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_VelocityThreshold_16)); }
	inline float get_m_VelocityThreshold_16() const { return ___m_VelocityThreshold_16; }
	inline float* get_address_of_m_VelocityThreshold_16() { return &___m_VelocityThreshold_16; }
	inline void set_m_VelocityThreshold_16(float value)
	{
		___m_VelocityThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_SnapThreshold_17() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_SnapThreshold_17)); }
	inline float get_m_SnapThreshold_17() const { return ___m_SnapThreshold_17; }
	inline float* get_address_of_m_SnapThreshold_17() { return &___m_SnapThreshold_17; }
	inline void set_m_SnapThreshold_17(float value)
	{
		___m_SnapThreshold_17 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateRotation_18() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_InterpolateRotation_18)); }
	inline float get_m_InterpolateRotation_18() const { return ___m_InterpolateRotation_18; }
	inline float* get_address_of_m_InterpolateRotation_18() { return &___m_InterpolateRotation_18; }
	inline void set_m_InterpolateRotation_18(float value)
	{
		___m_InterpolateRotation_18 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateMovement_19() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_InterpolateMovement_19)); }
	inline float get_m_InterpolateMovement_19() const { return ___m_InterpolateMovement_19; }
	inline float* get_address_of_m_InterpolateMovement_19() { return &___m_InterpolateMovement_19; }
	inline void set_m_InterpolateMovement_19(float value)
	{
		___m_InterpolateMovement_19 = value;
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback3D_20() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_ClientMoveCallback3D_20)); }
	inline ClientMoveCallback3D_t1836835438 * get_m_ClientMoveCallback3D_20() const { return ___m_ClientMoveCallback3D_20; }
	inline ClientMoveCallback3D_t1836835438 ** get_address_of_m_ClientMoveCallback3D_20() { return &___m_ClientMoveCallback3D_20; }
	inline void set_m_ClientMoveCallback3D_20(ClientMoveCallback3D_t1836835438 * value)
	{
		___m_ClientMoveCallback3D_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientMoveCallback3D_20), value);
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback2D_21() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_ClientMoveCallback2D_21)); }
	inline ClientMoveCallback2D_t270751497 * get_m_ClientMoveCallback2D_21() const { return ___m_ClientMoveCallback2D_21; }
	inline ClientMoveCallback2D_t270751497 ** get_address_of_m_ClientMoveCallback2D_21() { return &___m_ClientMoveCallback2D_21; }
	inline void set_m_ClientMoveCallback2D_21(ClientMoveCallback2D_t270751497 * value)
	{
		___m_ClientMoveCallback2D_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientMoveCallback2D_21), value);
	}

	inline static int32_t get_offset_of_m_RigidBody3D_22() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_RigidBody3D_22)); }
	inline Rigidbody_t3916780224 * get_m_RigidBody3D_22() const { return ___m_RigidBody3D_22; }
	inline Rigidbody_t3916780224 ** get_address_of_m_RigidBody3D_22() { return &___m_RigidBody3D_22; }
	inline void set_m_RigidBody3D_22(Rigidbody_t3916780224 * value)
	{
		___m_RigidBody3D_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_RigidBody3D_22), value);
	}

	inline static int32_t get_offset_of_m_RigidBody2D_23() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_RigidBody2D_23)); }
	inline Rigidbody2D_t939494601 * get_m_RigidBody2D_23() const { return ___m_RigidBody2D_23; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_RigidBody2D_23() { return &___m_RigidBody2D_23; }
	inline void set_m_RigidBody2D_23(Rigidbody2D_t939494601 * value)
	{
		___m_RigidBody2D_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_RigidBody2D_23), value);
	}

	inline static int32_t get_offset_of_m_CharacterController_24() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_CharacterController_24)); }
	inline CharacterController_t1138636865 * get_m_CharacterController_24() const { return ___m_CharacterController_24; }
	inline CharacterController_t1138636865 ** get_address_of_m_CharacterController_24() { return &___m_CharacterController_24; }
	inline void set_m_CharacterController_24(CharacterController_t1138636865 * value)
	{
		___m_CharacterController_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_CharacterController_24), value);
	}

	inline static int32_t get_offset_of_m_Grounded_25() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_Grounded_25)); }
	inline bool get_m_Grounded_25() const { return ___m_Grounded_25; }
	inline bool* get_address_of_m_Grounded_25() { return &___m_Grounded_25; }
	inline void set_m_Grounded_25(bool value)
	{
		___m_Grounded_25 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncPosition_26() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncPosition_26)); }
	inline Vector3_t3722313464  get_m_TargetSyncPosition_26() const { return ___m_TargetSyncPosition_26; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncPosition_26() { return &___m_TargetSyncPosition_26; }
	inline void set_m_TargetSyncPosition_26(Vector3_t3722313464  value)
	{
		___m_TargetSyncPosition_26 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncVelocity_27() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncVelocity_27)); }
	inline Vector3_t3722313464  get_m_TargetSyncVelocity_27() const { return ___m_TargetSyncVelocity_27; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncVelocity_27() { return &___m_TargetSyncVelocity_27; }
	inline void set_m_TargetSyncVelocity_27(Vector3_t3722313464  value)
	{
		___m_TargetSyncVelocity_27 = value;
	}

	inline static int32_t get_offset_of_m_FixedPosDiff_28() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_FixedPosDiff_28)); }
	inline Vector3_t3722313464  get_m_FixedPosDiff_28() const { return ___m_FixedPosDiff_28; }
	inline Vector3_t3722313464 * get_address_of_m_FixedPosDiff_28() { return &___m_FixedPosDiff_28; }
	inline void set_m_FixedPosDiff_28(Vector3_t3722313464  value)
	{
		___m_FixedPosDiff_28 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation3D_29() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncRotation3D_29)); }
	inline Quaternion_t2301928331  get_m_TargetSyncRotation3D_29() const { return ___m_TargetSyncRotation3D_29; }
	inline Quaternion_t2301928331 * get_address_of_m_TargetSyncRotation3D_29() { return &___m_TargetSyncRotation3D_29; }
	inline void set_m_TargetSyncRotation3D_29(Quaternion_t2301928331  value)
	{
		___m_TargetSyncRotation3D_29 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncAngularVelocity3D_30() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncAngularVelocity3D_30)); }
	inline Vector3_t3722313464  get_m_TargetSyncAngularVelocity3D_30() const { return ___m_TargetSyncAngularVelocity3D_30; }
	inline Vector3_t3722313464 * get_address_of_m_TargetSyncAngularVelocity3D_30() { return &___m_TargetSyncAngularVelocity3D_30; }
	inline void set_m_TargetSyncAngularVelocity3D_30(Vector3_t3722313464  value)
	{
		___m_TargetSyncAngularVelocity3D_30 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation2D_31() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncRotation2D_31)); }
	inline float get_m_TargetSyncRotation2D_31() const { return ___m_TargetSyncRotation2D_31; }
	inline float* get_address_of_m_TargetSyncRotation2D_31() { return &___m_TargetSyncRotation2D_31; }
	inline void set_m_TargetSyncRotation2D_31(float value)
	{
		___m_TargetSyncRotation2D_31 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncAngularVelocity2D_32() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_TargetSyncAngularVelocity2D_32)); }
	inline float get_m_TargetSyncAngularVelocity2D_32() const { return ___m_TargetSyncAngularVelocity2D_32; }
	inline float* get_address_of_m_TargetSyncAngularVelocity2D_32() { return &___m_TargetSyncAngularVelocity2D_32; }
	inline void set_m_TargetSyncAngularVelocity2D_32(float value)
	{
		___m_TargetSyncAngularVelocity2D_32 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSyncTime_33() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_LastClientSyncTime_33)); }
	inline float get_m_LastClientSyncTime_33() const { return ___m_LastClientSyncTime_33; }
	inline float* get_address_of_m_LastClientSyncTime_33() { return &___m_LastClientSyncTime_33; }
	inline void set_m_LastClientSyncTime_33(float value)
	{
		___m_LastClientSyncTime_33 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSendTime_34() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_LastClientSendTime_34)); }
	inline float get_m_LastClientSendTime_34() const { return ___m_LastClientSendTime_34; }
	inline float* get_address_of_m_LastClientSendTime_34() { return &___m_LastClientSendTime_34; }
	inline void set_m_LastClientSendTime_34(float value)
	{
		___m_LastClientSendTime_34 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_35() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevPosition_35)); }
	inline Vector3_t3722313464  get_m_PrevPosition_35() const { return ___m_PrevPosition_35; }
	inline Vector3_t3722313464 * get_address_of_m_PrevPosition_35() { return &___m_PrevPosition_35; }
	inline void set_m_PrevPosition_35(Vector3_t3722313464  value)
	{
		___m_PrevPosition_35 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation_36() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevRotation_36)); }
	inline Quaternion_t2301928331  get_m_PrevRotation_36() const { return ___m_PrevRotation_36; }
	inline Quaternion_t2301928331 * get_address_of_m_PrevRotation_36() { return &___m_PrevRotation_36; }
	inline void set_m_PrevRotation_36(Quaternion_t2301928331  value)
	{
		___m_PrevRotation_36 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation2D_37() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevRotation2D_37)); }
	inline float get_m_PrevRotation2D_37() const { return ___m_PrevRotation2D_37; }
	inline float* get_address_of_m_PrevRotation2D_37() { return &___m_PrevRotation2D_37; }
	inline void set_m_PrevRotation2D_37(float value)
	{
		___m_PrevRotation2D_37 = value;
	}

	inline static int32_t get_offset_of_m_PrevVelocity_38() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_PrevVelocity_38)); }
	inline float get_m_PrevVelocity_38() const { return ___m_PrevVelocity_38; }
	inline float* get_address_of_m_PrevVelocity_38() { return &___m_PrevVelocity_38; }
	inline void set_m_PrevVelocity_38(float value)
	{
		___m_PrevVelocity_38 = value;
	}

	inline static int32_t get_offset_of_m_LocalTransformWriter_43() { return static_cast<int32_t>(offsetof(NetworkTransform_t3548153263, ___m_LocalTransformWriter_43)); }
	inline NetworkWriter_t3928387057 * get_m_LocalTransformWriter_43() const { return ___m_LocalTransformWriter_43; }
	inline NetworkWriter_t3928387057 ** get_address_of_m_LocalTransformWriter_43() { return &___m_LocalTransformWriter_43; }
	inline void set_m_LocalTransformWriter_43(NetworkWriter_t3928387057 * value)
	{
		___m_LocalTransformWriter_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalTransformWriter_43), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSFORM_T3548153263_H
#ifndef NETWORKTRANSFORMVISUALIZER_T2328387012_H
#define NETWORKTRANSFORMVISUALIZER_T2328387012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransformVisualizer
struct  NetworkTransformVisualizer_t2328387012  : public NetworkBehaviour_t204670959
{
public:
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_VisualizerPrefab
	GameObject_t1113636619 * ___m_VisualizerPrefab_10;
	// UnityEngine.Networking.NetworkTransform UnityEngine.Networking.NetworkTransformVisualizer::m_NetworkTransform
	NetworkTransform_t3548153263 * ___m_NetworkTransform_11;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_Visualizer
	GameObject_t1113636619 * ___m_Visualizer_12;

public:
	inline static int32_t get_offset_of_m_VisualizerPrefab_10() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012, ___m_VisualizerPrefab_10)); }
	inline GameObject_t1113636619 * get_m_VisualizerPrefab_10() const { return ___m_VisualizerPrefab_10; }
	inline GameObject_t1113636619 ** get_address_of_m_VisualizerPrefab_10() { return &___m_VisualizerPrefab_10; }
	inline void set_m_VisualizerPrefab_10(GameObject_t1113636619 * value)
	{
		___m_VisualizerPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VisualizerPrefab_10), value);
	}

	inline static int32_t get_offset_of_m_NetworkTransform_11() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012, ___m_NetworkTransform_11)); }
	inline NetworkTransform_t3548153263 * get_m_NetworkTransform_11() const { return ___m_NetworkTransform_11; }
	inline NetworkTransform_t3548153263 ** get_address_of_m_NetworkTransform_11() { return &___m_NetworkTransform_11; }
	inline void set_m_NetworkTransform_11(NetworkTransform_t3548153263 * value)
	{
		___m_NetworkTransform_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkTransform_11), value);
	}

	inline static int32_t get_offset_of_m_Visualizer_12() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012, ___m_Visualizer_12)); }
	inline GameObject_t1113636619 * get_m_Visualizer_12() const { return ___m_Visualizer_12; }
	inline GameObject_t1113636619 ** get_address_of_m_Visualizer_12() { return &___m_Visualizer_12; }
	inline void set_m_Visualizer_12(GameObject_t1113636619 * value)
	{
		___m_Visualizer_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Visualizer_12), value);
	}
};

struct NetworkTransformVisualizer_t2328387012_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.Networking.NetworkTransformVisualizer::s_LineMaterial
	Material_t340375123 * ___s_LineMaterial_13;

public:
	inline static int32_t get_offset_of_s_LineMaterial_13() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2328387012_StaticFields, ___s_LineMaterial_13)); }
	inline Material_t340375123 * get_s_LineMaterial_13() const { return ___s_LineMaterial_13; }
	inline Material_t340375123 ** get_address_of_s_LineMaterial_13() { return &___s_LineMaterial_13; }
	inline void set_s_LineMaterial_13(Material_t340375123 * value)
	{
		___s_LineMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_LineMaterial_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSFORMVISUALIZER_T2328387012_H
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2523540636_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m1931227497_gshared (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ArraySegment_1_get_Array_m3038125939_gshared (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Networking.NetworkBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m930927820 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Networking.NetworkTransform>()
inline NetworkTransform_t3548153263 * Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  NetworkTransform_t3548153263 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::CreateLineMaterial()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_CreateLineMaterial_m3214025820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m1553712732 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2523540636_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_localPlayerAuthority()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_localPlayerAuthority_m3825444790 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m3662737156 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::get_active()
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_get_active_m2527733392 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkClient::get_active()
extern "C" IL2CPP_METHOD_ATTR bool NetworkClient_get_active_m761030454 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_m792420926 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_hasAuthority()
extern "C" IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_hasAuthority_m3994339092 (NetworkBehaviour_t204670959 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_get_targetSyncPosition_m3939799000 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::get_rigidbody3D()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * NetworkTransform_get_rigidbody3D_m1680182927 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  NetworkTransform_get_targetSyncVelocity_m3799605955 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::get_rigidbody2D()
extern "C" IL2CPP_METHOD_ATTR Rigidbody2D_t939494601 * NetworkTransform_get_rigidbody2D_m3914535243 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::get_targetSyncRotation3D()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  NetworkTransform_get_targetSyncRotation3D_m3959327059 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_targetSyncRotation2D()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_targetSyncRotation2D_m383745925 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.NetworkTransform::get_lastSyncTime()
extern "C" IL2CPP_METHOD_ATTR float NetworkTransform_get_lastSyncTime_m3727643043 (NetworkTransform_t3548153263 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GL_Begin_m1290681325 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GL_Color_m2127587175 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GL_Vertex3_m766753641 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
extern "C" IL2CPP_METHOD_ATTR void GL_End_m539612367 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::DrawRotationInterpolation()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m1582314779 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_right_m2535262102 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Material_SetInt_m1783799378 (Material_t340375123 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetBuffer__ctor_m3439388757 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m1224805231 (UTF8Encoding_t3956466879 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetBuffer__ctor_m1859496364 (NetBuffer_t2156033743 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetBuffer::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetBuffer_get_Position_m2888524920 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetBuffer::AsArraySegment()
extern "C" IL2CPP_METHOD_ATTR ArraySegment_1_t283560987  NetBuffer_AsArraySegment_m2456076681 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m1931227497 (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t283560987 *, const RuntimeMethod*))ArraySegment_1_get_Count_m1931227497_gshared)(__this, method);
}
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_t4116647657* ArraySegment_1_get_Array_m3038125939 (ArraySegment_1_t283560987 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (ArraySegment_1_t283560987 *, const RuntimeMethod*))ArraySegment_1_get_Array_m3038125939_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C" IL2CPP_METHOD_ATTR ArraySegment_1_t283560987  NetworkWriter_AsArraySegment_m857312692 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m524839711 (NetworkWriter_t3928387057 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkInstanceId::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkInstanceId_get_Value_m3072328574 (NetworkInstanceId_t786350175 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m3131691200 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkSceneId::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t NetworkSceneId_get_Value_m1596061750 (NetworkSceneId_t717048590 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte_m3822302387 (NetBuffer_t2156033743 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte2(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte2_m389295316 (NetBuffer_t2156033743 * __this, uint8_t ___value00, uint8_t ___value11, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteByte4(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteByte4_m2453375265 (NetBuffer_t2156033743 * __this, uint8_t ___value00, uint8_t ___value11, uint8_t ___value22, uint8_t ___value33, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2780906429 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m413412595 (NetworkWriter_t3928387057 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::WriteBytes(System.Byte[],System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_WriteBytes_m3812345676 (NetBuffer_t2156033743 * __this, ByteU5BU5D_t4116647657* ___buffer0, uint16_t ___count1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
extern "C" IL2CPP_METHOD_ATTR bool LogFilter_get_logError_m2939562087 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m189730350 (NetworkWriter_t3928387057 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t3299519057 * GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t3299519057 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2437701974_gshared)(__this, method);
}
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
extern "C" IL2CPP_METHOD_ATTR NetworkInstanceId_t786350175  NetworkIdentity_get_netId_m3534357786 (NetworkIdentity_t3299519057 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2257467436 (NetworkWriter_t3928387057 * __this, NetworkInstanceId_t786350175  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logWarn()
extern "C" IL2CPP_METHOD_ATTR bool LogFilter_get_logWarn_m1931385554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::SeekZero()
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_SeekZero_m818658810 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_SeekZero_m4052279075 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m297525087 (NetworkWriter_t3928387057 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetBuffer::FinishMessage()
extern "C" IL2CPP_METHOD_ATTR void NetBuffer_FinishMessage_m1626721425 (NetBuffer_t2156033743 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkInstanceId::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkInstanceId_ToString_m2512558384 (NetworkInstanceId_t786350175 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkConnection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkConnection__ctor_m3056801716 (NetworkConnection_t2705220091 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.LocalClient::InvokeHandlerOnClient(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LocalClient_InvokeHandlerOnClient_m480158021 (LocalClient_t1191103892 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.LocalClient::InvokeBytesOnClient(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LocalClient_InvokeBytesOnClient_m4098541965 (LocalClient_t1191103892 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkWriter_AsArray_m3793159246 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeHandlerOnServer(UnityEngine.Networking.ULocalConnectionToServer,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_InvokeHandlerOnServer_m645830171 (NetworkServer_t2920297688 * __this, ULocalConnectionToServer_t1112427013 * ___conn0, int16_t ___msgType1, MessageBase_t3584795631 * ___msg2, int32_t ___channelId3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeBytes(UnityEngine.Networking.ULocalConnectionToServer,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkServer_InvokeBytes_m3498919961 (NetworkServer_t2920297688 * __this, ULocalConnectionToServer_t1112427013 * ___conn0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___numBytes2, int32_t ___channelId3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer__ctor_m942684589 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer__ctor_m942684589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t204670959_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m930927820(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::get_visualizerPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * NetworkTransformVisualizer_get_visualizerPrefab_m3168581260 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_m_VisualizerPrefab_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		GameObject_t1113636619 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::set_visualizerPrefab(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_set_visualizerPrefab_m2314136229 (NetworkTransformVisualizer_t2328387012 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set_m_VisualizerPrefab_10(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnStartClient()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnStartClient_m2754427721 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnStartClient_m2754427721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_VisualizerPrefab_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		NetworkTransform_t3548153263 * L_2 = Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998(__this, /*hidden argument*/Component_GetComponent_TisNetworkTransform_t3548153263_m4257392998_RuntimeMethod_var);
		__this->set_m_NetworkTransform_11(L_2);
		NetworkTransformVisualizer_CreateLineMaterial_m3214025820(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_m_VisualizerPrefab_10();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m1553712732(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m1553712732_RuntimeMethod_var);
		__this->set_m_Visualizer_12(L_7);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnStartLocalPlayer()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnStartLocalPlayer_m3884173815 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnStartLocalPlayer_m3884173815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_003f;
	}

IL_0017:
	{
		NetworkTransform_t3548153263 * L_2 = __this->get_m_NetworkTransform_11();
		NullCheck(L_2);
		bool L_3 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		bool L_4 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}

IL_0032:
	{
		GameObject_t1113636619 * L_5 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnDestroy_m2854303748 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnDestroy_m2854303748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_FixedUpdate_m3503359228 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_FixedUpdate_m3503359228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_018b;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t2920297688_il2cpp_TypeInfo_var);
		bool L_2 = NetworkServer_get_active_m2527733392(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_t3758195968_il2cpp_TypeInfo_var);
		bool L_3 = NetworkClient_get_active_m761030454(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_018b;
	}

IL_0030:
	{
		bool L_4 = NetworkBehaviour_get_isServer_m3662737156(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004b;
		}
	}
	{
		bool L_5 = NetworkBehaviour_get_isClient_m792420926(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_018b;
	}

IL_004b:
	{
		bool L_6 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		NetworkTransform_t3548153263 * L_7 = __this->get_m_NetworkTransform_11();
		NullCheck(L_7);
		bool L_8 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_018b;
	}

IL_006b:
	{
		GameObject_t1113636619 * L_9 = __this->get_m_Visualizer_12();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		NetworkTransform_t3548153263 * L_11 = __this->get_m_NetworkTransform_11();
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = NetworkTransform_get_targetSyncPosition_m3939799000(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_12, /*hidden argument*/NULL);
		NetworkTransform_t3548153263 * L_13 = __this->get_m_NetworkTransform_11();
		NullCheck(L_13);
		Rigidbody_t3916780224 * L_14 = NetworkTransform_get_rigidbody3D_m1680182927(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00cf;
		}
	}
	{
		GameObject_t1113636619 * L_16 = __this->get_m_Visualizer_12();
		NullCheck(L_16);
		Rigidbody_t3916780224 * L_17 = GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356(L_16, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00cf;
		}
	}
	{
		GameObject_t1113636619 * L_19 = __this->get_m_Visualizer_12();
		NullCheck(L_19);
		Rigidbody_t3916780224 * L_20 = GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356(L_19, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m3944438356_RuntimeMethod_var);
		NetworkTransform_t3548153263 * L_21 = __this->get_m_NetworkTransform_11();
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = NetworkTransform_get_targetSyncVelocity_m3799605955(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody_set_velocity_m2899403247(L_20, L_22, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		NetworkTransform_t3548153263 * L_23 = __this->get_m_NetworkTransform_11();
		NullCheck(L_23);
		Rigidbody2D_t939494601 * L_24 = NetworkTransform_get_rigidbody2D_m3914535243(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_011d;
		}
	}
	{
		GameObject_t1113636619 * L_26 = __this->get_m_Visualizer_12();
		NullCheck(L_26);
		Rigidbody2D_t939494601 * L_27 = GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995(L_26, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_27, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_011d;
		}
	}
	{
		GameObject_t1113636619 * L_29 = __this->get_m_Visualizer_12();
		NullCheck(L_29);
		Rigidbody2D_t939494601 * L_30 = GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995(L_29, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m577109995_RuntimeMethod_var);
		NetworkTransform_t3548153263 * L_31 = __this->get_m_NetworkTransform_11();
		NullCheck(L_31);
		Vector3_t3722313464  L_32 = NetworkTransform_get_targetSyncVelocity_m3799605955(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_33 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody2D_set_velocity_m2898400508(L_30, L_33, /*hidden argument*/NULL);
	}

IL_011d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_34 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_34;
		NetworkTransform_t3548153263 * L_35 = __this->get_m_NetworkTransform_11();
		NullCheck(L_35);
		Rigidbody_t3916780224 * L_36 = NetworkTransform_get_rigidbody3D_m1680182927(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_36, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0147;
		}
	}
	{
		NetworkTransform_t3548153263 * L_38 = __this->get_m_NetworkTransform_11();
		NullCheck(L_38);
		Quaternion_t2301928331  L_39 = NetworkTransform_get_targetSyncRotation3D_m3959327059(L_38, /*hidden argument*/NULL);
		V_0 = L_39;
	}

IL_0147:
	{
		NetworkTransform_t3548153263 * L_40 = __this->get_m_NetworkTransform_11();
		NullCheck(L_40);
		Rigidbody2D_t939494601 * L_41 = NetworkTransform_get_rigidbody2D_m3914535243(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_42 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_41, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_017a;
		}
	}
	{
		NetworkTransform_t3548153263 * L_43 = __this->get_m_NetworkTransform_11();
		NullCheck(L_43);
		float L_44 = NetworkTransform_get_targetSyncRotation2D_m383745925(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_45 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_44, /*hidden argument*/NULL);
		V_0 = L_45;
	}

IL_017a:
	{
		GameObject_t1113636619 * L_46 = __this->get_m_Visualizer_12();
		NullCheck(L_46);
		Transform_t3600365921 * L_47 = GameObject_get_transform_m1369836730(L_46, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_48 = V_0;
		NullCheck(L_47);
		Transform_set_rotation_m3524318132(L_47, L_48, /*hidden argument*/NULL);
	}

IL_018b:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::OnRenderObject()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_OnRenderObject_m843166100 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_OnRenderObject_m843166100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		GameObject_t1113636619 * L_0 = __this->get_m_Visualizer_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_00f6;
	}

IL_0017:
	{
		NetworkTransform_t3548153263 * L_2 = __this->get_m_NetworkTransform_11();
		NullCheck(L_2);
		bool L_3 = NetworkBehaviour_get_localPlayerAuthority_m3825444790(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = NetworkBehaviour_get_hasAuthority_m3994339092(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00f6;
	}

IL_0037:
	{
		NetworkTransform_t3548153263 * L_5 = __this->get_m_NetworkTransform_11();
		NullCheck(L_5);
		float L_6 = NetworkTransform_get_lastSyncTime_m3727643043(L_5, /*hidden argument*/NULL);
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_00f6;
	}

IL_0051:
	{
		Material_t340375123 * L_7 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		NullCheck(L_7);
		Material_SetPass_m686253719(L_7, 0, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_8 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Color_m2127587175(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		float L_11 = (&V_0)->get_x_2();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = (&V_1)->get_y_3();
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_11, L_14, L_17, /*hidden argument*/NULL);
		NetworkTransform_t3548153263 * L_18 = __this->get_m_NetworkTransform_11();
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = NetworkTransform_get_targetSyncPosition_m3939799000(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = (&V_3)->get_x_2();
		NetworkTransform_t3548153263 * L_21 = __this->get_m_NetworkTransform_11();
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = NetworkTransform_get_targetSyncPosition_m3939799000(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = (&V_4)->get_y_3();
		NetworkTransform_t3548153263 * L_24 = __this->get_m_NetworkTransform_11();
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = NetworkTransform_get_targetSyncPosition_m3939799000(L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		float L_26 = (&V_5)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_20, L_23, L_26, /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941(__this, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::DrawRotationInterpolation()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941 (NetworkTransformVisualizer_t2328387012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_DrawRotationInterpolation_m1716797941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkTransform_t3548153263 * L_1 = __this->get_m_NetworkTransform_11();
		NullCheck(L_1);
		Rigidbody_t3916780224 * L_2 = NetworkTransform_get_rigidbody3D_m1680182927(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		NetworkTransform_t3548153263 * L_4 = __this->get_m_NetworkTransform_11();
		NullCheck(L_4);
		Quaternion_t2301928331  L_5 = NetworkTransform_get_targetSyncRotation3D_m3959327059(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002b:
	{
		NetworkTransform_t3548153263 * L_6 = __this->get_m_NetworkTransform_11();
		NullCheck(L_6);
		Rigidbody2D_t939494601 * L_7 = NetworkTransform_get_rigidbody2D_m3914535243(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		NetworkTransform_t3548153263 * L_9 = __this->get_m_NetworkTransform_11();
		NullCheck(L_9);
		float L_10 = NetworkTransform_get_targetSyncRotation2D_m383745925(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_005e:
	{
		Quaternion_t2301928331  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_14 = Quaternion_op_Equality_m1582314779(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_018e;
	}

IL_0073:
	{
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Color_m2127587175(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = (&V_1)->get_x_2();
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_y_3();
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = (&V_3)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_18, L_21, L_24, /*hidden argument*/NULL);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_right_m2535262102(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_26, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		float L_30 = (&V_4)->get_x_2();
		float L_31 = (&V_4)->get_y_3();
		float L_32 = (&V_4)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_30, L_31, L_32, /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Color_t2555686324  L_33 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_Color_m2127587175(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		float L_36 = (&V_5)->get_x_2();
		Transform_t3600365921 * L_37 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t3722313464  L_38 = Transform_get_position_m36019626(L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		float L_39 = (&V_6)->get_y_3();
		Transform_t3600365921 * L_40 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t3722313464  L_41 = Transform_get_position_m36019626(L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		float L_42 = (&V_7)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_36, L_39, L_42, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_43 = V_0;
		Vector3_t3722313464  L_44 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_45 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		V_8 = L_45;
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t3722313464  L_47 = Transform_get_position_m36019626(L_46, /*hidden argument*/NULL);
		Vector3_t3722313464  L_48 = V_8;
		Vector3_t3722313464  L_49 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		V_9 = L_49;
		float L_50 = (&V_9)->get_x_2();
		float L_51 = (&V_9)->get_y_3();
		float L_52 = (&V_9)->get_z_4();
		GL_Vertex3_m766753641(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_018e:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransformVisualizer::CreateLineMaterial()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransformVisualizer_CreateLineMaterial_m3214025820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransformVisualizer_CreateLineMaterial_m3214025820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_t4151988712 * V_0 = NULL;
	{
		Material_t340375123 * L_0 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0062;
	}

IL_0015:
	{
		Shader_t4151988712 * L_2 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral163873836, /*hidden argument*/NULL);
		V_0 = L_2;
		Shader_t4151988712 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1728819234, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_003b:
	{
		Shader_t4151988712 * L_5 = V_0;
		Material_t340375123 * L_6 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_6, L_5, /*hidden argument*/NULL);
		((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->set_s_LineMaterial_13(L_6);
		Material_t340375123 * L_7 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		NullCheck(L_7);
		Object_set_hideFlags_m1648752846(L_7, ((int32_t)61), /*hidden argument*/NULL);
		Material_t340375123 * L_8 = ((NetworkTransformVisualizer_t2328387012_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransformVisualizer_t2328387012_il2cpp_TypeInfo_var))->get_s_LineMaterial_13();
		NullCheck(L_8);
		Material_SetInt_m1783799378(L_8, _stringLiteral1810507830, 0, /*hidden argument*/NULL);
	}

IL_0062:
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
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m18760743 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter__ctor_m18760743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_0 = (NetBuffer_t2156033743 *)il2cpp_codegen_object_new(NetBuffer_t2156033743_il2cpp_TypeInfo_var);
		NetBuffer__ctor_m3439388757(L_0, /*hidden argument*/NULL);
		__this->set_m_Buffer_1(L_0);
		Encoding_t1523322056 * L_1 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		UTF8Encoding_t3956466879 * L_2 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_2, /*hidden argument*/NULL);
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_Encoding_2(L_2);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_StringWriteBuffer_3(L_3);
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m824815027 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter__ctor_m824815027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		NetBuffer_t2156033743 * L_1 = (NetBuffer_t2156033743 *)il2cpp_codegen_object_new(NetBuffer_t2156033743_il2cpp_TypeInfo_var);
		NetBuffer__ctor_m1859496364(L_1, L_0, /*hidden argument*/NULL);
		__this->set_m_Buffer_1(L_1);
		Encoding_t1523322056 * L_2 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		UTF8Encoding_t3956466879 * L_3 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1224805231(L_3, /*hidden argument*/NULL);
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_Encoding_2(L_3);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->set_s_StringWriteBuffer_3(L_4);
	}

IL_0038:
	{
		return;
	}
}
// System.Int16 UnityEngine.Networking.NetworkWriter::get_Position()
extern "C" IL2CPP_METHOD_ATTR int16_t NetworkWriter_get_Position_m2028972219 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		uint32_t L_1 = NetBuffer_get_Position_m2888524920(L_0, /*hidden argument*/NULL);
		V_0 = (((int16_t)((int16_t)L_1)));
		goto IL_0013;
	}

IL_0013:
	{
		int16_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UnityEngine.Networking.NetworkWriter::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkWriter_ToArray_m132610877 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_ToArray_m132610877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ArraySegment_1_t283560987  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ArraySegment_1_t283560987  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ArraySegment_1_t283560987  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ByteU5BU5D_t4116647657* V_4 = NULL;
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		ArraySegment_1_t283560987  L_1 = NetBuffer_AsArraySegment_m2456076681(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = ArraySegment_1_get_Count_m1931227497((ArraySegment_1_t283560987 *)(&V_1), /*hidden argument*/ArraySegment_1_get_Count_m1931227497_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		NetBuffer_t2156033743 * L_4 = __this->get_m_Buffer_1();
		NullCheck(L_4);
		ArraySegment_1_t283560987  L_5 = NetBuffer_AsArraySegment_m2456076681(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ArraySegment_1_get_Array_m3038125939((ArraySegment_1_t283560987 *)(&V_2), /*hidden argument*/ArraySegment_1_get_Array_m3038125939_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NetBuffer_t2156033743 * L_8 = __this->get_m_Buffer_1();
		NullCheck(L_8);
		ArraySegment_1_t283560987  L_9 = NetBuffer_AsArraySegment_m2456076681(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = ArraySegment_1_get_Count_m1931227497((ArraySegment_1_t283560987 *)(&V_3), /*hidden argument*/ArraySegment_1_get_Count_m1931227497_RuntimeMethod_var);
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = V_0;
		V_4 = L_11;
		goto IL_004e;
	}

IL_004e:
	{
		ByteU5BU5D_t4116647657* L_12 = V_4;
		return L_12;
	}
}
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* NetworkWriter_AsArray_m3793159246 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_AsArray_m3793159246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t283560987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ArraySegment_1_t283560987  L_0 = NetworkWriter_AsArraySegment_m857312692(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = ArraySegment_1_get_Array_m3038125939((ArraySegment_1_t283560987 *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m3038125939_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		ByteU5BU5D_t4116647657* L_2 = V_1;
		return L_2;
	}
}
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C" IL2CPP_METHOD_ATTR ArraySegment_1_t283560987  NetworkWriter_AsArraySegment_m857312692 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	ArraySegment_1_t283560987  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		ArraySegment_1_t283560987  L_1 = NetBuffer_AsArraySegment_m2456076681(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ArraySegment_1_t283560987  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m3131691200 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)240)))))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_1 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_001a:
	{
		uint32_t L_2 = ___value0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)2287)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_3 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)240)))/(uint32_t)(int32_t)((int32_t)256))), (int32_t)((int32_t)241)))))), /*hidden argument*/NULL);
		uint32_t L_4 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)240)))%(uint32_t)(int32_t)((int32_t)256)))))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_0059:
	{
		uint32_t L_5 = ___value0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)67823)))))
		{
			goto IL_009d;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		uint32_t L_6 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)2288)))/(uint32_t)(int32_t)((int32_t)256)))))), /*hidden argument*/NULL);
		uint32_t L_7 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)2288)))%(uint32_t)(int32_t)((int32_t)256)))))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_009d:
	{
		uint32_t L_8 = ___value0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)16777215)))))
		{
			goto IL_00e8;
		}
	}
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		uint32_t L_9 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_10 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_10>>8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_11 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_11>>((int32_t)16)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_00e8:
	{
		NetworkWriter_Write_m524839711(__this, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		uint32_t L_12 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_13 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_13>>8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_14 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_14>>((int32_t)16)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		uint32_t L_15 = ___value0;
		NetworkWriter_Write_m524839711(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_15>>((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2257467436 (NetworkWriter_t3928387057 * __this, NetworkInstanceId_t786350175  ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = NetworkInstanceId_get_Value_m3072328574((NetworkInstanceId_t786350175 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m3131691200(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m3340287509 (NetworkWriter_t3928387057 * __this, NetworkSceneId_t717048590  ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = NetworkSceneId_get_Value_m1596061750((NetworkSceneId_t717048590 *)(&___value0), /*hidden argument*/NULL);
		NetworkWriter_WritePackedUInt32_m3131691200(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m524839711 (NetworkWriter_t3928387057 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte_m3822302387(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m297525087 (NetworkWriter_t3928387057 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		int16_t L_1 = ___value0;
		int16_t L_2 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte2_m389295316(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m413412595 (NetworkWriter_t3928387057 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint16_t L_1 = ___value0;
		uint16_t L_2 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte2_m389295316(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2267024627 (NetworkWriter_t3928387057 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		int32_t L_1 = ___value0;
		int32_t L_2 = ___value0;
		int32_t L_3 = ___value0;
		int32_t L_4 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte4_m2453375265(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2780906429 (NetworkWriter_t3928387057 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		uint32_t L_1 = ___value0;
		uint32_t L_2 = ___value0;
		uint32_t L_3 = ___value0;
		uint32_t L_4 = ___value0;
		NullCheck(L_0);
		NetBuffer_WriteByte4_m2453375265(L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>8))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_3>>((int32_t)16)))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m189730350 (NetworkWriter_t3928387057 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m189730350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		(((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_address_of_s_FloatConverter_4())->set_floatValue_0(L_0);
		uint32_t L_1 = (((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_address_of_s_FloatConverter_4())->get_intValue_1();
		NetworkWriter_Write_m2780906429(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2410084080 (NetworkWriter_t3928387057 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m2410084080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		NetBuffer_t2156033743 * L_1 = __this->get_m_Buffer_1();
		NullCheck(L_1);
		NetBuffer_WriteByte2_m389295316(L_1, (uint8_t)0, (uint8_t)0, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_001a:
	{
		Encoding_t1523322056 * L_2 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(18 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)32768))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1659358499, L_9, /*hidden argument*/NULL);
		IndexOutOfRangeException_t1578797820 * L_11 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, NetworkWriter_Write_m2410084080_RuntimeMethod_var);
	}

IL_004d:
	{
		int32_t L_12 = V_0;
		NetworkWriter_Write_m413412595(__this, (uint16_t)(((int32_t)((uint16_t)L_12))), /*hidden argument*/NULL);
		Encoding_t1523322056 * L_13 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_Encoding_2();
		String_t* L_14 = ___value0;
		String_t* L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_17 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_StringWriteBuffer_3();
		NullCheck(L_13);
		int32_t L_18 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_13, L_14, 0, L_16, L_17, 0);
		V_1 = L_18;
		NetBuffer_t2156033743 * L_19 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_20 = ((NetworkWriter_t3928387057_StaticFields*)il2cpp_codegen_static_fields_for(NetworkWriter_t3928387057_il2cpp_TypeInfo_var))->get_s_StringWriteBuffer_3();
		int32_t L_21 = V_1;
		NullCheck(L_19);
		NetBuffer_WriteBytes_m3812345676(L_19, L_20, (uint16_t)(((int32_t)((uint16_t)L_21))), /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2977220184 (NetworkWriter_t3928387057 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NetBuffer_t2156033743 * L_1 = __this->get_m_Buffer_1();
		NullCheck(L_1);
		NetBuffer_WriteByte_m3822302387(L_1, (uint8_t)1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0018:
	{
		NetBuffer_t2156033743 * L_2 = __this->get_m_Buffer_1();
		NullCheck(L_2);
		NetBuffer_WriteByte_m3822302387(L_2, (uint8_t)0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m542866276 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_WriteBytesAndSize_m542866276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___count1;
		if (L_1)
		{
			goto IL_001a;
		}
	}

IL_000d:
	{
		NetworkWriter_Write_m413412595(__this, (uint16_t)0, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_001a:
	{
		int32_t L_2 = ___count1;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_3 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_4 = ___count1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3221776185, L_6, _stringLiteral3051958475, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		goto IL_0067;
	}

IL_0051:
	{
		int32_t L_8 = ___count1;
		NetworkWriter_Write_m413412595(__this, (uint16_t)(((int32_t)((uint16_t)L_8))), /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_9 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		int32_t L_11 = ___count1;
		NullCheck(L_9);
		NetBuffer_WriteBytes_m3812345676(L_9, L_10, (uint16_t)(((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesFull_m804870477 (NetworkWriter_t3928387057 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_WriteBytesFull_m804870477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		NetworkWriter_Write_m413412595(__this, (uint16_t)0, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_1 = ___buffer0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2263479475, L_5, _stringLiteral3051958475, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_004a:
	{
		goto IL_0069;
	}

IL_004f:
	{
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		NullCheck(L_7);
		NetworkWriter_Write_m413412595(__this, (uint16_t)(((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))))), /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_8 = __this->get_m_Buffer_1();
		ByteU5BU5D_t4116647657* L_9 = ___buffer0;
		ByteU5BU5D_t4116647657* L_10 = ___buffer0;
		NullCheck(L_10);
		NullCheck(L_8);
		NetBuffer_WriteBytes_m3812345676(L_8, L_9, (uint16_t)(((int32_t)((uint16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))))), /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m13017049 (NetworkWriter_t3928387057 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_0();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_1();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m13082585 (NetworkWriter_t3928387057 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_2();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_3();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_z_4();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2449292798 (NetworkWriter_t3928387057 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___value0)->get_x_0();
		NetworkWriter_Write_m189730350(__this, L_0, /*hidden argument*/NULL);
		float L_1 = (&___value0)->get_y_1();
		NetworkWriter_Write_m189730350(__this, L_1, /*hidden argument*/NULL);
		float L_2 = (&___value0)->get_z_2();
		NetworkWriter_Write_m189730350(__this, L_2, /*hidden argument*/NULL);
		float L_3 = (&___value0)->get_w_3();
		NetworkWriter_Write_m189730350(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m426356230 (NetworkWriter_t3928387057 * __this, NetworkHash128_t2391674535  ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (&___value0)->get_i0_0();
		NetworkWriter_Write_m524839711(__this, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = (&___value0)->get_i1_1();
		NetworkWriter_Write_m524839711(__this, L_1, /*hidden argument*/NULL);
		uint8_t L_2 = (&___value0)->get_i2_2();
		NetworkWriter_Write_m524839711(__this, L_2, /*hidden argument*/NULL);
		uint8_t L_3 = (&___value0)->get_i3_3();
		NetworkWriter_Write_m524839711(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = (&___value0)->get_i4_4();
		NetworkWriter_Write_m524839711(__this, L_4, /*hidden argument*/NULL);
		uint8_t L_5 = (&___value0)->get_i5_5();
		NetworkWriter_Write_m524839711(__this, L_5, /*hidden argument*/NULL);
		uint8_t L_6 = (&___value0)->get_i6_6();
		NetworkWriter_Write_m524839711(__this, L_6, /*hidden argument*/NULL);
		uint8_t L_7 = (&___value0)->get_i7_7();
		NetworkWriter_Write_m524839711(__this, L_7, /*hidden argument*/NULL);
		uint8_t L_8 = (&___value0)->get_i8_8();
		NetworkWriter_Write_m524839711(__this, L_8, /*hidden argument*/NULL);
		uint8_t L_9 = (&___value0)->get_i9_9();
		NetworkWriter_Write_m524839711(__this, L_9, /*hidden argument*/NULL);
		uint8_t L_10 = (&___value0)->get_i10_10();
		NetworkWriter_Write_m524839711(__this, L_10, /*hidden argument*/NULL);
		uint8_t L_11 = (&___value0)->get_i11_11();
		NetworkWriter_Write_m524839711(__this, L_11, /*hidden argument*/NULL);
		uint8_t L_12 = (&___value0)->get_i12_12();
		NetworkWriter_Write_m524839711(__this, L_12, /*hidden argument*/NULL);
		uint8_t L_13 = (&___value0)->get_i13_13();
		NetworkWriter_Write_m524839711(__this, L_13, /*hidden argument*/NULL);
		uint8_t L_14 = (&___value0)->get_i14_14();
		NetworkWriter_Write_m524839711(__this, L_14, /*hidden argument*/NULL);
		uint8_t L_15 = (&___value0)->get_i15_15();
		NetworkWriter_Write_m524839711(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2295136255 (NetworkWriter_t3928387057 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkWriter_Write_m2295136255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t3299519057 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_001a:
	{
		GameObject_t1113636619 * L_2 = ___value0;
		NullCheck(L_2);
		NetworkIdentity_t3299519057 * L_3 = GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152(L_2, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var);
		V_0 = L_3;
		NetworkIdentity_t3299519057 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		NetworkIdentity_t3299519057 * L_6 = V_0;
		NullCheck(L_6);
		NetworkInstanceId_t786350175  L_7 = NetworkIdentity_get_netId_m3534357786(L_6, /*hidden argument*/NULL);
		NetworkWriter_Write_m2257467436(__this, L_7, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_8 = LogFilter_get_logWarn_m1931385554(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		GameObject_t1113636619 * L_9 = ___value0;
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3514328747, L_9, _stringLiteral1665107978, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0062:
	{
		NetworkWriter_WritePackedUInt32_m3131691200(__this, 0, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_SeekZero_m4052279075 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		NetBuffer_SeekZero_m818658810(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_m841875667 (NetworkWriter_t3928387057 * __this, int16_t ___msgType0, const RuntimeMethod* method)
{
	{
		NetworkWriter_SeekZero_m4052279075(__this, /*hidden argument*/NULL);
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		NetBuffer_WriteByte2_m389295316(L_0, (uint8_t)0, (uint8_t)0, /*hidden argument*/NULL);
		int16_t L_1 = ___msgType0;
		NetworkWriter_Write_m297525087(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C" IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_m3971444334 (NetworkWriter_t3928387057 * __this, const RuntimeMethod* method)
{
	{
		NetBuffer_t2156033743 * L_0 = __this->get_m_Buffer_1();
		NullCheck(L_0);
		NetBuffer_FinishMessage_m1626721425(L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.PlayerController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m3978748274 (PlayerController_t496487816 * __this, const RuntimeMethod* method)
{
	{
		__this->set_playerControllerId_1((int16_t)(-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerController::.ctor(UnityEngine.GameObject,System.Int16)
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m1563370273 (PlayerController_t496487816 * __this, GameObject_t1113636619 * ___go0, int16_t ___playerControllerId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController__ctor_m1563370273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_playerControllerId_1((int16_t)(-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = ___go0;
		__this->set_gameObject_3(L_0);
		GameObject_t1113636619 * L_1 = ___go0;
		NullCheck(L_1);
		NetworkIdentity_t3299519057 * L_2 = GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152(L_1, /*hidden argument*/GameObject_GetComponent_TisNetworkIdentity_t3299519057_m4215495152_RuntimeMethod_var);
		__this->set_unetView_2(L_2);
		int16_t L_3 = ___playerControllerId1;
		__this->set_playerControllerId_1(L_3);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerController::get_IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayerController_get_IsValid_m3565267537 (PlayerController_t496487816 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int16_t L_0 = __this->get_playerControllerId_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.PlayerController::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* PlayerController_ToString_m451687094 (PlayerController_t496487816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_ToString_m451687094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInstanceId_t786350175  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int16_t L_2 = __this->get_playerControllerId_1();
		int16_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NetworkIdentity_t3299519057 * L_6 = __this->get_unetView_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteral148958899;
		if (!L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteral148958899;
			goto IL_004b;
		}
	}
	{
		NetworkIdentity_t3299519057 * L_8 = __this->get_unetView_2();
		NullCheck(L_8);
		NetworkInstanceId_t786350175  L_9 = NetworkIdentity_get_netId_m3534357786(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = NetworkInstanceId_ToString_m2512558384((NetworkInstanceId_t786350175 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0050;
	}

IL_004b:
	{
		G_B3_0 = _stringLiteral1202628576;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0050:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_11 = G_B3_3;
		GameObject_t1113636619 * L_12 = __this->get_gameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = 2;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = G_B3_4;
		if (!L_13)
		{
			G_B5_0 = 2;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = G_B3_4;
			goto IL_0074;
		}
	}
	{
		GameObject_t1113636619 * L_14 = __this->get_gameObject_3();
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m4211327027(L_14, /*hidden argument*/NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0079;
	}

IL_0074:
	{
		G_B6_0 = _stringLiteral1202628576;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0079:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		String_t* L_16 = String_Format_m630303134(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0085;
	}

IL_0085:
	{
		String_t* L_17 = V_1;
		return L_17;
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
// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_m3439234033 (SpawnDelegate_t1585635496 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpawnDelegate_Invoke_m2080818349 (SpawnDelegate_t1585635496 * __this, Vector3_t3722313464  ___position0, NetworkHash128_t2391674535  ___assetId1, const RuntimeMethod* method)
{
	GameObject_t1113636619 * result = NULL;
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
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef GameObject_t1113636619 * (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, ___position0, ___assetId1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef GameObject_t1113636619 * (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, ___assetId1, targetMethod);
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
								result = GenericInterfaceFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
							else
								result = GenericVirtFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___assetId1);
							else
								result = VirtFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___assetId1);
						}
					}
					else
					{
						typedef GameObject_t1113636619 * (*FunctionPointerType) (void*, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
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
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef GameObject_t1113636619 * (*FunctionPointerType) (RuntimeObject *, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, ___position0, ___assetId1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef GameObject_t1113636619 * (*FunctionPointerType) (RuntimeObject *, void*, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___position0, ___assetId1, targetMethod);
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
							result = GenericInterfaceFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
						else
							result = GenericVirtFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(targetMethod, targetThis, ___position0, ___assetId1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___assetId1);
						else
							result = VirtFuncInvoker2< GameObject_t1113636619 *, Vector3_t3722313464 , NetworkHash128_t2391674535  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___assetId1);
					}
				}
				else
				{
					typedef GameObject_t1113636619 * (*FunctionPointerType) (void*, Vector3_t3722313464 , NetworkHash128_t2391674535 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___assetId1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_m3131172266 (SpawnDelegate_t1585635496 * __this, Vector3_t3722313464  ___position0, NetworkHash128_t2391674535  ___assetId1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnDelegate_BeginInvoke_m3131172266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(NetworkHash128_t2391674535_il2cpp_TypeInfo_var, &___assetId1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * SpawnDelegate_EndInvoke_m3848942832 (SpawnDelegate_t1585635496 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_t1113636619 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncVarAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SyncVarAttribute__ctor_m417388672 (SyncVarAttribute_t562797116 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.ULocalConnectionToClient::.ctor(UnityEngine.Networking.LocalClient)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToClient__ctor_m3225125635 (ULocalConnectionToClient_t1858816613 * __this, LocalClient_t1191103892 * ___localClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToClient__ctor_m3225125635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConnection__ctor_m3056801716(__this, /*hidden argument*/NULL);
		((NetworkConnection_t2705220091 *)__this)->set_address_14(_stringLiteral3702469874);
		LocalClient_t1191103892 * L_0 = ___localClient0;
		__this->set_m_LocalClient_19(L_0);
		return;
	}
}
// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::get_localClient()
extern "C" IL2CPP_METHOD_ATTR LocalClient_t1191103892 * ULocalConnectionToClient_get_localClient_m3517974156 (ULocalConnectionToClient_t1858816613 * __this, const RuntimeMethod* method)
{
	LocalClient_t1191103892 * V_0 = NULL;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		LocalClient_t1191103892 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_Send_m917486686 (ULocalConnectionToClient_t1858816613 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m480158021(L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendByChannel_m1636964758 (ULocalConnectionToClient_t1858816613 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, int32_t ___channelId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		LocalClient_InvokeHandlerOnClient_m480158021(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendBytes_m3166529203 (ULocalConnectionToClient_t1858816613 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		int32_t L_2 = ___channelId2;
		NullCheck(L_0);
		LocalClient_InvokeBytesOnClient_m4098541965(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToClient_SendWriter_m2957537543 (ULocalConnectionToClient_t1858816613 * __this, NetworkWriter_t3928387057 * ___writer0, int32_t ___channelId1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		LocalClient_t1191103892 * L_0 = __this->get_m_LocalClient_19();
		NetworkWriter_t3928387057 * L_1 = ___writer0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = NetworkWriter_AsArray_m3793159246(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___channelId1;
		NullCheck(L_0);
		LocalClient_InvokeBytesOnClient_m4098541965(L_0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.Networking.ULocalConnectionToServer::.ctor(UnityEngine.Networking.NetworkServer)
extern "C" IL2CPP_METHOD_ATTR void ULocalConnectionToServer__ctor_m130825988 (ULocalConnectionToServer_t1112427013 * __this, NetworkServer_t2920297688 * ___localServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToServer__ctor_m130825988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkConnection__ctor_m3056801716(__this, /*hidden argument*/NULL);
		((NetworkConnection_t2705220091 *)__this)->set_address_14(_stringLiteral1035402498);
		NetworkServer_t2920297688 * L_0 = ___localServer0;
		__this->set_m_LocalServer_19(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_Send_m2280394388 (ULocalConnectionToServer_t1112427013 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		NullCheck(L_0);
		bool L_3 = NetworkServer_InvokeHandlerOnServer_m645830171(L_0, __this, L_1, L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendByChannel_m2848768719 (ULocalConnectionToServer_t1112427013 * __this, int16_t ___msgType0, MessageBase_t3584795631 * ___msg1, int32_t ___channelId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		int16_t L_1 = ___msgType0;
		MessageBase_t3584795631 * L_2 = ___msg1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		bool L_4 = NetworkServer_InvokeHandlerOnServer_m645830171(L_0, __this, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendBytes_m3941987877 (ULocalConnectionToServer_t1112427013 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___numBytes1, int32_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ULocalConnectionToServer_SendBytes_m3941987877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___numBytes1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t3573890335_il2cpp_TypeInfo_var);
		bool L_1 = LogFilter_get_logError_m2939562087(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2061384552, /*hidden argument*/NULL);
	}

IL_001f:
	{
		V_0 = (bool)0;
		goto IL_003b;
	}

IL_0026:
	{
		NetworkServer_t2920297688 * L_2 = __this->get_m_LocalServer_19();
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		int32_t L_4 = ___numBytes1;
		int32_t L_5 = ___channelId2;
		NullCheck(L_2);
		bool L_6 = NetworkServer_InvokeBytes_m3498919961(L_2, __this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ULocalConnectionToServer_SendWriter_m1904869898 (ULocalConnectionToServer_t1112427013 * __this, NetworkWriter_t3928387057 * ___writer0, int32_t ___channelId1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkServer_t2920297688 * L_0 = __this->get_m_LocalServer_19();
		NetworkWriter_t3928387057 * L_1 = ___writer0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = NetworkWriter_AsArray_m3793159246(L_1, /*hidden argument*/NULL);
		NetworkWriter_t3928387057 * L_3 = ___writer0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = NetworkWriter_AsArray_m3793159246(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = ___channelId1;
		NullCheck(L_0);
		bool L_6 = NetworkServer_InvokeBytes_m3498919961(L_0, __this, L_2, (((int16_t)((int16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))))), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Networking.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate__ctor_m1746387355 (UnSpawnDelegate_t851741660 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_m948252931 (UnSpawnDelegate_t851741660 * __this, GameObject_t1113636619 * ___spawned0, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, GameObject_t1113636619 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___spawned0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, GameObject_t1113636619 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___spawned0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(targetMethod, targetThis, ___spawned0);
							else
								GenericVirtActionInvoker1< GameObject_t1113636619 * >::Invoke(targetMethod, targetThis, ___spawned0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___spawned0);
							else
								VirtActionInvoker1< GameObject_t1113636619 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___spawned0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, GameObject_t1113636619 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___spawned0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___spawned0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___spawned0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___spawned0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (GameObject_t1113636619 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, GameObject_t1113636619 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___spawned0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, GameObject_t1113636619 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___spawned0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(targetMethod, targetThis, ___spawned0);
						else
							GenericVirtActionInvoker1< GameObject_t1113636619 * >::Invoke(targetMethod, targetThis, ___spawned0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___spawned0);
						else
							VirtActionInvoker1< GameObject_t1113636619 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___spawned0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_t1113636619 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___spawned0, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___spawned0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___spawned0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___spawned0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___spawned0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (GameObject_t1113636619 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___spawned0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnSpawnDelegate_BeginInvoke_m2351730414 (UnSpawnDelegate_t851741660 * __this, GameObject_t1113636619 * ___spawned0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___spawned0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnSpawnDelegate_EndInvoke_m1927378850 (UnSpawnDelegate_t851741660 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
