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


// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1196077101;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.IPermission
struct IPermission_t4015543450;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2915669112;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t4144114052;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2954997752;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3355146440;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3811807446;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t97388457;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2891196107;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t3052133691;
// System.Security.SecurityDocument
struct SecurityDocument_t4190518700;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;
// System.Security.Util.Tokenizer
struct Tokenizer_t545397970;
// System.Security.Util.Tokenizer/ITokenReader
struct ITokenReader_t930802149;
// System.Security.Util.Tokenizer/StringMaker
struct StringMaker_t2784115625;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Version
struct Version_t3456873960;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



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
#ifndef CODEACCESSPERMISSION_T2681295399_H
#define CODEACCESSPERMISSION_T2681295399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2681295399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2681295399_H
#ifndef PERMISSIONBUILDER_T1403083973_H
#define PERMISSIONBUILDER_T1403083973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionBuilder
struct  PermissionBuilder_t1403083973  : public RuntimeObject
{
public:

public:
};

struct PermissionBuilder_t1403083973_StaticFields
{
public:
	// System.Object[] System.Security.PermissionBuilder::psNone
	ObjectU5BU5D_t2843939325* ___psNone_0;

public:
	inline static int32_t get_offset_of_psNone_0() { return static_cast<int32_t>(offsetof(PermissionBuilder_t1403083973_StaticFields, ___psNone_0)); }
	inline ObjectU5BU5D_t2843939325* get_psNone_0() const { return ___psNone_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_psNone_0() { return &___psNone_0; }
	inline void set_psNone_0(ObjectU5BU5D_t2843939325* value)
	{
		___psNone_0 = value;
		Il2CppCodeGenWriteBarrier((&___psNone_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONBUILDER_T1403083973_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t4144114052  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t4144114052, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t3641947072  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t3641947072, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#define STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3355146440  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t4116647657* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3355146440, ___pubkey_0)); }
	inline ByteU5BU5D_t4116647657* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t4116647657* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifndef ALLMEMBERSHIPCONDITION_T198137363_H
#define ALLMEMBERSHIPCONDITION_T198137363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.AllMembershipCondition
struct  AllMembershipCondition_t198137363  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.AllMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(AllMembershipCondition_t198137363, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLMEMBERSHIPCONDITION_T198137363_H
#ifndef CODECONNECTACCESS_T1103527196_H
#define CODECONNECTACCESS_T1103527196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeConnectAccess
struct  CodeConnectAccess_t1103527196  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::_scheme
	String_t* ____scheme_4;
	// System.Int32 System.Security.Policy.CodeConnectAccess::_port
	int32_t ____port_5;

public:
	inline static int32_t get_offset_of__scheme_4() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____scheme_4)); }
	inline String_t* get__scheme_4() const { return ____scheme_4; }
	inline String_t** get_address_of__scheme_4() { return &____scheme_4; }
	inline void set__scheme_4(String_t* value)
	{
		____scheme_4 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}
};

struct CodeConnectAccess_t1103527196_StaticFields
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::AnyScheme
	String_t* ___AnyScheme_0;
	// System.Int32 System.Security.Policy.CodeConnectAccess::DefaultPort
	int32_t ___DefaultPort_1;
	// System.Int32 System.Security.Policy.CodeConnectAccess::OriginPort
	int32_t ___OriginPort_2;
	// System.String System.Security.Policy.CodeConnectAccess::OriginScheme
	String_t* ___OriginScheme_3;

public:
	inline static int32_t get_offset_of_AnyScheme_0() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___AnyScheme_0)); }
	inline String_t* get_AnyScheme_0() const { return ___AnyScheme_0; }
	inline String_t** get_address_of_AnyScheme_0() { return &___AnyScheme_0; }
	inline void set_AnyScheme_0(String_t* value)
	{
		___AnyScheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___AnyScheme_0), value);
	}

	inline static int32_t get_offset_of_DefaultPort_1() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___DefaultPort_1)); }
	inline int32_t get_DefaultPort_1() const { return ___DefaultPort_1; }
	inline int32_t* get_address_of_DefaultPort_1() { return &___DefaultPort_1; }
	inline void set_DefaultPort_1(int32_t value)
	{
		___DefaultPort_1 = value;
	}

	inline static int32_t get_offset_of_OriginPort_2() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginPort_2)); }
	inline int32_t get_OriginPort_2() const { return ___OriginPort_2; }
	inline int32_t* get_address_of_OriginPort_2() { return &___OriginPort_2; }
	inline void set_OriginPort_2(int32_t value)
	{
		___OriginPort_2 = value;
	}

	inline static int32_t get_offset_of_OriginScheme_3() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginScheme_3)); }
	inline String_t* get_OriginScheme_3() const { return ___OriginScheme_3; }
	inline String_t** get_address_of_OriginScheme_3() { return &___OriginScheme_3; }
	inline void set_OriginScheme_3(String_t* value)
	{
		___OriginScheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginScheme_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODECONNECTACCESS_T1103527196_H
#ifndef CODEGROUP_T3811807446_H
#define CODEGROUP_T3811807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t3811807446  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t3052133691 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2718874744 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_policy_0)); }
	inline PolicyStatement_t3052133691 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t3052133691 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t3052133691 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_children_4)); }
	inline ArrayList_t2718874744 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2718874744 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2718874744 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T3811807446_H
#ifndef DEFAULTPOLICIES_T2520506789_H
#define DEFAULTPOLICIES_T2520506789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t2520506789  : public RuntimeObject
{
public:

public:
};

struct DefaultPolicies_t2520506789_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t3456873960 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t4116647657* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t3355146440 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t4116647657* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t3355146440 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t2915669112 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t2915669112 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t2915669112 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t2915669112 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t2915669112 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t2915669112 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t2915669112 * ____everything_11;

public:
	inline static int32_t get_offset_of__fxVersion_0() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fxVersion_0)); }
	inline Version_t3456873960 * get__fxVersion_0() const { return ____fxVersion_0; }
	inline Version_t3456873960 ** get_address_of__fxVersion_0() { return &____fxVersion_0; }
	inline void set__fxVersion_0(Version_t3456873960 * value)
	{
		____fxVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&____fxVersion_0), value);
	}

	inline static int32_t get_offset_of__ecmaKey_1() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecmaKey_1)); }
	inline ByteU5BU5D_t4116647657* get__ecmaKey_1() const { return ____ecmaKey_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__ecmaKey_1() { return &____ecmaKey_1; }
	inline void set__ecmaKey_1(ByteU5BU5D_t4116647657* value)
	{
		____ecmaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____ecmaKey_1), value);
	}

	inline static int32_t get_offset_of__ecma_2() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecma_2)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__ecma_2() const { return ____ecma_2; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__ecma_2() { return &____ecma_2; }
	inline void set__ecma_2(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____ecma_2 = value;
		Il2CppCodeGenWriteBarrier((&____ecma_2), value);
	}

	inline static int32_t get_offset_of__msFinalKey_3() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinalKey_3)); }
	inline ByteU5BU5D_t4116647657* get__msFinalKey_3() const { return ____msFinalKey_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__msFinalKey_3() { return &____msFinalKey_3; }
	inline void set__msFinalKey_3(ByteU5BU5D_t4116647657* value)
	{
		____msFinalKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____msFinalKey_3), value);
	}

	inline static int32_t get_offset_of__msFinal_4() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinal_4)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__msFinal_4() const { return ____msFinal_4; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__msFinal_4() { return &____msFinal_4; }
	inline void set__msFinal_4(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____msFinal_4 = value;
		Il2CppCodeGenWriteBarrier((&____msFinal_4), value);
	}

	inline static int32_t get_offset_of__fullTrust_5() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fullTrust_5)); }
	inline NamedPermissionSet_t2915669112 * get__fullTrust_5() const { return ____fullTrust_5; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__fullTrust_5() { return &____fullTrust_5; }
	inline void set__fullTrust_5(NamedPermissionSet_t2915669112 * value)
	{
		____fullTrust_5 = value;
		Il2CppCodeGenWriteBarrier((&____fullTrust_5), value);
	}

	inline static int32_t get_offset_of__localIntranet_6() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____localIntranet_6)); }
	inline NamedPermissionSet_t2915669112 * get__localIntranet_6() const { return ____localIntranet_6; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__localIntranet_6() { return &____localIntranet_6; }
	inline void set__localIntranet_6(NamedPermissionSet_t2915669112 * value)
	{
		____localIntranet_6 = value;
		Il2CppCodeGenWriteBarrier((&____localIntranet_6), value);
	}

	inline static int32_t get_offset_of__internet_7() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____internet_7)); }
	inline NamedPermissionSet_t2915669112 * get__internet_7() const { return ____internet_7; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__internet_7() { return &____internet_7; }
	inline void set__internet_7(NamedPermissionSet_t2915669112 * value)
	{
		____internet_7 = value;
		Il2CppCodeGenWriteBarrier((&____internet_7), value);
	}

	inline static int32_t get_offset_of__skipVerification_8() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____skipVerification_8)); }
	inline NamedPermissionSet_t2915669112 * get__skipVerification_8() const { return ____skipVerification_8; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__skipVerification_8() { return &____skipVerification_8; }
	inline void set__skipVerification_8(NamedPermissionSet_t2915669112 * value)
	{
		____skipVerification_8 = value;
		Il2CppCodeGenWriteBarrier((&____skipVerification_8), value);
	}

	inline static int32_t get_offset_of__execution_9() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____execution_9)); }
	inline NamedPermissionSet_t2915669112 * get__execution_9() const { return ____execution_9; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__execution_9() { return &____execution_9; }
	inline void set__execution_9(NamedPermissionSet_t2915669112 * value)
	{
		____execution_9 = value;
		Il2CppCodeGenWriteBarrier((&____execution_9), value);
	}

	inline static int32_t get_offset_of__nothing_10() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____nothing_10)); }
	inline NamedPermissionSet_t2915669112 * get__nothing_10() const { return ____nothing_10; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__nothing_10() { return &____nothing_10; }
	inline void set__nothing_10(NamedPermissionSet_t2915669112 * value)
	{
		____nothing_10 = value;
		Il2CppCodeGenWriteBarrier((&____nothing_10), value);
	}

	inline static int32_t get_offset_of__everything_11() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____everything_11)); }
	inline NamedPermissionSet_t2915669112 * get__everything_11() const { return ____everything_11; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__everything_11() { return &____everything_11; }
	inline void set__everything_11(NamedPermissionSet_t2915669112 * value)
	{
		____everything_11 = value;
		Il2CppCodeGenWriteBarrier((&____everything_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPOLICIES_T2520506789_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef EVIDENCEENUMERATOR_T1708166667_H
#define EVIDENCEENUMERATOR_T1708166667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1708166667  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1708166667_H
#ifndef EVIDENCEBASE_T778061133_H
#define EVIDENCEBASE_T778061133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.EvidenceBase
struct  EvidenceBase_t778061133  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEBASE_T778061133_H
#ifndef MEMBERSHIPCONDITIONHELPER_T2246572704_H
#define MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MembershipConditionHelper
struct  MembershipConditionHelper_t2246572704  : public RuntimeObject
{
public:

public:
};

struct MembershipConditionHelper_t2246572704_StaticFields
{
public:
	// System.String System.Security.Policy.MembershipConditionHelper::XmlTag
	String_t* ___XmlTag_0;

public:
	inline static int32_t get_offset_of_XmlTag_0() { return static_cast<int32_t>(offsetof(MembershipConditionHelper_t2246572704_StaticFields, ___XmlTag_0)); }
	inline String_t* get_XmlTag_0() const { return ___XmlTag_0; }
	inline String_t** get_address_of_XmlTag_0() { return &___XmlTag_0; }
	inline void set_XmlTag_0(String_t* value)
	{
		___XmlTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___XmlTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifndef STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#define STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t2614563360  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t3355146440 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t3456873960 * ___assemblyVersion_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_blob_1() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___blob_1)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_blob_1() const { return ___blob_1; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_blob_1() { return &___blob_1; }
	inline void set_blob_1(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___blob_1 = value;
		Il2CppCodeGenWriteBarrier((&___blob_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_assemblyVersion_3() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___assemblyVersion_3)); }
	inline Version_t3456873960 * get_assemblyVersion_3() const { return ___assemblyVersion_3; }
	inline Version_t3456873960 ** get_address_of_assemblyVersion_3() { return &___assemblyVersion_3; }
	inline void set_assemblyVersion_3(Version_t3456873960 * value)
	{
		___assemblyVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifndef SECURESTRING_T3041467854_H
#define SECURESTRING_T3041467854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t3041467854  : public RuntimeObject
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t4116647657* ___data_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___data_2)); }
	inline ByteU5BU5D_t4116647657* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t4116647657* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T3041467854_H
#ifndef SECURITYELEMENT_T1046076091_H
#define SECURITYELEMENT_T1046076091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t1046076091  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t2718874744 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t2718874744 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___attributes_2)); }
	inline ArrayList_t2718874744 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t2718874744 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t2718874744 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___children_3)); }
	inline ArrayList_t2718874744 * get_children_3() const { return ___children_3; }
	inline ArrayList_t2718874744 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t2718874744 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t1046076091_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3528271667* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3528271667* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3528271667* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3528271667* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3528271667* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3528271667* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3528271667* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3528271667* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3528271667* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3528271667* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3528271667* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T1046076091_H
#ifndef SECURITYATTRIBUTE_T3566489056_H
#define SECURITYATTRIBUTE_T3566489056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t3566489056  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3566489056_H
#ifndef SECURITYMANAGER_T3383402582_H
#define SECURITYMANAGER_T3383402582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3383402582  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t3383402582_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t2718874744 * ____hierarchy_1;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t2891196107 * ____level_2;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2954997752 * ____execution_3;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t2718874744 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t2718874744 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t2718874744 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&____hierarchy_1), value);
	}

	inline static int32_t get_offset_of__level_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____level_2)); }
	inline PolicyLevel_t2891196107 * get__level_2() const { return ____level_2; }
	inline PolicyLevel_t2891196107 ** get_address_of__level_2() { return &____level_2; }
	inline void set__level_2(PolicyLevel_t2891196107 * value)
	{
		____level_2 = value;
		Il2CppCodeGenWriteBarrier((&____level_2), value);
	}

	inline static int32_t get_offset_of__execution_3() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____execution_3)); }
	inline SecurityPermission_t2954997752 * get__execution_3() const { return ____execution_3; }
	inline SecurityPermission_t2954997752 ** get_address_of__execution_3() { return &____execution_3; }
	inline void set__execution_3(SecurityPermission_t2954997752 * value)
	{
		____execution_3 = value;
		Il2CppCodeGenWriteBarrier((&____execution_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T3383402582_H
#ifndef PARSER_T281212148_H
#define PARSER_T281212148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Util.Parser
struct  Parser_t281212148  : public RuntimeObject
{
public:
	// System.Security.SecurityDocument System.Security.Util.Parser::_doc
	SecurityDocument_t4190518700 * ____doc_0;
	// System.Security.Util.Tokenizer System.Security.Util.Parser::_t
	Tokenizer_t545397970 * ____t_1;

public:
	inline static int32_t get_offset_of__doc_0() { return static_cast<int32_t>(offsetof(Parser_t281212148, ____doc_0)); }
	inline SecurityDocument_t4190518700 * get__doc_0() const { return ____doc_0; }
	inline SecurityDocument_t4190518700 ** get_address_of__doc_0() { return &____doc_0; }
	inline void set__doc_0(SecurityDocument_t4190518700 * value)
	{
		____doc_0 = value;
		Il2CppCodeGenWriteBarrier((&____doc_0), value);
	}

	inline static int32_t get_offset_of__t_1() { return static_cast<int32_t>(offsetof(Parser_t281212148, ____t_1)); }
	inline Tokenizer_t545397970 * get__t_1() const { return ____t_1; }
	inline Tokenizer_t545397970 ** get_address_of__t_1() { return &____t_1; }
	inline void set__t_1(Tokenizer_t545397970 * value)
	{
		____t_1 = value;
		Il2CppCodeGenWriteBarrier((&____t_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T281212148_H
#ifndef STREAMTOKENREADER_T762740847_H
#define STREAMTOKENREADER_T762740847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Util.Tokenizer/StreamTokenReader
struct  StreamTokenReader_t762740847  : public RuntimeObject
{
public:
	// System.IO.StreamReader System.Security.Util.Tokenizer/StreamTokenReader::_in
	StreamReader_t4009935899 * ____in_0;
	// System.Int32 System.Security.Util.Tokenizer/StreamTokenReader::_numCharRead
	int32_t ____numCharRead_1;

public:
	inline static int32_t get_offset_of__in_0() { return static_cast<int32_t>(offsetof(StreamTokenReader_t762740847, ____in_0)); }
	inline StreamReader_t4009935899 * get__in_0() const { return ____in_0; }
	inline StreamReader_t4009935899 ** get_address_of__in_0() { return &____in_0; }
	inline void set__in_0(StreamReader_t4009935899 * value)
	{
		____in_0 = value;
		Il2CppCodeGenWriteBarrier((&____in_0), value);
	}

	inline static int32_t get_offset_of__numCharRead_1() { return static_cast<int32_t>(offsetof(StreamTokenReader_t762740847, ____numCharRead_1)); }
	inline int32_t get__numCharRead_1() const { return ____numCharRead_1; }
	inline int32_t* get_address_of__numCharRead_1() { return &____numCharRead_1; }
	inline void set__numCharRead_1(int32_t value)
	{
		____numCharRead_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMTOKENREADER_T762740847_H
#ifndef STRINGMAKER_T2784115625_H
#define STRINGMAKER_T2784115625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Util.Tokenizer/StringMaker
struct  StringMaker_t2784115625  : public RuntimeObject
{
public:
	// System.String[] System.Security.Util.Tokenizer/StringMaker::aStrings
	StringU5BU5D_t1281789340* ___aStrings_0;
	// System.UInt32 System.Security.Util.Tokenizer/StringMaker::cStringsMax
	uint32_t ___cStringsMax_1;
	// System.UInt32 System.Security.Util.Tokenizer/StringMaker::cStringsUsed
	uint32_t ___cStringsUsed_2;
	// System.Text.StringBuilder System.Security.Util.Tokenizer/StringMaker::_outStringBuilder
	StringBuilder_t * ____outStringBuilder_3;
	// System.Char[] System.Security.Util.Tokenizer/StringMaker::_outChars
	CharU5BU5D_t3528271667* ____outChars_4;
	// System.Int32 System.Security.Util.Tokenizer/StringMaker::_outIndex
	int32_t ____outIndex_5;

public:
	inline static int32_t get_offset_of_aStrings_0() { return static_cast<int32_t>(offsetof(StringMaker_t2784115625, ___aStrings_0)); }
	inline StringU5BU5D_t1281789340* get_aStrings_0() const { return ___aStrings_0; }
	inline StringU5BU5D_t1281789340** get_address_of_aStrings_0() { return &___aStrings_0; }
	inline void set_aStrings_0(StringU5BU5D_t1281789340* value)
	{
		___aStrings_0 = value;
		Il2CppCodeGenWriteBarrier((&___aStrings_0), value);
	}

	inline static int32_t get_offset_of_cStringsMax_1() { return static_cast<int32_t>(offsetof(StringMaker_t2784115625, ___cStringsMax_1)); }
	inline uint32_t get_cStringsMax_1() const { return ___cStringsMax_1; }
	inline uint32_t* get_address_of_cStringsMax_1() { return &___cStringsMax_1; }
	inline void set_cStringsMax_1(uint32_t value)
	{
		___cStringsMax_1 = value;
	}

	inline static int32_t get_offset_of_cStringsUsed_2() { return static_cast<int32_t>(offsetof(StringMaker_t2784115625, ___cStringsUsed_2)); }
	inline uint32_t get_cStringsUsed_2() const { return ___cStringsUsed_2; }
	inline uint32_t* get_address_of_cStringsUsed_2() { return &___cStringsUsed_2; }
	inline void set_cStringsUsed_2(uint32_t value)
	{
		___cStringsUsed_2 = value;
	}

	inline static int32_t get_offset_of__outStringBuilder_3() { return static_cast<int32_t>(offsetof(StringMaker_t2784115625, ____outStringBuilder_3)); }
	inline StringBuilder_t * get__outStringBuilder_3() const { return ____outStringBuilder_3; }
	inline StringBuilder_t ** get_address_of__outStringBuilder_3() { return &____outStringBuilder_3; }
	inline void set__outStringBuilder_3(StringBuilder_t * value)
	{
		____outStringBuilder_3 = value;
		Il2CppCodeGenWriteBarrier((&____outStringBuilder_3), value);
	}

	inline static int32_t get_offset_of__outChars_4() { return static_cast<int32_t>(offsetof(StringMaker_t2784115625, ____outChars_4)); }
	inline CharU5BU5D_t3528271667* get__outChars_4() const { return ____outChars_4; }
	inline CharU5BU5D_t3528271667** get_address_of__outChars_4() { return &____outChars_4; }
	inline void set__outChars_4(CharU5BU5D_t3528271667* value)
	{
		____outChars_4 = value;
		Il2CppCodeGenWriteBarrier((&____outChars_4), value);
	}

	inline static int32_t get_offset_of__outIndex_5() { return static_cast<int32_t>(offsetof(StringMaker_t2784115625, ____outIndex_5)); }
	inline int32_t get__outIndex_5() const { return ____outIndex_5; }
	inline int32_t* get_address_of__outIndex_5() { return &____outIndex_5; }
	inline void set__outIndex_5(int32_t value)
	{
		____outIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGMAKER_T2784115625_H
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
#ifndef GACIDENTITYPERMISSION_T2991335275_H
#define GACIDENTITYPERMISSION_T2991335275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.GacIdentityPermission
struct  GacIdentityPermission_t2991335275  : public CodeAccessPermission_t2681295399
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACIDENTITYPERMISSION_T2991335275_H
#ifndef PUBLISHERIDENTITYPERMISSION_T594127488_H
#define PUBLISHERIDENTITYPERMISSION_T594127488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t594127488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t713131622 * ___x509_0;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(PublisherIdentityPermission_t594127488, ___x509_0)); }
	inline X509Certificate_t713131622 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t713131622 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t713131622 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHERIDENTITYPERMISSION_T594127488_H
#ifndef SITEIDENTITYPERMISSION_T4239769539_H
#define SITEIDENTITYPERMISSION_T4239769539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t4239769539  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;

public:
	inline static int32_t get_offset_of__site_0() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539, ____site_0)); }
	inline String_t* get__site_0() const { return ____site_0; }
	inline String_t** get_address_of__site_0() { return &____site_0; }
	inline void set__site_0(String_t* value)
	{
		____site_0 = value;
		Il2CppCodeGenWriteBarrier((&____site_0), value);
	}
};

struct SiteIdentityPermission_t4239769539_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t2897418192* ___valid_1;

public:
	inline static int32_t get_offset_of_valid_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539_StaticFields, ___valid_1)); }
	inline BooleanU5BU5D_t2897418192* get_valid_1() const { return ___valid_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valid_1() { return &___valid_1; }
	inline void set_valid_1(BooleanU5BU5D_t2897418192* value)
	{
		___valid_1 = value;
		Il2CppCodeGenWriteBarrier((&___valid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSION_T4239769539_H
#ifndef SNIP_T4156255223_H
#define SNIP_T4156255223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t4156255223 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t3456873960 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___AssemblyVersion_2)); }
	inline Version_t3456873960 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t3456873960 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t3456873960 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	char* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_com
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
#endif // SNIP_T4156255223_H
#ifndef URLIDENTITYPERMISSION_T48040392_H
#define URLIDENTITYPERMISSION_T48040392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermission
struct  UrlIdentityPermission_t48040392  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermission::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(UrlIdentityPermission_t48040392, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLIDENTITYPERMISSION_T48040392_H
#ifndef APPLICATIONTRUST_T3270368423_H
#define APPLICATIONTRUST_T3270368423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t3270368423  : public EvidenceBase_t778061133
{
public:
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t1917735356 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t3052133691 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	RuntimeObject * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_5;

public:
	inline static int32_t get_offset_of__appid_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____appid_0)); }
	inline ApplicationIdentity_t1917735356 * get__appid_0() const { return ____appid_0; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__appid_0() { return &____appid_0; }
	inline void set__appid_0(ApplicationIdentity_t1917735356 * value)
	{
		____appid_0 = value;
		Il2CppCodeGenWriteBarrier((&____appid_0), value);
	}

	inline static int32_t get_offset_of__defaultPolicy_1() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____defaultPolicy_1)); }
	inline PolicyStatement_t3052133691 * get__defaultPolicy_1() const { return ____defaultPolicy_1; }
	inline PolicyStatement_t3052133691 ** get_address_of__defaultPolicy_1() { return &____defaultPolicy_1; }
	inline void set__defaultPolicy_1(PolicyStatement_t3052133691 * value)
	{
		____defaultPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultPolicy_1), value);
	}

	inline static int32_t get_offset_of__xtranfo_2() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____xtranfo_2)); }
	inline RuntimeObject * get__xtranfo_2() const { return ____xtranfo_2; }
	inline RuntimeObject ** get_address_of__xtranfo_2() { return &____xtranfo_2; }
	inline void set__xtranfo_2(RuntimeObject * value)
	{
		____xtranfo_2 = value;
		Il2CppCodeGenWriteBarrier((&____xtranfo_2), value);
	}

	inline static int32_t get_offset_of__trustrun_3() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____trustrun_3)); }
	inline bool get__trustrun_3() const { return ____trustrun_3; }
	inline bool* get_address_of__trustrun_3() { return &____trustrun_3; }
	inline void set__trustrun_3(bool value)
	{
		____trustrun_3 = value;
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of_fullTrustAssemblies_5() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ___fullTrustAssemblies_5)); }
	inline RuntimeObject* get_fullTrustAssemblies_5() const { return ___fullTrustAssemblies_5; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_5() { return &___fullTrustAssemblies_5; }
	inline void set_fullTrustAssemblies_5(RuntimeObject* value)
	{
		___fullTrustAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T3270368423_H
#ifndef FIRSTMATCHCODEGROUP_T885469689_H
#define FIRSTMATCHCODEGROUP_T885469689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t885469689  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T885469689_H
#ifndef GACINSTALLED_T3565883570_H
#define GACINSTALLED_T3565883570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.GacInstalled
struct  GacInstalled_t3565883570  : public EvidenceBase_t778061133
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACINSTALLED_T3565883570_H
#ifndef HASH_T5925575_H
#define HASH_T5925575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t5925575  : public EvidenceBase_t778061133
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T5925575_H
#ifndef NETCODEGROUP_T2217812384_H
#define NETCODEGROUP_T2217812384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t2217812384  : public CodeGroup_t3811807446
{
public:
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t1853889766 * ____rules_7;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_8;

public:
	inline static int32_t get_offset_of__rules_7() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____rules_7)); }
	inline Hashtable_t1853889766 * get__rules_7() const { return ____rules_7; }
	inline Hashtable_t1853889766 ** get_address_of__rules_7() { return &____rules_7; }
	inline void set__rules_7(Hashtable_t1853889766 * value)
	{
		____rules_7 = value;
		Il2CppCodeGenWriteBarrier((&____rules_7), value);
	}

	inline static int32_t get_offset_of__hashcode_8() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____hashcode_8)); }
	inline int32_t get__hashcode_8() const { return ____hashcode_8; }
	inline int32_t* get_address_of__hashcode_8() { return &____hashcode_8; }
	inline void set__hashcode_8(int32_t value)
	{
		____hashcode_8 = value;
	}
};

struct NetCodeGroup_t2217812384_StaticFields
{
public:
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_5;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_6;

public:
	inline static int32_t get_offset_of_AbsentOriginScheme_5() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AbsentOriginScheme_5)); }
	inline String_t* get_AbsentOriginScheme_5() const { return ___AbsentOriginScheme_5; }
	inline String_t** get_address_of_AbsentOriginScheme_5() { return &___AbsentOriginScheme_5; }
	inline void set_AbsentOriginScheme_5(String_t* value)
	{
		___AbsentOriginScheme_5 = value;
		Il2CppCodeGenWriteBarrier((&___AbsentOriginScheme_5), value);
	}

	inline static int32_t get_offset_of_AnyOtherOriginScheme_6() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AnyOtherOriginScheme_6)); }
	inline String_t* get_AnyOtherOriginScheme_6() const { return ___AnyOtherOriginScheme_6; }
	inline String_t** get_address_of_AnyOtherOriginScheme_6() { return &___AnyOtherOriginScheme_6; }
	inline void set_AnyOtherOriginScheme_6(String_t* value)
	{
		___AnyOtherOriginScheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___AnyOtherOriginScheme_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCODEGROUP_T2217812384_H
#ifndef PERMISSIONREQUESTEVIDENCE_T59447972_H
#define PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t59447972  : public EvidenceBase_t778061133
{
public:
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t223948603 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t223948603 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t223948603 * ___denied_2;

public:
	inline static int32_t get_offset_of_requested_0() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___requested_0)); }
	inline PermissionSet_t223948603 * get_requested_0() const { return ___requested_0; }
	inline PermissionSet_t223948603 ** get_address_of_requested_0() { return &___requested_0; }
	inline void set_requested_0(PermissionSet_t223948603 * value)
	{
		___requested_0 = value;
		Il2CppCodeGenWriteBarrier((&___requested_0), value);
	}

	inline static int32_t get_offset_of_optional_1() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___optional_1)); }
	inline PermissionSet_t223948603 * get_optional_1() const { return ___optional_1; }
	inline PermissionSet_t223948603 ** get_address_of_optional_1() { return &___optional_1; }
	inline void set_optional_1(PermissionSet_t223948603 * value)
	{
		___optional_1 = value;
		Il2CppCodeGenWriteBarrier((&___optional_1), value);
	}

	inline static int32_t get_offset_of_denied_2() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___denied_2)); }
	inline PermissionSet_t223948603 * get_denied_2() const { return ___denied_2; }
	inline PermissionSet_t223948603 ** get_address_of_denied_2() { return &___denied_2; }
	inline void set_denied_2(PermissionSet_t223948603 * value)
	{
		___denied_2 = value;
		Il2CppCodeGenWriteBarrier((&___denied_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifndef PUBLISHER_T2758056332_H
#define PUBLISHER_T2758056332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Publisher
struct  Publisher_t2758056332  : public EvidenceBase_t778061133
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::m_cert
	X509Certificate_t713131622 * ___m_cert_0;

public:
	inline static int32_t get_offset_of_m_cert_0() { return static_cast<int32_t>(offsetof(Publisher_t2758056332, ___m_cert_0)); }
	inline X509Certificate_t713131622 * get_m_cert_0() const { return ___m_cert_0; }
	inline X509Certificate_t713131622 ** get_address_of_m_cert_0() { return &___m_cert_0; }
	inline void set_m_cert_0(X509Certificate_t713131622 * value)
	{
		___m_cert_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_cert_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHER_T2758056332_H
#ifndef SITE_T1075497104_H
#define SITE_T1075497104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Site
struct  Site_t1075497104  : public EvidenceBase_t778061133
{
public:
	// System.String System.Security.Policy.Site::origin_site
	String_t* ___origin_site_0;

public:
	inline static int32_t get_offset_of_origin_site_0() { return static_cast<int32_t>(offsetof(Site_t1075497104, ___origin_site_0)); }
	inline String_t* get_origin_site_0() const { return ___origin_site_0; }
	inline String_t** get_address_of_origin_site_0() { return &___origin_site_0; }
	inline void set_origin_site_0(String_t* value)
	{
		___origin_site_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_site_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T1075497104_H
#ifndef STRONGNAME_T3675724614_H
#define STRONGNAME_T3675724614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3675724614  : public EvidenceBase_t778061133
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3355146440 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3456873960 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___version_2)); }
	inline Version_t3456873960 * get_version_2() const { return ___version_2; }
	inline Version_t3456873960 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3456873960 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3675724614_H
#ifndef UNIONCODEGROUP_T3773268997_H
#define UNIONCODEGROUP_T3773268997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UnionCodeGroup
struct  UnionCodeGroup_t3773268997  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONCODEGROUP_T3773268997_H
#ifndef URL_T207802215_H
#define URL_T207802215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Url
struct  Url_t207802215  : public EvidenceBase_t778061133
{
public:
	// System.String System.Security.Policy.Url::origin_url
	String_t* ___origin_url_0;

public:
	inline static int32_t get_offset_of_origin_url_0() { return static_cast<int32_t>(offsetof(Url_t207802215, ___origin_url_0)); }
	inline String_t* get_origin_url_0() const { return ___origin_url_0; }
	inline String_t** get_address_of_origin_url_0() { return &___origin_url_0; }
	inline void set_origin_url_0(String_t* value)
	{
		___origin_url_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URL_T207802215_H
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
#ifndef ENVIRONMENTPERMISSIONACCESS_T1745565475_H
#define ENVIRONMENTPERMISSIONACCESS_T1745565475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAccess
struct  EnvironmentPermissionAccess_t1745565475 
{
public:
	// System.Int32 System.Security.Permissions.EnvironmentPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAccess_t1745565475, ___value___2)); }
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
#endif // ENVIRONMENTPERMISSIONACCESS_T1745565475_H
#ifndef FILEDIALOGPERMISSIONACCESS_T4172829844_H
#define FILEDIALOGPERMISSIONACCESS_T4172829844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermissionAccess
struct  FileDialogPermissionAccess_t4172829844 
{
public:
	// System.Int32 System.Security.Permissions.FileDialogPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileDialogPermissionAccess_t4172829844, ___value___2)); }
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
#endif // FILEDIALOGPERMISSIONACCESS_T4172829844_H
#ifndef FILEIOPERMISSIONACCESS_T1559273540_H
#define FILEIOPERMISSIONACCESS_T1559273540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t1559273540 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t1559273540, ___value___2)); }
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
#endif // FILEIOPERMISSIONACCESS_T1559273540_H
#ifndef HOSTPROTECTIONRESOURCE_T3168622669_H
#define HOSTPROTECTIONRESOURCE_T3168622669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t3168622669 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostProtectionResource_t3168622669, ___value___2)); }
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
#endif // HOSTPROTECTIONRESOURCE_T3168622669_H
#ifndef ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#define ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageContainment
struct  IsolatedStorageContainment_t3203638662 
{
public:
	// System.Int32 System.Security.Permissions.IsolatedStorageContainment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolatedStorageContainment_t3203638662, ___value___2)); }
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
#endif // ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#define KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t3864969297 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t3864969297, ___value___2)); }
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
#endif // KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifndef PERMISSIONSTATE_T1178999876_H
#define PERMISSIONSTATE_T1178999876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1178999876 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionState_t1178999876, ___value___2)); }
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
#endif // PERMISSIONSTATE_T1178999876_H
#ifndef REFLECTIONPERMISSIONFLAG_T4199904140_H
#define REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t4199904140 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t4199904140, ___value___2)); }
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
#endif // REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifndef REGISTRYPERMISSIONACCESS_T307445458_H
#define REGISTRYPERMISSIONACCESS_T307445458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t307445458 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t307445458, ___value___2)); }
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
#endif // REGISTRYPERMISSIONACCESS_T307445458_H
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___2)); }
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
#endif // SECURITYACTION_T569814076_H
#ifndef SECURITYPERMISSIONFLAG_T3459270124_H
#define SECURITYPERMISSIONFLAG_T3459270124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t3459270124 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t3459270124, ___value___2)); }
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
#endif // SECURITYPERMISSIONFLAG_T3459270124_H
#ifndef UIPERMISSIONCLIPBOARD_T4002838840_H
#define UIPERMISSIONCLIPBOARD_T4002838840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t4002838840 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t4002838840, ___value___2)); }
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
#endif // UIPERMISSIONCLIPBOARD_T4002838840_H
#ifndef UIPERMISSIONWINDOW_T985109583_H
#define UIPERMISSIONWINDOW_T985109583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t985109583 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t985109583, ___value___2)); }
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
#endif // UIPERMISSIONWINDOW_T985109583_H
#ifndef KEY_T3006169375_H
#define KEY_T3006169375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/Key
struct  Key_t3006169375 
{
public:
	// System.Int32 System.Security.Policy.DefaultPolicies/Key::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Key_t3006169375, ___value___2)); }
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
#endif // KEY_T3006169375_H
#ifndef POLICYEXCEPTION_T1520028310_H
#define POLICYEXCEPTION_T1520028310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyException
struct  PolicyException_t1520028310  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYEXCEPTION_T1520028310_H
#ifndef POLICYSTATEMENTATTRIBUTE_T1674167676_H
#define POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t1674167676 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t1674167676, ___value___2)); }
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
#endif // POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifndef POLICYLEVELTYPE_T244468749_H
#define POLICYLEVELTYPE_T244468749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t244468749 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PolicyLevelType_t244468749, ___value___2)); }
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
#endif // POLICYLEVELTYPE_T244468749_H
#ifndef SECURITYELEMENTTYPE_T1479558943_H
#define SECURITYELEMENTTYPE_T1479558943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElementType
struct  SecurityElementType_t1479558943 
{
public:
	// System.Int32 System.Security.SecurityElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityElementType_t1479558943, ___value___2)); }
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
#endif // SECURITYELEMENTTYPE_T1479558943_H
#ifndef SECURITYEXCEPTION_T975544473_H
#define SECURITYEXCEPTION_T975544473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t975544473  : public SystemException_t176217640
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_17;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_18;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_19;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_20;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_21;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_22;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_23;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2008144148 * ____evidence_24;

public:
	inline static int32_t get_offset_of_permissionState_17() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionState_17)); }
	inline String_t* get_permissionState_17() const { return ___permissionState_17; }
	inline String_t** get_address_of_permissionState_17() { return &___permissionState_17; }
	inline void set_permissionState_17(String_t* value)
	{
		___permissionState_17 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_17), value);
	}

	inline static int32_t get_offset_of_permissionType_18() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionType_18)); }
	inline Type_t * get_permissionType_18() const { return ___permissionType_18; }
	inline Type_t ** get_address_of_permissionType_18() { return &___permissionType_18; }
	inline void set_permissionType_18(Type_t * value)
	{
		___permissionType_18 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_18), value);
	}

	inline static int32_t get_offset_of__granted_19() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____granted_19)); }
	inline String_t* get__granted_19() const { return ____granted_19; }
	inline String_t** get_address_of__granted_19() { return &____granted_19; }
	inline void set__granted_19(String_t* value)
	{
		____granted_19 = value;
		Il2CppCodeGenWriteBarrier((&____granted_19), value);
	}

	inline static int32_t get_offset_of__refused_20() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____refused_20)); }
	inline String_t* get__refused_20() const { return ____refused_20; }
	inline String_t** get_address_of__refused_20() { return &____refused_20; }
	inline void set__refused_20(String_t* value)
	{
		____refused_20 = value;
		Il2CppCodeGenWriteBarrier((&____refused_20), value);
	}

	inline static int32_t get_offset_of__demanded_21() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____demanded_21)); }
	inline RuntimeObject * get__demanded_21() const { return ____demanded_21; }
	inline RuntimeObject ** get_address_of__demanded_21() { return &____demanded_21; }
	inline void set__demanded_21(RuntimeObject * value)
	{
		____demanded_21 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_21), value);
	}

	inline static int32_t get_offset_of__firstperm_22() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____firstperm_22)); }
	inline RuntimeObject* get__firstperm_22() const { return ____firstperm_22; }
	inline RuntimeObject** get_address_of__firstperm_22() { return &____firstperm_22; }
	inline void set__firstperm_22(RuntimeObject* value)
	{
		____firstperm_22 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_22), value);
	}

	inline static int32_t get_offset_of__method_23() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____method_23)); }
	inline MethodInfo_t * get__method_23() const { return ____method_23; }
	inline MethodInfo_t ** get_address_of__method_23() { return &____method_23; }
	inline void set__method_23(MethodInfo_t * value)
	{
		____method_23 = value;
		Il2CppCodeGenWriteBarrier((&____method_23), value);
	}

	inline static int32_t get_offset_of__evidence_24() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____evidence_24)); }
	inline Evidence_t2008144148 * get__evidence_24() const { return ____evidence_24; }
	inline Evidence_t2008144148 ** get_address_of__evidence_24() { return &____evidence_24; }
	inline void set__evidence_24(Evidence_t2008144148 * value)
	{
		____evidence_24 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T975544473_H
#ifndef SECURITYZONE_T1272287263_H
#define SECURITYZONE_T1272287263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t1272287263 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityZone_t1272287263, ___value___2)); }
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
#endif // SECURITYZONE_T1272287263_H
#ifndef TOKENSOURCE_T3626512994_H
#define TOKENSOURCE_T3626512994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Util.Tokenizer/TokenSource
struct  TokenSource_t3626512994 
{
public:
	// System.Int32 System.Security.Util.Tokenizer/TokenSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenSource_t3626512994, ___value___2)); }
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
#endif // TOKENSOURCE_T3626512994_H
#ifndef VERIFICATIONEXCEPTION_T1599351733_H
#define VERIFICATIONEXCEPTION_T1599351733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.VerificationException
struct  VerificationException_t1599351733  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERIFICATIONEXCEPTION_T1599351733_H
#ifndef XMLSYNTAXEXCEPTION_T2973594484_H
#define XMLSYNTAXEXCEPTION_T2973594484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.XmlSyntaxException
struct  XmlSyntaxException_t2973594484  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSYNTAXEXCEPTION_T2973594484_H
#ifndef PERMISSIONSET_T223948603_H
#define PERMISSIONSET_T223948603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t223948603  : public RuntimeObject
{
public:
	// System.Security.Permissions.PermissionState System.Security.PermissionSet::state
	int32_t ___state_3;
	// System.Collections.ArrayList System.Security.PermissionSet::list
	ArrayList_t2718874744 * ___list_4;
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::_policyLevel
	PolicyLevel_t2891196107 * ____policyLevel_5;
	// System.Boolean System.Security.PermissionSet::_declsec
	bool ____declsec_6;
	// System.Boolean System.Security.PermissionSet::_readOnly
	bool ____readOnly_7;
	// System.Boolean[] System.Security.PermissionSet::_ignored
	BooleanU5BU5D_t2897418192* ____ignored_8;

public:
	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_list_4() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___list_4)); }
	inline ArrayList_t2718874744 * get_list_4() const { return ___list_4; }
	inline ArrayList_t2718874744 ** get_address_of_list_4() { return &___list_4; }
	inline void set_list_4(ArrayList_t2718874744 * value)
	{
		___list_4 = value;
		Il2CppCodeGenWriteBarrier((&___list_4), value);
	}

	inline static int32_t get_offset_of__policyLevel_5() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____policyLevel_5)); }
	inline PolicyLevel_t2891196107 * get__policyLevel_5() const { return ____policyLevel_5; }
	inline PolicyLevel_t2891196107 ** get_address_of__policyLevel_5() { return &____policyLevel_5; }
	inline void set__policyLevel_5(PolicyLevel_t2891196107 * value)
	{
		____policyLevel_5 = value;
		Il2CppCodeGenWriteBarrier((&____policyLevel_5), value);
	}

	inline static int32_t get_offset_of__declsec_6() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____declsec_6)); }
	inline bool get__declsec_6() const { return ____declsec_6; }
	inline bool* get_address_of__declsec_6() { return &____declsec_6; }
	inline void set__declsec_6(bool value)
	{
		____declsec_6 = value;
	}

	inline static int32_t get_offset_of__readOnly_7() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____readOnly_7)); }
	inline bool get__readOnly_7() const { return ____readOnly_7; }
	inline bool* get_address_of__readOnly_7() { return &____readOnly_7; }
	inline void set__readOnly_7(bool value)
	{
		____readOnly_7 = value;
	}

	inline static int32_t get_offset_of__ignored_8() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ____ignored_8)); }
	inline BooleanU5BU5D_t2897418192* get__ignored_8() const { return ____ignored_8; }
	inline BooleanU5BU5D_t2897418192** get_address_of__ignored_8() { return &____ignored_8; }
	inline void set__ignored_8(BooleanU5BU5D_t2897418192* value)
	{
		____ignored_8 = value;
		Il2CppCodeGenWriteBarrier((&____ignored_8), value);
	}
};

struct PermissionSet_t223948603_StaticFields
{
public:
	// System.Object[] System.Security.PermissionSet::psUnrestricted
	ObjectU5BU5D_t2843939325* ___psUnrestricted_2;
	// System.Object[] System.Security.PermissionSet::action
	ObjectU5BU5D_t2843939325* ___action_9;

public:
	inline static int32_t get_offset_of_psUnrestricted_2() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603_StaticFields, ___psUnrestricted_2)); }
	inline ObjectU5BU5D_t2843939325* get_psUnrestricted_2() const { return ___psUnrestricted_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_psUnrestricted_2() { return &___psUnrestricted_2; }
	inline void set_psUnrestricted_2(ObjectU5BU5D_t2843939325* value)
	{
		___psUnrestricted_2 = value;
		Il2CppCodeGenWriteBarrier((&___psUnrestricted_2), value);
	}

	inline static int32_t get_offset_of_action_9() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603_StaticFields, ___action_9)); }
	inline ObjectU5BU5D_t2843939325* get_action_9() const { return ___action_9; }
	inline ObjectU5BU5D_t2843939325** get_address_of_action_9() { return &___action_9; }
	inline void set_action_9(ObjectU5BU5D_t2843939325* value)
	{
		___action_9 = value;
		Il2CppCodeGenWriteBarrier((&___action_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T223948603_H
#ifndef ENVIRONMENTPERMISSION_T1242010617_H
#define ENVIRONMENTPERMISSION_T1242010617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t1242010617  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t2718874744 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t2718874744 * ___writeList_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t1242010617, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_readList_1() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t1242010617, ___readList_1)); }
	inline ArrayList_t2718874744 * get_readList_1() const { return ___readList_1; }
	inline ArrayList_t2718874744 ** get_address_of_readList_1() { return &___readList_1; }
	inline void set_readList_1(ArrayList_t2718874744 * value)
	{
		___readList_1 = value;
		Il2CppCodeGenWriteBarrier((&___readList_1), value);
	}

	inline static int32_t get_offset_of_writeList_2() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t1242010617, ___writeList_2)); }
	inline ArrayList_t2718874744 * get_writeList_2() const { return ___writeList_2; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_2() { return &___writeList_2; }
	inline void set_writeList_2(ArrayList_t2718874744 * value)
	{
		___writeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSION_T1242010617_H
#ifndef FILEDIALOGPERMISSION_T986095094_H
#define FILEDIALOGPERMISSION_T986095094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermission
struct  FileDialogPermission_t986095094  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.FileDialogPermissionAccess System.Security.Permissions.FileDialogPermission::_access
	int32_t ____access_0;

public:
	inline static int32_t get_offset_of__access_0() { return static_cast<int32_t>(offsetof(FileDialogPermission_t986095094, ____access_0)); }
	inline int32_t get__access_0() const { return ____access_0; }
	inline int32_t* get_address_of__access_0() { return &____access_0; }
	inline void set__access_0(int32_t value)
	{
		____access_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEDIALOGPERMISSION_T986095094_H
#ifndef FILEIOPERMISSION_T3596906749_H
#define FILEIOPERMISSION_T3596906749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermission
struct  FileIOPermission_t3596906749  : public CodeAccessPermission_t2681295399
{
public:
	// System.Boolean System.Security.Permissions.FileIOPermission::m_Unrestricted
	bool ___m_Unrestricted_2;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllFilesAccess
	int32_t ___m_AllFilesAccess_3;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllLocalFilesAccess
	int32_t ___m_AllLocalFilesAccess_4;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::readList
	ArrayList_t2718874744 * ___readList_5;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::writeList
	ArrayList_t2718874744 * ___writeList_6;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::appendList
	ArrayList_t2718874744 * ___appendList_7;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::pathList
	ArrayList_t2718874744 * ___pathList_8;

public:
	inline static int32_t get_offset_of_m_Unrestricted_2() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___m_Unrestricted_2)); }
	inline bool get_m_Unrestricted_2() const { return ___m_Unrestricted_2; }
	inline bool* get_address_of_m_Unrestricted_2() { return &___m_Unrestricted_2; }
	inline void set_m_Unrestricted_2(bool value)
	{
		___m_Unrestricted_2 = value;
	}

	inline static int32_t get_offset_of_m_AllFilesAccess_3() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___m_AllFilesAccess_3)); }
	inline int32_t get_m_AllFilesAccess_3() const { return ___m_AllFilesAccess_3; }
	inline int32_t* get_address_of_m_AllFilesAccess_3() { return &___m_AllFilesAccess_3; }
	inline void set_m_AllFilesAccess_3(int32_t value)
	{
		___m_AllFilesAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_AllLocalFilesAccess_4() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___m_AllLocalFilesAccess_4)); }
	inline int32_t get_m_AllLocalFilesAccess_4() const { return ___m_AllLocalFilesAccess_4; }
	inline int32_t* get_address_of_m_AllLocalFilesAccess_4() { return &___m_AllLocalFilesAccess_4; }
	inline void set_m_AllLocalFilesAccess_4(int32_t value)
	{
		___m_AllLocalFilesAccess_4 = value;
	}

	inline static int32_t get_offset_of_readList_5() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___readList_5)); }
	inline ArrayList_t2718874744 * get_readList_5() const { return ___readList_5; }
	inline ArrayList_t2718874744 ** get_address_of_readList_5() { return &___readList_5; }
	inline void set_readList_5(ArrayList_t2718874744 * value)
	{
		___readList_5 = value;
		Il2CppCodeGenWriteBarrier((&___readList_5), value);
	}

	inline static int32_t get_offset_of_writeList_6() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___writeList_6)); }
	inline ArrayList_t2718874744 * get_writeList_6() const { return ___writeList_6; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_6() { return &___writeList_6; }
	inline void set_writeList_6(ArrayList_t2718874744 * value)
	{
		___writeList_6 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_6), value);
	}

	inline static int32_t get_offset_of_appendList_7() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___appendList_7)); }
	inline ArrayList_t2718874744 * get_appendList_7() const { return ___appendList_7; }
	inline ArrayList_t2718874744 ** get_address_of_appendList_7() { return &___appendList_7; }
	inline void set_appendList_7(ArrayList_t2718874744 * value)
	{
		___appendList_7 = value;
		Il2CppCodeGenWriteBarrier((&___appendList_7), value);
	}

	inline static int32_t get_offset_of_pathList_8() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749, ___pathList_8)); }
	inline ArrayList_t2718874744 * get_pathList_8() const { return ___pathList_8; }
	inline ArrayList_t2718874744 ** get_address_of_pathList_8() { return &___pathList_8; }
	inline void set_pathList_8(ArrayList_t2718874744 * value)
	{
		___pathList_8 = value;
		Il2CppCodeGenWriteBarrier((&___pathList_8), value);
	}
};

struct FileIOPermission_t3596906749_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.FileIOPermission::BadPathNameCharacters
	CharU5BU5D_t3528271667* ___BadPathNameCharacters_0;
	// System.Char[] System.Security.Permissions.FileIOPermission::BadFileNameCharacters
	CharU5BU5D_t3528271667* ___BadFileNameCharacters_1;

public:
	inline static int32_t get_offset_of_BadPathNameCharacters_0() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749_StaticFields, ___BadPathNameCharacters_0)); }
	inline CharU5BU5D_t3528271667* get_BadPathNameCharacters_0() const { return ___BadPathNameCharacters_0; }
	inline CharU5BU5D_t3528271667** get_address_of_BadPathNameCharacters_0() { return &___BadPathNameCharacters_0; }
	inline void set_BadPathNameCharacters_0(CharU5BU5D_t3528271667* value)
	{
		___BadPathNameCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___BadPathNameCharacters_0), value);
	}

	inline static int32_t get_offset_of_BadFileNameCharacters_1() { return static_cast<int32_t>(offsetof(FileIOPermission_t3596906749_StaticFields, ___BadFileNameCharacters_1)); }
	inline CharU5BU5D_t3528271667* get_BadFileNameCharacters_1() const { return ___BadFileNameCharacters_1; }
	inline CharU5BU5D_t3528271667** get_address_of_BadFileNameCharacters_1() { return &___BadFileNameCharacters_1; }
	inline void set_BadFileNameCharacters_1(CharU5BU5D_t3528271667* value)
	{
		___BadFileNameCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((&___BadFileNameCharacters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSION_T3596906749_H
#ifndef HOSTPROTECTIONPERMISSION_T3140009990_H
#define HOSTPROTECTIONPERMISSION_T3140009990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionPermission
struct  HostProtectionPermission_t3140009990  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.Permissions.HostProtectionPermission::_resources
	int32_t ____resources_0;

public:
	inline static int32_t get_offset_of__resources_0() { return static_cast<int32_t>(offsetof(HostProtectionPermission_t3140009990, ____resources_0)); }
	inline int32_t get__resources_0() const { return ____resources_0; }
	inline int32_t* get_address_of__resources_0() { return &____resources_0; }
	inline void set__resources_0(int32_t value)
	{
		____resources_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONPERMISSION_T3140009990_H
#ifndef ISOLATEDSTORAGEPERMISSION_T2996329588_H
#define ISOLATEDSTORAGEPERMISSION_T2996329588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStoragePermission
struct  IsolatedStoragePermission_t2996329588  : public CodeAccessPermission_t2681295399
{
public:
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_userQuota
	int64_t ___m_userQuota_0;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_machineQuota
	int64_t ___m_machineQuota_1;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_expirationDays
	int64_t ___m_expirationDays_2;
	// System.Boolean System.Security.Permissions.IsolatedStoragePermission::m_permanentData
	bool ___m_permanentData_3;
	// System.Security.Permissions.IsolatedStorageContainment System.Security.Permissions.IsolatedStoragePermission::m_allowed
	int32_t ___m_allowed_4;

public:
	inline static int32_t get_offset_of_m_userQuota_0() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_userQuota_0)); }
	inline int64_t get_m_userQuota_0() const { return ___m_userQuota_0; }
	inline int64_t* get_address_of_m_userQuota_0() { return &___m_userQuota_0; }
	inline void set_m_userQuota_0(int64_t value)
	{
		___m_userQuota_0 = value;
	}

	inline static int32_t get_offset_of_m_machineQuota_1() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_machineQuota_1)); }
	inline int64_t get_m_machineQuota_1() const { return ___m_machineQuota_1; }
	inline int64_t* get_address_of_m_machineQuota_1() { return &___m_machineQuota_1; }
	inline void set_m_machineQuota_1(int64_t value)
	{
		___m_machineQuota_1 = value;
	}

	inline static int32_t get_offset_of_m_expirationDays_2() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_expirationDays_2)); }
	inline int64_t get_m_expirationDays_2() const { return ___m_expirationDays_2; }
	inline int64_t* get_address_of_m_expirationDays_2() { return &___m_expirationDays_2; }
	inline void set_m_expirationDays_2(int64_t value)
	{
		___m_expirationDays_2 = value;
	}

	inline static int32_t get_offset_of_m_permanentData_3() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_permanentData_3)); }
	inline bool get_m_permanentData_3() const { return ___m_permanentData_3; }
	inline bool* get_address_of_m_permanentData_3() { return &___m_permanentData_3; }
	inline void set_m_permanentData_3(bool value)
	{
		___m_permanentData_3 = value;
	}

	inline static int32_t get_offset_of_m_allowed_4() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_allowed_4)); }
	inline int32_t get_m_allowed_4() const { return ___m_allowed_4; }
	inline int32_t* get_address_of_m_allowed_4() { return &___m_allowed_4; }
	inline void set_m_allowed_4(int32_t value)
	{
		___m_allowed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEPERMISSION_T2996329588_H
#ifndef KEYCONTAINERPERMISSION_T1460699488_H
#define KEYCONTAINERPERMISSION_T1460699488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1460699488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t4144114052 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t4144114052 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSION_T1460699488_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t3026022710  : public RuntimeObject
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermissionAccessEntry::_flags
	int32_t ____flags_0;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_containerName
	String_t* ____containerName_1;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_spec
	int32_t ____spec_2;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_store
	String_t* ____store_3;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_providerName
	String_t* ____providerName_4;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_type
	int32_t ____type_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifndef REFLECTIONPERMISSION_T2208099681_H
#define REFLECTIONPERMISSION_T2208099681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t2208099681  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t2208099681, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSION_T2208099681_H
#ifndef REGISTRYPERMISSION_T4244934776_H
#define REGISTRYPERMISSION_T4244934776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4244934776  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t2718874744 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t2718874744 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t2718874744 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___createList_1)); }
	inline ArrayList_t2718874744 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t2718874744 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t2718874744 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___readList_2)); }
	inline ArrayList_t2718874744 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t2718874744 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t2718874744 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___writeList_3)); }
	inline ArrayList_t2718874744 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t2718874744 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T4244934776_H
#ifndef SECURITYATTRIBUTE_T4008260079_H
#define SECURITYATTRIBUTE_T4008260079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t4008260079  : public Attribute_t861562559
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Unrestricted_1)); }
	inline bool get_m_Unrestricted_1() const { return ___m_Unrestricted_1; }
	inline bool* get_address_of_m_Unrestricted_1() { return &___m_Unrestricted_1; }
	inline void set_m_Unrestricted_1(bool value)
	{
		___m_Unrestricted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T4008260079_H
#ifndef SECURITYPERMISSION_T2954997752_H
#define SECURITYPERMISSION_T2954997752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2954997752  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2954997752, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2954997752_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#define STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2780499738  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t2718874744 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____list_2)); }
	inline ArrayList_t2718874744 * get__list_2() const { return ____list_2; }
	inline ArrayList_t2718874744 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t2718874744 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t2780499738_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t3456873960 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738_StaticFields, ___defaultVersion_0)); }
	inline Version_t3456873960 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t3456873960 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t3456873960 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifndef UIPERMISSION_T826475846_H
#define UIPERMISSION_T826475846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t826475846  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____clipboard_1)); }
	inline int32_t get__clipboard_1() const { return ____clipboard_1; }
	inline int32_t* get_address_of__clipboard_1() { return &____clipboard_1; }
	inline void set__clipboard_1(int32_t value)
	{
		____clipboard_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T826475846_H
#ifndef ZONEIDENTITYPERMISSION_T2250593031_H
#define ZONEIDENTITYPERMISSION_T2250593031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t2250593031  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t2250593031, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T2250593031_H
#ifndef FILECODEGROUP_T1720965944_H
#define FILECODEGROUP_T1720965944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t1720965944  : public CodeGroup_t3811807446
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_5;

public:
	inline static int32_t get_offset_of_m_access_5() { return static_cast<int32_t>(offsetof(FileCodeGroup_t1720965944, ___m_access_5)); }
	inline int32_t get_m_access_5() const { return ___m_access_5; }
	inline int32_t* get_address_of_m_access_5() { return &___m_access_5; }
	inline void set_m_access_5(int32_t value)
	{
		___m_access_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T1720965944_H
#ifndef POLICYLEVEL_T2891196107_H
#define POLICYLEVEL_T2891196107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t2891196107  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t3811807446 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2718874744 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2718874744 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1853889766 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t1046076091 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___root_code_group_1)); }
	inline CodeGroup_t3811807446 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t3811807446 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t3811807446 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___full_trust_assemblies_2)); }
	inline ArrayList_t2718874744 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2718874744 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2718874744 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___named_permission_sets_3)); }
	inline ArrayList_t2718874744 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2718874744 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2718874744 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___fullNames_6)); }
	inline Hashtable_t1853889766 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1853889766 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1853889766 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___xml_7)); }
	inline SecurityElement_t1046076091 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t1046076091 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t1046076091 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T2891196107_H
#ifndef POLICYSTATEMENT_T3052133691_H
#define POLICYSTATEMENT_T3052133691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t3052133691  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t223948603 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___perms_0)); }
	inline PermissionSet_t223948603 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t223948603 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t223948603 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T3052133691_H
#ifndef ZONE_T2011285646_H
#define ZONE_T2011285646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Zone
struct  Zone_t2011285646  : public EvidenceBase_t778061133
{
public:
	// System.Security.SecurityZone System.Security.Policy.Zone::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(Zone_t2011285646, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONE_T2011285646_H
#ifndef ZONEMEMBERSHIPCONDITION_T3195636716_H
#define ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t3195636716  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifndef TOKENIZER_T545397970_H
#define TOKENIZER_T545397970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Util.Tokenizer
struct  Tokenizer_t545397970  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Util.Tokenizer::LineNo
	int32_t ___LineNo_0;
	// System.Int32 System.Security.Util.Tokenizer::_inProcessingTag
	int32_t ____inProcessingTag_1;
	// System.Byte[] System.Security.Util.Tokenizer::_inBytes
	ByteU5BU5D_t4116647657* ____inBytes_2;
	// System.Char[] System.Security.Util.Tokenizer::_inChars
	CharU5BU5D_t3528271667* ____inChars_3;
	// System.String System.Security.Util.Tokenizer::_inString
	String_t* ____inString_4;
	// System.Int32 System.Security.Util.Tokenizer::_inIndex
	int32_t ____inIndex_5;
	// System.Int32 System.Security.Util.Tokenizer::_inSize
	int32_t ____inSize_6;
	// System.Int32 System.Security.Util.Tokenizer::_inSavedCharacter
	int32_t ____inSavedCharacter_7;
	// System.Security.Util.Tokenizer/TokenSource System.Security.Util.Tokenizer::_inTokenSource
	int32_t ____inTokenSource_8;
	// System.Security.Util.Tokenizer/ITokenReader System.Security.Util.Tokenizer::_inTokenReader
	RuntimeObject* ____inTokenReader_9;
	// System.Security.Util.Tokenizer/StringMaker System.Security.Util.Tokenizer::_maker
	StringMaker_t2784115625 * ____maker_10;
	// System.String[] System.Security.Util.Tokenizer::_searchStrings
	StringU5BU5D_t1281789340* ____searchStrings_11;
	// System.String[] System.Security.Util.Tokenizer::_replaceStrings
	StringU5BU5D_t1281789340* ____replaceStrings_12;
	// System.Int32 System.Security.Util.Tokenizer::_inNestedIndex
	int32_t ____inNestedIndex_13;
	// System.Int32 System.Security.Util.Tokenizer::_inNestedSize
	int32_t ____inNestedSize_14;
	// System.String System.Security.Util.Tokenizer::_inNestedString
	String_t* ____inNestedString_15;

public:
	inline static int32_t get_offset_of_LineNo_0() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ___LineNo_0)); }
	inline int32_t get_LineNo_0() const { return ___LineNo_0; }
	inline int32_t* get_address_of_LineNo_0() { return &___LineNo_0; }
	inline void set_LineNo_0(int32_t value)
	{
		___LineNo_0 = value;
	}

	inline static int32_t get_offset_of__inProcessingTag_1() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inProcessingTag_1)); }
	inline int32_t get__inProcessingTag_1() const { return ____inProcessingTag_1; }
	inline int32_t* get_address_of__inProcessingTag_1() { return &____inProcessingTag_1; }
	inline void set__inProcessingTag_1(int32_t value)
	{
		____inProcessingTag_1 = value;
	}

	inline static int32_t get_offset_of__inBytes_2() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inBytes_2)); }
	inline ByteU5BU5D_t4116647657* get__inBytes_2() const { return ____inBytes_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__inBytes_2() { return &____inBytes_2; }
	inline void set__inBytes_2(ByteU5BU5D_t4116647657* value)
	{
		____inBytes_2 = value;
		Il2CppCodeGenWriteBarrier((&____inBytes_2), value);
	}

	inline static int32_t get_offset_of__inChars_3() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inChars_3)); }
	inline CharU5BU5D_t3528271667* get__inChars_3() const { return ____inChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of__inChars_3() { return &____inChars_3; }
	inline void set__inChars_3(CharU5BU5D_t3528271667* value)
	{
		____inChars_3 = value;
		Il2CppCodeGenWriteBarrier((&____inChars_3), value);
	}

	inline static int32_t get_offset_of__inString_4() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inString_4)); }
	inline String_t* get__inString_4() const { return ____inString_4; }
	inline String_t** get_address_of__inString_4() { return &____inString_4; }
	inline void set__inString_4(String_t* value)
	{
		____inString_4 = value;
		Il2CppCodeGenWriteBarrier((&____inString_4), value);
	}

	inline static int32_t get_offset_of__inIndex_5() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inIndex_5)); }
	inline int32_t get__inIndex_5() const { return ____inIndex_5; }
	inline int32_t* get_address_of__inIndex_5() { return &____inIndex_5; }
	inline void set__inIndex_5(int32_t value)
	{
		____inIndex_5 = value;
	}

	inline static int32_t get_offset_of__inSize_6() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inSize_6)); }
	inline int32_t get__inSize_6() const { return ____inSize_6; }
	inline int32_t* get_address_of__inSize_6() { return &____inSize_6; }
	inline void set__inSize_6(int32_t value)
	{
		____inSize_6 = value;
	}

	inline static int32_t get_offset_of__inSavedCharacter_7() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inSavedCharacter_7)); }
	inline int32_t get__inSavedCharacter_7() const { return ____inSavedCharacter_7; }
	inline int32_t* get_address_of__inSavedCharacter_7() { return &____inSavedCharacter_7; }
	inline void set__inSavedCharacter_7(int32_t value)
	{
		____inSavedCharacter_7 = value;
	}

	inline static int32_t get_offset_of__inTokenSource_8() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inTokenSource_8)); }
	inline int32_t get__inTokenSource_8() const { return ____inTokenSource_8; }
	inline int32_t* get_address_of__inTokenSource_8() { return &____inTokenSource_8; }
	inline void set__inTokenSource_8(int32_t value)
	{
		____inTokenSource_8 = value;
	}

	inline static int32_t get_offset_of__inTokenReader_9() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inTokenReader_9)); }
	inline RuntimeObject* get__inTokenReader_9() const { return ____inTokenReader_9; }
	inline RuntimeObject** get_address_of__inTokenReader_9() { return &____inTokenReader_9; }
	inline void set__inTokenReader_9(RuntimeObject* value)
	{
		____inTokenReader_9 = value;
		Il2CppCodeGenWriteBarrier((&____inTokenReader_9), value);
	}

	inline static int32_t get_offset_of__maker_10() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____maker_10)); }
	inline StringMaker_t2784115625 * get__maker_10() const { return ____maker_10; }
	inline StringMaker_t2784115625 ** get_address_of__maker_10() { return &____maker_10; }
	inline void set__maker_10(StringMaker_t2784115625 * value)
	{
		____maker_10 = value;
		Il2CppCodeGenWriteBarrier((&____maker_10), value);
	}

	inline static int32_t get_offset_of__searchStrings_11() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____searchStrings_11)); }
	inline StringU5BU5D_t1281789340* get__searchStrings_11() const { return ____searchStrings_11; }
	inline StringU5BU5D_t1281789340** get_address_of__searchStrings_11() { return &____searchStrings_11; }
	inline void set__searchStrings_11(StringU5BU5D_t1281789340* value)
	{
		____searchStrings_11 = value;
		Il2CppCodeGenWriteBarrier((&____searchStrings_11), value);
	}

	inline static int32_t get_offset_of__replaceStrings_12() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____replaceStrings_12)); }
	inline StringU5BU5D_t1281789340* get__replaceStrings_12() const { return ____replaceStrings_12; }
	inline StringU5BU5D_t1281789340** get_address_of__replaceStrings_12() { return &____replaceStrings_12; }
	inline void set__replaceStrings_12(StringU5BU5D_t1281789340* value)
	{
		____replaceStrings_12 = value;
		Il2CppCodeGenWriteBarrier((&____replaceStrings_12), value);
	}

	inline static int32_t get_offset_of__inNestedIndex_13() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inNestedIndex_13)); }
	inline int32_t get__inNestedIndex_13() const { return ____inNestedIndex_13; }
	inline int32_t* get_address_of__inNestedIndex_13() { return &____inNestedIndex_13; }
	inline void set__inNestedIndex_13(int32_t value)
	{
		____inNestedIndex_13 = value;
	}

	inline static int32_t get_offset_of__inNestedSize_14() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inNestedSize_14)); }
	inline int32_t get__inNestedSize_14() const { return ____inNestedSize_14; }
	inline int32_t* get_address_of__inNestedSize_14() { return &____inNestedSize_14; }
	inline void set__inNestedSize_14(int32_t value)
	{
		____inNestedSize_14 = value;
	}

	inline static int32_t get_offset_of__inNestedString_15() { return static_cast<int32_t>(offsetof(Tokenizer_t545397970, ____inNestedString_15)); }
	inline String_t* get__inNestedString_15() const { return ____inNestedString_15; }
	inline String_t** get_address_of__inNestedString_15() { return &____inNestedString_15; }
	inline void set__inNestedString_15(String_t* value)
	{
		____inNestedString_15 = value;
		Il2CppCodeGenWriteBarrier((&____inNestedString_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZER_T545397970_H
#ifndef NAMEDPERMISSIONSET_T2915669112_H
#define NAMEDPERMISSIONSET_T2915669112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t2915669112  : public PermissionSet_t223948603
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_10;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_11;

public:
	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}

	inline static int32_t get_offset_of_description_11() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___description_11)); }
	inline String_t* get_description_11() const { return ___description_11; }
	inline String_t** get_address_of_description_11() { return &___description_11; }
	inline void set_description_11(String_t* value)
	{
		___description_11 = value;
		Il2CppCodeGenWriteBarrier((&___description_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEDPERMISSIONSET_T2915669112_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#define CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3236455365  : public SecurityAttribute_t4008260079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifndef ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#define ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageFilePermission
struct  IsolatedStorageFilePermission_t2861120981  : public IsolatedStoragePermission_t2996329588
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#ifndef ENVIRONMENTPERMISSIONATTRIBUTE_T4264641023_H
#define ENVIRONMENTPERMISSIONATTRIBUTE_T4264641023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAttribute
struct  EnvironmentPermissionAttribute_t4264641023  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.EnvironmentPermissionAttribute::read
	String_t* ___read_2;
	// System.String System.Security.Permissions.EnvironmentPermissionAttribute::write
	String_t* ___write_3;

public:
	inline static int32_t get_offset_of_read_2() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAttribute_t4264641023, ___read_2)); }
	inline String_t* get_read_2() const { return ___read_2; }
	inline String_t** get_address_of_read_2() { return &___read_2; }
	inline void set_read_2(String_t* value)
	{
		___read_2 = value;
		Il2CppCodeGenWriteBarrier((&___read_2), value);
	}

	inline static int32_t get_offset_of_write_3() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAttribute_t4264641023, ___write_3)); }
	inline String_t* get_write_3() const { return ___write_3; }
	inline String_t** get_address_of_write_3() { return &___write_3; }
	inline void set_write_3(String_t* value)
	{
		___write_3 = value;
		Il2CppCodeGenWriteBarrier((&___write_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSIONATTRIBUTE_T4264641023_H
#ifndef FILEIOPERMISSIONATTRIBUTE_T233397043_H
#define FILEIOPERMISSIONATTRIBUTE_T233397043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAttribute
struct  FileIOPermissionAttribute_t233397043  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.FileIOPermissionAttribute::append
	String_t* ___append_2;
	// System.String System.Security.Permissions.FileIOPermissionAttribute::path
	String_t* ___path_3;
	// System.String System.Security.Permissions.FileIOPermissionAttribute::read
	String_t* ___read_4;
	// System.String System.Security.Permissions.FileIOPermissionAttribute::write
	String_t* ___write_5;

public:
	inline static int32_t get_offset_of_append_2() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t233397043, ___append_2)); }
	inline String_t* get_append_2() const { return ___append_2; }
	inline String_t** get_address_of_append_2() { return &___append_2; }
	inline void set_append_2(String_t* value)
	{
		___append_2 = value;
		Il2CppCodeGenWriteBarrier((&___append_2), value);
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t233397043, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_read_4() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t233397043, ___read_4)); }
	inline String_t* get_read_4() const { return ___read_4; }
	inline String_t** get_address_of_read_4() { return &___read_4; }
	inline void set_read_4(String_t* value)
	{
		___read_4 = value;
		Il2CppCodeGenWriteBarrier((&___read_4), value);
	}

	inline static int32_t get_offset_of_write_5() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t233397043, ___write_5)); }
	inline String_t* get_write_5() const { return ___write_5; }
	inline String_t** get_address_of_write_5() { return &___write_5; }
	inline void set_write_5(String_t* value)
	{
		___write_5 = value;
		Il2CppCodeGenWriteBarrier((&___write_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSIONATTRIBUTE_T233397043_H
#ifndef HOSTPROTECTIONATTRIBUTE_T2197052142_H
#define HOSTPROTECTIONATTRIBUTE_T2197052142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionAttribute
struct  HostProtectionAttribute_t2197052142  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.Permissions.HostProtectionAttribute::_resources
	int32_t ____resources_2;

public:
	inline static int32_t get_offset_of__resources_2() { return static_cast<int32_t>(offsetof(HostProtectionAttribute_t2197052142, ____resources_2)); }
	inline int32_t get__resources_2() const { return ____resources_2; }
	inline int32_t* get_address_of__resources_2() { return &____resources_2; }
	inline void set__resources_2(int32_t value)
	{
		____resources_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONATTRIBUTE_T2197052142_H
#ifndef PERMISSIONSETATTRIBUTE_T2779865727_H
#define PERMISSIONSETATTRIBUTE_T2779865727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionSetAttribute
struct  PermissionSetAttribute_t2779865727  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.PermissionSetAttribute::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(PermissionSetAttribute_t2779865727, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSETATTRIBUTE_T2779865727_H
#ifndef REFLECTIONPERMISSIONATTRIBUTE_T4288147066_H
#define REFLECTIONPERMISSIONATTRIBUTE_T4288147066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionAttribute
struct  ReflectionPermissionAttribute_t4288147066  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermissionAttribute::flags
	int32_t ___flags_2;

public:
	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(ReflectionPermissionAttribute_t4288147066, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSIONATTRIBUTE_T4288147066_H
#ifndef REGISTRYPERMISSIONATTRIBUTE_T3967394599_H
#define REGISTRYPERMISSIONATTRIBUTE_T3967394599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAttribute
struct  RegistryPermissionAttribute_t3967394599  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.RegistryPermissionAttribute::create
	String_t* ___create_2;
	// System.String System.Security.Permissions.RegistryPermissionAttribute::read
	String_t* ___read_3;
	// System.String System.Security.Permissions.RegistryPermissionAttribute::write
	String_t* ___write_4;

public:
	inline static int32_t get_offset_of_create_2() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t3967394599, ___create_2)); }
	inline String_t* get_create_2() const { return ___create_2; }
	inline String_t** get_address_of_create_2() { return &___create_2; }
	inline void set_create_2(String_t* value)
	{
		___create_2 = value;
		Il2CppCodeGenWriteBarrier((&___create_2), value);
	}

	inline static int32_t get_offset_of_read_3() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t3967394599, ___read_3)); }
	inline String_t* get_read_3() const { return ___read_3; }
	inline String_t** get_address_of_read_3() { return &___read_3; }
	inline void set_read_3(String_t* value)
	{
		___read_3 = value;
		Il2CppCodeGenWriteBarrier((&___read_3), value);
	}

	inline static int32_t get_offset_of_write_4() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t3967394599, ___write_4)); }
	inline String_t* get_write_4() const { return ___write_4; }
	inline String_t** get_address_of_write_4() { return &___write_4; }
	inline void set_write_4(String_t* value)
	{
		___write_4 = value;
		Il2CppCodeGenWriteBarrier((&___write_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSIONATTRIBUTE_T3967394599_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#define SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t2256310021  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t2256310021, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifndef STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T2910499200_H
#define STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T2910499200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermissionAttribute
struct  StrongNameIdentityPermissionAttribute_t2910499200  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::name
	String_t* ___name_2;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::key
	String_t* ___key_3;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::version
	String_t* ___version_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t2910499200, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t2910499200, ___key_3)); }
	inline String_t* get_key_3() const { return ___key_3; }
	inline String_t** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(String_t* value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier((&___key_3), value);
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t2910499200, ___version_4)); }
	inline String_t* get_version_4() const { return ___version_4; }
	inline String_t** get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(String_t* value)
	{
		___version_4 = value;
		Il2CppCodeGenWriteBarrier((&___version_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T2910499200_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (NamedPermissionSet_t2915669112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1002[2] = 
{
	NamedPermissionSet_t2915669112::get_offset_of_name_10(),
	NamedPermissionSet_t2915669112::get_offset_of_description_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (PermissionBuilder_t1403083973), -1, sizeof(PermissionBuilder_t1403083973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1003[1] = 
{
	PermissionBuilder_t1403083973_StaticFields::get_offset_of_psNone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (PermissionSet_t223948603), -1, sizeof(PermissionSet_t223948603_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1004[10] = 
{
	0,
	0,
	PermissionSet_t223948603_StaticFields::get_offset_of_psUnrestricted_2(),
	PermissionSet_t223948603::get_offset_of_state_3(),
	PermissionSet_t223948603::get_offset_of_list_4(),
	PermissionSet_t223948603::get_offset_of__policyLevel_5(),
	PermissionSet_t223948603::get_offset_of__declsec_6(),
	PermissionSet_t223948603::get_offset_of__readOnly_7(),
	PermissionSet_t223948603::get_offset_of__ignored_8(),
	PermissionSet_t223948603_StaticFields::get_offset_of_action_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (PolicyLevelType_t244468749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1005[5] = 
{
	PolicyLevelType_t244468749::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (SecureString_t3041467854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1006[3] = 
{
	SecureString_t3041467854::get_offset_of_length_0(),
	SecureString_t3041467854::get_offset_of_disposed_1(),
	SecureString_t3041467854::get_offset_of_data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (SecurityElementType_t1479558943)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1007[4] = 
{
	SecurityElementType_t1479558943::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (SecurityElement_t1046076091), -1, sizeof(SecurityElement_t1046076091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1008[9] = 
{
	SecurityElement_t1046076091::get_offset_of_text_0(),
	SecurityElement_t1046076091::get_offset_of_tag_1(),
	SecurityElement_t1046076091::get_offset_of_attributes_2(),
	SecurityElement_t1046076091::get_offset_of_children_3(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (SecurityAttribute_t3566489056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1009[2] = 
{
	SecurityAttribute_t3566489056::get_offset_of__name_0(),
	SecurityAttribute_t3566489056::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (SecurityException_t975544473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1010[8] = 
{
	SecurityException_t975544473::get_offset_of_permissionState_17(),
	SecurityException_t975544473::get_offset_of_permissionType_18(),
	SecurityException_t975544473::get_offset_of__granted_19(),
	SecurityException_t975544473::get_offset_of__refused_20(),
	SecurityException_t975544473::get_offset_of__demanded_21(),
	SecurityException_t975544473::get_offset_of__firstperm_22(),
	SecurityException_t975544473::get_offset_of__method_23(),
	SecurityException_t975544473::get_offset_of__evidence_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (SecurityManager_t3383402582), -1, sizeof(SecurityManager_t3383402582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1011[4] = 
{
	SecurityManager_t3383402582_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__hierarchy_1(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__level_2(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__execution_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (SecurityZone_t1272287263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1012[7] = 
{
	SecurityZone_t1272287263::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (VerificationException_t1599351733), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (XmlSyntaxException_t2973594484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (AllMembershipCondition_t198137363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1015[1] = 
{
	AllMembershipCondition_t198137363::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (ApplicationTrust_t3270368423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1016[6] = 
{
	ApplicationTrust_t3270368423::get_offset_of__appid_0(),
	ApplicationTrust_t3270368423::get_offset_of__defaultPolicy_1(),
	ApplicationTrust_t3270368423::get_offset_of__xtranfo_2(),
	ApplicationTrust_t3270368423::get_offset_of__trustrun_3(),
	ApplicationTrust_t3270368423::get_offset_of__persist_4(),
	ApplicationTrust_t3270368423::get_offset_of_fullTrustAssemblies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (CodeConnectAccess_t1103527196), -1, sizeof(CodeConnectAccess_t1103527196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1017[6] = 
{
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_AnyScheme_0(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_DefaultPort_1(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginPort_2(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginScheme_3(),
	CodeConnectAccess_t1103527196::get_offset_of__scheme_4(),
	CodeConnectAccess_t1103527196::get_offset_of__port_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (CodeGroup_t3811807446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1018[5] = 
{
	CodeGroup_t3811807446::get_offset_of_m_policy_0(),
	CodeGroup_t3811807446::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t3811807446::get_offset_of_m_description_2(),
	CodeGroup_t3811807446::get_offset_of_m_name_3(),
	CodeGroup_t3811807446::get_offset_of_m_children_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (DefaultPolicies_t2520506789), -1, sizeof(DefaultPolicies_t2520506789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1019[12] = 
{
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fxVersion_0(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecmaKey_1(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecma_2(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinalKey_3(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinal_4(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fullTrust_5(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__localIntranet_6(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__internet_7(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__skipVerification_8(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__execution_9(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__nothing_10(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__everything_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (Key_t3006169375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1020[3] = 
{
	Key_t3006169375::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (Evidence_t2008144148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[3] = 
{
	Evidence_t2008144148::get_offset_of__locked_0(),
	Evidence_t2008144148::get_offset_of_hostEvidenceList_1(),
	Evidence_t2008144148::get_offset_of_assemblyEvidenceList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (EvidenceEnumerator_t1708166667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1022[3] = 
{
	EvidenceEnumerator_t1708166667::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1708166667::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1708166667::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (EvidenceBase_t778061133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (FileCodeGroup_t1720965944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[1] = 
{
	FileCodeGroup_t1720965944::get_offset_of_m_access_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (FirstMatchCodeGroup_t885469689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (GacInstalled_t3565883570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (Hash_t5925575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1027[2] = 
{
	Hash_t5925575::get_offset_of_assembly_0(),
	Hash_t5925575::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (MembershipConditionHelper_t2246572704), -1, sizeof(MembershipConditionHelper_t2246572704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1032[1] = 
{
	MembershipConditionHelper_t2246572704_StaticFields::get_offset_of_XmlTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (NetCodeGroup_t2217812384), -1, sizeof(NetCodeGroup_t2217812384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1033[4] = 
{
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AbsentOriginScheme_5(),
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AnyOtherOriginScheme_6(),
	NetCodeGroup_t2217812384::get_offset_of__rules_7(),
	NetCodeGroup_t2217812384::get_offset_of__hashcode_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (PermissionRequestEvidence_t59447972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1034[3] = 
{
	PermissionRequestEvidence_t59447972::get_offset_of_requested_0(),
	PermissionRequestEvidence_t59447972::get_offset_of_optional_1(),
	PermissionRequestEvidence_t59447972::get_offset_of_denied_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (PolicyException_t1520028310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (PolicyLevel_t2891196107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1036[8] = 
{
	PolicyLevel_t2891196107::get_offset_of_label_0(),
	PolicyLevel_t2891196107::get_offset_of_root_code_group_1(),
	PolicyLevel_t2891196107::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t2891196107::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t2891196107::get_offset_of__location_4(),
	PolicyLevel_t2891196107::get_offset_of__type_5(),
	PolicyLevel_t2891196107::get_offset_of_fullNames_6(),
	PolicyLevel_t2891196107::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (PolicyStatement_t3052133691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1037[2] = 
{
	PolicyStatement_t3052133691::get_offset_of_perms_0(),
	PolicyStatement_t3052133691::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (PolicyStatementAttribute_t1674167676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1038[5] = 
{
	PolicyStatementAttribute_t1674167676::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (Publisher_t2758056332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1039[1] = 
{
	Publisher_t2758056332::get_offset_of_m_cert_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (Site_t1075497104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1040[1] = 
{
	Site_t1075497104::get_offset_of_origin_site_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (StrongName_t3675724614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1041[3] = 
{
	StrongName_t3675724614::get_offset_of_publickey_0(),
	StrongName_t3675724614::get_offset_of_name_1(),
	StrongName_t3675724614::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (StrongNameMembershipCondition_t2614563360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1042[4] = 
{
	StrongNameMembershipCondition_t2614563360::get_offset_of_version_0(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_blob_1(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_name_2(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_assemblyVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (UnionCodeGroup_t3773268997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (Url_t207802215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1044[1] = 
{
	Url_t207802215::get_offset_of_origin_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (Zone_t2011285646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1045[1] = 
{
	Zone_t2011285646::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (ZoneMembershipCondition_t3195636716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1046[2] = 
{
	ZoneMembershipCondition_t3195636716::get_offset_of_version_0(),
	ZoneMembershipCondition_t3195636716::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (CodeAccessSecurityAttribute_t3236455365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (EnvironmentPermission_t1242010617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1048[3] = 
{
	EnvironmentPermission_t1242010617::get_offset_of__state_0(),
	EnvironmentPermission_t1242010617::get_offset_of_readList_1(),
	EnvironmentPermission_t1242010617::get_offset_of_writeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (EnvironmentPermissionAccess_t1745565475)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1049[5] = 
{
	EnvironmentPermissionAccess_t1745565475::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (EnvironmentPermissionAttribute_t4264641023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1050[2] = 
{
	EnvironmentPermissionAttribute_t4264641023::get_offset_of_read_2(),
	EnvironmentPermissionAttribute_t4264641023::get_offset_of_write_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (FileDialogPermission_t986095094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1051[1] = 
{
	FileDialogPermission_t986095094::get_offset_of__access_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (FileDialogPermissionAccess_t4172829844)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1052[5] = 
{
	FileDialogPermissionAccess_t4172829844::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (FileIOPermission_t3596906749), -1, sizeof(FileIOPermission_t3596906749_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1053[9] = 
{
	FileIOPermission_t3596906749_StaticFields::get_offset_of_BadPathNameCharacters_0(),
	FileIOPermission_t3596906749_StaticFields::get_offset_of_BadFileNameCharacters_1(),
	FileIOPermission_t3596906749::get_offset_of_m_Unrestricted_2(),
	FileIOPermission_t3596906749::get_offset_of_m_AllFilesAccess_3(),
	FileIOPermission_t3596906749::get_offset_of_m_AllLocalFilesAccess_4(),
	FileIOPermission_t3596906749::get_offset_of_readList_5(),
	FileIOPermission_t3596906749::get_offset_of_writeList_6(),
	FileIOPermission_t3596906749::get_offset_of_appendList_7(),
	FileIOPermission_t3596906749::get_offset_of_pathList_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (FileIOPermissionAccess_t1559273540)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1054[7] = 
{
	FileIOPermissionAccess_t1559273540::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (FileIOPermissionAttribute_t233397043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1055[4] = 
{
	FileIOPermissionAttribute_t233397043::get_offset_of_append_2(),
	FileIOPermissionAttribute_t233397043::get_offset_of_path_3(),
	FileIOPermissionAttribute_t233397043::get_offset_of_read_4(),
	FileIOPermissionAttribute_t233397043::get_offset_of_write_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (GacIdentityPermission_t2991335275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (HostProtectionAttribute_t2197052142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1057[1] = 
{
	HostProtectionAttribute_t2197052142::get_offset_of__resources_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (HostProtectionPermission_t3140009990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1058[1] = 
{
	HostProtectionPermission_t3140009990::get_offset_of__resources_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (HostProtectionResource_t3168622669)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1059[12] = 
{
	HostProtectionResource_t3168622669::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (IsolatedStorageContainment_t3203638662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1062[13] = 
{
	IsolatedStorageContainment_t3203638662::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (IsolatedStorageFilePermission_t2861120981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (IsolatedStoragePermission_t2996329588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1064[5] = 
{
	IsolatedStoragePermission_t2996329588::get_offset_of_m_userQuota_0(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_machineQuota_1(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_expirationDays_2(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_permanentData_3(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_allowed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (KeyContainerPermission_t1460699488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1065[2] = 
{
	KeyContainerPermission_t1460699488::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1460699488::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (KeyContainerPermissionAccessEntry_t3026022710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1066[6] = 
{
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (KeyContainerPermissionAccessEntryCollection_t4144114052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t4144114052::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t3641947072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t3641947072::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (KeyContainerPermissionFlags_t3864969297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1069[12] = 
{
	KeyContainerPermissionFlags_t3864969297::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (PermissionSetAttribute_t2779865727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1070[1] = 
{
	PermissionSetAttribute_t2779865727::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (PermissionState_t1178999876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1071[3] = 
{
	PermissionState_t1178999876::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (PublisherIdentityPermission_t594127488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[1] = 
{
	PublisherIdentityPermission_t594127488::get_offset_of_x509_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (ReflectionPermission_t2208099681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[1] = 
{
	ReflectionPermission_t2208099681::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (ReflectionPermissionAttribute_t4288147066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1074[1] = 
{
	ReflectionPermissionAttribute_t4288147066::get_offset_of_flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (ReflectionPermissionFlag_t4199904140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1075[7] = 
{
	ReflectionPermissionFlag_t4199904140::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (RegistryPermission_t4244934776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1076[4] = 
{
	RegistryPermission_t4244934776::get_offset_of__state_0(),
	RegistryPermission_t4244934776::get_offset_of_createList_1(),
	RegistryPermission_t4244934776::get_offset_of_readList_2(),
	RegistryPermission_t4244934776::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (RegistryPermissionAccess_t307445458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1077[6] = 
{
	RegistryPermissionAccess_t307445458::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (RegistryPermissionAttribute_t3967394599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1078[3] = 
{
	RegistryPermissionAttribute_t3967394599::get_offset_of_create_2(),
	RegistryPermissionAttribute_t3967394599::get_offset_of_read_3(),
	RegistryPermissionAttribute_t3967394599::get_offset_of_write_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (SecurityAction_t569814076)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1079[10] = 
{
	SecurityAction_t569814076::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (SecurityAttribute_t4008260079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1080[2] = 
{
	SecurityAttribute_t4008260079::get_offset_of_m_Action_0(),
	SecurityAttribute_t4008260079::get_offset_of_m_Unrestricted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (SecurityPermission_t2954997752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1081[1] = 
{
	SecurityPermission_t2954997752::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (SecurityPermissionAttribute_t2256310021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1082[1] = 
{
	SecurityPermissionAttribute_t2256310021::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (SecurityPermissionFlag_t3459270124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1083[17] = 
{
	SecurityPermissionFlag_t3459270124::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (SiteIdentityPermission_t4239769539), -1, sizeof(SiteIdentityPermission_t4239769539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1084[2] = 
{
	SiteIdentityPermission_t4239769539::get_offset_of__site_0(),
	SiteIdentityPermission_t4239769539_StaticFields::get_offset_of_valid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (StrongNameIdentityPermission_t2780499738), -1, sizeof(StrongNameIdentityPermission_t2780499738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1085[3] = 
{
	StrongNameIdentityPermission_t2780499738_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__state_1(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (SNIP_t4156255223)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1086[3] = 
{
	SNIP_t4156255223::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (StrongNameIdentityPermissionAttribute_t2910499200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1087[3] = 
{
	StrongNameIdentityPermissionAttribute_t2910499200::get_offset_of_name_2(),
	StrongNameIdentityPermissionAttribute_t2910499200::get_offset_of_key_3(),
	StrongNameIdentityPermissionAttribute_t2910499200::get_offset_of_version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (StrongNamePublicKeyBlob_t3355146440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1088[1] = 
{
	StrongNamePublicKeyBlob_t3355146440::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (UIPermission_t826475846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[2] = 
{
	UIPermission_t826475846::get_offset_of__window_0(),
	UIPermission_t826475846::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (UIPermissionClipboard_t4002838840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1090[4] = 
{
	UIPermissionClipboard_t4002838840::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (UIPermissionWindow_t985109583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1091[5] = 
{
	UIPermissionWindow_t985109583::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (UrlIdentityPermission_t48040392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1092[1] = 
{
	UrlIdentityPermission_t48040392::get_offset_of_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (ZoneIdentityPermission_t2250593031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1093[1] = 
{
	ZoneIdentityPermission_t2250593031::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (Parser_t281212148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[2] = 
{
	Parser_t281212148::get_offset_of__doc_0(),
	Parser_t281212148::get_offset_of__t_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (Tokenizer_t545397970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1095[16] = 
{
	Tokenizer_t545397970::get_offset_of_LineNo_0(),
	Tokenizer_t545397970::get_offset_of__inProcessingTag_1(),
	Tokenizer_t545397970::get_offset_of__inBytes_2(),
	Tokenizer_t545397970::get_offset_of__inChars_3(),
	Tokenizer_t545397970::get_offset_of__inString_4(),
	Tokenizer_t545397970::get_offset_of__inIndex_5(),
	Tokenizer_t545397970::get_offset_of__inSize_6(),
	Tokenizer_t545397970::get_offset_of__inSavedCharacter_7(),
	Tokenizer_t545397970::get_offset_of__inTokenSource_8(),
	Tokenizer_t545397970::get_offset_of__inTokenReader_9(),
	Tokenizer_t545397970::get_offset_of__maker_10(),
	Tokenizer_t545397970::get_offset_of__searchStrings_11(),
	Tokenizer_t545397970::get_offset_of__replaceStrings_12(),
	Tokenizer_t545397970::get_offset_of__inNestedIndex_13(),
	Tokenizer_t545397970::get_offset_of__inNestedSize_14(),
	Tokenizer_t545397970::get_offset_of__inNestedString_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (TokenSource_t3626512994)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1096[8] = 
{
	TokenSource_t3626512994::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (StringMaker_t2784115625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1097[6] = 
{
	StringMaker_t2784115625::get_offset_of_aStrings_0(),
	StringMaker_t2784115625::get_offset_of_cStringsMax_1(),
	StringMaker_t2784115625::get_offset_of_cStringsUsed_2(),
	StringMaker_t2784115625::get_offset_of__outStringBuilder_3(),
	StringMaker_t2784115625::get_offset_of__outChars_4(),
	StringMaker_t2784115625::get_offset_of__outIndex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (StreamTokenReader_t762740847), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1099[2] = 
{
	StreamTokenReader_t762740847::get_offset_of__in_0(),
	StreamTokenReader_t762740847::get_offset_of__numCharRead_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
