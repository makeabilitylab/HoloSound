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


// Mono.Math.BigInteger
struct BigInteger_t2902905090;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3064139578;
// Mono.Security.Interface.Alert
struct Alert_t1480305158;
// Mono.Security.Interface.CipherSuiteCode[]
struct CipherSuiteCodeU5BU5D_t3566916850;
// Mono.Security.Interface.ICertificateValidator
struct ICertificateValidator_t849923962;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t1375878923;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t2521872312;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3586970409;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Threading.ReaderWriterCount
struct ReaderWriterCount_t447210392;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T692745530_H
#define U3CMODULEU3E_T692745530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745530 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745530_H
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
#ifndef BIGINTEGER_T2902905090_H
#define BIGINTEGER_T2902905090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2902905090  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090, ___data_1)); }
	inline UInt32U5BU5D_t2770800703* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2770800703* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2902905090_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2770800703* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t386037858 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t2770800703* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t2770800703* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t386037858 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t386037858 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2902905090_H
#ifndef KERNEL_T1402667220_H
#define KERNEL_T1402667220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1402667220  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1402667220_H
#ifndef MODULUSRING_T596511505_H
#define MODULUSRING_T596511505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t596511505  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2902905090 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2902905090 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t596511505, ___mod_0)); }
	inline BigInteger_t2902905090 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2902905090 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2902905090 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t596511505, ___constant_1)); }
	inline BigInteger_t2902905090 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2902905090 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2902905090 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T596511505_H
#ifndef PRIMEGENERATORBASE_T446028867_H
#define PRIMEGENERATORBASE_T446028867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t446028867  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T446028867_H
#ifndef PRIMALITYTESTS_T1538473976_H
#define PRIMALITYTESTS_T1538473976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1538473976  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1538473976_H
#ifndef CRYPTOCONVERT_T610933157_H
#define CRYPTOCONVERT_T610933157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t610933157  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T610933157_H
#ifndef PKCS1_T1505584677_H
#define PKCS1_T1505584677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1505584677  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1505584677_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t4116647657* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t4116647657* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t4116647657* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t4116647657* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1505584677_H
#ifndef PKCS8_T696280613_H
#define PKCS8_T696280613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t696280613  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T696280613_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#define ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t862116836  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t4116647657* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t4116647657* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____salt_1)); }
	inline ByteU5BU5D_t4116647657* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t4116647657* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____data_3)); }
	inline ByteU5BU5D_t4116647657* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t4116647657* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#ifndef PRIVATEKEYINFO_T668027993_H
#define PRIVATEKEYINFO_T668027993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t668027993  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t4116647657* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t2718874744 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____key_2)); }
	inline ByteU5BU5D_t4116647657* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t4116647657* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____list_3)); }
	inline ArrayList_t2718874744 * get__list_3() const { return ____list_3; }
	inline ArrayList_t2718874744 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t2718874744 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T668027993_H
#ifndef CERTIFICATEVALIDATIONHELPER_T2276302545_H
#define CERTIFICATEVALIDATIONHELPER_T2276302545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.CertificateValidationHelper
struct  CertificateValidationHelper_t2276302545  : public RuntimeObject
{
public:

public:
};

struct CertificateValidationHelper_t2276302545_StaticFields
{
public:
	// System.Boolean Mono.Security.Interface.CertificateValidationHelper::noX509Chain
	bool ___noX509Chain_0;
	// System.Boolean Mono.Security.Interface.CertificateValidationHelper::supportsTrustAnchors
	bool ___supportsTrustAnchors_1;

public:
	inline static int32_t get_offset_of_noX509Chain_0() { return static_cast<int32_t>(offsetof(CertificateValidationHelper_t2276302545_StaticFields, ___noX509Chain_0)); }
	inline bool get_noX509Chain_0() const { return ___noX509Chain_0; }
	inline bool* get_address_of_noX509Chain_0() { return &___noX509Chain_0; }
	inline void set_noX509Chain_0(bool value)
	{
		___noX509Chain_0 = value;
	}

	inline static int32_t get_offset_of_supportsTrustAnchors_1() { return static_cast<int32_t>(offsetof(CertificateValidationHelper_t2276302545_StaticFields, ___supportsTrustAnchors_1)); }
	inline bool get_supportsTrustAnchors_1() const { return ___supportsTrustAnchors_1; }
	inline bool* get_address_of_supportsTrustAnchors_1() { return &___supportsTrustAnchors_1; }
	inline void set_supportsTrustAnchors_1(bool value)
	{
		___supportsTrustAnchors_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEVALIDATIONHELPER_T2276302545_H
#ifndef MONOTLSPROVIDER_T3152003291_H
#define MONOTLSPROVIDER_T3152003291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsProvider
struct  MonoTlsProvider_t3152003291  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSPROVIDER_T3152003291_H
#ifndef SR_T167583546_H
#define SR_T167583546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SR
struct  SR_t167583546  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T167583546_H
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
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef ERROR_T2882114465_H
#define ERROR_T2882114465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Error
struct  Error_t2882114465  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROR_T2882114465_H
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
#ifndef READERWRITERCOUNT_T447210392_H
#define READERWRITERCOUNT_T447210392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ReaderWriterCount
struct  ReaderWriterCount_t447210392  : public RuntimeObject
{
public:
	// System.Int64 System.Threading.ReaderWriterCount::lockID
	int64_t ___lockID_0;
	// System.Int32 System.Threading.ReaderWriterCount::readercount
	int32_t ___readercount_1;
	// System.Int32 System.Threading.ReaderWriterCount::writercount
	int32_t ___writercount_2;
	// System.Int32 System.Threading.ReaderWriterCount::upgradecount
	int32_t ___upgradecount_3;
	// System.Threading.ReaderWriterCount System.Threading.ReaderWriterCount::next
	ReaderWriterCount_t447210392 * ___next_4;

public:
	inline static int32_t get_offset_of_lockID_0() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t447210392, ___lockID_0)); }
	inline int64_t get_lockID_0() const { return ___lockID_0; }
	inline int64_t* get_address_of_lockID_0() { return &___lockID_0; }
	inline void set_lockID_0(int64_t value)
	{
		___lockID_0 = value;
	}

	inline static int32_t get_offset_of_readercount_1() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t447210392, ___readercount_1)); }
	inline int32_t get_readercount_1() const { return ___readercount_1; }
	inline int32_t* get_address_of_readercount_1() { return &___readercount_1; }
	inline void set_readercount_1(int32_t value)
	{
		___readercount_1 = value;
	}

	inline static int32_t get_offset_of_writercount_2() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t447210392, ___writercount_2)); }
	inline int32_t get_writercount_2() const { return ___writercount_2; }
	inline int32_t* get_address_of_writercount_2() { return &___writercount_2; }
	inline void set_writercount_2(int32_t value)
	{
		___writercount_2 = value;
	}

	inline static int32_t get_offset_of_upgradecount_3() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t447210392, ___upgradecount_3)); }
	inline int32_t get_upgradecount_3() const { return ___upgradecount_3; }
	inline int32_t* get_address_of_upgradecount_3() { return &___upgradecount_3; }
	inline void set_upgradecount_3(int32_t value)
	{
		___upgradecount_3 = value;
	}

	inline static int32_t get_offset_of_next_4() { return static_cast<int32_t>(offsetof(ReaderWriterCount_t447210392, ___next_4)); }
	inline ReaderWriterCount_t447210392 * get_next_4() const { return ___next_4; }
	inline ReaderWriterCount_t447210392 ** get_address_of_next_4() { return &___next_4; }
	inline void set_next_4(ReaderWriterCount_t447210392 * value)
	{
		___next_4 = value;
		Il2CppCodeGenWriteBarrier((&___next_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READERWRITERCOUNT_T447210392_H
#ifndef READERWRITERLOCKSLIM_T1938317233_H
#define READERWRITERLOCKSLIM_T1938317233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ReaderWriterLockSlim
struct  ReaderWriterLockSlim_t1938317233  : public RuntimeObject
{
public:
	// System.Boolean System.Threading.ReaderWriterLockSlim::fIsReentrant
	bool ___fIsReentrant_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock_1;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters_2;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters_3;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteUpgradeWaiters
	uint32_t ___numWriteUpgradeWaiters_4;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters_5;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fNoWaiters
	bool ___fNoWaiters_6;
	// System.Int32 System.Threading.ReaderWriterLockSlim::upgradeLockOwnerId
	int32_t ___upgradeLockOwnerId_7;
	// System.Int32 System.Threading.ReaderWriterLockSlim::writeLockOwnerId
	int32_t ___writeLockOwnerId_8;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t777845177 * ___writeEvent_9;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t777845177 * ___readEvent_10;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t777845177 * ___upgradeEvent_11;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::waitUpgradeEvent
	EventWaitHandle_t777845177 * ___waitUpgradeEvent_12;
	// System.Int64 System.Threading.ReaderWriterLockSlim::lockID
	int64_t ___lockID_14;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fUpgradeThreadHoldingRead
	bool ___fUpgradeThreadHoldingRead_16;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::owners
	uint32_t ___owners_17;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fDisposed
	bool ___fDisposed_18;

public:
	inline static int32_t get_offset_of_fIsReentrant_0() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___fIsReentrant_0)); }
	inline bool get_fIsReentrant_0() const { return ___fIsReentrant_0; }
	inline bool* get_address_of_fIsReentrant_0() { return &___fIsReentrant_0; }
	inline void set_fIsReentrant_0(bool value)
	{
		___fIsReentrant_0 = value;
	}

	inline static int32_t get_offset_of_myLock_1() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___myLock_1)); }
	inline int32_t get_myLock_1() const { return ___myLock_1; }
	inline int32_t* get_address_of_myLock_1() { return &___myLock_1; }
	inline void set_myLock_1(int32_t value)
	{
		___myLock_1 = value;
	}

	inline static int32_t get_offset_of_numWriteWaiters_2() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___numWriteWaiters_2)); }
	inline uint32_t get_numWriteWaiters_2() const { return ___numWriteWaiters_2; }
	inline uint32_t* get_address_of_numWriteWaiters_2() { return &___numWriteWaiters_2; }
	inline void set_numWriteWaiters_2(uint32_t value)
	{
		___numWriteWaiters_2 = value;
	}

	inline static int32_t get_offset_of_numReadWaiters_3() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___numReadWaiters_3)); }
	inline uint32_t get_numReadWaiters_3() const { return ___numReadWaiters_3; }
	inline uint32_t* get_address_of_numReadWaiters_3() { return &___numReadWaiters_3; }
	inline void set_numReadWaiters_3(uint32_t value)
	{
		___numReadWaiters_3 = value;
	}

	inline static int32_t get_offset_of_numWriteUpgradeWaiters_4() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___numWriteUpgradeWaiters_4)); }
	inline uint32_t get_numWriteUpgradeWaiters_4() const { return ___numWriteUpgradeWaiters_4; }
	inline uint32_t* get_address_of_numWriteUpgradeWaiters_4() { return &___numWriteUpgradeWaiters_4; }
	inline void set_numWriteUpgradeWaiters_4(uint32_t value)
	{
		___numWriteUpgradeWaiters_4 = value;
	}

	inline static int32_t get_offset_of_numUpgradeWaiters_5() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___numUpgradeWaiters_5)); }
	inline uint32_t get_numUpgradeWaiters_5() const { return ___numUpgradeWaiters_5; }
	inline uint32_t* get_address_of_numUpgradeWaiters_5() { return &___numUpgradeWaiters_5; }
	inline void set_numUpgradeWaiters_5(uint32_t value)
	{
		___numUpgradeWaiters_5 = value;
	}

	inline static int32_t get_offset_of_fNoWaiters_6() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___fNoWaiters_6)); }
	inline bool get_fNoWaiters_6() const { return ___fNoWaiters_6; }
	inline bool* get_address_of_fNoWaiters_6() { return &___fNoWaiters_6; }
	inline void set_fNoWaiters_6(bool value)
	{
		___fNoWaiters_6 = value;
	}

	inline static int32_t get_offset_of_upgradeLockOwnerId_7() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___upgradeLockOwnerId_7)); }
	inline int32_t get_upgradeLockOwnerId_7() const { return ___upgradeLockOwnerId_7; }
	inline int32_t* get_address_of_upgradeLockOwnerId_7() { return &___upgradeLockOwnerId_7; }
	inline void set_upgradeLockOwnerId_7(int32_t value)
	{
		___upgradeLockOwnerId_7 = value;
	}

	inline static int32_t get_offset_of_writeLockOwnerId_8() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___writeLockOwnerId_8)); }
	inline int32_t get_writeLockOwnerId_8() const { return ___writeLockOwnerId_8; }
	inline int32_t* get_address_of_writeLockOwnerId_8() { return &___writeLockOwnerId_8; }
	inline void set_writeLockOwnerId_8(int32_t value)
	{
		___writeLockOwnerId_8 = value;
	}

	inline static int32_t get_offset_of_writeEvent_9() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___writeEvent_9)); }
	inline EventWaitHandle_t777845177 * get_writeEvent_9() const { return ___writeEvent_9; }
	inline EventWaitHandle_t777845177 ** get_address_of_writeEvent_9() { return &___writeEvent_9; }
	inline void set_writeEvent_9(EventWaitHandle_t777845177 * value)
	{
		___writeEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___writeEvent_9), value);
	}

	inline static int32_t get_offset_of_readEvent_10() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___readEvent_10)); }
	inline EventWaitHandle_t777845177 * get_readEvent_10() const { return ___readEvent_10; }
	inline EventWaitHandle_t777845177 ** get_address_of_readEvent_10() { return &___readEvent_10; }
	inline void set_readEvent_10(EventWaitHandle_t777845177 * value)
	{
		___readEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___readEvent_10), value);
	}

	inline static int32_t get_offset_of_upgradeEvent_11() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___upgradeEvent_11)); }
	inline EventWaitHandle_t777845177 * get_upgradeEvent_11() const { return ___upgradeEvent_11; }
	inline EventWaitHandle_t777845177 ** get_address_of_upgradeEvent_11() { return &___upgradeEvent_11; }
	inline void set_upgradeEvent_11(EventWaitHandle_t777845177 * value)
	{
		___upgradeEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___upgradeEvent_11), value);
	}

	inline static int32_t get_offset_of_waitUpgradeEvent_12() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___waitUpgradeEvent_12)); }
	inline EventWaitHandle_t777845177 * get_waitUpgradeEvent_12() const { return ___waitUpgradeEvent_12; }
	inline EventWaitHandle_t777845177 ** get_address_of_waitUpgradeEvent_12() { return &___waitUpgradeEvent_12; }
	inline void set_waitUpgradeEvent_12(EventWaitHandle_t777845177 * value)
	{
		___waitUpgradeEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___waitUpgradeEvent_12), value);
	}

	inline static int32_t get_offset_of_lockID_14() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___lockID_14)); }
	inline int64_t get_lockID_14() const { return ___lockID_14; }
	inline int64_t* get_address_of_lockID_14() { return &___lockID_14; }
	inline void set_lockID_14(int64_t value)
	{
		___lockID_14 = value;
	}

	inline static int32_t get_offset_of_fUpgradeThreadHoldingRead_16() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___fUpgradeThreadHoldingRead_16)); }
	inline bool get_fUpgradeThreadHoldingRead_16() const { return ___fUpgradeThreadHoldingRead_16; }
	inline bool* get_address_of_fUpgradeThreadHoldingRead_16() { return &___fUpgradeThreadHoldingRead_16; }
	inline void set_fUpgradeThreadHoldingRead_16(bool value)
	{
		___fUpgradeThreadHoldingRead_16 = value;
	}

	inline static int32_t get_offset_of_owners_17() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___owners_17)); }
	inline uint32_t get_owners_17() const { return ___owners_17; }
	inline uint32_t* get_address_of_owners_17() { return &___owners_17; }
	inline void set_owners_17(uint32_t value)
	{
		___owners_17 = value;
	}

	inline static int32_t get_offset_of_fDisposed_18() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233, ___fDisposed_18)); }
	inline bool get_fDisposed_18() const { return ___fDisposed_18; }
	inline bool* get_address_of_fDisposed_18() { return &___fDisposed_18; }
	inline void set_fDisposed_18(bool value)
	{
		___fDisposed_18 = value;
	}
};

struct ReaderWriterLockSlim_t1938317233_StaticFields
{
public:
	// System.Int64 System.Threading.ReaderWriterLockSlim::s_nextLockID
	int64_t ___s_nextLockID_13;

public:
	inline static int32_t get_offset_of_s_nextLockID_13() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233_StaticFields, ___s_nextLockID_13)); }
	inline int64_t get_s_nextLockID_13() const { return ___s_nextLockID_13; }
	inline int64_t* get_address_of_s_nextLockID_13() { return &___s_nextLockID_13; }
	inline void set_s_nextLockID_13(int64_t value)
	{
		___s_nextLockID_13 = value;
	}
};

struct ReaderWriterLockSlim_t1938317233_ThreadStaticFields
{
public:
	// System.Threading.ReaderWriterCount System.Threading.ReaderWriterLockSlim::t_rwc
	ReaderWriterCount_t447210392 * ___t_rwc_15;

public:
	inline static int32_t get_offset_of_t_rwc_15() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t1938317233_ThreadStaticFields, ___t_rwc_15)); }
	inline ReaderWriterCount_t447210392 * get_t_rwc_15() const { return ___t_rwc_15; }
	inline ReaderWriterCount_t447210392 ** get_address_of_t_rwc_15() { return &___t_rwc_15; }
	inline void set_t_rwc_15(ReaderWriterCount_t447210392 * value)
	{
		___t_rwc_15 = value;
		Il2CppCodeGenWriteBarrier((&___t_rwc_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READERWRITERLOCKSLIM_T1938317233_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1548194904_H
#define __STATICARRAYINITTYPESIZEU3D10_T1548194904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1548194904 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1548194904__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1548194904_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563373 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563373__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifndef __STATICARRAYINITTYPESIZEU3D20_T1548391513_H
#define __STATICARRAYINITTYPESIZEU3D20_T1548391513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_t1548391513 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t1548391513__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T1548391513_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885684 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885684__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T3825993976_H
#define __STATICARRAYINITTYPESIZEU3D3132_T3825993976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t3825993976 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t3825993976__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T3825993976_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125392 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125392__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T1904228656_H
#define __STATICARRAYINITTYPESIZEU3D48_T1904228656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t1904228656 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t1904228656__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T1904228656_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3517497837_H
#define __STATICARRAYINITTYPESIZEU3D64_T3517497837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3517497837 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t3517497837__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3517497837_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278900__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090509_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2996090509  : public PrimeGeneratorBase_t446028867
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090509_H
#ifndef TLSEXCEPTION_T3204531704_H
#define TLSEXCEPTION_T3204531704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.TlsException
struct  TlsException_t3204531704  : public Exception_t
{
public:
	// Mono.Security.Interface.Alert Mono.Security.Interface.TlsException::alert
	Alert_t1480305158 * ___alert_17;

public:
	inline static int32_t get_offset_of_alert_17() { return static_cast<int32_t>(offsetof(TlsException_t3204531704, ___alert_17)); }
	inline Alert_t1480305158 * get_alert_17() const { return ___alert_17; }
	inline Alert_t1480305158 ** get_address_of_alert_17() { return &___alert_17; }
	inline void set_alert_17(Alert_t1480305158 * value)
	{
		___alert_17 = value;
		Il2CppCodeGenWriteBarrier((&___alert_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSEXCEPTION_T3204531704_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
#ifndef TIMEOUTTRACKER_T1693374902_H
#define TIMEOUTTRACKER_T1693374902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ReaderWriterLockSlim/TimeoutTracker
struct  TimeoutTracker_t1693374902 
{
public:
	// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::m_total
	int32_t ___m_total_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::m_start
	int32_t ___m_start_1;

public:
	inline static int32_t get_offset_of_m_total_0() { return static_cast<int32_t>(offsetof(TimeoutTracker_t1693374902, ___m_total_0)); }
	inline int32_t get_m_total_0() const { return ___m_total_0; }
	inline int32_t* get_address_of_m_total_0() { return &___m_total_0; }
	inline void set_m_total_0(int32_t value)
	{
		___m_total_0 = value;
	}

	inline static int32_t get_offset_of_m_start_1() { return static_cast<int32_t>(offsetof(TimeoutTracker_t1693374902, ___m_start_1)); }
	inline int32_t get_m_start_1() const { return ___m_start_1; }
	inline int32_t* get_address_of_m_start_1() { return &___m_start_1; }
	inline void set_m_start_1(int32_t value)
	{
		___m_start_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTTRACKER_T1693374902_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t3517563373  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t1904228656  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_t1548194904  ___56DFA5053B3131883637F53219E7D88CCEF35949_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278900  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_t3825993976  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___736D39815215889F11249D9958F6ED12D37B9F57_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___86F4F563FA2C61798AE6238D789139739428463A_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t1548391513  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___E75835D001C843F156FBA01B001DFE1B8029AC17_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_t1548194904  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23;

public:
	inline static int32_t get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() const { return ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return &___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline void set_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0 = value;
	}

	inline static int32_t get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() const { return ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return &___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline void set_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_2)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_2; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_2; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_2 = value;
	}

	inline static int32_t get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3() const { return ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3() { return &___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3; }
	inline void set_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3 = value;
	}

	inline static int32_t get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373  get_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4() const { return ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373 * get_address_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4() { return &___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4; }
	inline void set_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4(__StaticArrayInitTypeSizeU3D14_t3517563373  value)
	{
		___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4 = value;
	}

	inline static int32_t get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5() const { return ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5() { return &___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5; }
	inline void set_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5 = value;
	}

	inline static int32_t get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6() const { return ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6() { return &___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6; }
	inline void set_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6 = value;
	}

	inline static int32_t get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7)); }
	inline __StaticArrayInitTypeSizeU3D48_t1904228656  get_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7() const { return ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7; }
	inline __StaticArrayInitTypeSizeU3D48_t1904228656 * get_address_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7() { return &___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7; }
	inline void set_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7(__StaticArrayInitTypeSizeU3D48_t1904228656  value)
	{
		___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7 = value;
	}

	inline static int32_t get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___56DFA5053B3131883637F53219E7D88CCEF35949_8)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904  get_U356DFA5053B3131883637F53219E7D88CCEF35949_8() const { return ___56DFA5053B3131883637F53219E7D88CCEF35949_8; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904 * get_address_of_U356DFA5053B3131883637F53219E7D88CCEF35949_8() { return &___56DFA5053B3131883637F53219E7D88CCEF35949_8; }
	inline void set_U356DFA5053B3131883637F53219E7D88CCEF35949_8(__StaticArrayInitTypeSizeU3D10_t1548194904  value)
	{
		___56DFA5053B3131883637F53219E7D88CCEF35949_8 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9(__StaticArrayInitTypeSizeU3D9_t3218278900  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9 = value;
	}

	inline static int32_t get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10)); }
	inline __StaticArrayInitTypeSizeU3D3132_t3825993976  get_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10() const { return ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10; }
	inline __StaticArrayInitTypeSizeU3D3132_t3825993976 * get_address_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10() { return &___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10; }
	inline void set_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10(__StaticArrayInitTypeSizeU3D3132_t3825993976  value)
	{
		___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10 = value;
	}

	inline static int32_t get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___736D39815215889F11249D9958F6ED12D37B9F57_11)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U3736D39815215889F11249D9958F6ED12D37B9F57_11() const { return ___736D39815215889F11249D9958F6ED12D37B9F57_11; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U3736D39815215889F11249D9958F6ED12D37B9F57_11() { return &___736D39815215889F11249D9958F6ED12D37B9F57_11; }
	inline void set_U3736D39815215889F11249D9958F6ED12D37B9F57_11(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___736D39815215889F11249D9958F6ED12D37B9F57_11 = value;
	}

	inline static int32_t get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___86F4F563FA2C61798AE6238D789139739428463A_12)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U386F4F563FA2C61798AE6238D789139739428463A_12() const { return ___86F4F563FA2C61798AE6238D789139739428463A_12; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U386F4F563FA2C61798AE6238D789139739428463A_12() { return &___86F4F563FA2C61798AE6238D789139739428463A_12; }
	inline void set_U386F4F563FA2C61798AE6238D789139739428463A_12(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___86F4F563FA2C61798AE6238D789139739428463A_12 = value;
	}

	inline static int32_t get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13() const { return ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13() { return &___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13; }
	inline void set_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13 = value;
	}

	inline static int32_t get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14() const { return ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14() { return &___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14; }
	inline void set_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14 = value;
	}

	inline static int32_t get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15() const { return ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15() { return &___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15; }
	inline void set_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15 = value;
	}

	inline static int32_t get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___A323DB0813C4D072957BA6FDA79D9776674CD06B_16)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_A323DB0813C4D072957BA6FDA79D9776674CD06B_16() const { return ___A323DB0813C4D072957BA6FDA79D9776674CD06B_16; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_16() { return &___A323DB0813C4D072957BA6FDA79D9776674CD06B_16; }
	inline void set_A323DB0813C4D072957BA6FDA79D9776674CD06B_16(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___A323DB0813C4D072957BA6FDA79D9776674CD06B_16 = value;
	}

	inline static int32_t get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17)); }
	inline __StaticArrayInitTypeSizeU3D20_t1548391513  get_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17() const { return ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17; }
	inline __StaticArrayInitTypeSizeU3D20_t1548391513 * get_address_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17() { return &___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17; }
	inline void set_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17(__StaticArrayInitTypeSizeU3D20_t1548391513  value)
	{
		___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17 = value;
	}

	inline static int32_t get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18() const { return ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18() { return &___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18; }
	inline void set_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18 = value;
	}

	inline static int32_t get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19() const { return ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19() { return &___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19; }
	inline void set_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19 = value;
	}

	inline static int32_t get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20() const { return ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20() { return &___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20; }
	inline void set_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20 = value;
	}

	inline static int32_t get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___E75835D001C843F156FBA01B001DFE1B8029AC17_21)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_E75835D001C843F156FBA01B001DFE1B8029AC17_21() const { return ___E75835D001C843F156FBA01B001DFE1B8029AC17_21; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_E75835D001C843F156FBA01B001DFE1B8029AC17_21() { return &___E75835D001C843F156FBA01B001DFE1B8029AC17_21; }
	inline void set_E75835D001C843F156FBA01B001DFE1B8029AC17_21(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___E75835D001C843F156FBA01B001DFE1B8029AC17_21 = value;
	}

	inline static int32_t get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904  get_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22() const { return ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904 * get_address_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22() { return &___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22; }
	inline void set_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22(__StaticArrayInitTypeSizeU3D10_t1548194904  value)
	{
		___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22 = value;
	}

	inline static int32_t get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23() const { return ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23() { return &___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23; }
	inline void set_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef SIGN_T3338384039_H
#define SIGN_T3338384039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3338384039 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sign_t3338384039, ___value___2)); }
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
#endif // SIGN_T3338384039_H
#ifndef CONFIDENCEFACTOR_T2516000286_H
#define CONFIDENCEFACTOR_T2516000286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2516000286 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2516000286, ___value___2)); }
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
#endif // CONFIDENCEFACTOR_T2516000286_H
#ifndef RSAMANAGED_T1757093820_H
#define RSAMANAGED_T1757093820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1757093820  : public RSA_t2385438082
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2902905090 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2902905090 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2902905090 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2902905090 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2902905090 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2902905090 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2902905090 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2902905090 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3064139578 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___d_6)); }
	inline BigInteger_t2902905090 * get_d_6() const { return ___d_6; }
	inline BigInteger_t2902905090 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t2902905090 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___p_7)); }
	inline BigInteger_t2902905090 * get_p_7() const { return ___p_7; }
	inline BigInteger_t2902905090 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t2902905090 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___q_8)); }
	inline BigInteger_t2902905090 * get_q_8() const { return ___q_8; }
	inline BigInteger_t2902905090 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t2902905090 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___dp_9)); }
	inline BigInteger_t2902905090 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t2902905090 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t2902905090 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___dq_10)); }
	inline BigInteger_t2902905090 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t2902905090 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t2902905090 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___qInv_11)); }
	inline BigInteger_t2902905090 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t2902905090 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t2902905090 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___n_12)); }
	inline BigInteger_t2902905090 * get_n_12() const { return ___n_12; }
	inline BigInteger_t2902905090 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t2902905090 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___e_13)); }
	inline BigInteger_t2902905090 * get_e_13() const { return ___e_13; }
	inline BigInteger_t2902905090 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t2902905090 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3064139578 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3064139578 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3064139578 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1757093820_H
#ifndef CIPHERSUITECODE_T732562211_H
#define CIPHERSUITECODE_T732562211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.CipherSuiteCode
struct  CipherSuiteCode_t732562211 
{
public:
	// System.UInt16 Mono.Security.Interface.CipherSuiteCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherSuiteCode_t732562211, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITECODE_T732562211_H
#ifndef MONOSSLPOLICYERRORS_T2590217945_H
#define MONOSSLPOLICYERRORS_T2590217945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoSslPolicyErrors
struct  MonoSslPolicyErrors_t2590217945 
{
public:
	// System.Int32 Mono.Security.Interface.MonoSslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoSslPolicyErrors_t2590217945, ___value___2)); }
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
#endif // MONOSSLPOLICYERRORS_T2590217945_H
#ifndef TLSPROTOCOLS_T3756552591_H
#define TLSPROTOCOLS_T3756552591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.TlsProtocols
struct  TlsProtocols_t3756552591 
{
public:
	// System.Int32 Mono.Security.Interface.TlsProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TlsProtocols_t3756552591, ___value___2)); }
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
#endif // TLSPROTOCOLS_T3756552591_H
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
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___2)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___2)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef LOCKRECURSIONPOLICY_T4188737255_H
#define LOCKRECURSIONPOLICY_T4188737255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LockRecursionPolicy
struct  LockRecursionPolicy_t4188737255 
{
public:
	// System.Int32 System.Threading.LockRecursionPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LockRecursionPolicy_t4188737255, ___value___2)); }
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
#endif // LOCKRECURSIONPOLICY_T4188737255_H
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
#ifndef MONOTLSCONNECTIONINFO_T1391984550_H
#define MONOTLSCONNECTIONINFO_T1391984550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsConnectionInfo
struct  MonoTlsConnectionInfo_t1391984550  : public RuntimeObject
{
public:
	// Mono.Security.Interface.CipherSuiteCode Mono.Security.Interface.MonoTlsConnectionInfo::<CipherSuiteCode>k__BackingField
	uint16_t ___U3CCipherSuiteCodeU3Ek__BackingField_0;
	// Mono.Security.Interface.TlsProtocols Mono.Security.Interface.MonoTlsConnectionInfo::<ProtocolVersion>k__BackingField
	int32_t ___U3CProtocolVersionU3Ek__BackingField_1;
	// System.String Mono.Security.Interface.MonoTlsConnectionInfo::<PeerDomainName>k__BackingField
	String_t* ___U3CPeerDomainNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCipherSuiteCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CCipherSuiteCodeU3Ek__BackingField_0)); }
	inline uint16_t get_U3CCipherSuiteCodeU3Ek__BackingField_0() const { return ___U3CCipherSuiteCodeU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CCipherSuiteCodeU3Ek__BackingField_0() { return &___U3CCipherSuiteCodeU3Ek__BackingField_0; }
	inline void set_U3CCipherSuiteCodeU3Ek__BackingField_0(uint16_t value)
	{
		___U3CCipherSuiteCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CProtocolVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CProtocolVersionU3Ek__BackingField_1)); }
	inline int32_t get_U3CProtocolVersionU3Ek__BackingField_1() const { return ___U3CProtocolVersionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CProtocolVersionU3Ek__BackingField_1() { return &___U3CProtocolVersionU3Ek__BackingField_1; }
	inline void set_U3CProtocolVersionU3Ek__BackingField_1(int32_t value)
	{
		___U3CProtocolVersionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPeerDomainNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CPeerDomainNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPeerDomainNameU3Ek__BackingField_2() const { return ___U3CPeerDomainNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPeerDomainNameU3Ek__BackingField_2() { return &___U3CPeerDomainNameU3Ek__BackingField_2; }
	inline void set_U3CPeerDomainNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPeerDomainNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPeerDomainNameU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSCONNECTIONINFO_T1391984550_H
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
#ifndef NULLABLE_1_T1184147377_H
#define NULLABLE_1_T1184147377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Mono.Security.Interface.TlsProtocols>
struct  Nullable_1_t1184147377 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1184147377, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1184147377, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1184147377_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_2)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef PRIMALITYTEST_T1539325944_H
#define PRIMALITYTEST_T1539325944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1539325944  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1539325944_H
#ifndef KEYGENERATEDEVENTHANDLER_T3064139578_H
#define KEYGENERATEDEVENTHANDLER_T3064139578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3064139578  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3064139578_H
#ifndef MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#define MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct  MonoLocalCertificateSelectionCallback_t1375878923  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#ifndef MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#define MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct  MonoRemoteCertificateValidationCallback_t2521872312  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#ifndef MONOTLSSETTINGS_T3666008581_H
#define MONOTLSSETTINGS_T3666008581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsSettings
struct  MonoTlsSettings_t3666008581  : public RuntimeObject
{
public:
	// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::<RemoteCertificateValidationCallback>k__BackingField
	MonoRemoteCertificateValidationCallback_t2521872312 * ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
	// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::<ClientCertificateSelectionCallback>k__BackingField
	MonoLocalCertificateSelectionCallback_t1375878923 * ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::<CertificateValidationTime>k__BackingField
	Nullable_1_t1166124571  ___U3CCertificateValidationTimeU3Ek__BackingField_2;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::<TrustAnchors>k__BackingField
	X509CertificateCollection_t3399372417 * ___U3CTrustAnchorsU3Ek__BackingField_3;
	// System.Object Mono.Security.Interface.MonoTlsSettings::<UserSettings>k__BackingField
	RuntimeObject * ___U3CUserSettingsU3Ek__BackingField_4;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<CertificateSearchPaths>k__BackingField
	StringU5BU5D_t1281789340* ___U3CCertificateSearchPathsU3Ek__BackingField_5;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<SendCloseNotify>k__BackingField
	bool ___U3CSendCloseNotifyU3Ek__BackingField_6;
	// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::<EnabledProtocols>k__BackingField
	Nullable_1_t1184147377  ___U3CEnabledProtocolsU3Ek__BackingField_7;
	// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::<EnabledCiphers>k__BackingField
	CipherSuiteCodeU5BU5D_t3566916850* ___U3CEnabledCiphersU3Ek__BackingField_8;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::cloned
	bool ___cloned_9;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertName
	bool ___checkCertName_10;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_11;
	// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::useServicePointManagerCallback
	Nullable_1_t1819850047  ___useServicePointManagerCallback_12;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::skipSystemValidators
	bool ___skipSystemValidators_13;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::callbackNeedsChain
	bool ___callbackNeedsChain_14;
	// Mono.Security.Interface.ICertificateValidator Mono.Security.Interface.MonoTlsSettings::certificateValidator
	RuntimeObject* ___certificateValidator_15;

public:
	inline static int32_t get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0)); }
	inline MonoRemoteCertificateValidationCallback_t2521872312 * get_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() const { return ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0; }
	inline MonoRemoteCertificateValidationCallback_t2521872312 ** get_address_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() { return &___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0; }
	inline void set_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0(MonoRemoteCertificateValidationCallback_t2521872312 * value)
	{
		___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1)); }
	inline MonoLocalCertificateSelectionCallback_t1375878923 * get_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() const { return ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1; }
	inline MonoLocalCertificateSelectionCallback_t1375878923 ** get_address_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() { return &___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1; }
	inline void set_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1(MonoLocalCertificateSelectionCallback_t1375878923 * value)
	{
		___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CCertificateValidationTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CCertificateValidationTimeU3Ek__BackingField_2)); }
	inline Nullable_1_t1166124571  get_U3CCertificateValidationTimeU3Ek__BackingField_2() const { return ___U3CCertificateValidationTimeU3Ek__BackingField_2; }
	inline Nullable_1_t1166124571 * get_address_of_U3CCertificateValidationTimeU3Ek__BackingField_2() { return &___U3CCertificateValidationTimeU3Ek__BackingField_2; }
	inline void set_U3CCertificateValidationTimeU3Ek__BackingField_2(Nullable_1_t1166124571  value)
	{
		___U3CCertificateValidationTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTrustAnchorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CTrustAnchorsU3Ek__BackingField_3)); }
	inline X509CertificateCollection_t3399372417 * get_U3CTrustAnchorsU3Ek__BackingField_3() const { return ___U3CTrustAnchorsU3Ek__BackingField_3; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_U3CTrustAnchorsU3Ek__BackingField_3() { return &___U3CTrustAnchorsU3Ek__BackingField_3; }
	inline void set_U3CTrustAnchorsU3Ek__BackingField_3(X509CertificateCollection_t3399372417 * value)
	{
		___U3CTrustAnchorsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrustAnchorsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUserSettingsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CUserSettingsU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CUserSettingsU3Ek__BackingField_4() const { return ___U3CUserSettingsU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CUserSettingsU3Ek__BackingField_4() { return &___U3CUserSettingsU3Ek__BackingField_4; }
	inline void set_U3CUserSettingsU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CUserSettingsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserSettingsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CCertificateSearchPathsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CCertificateSearchPathsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1281789340* get_U3CCertificateSearchPathsU3Ek__BackingField_5() const { return ___U3CCertificateSearchPathsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CCertificateSearchPathsU3Ek__BackingField_5() { return &___U3CCertificateSearchPathsU3Ek__BackingField_5; }
	inline void set_U3CCertificateSearchPathsU3Ek__BackingField_5(StringU5BU5D_t1281789340* value)
	{
		___U3CCertificateSearchPathsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCertificateSearchPathsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CSendCloseNotifyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CSendCloseNotifyU3Ek__BackingField_6)); }
	inline bool get_U3CSendCloseNotifyU3Ek__BackingField_6() const { return ___U3CSendCloseNotifyU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSendCloseNotifyU3Ek__BackingField_6() { return &___U3CSendCloseNotifyU3Ek__BackingField_6; }
	inline void set_U3CSendCloseNotifyU3Ek__BackingField_6(bool value)
	{
		___U3CSendCloseNotifyU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledProtocolsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CEnabledProtocolsU3Ek__BackingField_7)); }
	inline Nullable_1_t1184147377  get_U3CEnabledProtocolsU3Ek__BackingField_7() const { return ___U3CEnabledProtocolsU3Ek__BackingField_7; }
	inline Nullable_1_t1184147377 * get_address_of_U3CEnabledProtocolsU3Ek__BackingField_7() { return &___U3CEnabledProtocolsU3Ek__BackingField_7; }
	inline void set_U3CEnabledProtocolsU3Ek__BackingField_7(Nullable_1_t1184147377  value)
	{
		___U3CEnabledProtocolsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledCiphersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CEnabledCiphersU3Ek__BackingField_8)); }
	inline CipherSuiteCodeU5BU5D_t3566916850* get_U3CEnabledCiphersU3Ek__BackingField_8() const { return ___U3CEnabledCiphersU3Ek__BackingField_8; }
	inline CipherSuiteCodeU5BU5D_t3566916850** get_address_of_U3CEnabledCiphersU3Ek__BackingField_8() { return &___U3CEnabledCiphersU3Ek__BackingField_8; }
	inline void set_U3CEnabledCiphersU3Ek__BackingField_8(CipherSuiteCodeU5BU5D_t3566916850* value)
	{
		___U3CEnabledCiphersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEnabledCiphersU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_cloned_9() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___cloned_9)); }
	inline bool get_cloned_9() const { return ___cloned_9; }
	inline bool* get_address_of_cloned_9() { return &___cloned_9; }
	inline void set_cloned_9(bool value)
	{
		___cloned_9 = value;
	}

	inline static int32_t get_offset_of_checkCertName_10() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___checkCertName_10)); }
	inline bool get_checkCertName_10() const { return ___checkCertName_10; }
	inline bool* get_address_of_checkCertName_10() { return &___checkCertName_10; }
	inline void set_checkCertName_10(bool value)
	{
		___checkCertName_10 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_11() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___checkCertRevocationStatus_11)); }
	inline bool get_checkCertRevocationStatus_11() const { return ___checkCertRevocationStatus_11; }
	inline bool* get_address_of_checkCertRevocationStatus_11() { return &___checkCertRevocationStatus_11; }
	inline void set_checkCertRevocationStatus_11(bool value)
	{
		___checkCertRevocationStatus_11 = value;
	}

	inline static int32_t get_offset_of_useServicePointManagerCallback_12() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___useServicePointManagerCallback_12)); }
	inline Nullable_1_t1819850047  get_useServicePointManagerCallback_12() const { return ___useServicePointManagerCallback_12; }
	inline Nullable_1_t1819850047 * get_address_of_useServicePointManagerCallback_12() { return &___useServicePointManagerCallback_12; }
	inline void set_useServicePointManagerCallback_12(Nullable_1_t1819850047  value)
	{
		___useServicePointManagerCallback_12 = value;
	}

	inline static int32_t get_offset_of_skipSystemValidators_13() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___skipSystemValidators_13)); }
	inline bool get_skipSystemValidators_13() const { return ___skipSystemValidators_13; }
	inline bool* get_address_of_skipSystemValidators_13() { return &___skipSystemValidators_13; }
	inline void set_skipSystemValidators_13(bool value)
	{
		___skipSystemValidators_13 = value;
	}

	inline static int32_t get_offset_of_callbackNeedsChain_14() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___callbackNeedsChain_14)); }
	inline bool get_callbackNeedsChain_14() const { return ___callbackNeedsChain_14; }
	inline bool* get_address_of_callbackNeedsChain_14() { return &___callbackNeedsChain_14; }
	inline void set_callbackNeedsChain_14(bool value)
	{
		___callbackNeedsChain_14 = value;
	}

	inline static int32_t get_offset_of_certificateValidator_15() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___certificateValidator_15)); }
	inline RuntimeObject* get_certificateValidator_15() const { return ___certificateValidator_15; }
	inline RuntimeObject** get_address_of_certificateValidator_15() { return &___certificateValidator_15; }
	inline void set_certificateValidator_15(RuntimeObject* value)
	{
		___certificateValidator_15 = value;
		Il2CppCodeGenWriteBarrier((&___certificateValidator_15), value);
	}
};

struct MonoTlsSettings_t3666008581_StaticFields
{
public:
	// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::defaultSettings
	MonoTlsSettings_t3666008581 * ___defaultSettings_16;

public:
	inline static int32_t get_offset_of_defaultSettings_16() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581_StaticFields, ___defaultSettings_16)); }
	inline MonoTlsSettings_t3666008581 * get_defaultSettings_16() const { return ___defaultSettings_16; }
	inline MonoTlsSettings_t3666008581 ** get_address_of_defaultSettings_16() { return &___defaultSettings_16; }
	inline void set_defaultSettings_16(MonoTlsSettings_t3666008581 * value)
	{
		___defaultSettings_16 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSettings_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSSETTINGS_T3666008581_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct Aes_t1218282760_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591842
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t4116647657* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t4116647657* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2770800703* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2770800703* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2770800703* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2770800703* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2770800703* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2770800703* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2770800703* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2770800703* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef AESCRYPTOSERVICEPROVIDER_T345478893_H
#define AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesCryptoServiceProvider
struct  AesCryptoServiceProvider_t345478893  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t3586970409 * ___m_rijndael_11;

public:
	inline static int32_t get_offset_of_m_rijndael_11() { return static_cast<int32_t>(offsetof(AesManaged_t1129950597, ___m_rijndael_11)); }
	inline RijndaelManaged_t3586970409 * get_m_rijndael_11() const { return ___m_rijndael_11; }
	inline RijndaelManaged_t3586970409 ** get_address_of_m_rijndael_11() { return &___m_rijndael_11; }
	inline void set_m_rijndael_11(RijndaelManaged_t3586970409 * value)
	{
		___m_rijndael_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_rijndael_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3500 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3501 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3502 = { sizeof (CertificateValidationHelper_t2276302545), -1, sizeof(CertificateValidationHelper_t2276302545_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3502[2] = 
{
	CertificateValidationHelper_t2276302545_StaticFields::get_offset_of_noX509Chain_0(),
	CertificateValidationHelper_t2276302545_StaticFields::get_offset_of_supportsTrustAnchors_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3503 = { sizeof (CipherSuiteCode_t732562211)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3503[267] = 
{
	CipherSuiteCode_t732562211::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3504 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3505 = { sizeof (MonoTlsConnectionInfo_t1391984550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3505[3] = 
{
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CCipherSuiteCodeU3Ek__BackingField_0(),
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CProtocolVersionU3Ek__BackingField_1(),
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CPeerDomainNameU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3506 = { sizeof (MonoSslPolicyErrors_t2590217945)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3506[5] = 
{
	MonoSslPolicyErrors_t2590217945::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3507 = { sizeof (MonoRemoteCertificateValidationCallback_t2521872312), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3508 = { sizeof (MonoLocalCertificateSelectionCallback_t1375878923), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3509 = { sizeof (MonoTlsProvider_t3152003291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3510 = { sizeof (MonoTlsSettings_t3666008581), -1, sizeof(MonoTlsSettings_t3666008581_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3510[17] = 
{
	MonoTlsSettings_t3666008581::get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CCertificateValidationTimeU3Ek__BackingField_2(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CTrustAnchorsU3Ek__BackingField_3(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CUserSettingsU3Ek__BackingField_4(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CCertificateSearchPathsU3Ek__BackingField_5(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CSendCloseNotifyU3Ek__BackingField_6(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CEnabledProtocolsU3Ek__BackingField_7(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CEnabledCiphersU3Ek__BackingField_8(),
	MonoTlsSettings_t3666008581::get_offset_of_cloned_9(),
	MonoTlsSettings_t3666008581::get_offset_of_checkCertName_10(),
	MonoTlsSettings_t3666008581::get_offset_of_checkCertRevocationStatus_11(),
	MonoTlsSettings_t3666008581::get_offset_of_useServicePointManagerCallback_12(),
	MonoTlsSettings_t3666008581::get_offset_of_skipSystemValidators_13(),
	MonoTlsSettings_t3666008581::get_offset_of_callbackNeedsChain_14(),
	MonoTlsSettings_t3666008581::get_offset_of_certificateValidator_15(),
	MonoTlsSettings_t3666008581_StaticFields::get_offset_of_defaultSettings_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3511 = { sizeof (TlsException_t3204531704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3511[1] = 
{
	TlsException_t3204531704::get_offset_of_alert_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3512 = { sizeof (TlsProtocols_t3756552591)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3512[13] = 
{
	TlsProtocols_t3756552591::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3513 = { sizeof (CryptoConvert_t610933157), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3514 = { sizeof (PKCS1_t1505584677), -1, sizeof(PKCS1_t1505584677_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3514[4] = 
{
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3515 = { sizeof (PKCS8_t696280613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3516 = { sizeof (PrivateKeyInfo_t668027993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3516[4] = 
{
	PrivateKeyInfo_t668027993::get_offset_of__version_0(),
	PrivateKeyInfo_t668027993::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t668027993::get_offset_of__key_2(),
	PrivateKeyInfo_t668027993::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3517 = { sizeof (EncryptedPrivateKeyInfo_t862116836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3517[4] = 
{
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3518 = { sizeof (RSAManaged_t1757093820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3518[13] = 
{
	RSAManaged_t1757093820::get_offset_of_isCRTpossible_2(),
	RSAManaged_t1757093820::get_offset_of_keyBlinding_3(),
	RSAManaged_t1757093820::get_offset_of_keypairGenerated_4(),
	RSAManaged_t1757093820::get_offset_of_m_disposed_5(),
	RSAManaged_t1757093820::get_offset_of_d_6(),
	RSAManaged_t1757093820::get_offset_of_p_7(),
	RSAManaged_t1757093820::get_offset_of_q_8(),
	RSAManaged_t1757093820::get_offset_of_dp_9(),
	RSAManaged_t1757093820::get_offset_of_dq_10(),
	RSAManaged_t1757093820::get_offset_of_qInv_11(),
	RSAManaged_t1757093820::get_offset_of_n_12(),
	RSAManaged_t1757093820::get_offset_of_e_13(),
	RSAManaged_t1757093820::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3519 = { sizeof (KeyGeneratedEventHandler_t3064139578), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3520 = { sizeof (BigInteger_t2902905090), -1, sizeof(BigInteger_t2902905090_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3520[4] = 
{
	BigInteger_t2902905090::get_offset_of_length_0(),
	BigInteger_t2902905090::get_offset_of_data_1(),
	BigInteger_t2902905090_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2902905090_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3521 = { sizeof (Sign_t3338384039)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3521[4] = 
{
	Sign_t3338384039::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3522 = { sizeof (ModulusRing_t596511505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3522[2] = 
{
	ModulusRing_t596511505::get_offset_of_mod_0(),
	ModulusRing_t596511505::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3523 = { sizeof (Kernel_t1402667220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3524 = { sizeof (ConfidenceFactor_t2516000286)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3524[7] = 
{
	ConfidenceFactor_t2516000286::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3525 = { sizeof (PrimalityTest_t1539325944), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3526 = { sizeof (PrimalityTests_t1538473976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3527 = { sizeof (PrimeGeneratorBase_t446028867), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3528 = { sizeof (SequentialSearchPrimeGeneratorBase_t2996090509), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3529 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255365), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3529[24] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_8(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_11(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_12(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_16(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_21(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3530 = { sizeof (__StaticArrayInitTypeSizeU3D3_t3217885684)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t3217885684 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3531 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3218278900)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3218278900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3532 = { sizeof (__StaticArrayInitTypeSizeU3D10_t1548194904)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D10_t1548194904 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3533 = { sizeof (__StaticArrayInitTypeSizeU3D14_t3517563373)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t3517563373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3534 = { sizeof (__StaticArrayInitTypeSizeU3D20_t1548391513)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D20_t1548391513 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3535 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125392)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125392 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3536 = { sizeof (__StaticArrayInitTypeSizeU3D48_t1904228656)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t1904228656 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3537 = { sizeof (__StaticArrayInitTypeSizeU3D64_t3517497837)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D64_t3517497837 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3538 = { sizeof (__StaticArrayInitTypeSizeU3D3132_t3825993976)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3132_t3825993976 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3539 = { sizeof (U3CModuleU3E_t692745530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3540 = { sizeof (SR_t167583546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3541 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3542 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3543 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3544 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3545 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3546 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3547 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3548 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3549 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3550 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3551 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3552 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3553 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3554 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3555 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3556 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3557 = { sizeof (LockRecursionPolicy_t4188737255)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3557[3] = 
{
	LockRecursionPolicy_t4188737255::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3558 = { sizeof (ReaderWriterCount_t447210392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3558[5] = 
{
	ReaderWriterCount_t447210392::get_offset_of_lockID_0(),
	ReaderWriterCount_t447210392::get_offset_of_readercount_1(),
	ReaderWriterCount_t447210392::get_offset_of_writercount_2(),
	ReaderWriterCount_t447210392::get_offset_of_upgradecount_3(),
	ReaderWriterCount_t447210392::get_offset_of_next_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3559 = { sizeof (ReaderWriterLockSlim_t1938317233), -1, sizeof(ReaderWriterLockSlim_t1938317233_StaticFields), sizeof(ReaderWriterLockSlim_t1938317233_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable3559[19] = 
{
	ReaderWriterLockSlim_t1938317233::get_offset_of_fIsReentrant_0(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_myLock_1(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_numWriteWaiters_2(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_numReadWaiters_3(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_numWriteUpgradeWaiters_4(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_numUpgradeWaiters_5(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_fNoWaiters_6(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_upgradeLockOwnerId_7(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_writeLockOwnerId_8(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_writeEvent_9(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_readEvent_10(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_upgradeEvent_11(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_waitUpgradeEvent_12(),
	ReaderWriterLockSlim_t1938317233_StaticFields::get_offset_of_s_nextLockID_13(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_lockID_14(),
	ReaderWriterLockSlim_t1938317233_ThreadStaticFields::get_offset_of_t_rwc_15() | THREAD_LOCAL_STATIC_MASK,
	ReaderWriterLockSlim_t1938317233::get_offset_of_fUpgradeThreadHoldingRead_16(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_owners_17(),
	ReaderWriterLockSlim_t1938317233::get_offset_of_fDisposed_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3560 = { sizeof (TimeoutTracker_t1693374902)+ sizeof (RuntimeObject), sizeof(TimeoutTracker_t1693374902 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3560[2] = 
{
	TimeoutTracker_t1693374902::get_offset_of_m_total_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeoutTracker_t1693374902::get_offset_of_m_start_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3561 = { sizeof (AesManaged_t1129950597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3561[1] = 
{
	AesManaged_t1129950597::get_offset_of_m_rijndael_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3562 = { sizeof (AesCryptoServiceProvider_t345478893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3563 = { sizeof (AesTransform_t2957123611), -1, sizeof(AesTransform_t2957123611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3563[14] = 
{
	AesTransform_t2957123611::get_offset_of_expandedKey_12(),
	AesTransform_t2957123611::get_offset_of_Nk_13(),
	AesTransform_t2957123611::get_offset_of_Nr_14(),
	AesTransform_t2957123611_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t2957123611_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T0_18(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T1_19(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T2_20(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T3_21(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3564 = { sizeof (Error_t2882114465), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3565 = { sizeof (Enumerable_t538148348), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3566 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3566[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3567 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3567[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3568 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3568[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3569 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3569[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3570 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3570[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3571 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3571[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3572 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3572[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3573 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3573[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3574 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3574[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3575 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3575[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3576 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3576[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3577 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3577[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3578 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3578[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3579 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3579[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3580 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3580[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3581 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3581[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3582 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3582[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3583 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3583[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3584 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3584[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3585 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3585[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3586 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3586[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3587 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3588 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3589 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3590 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3590[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3591 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3591[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3592 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3592[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3593 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3594 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3594[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3595 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3595[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3596 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3597 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3597[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3598 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3598[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3599 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3599[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
