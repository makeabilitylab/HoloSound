﻿#include "il2cpp-config.h"

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


// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Action`1<UnityEngine.Cubemap>
struct Action_1_t2144852004;
// System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent>
struct Action_2_t3498178784;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t377278577;
// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t1150299252;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t105772105_marshaled_com;
struct PlayerLoopSystem_t105772105_marshaled_pinvoke;



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
#ifndef PLAYERPREFS_T3518992213_H
#define PLAYERPREFS_T3518992213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefs
struct  PlayerPrefs_t3518992213  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFS_T3518992213_H
#ifndef PROPERTYNAMEUTILS_T539849043_H
#define PROPERTYNAMEUTILS_T539849043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t539849043  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T539849043_H
#ifndef RANDOM_T635017412_H
#define RANDOM_T635017412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t635017412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T635017412_H
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
#ifndef STACKTRACEUTILITY_T3465565809_H
#define STACKTRACEUTILITY_T3465565809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3465565809  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3465565809_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3465565809_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3465565809_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
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
#ifndef POSTLATEUPDATE_T2796323918_H
#define POSTLATEUPDATE_T2796323918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate
struct  PostLateUpdate_t2796323918 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PostLateUpdate_t2796323918__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTLATEUPDATE_T2796323918_H
#ifndef BATCHMODEUPDATE_T2092978832_H
#define BATCHMODEUPDATE_T2092978832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/BatchModeUpdate
struct  BatchModeUpdate_t2092978832 
{
public:
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t2092978832__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATCHMODEUPDATE_T2092978832_H
#ifndef CLEARIMMEDIATERENDERERS_T365505584_H
#define CLEARIMMEDIATERENDERERS_T365505584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
struct  ClearImmediateRenderers_t365505584 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_t365505584__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEARIMMEDIATERENDERERS_T365505584_H
#ifndef DIRECTORLATEUPDATE_T457202392_H
#define DIRECTORLATEUPDATE_T457202392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/DirectorLateUpdate
struct  DirectorLateUpdate_t457202392 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t457202392__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORLATEUPDATE_T457202392_H
#ifndef DIRECTORRENDERIMAGE_T101067038_H
#define DIRECTORRENDERIMAGE_T101067038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/DirectorRenderImage
struct  DirectorRenderImage_t101067038 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t101067038__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORRENDERIMAGE_T101067038_H
#ifndef ENLIGHTENRUNTIMEUPDATE_T4260720146_H
#define ENLIGHTENRUNTIMEUPDATE_T4260720146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
struct  EnlightenRuntimeUpdate_t4260720146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_t4260720146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENLIGHTENRUNTIMEUPDATE_T4260720146_H
#ifndef EXECUTEGAMECENTERCALLBACKS_T2005625669_H
#define EXECUTEGAMECENTERCALLBACKS_T2005625669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
struct  ExecuteGameCenterCallbacks_t2005625669 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_t2005625669__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEGAMECENTERCALLBACKS_T2005625669_H
#ifndef FINISHFRAMERENDERING_T1554225360_H
#define FINISHFRAMERENDERING_T1554225360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/FinishFrameRendering
struct  FinishFrameRendering_t1554225360 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_t1554225360__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHFRAMERENDERING_T1554225360_H
#ifndef GUICLEAREVENTS_T3875064483_H
#define GUICLEAREVENTS_T3875064483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/GUIClearEvents
struct  GUIClearEvents_t3875064483 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_t3875064483__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUICLEAREVENTS_T3875064483_H
#ifndef INPUTENDFRAME_T4083110122_H
#define INPUTENDFRAME_T4083110122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/InputEndFrame
struct  InputEndFrame_t4083110122 
{
public:
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t4083110122__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTENDFRAME_T4083110122_H
#ifndef MEMORYFRAMEMAINTENANCE_T1219312215_H
#define MEMORYFRAMEMAINTENANCE_T1219312215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
struct  MemoryFrameMaintenance_t1219312215 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t1219312215__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYFRAMEMAINTENANCE_T1219312215_H
#ifndef PARTICLESYSTEMENDUPDATEALL_T2836077351_H
#define PARTICLESYSTEMENDUPDATEALL_T2836077351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
struct  ParticleSystemEndUpdateAll_t2836077351 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_t2836077351__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMENDUPDATEALL_T2836077351_H
#ifndef PARTICLESLEGACYUPDATEALLPARTICLESYSTEMS_T554154943_H
#define PARTICLESLEGACYUPDATEALLPARTICLESYSTEMS_T554154943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ParticlesLegacyUpdateAllParticleSystems
struct  ParticlesLegacyUpdateAllParticleSystems_t554154943 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticlesLegacyUpdateAllParticleSystems_t554154943__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESLEGACYUPDATEALLPARTICLESYSTEMS_T554154943_H
#ifndef PHYSICSSKINNEDCLOTHBEGINUPDATE_T2520621450_H
#define PHYSICSSKINNEDCLOTHBEGINUPDATE_T2520621450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
struct  PhysicsSkinnedClothBeginUpdate_t2520621450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t2520621450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSSKINNEDCLOTHBEGINUPDATE_T2520621450_H
#ifndef PHYSICSSKINNEDCLOTHFINISHUPDATE_T2050201317_H
#define PHYSICSSKINNEDCLOTHFINISHUPDATE_T2050201317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
struct  PhysicsSkinnedClothFinishUpdate_t2050201317 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_t2050201317__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICSSKINNEDCLOTHFINISHUPDATE_T2050201317_H
#ifndef PLAYEREMITCANVASGEOMETRY_T1638525882_H
#define PLAYEREMITCANVASGEOMETRY_T1638525882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
struct  PlayerEmitCanvasGeometry_t1638525882 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_t1638525882__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREMITCANVASGEOMETRY_T1638525882_H
#ifndef PLAYERSENDFRAMECOMPLETE_T3284237406_H
#define PLAYERSENDFRAMECOMPLETE_T3284237406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
struct  PlayerSendFrameComplete_t3284237406 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_t3284237406__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMECOMPLETE_T3284237406_H
#ifndef PLAYERSENDFRAMEPOSTPRESENT_T1043377270_H
#define PLAYERSENDFRAMEPOSTPRESENT_T1043377270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
struct  PlayerSendFramePostPresent_t1043377270 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t1043377270__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMEPOSTPRESENT_T1043377270_H
#ifndef PLAYERSENDFRAMESTARTED_T3968901418_H
#define PLAYERSENDFRAMESTARTED_T3968901418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
struct  PlayerSendFrameStarted_t3968901418 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_t3968901418__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSENDFRAMESTARTED_T3968901418_H
#ifndef PLAYERUPDATECANVASES_T4182350995_H
#define PLAYERUPDATECANVASES_T4182350995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
struct  PlayerUpdateCanvases_t4182350995 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t4182350995__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUPDATECANVASES_T4182350995_H
#ifndef PRESENTAFTERDRAW_T3864494237_H
#define PRESENTAFTERDRAW_T3864494237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/PresentAfterDraw
struct  PresentAfterDraw_t3864494237 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t3864494237__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTAFTERDRAW_T3864494237_H
#ifndef PROCESSWEBSENDMESSAGES_T2589893390_H
#define PROCESSWEBSENDMESSAGES_T2589893390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
struct  ProcessWebSendMessages_t2589893390 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_t2589893390__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWEBSENDMESSAGES_T2589893390_H
#ifndef PROFILERENDFRAME_T852348665_H
#define PROFILERENDFRAME_T852348665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ProfilerEndFrame
struct  ProfilerEndFrame_t852348665 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t852348665__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERENDFRAME_T852348665_H
#ifndef PROFILERSYNCHRONIZESTATS_T1082371934_H
#define PROFILERSYNCHRONIZESTATS_T1082371934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
struct  ProfilerSynchronizeStats_t1082371934 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_t1082371934__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERSYNCHRONIZESTATS_T1082371934_H
#ifndef RESETINPUTAXIS_T866062302_H
#define RESETINPUTAXIS_T866062302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ResetInputAxis
struct  ResetInputAxis_t866062302 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_t866062302__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETINPUTAXIS_T866062302_H
#ifndef SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3251018792_H
#define SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3251018792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_t3251018792 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t3251018792__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3251018792_H
#ifndef SHADERHANDLEERRORS_T2219336884_H
#define SHADERHANDLEERRORS_T2219336884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ShaderHandleErrors
struct  ShaderHandleErrors_t2219336884 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_t2219336884__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERHANDLEERRORS_T2219336884_H
#ifndef SORTINGGROUPSUPDATE_T3400410071_H
#define SORTINGGROUPSUPDATE_T3400410071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
struct  SortingGroupsUpdate_t3400410071 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_t3400410071__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGGROUPSUPDATE_T3400410071_H
#ifndef THREADEDLOADINGDEBUG_T53594427_H
#define THREADEDLOADINGDEBUG_T53594427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
struct  ThreadedLoadingDebug_t53594427 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_t53594427__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADEDLOADINGDEBUG_T53594427_H
#ifndef TRIGGERENDOFFRAMECALLBACKS_T2165224221_H
#define TRIGGERENDOFFRAMECALLBACKS_T2165224221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
struct  TriggerEndOfFrameCallbacks_t2165224221 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_t2165224221__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERENDOFFRAMECALLBACKS_T2165224221_H
#ifndef UPDATEALLRENDERERS_T4055013667_H
#define UPDATEALLRENDERERS_T4055013667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateAllRenderers
struct  UpdateAllRenderers_t4055013667 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_t4055013667__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLRENDERERS_T4055013667_H
#ifndef UPDATEALLSKINNEDMESHES_T1333460471_H
#define UPDATEALLSKINNEDMESHES_T1333460471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
struct  UpdateAllSkinnedMeshes_t1333460471 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_t1333460471__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEALLSKINNEDMESHES_T1333460471_H
#ifndef UPDATEAUDIO_T3497553982_H
#define UPDATEAUDIO_T3497553982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateAudio
struct  UpdateAudio_t3497553982 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t3497553982__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEAUDIO_T3497553982_H
#ifndef UPDATECANVASRECTTRANSFORM_T1832875547_H
#define UPDATECANVASRECTTRANSFORM_T1832875547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
struct  UpdateCanvasRectTransform_t1832875547 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t1832875547__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECANVASRECTTRANSFORM_T1832875547_H
#ifndef UPDATECAPTURESCREENSHOT_T361950221_H
#define UPDATECAPTURESCREENSHOT_T361950221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
struct  UpdateCaptureScreenshot_t361950221 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_t361950221__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECAPTURESCREENSHOT_T361950221_H
#ifndef UPDATECUSTOMRENDERTEXTURES_T3703755979_H
#define UPDATECUSTOMRENDERTEXTURES_T3703755979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
struct  UpdateCustomRenderTextures_t3703755979 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_t3703755979__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATECUSTOMRENDERTEXTURES_T3703755979_H
#ifndef UPDATERECTTRANSFORM_T1757116547_H
#define UPDATERECTTRANSFORM_T1757116547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateRectTransform
struct  UpdateRectTransform_t1757116547 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_t1757116547__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERECTTRANSFORM_T1757116547_H
#ifndef UPDATERESOLUTION_T864018525_H
#define UPDATERESOLUTION_T864018525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateResolution
struct  UpdateResolution_t864018525 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t864018525__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERESOLUTION_T864018525_H
#ifndef UPDATESUBSTANCE_T2774222247_H
#define UPDATESUBSTANCE_T2774222247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateSubstance
struct  UpdateSubstance_t2774222247 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_t2774222247__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESUBSTANCE_T2774222247_H
#ifndef UPDATEVIDEO_T1157864926_H
#define UPDATEVIDEO_T1157864926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateVideo
struct  UpdateVideo_t1157864926 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_t1157864926__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEO_T1157864926_H
#ifndef UPDATEVIDEOTEXTURES_T2815897475_H
#define UPDATEVIDEOTEXTURES_T2815897475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/UpdateVideoTextures
struct  UpdateVideoTextures_t2815897475 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t2815897475__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEOTEXTURES_T2815897475_H
#ifndef XRPOSTPRESENT_T2124473652_H
#define XRPOSTPRESENT_T2124473652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PostLateUpdate/XRPostPresent
struct  XRPostPresent_t2124473652 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_t2124473652__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPOSTPRESENT_T2124473652_H
#ifndef PRELATEUPDATE_T3194249939_H
#define PRELATEUPDATE_T3194249939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate
struct  PreLateUpdate_t3194249939 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t3194249939__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRELATEUPDATE_T3194249939_H
#ifndef AIUPDATEPOSTSCRIPT_T1991765663_H
#define AIUPDATEPOSTSCRIPT_T1991765663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct  AIUpdatePostScript_t1991765663 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t1991765663__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIUPDATEPOSTSCRIPT_T1991765663_H
#ifndef CONSTRAINTMANAGERUPDATE_T4053002372_H
#define CONSTRAINTMANAGERUPDATE_T4053002372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate
struct  ConstraintManagerUpdate_t4053002372 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_t4053002372__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTMANAGERUPDATE_T4053002372_H
#ifndef DIRECTORDEFERREDEVALUATE_T3162759259_H
#define DIRECTORDEFERREDEVALUATE_T3162759259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate
struct  DirectorDeferredEvaluate_t3162759259 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t3162759259__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORDEFERREDEVALUATE_T3162759259_H
#ifndef DIRECTORUPDATEANIMATIONBEGIN_T3483220745_H
#define DIRECTORUPDATEANIMATIONBEGIN_T3483220745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct  DirectorUpdateAnimationBegin_t3483220745 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t3483220745__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATEANIMATIONBEGIN_T3483220745_H
#ifndef DIRECTORUPDATEANIMATIONEND_T3538632984_H
#define DIRECTORUPDATEANIMATIONEND_T3538632984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd
struct  DirectorUpdateAnimationEnd_t3538632984 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_t3538632984__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATEANIMATIONEND_T3538632984_H
#ifndef ENDGRAPHICSJOBSLATE_T3823419272_H
#define ENDGRAPHICSJOBSLATE_T3823419272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/EndGraphicsJobsLate
struct  EndGraphicsJobsLate_t3823419272 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsLate_t3823419272__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDGRAPHICSJOBSLATE_T3823419272_H
#ifndef LEGACYANIMATIONUPDATE_T466524488_H
#define LEGACYANIMATIONUPDATE_T466524488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate
struct  LegacyAnimationUpdate_t466524488 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_t466524488__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEGACYANIMATIONUPDATE_T466524488_H
#ifndef PARTICLESYSTEMBEGINUPDATEALL_T1600980369_H
#define PARTICLESYSTEMBEGINUPDATEALL_T1600980369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll
struct  ParticleSystemBeginUpdateAll_t1600980369 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t1600980369__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMBEGINUPDATEALL_T1600980369_H
#ifndef SCRIPTRUNBEHAVIOURLATEUPDATE_T2082815220_H
#define SCRIPTRUNBEHAVIOURLATEUPDATE_T2082815220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate
struct  ScriptRunBehaviourLateUpdate_t2082815220 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t2082815220__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURLATEUPDATE_T2082815220_H
#ifndef UNETUPDATE_T4184253373_H
#define UNETUPDATE_T4184253373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/UNetUpdate
struct  UNetUpdate_t4184253373 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_t4184253373__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNETUPDATE_T4184253373_H
#ifndef UPDATEMASTERSERVERINTERFACE_T2428268314_H
#define UPDATEMASTERSERVERINTERFACE_T2428268314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface
struct  UpdateMasterServerInterface_t2428268314 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t2428268314__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEMASTERSERVERINTERFACE_T2428268314_H
#ifndef UPDATENETWORKMANAGER_T3986463995_H
#define UPDATENETWORKMANAGER_T3986463995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreLateUpdate/UpdateNetworkManager
struct  UpdateNetworkManager_t3986463995 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_t3986463995__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATENETWORKMANAGER_T3986463995_H
#ifndef AIUPDATE_T2336814084_H
#define AIUPDATE_T2336814084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/AIUpdate
struct  AIUpdate_t2336814084 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_t2336814084__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIUPDATE_T2336814084_H
#ifndef CHECKTEXFIELDINPUT_T4138810349_H
#define CHECKTEXFIELDINPUT_T4138810349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/CheckTexFieldInput
struct  CheckTexFieldInput_t4138810349 
{
public:
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t4138810349__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECKTEXFIELDINPUT_T4138810349_H
#ifndef IMGUISENDQUEUEDEVENTS_T65887646_H
#define IMGUISENDQUEUEDEVENTS_T65887646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct  IMGUISendQueuedEvents_t65887646 
{
public:
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_t65887646__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMGUISENDQUEUEDEVENTS_T65887646_H
#ifndef NEWINPUTUPDATE_T4285063962_H
#define NEWINPUTUPDATE_T4285063962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/NewInputUpdate
struct  NewInputUpdate_t4285063962 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_t4285063962__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWINPUTUPDATE_T4285063962_H
#ifndef SENDMOUSEEVENTS_T3944192294_H
#define SENDMOUSEEVENTS_T3944192294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/SendMouseEvents
struct  SendMouseEvents_t3944192294 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t3944192294__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3944192294_H
#ifndef UPDATEVIDEO_T1599856004_H
#define UPDATEVIDEO_T1599856004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/UpdateVideo
struct  UpdateVideo_t1599856004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_t1599856004__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEVIDEO_T1599856004_H
#ifndef WINDUPDATE_T2266304656_H
#define WINDUPDATE_T2266304656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.PreUpdate/WindUpdate
struct  WindUpdate_t2266304656 
{
public:
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t2266304656__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDUPDATE_T2266304656_H
#ifndef UPDATE_T723921334_H
#define UPDATE_T723921334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update
struct  Update_t723921334 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Update_t723921334__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATE_T723921334_H
#ifndef DIRECTORUPDATE_T2427988364_H
#define DIRECTORUPDATE_T2427988364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/DirectorUpdate
struct  DirectorUpdate_t2427988364 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t2427988364__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORUPDATE_T2427988364_H
#ifndef SCRIPTRUNBEHAVIOURUPDATE_T1852625933_H
#define SCRIPTRUNBEHAVIOURUPDATE_T1852625933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct  ScriptRunBehaviourUpdate_t1852625933 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_t1852625933__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNBEHAVIOURUPDATE_T1852625933_H
#ifndef SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3844766269_H
#define SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3844766269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct  ScriptRunDelayedDynamicFrameRate_t3844766269 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t3844766269__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDDYNAMICFRAMERATE_T3844766269_H
#ifndef SCRIPTRUNDELAYEDTASKS_T2042352011_H
#define SCRIPTRUNDELAYEDTASKS_T2042352011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.PlayerLoop.Update/ScriptRunDelayedTasks
struct  ScriptRunDelayedTasks_t2042352011 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t2042352011__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNDELAYEDTASKS_T2042352011_H
#ifndef MISSINGREFERENCEEXCEPTION_T935689431_H
#define MISSINGREFERENCEEXCEPTION_T935689431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MissingReferenceException
struct  MissingReferenceException_t935689431  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGREFERENCEEXCEPTION_T935689431_H
#ifndef PLAYERPREFSEXCEPTION_T3295148878_H
#define PLAYERPREFSEXCEPTION_T3295148878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_t3295148878  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_T3295148878_H
#ifndef PREFERBINARYSERIALIZATION_T2906007930_H
#define PREFERBINARYSERIALIZATION_T2906007930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2906007930  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2906007930_H
#ifndef PROPERTYATTRIBUTE_T3677895545_H
#define PROPERTYATTRIBUTE_T3677895545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3677895545  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3677895545_H
#ifndef PROPERTYNAME_T3749835189_H
#define PROPERTYNAME_T3749835189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t3749835189 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t3749835189, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T3749835189_H
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
#ifndef RANGEINT_T2094684618_H
#define RANGEINT_T2094684618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t2094684618 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t2094684618, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t2094684618, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T2094684618_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef SELECTIONBASEATTRIBUTE_T3493465804_H
#define SELECTIONBASEATTRIBUTE_T3493465804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t3493465804  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T3493465804_H
#ifndef SERIALIZEFIELD_T3286833614_H
#define SERIALIZEFIELD_T3286833614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3286833614  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3286833614_H
#ifndef SERIALIZEPRIVATEVARIABLES_T3872960625_H
#define SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t3872960625  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifndef SORTINGLAYER_T2251519173_H
#define SORTINGLAYER_T2251519173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t2251519173 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t2251519173, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T2251519173_H
#ifndef UNITYEXCEPTION_T3598173660_H
#define UNITYEXCEPTION_T3598173660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3598173660  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3598173660_H
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
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef PLAYERLOOPSYSTEM_T105772105_H
#define PLAYERLOOPSYSTEM_T105772105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t105772105 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem[] UnityEngine.Experimental.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t1150299252* ___subSystemList_1;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t377278577 * ___updateDelegate_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t1150299252* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t1150299252** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t1150299252* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((&___subSystemList_1), value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___updateDelegate_2)); }
	inline UpdateFunction_t377278577 * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_t377278577 ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_t377278577 * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_2), value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t105772105, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t105772105_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t105772105_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t105772105_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t105772105_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
#endif // PLAYERLOOPSYSTEM_T105772105_H
#ifndef PLAYERLOOPSYSTEMINTERNAL_T2185485283_H
#define PLAYERLOOPSYSTEMINTERNAL_T2185485283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct  PlayerLoopSystemInternal_t2185485283 
{
public:
	// System.Type UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::type
	Type_t * ___type_0;
	// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_t377278577 * ___updateDelegate_1;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_t2185485283, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_updateDelegate_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_t2185485283, ___updateDelegate_1)); }
	inline UpdateFunction_t377278577 * get_updateDelegate_1() const { return ___updateDelegate_1; }
	inline UpdateFunction_t377278577 ** get_address_of_updateDelegate_1() { return &___updateDelegate_1; }
	inline void set_updateDelegate_1(UpdateFunction_t377278577 * value)
	{
		___updateDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___updateDelegate_1), value);
	}

	inline static int32_t get_offset_of_updateFunction_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_t2185485283, ___updateFunction_2)); }
	inline intptr_t get_updateFunction_2() const { return ___updateFunction_2; }
	inline intptr_t* get_address_of_updateFunction_2() { return &___updateFunction_2; }
	inline void set_updateFunction_2(intptr_t value)
	{
		___updateFunction_2 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_t2185485283, ___loopConditionFunction_3)); }
	inline intptr_t get_loopConditionFunction_3() const { return ___loopConditionFunction_3; }
	inline intptr_t* get_address_of_loopConditionFunction_3() { return &___loopConditionFunction_3; }
	inline void set_loopConditionFunction_3(intptr_t value)
	{
		___loopConditionFunction_3 = value;
	}

	inline static int32_t get_offset_of_numSubSystems_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystemInternal_t2185485283, ___numSubSystems_4)); }
	inline int32_t get_numSubSystems_4() const { return ___numSubSystems_4; }
	inline int32_t* get_address_of_numSubSystems_4() { return &___numSubSystems_4; }
	inline void set_numSubSystems_4(int32_t value)
	{
		___numSubSystems_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_t2185485283_marshaled_pinvoke
{
	Type_t * ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_t2185485283_marshaled_com
{
	Type_t * ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
#endif // PLAYERLOOPSYSTEMINTERNAL_T2185485283_H
#ifndef HEADERATTRIBUTE_T618189647_H
#define HEADERATTRIBUTE_T618189647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HeaderAttribute
struct  HeaderAttribute_t618189647  : public PropertyAttribute_t3677895545
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t618189647, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((&___header_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERATTRIBUTE_T618189647_H
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
#ifndef OPERATINGSYSTEMFAMILY_T1868066375_H
#define OPERATINGSYSTEMFAMILY_T1868066375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t1868066375 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t1868066375, ___value___2)); }
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
#endif // OPERATINGSYSTEMFAMILY_T1868066375_H
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef RANGEATTRIBUTE_T3337244227_H
#define RANGEATTRIBUTE_T3337244227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t3337244227  : public PropertyAttribute_t3677895545
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t3337244227, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t3337244227, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T3337244227_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef REFLECTIONPROBEEVENT_T3218944946_H
#define REFLECTIONPROBEEVENT_T3218944946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ReflectionProbe/ReflectionProbeEvent
struct  ReflectionProbeEvent_t3218944946 
{
public:
	// System.Int32 UnityEngine.ReflectionProbe/ReflectionProbeEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeEvent_t3218944946, ___value___2)); }
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
#endif // REFLECTIONPROBEEVENT_T3218944946_H
#ifndef SPACEATTRIBUTE_T3956583069_H
#define SPACEATTRIBUTE_T3956583069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t3956583069  : public PropertyAttribute_t3677895545
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t3956583069, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T3956583069_H
#ifndef TEXTAREAATTRIBUTE_T3326046611_H
#define TEXTAREAATTRIBUTE_T3326046611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t3326046611  : public PropertyAttribute_t3677895545
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3326046611, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3326046611, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T3326046611_H
#ifndef TOOLTIPATTRIBUTE_T3957072629_H
#define TOOLTIPATTRIBUTE_T3957072629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t3957072629  : public PropertyAttribute_t3677895545
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t3957072629, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T3957072629_H
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
#ifndef RESOURCEREQUEST_T3109103591_H
#define RESOURCEREQUEST_T3109103591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3109103591  : public AsyncOperation_t1445031843
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};
#endif // RESOURCEREQUEST_T3109103591_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
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
#ifndef UPDATEFUNCTION_T377278577_H
#define UPDATEFUNCTION_T377278577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction
struct  UpdateFunction_t377278577  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEFUNCTION_T377278577_H
#ifndef REFLECTIONPROBE_T175708936_H
#define REFLECTIONPROBE_T175708936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ReflectionProbe
struct  ReflectionProbe_t175708936  : public Behaviour_t1437897464
{
public:

public:
};

struct ReflectionProbe_t175708936_StaticFields
{
public:
	// System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent> UnityEngine.ReflectionProbe::reflectionProbeChanged
	Action_2_t3498178784 * ___reflectionProbeChanged_4;
	// System.Action`1<UnityEngine.Cubemap> UnityEngine.ReflectionProbe::defaultReflectionSet
	Action_1_t2144852004 * ___defaultReflectionSet_5;

public:
	inline static int32_t get_offset_of_reflectionProbeChanged_4() { return static_cast<int32_t>(offsetof(ReflectionProbe_t175708936_StaticFields, ___reflectionProbeChanged_4)); }
	inline Action_2_t3498178784 * get_reflectionProbeChanged_4() const { return ___reflectionProbeChanged_4; }
	inline Action_2_t3498178784 ** get_address_of_reflectionProbeChanged_4() { return &___reflectionProbeChanged_4; }
	inline void set_reflectionProbeChanged_4(Action_2_t3498178784 * value)
	{
		___reflectionProbeChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___reflectionProbeChanged_4), value);
	}

	inline static int32_t get_offset_of_defaultReflectionSet_5() { return static_cast<int32_t>(offsetof(ReflectionProbe_t175708936_StaticFields, ___defaultReflectionSet_5)); }
	inline Action_1_t2144852004 * get_defaultReflectionSet_5() const { return ___defaultReflectionSet_5; }
	inline Action_1_t2144852004 ** get_address_of_defaultReflectionSet_5() { return &___defaultReflectionSet_5; }
	inline void set_defaultReflectionSet_5(Action_1_t2144852004 * value)
	{
		___defaultReflectionSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___defaultReflectionSet_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROBE_T175708936_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4100 = { sizeof (CheckTexFieldInput_t4138810349)+ sizeof (RuntimeObject), sizeof(CheckTexFieldInput_t4138810349 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4101 = { sizeof (IMGUISendQueuedEvents_t65887646)+ sizeof (RuntimeObject), sizeof(IMGUISendQueuedEvents_t65887646 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4102 = { sizeof (SendMouseEvents_t3944192294)+ sizeof (RuntimeObject), sizeof(SendMouseEvents_t3944192294 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4103 = { sizeof (AIUpdate_t2336814084)+ sizeof (RuntimeObject), sizeof(AIUpdate_t2336814084 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4104 = { sizeof (WindUpdate_t2266304656)+ sizeof (RuntimeObject), sizeof(WindUpdate_t2266304656 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4105 = { sizeof (UpdateVideo_t1599856004)+ sizeof (RuntimeObject), sizeof(UpdateVideo_t1599856004 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4106 = { sizeof (NewInputUpdate_t4285063962)+ sizeof (RuntimeObject), sizeof(NewInputUpdate_t4285063962 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4107 = { sizeof (Update_t723921334)+ sizeof (RuntimeObject), sizeof(Update_t723921334 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4108 = { sizeof (ScriptRunBehaviourUpdate_t1852625933)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourUpdate_t1852625933 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4109 = { sizeof (DirectorUpdate_t2427988364)+ sizeof (RuntimeObject), sizeof(DirectorUpdate_t2427988364 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4110 = { sizeof (ScriptRunDelayedDynamicFrameRate_t3844766269)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedDynamicFrameRate_t3844766269 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4111 = { sizeof (ScriptRunDelayedTasks_t2042352011)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedTasks_t2042352011 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4112 = { sizeof (PreLateUpdate_t3194249939)+ sizeof (RuntimeObject), sizeof(PreLateUpdate_t3194249939 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4113 = { sizeof (AIUpdatePostScript_t1991765663)+ sizeof (RuntimeObject), sizeof(AIUpdatePostScript_t1991765663 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4114 = { sizeof (DirectorUpdateAnimationBegin_t3483220745)+ sizeof (RuntimeObject), sizeof(DirectorUpdateAnimationBegin_t3483220745 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4115 = { sizeof (LegacyAnimationUpdate_t466524488)+ sizeof (RuntimeObject), sizeof(LegacyAnimationUpdate_t466524488 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4116 = { sizeof (DirectorUpdateAnimationEnd_t3538632984)+ sizeof (RuntimeObject), sizeof(DirectorUpdateAnimationEnd_t3538632984 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4117 = { sizeof (DirectorDeferredEvaluate_t3162759259)+ sizeof (RuntimeObject), sizeof(DirectorDeferredEvaluate_t3162759259 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4118 = { sizeof (UpdateNetworkManager_t3986463995)+ sizeof (RuntimeObject), sizeof(UpdateNetworkManager_t3986463995 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4119 = { sizeof (UpdateMasterServerInterface_t2428268314)+ sizeof (RuntimeObject), sizeof(UpdateMasterServerInterface_t2428268314 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4120 = { sizeof (UNetUpdate_t4184253373)+ sizeof (RuntimeObject), sizeof(UNetUpdate_t4184253373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4121 = { sizeof (EndGraphicsJobsLate_t3823419272)+ sizeof (RuntimeObject), sizeof(EndGraphicsJobsLate_t3823419272 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4122 = { sizeof (ParticleSystemBeginUpdateAll_t1600980369)+ sizeof (RuntimeObject), sizeof(ParticleSystemBeginUpdateAll_t1600980369 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4123 = { sizeof (ScriptRunBehaviourLateUpdate_t2082815220)+ sizeof (RuntimeObject), sizeof(ScriptRunBehaviourLateUpdate_t2082815220 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4124 = { sizeof (ConstraintManagerUpdate_t4053002372)+ sizeof (RuntimeObject), sizeof(ConstraintManagerUpdate_t4053002372 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4125 = { sizeof (PostLateUpdate_t2796323918)+ sizeof (RuntimeObject), sizeof(PostLateUpdate_t2796323918 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4126 = { sizeof (PlayerSendFrameStarted_t3968901418)+ sizeof (RuntimeObject), sizeof(PlayerSendFrameStarted_t3968901418 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4127 = { sizeof (UpdateRectTransform_t1757116547)+ sizeof (RuntimeObject), sizeof(UpdateRectTransform_t1757116547 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4128 = { sizeof (UpdateCanvasRectTransform_t1832875547)+ sizeof (RuntimeObject), sizeof(UpdateCanvasRectTransform_t1832875547 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4129 = { sizeof (PlayerUpdateCanvases_t4182350995)+ sizeof (RuntimeObject), sizeof(PlayerUpdateCanvases_t4182350995 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4130 = { sizeof (UpdateAudio_t3497553982)+ sizeof (RuntimeObject), sizeof(UpdateAudio_t3497553982 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4131 = { sizeof (UpdateVideo_t1157864926)+ sizeof (RuntimeObject), sizeof(UpdateVideo_t1157864926 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4132 = { sizeof (DirectorLateUpdate_t457202392)+ sizeof (RuntimeObject), sizeof(DirectorLateUpdate_t457202392 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4133 = { sizeof (ScriptRunDelayedDynamicFrameRate_t3251018792)+ sizeof (RuntimeObject), sizeof(ScriptRunDelayedDynamicFrameRate_t3251018792 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4134 = { sizeof (ParticlesLegacyUpdateAllParticleSystems_t554154943)+ sizeof (RuntimeObject), sizeof(ParticlesLegacyUpdateAllParticleSystems_t554154943 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4135 = { sizeof (ParticleSystemEndUpdateAll_t2836077351)+ sizeof (RuntimeObject), sizeof(ParticleSystemEndUpdateAll_t2836077351 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4136 = { sizeof (UpdateSubstance_t2774222247)+ sizeof (RuntimeObject), sizeof(UpdateSubstance_t2774222247 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4137 = { sizeof (UpdateCustomRenderTextures_t3703755979)+ sizeof (RuntimeObject), sizeof(UpdateCustomRenderTextures_t3703755979 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4138 = { sizeof (UpdateAllRenderers_t4055013667)+ sizeof (RuntimeObject), sizeof(UpdateAllRenderers_t4055013667 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4139 = { sizeof (EnlightenRuntimeUpdate_t4260720146)+ sizeof (RuntimeObject), sizeof(EnlightenRuntimeUpdate_t4260720146 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4140 = { sizeof (UpdateAllSkinnedMeshes_t1333460471)+ sizeof (RuntimeObject), sizeof(UpdateAllSkinnedMeshes_t1333460471 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4141 = { sizeof (ProcessWebSendMessages_t2589893390)+ sizeof (RuntimeObject), sizeof(ProcessWebSendMessages_t2589893390 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4142 = { sizeof (SortingGroupsUpdate_t3400410071)+ sizeof (RuntimeObject), sizeof(SortingGroupsUpdate_t3400410071 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4143 = { sizeof (UpdateVideoTextures_t2815897475)+ sizeof (RuntimeObject), sizeof(UpdateVideoTextures_t2815897475 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4144 = { sizeof (DirectorRenderImage_t101067038)+ sizeof (RuntimeObject), sizeof(DirectorRenderImage_t101067038 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4145 = { sizeof (PlayerEmitCanvasGeometry_t1638525882)+ sizeof (RuntimeObject), sizeof(PlayerEmitCanvasGeometry_t1638525882 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4146 = { sizeof (FinishFrameRendering_t1554225360)+ sizeof (RuntimeObject), sizeof(FinishFrameRendering_t1554225360 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4147 = { sizeof (BatchModeUpdate_t2092978832)+ sizeof (RuntimeObject), sizeof(BatchModeUpdate_t2092978832 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4148 = { sizeof (PlayerSendFrameComplete_t3284237406)+ sizeof (RuntimeObject), sizeof(PlayerSendFrameComplete_t3284237406 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4149 = { sizeof (UpdateCaptureScreenshot_t361950221)+ sizeof (RuntimeObject), sizeof(UpdateCaptureScreenshot_t361950221 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4150 = { sizeof (PresentAfterDraw_t3864494237)+ sizeof (RuntimeObject), sizeof(PresentAfterDraw_t3864494237 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4151 = { sizeof (ClearImmediateRenderers_t365505584)+ sizeof (RuntimeObject), sizeof(ClearImmediateRenderers_t365505584 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4152 = { sizeof (XRPostPresent_t2124473652)+ sizeof (RuntimeObject), sizeof(XRPostPresent_t2124473652 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4153 = { sizeof (UpdateResolution_t864018525)+ sizeof (RuntimeObject), sizeof(UpdateResolution_t864018525 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4154 = { sizeof (InputEndFrame_t4083110122)+ sizeof (RuntimeObject), sizeof(InputEndFrame_t4083110122 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4155 = { sizeof (GUIClearEvents_t3875064483)+ sizeof (RuntimeObject), sizeof(GUIClearEvents_t3875064483 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4156 = { sizeof (ShaderHandleErrors_t2219336884)+ sizeof (RuntimeObject), sizeof(ShaderHandleErrors_t2219336884 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4157 = { sizeof (ResetInputAxis_t866062302)+ sizeof (RuntimeObject), sizeof(ResetInputAxis_t866062302 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4158 = { sizeof (ThreadedLoadingDebug_t53594427)+ sizeof (RuntimeObject), sizeof(ThreadedLoadingDebug_t53594427 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4159 = { sizeof (ProfilerSynchronizeStats_t1082371934)+ sizeof (RuntimeObject), sizeof(ProfilerSynchronizeStats_t1082371934 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4160 = { sizeof (MemoryFrameMaintenance_t1219312215)+ sizeof (RuntimeObject), sizeof(MemoryFrameMaintenance_t1219312215 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4161 = { sizeof (ExecuteGameCenterCallbacks_t2005625669)+ sizeof (RuntimeObject), sizeof(ExecuteGameCenterCallbacks_t2005625669 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4162 = { sizeof (ProfilerEndFrame_t852348665)+ sizeof (RuntimeObject), sizeof(ProfilerEndFrame_t852348665 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4163 = { sizeof (PlayerSendFramePostPresent_t1043377270)+ sizeof (RuntimeObject), sizeof(PlayerSendFramePostPresent_t1043377270 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4164 = { sizeof (PhysicsSkinnedClothBeginUpdate_t2520621450)+ sizeof (RuntimeObject), sizeof(PhysicsSkinnedClothBeginUpdate_t2520621450 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4165 = { sizeof (PhysicsSkinnedClothFinishUpdate_t2050201317)+ sizeof (RuntimeObject), sizeof(PhysicsSkinnedClothFinishUpdate_t2050201317 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4166 = { sizeof (TriggerEndOfFrameCallbacks_t2165224221)+ sizeof (RuntimeObject), sizeof(TriggerEndOfFrameCallbacks_t2165224221 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4167 = { sizeof (PlayerLoopSystemInternal_t2185485283)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4167[5] = 
{
	PlayerLoopSystemInternal_t2185485283::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_t2185485283::get_offset_of_updateDelegate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_t2185485283::get_offset_of_updateFunction_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_t2185485283::get_offset_of_loopConditionFunction_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystemInternal_t2185485283::get_offset_of_numSubSystems_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4168 = { sizeof (PlayerLoopSystem_t105772105)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4168[5] = 
{
	PlayerLoopSystem_t105772105::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t105772105::get_offset_of_subSystemList_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t105772105::get_offset_of_updateDelegate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t105772105::get_offset_of_updateFunction_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayerLoopSystem_t105772105::get_offset_of_loopConditionFunction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4169 = { sizeof (UpdateFunction_t377278577), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4170 = { sizeof (PlayerPrefsException_t3295148878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4171 = { sizeof (PlayerPrefs_t3518992213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4172 = { sizeof (Pose_t545244865)+ sizeof (RuntimeObject), sizeof(Pose_t545244865 ), sizeof(Pose_t545244865_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4172[3] = 
{
	Pose_t545244865::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Pose_t545244865::get_offset_of_rotation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Pose_t545244865_StaticFields::get_offset_of_k_Identity_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4173 = { sizeof (PropertyAttribute_t3677895545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4174 = { sizeof (TooltipAttribute_t3957072629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4174[1] = 
{
	TooltipAttribute_t3957072629::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4175 = { sizeof (SpaceAttribute_t3956583069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4175[1] = 
{
	SpaceAttribute_t3956583069::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4176 = { sizeof (HeaderAttribute_t618189647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4176[1] = 
{
	HeaderAttribute_t618189647::get_offset_of_header_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4177 = { sizeof (RangeAttribute_t3337244227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4177[2] = 
{
	RangeAttribute_t3337244227::get_offset_of_min_0(),
	RangeAttribute_t3337244227::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4178 = { sizeof (TextAreaAttribute_t3326046611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4178[2] = 
{
	TextAreaAttribute_t3326046611::get_offset_of_minLines_0(),
	TextAreaAttribute_t3326046611::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4179 = { sizeof (PropertyNameUtils_t539849043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4180 = { sizeof (PropertyName_t3749835189)+ sizeof (RuntimeObject), sizeof(PropertyName_t3749835189 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4180[1] = 
{
	PropertyName_t3749835189::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4181 = { sizeof (Random_t635017412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4182 = { sizeof (RangeInt_t2094684618)+ sizeof (RuntimeObject), sizeof(RangeInt_t2094684618 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4182[2] = 
{
	RangeInt_t2094684618::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t2094684618::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4183 = { sizeof (Ray_t3785851493)+ sizeof (RuntimeObject), sizeof(Ray_t3785851493 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4183[2] = 
{
	Ray_t3785851493::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t3785851493::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4184 = { sizeof (Rect_t2360479859)+ sizeof (RuntimeObject), sizeof(Rect_t2360479859 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4184[4] = 
{
	Rect_t2360479859::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2360479859::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2360479859::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2360479859::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4185 = { sizeof (ReflectionProbe_t175708936), -1, sizeof(ReflectionProbe_t175708936_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4185[2] = 
{
	ReflectionProbe_t175708936_StaticFields::get_offset_of_reflectionProbeChanged_4(),
	ReflectionProbe_t175708936_StaticFields::get_offset_of_defaultReflectionSet_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4186 = { sizeof (ReflectionProbeEvent_t3218944946)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4186[3] = 
{
	ReflectionProbeEvent_t3218944946::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4187 = { sizeof (ResourceRequest_t3109103591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4187[2] = 
{
	ResourceRequest_t3109103591::get_offset_of_m_Path_2(),
	ResourceRequest_t3109103591::get_offset_of_m_Type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4188 = { sizeof (Resources_t2942265397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4189 = { sizeof (ScriptableObject_t2528358522), sizeof(ScriptableObject_t2528358522_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4190 = { sizeof (SelectionBaseAttribute_t3493465804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4191 = { sizeof (SerializePrivateVariables_t3872960625), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4192 = { sizeof (SerializeField_t3286833614), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4193 = { sizeof (PreferBinarySerialization_t2906007930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4194 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4195 = { sizeof (SortingLayer_t2251519173)+ sizeof (RuntimeObject), sizeof(SortingLayer_t2251519173 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4195[1] = 
{
	SortingLayer_t2251519173::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4196 = { sizeof (StackTraceUtility_t3465565809), -1, sizeof(StackTraceUtility_t3465565809_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4196[1] = 
{
	StackTraceUtility_t3465565809_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4197 = { sizeof (UnityException_t3598173660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4198 = { sizeof (MissingReferenceException_t935689431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4199 = { sizeof (OperatingSystemFamily_t1868066375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4199[5] = 
{
	OperatingSystemFamily_t1868066375::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif