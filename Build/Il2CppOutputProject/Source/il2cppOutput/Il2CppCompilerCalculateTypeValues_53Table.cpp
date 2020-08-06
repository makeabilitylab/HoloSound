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


// IActivationFactory
struct Il2CppIActivationFactory;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// Windows.Foundation.IUriEscapeStatics
struct IUriEscapeStatics_t1418340874;
// Windows.Foundation.IUriRuntimeClassFactory
struct IUriRuntimeClassFactory_t1786313621;
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct IWwwFormUrlDecoderRuntimeClassFactory_t1825479388;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_t870565809;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t946760305;
// Windows.Networking.Connectivity.INetworkInformationStatics
struct INetworkInformationStatics_t1568055678;
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct INetworkInformationStatics2_t442609477;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t566903188;
// Windows.Perception.IPerceptionTimestampHelperStatics
struct IPerceptionTimestampHelperStatics_t2092781866;
// Windows.Perception.IPerceptionTimestampHelperStatics2
struct IPerceptionTimestampHelperStatics2_t3159790349;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t3792839446;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t2938905366;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_t2217455388;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_t1343138968;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t624500286;

struct IApplicationData_t28886227;
struct IAsyncAction_t3072713919;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t3901635704;
struct IAsyncOperation_1_t721183771;
struct IAsyncOperation_1_t943527478;
struct IBuffer_t541192229;
struct ICoreApplicationView_t3448274634;
struct ICoreDispatcher_t3246199926;
struct ICoreWindow_t287790597;
struct IDataReader_t3392321383;
struct IDataWriter_t1260434628;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IIterator_1_t817443443;
struct IOutputStream_t2042351338;
struct IPerceptionTimestamp_t393505964;
struct ISimpleHapticsControllerFeedback_t2199416581;
struct IStorageFolder_t2414910357;
struct IStreamSocket_t3338378904;
struct ITypedEventHandler_2_t1082390075_ComCallableWrapper;
struct IUriRuntimeClass_t921050115;;
struct IVectorView_1_t2228900081;
struct IVectorView_1_t252326345;
struct IVectorView_1_t3605269894;
struct IVoiceInformation_t3111056019;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct IWwwFormUrlDecoderRuntimeClass_t497020701;



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
// Windows.ApplicationModel.Core.ICoreApplication
struct NOVTABLE ICoreApplication_t1778460144 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped0_get_Id_m1718516238() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped1_add_Suspending_m1174863645() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped2_remove_Suspending_m4176756178() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped3_add_Resuming_m3626166716() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped4_remove_Resuming_m2931155186() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped5_get_Properties_m2209066723() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_GetCurrentView_m3908883337(ICoreApplicationView_t3448274634** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped6_Run_m4169153247() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped7_RunWithActivationFactories_m3657006608() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplication2
struct NOVTABLE ICoreApplication2_t709209101 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped0_add_BackgroundActivated_m316915033() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped1_remove_BackgroundActivated_m2423415796() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped2_add_LeavingBackground_m2173892505() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped3_remove_LeavingBackground_m3584368919() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped4_add_EnteredBackground_m2476422894() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped5_remove_EnteredBackground_m167229890() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped6_EnablePrelaunch_m43767897() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplication3
struct NOVTABLE ICoreApplication3_t2275293042 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplication3_U24__Stripped0_RequestRestartAsync_m2814442() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication3_U24__Stripped1_RequestRestartForUserAsync_m4173592351() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationExit
struct NOVTABLE ICoreApplicationExit_t3461573293 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationExit_U24__Stripped0_Exit_m3180060440() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationExit_U24__Stripped1_add_Exiting_m2396532075() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationExit_U24__Stripped2_remove_Exiting_m3823679958() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationUnhandledError
struct NOVTABLE ICoreApplicationUnhandledError_t3134926704 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUnhandledError_U24__Stripped0_add_UnhandledErrorDetected_m1729098868() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUnhandledError_U24__Stripped1_remove_UnhandledErrorDetected_m983737010() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationUseCount
struct NOVTABLE ICoreApplicationUseCount_t1878483554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUseCount_U24__Stripped0_IncrementApplicationUseCount_m2457951204() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUseCount_U24__Stripped1_DecrementApplicationUseCount_m4242504034() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView
struct NOVTABLE ICoreApplicationView_t3448274634 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_get_CoreWindow_m2844557995(ICoreWindow_t287790597** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped0_add_Activated_m4275092646() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped1_remove_Activated_m2000306789() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped2_get_IsMain_m1779394889() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped3_get_IsHosted_m514501340() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView2
struct NOVTABLE ICoreApplicationView2_t87912591 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView2_get_Dispatcher_m1256702285(ICoreDispatcher_t3246199926** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView3
struct NOVTABLE ICoreApplicationView3_t2816795946 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped0_get_IsComponent_m3170452197() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped1_get_TitleBar_m4010049929() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped2_add_HostedViewClosing_m2552235617() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped3_remove_HostedViewClosing_m1426467461() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView5
struct NOVTABLE ICoreApplicationView5_t3623365000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView5_U24__Stripped0_get_Properties_m197759884() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView6
struct NOVTABLE ICoreApplicationView6_t2057281059 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView6_U24__Stripped0_get_DispatcherQueue_m63297605() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication
struct NOVTABLE ICoreImmersiveApplication_t3816774728 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped0_get_Views_m445013133() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped1_CreateNewView_m1917106940() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped2_get_MainView_m1528488903() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication2
struct NOVTABLE ICoreImmersiveApplication2_t4020591688 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication2_CreateNewView_m1910091696(ICoreApplicationView_t3448274634** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication3
struct NOVTABLE ICoreImmersiveApplication3_t1681939528 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication3_U24__Stripped0_CreateNewView_m1224320064() = 0;
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2199416581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m1427054036(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m1134348836() = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterable_1_t564697430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m725484364(IIterator_1_t817443443** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t1181249698 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1437779878(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2736054029(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2010780058(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriEscapeStatics
struct NOVTABLE IUriEscapeStatics_t1418340874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_UnescapeComponent_m4034034788(Il2CppHString ___toUnescape0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_EscapeComponent_m2989309814(Il2CppHString ___toEscape0, Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClass
struct NOVTABLE IUriRuntimeClass_t921050115 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_AbsoluteUri_m1802109736(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_DisplayUri_m486834635(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Domain_m2557921454(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Extension_m3106685299(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Fragment_m2886153123(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Host_m971230776(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Password_m4039608124(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Path_m1403698734(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Query_m49598513(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_QueryParsed_m1061304731(IWwwFormUrlDecoderRuntimeClass_t497020701** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_RawUri_m1303737506(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_SchemeName_m1162666486(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_UserName_m1956155983(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Port_m834193881(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Suspicious_m1231824283(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_Equals_m641048832(IUriRuntimeClass_t921050115* ___pUri0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_CombineUri_m511350015(Il2CppHString ___relativeUri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassFactory
struct NOVTABLE IUriRuntimeClassFactory_t1786313621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateUri_m1347622952(Il2CppHString ___uri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateWithRelativeUri_m922460588(Il2CppHString ___baseUri0, Il2CppHString ___relativeUri1, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
struct NOVTABLE IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m576710761(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m2106498432(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
struct NOVTABLE IWwwFormUrlDecoderRuntimeClass_t497020701 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClass_U24__Stripped0_GetFirstValueByName_m2439676971() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct NOVTABLE IWwwFormUrlDecoderRuntimeClassFactory_t1825479388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClassFactory_U24__Stripped0_CreateWwwFormUrlDecoder_m959935225() = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t1703961418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m167098999() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct NOVTABLE IInstalledVoicesStatic_t870565809 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_AllVoices_m3921392764(IVectorView_1_t3605269894** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_U24__Stripped0_get_DefaultVoice_m3710717716() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct NOVTABLE IInstalledVoicesStatic2_t946760305 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic2_U24__Stripped0_TrySetDefaultVoiceAsync_m4121083203() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t764091608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m1331395156() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer
struct NOVTABLE ISpeechSynthesizer_t2734223870 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeTextToStreamAsync_m3255420258(Il2CppHString ___text0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeSsmlToStreamAsync_m781880964(Il2CppHString ___Ssml0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_put_Voice_m2158910037(IVoiceInformation_t3111056019* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_U24__Stripped0_get_Voice_m2158722298() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
struct NOVTABLE ISpeechSynthesizer2_t1865799545 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer2_U24__Stripped0_get_Options_m1005365255() = 0;
};
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct NOVTABLE IVoiceInformation_t3111056019 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_get_DisplayName_m1640391607(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped0_get_Id_m1776229927() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped1_get_Language_m1418474925() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped2_get_Description_m153214867() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped3_get_Gender_m2588825291() = 0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics
struct NOVTABLE INetworkInformationStatics_t1568055678 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped0_GetConnectionProfiles_m2758217575() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped1_GetInternetConnectionProfile_m2864415643() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped2_GetLanIdentifiers_m3418372237() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_GetHostNames_m3950255330(IVectorView_1_t2228900081** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped3_GetProxyConfigurationAsync_m4095711725() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped4_GetSortedEndpointPairs_m4007171019() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped5_add_NetworkStatusChanged_m1100623864() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped6_remove_NetworkStatusChanged_m1031248726() = 0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct NOVTABLE INetworkInformationStatics2_t442609477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics2_U24__Stripped0_FindConnectionProfilesAsync_m80412135() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t2985905689 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m4168667700(Il2CppHString ___hostName0, IHostName_t3179521082** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t664333692 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m3120053299() = 0;
};
// Windows.Networking.Sockets.IStreamSocket
struct NOVTABLE IStreamSocket_t3338378904 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped0_get_Control_m3042699933() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped1_get_Information_m1242857083() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_InputStream_m1542729860(IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_OutputStream_m2118890306(IOutputStream_t2042351338** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped2_ConnectAsync_m3193253458() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_ConnectAsync_m1123568840(IHostName_t3179521082* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped3_ConnectAsync_m3193160057() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped4_ConnectAsync_m3193193880() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped5_UpgradeToSslAsync_m1371843817() = 0;
};
// Windows.Networking.Sockets.IStreamSocket2
struct NOVTABLE IStreamSocket2_t2507586357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket2_U24__Stripped0_ConnectAsync_m4213835381() = 0;
};
// Windows.Networking.Sockets.IStreamSocket3
struct NOVTABLE IStreamSocket3_t2507586356 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped0_CancelIOAsync_m1257382553() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped1_EnableTransferOwnership_m2056414540() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped2_EnableTransferOwnership_m1232450313() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped3_TransferOwnership_m1615596381() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped4_TransferOwnership_m541657236() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped5_TransferOwnership_m4286864110() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListener2
struct NOVTABLE IStreamSocketListener2_t954540666 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener2_U24__Stripped0_BindServiceNameAsync_m3756464595() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener2_U24__Stripped1_BindServiceNameAsync_m3563514078() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListener3
struct NOVTABLE IStreamSocketListener3_t954540667 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped0_CancelIOAsync_m4056594496() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped1_EnableTransferOwnership_m1712201539() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped2_EnableTransferOwnership_m2720451271() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped3_TransferOwnership_m2149010771() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped4_TransferOwnership_m446051482() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
struct NOVTABLE IStreamSocketListenerConnectionReceivedEventArgs_t3129023480 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListenerConnectionReceivedEventArgs_get_Socket_m1753941040(IStreamSocket_t3338378904** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_t566903188 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m3680219047() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m2379886354() = 0;
};
// Windows.Perception.IPerceptionTimestamp
struct NOVTABLE IPerceptionTimestamp_t393505964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped0_get_TargetTime_m2051237710() = 0;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped1_get_PredictionAmount_m1234733657() = 0;
};
// Windows.Perception.IPerceptionTimestamp2
struct NOVTABLE IPerceptionTimestamp2_t3069865132 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp2_U24__Stripped0_get_SystemRelativeTargetTime_m2249463434() = 0;
};
// Windows.Perception.IPerceptionTimestampHelperStatics2
struct NOVTABLE IPerceptionTimestampHelperStatics2_t3159790349 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics2_U24__Stripped0_FromSystemRelativeTargetTime_m1688855869() = 0;
};
// Windows.Storage.IApplicationData
struct NOVTABLE IApplicationData_t28886227 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped0_get_Version_m3464523458() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped1_SetVersionAsync_m2657783601() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped2_ClearAsync_m3547980218() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped3_ClearAsync_m3548227419() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped4_get_LocalSettings_m3007367750() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped5_get_RoamingSettings_m907061657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped6_get_LocalFolder_m864445652() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_get_RoamingFolder_m1109609965(IStorageFolder_t2414910357** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped7_get_TemporaryFolder_m3729894556() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped8_add_DataChanged_m2266976657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped9_remove_DataChanged_m2367811666() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped10_SignalDataChanged_m3679481841() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped11_get_RoamingStorageQuota_m423759995() = 0;
};
// Windows.Storage.IApplicationData2
struct NOVTABLE IApplicationData2_t163893929 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData2_U24__Stripped0_get_LocalCacheFolder_m693950201() = 0;
};
// Windows.Storage.IApplicationData3
struct NOVTABLE IApplicationData3_t163893930 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped0_GetPublisherCacheFolder_m4135038805() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped1_ClearPublisherCacheFolderAsync_m842510329() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped2_get_SharedLocalFolder_m775779766() = 0;
};
// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t3792839446 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m1299656078(IApplicationData_t28886227** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t2938905366 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_m2306898698() = 0;
};
// Windows.Storage.IStorageFile2
struct NOVTABLE IStorageFile2_t81501002 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped0_OpenAsync_m165645617() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped1_OpenTransactedWriteAsync_m1104539825() = 0;
};
// Windows.Storage.IStorageFilePropertiesWithAvailability
struct NOVTABLE IStorageFilePropertiesWithAvailability_t1554344922 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFilePropertiesWithAvailability_U24__Stripped0_get_IsAvailable_m2026400567() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t4131808966 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromPathAsync_m2841215677() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_GetFileFromApplicationUriAsync_m807305831() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_CreateStreamedFileAsync_m3773394311() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_ReplaceWithStreamedFileAsync_m2701266470() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_CreateStreamedFileFromUriAsync_m2958466004() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped5_ReplaceWithStreamedFileFromUriAsync_m1390089385() = 0;
};
// Windows.Storage.IStorageFolder2
struct NOVTABLE IStorageFolder2_t3506658410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder2_U24__Stripped0_TryGetItemAsync_m3190903159() = 0;
};
// Windows.Storage.IStorageFolder3
struct NOVTABLE IStorageFolder3_t1940574469 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder3_U24__Stripped0_TryGetChangeTracker_m3453030661() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t333412554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_GetFolderFromPathAsync_m3674878916(Il2CppHString ___path0, IAsyncOperation_1_t3901635704** comReturnValue) = 0;
};
// Windows.Storage.IStorageItem
struct NOVTABLE IStorageItem_t3194585767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped0_RenameAsync_m1111865988() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped1_RenameAsync_m1111899871() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped2_DeleteAsync_m558316365() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped3_DeleteAsync_m558350056() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped4_GetBasicPropertiesAsync_m2561736561() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped5_get_Name_m3157959696() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_get_Path_m1853866705(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped6_get_Attributes_m2913386339() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped7_get_DateCreated_m1722396674() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped8_IsOfType_m2015695515() = 0;
};
// Windows.Storage.IStorageItem2
struct NOVTABLE IStorageItem2_t2827190580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped0_GetParentAsync_m4237091681() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped1_IsEqual_m1153349944() = 0;
};
// Windows.Storage.IStorageItemProperties
struct NOVTABLE IStorageItemProperties_t2031733036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped0_GetThumbnailAsync_m260624717() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped1_GetThumbnailAsync_m3236220828() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped2_GetThumbnailAsync_m3688217351() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped3_get_DisplayName_m3813510564() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped4_get_DisplayType_m553261029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped5_get_FolderRelativeId_m2825143686() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped6_get_Properties_m1148881838() = 0;
};
// Windows.Storage.IStorageItemProperties2
struct NOVTABLE IStorageItemProperties2_t3993257882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped0_GetScaledImageAsThumbnailAsync_m1311815822() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped1_GetScaledImageAsThumbnailAsync_m3789805793() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped2_GetScaledImageAsThumbnailAsync_m1883939878() = 0;
};
// Windows.Storage.IStorageItemPropertiesWithProvider
struct NOVTABLE IStorageItemPropertiesWithProvider_t3527078644 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemPropertiesWithProvider_U24__Stripped0_get_Provider_m1098238941() = 0;
};
// Windows.Storage.Search.IStorageFolderQueryOperations
struct NOVTABLE IStorageFolderQueryOperations_t91328000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped0_GetIndexedStateAsync_m1002212636() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped1_CreateFileQuery_m2610834360() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped2_CreateFileQuery_m2607550361() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped3_CreateFileQueryWithOptions_m3264920027() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped4_CreateFolderQuery_m562621060() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped5_CreateFolderQuery_m293497691() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped6_CreateFolderQueryWithOptions_m3171464593() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped7_CreateItemQuery_m3471952481() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped8_CreateItemQueryWithOptions_m3157268352() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped9_GetFilesAsync_m2850188463() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped10_GetFilesAsync_m2309390520() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped11_GetFoldersAsync_m3312258101() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped12_GetFoldersAsync_m2029391029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped13_GetItemsAsync_m463088250() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped14_AreQueryOptionsSupported_m2004623827() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped15_IsCommonFolderQuerySupported_m3750205277() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped16_IsCommonFileQuerySupported_m2447375717() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
};
// Windows.Storage.Streams.IDataReader
struct NOVTABLE IDataReader_t3392321383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped0_get_UnconsumedBufferLength_m16229785() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped1_get_UnicodeEncoding_m2494153260() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped2_put_UnicodeEncoding_m418317483() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped3_get_ByteOrder_m2032789439() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped4_put_ByteOrder_m671273445() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped5_get_InputStreamOptions_m1340555748() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped6_put_InputStreamOptions_m4180354519() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped7_ReadByte_m4257467755() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_ReadBytes_m3117293785(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped8_ReadBuffer_m1072057890() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped9_ReadBoolean_m3250790026() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped10_ReadGuid_m2368726480() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped11_ReadInt16_m2758551764() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_ReadInt32_m961857721(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped12_ReadInt64_m3927659623() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped13_ReadUInt16_m4143494020() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped14_ReadUInt32_m2215972141() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped15_ReadUInt64_m2603716585() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped16_ReadSingle_m1085044512() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped17_ReadDouble_m1657770505() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped18_ReadString_m2482390996() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped19_ReadDateTime_m3777412375() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped20_ReadTimeSpan_m1355012196() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_LoadAsync_m90647872(uint32_t ___count0, IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped21_DetachBuffer_m2943817099() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped22_DetachStream_m3061459159() = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_t2217455388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_m3942767827(IInputStream_t2821136229* ___inputStream0, IDataReader_t3392321383** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_t1343138968 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_U24__Stripped0_FromBuffer_m362330522() = 0;
};
// Windows.Storage.Streams.IDataWriter
struct NOVTABLE IDataWriter_t1260434628 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped0_get_UnstoredBufferLength_m4047016447() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped1_get_UnicodeEncoding_m1051599545() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped2_put_UnicodeEncoding_m860257975() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped3_get_ByteOrder_m3417022626() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped4_put_ByteOrder_m2232773923() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped5_WriteByte_m1325520711() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteBytes_m1463346676(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped6_WriteBuffer_m3625982827() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped7_WriteBuffer_m1947313872() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped8_WriteBoolean_m4206148776() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped9_WriteGuid_m2424249642() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped10_WriteInt16_m1218706367() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteInt32_m3302687114(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped11_WriteInt64_m76875145() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped12_WriteUInt16_m3417848222() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped13_WriteUInt32_m3149825281() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped14_WriteUInt64_m3824854378() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped15_WriteSingle_m4290768671() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped16_WriteDouble_m2734993046() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped17_WriteDateTime_m2945296003() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped18_WriteTimeSpan_m4140056822() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped19_WriteString_m605557536() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped20_MeasureString_m2837992914() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_StoreAsync_m1501074270(IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_FlushAsync_m2274314570(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped21_DetachBuffer_m1116280139() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped22_DetachStream_m502536555() = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t624500286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_m3380054010(IOutputStream_t2042351338* ___outputStream0, IDataWriter_t1260434628** comReturnValue) = 0;
};
// Windows.Storage.Streams.IInputStreamReference
struct NOVTABLE IInputStreamReference_t980626503 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStreamReference_U24__Stripped0_OpenSequentialReadAsync_m2665372827() = 0;
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
// Windows.Storage.Streams.IRandomAccessStreamReference
struct NOVTABLE IRandomAccessStreamReference_t2718546672 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStreamReference_OpenReadAsync_m2508312280(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
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
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
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
#ifndef EVENTREGISTRATIONTOKEN_T318890788_H
#define EVENTREGISTRATIONTOKEN_T318890788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t318890788 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t318890788, ___m_value_0)); }
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
#endif // EVENTREGISTRATIONTOKEN_T318890788_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t913461083  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581;

public:
	inline ISimpleHapticsControllerFeedback_t2199416581* get_____isimpleHapticsControllerFeedback_t2199416581()
	{
		ISimpleHapticsControllerFeedback_t2199416581* returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2199416581>((&____isimpleHapticsControllerFeedback_t2199416581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef UNIVERSALAPICONTRACT_T3367004861_H
#define UNIVERSALAPICONTRACT_T3367004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t3367004861 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T3367004861_H
#ifndef URI_T952691556_H
#define URI_T952691556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Uri
struct  Uri_t952691556  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IUriRuntimeClass
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IUriRuntimeClass_t921050115* get_____iuriRuntimeClass_t921050115()
	{
		IUriRuntimeClass_t921050115* returnValue = ____iuriRuntimeClass_t921050115;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClass_t921050115>((&____iuriRuntimeClass_t921050115), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClass_t921050115;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788()
	{
		IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788>((&____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct Uri_t952691556_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassFactory
	IUriRuntimeClassFactory_t1786313621* ____iuriRuntimeClassFactory_t1786313621;
	// Cached pointer to Windows.Foundation.IUriEscapeStatics
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Uri"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassFactory_t1786313621* get_____iuriRuntimeClassFactory_t1786313621()
	{
		IUriRuntimeClassFactory_t1786313621* returnValue = ____iuriRuntimeClassFactory_t1786313621;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriRuntimeClassFactory_t1786313621::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassFactory_t1786313621>((&____iuriRuntimeClassFactory_t1786313621), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassFactory_t1786313621;
			}
		}
		return returnValue;
	}

	inline IUriEscapeStatics_t1418340874* get_____iuriEscapeStatics_t1418340874()
	{
		IUriEscapeStatics_t1418340874* returnValue = ____iuriEscapeStatics_t1418340874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriEscapeStatics_t1418340874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriEscapeStatics_t1418340874>((&____iuriEscapeStatics_t1418340874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriEscapeStatics_t1418340874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T952691556_H
#ifndef WWWFORMURLDECODER_T4136411681_H
#define WWWFORMURLDECODER_T4136411681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.WwwFormUrlDecoder
struct  WwwFormUrlDecoder_t4136411681  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
	IWwwFormUrlDecoderRuntimeClass_t497020701* ____iwwwFormUrlDecoderRuntimeClass_t497020701;
	// Cached pointer to Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232;
	// Cached pointer to Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IIterable_1_t564697430* ____iiterable_1_t564697430;

public:
	inline IWwwFormUrlDecoderRuntimeClass_t497020701* get_____iwwwFormUrlDecoderRuntimeClass_t497020701()
	{
		IWwwFormUrlDecoderRuntimeClass_t497020701* returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWwwFormUrlDecoderRuntimeClass_t497020701::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClass_t497020701>((&____iwwwFormUrlDecoderRuntimeClass_t497020701), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
			}
		}
		return returnValue;
	}

	inline IVectorView_1_t2282165232* get_____ivectorView_1_t2282165232()
	{
		IVectorView_1_t2282165232* returnValue = ____ivectorView_1_t2282165232;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVectorView_1_t2282165232>((&____ivectorView_1_t2282165232), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivectorView_1_t2282165232;
			}
		}
		return returnValue;
	}

	inline IIterable_1_t564697430* get_____iiterable_1_t564697430()
	{
		IIterable_1_t564697430* returnValue = ____iiterable_1_t564697430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IIterable_1_t564697430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IIterable_1_t564697430>((&____iiterable_1_t564697430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iiterable_1_t564697430;
			}
		}
		return returnValue;
	}
};

struct WwwFormUrlDecoder_t4136411681_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
	IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.WwwFormUrlDecoder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* get_____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388()
	{
		IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClassFactory_t1825479388>((&____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORMURLDECODER_T4136411681_H
#ifndef SPEECHSYNTHESIZER_T2130945875_H
#define SPEECHSYNTHESIZER_T2130945875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct  SpeechSynthesizer_t2130945875  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870;
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
	ISpeechSynthesizer2_t1865799545* ____ispeechSynthesizer2_t1865799545;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesizer_t2734223870* get_____ispeechSynthesizer_t2734223870()
	{
		ISpeechSynthesizer_t2734223870* returnValue = ____ispeechSynthesizer_t2734223870;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer_t2734223870::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer_t2734223870>((&____ispeechSynthesizer_t2734223870), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer_t2734223870;
			}
		}
		return returnValue;
	}

	inline ISpeechSynthesizer2_t1865799545* get_____ispeechSynthesizer2_t1865799545()
	{
		ISpeechSynthesizer2_t1865799545* returnValue = ____ispeechSynthesizer2_t1865799545;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer2_t1865799545::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer2_t1865799545>((&____ispeechSynthesizer2_t1865799545), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer2_t1865799545;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct SpeechSynthesizer_t2130945875_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_t870565809* ____iinstalledVoicesStatic_t870565809;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t946760305* ____iinstalledVoicesStatic2_t946760305;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.SpeechSynthesis.SpeechSynthesizer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic_t870565809* get_____iinstalledVoicesStatic_t870565809()
	{
		IInstalledVoicesStatic_t870565809* returnValue = ____iinstalledVoicesStatic_t870565809;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic_t870565809::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic_t870565809>((&____iinstalledVoicesStatic_t870565809), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic_t870565809;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic2_t946760305* get_____iinstalledVoicesStatic2_t946760305()
	{
		IInstalledVoicesStatic2_t946760305* returnValue = ____iinstalledVoicesStatic2_t946760305;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic2_t946760305::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic2_t946760305>((&____iinstalledVoicesStatic2_t946760305), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic2_t946760305;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESIZER_T2130945875_H
#ifndef VOICEINFORMATION_T4266404632_H
#define VOICEINFORMATION_T4266404632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.VoiceInformation
struct  VoiceInformation_t4266404632  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.IVoiceInformation
	IVoiceInformation_t3111056019* ____ivoiceInformation_t3111056019;

public:
	inline IVoiceInformation_t3111056019* get_____ivoiceInformation_t3111056019()
	{
		IVoiceInformation_t3111056019* returnValue = ____ivoiceInformation_t3111056019;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVoiceInformation_t3111056019>((&____ivoiceInformation_t3111056019), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivoiceInformation_t3111056019;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICEINFORMATION_T4266404632_H
#ifndef NETWORKINFORMATION_T482159730_H
#define NETWORKINFORMATION_T482159730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Connectivity.NetworkInformation
struct  NetworkInformation_t482159730  : public Il2CppComObject
{
public:

public:
};

struct NetworkInformation_t482159730_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics
	INetworkInformationStatics_t1568055678* ____inetworkInformationStatics_t1568055678;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics2
	INetworkInformationStatics2_t442609477* ____inetworkInformationStatics2_t442609477;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Connectivity.NetworkInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics_t1568055678* get_____inetworkInformationStatics_t1568055678()
	{
		INetworkInformationStatics_t1568055678* returnValue = ____inetworkInformationStatics_t1568055678;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics_t1568055678::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INetworkInformationStatics_t1568055678>((&____inetworkInformationStatics_t1568055678), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics_t1568055678;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics2_t442609477* get_____inetworkInformationStatics2_t442609477()
	{
		INetworkInformationStatics2_t442609477* returnValue = ____inetworkInformationStatics2_t442609477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics2_t442609477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INetworkInformationStatics2_t442609477>((&____inetworkInformationStatics2_t442609477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics2_t442609477;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATION_T482159730_H
#ifndef STREAMSOCKET_T121918173_H
#define STREAMSOCKET_T121918173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocket
struct  StreamSocket_t121918173  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket
	IStreamSocket_t3338378904* ____istreamSocket_t3338378904;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket2
	IStreamSocket2_t2507586357* ____istreamSocket2_t2507586357;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket3
	IStreamSocket3_t2507586356* ____istreamSocket3_t2507586356;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IStreamSocket_t3338378904* get_____istreamSocket_t3338378904()
	{
		IStreamSocket_t3338378904* returnValue = ____istreamSocket_t3338378904;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket_t3338378904::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket_t3338378904>((&____istreamSocket_t3338378904), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket_t3338378904;
			}
		}
		return returnValue;
	}

	inline IStreamSocket2_t2507586357* get_____istreamSocket2_t2507586357()
	{
		IStreamSocket2_t2507586357* returnValue = ____istreamSocket2_t2507586357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket2_t2507586357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket2_t2507586357>((&____istreamSocket2_t2507586357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket2_t2507586357;
			}
		}
		return returnValue;
	}

	inline IStreamSocket3_t2507586356* get_____istreamSocket3_t2507586356()
	{
		IStreamSocket3_t2507586356* returnValue = ____istreamSocket3_t2507586356;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket3_t2507586356::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket3_t2507586356>((&____istreamSocket3_t2507586356), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket3_t2507586356;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct StreamSocket_t121918173_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_t566903188* ____istreamSocketStatics_t566903188;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_t566903188* get_____istreamSocketStatics_t566903188()
	{
		IStreamSocketStatics_t566903188* returnValue = ____istreamSocketStatics_t566903188;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_t566903188::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketStatics_t566903188>((&____istreamSocketStatics_t566903188), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_t566903188;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKET_T121918173_H
#ifndef STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3298683243_H
#define STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3298683243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
struct  StreamSocketListenerConnectionReceivedEventArgs_t3298683243  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
	IStreamSocketListenerConnectionReceivedEventArgs_t3129023480* ____istreamSocketListenerConnectionReceivedEventArgs_t3129023480;

public:
	inline IStreamSocketListenerConnectionReceivedEventArgs_t3129023480* get_____istreamSocketListenerConnectionReceivedEventArgs_t3129023480()
	{
		IStreamSocketListenerConnectionReceivedEventArgs_t3129023480* returnValue = ____istreamSocketListenerConnectionReceivedEventArgs_t3129023480;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListenerConnectionReceivedEventArgs_t3129023480::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListenerConnectionReceivedEventArgs_t3129023480>((&____istreamSocketListenerConnectionReceivedEventArgs_t3129023480), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListenerConnectionReceivedEventArgs_t3129023480;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3298683243_H
#ifndef PERCEPTIONTIMESTAMP_T25754965_H
#define PERCEPTIONTIMESTAMP_T25754965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t25754965  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Perception.IPerceptionTimestamp
	IPerceptionTimestamp_t393505964* ____iperceptionTimestamp_t393505964;
	// Cached pointer to Windows.Perception.IPerceptionTimestamp2
	IPerceptionTimestamp2_t3069865132* ____iperceptionTimestamp2_t3069865132;

public:
	inline IPerceptionTimestamp_t393505964* get_____iperceptionTimestamp_t393505964()
	{
		IPerceptionTimestamp_t393505964* returnValue = ____iperceptionTimestamp_t393505964;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp_t393505964::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp_t393505964>((&____iperceptionTimestamp_t393505964), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp_t393505964;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestamp2_t3069865132* get_____iperceptionTimestamp2_t3069865132()
	{
		IPerceptionTimestamp2_t3069865132* returnValue = ____iperceptionTimestamp2_t3069865132;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp2_t3069865132::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp2_t3069865132>((&____iperceptionTimestamp2_t3069865132), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp2_t3069865132;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMP_T25754965_H
#ifndef APPLICATIONDATA_T3489691988_H
#define APPLICATIONDATA_T3489691988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.ApplicationData
struct  ApplicationData_t3489691988  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IApplicationData
	IApplicationData_t28886227* ____iapplicationData_t28886227;
	// Cached pointer to Windows.Storage.IApplicationData2
	IApplicationData2_t163893929* ____iapplicationData2_t163893929;
	// Cached pointer to Windows.Storage.IApplicationData3
	IApplicationData3_t163893930* ____iapplicationData3_t163893930;

public:
	inline IApplicationData_t28886227* get_____iapplicationData_t28886227()
	{
		IApplicationData_t28886227* returnValue = ____iapplicationData_t28886227;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData_t28886227::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData_t28886227>((&____iapplicationData_t28886227), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData_t28886227;
			}
		}
		return returnValue;
	}

	inline IApplicationData2_t163893929* get_____iapplicationData2_t163893929()
	{
		IApplicationData2_t163893929* returnValue = ____iapplicationData2_t163893929;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData2_t163893929::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData2_t163893929>((&____iapplicationData2_t163893929), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData2_t163893929;
			}
		}
		return returnValue;
	}

	inline IApplicationData3_t163893930* get_____iapplicationData3_t163893930()
	{
		IApplicationData3_t163893930* returnValue = ____iapplicationData3_t163893930;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData3_t163893930::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData3_t163893930>((&____iapplicationData3_t163893930), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData3_t163893930;
			}
		}
		return returnValue;
	}
};

struct ApplicationData_t3489691988_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t3792839446* ____iapplicationDataStatics_t3792839446;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t2938905366* ____iapplicationDataStatics2_t2938905366;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t3792839446* get_____iapplicationDataStatics_t3792839446()
	{
		IApplicationDataStatics_t3792839446* returnValue = ____iapplicationDataStatics_t3792839446;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t3792839446::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics_t3792839446>((&____iapplicationDataStatics_t3792839446), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t3792839446;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t2938905366* get_____iapplicationDataStatics2_t2938905366()
	{
		IApplicationDataStatics2_t2938905366* returnValue = ____iapplicationDataStatics2_t2938905366;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t2938905366::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics2_t2938905366>((&____iapplicationDataStatics2_t2938905366), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t2938905366;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDATA_T3489691988_H
#ifndef DATAREADER_T2381813649_H
#define DATAREADER_T2381813649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReader
struct  DataReader_t2381813649  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataReader
	IDataReader_t3392321383* ____idataReader_t3392321383;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataReader_t3392321383* get_____idataReader_t3392321383()
	{
		IDataReader_t3392321383* returnValue = ____idataReader_t3392321383;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataReader_t3392321383::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReader_t3392321383>((&____idataReader_t3392321383), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReader_t3392321383;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct DataReader_t2381813649_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_t2217455388* ____idataReaderFactory_t2217455388;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_t1343138968* ____idataReaderStatics_t1343138968;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_t2217455388* get_____idataReaderFactory_t2217455388()
	{
		IDataReaderFactory_t2217455388* returnValue = ____idataReaderFactory_t2217455388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_t2217455388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderFactory_t2217455388>((&____idataReaderFactory_t2217455388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_t2217455388;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_t1343138968* get_____idataReaderStatics_t1343138968()
	{
		IDataReaderStatics_t1343138968* returnValue = ____idataReaderStatics_t1343138968;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_t1343138968::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderStatics_t1343138968>((&____idataReaderStatics_t1343138968), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_t1343138968;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADER_T2381813649_H
#ifndef DATAWRITER_T841151054_H
#define DATAWRITER_T841151054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriter
struct  DataWriter_t841151054  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriter
	IDataWriter_t1260434628* ____idataWriter_t1260434628;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataWriter_t1260434628* get_____idataWriter_t1260434628()
	{
		IDataWriter_t1260434628* returnValue = ____idataWriter_t1260434628;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriter_t1260434628>((&____idataWriter_t1260434628), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriter_t1260434628;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct DataWriter_t841151054_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t624500286* ____idataWriterFactory_t624500286;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataWriterFactory_t624500286* get_____idataWriterFactory_t624500286()
	{
		IDataWriterFactory_t624500286* returnValue = ____idataWriterFactory_t624500286;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t624500286::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriterFactory_t624500286>((&____idataWriterFactory_t624500286), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t624500286;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITER_T841151054_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef HOSTNAMETYPE_T4170768079_H
#define HOSTNAMETYPE_T4170768079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostNameType
struct  HostNameType_t4170768079 
{
public:
	// System.Int32 Windows.Networking.HostNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostNameType_t4170768079, ___value___2)); }
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
#endif // HOSTNAMETYPE_T4170768079_H
// Windows.Networking.Sockets.IStreamSocketListener
struct NOVTABLE IStreamSocketListener_t2077125013 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped0_get_Control_m1239981682() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped1_get_Information_m1887021997() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_BindServiceNameAsync_m2190755841(Il2CppHString ___localServiceName0, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped2_BindEndpointAsync_m3547995344() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_add_ConnectionReceived_m1407582327(ITypedEventHandler_2_t1082390075_ComCallableWrapper* ___eventHandler0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_remove_ConnectionReceived_m2467183375(EventRegistrationToken_t318890788  ___eventCookie0) = 0;
};
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2092781866 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(DateTime_t1679451545  ___targetTime0, IPerceptionTimestamp_t393505964** comReturnValue) = 0;
};
#ifndef CREATIONCOLLISIONOPTION_T2003156443_H
#define CREATIONCOLLISIONOPTION_T2003156443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t2003156443 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t2003156443, ___value___2)); }
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
#endif // CREATIONCOLLISIONOPTION_T2003156443_H
#ifndef FILEACCESSMODE_T2616835387_H
#define FILEACCESSMODE_T2616835387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.FileAccessMode
struct  FileAccessMode_t2616835387 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t2616835387, ___value___2)); }
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
#endif // FILEACCESSMODE_T2616835387_H
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
// Windows.Devices.Haptics.ISimpleHapticsController
struct NOVTABLE ISimpleHapticsController_t3936202477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped0_get_Id_m3300049499() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_get_SupportedFeedback_m2326199324(IVectorView_1_t252326345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped1_get_IsIntensitySupported_m991599193() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped2_get_IsPlayCountSupported_m3867764282() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped3_get_IsPlayDurationSupported_m3960541395() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped4_get_IsReplayPauseIntervalSupported_m1218069110() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_StopFeedback_m4220404142() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped5_SendHapticFeedback_m795740151() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedback_m2591754103(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedbackForDuration_m1489257265(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1, TimeSpan_t881159249  ___playDuration2) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped6_SendHapticFeedbackForPlayCount_m3357521888() = 0;
};
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
// Windows.Networking.IHostName
struct NOVTABLE IHostName_t3179521082 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped0_get_IPInformation_m2521739025() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped1_get_RawName_m106347642() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_DisplayName_m3568158889(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped2_get_CanonicalName_m2488148993() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_Type_m2074874122(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped3_IsEqual_m2387026067() = 0;
};
#ifndef STREAMSOCKETLISTENER_T1754929646_H
#define STREAMSOCKETLISTENER_T1754929646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocketListener
struct  StreamSocketListener_t1754929646  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener
	IStreamSocketListener_t2077125013* ____istreamSocketListener_t2077125013;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener2
	IStreamSocketListener2_t954540666* ____istreamSocketListener2_t954540666;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener3
	IStreamSocketListener3_t954540667* ____istreamSocketListener3_t954540667;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IStreamSocketListener_t2077125013* get_____istreamSocketListener_t2077125013()
	{
		IStreamSocketListener_t2077125013* returnValue = ____istreamSocketListener_t2077125013;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener_t2077125013::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener_t2077125013>((&____istreamSocketListener_t2077125013), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener_t2077125013;
			}
		}
		return returnValue;
	}

	inline IStreamSocketListener2_t954540666* get_____istreamSocketListener2_t954540666()
	{
		IStreamSocketListener2_t954540666* returnValue = ____istreamSocketListener2_t954540666;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener2_t954540666::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener2_t954540666>((&____istreamSocketListener2_t954540666), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener2_t954540666;
			}
		}
		return returnValue;
	}

	inline IStreamSocketListener3_t954540667* get_____istreamSocketListener3_t954540667()
	{
		IStreamSocketListener3_t954540667* returnValue = ____istreamSocketListener3_t954540667;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener3_t954540667::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener3_t954540667>((&____istreamSocketListener3_t954540667), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener3_t954540667;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct StreamSocketListener_t1754929646_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocketListener"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKETLISTENER_T1754929646_H
#ifndef PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#define PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestampHelper
struct  PerceptionTimestampHelper_t1405177115  : public Il2CppComObject
{
public:

public:
};

struct PerceptionTimestampHelper_t1405177115_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics
	IPerceptionTimestampHelperStatics_t2092781866* ____iperceptionTimestampHelperStatics_t2092781866;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics2
	IPerceptionTimestampHelperStatics2_t3159790349* ____iperceptionTimestampHelperStatics2_t3159790349;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Perception.PerceptionTimestampHelper"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics_t2092781866* get_____iperceptionTimestampHelperStatics_t2092781866()
	{
		IPerceptionTimestampHelperStatics_t2092781866* returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics_t2092781866::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics_t2092781866>((&____iperceptionTimestampHelperStatics_t2092781866), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics2_t3159790349* get_____iperceptionTimestampHelperStatics2_t3159790349()
	{
		IPerceptionTimestampHelperStatics2_t3159790349* returnValue = ____iperceptionTimestampHelperStatics2_t3159790349;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics2_t3159790349::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics2_t3159790349>((&____iperceptionTimestampHelperStatics2_t3159790349), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics2_t3159790349;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMPHELPER_T1405177115_H
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t455187485 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m1126212897() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3676239059() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_OpenAsync_m1037381949(int32_t ___accessMode0, IAsyncOperation_1_t721183771** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenTransactedWriteAsync_m1588569100() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_CopyAsync_m1826427802() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m1826250819() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m1826495320() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAndReplaceAsync_m3545084853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_MoveAsync_m1671606626() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m1671462051() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m1671424532() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAndReplaceAsync_m870303739() = 0;
};
// Windows.Storage.IStorageFolder
struct NOVTABLE IStorageFolder_t2414910357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped0_CreateFileAsync_m3478046114() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_CreateFileAsync_m3292856642(Il2CppHString ___desiredName0, int32_t ___options1, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped1_CreateFolderAsync_m3554080672() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped2_CreateFolderAsync_m413574889() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_GetFileAsync_m859688798(Il2CppHString ___name0, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped3_GetFolderAsync_m377722965() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped4_GetItemAsync_m831988853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped5_GetFilesAsync_m2162686979() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped6_GetFoldersAsync_m139074646() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped7_GetItemsAsync_m4085621006() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m2177651161(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef SIMPLEHAPTICSCONTROLLER_T4220085256_H
#define SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsController
struct  SimpleHapticsController_t4220085256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsController
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477;

public:
	inline ISimpleHapticsController_t3936202477* get_____isimpleHapticsController_t3936202477()
	{
		ISimpleHapticsController_t3936202477* returnValue = ____isimpleHapticsController_t3936202477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsController_t3936202477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsController_t3936202477>((&____isimpleHapticsController_t3936202477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsController_t3936202477;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifndef SPEECHSYNTHESISSTREAM_T2322339758_H
#define SPEECHSYNTHESISSTREAM_T2322339758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct  SpeechSynthesisStream_t2322339758  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
	ISpeechSynthesisStream_t764091608* ____ispeechSynthesisStream_t764091608;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamWithContentType
	IRandomAccessStreamWithContentType_t3296927652* ____irandomAccessStreamWithContentType_t3296927652;
	// Cached pointer to Windows.Storage.Streams.IContentTypeProvider
	IContentTypeProvider_t1806097440* ____icontentTypeProvider_t1806097440;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStream
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051;
	// Cached pointer to Windows.Storage.Streams.IOutputStream
	IOutputStream_t2042351338* ____ioutputStream_t2042351338;
	// Cached pointer to Windows.Storage.Streams.IInputStream
	IInputStream_t2821136229* ____iinputStream_t2821136229;
	// Cached pointer to Windows.Media.Core.ITimedMetadataTrackProvider
	ITimedMetadataTrackProvider_t1703961418* ____itimedMetadataTrackProvider_t1703961418;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesisStream_t764091608* get_____ispeechSynthesisStream_t764091608()
	{
		ISpeechSynthesisStream_t764091608* returnValue = ____ispeechSynthesisStream_t764091608;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesisStream_t764091608::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesisStream_t764091608>((&____ispeechSynthesisStream_t764091608), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesisStream_t764091608;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamWithContentType_t3296927652* get_____irandomAccessStreamWithContentType_t3296927652()
	{
		IRandomAccessStreamWithContentType_t3296927652* returnValue = ____irandomAccessStreamWithContentType_t3296927652;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamWithContentType_t3296927652::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamWithContentType_t3296927652>((&____irandomAccessStreamWithContentType_t3296927652), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamWithContentType_t3296927652;
			}
		}
		return returnValue;
	}

	inline IContentTypeProvider_t1806097440* get_____icontentTypeProvider_t1806097440()
	{
		IContentTypeProvider_t1806097440* returnValue = ____icontentTypeProvider_t1806097440;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IContentTypeProvider_t1806097440::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IContentTypeProvider_t1806097440>((&____icontentTypeProvider_t1806097440), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icontentTypeProvider_t1806097440;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStream_t2099996051* get_____irandomAccessStream_t2099996051()
	{
		IRandomAccessStream_t2099996051* returnValue = ____irandomAccessStream_t2099996051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStream_t2099996051>((&____irandomAccessStream_t2099996051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStream_t2099996051;
			}
		}
		return returnValue;
	}

	inline IOutputStream_t2042351338* get_____ioutputStream_t2042351338()
	{
		IOutputStream_t2042351338* returnValue = ____ioutputStream_t2042351338;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IOutputStream_t2042351338>((&____ioutputStream_t2042351338), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ioutputStream_t2042351338;
			}
		}
		return returnValue;
	}

	inline IInputStream_t2821136229* get_____iinputStream_t2821136229()
	{
		IInputStream_t2821136229* returnValue = ____iinputStream_t2821136229;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStream_t2821136229>((&____iinputStream_t2821136229), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStream_t2821136229;
			}
		}
		return returnValue;
	}

	inline ITimedMetadataTrackProvider_t1703961418* get_____itimedMetadataTrackProvider_t1703961418()
	{
		ITimedMetadataTrackProvider_t1703961418* returnValue = ____itimedMetadataTrackProvider_t1703961418;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ITimedMetadataTrackProvider_t1703961418::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ITimedMetadataTrackProvider_t1703961418>((&____itimedMetadataTrackProvider_t1703961418), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____itimedMetadataTrackProvider_t1703961418;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESISSTREAM_T2322339758_H
#ifndef HOSTNAME_T2890034819_H
#define HOSTNAME_T2890034819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostName
struct  HostName_t2890034819  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.IHostName
	IHostName_t3179521082* ____ihostName_t3179521082;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IHostName_t3179521082* get_____ihostName_t3179521082()
	{
		IHostName_t3179521082* returnValue = ____ihostName_t3179521082;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostName_t3179521082>((&____ihostName_t3179521082), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostName_t3179521082;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct HostName_t2890034819_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t2985905689* ____ihostNameFactory_t2985905689;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t664333692* ____ihostNameStatics_t664333692;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t2985905689* get_____ihostNameFactory_t2985905689()
	{
		IHostNameFactory_t2985905689* returnValue = ____ihostNameFactory_t2985905689;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t2985905689::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameFactory_t2985905689>((&____ihostNameFactory_t2985905689), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t2985905689;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t664333692* get_____ihostNameStatics_t664333692()
	{
		IHostNameStatics_t664333692* returnValue = ____ihostNameStatics_t664333692;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t664333692::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameStatics_t664333692>((&____ihostNameStatics_t664333692), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t664333692;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTNAME_T2890034819_H
#ifndef STORAGEFILE_T1751804116_H
#define STORAGEFILE_T1751804116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFile
struct  StorageFile_t1751804116  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFile
	IStorageFile_t455187485* ____istorageFile_t455187485;
	// Cached pointer to Windows.Storage.Streams.IInputStreamReference
	IInputStreamReference_t980626503* ____iinputStreamReference_t980626503;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamReference
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFilePropertiesWithAvailability
	IStorageFilePropertiesWithAvailability_t1554344922* ____istorageFilePropertiesWithAvailability_t1554344922;
	// Cached pointer to Windows.Storage.IStorageFile2
	IStorageFile2_t81501002* ____istorageFile2_t81501002;

public:
	inline IStorageFile_t455187485* get_____istorageFile_t455187485()
	{
		IStorageFile_t455187485* returnValue = ____istorageFile_t455187485;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile_t455187485::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile_t455187485>((&____istorageFile_t455187485), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile_t455187485;
			}
		}
		return returnValue;
	}

	inline IInputStreamReference_t980626503* get_____iinputStreamReference_t980626503()
	{
		IInputStreamReference_t980626503* returnValue = ____iinputStreamReference_t980626503;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStreamReference_t980626503::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStreamReference_t980626503>((&____iinputStreamReference_t980626503), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStreamReference_t980626503;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamReference_t2718546672* get_____irandomAccessStreamReference_t2718546672()
	{
		IRandomAccessStreamReference_t2718546672* returnValue = ____irandomAccessStreamReference_t2718546672;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamReference_t2718546672::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamReference_t2718546672>((&____irandomAccessStreamReference_t2718546672), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamReference_t2718546672;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFilePropertiesWithAvailability_t1554344922* get_____istorageFilePropertiesWithAvailability_t1554344922()
	{
		IStorageFilePropertiesWithAvailability_t1554344922* returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFilePropertiesWithAvailability_t1554344922::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFilePropertiesWithAvailability_t1554344922>((&____istorageFilePropertiesWithAvailability_t1554344922), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
			}
		}
		return returnValue;
	}

	inline IStorageFile2_t81501002* get_____istorageFile2_t81501002()
	{
		IStorageFile2_t81501002* returnValue = ____istorageFile2_t81501002;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile2_t81501002::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile2_t81501002>((&____istorageFile2_t81501002), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile2_t81501002;
			}
		}
		return returnValue;
	}
};

struct StorageFile_t1751804116_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t4131808966* ____istorageFileStatics_t4131808966;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t4131808966* get_____istorageFileStatics_t4131808966()
	{
		IStorageFileStatics_t4131808966* returnValue = ____istorageFileStatics_t4131808966;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t4131808966::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFileStatics_t4131808966>((&____istorageFileStatics_t4131808966), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t4131808966;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFILE_T1751804116_H
#ifndef STORAGEFOLDER_T985480688_H
#define STORAGEFOLDER_T985480688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFolder
struct  StorageFolder_t985480688  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFolder
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.Search.IStorageFolderQueryOperations
	IStorageFolderQueryOperations_t91328000* ____istorageFolderQueryOperations_t91328000;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageFolder2
	IStorageFolder2_t3506658410* ____istorageFolder2_t3506658410;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFolder3
	IStorageFolder3_t1940574469* ____istorageFolder3_t1940574469;

public:
	inline IStorageFolder_t2414910357* get_____istorageFolder_t2414910357()
	{
		IStorageFolder_t2414910357* returnValue = ____istorageFolder_t2414910357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder_t2414910357>((&____istorageFolder_t2414910357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder_t2414910357;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageFolderQueryOperations_t91328000* get_____istorageFolderQueryOperations_t91328000()
	{
		IStorageFolderQueryOperations_t91328000* returnValue = ____istorageFolderQueryOperations_t91328000;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolderQueryOperations_t91328000::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderQueryOperations_t91328000>((&____istorageFolderQueryOperations_t91328000), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderQueryOperations_t91328000;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageFolder2_t3506658410* get_____istorageFolder2_t3506658410()
	{
		IStorageFolder2_t3506658410* returnValue = ____istorageFolder2_t3506658410;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder2_t3506658410::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder2_t3506658410>((&____istorageFolder2_t3506658410), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder2_t3506658410;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFolder3_t1940574469* get_____istorageFolder3_t1940574469()
	{
		IStorageFolder3_t1940574469* returnValue = ____istorageFolder3_t1940574469;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder3_t1940574469::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder3_t1940574469>((&____istorageFolder3_t1940574469), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder3_t1940574469;
			}
		}
		return returnValue;
	}
};

struct StorageFolder_t985480688_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t333412554* ____istorageFolderStatics_t333412554;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t333412554* get_____istorageFolderStatics_t333412554()
	{
		IStorageFolderStatics_t333412554* returnValue = ____istorageFolderStatics_t333412554;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t333412554::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderStatics_t333412554>((&____istorageFolderStatics_t333412554), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t333412554;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFOLDER_T985480688_H
#ifndef DATAREADERLOADOPERATION_T4248924386_H
#define DATAREADERLOADOPERATION_T4248924386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReaderLoadOperation
struct  DataReaderLoadOperation_t4248924386  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADERLOADOPERATION_T4248924386_H
#ifndef DATAWRITERSTOREOPERATION_T1087990177_H
#define DATAWRITERSTOREOPERATION_T1087990177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriterStoreOperation
struct  DataWriterStoreOperation_t1087990177  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITERSTOREOPERATION_T1087990177_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5300 = { 0, sizeof(ICoreApplication_t1778460144*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5301 = { 0, sizeof(ICoreApplication2_t709209101*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5302 = { 0, sizeof(ICoreApplication3_t2275293042*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5303 = { 0, sizeof(ICoreApplicationExit_t3461573293*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5304 = { 0, sizeof(ICoreApplicationUnhandledError_t3134926704*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5305 = { 0, sizeof(ICoreApplicationUseCount_t1878483554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5306 = { 0, sizeof(ICoreApplicationView_t3448274634*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5307 = { 0, sizeof(ICoreApplicationView2_t87912591*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5308 = { 0, sizeof(ICoreApplicationView3_t2816795946*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5309 = { 0, sizeof(ICoreApplicationView5_t3623365000*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5310 = { 0, sizeof(ICoreApplicationView6_t2057281059*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5311 = { 0, sizeof(ICoreImmersiveApplication_t3816774728*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5312 = { 0, sizeof(ICoreImmersiveApplication2_t4020591688*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5313 = { 0, sizeof(ICoreImmersiveApplication3_t1681939528*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5314 = { 0, sizeof(ISimpleHapticsController_t3936202477*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5315 = { 0, sizeof(ISimpleHapticsControllerFeedback_t2199416581*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5316 = { sizeof (SimpleHapticsController_t4220085256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5317 = { sizeof (SimpleHapticsControllerFeedback_t913461083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5318 = { 0, sizeof(IUriEscapeStatics_t1418340874*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5319 = { 0, sizeof(IUriRuntimeClass_t921050115*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5320 = { 0, sizeof(IUriRuntimeClassFactory_t1786313621*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5321 = { 0, sizeof(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5322 = { 0, sizeof(IWwwFormUrlDecoderEntry_t2943299970*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5323 = { 0, sizeof(IWwwFormUrlDecoderRuntimeClass_t497020701*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5324 = { 0, sizeof(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5325 = { sizeof (UniversalApiContract_t3367004861)+ sizeof (RuntimeObject), sizeof(UniversalApiContract_t3367004861 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5326 = { sizeof (Uri_t952691556), -1, sizeof(Uri_t952691556_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5327 = { sizeof (WwwFormUrlDecoder_t4136411681), -1, sizeof(WwwFormUrlDecoder_t4136411681_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5328 = { 0, sizeof(ITimedMetadataTrackProvider_t1703961418*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5329 = { 0, sizeof(IInstalledVoicesStatic_t870565809*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5330 = { 0, sizeof(IInstalledVoicesStatic2_t946760305*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5331 = { 0, sizeof(ISpeechSynthesisStream_t764091608*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5332 = { 0, sizeof(ISpeechSynthesizer_t2734223870*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5333 = { 0, sizeof(ISpeechSynthesizer2_t1865799545*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5334 = { 0, sizeof(IVoiceInformation_t3111056019*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5335 = { sizeof (SpeechSynthesisStream_t2322339758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5336 = { sizeof (SpeechSynthesizer_t2130945875), -1, sizeof(SpeechSynthesizer_t2130945875_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5337 = { sizeof (VoiceInformation_t4266404632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5338 = { 0, sizeof(INetworkInformationStatics_t1568055678*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5339 = { 0, sizeof(INetworkInformationStatics2_t442609477*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5340 = { sizeof (NetworkInformation_t482159730), -1, sizeof(NetworkInformation_t482159730_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5341 = { sizeof (HostName_t2890034819), -1, sizeof(HostName_t2890034819_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5342 = { sizeof (HostNameType_t4170768079)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5342[5] = 
{
	HostNameType_t4170768079::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5343 = { 0, sizeof(IHostName_t3179521082*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5344 = { 0, sizeof(IHostNameFactory_t2985905689*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5345 = { 0, sizeof(IHostNameStatics_t664333692*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5346 = { 0, sizeof(IStreamSocket_t3338378904*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5347 = { 0, sizeof(IStreamSocket2_t2507586357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5348 = { 0, sizeof(IStreamSocket3_t2507586356*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5349 = { 0, sizeof(IStreamSocketListener_t2077125013*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5350 = { 0, sizeof(IStreamSocketListener2_t954540666*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5351 = { 0, sizeof(IStreamSocketListener3_t954540667*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5352 = { 0, sizeof(IStreamSocketListenerConnectionReceivedEventArgs_t3129023480*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5353 = { 0, sizeof(IStreamSocketStatics_t566903188*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5354 = { sizeof (StreamSocket_t121918173), -1, sizeof(StreamSocket_t121918173_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5355 = { sizeof (StreamSocketListener_t1754929646), -1, sizeof(StreamSocketListener_t1754929646_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5356 = { sizeof (StreamSocketListenerConnectionReceivedEventArgs_t3298683243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5357 = { 0, sizeof(IPerceptionTimestamp_t393505964*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5358 = { 0, sizeof(IPerceptionTimestamp2_t3069865132*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5359 = { 0, sizeof(IPerceptionTimestampHelperStatics_t2092781866*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5360 = { 0, sizeof(IPerceptionTimestampHelperStatics2_t3159790349*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5361 = { sizeof (PerceptionTimestamp_t25754965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5362 = { sizeof (PerceptionTimestampHelper_t1405177115), -1, sizeof(PerceptionTimestampHelper_t1405177115_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5363 = { sizeof (ApplicationData_t3489691988), -1, sizeof(ApplicationData_t3489691988_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5364 = { sizeof (CreationCollisionOption_t2003156443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5364[5] = 
{
	CreationCollisionOption_t2003156443::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5365 = { sizeof (FileAccessMode_t2616835387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5365[3] = 
{
	FileAccessMode_t2616835387::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5366 = { 0, sizeof(IApplicationData_t28886227*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5367 = { 0, sizeof(IApplicationData2_t163893929*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5368 = { 0, sizeof(IApplicationData3_t163893930*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5369 = { 0, sizeof(IApplicationDataStatics_t3792839446*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5370 = { 0, sizeof(IApplicationDataStatics2_t2938905366*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5371 = { 0, sizeof(IStorageFile_t455187485*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5372 = { 0, sizeof(IStorageFile2_t81501002*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5373 = { 0, sizeof(IStorageFilePropertiesWithAvailability_t1554344922*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5374 = { 0, sizeof(IStorageFileStatics_t4131808966*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5375 = { 0, sizeof(IStorageFolder_t2414910357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5376 = { 0, sizeof(IStorageFolder2_t3506658410*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5377 = { 0, sizeof(IStorageFolder3_t1940574469*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5378 = { 0, sizeof(IStorageFolderStatics_t333412554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5379 = { 0, sizeof(IStorageItem_t3194585767*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5380 = { 0, sizeof(IStorageItem2_t2827190580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5381 = { 0, sizeof(IStorageItemProperties_t2031733036*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5382 = { 0, sizeof(IStorageItemProperties2_t3993257882*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5383 = { 0, sizeof(IStorageItemPropertiesWithProvider_t3527078644*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5384 = { 0, sizeof(IStorageFolderQueryOperations_t91328000*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5385 = { sizeof (StorageFile_t1751804116), -1, sizeof(StorageFile_t1751804116_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5386 = { sizeof (StorageFolder_t985480688), -1, sizeof(StorageFolder_t985480688_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5387 = { sizeof (DataReader_t2381813649), -1, sizeof(DataReader_t2381813649_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5388 = { sizeof (DataReaderLoadOperation_t4248924386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5389 = { sizeof (DataWriter_t841151054), -1, sizeof(DataWriter_t841151054_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5390 = { sizeof (DataWriterStoreOperation_t1087990177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5391 = { 0, sizeof(IBuffer_t541192229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5392 = { 0, sizeof(IContentTypeProvider_t1806097440*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5393 = { 0, sizeof(IDataReader_t3392321383*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5394 = { 0, sizeof(IDataReaderFactory_t2217455388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5395 = { 0, sizeof(IDataReaderStatics_t1343138968*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5396 = { 0, sizeof(IDataWriter_t1260434628*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5397 = { 0, sizeof(IDataWriterFactory_t624500286*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5398 = { 0, sizeof(IInputStream_t2821136229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5399 = { 0, sizeof(IInputStreamReference_t980626503*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
