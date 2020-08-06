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


// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_t1194737946;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t9239872;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3313059048;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Exception
struct Exception_t;
// System.Random
struct Random_t108471755;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Void
struct Void_t1185182177;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t1476249554;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t4142409509;
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct IPropertyChangedEventArgsFactory_t4178285917;
// Windows.UI.Xaml.IWindowStatics
struct IWindowStatics_t4212309588;
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct INotifyCollectionChangedEventArgsFactory_t1817199772;

struct Guid_t ;
struct IApplication_t1182322651;
struct IBindableIterator_t667386168;
struct IBindableVectorView_t4191940899;
struct IBindableVector_t1801110279;
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper;
struct IUIElement_t3288794271;
struct IWindow_t1812628404;



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
// Windows.UI.Xaml.Data.IPropertyChangedEventArgs
struct NOVTABLE IPropertyChangedEventArgs_t1404159462 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgs_get_PropertyName_m2977473784(Il2CppHString* comReturnValue) = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct NOVTABLE IPropertyChangedEventArgsFactory_t4178285917 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgsFactory_CreateInstance_m601787316(Il2CppHString ___name0, Il2CppIInspectable* ___baseInterface1, Il2CppIInspectable** ___innerInterface2, PropertyChangedEventArgs_t3313059048 ** comReturnValue) = 0;
};
// Windows.UI.Xaml.IApplication
struct NOVTABLE IApplication_t1182322651 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped0_get_Resources_m484205482() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped1_put_Resources_m3203007069() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped2_get_DebugSettings_m282823822() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped3_get_RequestedTheme_m3933601614() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped4_put_RequestedTheme_m3720567345() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped5_add_UnhandledException_m1147235633() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped6_remove_UnhandledException_m136360811() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped7_add_Suspending_m536856653() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped8_remove_Suspending_m1785828183() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped9_add_Resuming_m3284566186() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped10_remove_Resuming_m3758875511() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication_U24__Stripped11_Exit_m306981589() = 0;
};
// Windows.UI.Xaml.IApplication2
struct NOVTABLE IApplication2_t3930884615 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped0_get_FocusVisualKind_m1442036299() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped1_put_FocusVisualKind_m663960029() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped2_get_RequiresPointerMode_m1446904523() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped3_put_RequiresPointerMode_m3141982784() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped4_add_LeavingBackground_m2021836178() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped5_remove_LeavingBackground_m195457590() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped6_add_EnteredBackground_m36281575() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication2_U24__Stripped7_remove_EnteredBackground_m2593518752() = 0;
};
// Windows.UI.Xaml.IApplication3
struct NOVTABLE IApplication3_t3930884616 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplication3_U24__Stripped0_get_HighContrastAdjustment_m2249039032() = 0;
	virtual il2cpp_hresult_t STDCALL IApplication3_U24__Stripped1_put_HighContrastAdjustment_m3056767933() = 0;
};
// Windows.UI.Xaml.IApplicationFactory
struct NOVTABLE IApplicationFactory_t538383476 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationFactory_U24__Stripped0_CreateInstance_m190136095() = 0;
};
// Windows.UI.Xaml.IApplicationOverrides
struct NOVTABLE IApplicationOverrides_t3552632327 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped0_OnActivated_m3472264498() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped1_OnLaunched_m3920702501() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped2_OnFileActivated_m2772343929() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped3_OnSearchActivated_m210264762() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped4_OnShareTargetActivated_m453615910() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped5_OnFileOpenPickerActivated_m1375228987() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped6_OnFileSavePickerActivated_m3852593050() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped7_OnCachedFileUpdaterActivated_m3610016088() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides_U24__Stripped8_OnWindowCreated_m3528199524() = 0;
};
// Windows.UI.Xaml.IApplicationOverrides2
struct NOVTABLE IApplicationOverrides2_t3551452679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationOverrides2_U24__Stripped0_OnBackgroundActivated_m1735692523() = 0;
};
// Windows.UI.Xaml.IApplicationStatics
struct NOVTABLE IApplicationStatics_t3594174357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationStatics_get_Current_m491513732(IApplication_t1182322651** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationStatics_U24__Stripped0_Start_m1590544222() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationStatics_U24__Stripped1_LoadComponent_m2683897674() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationStatics_U24__Stripped2_LoadComponent_m4169994439() = 0;
};
// Windows.UI.Xaml.IDependencyObject
struct NOVTABLE IDependencyObject_t3468341335 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped0_GetValue_m1957740890() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped1_SetValue_m1035023860() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped2_ClearValue_m1609098810() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped3_ReadLocalValue_m4161021806() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped4_GetAnimationBaseValue_m182226023() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped5_get_Dispatcher_m187262419() = 0;
};
// Windows.UI.Xaml.IDependencyObject2
struct NOVTABLE IDependencyObject2_t3465326679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped0_RegisterPropertyChangedCallback_m1182027682() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped1_UnregisterPropertyChangedCallback_m2683655511() = 0;
};
// Windows.UI.Xaml.IDependencyObjectFactory
struct NOVTABLE IDependencyObjectFactory_t1390337327 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObjectFactory_U24__Stripped0_CreateInstance_m2528011140() = 0;
};
// Windows.UI.Xaml.IFrameworkElement
struct NOVTABLE IFrameworkElement_t1727772090 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped0_get_Triggers_m2129127559() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped1_get_Resources_m3712382430() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped2_put_Resources_m4247577134() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped3_get_Tag_m3795506638() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped4_put_Tag_m551378723() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped5_get_Language_m2230307011() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped6_put_Language_m4173221482() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped7_get_ActualWidth_m3765714704() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped8_get_ActualHeight_m201001695() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped9_get_Width_m2346933531() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped10_put_Width_m1338708800() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped11_get_Height_m3715553494() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped12_put_Height_m1917330615() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped13_get_MinWidth_m3494115106() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped14_put_MinWidth_m2521453182() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped15_get_MaxWidth_m2172988018() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped16_put_MaxWidth_m134233646() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped17_get_MinHeight_m3893731516() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped18_put_MinHeight_m997829124() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped19_get_MaxHeight_m4225681284() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped20_put_MaxHeight_m998894222() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped21_get_HorizontalAlignment_m123677769() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped22_put_HorizontalAlignment_m3385509983() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped23_get_VerticalAlignment_m84644216() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped24_put_VerticalAlignment_m269641103() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped25_get_Margin_m1415178701() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped26_put_Margin_m1314781863() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped27_get_Name_m3408387619() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped28_put_Name_m3915720599() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped29_get_BaseUri_m679790422() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped30_get_DataContext_m2374058149() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped31_put_DataContext_m904272743() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped32_get_Style_m621839791() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped33_put_Style_m364093169() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped34_get_Parent_m3829461513() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped35_get_FlowDirection_m1427072720() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped36_put_FlowDirection_m1138271303() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped37_add_Loaded_m2657256288() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped38_remove_Loaded_m14380143() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped39_add_Unloaded_m1953142752() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped40_remove_Unloaded_m1789237915() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped41_add_SizeChanged_m789174205() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped42_remove_SizeChanged_m3909578422() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped43_add_LayoutUpdated_m1795117806() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped44_remove_LayoutUpdated_m518034917() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped45_FindName_m773720809() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped46_SetBinding_m43048985() = 0;
};
// Windows.UI.Xaml.IFrameworkElement2
struct NOVTABLE IFrameworkElement2_t1731048890 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped0_get_RequestedTheme_m3859230078() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped1_put_RequestedTheme_m2095923211() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped2_add_DataContextChanged_m3076707601() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped3_remove_DataContextChanged_m1211015717() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped4_GetBindingExpression_m3511170676() = 0;
};
// Windows.UI.Xaml.IFrameworkElement3
struct NOVTABLE IFrameworkElement3_t1731114426 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement3_U24__Stripped0_add_Loading_m2675988050() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement3_U24__Stripped1_remove_Loading_m3302000958() = 0;
};
// Windows.UI.Xaml.IFrameworkElement4
struct NOVTABLE IFrameworkElement4_t1730655674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped0_get_AllowFocusOnInteraction_m2955994786() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped1_put_AllowFocusOnInteraction_m3170054187() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped2_get_FocusVisualMargin_m3514792131() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped3_put_FocusVisualMargin_m2465948341() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped4_get_FocusVisualSecondaryThickness_m4213645990() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped5_put_FocusVisualSecondaryThickness_m1809404551() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped6_get_FocusVisualPrimaryThickness_m286791734() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped7_put_FocusVisualPrimaryThickness_m3777400658() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped8_get_FocusVisualSecondaryBrush_m1971297289() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped9_put_FocusVisualSecondaryBrush_m2315253874() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped10_get_FocusVisualPrimaryBrush_m1701143622() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped11_put_FocusVisualPrimaryBrush_m3451370254() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped12_get_AllowFocusWhenDisabled_m2219643453() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped13_put_AllowFocusWhenDisabled_m4097462109() = 0;
};
// Windows.UI.Xaml.IFrameworkElement6
struct NOVTABLE IFrameworkElement6_t1730786746 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement6_U24__Stripped0_get_ActualTheme_m4249274965() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement6_U24__Stripped1_add_ActualThemeChanged_m1504535994() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement6_U24__Stripped2_remove_ActualThemeChanged_m2783854678() = 0;
};
// Windows.UI.Xaml.IFrameworkElement7
struct NOVTABLE IFrameworkElement7_t1730852282 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement7_U24__Stripped0_get_IsLoaded_m155183885() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement7_U24__Stripped1_add_EffectiveViewportChanged_m2009857807() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement7_U24__Stripped2_remove_EffectiveViewportChanged_m1922281415() = 0;
};
// Windows.UI.Xaml.IFrameworkElementFactory
struct NOVTABLE IFrameworkElementFactory_t2131831971 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementFactory_U24__Stripped0_CreateInstance_m2649571597() = 0;
};
// Windows.UI.Xaml.IFrameworkElementOverrides
struct NOVTABLE IFrameworkElementOverrides_t1842747390 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides_U24__Stripped0_MeasureOverride_m266561459() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides_U24__Stripped1_ArrangeOverride_m1618214695() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides_U24__Stripped2_OnApplyTemplate_m2376117007() = 0;
};
// Windows.UI.Xaml.IFrameworkElementOverrides2
struct NOVTABLE IFrameworkElementOverrides2_t2903822428 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides2_U24__Stripped0_GoToElementStateCore_m4059249501() = 0;
};
// Windows.UI.Xaml.IFrameworkElementProtected7
struct NOVTABLE IFrameworkElementProtected7_t2089190057 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementProtected7_U24__Stripped0_InvalidateViewport_m1571869116() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics
struct NOVTABLE IFrameworkElementStatics_t685079279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped0_get_TagProperty_m1304495473() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped1_get_LanguageProperty_m3474246373() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped2_get_ActualWidthProperty_m2698354757() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped3_get_ActualHeightProperty_m2149038307() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped4_get_WidthProperty_m399335040() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped5_get_HeightProperty_m2289665979() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped6_get_MinWidthProperty_m2109388824() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped7_get_MaxWidthProperty_m2529820592() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped8_get_MinHeightProperty_m685742670() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped9_get_MaxHeightProperty_m2909682419() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped10_get_HorizontalAlignmentProperty_m442132297() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped11_get_VerticalAlignmentProperty_m4142230850() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped12_get_MarginProperty_m4284158343() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped13_get_NameProperty_m473028578() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped14_get_DataContextProperty_m3877514259() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped15_get_StyleProperty_m2101848247() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped16_get_FlowDirectionProperty_m3045417150() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics2
struct NOVTABLE IFrameworkElementStatics2_t2563243859 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics2_U24__Stripped0_get_RequestedThemeProperty_m4062911476() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics4
struct NOVTABLE IFrameworkElementStatics4_t2563243865 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped0_get_AllowFocusOnInteractionProperty_m2901317583() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped1_get_FocusVisualMarginProperty_m2877935236() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped2_get_FocusVisualSecondaryThicknessProperty_m1138096229() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped3_get_FocusVisualPrimaryThicknessProperty_m706318682() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped4_get_FocusVisualSecondaryBrushProperty_m607482709() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped5_get_FocusVisualPrimaryBrushProperty_m680258291() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped6_get_AllowFocusWhenDisabledProperty_m3555428706() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics5
struct NOVTABLE IFrameworkElementStatics5_t2563243864 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics5_U24__Stripped0_DeferTree_m3832717614() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics6
struct NOVTABLE IFrameworkElementStatics6_t2563243863 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics6_U24__Stripped0_get_ActualThemeProperty_m2451804045() = 0;
};
// Windows.UI.Xaml.IUIElement
struct NOVTABLE IUIElement_t3288794271 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped0_get_DesiredSize_m709505871() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped1_get_AllowDrop_m3041840487() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped2_put_AllowDrop_m1914749527() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped3_get_Opacity_m1283699049() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped4_put_Opacity_m1763390924() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped5_get_Clip_m2019843943() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped6_put_Clip_m2265905608() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped7_get_RenderTransform_m3490464697() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped8_put_RenderTransform_m898491632() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped9_get_Projection_m1464130521() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped10_put_Projection_m616859082() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped11_get_RenderTransformOrigin_m3594412852() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped12_put_RenderTransformOrigin_m4070130220() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped13_get_IsHitTestVisible_m1599923731() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped14_put_IsHitTestVisible_m1467555182() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped15_get_Visibility_m1485712346() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped16_put_Visibility_m519271095() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped17_get_RenderSize_m2451352256() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped18_get_UseLayoutRounding_m3341743904() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped19_put_UseLayoutRounding_m3125512970() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped20_get_Transitions_m2849948766() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped21_put_Transitions_m292681833() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped22_get_CacheMode_m3654219909() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped23_put_CacheMode_m2632895200() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped24_get_IsTapEnabled_m3278885581() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped25_put_IsTapEnabled_m1608082586() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped26_get_IsDoubleTapEnabled_m3126845406() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped27_put_IsDoubleTapEnabled_m2925086161() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped28_get_IsRightTapEnabled_m316417938() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped29_put_IsRightTapEnabled_m1518143830() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped30_get_IsHoldingEnabled_m3760226653() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped31_put_IsHoldingEnabled_m1861642174() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped32_get_ManipulationMode_m1557223318() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped33_put_ManipulationMode_m3366924177() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped34_get_PointerCaptures_m3724483891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped35_add_KeyUp_m200859880() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped36_remove_KeyUp_m119276464() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped37_add_KeyDown_m1840932757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped38_remove_KeyDown_m3053191285() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped39_add_GotFocus_m746626947() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped40_remove_GotFocus_m2480174581() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped41_add_LostFocus_m1266493993() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped42_remove_LostFocus_m2240699806() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped43_add_DragEnter_m1980480137() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped44_remove_DragEnter_m2374587345() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped45_add_DragLeave_m1764869820() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped46_remove_DragLeave_m1996947567() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped47_add_DragOver_m2971783047() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped48_remove_DragOver_m181087868() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped49_add_Drop_m3309253802() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped50_remove_Drop_m140032712() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped51_add_PointerPressed_m3652816380() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped52_remove_PointerPressed_m2925169172() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped53_add_PointerMoved_m1570630938() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped54_remove_PointerMoved_m3082380070() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped55_add_PointerReleased_m1626534899() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped56_remove_PointerReleased_m1933810421() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped57_add_PointerEntered_m3246226754() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped58_remove_PointerEntered_m3267619821() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped59_add_PointerExited_m1189440032() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped60_remove_PointerExited_m4240502376() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped61_add_PointerCaptureLost_m1281635200() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped62_remove_PointerCaptureLost_m1928036220() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped63_add_PointerCanceled_m1556729753() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped64_remove_PointerCanceled_m1735245720() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped65_add_PointerWheelChanged_m1013600326() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped66_remove_PointerWheelChanged_m1863361210() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped67_add_Tapped_m3601874654() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped68_remove_Tapped_m3911463356() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped69_add_DoubleTapped_m328664637() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped70_remove_DoubleTapped_m1570413593() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped71_add_Holding_m4020918841() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped72_remove_Holding_m1467099910() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped73_add_RightTapped_m935484686() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped74_remove_RightTapped_m3756107077() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped75_add_ManipulationStarting_m750061822() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped76_remove_ManipulationStarting_m3485797370() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped77_add_ManipulationInertiaStarting_m1232703763() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped78_remove_ManipulationInertiaStarting_m1085187474() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped79_add_ManipulationStarted_m1202855073() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped80_remove_ManipulationStarted_m3160566381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped81_add_ManipulationDelta_m3829629683() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped82_remove_ManipulationDelta_m2594433141() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped83_add_ManipulationCompleted_m1390324433() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped84_remove_ManipulationCompleted_m2373650716() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped85_Measure_m2553385115() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped86_Arrange_m1454536553() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped87_CapturePointer_m1568653454() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped88_ReleasePointerCapture_m2759647656() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped89_ReleasePointerCaptures_m3581341934() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped90_AddHandler_m786959478() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped91_RemoveHandler_m36482523() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped92_TransformToVisual_m3151024488() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped93_InvalidateMeasure_m2862264214() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped94_InvalidateArrange_m1939028230() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped95_UpdateLayout_m615574013() = 0;
};
// Windows.UI.Xaml.IUIElement10
struct NOVTABLE IUIElement10_t588432872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped0_get_ActualOffset_m1214995777() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped1_get_ActualSize_m1997089386() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped2_get_XamlRoot_m377091399() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped3_put_XamlRoot_m2825479441() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped4_get_UIContext_m3978158873() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped5_get_Shadow_m1264395313() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement10_U24__Stripped6_put_Shadow_m235425709() = 0;
};
// Windows.UI.Xaml.IUIElement2
struct NOVTABLE IUIElement2_t1568362829 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped0_get_CompositeMode_m2320528698() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped1_put_CompositeMode_m2387925255() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped2_CancelDirectManipulations_m927747193() = 0;
};
// Windows.UI.Xaml.IUIElement3
struct NOVTABLE IUIElement3_t3134446770 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped0_get_Transform3D_m934841580() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped1_put_Transform3D_m638506349() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped2_get_CanDrag_m520210759() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped3_put_CanDrag_m3560492036() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped4_add_DragStarting_m2694354441() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped5_remove_DragStarting_m2454540868() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped6_add_DropCompleted_m1175786039() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped7_remove_DropCompleted_m611253450() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped8_StartDragAsync_m2459046213() = 0;
};
// Windows.UI.Xaml.IUIElement4
struct NOVTABLE IUIElement4_t761793775 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped0_get_ContextFlyout_m2253164546() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped1_put_ContextFlyout_m3007812933() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped2_get_ExitDisplayModeOnAccessKeyInvoked_m842823807() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped3_put_ExitDisplayModeOnAccessKeyInvoked_m2535379857() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped4_get_IsAccessKeyScope_m3950109518() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped5_put_IsAccessKeyScope_m2750740659() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped6_get_AccessKeyScopeOwner_m2732354747() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped7_put_AccessKeyScopeOwner_m3207032609() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped8_get_AccessKey_m802488922() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped9_put_AccessKey_m687120149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped10_add_ContextRequested_m2385230748() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped11_remove_ContextRequested_m1248239922() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped12_add_ContextCanceled_m2065709033() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped13_remove_ContextCanceled_m3874277537() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped14_add_AccessKeyDisplayRequested_m3815559356() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped15_remove_AccessKeyDisplayRequested_m567478217() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped16_add_AccessKeyDisplayDismissed_m999452147() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped17_remove_AccessKeyDisplayDismissed_m3269864802() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped18_add_AccessKeyInvoked_m3234915069() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped19_remove_AccessKeyInvoked_m3497140154() = 0;
};
// Windows.UI.Xaml.IUIElement5
struct NOVTABLE IUIElement5_t2327877716 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped0_get_Lights_m3852189642() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped1_get_KeyTipPlacementMode_m3518358736() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped2_put_KeyTipPlacementMode_m4085063995() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped3_get_KeyTipHorizontalOffset_m1041374737() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped4_put_KeyTipHorizontalOffset_m1053336967() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped5_get_KeyTipVerticalOffset_m242791772() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped6_put_KeyTipVerticalOffset_m4275497207() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped7_get_XYFocusKeyboardNavigation_m1413502891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped8_put_XYFocusKeyboardNavigation_m2278532605() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped9_get_XYFocusUpNavigationStrategy_m736030916() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped10_put_XYFocusUpNavigationStrategy_m4003263365() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped11_get_XYFocusDownNavigationStrategy_m130943138() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped12_put_XYFocusDownNavigationStrategy_m4218571923() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped13_get_XYFocusLeftNavigationStrategy_m2044067174() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped14_put_XYFocusLeftNavigationStrategy_m3083452028() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped15_get_XYFocusRightNavigationStrategy_m2694847801() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped16_put_XYFocusRightNavigationStrategy_m2397921798() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped17_get_HighContrastAdjustment_m459726645() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped18_put_HighContrastAdjustment_m4227084072() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped19_get_TabFocusNavigation_m3111587259() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped20_put_TabFocusNavigation_m938136106() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped21_add_GettingFocus_m1116968056() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped22_remove_GettingFocus_m3837629682() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped23_add_LosingFocus_m253118518() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped24_remove_LosingFocus_m1486763130() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped25_add_NoFocusCandidateFound_m4234253717() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped26_remove_NoFocusCandidateFound_m4022790968() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped27_StartBringIntoView_m3875079692() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped28_StartBringIntoView_m145204572() = 0;
};
// Windows.UI.Xaml.IUIElement7
struct NOVTABLE IUIElement7_t1165078302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped0_get_KeyboardAccelerators_m314738730() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped1_add_CharacterReceived_m3366474890() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped2_remove_CharacterReceived_m3990213188() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped3_add_ProcessKeyboardAccelerators_m393671582() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped4_remove_ProcessKeyboardAccelerators_m583944176() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped5_add_PreviewKeyDown_m3683785448() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped6_remove_PreviewKeyDown_m1586689604() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped7_add_PreviewKeyUp_m169946256() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped8_remove_PreviewKeyUp_m2860320783() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped9_TryInvokeKeyboardAccelerator_m928627232() = 0;
};
// Windows.UI.Xaml.IUIElement8
struct NOVTABLE IUIElement8_t2374931883 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped0_get_KeyTipTarget_m1722824891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped1_put_KeyTipTarget_m955880836() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped2_get_KeyboardAcceleratorPlacementTarget_m3293357750() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped3_put_KeyboardAcceleratorPlacementTarget_m423403693() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped4_get_KeyboardAcceleratorPlacementMode_m816856528() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped5_put_KeyboardAcceleratorPlacementMode_m2830594714() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped6_add_BringIntoViewRequested_m4147617655() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped7_remove_BringIntoViewRequested_m1561917121() = 0;
};
// Windows.UI.Xaml.IUIElement9
struct NOVTABLE IUIElement9_t3941015824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped0_get_CanBeScrollAnchor_m1527703909() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped1_put_CanBeScrollAnchor_m325707168() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped2_get_OpacityTransition_m37697326() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped3_put_OpacityTransition_m2096897601() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped4_get_Translation_m1765663675() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped5_put_Translation_m1063301797() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped6_get_TranslationTransition_m1473117537() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped7_put_TranslationTransition_m1391139038() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped8_get_Rotation_m4045586527() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped9_put_Rotation_m3045336694() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped10_get_RotationTransition_m3938304381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped11_put_RotationTransition_m2238926377() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped12_get_Scale_m398323375() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped13_put_Scale_m128920757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped14_get_ScaleTransition_m637632953() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped15_put_ScaleTransition_m2517675398() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped16_get_TransformMatrix_m382616738() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped17_put_TransformMatrix_m2444347344() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped18_get_CenterPoint_m1103649345() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped19_put_CenterPoint_m3026801298() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped20_get_RotationAxis_m2879997943() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped21_put_RotationAxis_m3742774883() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped22_StartAnimation_m3481251498() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement9_U24__Stripped23_StopAnimation_m4117982937() = 0;
};
// Windows.UI.Xaml.IUIElementFactory
struct NOVTABLE IUIElementFactory_t520894359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.IUIElementOverrides
struct NOVTABLE IUIElementOverrides_t2453769578 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped0_OnCreateAutomationPeer_m4180009883() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped1_OnDisconnectVisualChildren_m2912367149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped2_FindSubElementsForTouchTargeting_m2501103066() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides7
struct NOVTABLE IUIElementOverrides7_t2026802538 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides7_U24__Stripped0_GetChildrenInTabFocusOrder_m2438105784() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides7_U24__Stripped1_OnProcessKeyboardAccelerators_m3389550628() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides8
struct NOVTABLE IUIElementOverrides8_t3983117674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides8_U24__Stripped0_OnKeyboardAcceleratorInvoked_m579114990() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides8_U24__Stripped1_OnBringIntoViewRequested_m2077379998() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides9
struct NOVTABLE IUIElementOverrides9_t1644465514 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides9_U24__Stripped0_PopulatePropertyInfoOverride_m1508027304() = 0;
};
// Windows.UI.Xaml.IUIElementStatics
struct NOVTABLE IUIElementStatics_t2851391452 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped0_get_KeyDownEvent_m3282640798() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped1_get_KeyUpEvent_m2430006508() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped2_get_PointerEnteredEvent_m706886339() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped3_get_PointerPressedEvent_m1604554080() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped4_get_PointerMovedEvent_m1720155775() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped5_get_PointerReleasedEvent_m1544992601() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped6_get_PointerExitedEvent_m2286235842() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped7_get_PointerCaptureLostEvent_m2216822275() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped8_get_PointerCanceledEvent_m3727711221() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped9_get_PointerWheelChangedEvent_m1234194674() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped10_get_TappedEvent_m457097512() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped11_get_DoubleTappedEvent_m2036555176() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped12_get_HoldingEvent_m4187082037() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped13_get_RightTappedEvent_m2020476792() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped14_get_ManipulationStartingEvent_m2779776069() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped15_get_ManipulationInertiaStartingEvent_m1734054308() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped16_get_ManipulationStartedEvent_m2167151048() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped17_get_ManipulationDeltaEvent_m1802581843() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped18_get_ManipulationCompletedEvent_m3264411539() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped19_get_DragEnterEvent_m2373691178() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped20_get_DragLeaveEvent_m1839505660() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped21_get_DragOverEvent_m559253999() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped22_get_DropEvent_m2352208043() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped23_get_AllowDropProperty_m993570433() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped24_get_OpacityProperty_m740386576() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped25_get_ClipProperty_m3943830253() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped26_get_RenderTransformProperty_m2507760255() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped27_get_ProjectionProperty_m3076524370() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped28_get_RenderTransformOriginProperty_m4294828757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped29_get_IsHitTestVisibleProperty_m1476920693() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped30_get_VisibilityProperty_m2327890703() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped31_get_UseLayoutRoundingProperty_m3937161119() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped32_get_TransitionsProperty_m891434974() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped33_get_CacheModeProperty_m374930607() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped34_get_IsTapEnabledProperty_m1165183625() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped35_get_IsDoubleTapEnabledProperty_m1523951021() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped36_get_IsRightTapEnabledProperty_m680050134() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped37_get_IsHoldingEnabledProperty_m3582174128() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped38_get_ManipulationModeProperty_m729018583() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped39_get_PointerCapturesProperty_m3889929875() = 0;
};
// Windows.UI.Xaml.IUIElementStatics10
struct NOVTABLE IUIElementStatics10_t1528525195 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics10_U24__Stripped0_get_ShadowProperty_m3178669363() = 0;
};
// Windows.UI.Xaml.IUIElementStatics2
struct NOVTABLE IUIElementStatics2_t2850211804 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics2_U24__Stripped0_get_CompositeModeProperty_m348935177() = 0;
};
// Windows.UI.Xaml.IUIElementStatics3
struct NOVTABLE IUIElementStatics3_t2850277340 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped0_get_Transform3DProperty_m80143119() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped1_get_CanDragProperty_m2972085764() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped2_TryStartDirectManipulation_m2962009957() = 0;
};
// Windows.UI.Xaml.IUIElementStatics4
struct NOVTABLE IUIElementStatics4_t2850080732 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped0_get_ContextFlyoutProperty_m3337258647() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped1_get_ExitDisplayModeOnAccessKeyInvokedProperty_m957145381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped2_get_IsAccessKeyScopeProperty_m1588787071() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped3_get_AccessKeyScopeOwnerProperty_m1259683738() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped4_get_AccessKeyProperty_m96307873() = 0;
};
// Windows.UI.Xaml.IUIElementStatics5
struct NOVTABLE IUIElementStatics5_t2850146268 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped0_get_LightsProperty_m2261138472() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped1_get_KeyTipPlacementModeProperty_m987709722() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped2_get_KeyTipHorizontalOffsetProperty_m2917931878() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped3_get_KeyTipVerticalOffsetProperty_m1467972288() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped4_get_XYFocusKeyboardNavigationProperty_m2709596147() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped5_get_XYFocusUpNavigationStrategyProperty_m904536377() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped6_get_XYFocusDownNavigationStrategyProperty_m124140899() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped7_get_XYFocusLeftNavigationStrategyProperty_m1791013667() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped8_get_XYFocusRightNavigationStrategyProperty_m255940994() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped9_get_HighContrastAdjustmentProperty_m554935372() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped10_get_TabFocusNavigationProperty_m1958710776() = 0;
};
// Windows.UI.Xaml.IUIElementStatics6
struct NOVTABLE IUIElementStatics6_t2849949660 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped0_get_GettingFocusEvent_m235841184() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped1_get_LosingFocusEvent_m3992675556() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped2_get_NoFocusCandidateFoundEvent_m4026140250() = 0;
};
// Windows.UI.Xaml.IUIElementStatics7
struct NOVTABLE IUIElementStatics7_t2850015196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped0_get_PreviewKeyDownEvent_m1717309932() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped1_get_CharacterReceivedEvent_m149088619() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped2_get_PreviewKeyUpEvent_m586550763() = 0;
};
// Windows.UI.Xaml.IUIElementStatics8
struct NOVTABLE IUIElementStatics8_t2849818588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped0_get_BringIntoViewRequestedEvent_m3557629462() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped1_get_ContextRequestedEvent_m3564525032() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped2_get_KeyTipTargetProperty_m495934429() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped3_get_KeyboardAcceleratorPlacementTargetProperty_m3470991248() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped4_get_KeyboardAcceleratorPlacementModeProperty_m2034484522() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped5_RegisterAsScrollPort_m3289950510() = 0;
};
// Windows.UI.Xaml.IUIElementStatics9
struct NOVTABLE IUIElementStatics9_t2849884124 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics9_U24__Stripped0_get_CanBeScrollAnchorProperty_m1489323709() = 0;
};
// Windows.UI.Xaml.IWindow
struct NOVTABLE IWindow_t1812628404 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped0_get_Bounds_m123376021() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped1_get_Visible_m592197766() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped2_get_Content_m1746690858() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_put_Content_m1198270784(IUIElement_t3288794271* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped3_get_CoreWindow_m4259805472() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped4_get_Dispatcher_m3798848468() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped5_add_Activated_m3811839677() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped6_remove_Activated_m2029729572() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped7_add_Closed_m3691173314() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped8_remove_Closed_m3910943907() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped9_add_SizeChanged_m2557086806() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped10_remove_SizeChanged_m2630680177() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped11_add_VisibilityChanged_m895439912() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped12_remove_VisibilityChanged_m2918732124() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_Activate_m2008678349() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped13_Close_m2866880086() = 0;
};
// Windows.UI.Xaml.IWindow2
struct NOVTABLE IWindow2_t194020276 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow2_U24__Stripped0_SetTitleBar_m2660430300() = 0;
};
// Windows.UI.Xaml.IWindow3
struct NOVTABLE IWindow3_t2532672436 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow3_U24__Stripped0_get_Compositor_m3306310847() = 0;
};
// Windows.UI.Xaml.IWindow4
struct NOVTABLE IWindow4_t4106650548 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow4_U24__Stripped0_get_UIContext_m2571053082() = 0;
};
// Windows.UI.Xaml.IWindowStatics
struct NOVTABLE IWindowStatics_t4212309588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindowStatics_get_Current_m2727593796(IWindow_t1812628404** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t2147255965 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m3188154520(IBindableIterator_t667386168** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterator
struct NOVTABLE IBindableIterator_t667386168 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_Current_m3059254492(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_HasCurrent_m3082354642(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_MoveNext_m550148855(bool* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_t1801110279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m2354796153(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m151438974(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m1491544680(IBindableVectorView_t4191940899** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m627110519(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m1920883433(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m450046008(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m3479961725(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m2201043447(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m2914381745() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m717217363() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_t4191940899 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_m2042489765(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m2561144479(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_m2936101316(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
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
#ifndef PROPERTYCHANGEDEVENTARGS_T1492749306_H
#define PROPERTYCHANGEDEVENTARGS_T1492749306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t1492749306  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgs
	IPropertyChangedEventArgs_t1404159462* ____ipropertyChangedEventArgs_t1404159462;

public:
	inline IPropertyChangedEventArgs_t1404159462* get_____ipropertyChangedEventArgs_t1404159462()
	{
		IPropertyChangedEventArgs_t1404159462* returnValue = ____ipropertyChangedEventArgs_t1404159462;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPropertyChangedEventArgs_t1404159462::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgs_t1404159462>((&____ipropertyChangedEventArgs_t1404159462), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgs_t1404159462;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct PropertyChangedEventArgs_t1492749306_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
	IPropertyChangedEventArgsFactory_t4178285917* ____ipropertyChangedEventArgsFactory_t4178285917;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Data.PropertyChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPropertyChangedEventArgsFactory_t4178285917* get_____ipropertyChangedEventArgsFactory_t4178285917()
	{
		IPropertyChangedEventArgsFactory_t4178285917* returnValue = ____ipropertyChangedEventArgsFactory_t4178285917;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPropertyChangedEventArgsFactory_t4178285917::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgsFactory_t4178285917>((&____ipropertyChangedEventArgsFactory_t4178285917), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgsFactory_t4178285917;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T1492749306_H
#ifndef CONTENTPROPERTYATTRIBUTE_T1871920044_H
#define CONTENTPROPERTYATTRIBUTE_T1871920044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Markup.ContentPropertyAttribute
struct  ContentPropertyAttribute_t1871920044  : public Attribute_t861562559
{
public:
	// System.String Windows.UI.Xaml.Markup.ContentPropertyAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ContentPropertyAttribute_t1871920044, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTPROPERTYATTRIBUTE_T1871920044_H
#ifndef WINDOW_T610934964_H
#define WINDOW_T610934964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Window
struct  Window_t610934964  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.IWindow
	IWindow_t1812628404* ____iwindow_t1812628404;
	// Cached pointer to Windows.UI.Xaml.IWindow2
	IWindow2_t194020276* ____iwindow2_t194020276;
	// Cached pointer to Windows.UI.Xaml.IWindow3
	IWindow3_t2532672436* ____iwindow3_t2532672436;
	// Cached pointer to Windows.UI.Xaml.IWindow4
	IWindow4_t4106650548* ____iwindow4_t4106650548;

public:
	inline IWindow_t1812628404* get_____iwindow_t1812628404()
	{
		IWindow_t1812628404* returnValue = ____iwindow_t1812628404;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow_t1812628404::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow_t1812628404>((&____iwindow_t1812628404), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow_t1812628404;
			}
		}
		return returnValue;
	}

	inline IWindow2_t194020276* get_____iwindow2_t194020276()
	{
		IWindow2_t194020276* returnValue = ____iwindow2_t194020276;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow2_t194020276::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow2_t194020276>((&____iwindow2_t194020276), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow2_t194020276;
			}
		}
		return returnValue;
	}

	inline IWindow3_t2532672436* get_____iwindow3_t2532672436()
	{
		IWindow3_t2532672436* returnValue = ____iwindow3_t2532672436;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow3_t2532672436::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow3_t2532672436>((&____iwindow3_t2532672436), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow3_t2532672436;
			}
		}
		return returnValue;
	}

	inline IWindow4_t4106650548* get_____iwindow4_t4106650548()
	{
		IWindow4_t4106650548* returnValue = ____iwindow4_t4106650548;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow4_t4106650548::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow4_t4106650548>((&____iwindow4_t4106650548), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow4_t4106650548;
			}
		}
		return returnValue;
	}
};

struct Window_t610934964_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IWindowStatics
	IWindowStatics_t4212309588* ____iwindowStatics_t4212309588;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Window"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWindowStatics_t4212309588* get_____iwindowStatics_t4212309588()
	{
		IWindowStatics_t4212309588* returnValue = ____iwindowStatics_t4212309588;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWindowStatics_t4212309588::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindowStatics_t4212309588>((&____iwindowStatics_t4212309588), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindowStatics_t4212309588;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOW_T610934964_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t1056453382 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t1056453382, ___value___2)); }
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
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
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
// Windows.UI.Xaml.Interop.INotifyCollectionChanged
struct NOVTABLE INotifyCollectionChanged_t3244377239 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChanged_add_CollectionChanged_m1116549919(INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper* ___handler0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChanged_remove_CollectionChanged_m1364461162(EventRegistrationToken_t318890788  ___token0) = 0;
};
#ifndef TYPEKIND_T2273581760_H
#define TYPEKIND_T2273581760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_t2273581760 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2273581760, ___value___2)); }
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
#endif // TYPEKIND_T2273581760_H
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
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
struct NOVTABLE INotifyCollectionChangedEventArgs_t951239883 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_Action_m131830108(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_NewItems_m4174321480(IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_OldItems_m3291453603(IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_NewStartingIndex_m3677161728(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_OldStartingIndex_m820494605(int32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct NOVTABLE INotifyCollectionChangedEventArgsFactory_t1817199772 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgsFactory_CreateInstanceWithAllParameters_m430772519(int32_t ___action0, IBindableVector_t1801110279* ___newItems1, IBindableVector_t1801110279* ___oldItems2, int32_t ___newIndex3, int32_t ___oldIndex4, Il2CppIInspectable* ___baseInterface5, Il2CppIInspectable** ___innerInterface6, NotifyCollectionChangedEventArgs_t9239872 ** comReturnValue) = 0;
};
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t378659768 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t378659768, ___value___2)); }
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
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#ifndef TYPENAME_T4208425108_H
#define TYPENAME_T4208425108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t4208425108 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T4208425108_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#define PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t3818875368  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct IPropertyChangedEventHandler_t3818875368_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t3313059048 * ___e1) = 0;
};

#endif // PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t495045256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883;

public:
	inline INotifyCollectionChangedEventArgs_t951239883* get_____inotifyCollectionChangedEventArgs_t951239883()
	{
		INotifyCollectionChangedEventArgs_t951239883* returnValue = ____inotifyCollectionChangedEventArgs_t951239883;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(INotifyCollectionChangedEventArgs_t951239883::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INotifyCollectionChangedEventArgs_t951239883>((&____inotifyCollectionChangedEventArgs_t951239883), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inotifyCollectionChangedEventArgs_t951239883;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct NotifyCollectionChangedEventArgs_t495045256_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
	INotifyCollectionChangedEventArgsFactory_t1817199772* ____inotifyCollectionChangedEventArgsFactory_t1817199772;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INotifyCollectionChangedEventArgsFactory_t1817199772* get_____inotifyCollectionChangedEventArgsFactory_t1817199772()
	{
		INotifyCollectionChangedEventArgsFactory_t1817199772* returnValue = ____inotifyCollectionChangedEventArgsFactory_t1817199772;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INotifyCollectionChangedEventArgsFactory_t1817199772::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INotifyCollectionChangedEventArgsFactory_t1817199772>((&____inotifyCollectionChangedEventArgsFactory_t1817199772), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inotifyCollectionChangedEventArgsFactory_t1817199772;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t3129157931  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t3129157931_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1) = 0;
};

#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5500 = { 0, sizeof(IPropertyChangedEventArgs_t1404159462*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5501 = { 0, sizeof(IPropertyChangedEventArgsFactory_t4178285917*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5502 = { sizeof (PropertyChangedEventArgs_t1492749306), -1, sizeof(PropertyChangedEventArgs_t1492749306_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5503 = { sizeof (PropertyChangedEventHandler_t3818875368), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5504 = { 0, sizeof(IApplication_t1182322651*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5505 = { 0, sizeof(IApplication2_t3930884615*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5506 = { 0, sizeof(IApplication3_t3930884616*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5507 = { 0, sizeof(IApplicationFactory_t538383476*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5508 = { 0, sizeof(IApplicationOverrides_t3552632327*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5509 = { 0, sizeof(IApplicationOverrides2_t3551452679*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5510 = { 0, sizeof(IApplicationStatics_t3594174357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5511 = { 0, sizeof(IDependencyObject_t3468341335*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5512 = { 0, sizeof(IDependencyObject2_t3465326679*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5513 = { 0, sizeof(IDependencyObjectFactory_t1390337327*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5514 = { 0, sizeof(IFrameworkElement_t1727772090*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5515 = { 0, sizeof(IFrameworkElement2_t1731048890*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5516 = { 0, sizeof(IFrameworkElement3_t1731114426*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5517 = { 0, sizeof(IFrameworkElement4_t1730655674*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5518 = { 0, sizeof(IFrameworkElement6_t1730786746*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5519 = { 0, sizeof(IFrameworkElement7_t1730852282*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5520 = { 0, sizeof(IFrameworkElementFactory_t2131831971*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5521 = { 0, sizeof(IFrameworkElementOverrides_t1842747390*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5522 = { 0, sizeof(IFrameworkElementOverrides2_t2903822428*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5523 = { 0, sizeof(IFrameworkElementProtected7_t2089190057*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5524 = { 0, sizeof(IFrameworkElementStatics_t685079279*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5525 = { 0, sizeof(IFrameworkElementStatics2_t2563243859*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5526 = { 0, sizeof(IFrameworkElementStatics4_t2563243865*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5527 = { 0, sizeof(IFrameworkElementStatics5_t2563243864*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5528 = { 0, sizeof(IFrameworkElementStatics6_t2563243863*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5529 = { 0, sizeof(IUIElement_t3288794271*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5530 = { 0, sizeof(IUIElement10_t588432872*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5531 = { 0, sizeof(IUIElement2_t1568362829*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5532 = { 0, sizeof(IUIElement3_t3134446770*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5533 = { 0, sizeof(IUIElement4_t761793775*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5534 = { 0, sizeof(IUIElement5_t2327877716*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5535 = { 0, sizeof(IUIElement7_t1165078302*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5536 = { 0, sizeof(IUIElement8_t2374931883*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5537 = { 0, sizeof(IUIElement9_t3941015824*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5538 = { 0, sizeof(IUIElementFactory_t520894359*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5539 = { 0, sizeof(IUIElementOverrides_t2453769578*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5540 = { 0, sizeof(IUIElementOverrides7_t2026802538*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5541 = { 0, sizeof(IUIElementOverrides8_t3983117674*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5542 = { 0, sizeof(IUIElementOverrides9_t1644465514*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5543 = { 0, sizeof(IUIElementStatics_t2851391452*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5544 = { 0, sizeof(IUIElementStatics10_t1528525195*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5545 = { 0, sizeof(IUIElementStatics2_t2850211804*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5546 = { 0, sizeof(IUIElementStatics3_t2850277340*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5547 = { 0, sizeof(IUIElementStatics4_t2850080732*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5548 = { 0, sizeof(IUIElementStatics5_t2850146268*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5549 = { 0, sizeof(IUIElementStatics6_t2849949660*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5550 = { 0, sizeof(IUIElementStatics7_t2850015196*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5551 = { 0, sizeof(IUIElementStatics8_t2849818588*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5552 = { 0, sizeof(IUIElementStatics9_t2849884124*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5553 = { 0, sizeof(IWindow_t1812628404*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5554 = { 0, sizeof(IWindow2_t194020276*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5555 = { 0, sizeof(IWindow3_t2532672436*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5556 = { 0, sizeof(IWindow4_t4106650548*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5557 = { 0, sizeof(IWindowStatics_t4212309588*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5558 = { 0, sizeof(IBindableIterable_t2147255965*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5559 = { 0, sizeof(IBindableIterator_t667386168*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5560 = { 0, sizeof(IBindableVector_t1801110279*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5561 = { 0, sizeof(IBindableVectorView_t4191940899*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5562 = { 0, sizeof(INotifyCollectionChanged_t3244377239*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5563 = { 0, sizeof(INotifyCollectionChangedEventArgs_t951239883*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5564 = { 0, sizeof(INotifyCollectionChangedEventArgsFactory_t1817199772*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5565 = { sizeof (NotifyCollectionChangedAction_t378659768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5565[6] = 
{
	NotifyCollectionChangedAction_t378659768::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5566 = { sizeof (NotifyCollectionChangedEventArgs_t495045256), -1, sizeof(NotifyCollectionChangedEventArgs_t495045256_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5567 = { sizeof (NotifyCollectionChangedEventHandler_t3129157931), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5568 = { sizeof (TypeKind_t2273581760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5568[4] = 
{
	TypeKind_t2273581760::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5569 = { sizeof (TypeName_t4208425108)+ sizeof (RuntimeObject), sizeof(TypeName_t4208425108_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5569[2] = 
{
	TypeName_t4208425108::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypeName_t4208425108::get_offset_of_Kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5570 = { sizeof (ContentPropertyAttribute_t1871920044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5570[1] = 
{
	ContentPropertyAttribute_t1871920044::get_offset_of_Name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5571 = { sizeof (Window_t610934964), -1, sizeof(Window_t610934964_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5572 = { sizeof (U3CModuleU3E_t692745568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5573 = { sizeof (Point_t4164953539)+ sizeof (RuntimeObject), sizeof(Point_t4164953539 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5573[2] = 
{
	Point_t4164953539::get_offset_of__x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Point_t4164953539::get_offset_of__y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5574 = { sizeof (Rect_t2695113487)+ sizeof (RuntimeObject), sizeof(Rect_t2695113487 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5574[4] = 
{
	Rect_t2695113487::get_offset_of__x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113487::get_offset_of__y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113487::get_offset_of__width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113487::get_offset_of__height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5575 = { sizeof (Size_t550917638)+ sizeof (RuntimeObject), sizeof(Size_t550917638 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5575[2] = 
{
	Size_t550917638::get_offset_of__width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Size_t550917638::get_offset_of__height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5576 = { sizeof (TokenizerHelper_t3391915057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5577 = { sizeof (VoidValueTypeParameter_t130952355)+ sizeof (RuntimeObject), sizeof(VoidValueTypeParameter_t130952355 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5578 = { sizeof (VoidReferenceTypeParameter_t1476249554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5579 = { sizeof (WindowsRuntimeSystemExtensions_t757232145), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5580 = { sizeof (U3CU3Ec_t2427350286), -1, sizeof(U3CU3Ec_t2427350286_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5580[3] = 
{
	U3CU3Ec_t2427350286_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t2427350286_StaticFields::get_offset_of_U3CU3E9__0_0_1(),
	U3CU3Ec_t2427350286_StaticFields::get_offset_of_U3CU3E9__0_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5581 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5581[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5582 = { sizeof (AsyncInfoIdGenerator_t957218259), -1, sizeof(AsyncInfoIdGenerator_t957218259_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5582[1] = 
{
	AsyncInfoIdGenerator_t957218259_StaticFields::get_offset_of_s_idGenerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5583 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5583[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5584 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5584[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5585 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5585[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5586 = { sizeof (ExceptionDispatchHelper_t757867092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5587 = { sizeof (U3CU3Ec_t3914568053), -1, sizeof(U3CU3Ec_t3914568053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5587[3] = 
{
	U3CU3Ec_t3914568053_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3914568053_StaticFields::get_offset_of_U3CU3E9__0_0_1(),
	U3CU3Ec_t3914568053_StaticFields::get_offset_of_U3CU3E9__0_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5588 = { sizeof (TaskToAsyncActionAdapter_t900468660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5589 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5589[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5590 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5590[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5591 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5592 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5593 = { 0, sizeof(IAgileObject_t981452505*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5594 = { 0, sizeof(IMarshal_t3913494478*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5595 = { sizeof (AsyncInfo_t1262122865), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5596 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5596[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5597 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5597[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5598 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5598[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5599 = { 0, sizeof(IBufferByteAccess_t4245463285*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
